#include <OOC/SSA/WriteC.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_SSA_WriteC__Visitor OOC_SSA_WriteC__NewVisitor(void) {
  register OOC_INT32 i0,i1;
  OOC_SSA_WriteC__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Visitor.baseTypes[0]);
  v = (OOC_SSA_WriteC__Visitor)i0;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3121)) = 0;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 3153))+4) = i1;
  return (OOC_SSA_WriteC__Visitor)i0;
  ;
}

void OOC_SSA_WriteC__VisitorDesc_VisitProcedure(OOC_SSA_WriteC__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3333))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3302)) = i2;
  OOC_IR_VisitAll__VisitorDesc_VisitProcedure((OOC_IR_VisitAll__Visitor)i0, (OOC_IR__Procedure)i1);
  *(OOC_INT32*)(_check_pointer(i0, 3382)) = 0;
  return;
  ;
}

void OOC_SSA_WriteC__VisitorDesc_VisitVar(OOC_SSA_WriteC__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__ProcDecl proc;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3533))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3533))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3539)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i2);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3570));
  i3 = i1!=i3;
  if (!i3) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3602))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3628))+8);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
l4:
  return;
  ;
}

static OOC_INT8 OOC_SSA_WriteC__SubclassToBasicType(OOC_SSA__Result res) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)res;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 3797))+5);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4109)))), OOC_C_DeclWriter__WriterDesc_CopyTo)),OOC_C_DeclWriter__WriterDesc_CopyTo)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Writer)i0);
  i1 = (OOC_INT32)procBlock;
  *(OOC_INT32*)((_check_pointer(i0, 4128))+104) = i1;
  i1 = (OOC_INT32)registerMap;
  *(OOC_INT32*)((_check_pointer(i0, 4159))+96) = i1;
  i1 = (OOC_INT32)jmpbufMap;
  *(OOC_INT32*)((_check_pointer(i0, 4194))+100) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 4230))+108) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__SwapArray.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 4252))+112) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4281))+116) = 0;
  i1 = (OOC_INT32)translator;
  *(OOC_INT32*)((_check_pointer(i0, 4309))+92) = i1;
  return (OOC_SSA_WriteC__Writer)i0;
  ;
}

void OOC_SSA_WriteC__WriterDesc_ClearSwapData(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)((_check_pointer(i0, 4418))+112) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4447))+116) = 0;
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_AddSwapData(OOC_SSA_WriteC__Writer w, Object__String source, Object__String dest, OOC_INT8 ctype) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SSA_WriteC__SwapArray _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)dest;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4680)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  i2 = !i2;
  if (!i2) goto l14;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4772))+108);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 4746))+112);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4783)), 0);
  i3 = i4==i3;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4816))+108);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4827)), 0);
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__SwapArray.baseTypes[0], (i3*2));
  _new = (OOC_SSA_WriteC__SwapArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4862))+108);
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4873)), 0);
  i5 = 0<i4;
  if (!i5) goto l12;
  i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4902))+108);
  i6 = _check_pointer(i6, 4913);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i3, 4894);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  _copy_block((i6+((_check_index(i5, i7, OOC_UINT32, 4913))*16)),(i8+((_check_index(i5, i9, OOC_UINT32, 4894))*16)),16);
  i5 = i5+1;
  i = i5;
  i6 = i5<i4;
  if (i6) goto l7_loop;
l12:
  *(OOC_INT32*)((_check_pointer(i2, 4939))+108) = i3;
l13:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4976))+108);
  i3 = _check_pointer(i3, 4987);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 4989))+112);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i4, i5, OOC_UINT32, 4987))*16)) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5034))+108);
  i0 = _check_pointer(i0, 5045);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 5047))+112);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(i3, i4, OOC_UINT32, 5045))*16))+4) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5088))+108);
  i0 = _check_pointer(i0, 5099);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 5101))+112);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = ctype;
  *(OOC_INT8*)((i0+((_check_index(i1, i3, OOC_UINT32, 5099))*16))+12) = i4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5144))+108);
  i0 = _check_pointer(i0, 5155);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 5157))+112);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 5155))*16))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 5205))+112);
  *(OOC_INT32*)((_check_pointer(i2, 5205))+112) = (i0+1);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5350))+112);
  i2 = 0<i1;
  if (!i2) goto l21;
  i2=0;
l3_loop:
  c = 0;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5408))+112);
  j = 0;
  i4 = 0<i3;
  if (i4) goto l6;
  i3=0;
  goto l16;
l6:
  i4=0;i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5443))+108);
  i6 = _check_pointer(i6, 5454);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i4, i7, OOC_UINT32, 5454))*16));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5443))+108);
  i7 = _check_pointer(i7, 5454);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5475))+108);
  i9 = _check_pointer(i9, 5486);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)((i9+((_check_index(i2, i10, OOC_UINT32, 5486))*16))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+((_check_index(i4, i8, OOC_UINT32, 5454))*16));
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5465)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i7, (Object__Object)i9);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5551))+108);
  i4 = _check_pointer(i4, 5562);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 5562))*16))+8) = i3;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5712))+108);
  i1 = _check_pointer(i1, 5723);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 5723))*16))+8);
  _assert((i1==0), 127, 5703);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5763))+112);
  j = 0;
  i2 = 0<i1;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5796))+108);
  i4 = _check_pointer(i4, 5807);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 5807))*16))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5796))+108);
  i5 = _check_pointer(i5, 5807);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5826))+108);
  i7 = _check_pointer(i7, 5837);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 5807))*16))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i7+((_check_index(i3, i8, OOC_UINT32, 5837))*16));
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5816)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i5, (Object__Object)i6);
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5869))+108);
  i4 = _check_pointer(i4, 5880);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5869))+108);
  i6 = _check_pointer(i6, 5880);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)((i6+((_check_index(i2, i7, OOC_UINT32, 5880))*16))+8);
  *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 5880))*16))+8) = (i6-1);
l6:
  i2 = i2+1;
  j = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5940))+108);
  i1 = _check_pointer(i1, 5951);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5953))+112);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5921))+108);
  i5 = _check_pointer(i5, 5932);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  _copy_block((i1+((_check_index((i2-1), i4, OOC_UINT32, 5951))*16)),(i5+((_check_index(i3, i6, OOC_UINT32, 5932))*16)),16);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5985))+112);
  *(OOC_INT32*)((_check_pointer(i0, 5985))+112) = (i1-1);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar(OOC_SSA_WriteC__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_CHAR8 str[16];
  Object__String h;
  OOC_INT32 j;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6168))+108);
  i1 = _check_pointer(i1, 6179);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6179))*16))+8);
  _assert((i1!=0), 127, 6159);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6222))+116);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 16);
  Strings__Insert("h", 2, 0, (void*)(OOC_INT32)str, 16);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
  h = (Object__String)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6322))+116);
  *(OOC_INT32*)((_check_pointer(i0, 6322))+116) = (i2+1);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6365))+112);
  j = 0;
  i4 = 0<i2;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6398))+108);
  i5 = _check_pointer(i5, 6409);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 6409))*16));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6398))+108);
  i6 = _check_pointer(i6, 6409);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6430))+108);
  i8 = _check_pointer(i8, 6441);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 6441))*16))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i4, i7, OOC_UINT32, 6409))*16));
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6420)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i6, (Object__Object)i8);
  if (!i5) goto l6;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6466))+108);
  i5 = _check_pointer(i5, 6477);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 6477))*16)) = i1;
l6:
  i4 = i4+1;
  j = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6520))+108);
  i2 = _check_pointer(i2, 6531);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 6531))*16))+8) = 0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6558)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "{register ", 11);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6646))+108);
  i2 = _check_pointer(i2, 6657);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT8*)((i2+((_check_index(i3, i4, OOC_UINT32, 6657))*16))+12);
  i2 = OOC_SSA_Allocator__RegisterType(i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 6609))+24)+(_check_index(i2, 17, OOC_UINT8, 6620))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6593)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 6669))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6683)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6709)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6733)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 61u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6773))+108);
  i1 = _check_pointer(i1, 6784);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6784))*16))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6757)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6801)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 59u);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_FixupHelperVars(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6906))+116);
  i1 = i1!=0;
  if (!i1) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6938)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 125u);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6969))+116);
  *(OOC_INT32*)((_check_pointer(i0, 6969))+116) = (i1-1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6906))+116);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7249))+12);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l24;
  i2=(OOC_INT32)0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7308))+28);
  next = (OOC_SSA__Instr)i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 7336))+36);
  switch (i4) {
  case 55:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7386))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7396));
    i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7402)))), &_td_OOC_SSA__AddressDesc);
    if (!i4) goto l8;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7780))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7790));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7721))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7800)))), &_td_OOC_SSA__AddressDesc, 7800)), 7808))+44);
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
    i4 = *(OOC_INT8*)((_check_pointer(i1, 8162))+5);
    i4 = OOC_SSA_Allocator__SubclassToBasicType(i4);
    i4 = OOC_SSA_Allocator__RegisterType(i4);
    regDest = i4;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8267))+24);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 8276));
    i5 = *(OOC_INT8*)((_check_pointer(i5, 8280))+5);
    i5 = OOC_SSA_Allocator__SubclassToBasicType(i5);
    i5 = OOC_SSA_Allocator__RegisterType(i5);
    regSource = i5;
    i4 = i4==i5;
    if (!i4) goto l17;
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8353));
    _assert((i4==(OOC_INT32)0), 127, 8341);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8406))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 8415));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8763)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 40u);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 8805))+24)+(_check_index(i1, 17, OOC_UINT8, 8816))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8789)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 8823))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8839)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 41u);
l4:
  return;
  ;
}

static void OOC_SSA_WriteC__WriteTypeAndLength(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr, OOC_SymbolTable__VarDecl varDecl, OOC_CHAR8 inBytes) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9129)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",", 2);
  i1 = (OOC_INT32)varDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9165))+48);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9172)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9291))+48);
  OOC_SSA_WriteC__WriterDesc_TypeRef((OOC_SSA_WriteC__Writer)i0, (OOC_SymbolTable__Type)i1);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9214))+48);
  i1 = (OOC_INT32)OOC_SymbolTable__ArrayDesc_GetInnermostElementType((OOC_SymbolTable__Array)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9224)))), &_td_OOC_SymbolTable__ArrayDesc, 9224)));
  OOC_SSA_WriteC__WriterDesc_TypeRef((OOC_SSA_WriteC__Writer)i0, (OOC_SymbolTable__Type)i1);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9313)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",", 2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9439)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9993)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l34;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10292))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5;
      i1=0u;
      goto l11;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10353))+4);
      i1 = i1!=5;
      if (i1) goto l8;
      i1=0u;
      goto l11;
l8:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10402))+4);
      i1 = i1!=7;
      
l11:
      if (!i1) goto l27;
l14_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10456))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17;
      i1=0u;
      goto l23;
l17:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10353))+4);
      i1 = i1!=5;
      if (i1) goto l20;
      i1=0u;
      goto l23;
l20:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10402))+4);
      i1 = i1!=7;
      
l23:
      if (i1) goto l14_loop;
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10497));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10503)))), &_td_OOC_SSA__DeclRefDesc);
      if (!i1) goto l33;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10549));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10559)))), &_td_OOC_SSA__DeclRefDesc, 10559)), 10567))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10578)))), &_td_OOC_SymbolTable__VarDeclDesc, 10578);
      varDecl = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10609)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10627))+20);
      i1 = i1==i2;
      if (!i1) goto l33;
      return (OOC_SymbolTable__VarDecl)i0;
l33:
      return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
      goto l43;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10073))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10080)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l37;
      i1=0u;
      goto l39;
l37:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10115))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10115))+44);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10126)))), &_td_OOC_SymbolTable__VarDeclDesc, 10126)), 10134)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10126)))), &_td_OOC_SymbolTable__VarDeclDesc, 10126)));
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10152))+20);
      i1 = i1==i2;
      
l39:
      if (i1) goto l41;
      return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
      goto l43;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10191))+44);
      return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10202)))), &_td_OOC_SymbolTable__VarDeclDesc, 10202));
l43:
      _failed_function(9863); return 0;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  declMap = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10810))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l40;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10865))+36);
  i1 = i1==12;
  if (i1) goto l6;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10906))+36);
  i1 = i1==13;
  
  goto l8;
l6:
  i1=1u;
l8:
  if (i1) goto l10;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10947))+36);
  i1 = i1==58;
  
  goto l12;
l10:
  i1=1u;
l12:
  if (i1) goto l14;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10998))+36);
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
  i2 = *(OOC_INT8*)((_check_pointer(i1, 11142))+36);
  i2 = i2==58;
  if (i2) goto l32;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11418))+56);
  i1 = !i1;
  if (!i1) goto l35;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_ConvertDecl__GetDecl((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Declaration)i0);
  cDecl = (OOC_C_DeclWriter__Declaration)i2;
  i3 = _volatile;
  if (!i3) goto l30;
  OOC_C_DeclWriter__DeclarationDesc_SetTypeQualifier((OOC_C_DeclWriter__Declaration)i2, 2);
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11609)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11633)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11674)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
  i1 = (OOC_INT32)declMap;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
  goto l35;
l32:
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i2;
  i3 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11245)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11269)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "OOC_ALLOCATE_VPAR(", 19);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11320)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
  OOC_SSA_WriteC__WriteTypeAndLength((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Instr)i1, (OOC_SymbolTable__VarDecl)i0, 0u);
l35:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11789))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l40:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11998))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12008))+8);
  item = (OOC_SymbolTable__Item)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)declMap;
  
l43_loop:
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12064)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (!i5) goto l57;
  i5 = *(OOC_UINT8*)((_check_pointer(i1, 12097))+56);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12162))+32);
  i5 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i5, (Object__Object)i1);
  
l54:
  if (!i5) goto l57;
  i5 = (OOC_INT32)OOC_C_ConvertDecl__GetDecl((OOC_C_DeclWriter__Writer)i3, (OOC_SymbolTable__Declaration)i1);
  cDecl = (OOC_C_DeclWriter__Declaration)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12260)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12282)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i3, (OOC_C_DeclWriter__Declaration)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12321)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i3, 59u);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i4, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12470));
  item = (OOC_SymbolTable__Item)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l43_loop;
l62:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12614))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12624))+8);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l73;
  i1 = (OOC_INT32)declMap;
  i2 = (OOC_INT32)w;
  
l65_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12680)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (!i3) goto l68;
  i3 = (OOC_INT32)OOC_C_ConvertDecl__GetProc((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__ProcDecl)i0, 1u);
  cDecl = (OOC_C_DeclWriter__Declaration)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12761)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12781)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12818)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 59u);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
l68:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12952));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13069)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_ARRAY_LENGTH(", 18);
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13123))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13133))+8);
  OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13151)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13190))+24);
  OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13208)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13475)))), &_td_OOC_SSA__DeclRefDesc, 13475)), 13483))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13509))+24);
  i0 = OOC_SSA__OpndDesc_GetIntConst((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfLengthParam((OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13494)))), &_td_OOC_SymbolTable__VarDeclDesc, 13494)), i0);
  name = (Object__String)i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13542)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13832));
  arg = (OOC_SSA__Result)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13851)))), &_td_OOC_SSA__DeclRefDesc);
  if (i2) goto l50;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14364)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l40;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15095)))), &_td_OOC_SSA__AddressDesc);
  if (i2) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15693));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15698))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15717))+96);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15744));
  i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
  if (i3) goto l17;
  i0 = *(OOC_INT8*)((_check_pointer(i1, 16030))+36);
  i0 = i0==57;
  if (i0) goto l15;
  i0 = *(OOC_INT8*)((_check_pointer(i1, 16132))+36);
  i0 = i0==72;
  if (i0) goto l13;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16385)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "XXX undefined ref /*internal error*/", 37);
  goto l62;
l13:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16173)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "setjmp(_target", 15);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16221))+100);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
  obj = (Object__Object)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16253)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16281)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ")", 2);
  goto l62;
l15:
  OOC_SSA_WriteC__WriterDesc_LengthExprParam((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i1);
  goto l62;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15772))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15796));
  i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  obj = (Object__Object)i1;
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i3 = i1==i3;
  if (i3) goto l20;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15977)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
  goto l62;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15861)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15908));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15913))+8);
  OOC_SSA_WriteC__WriteExpr((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15934)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 41u);
  goto l62;
l23:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15155))+44);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i2 = (OOC_INT32)w;
  OOC_SSA_WriteC__WriteTypeCast((OOC_C_DeclWriter__Writer)i2, 1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15221))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15228)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15262))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15273)))), &_td_OOC_SymbolTable__VarDeclDesc, 15273)), 15281))+48);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15288)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l28:
  if (i3) goto l34;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15322))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15329)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l32;
  i1=0u;
  goto l35;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15362))+44);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15373)))), &_td_OOC_SymbolTable__VarDeclDesc, 15373)), 15381))+60);
  
  goto l35;
l34:
  i1=1u;
l35:
  i1 = !i1;
  if (!i1) goto l38;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15599)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 38u);
l38:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15636)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  goto l62;
l40:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14555))+44);
  i2 = (OOC_INT32)OOC_SSA__nil;
  i0 = i0==i2;
  if (i0) goto l47;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14875))+48);
  i0 = i0!=0;
  if (i0) goto l45;
  i0 = (OOC_INT32)w;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 15061))+5);
  i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14994))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14974)))), OOC_C_DeclWriter__WriterDesc_WriteBasicConst)),OOC_C_DeclWriter__WriterDesc_WriteBasicConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i1, i2);
  goto l62;
l45:
  i0 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14929))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14940))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14908)))), OOC_C_DeclWriter__WriterDesc_WriteStringConst)),OOC_C_DeclWriter__WriterDesc_WriteStringConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i2, (OOC_SymbolTable__Type)i1);
  goto l62;
l47:
  bt = 4;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14731)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
  i1 = bt;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 14777))+24)+(_check_index(i1, 17, OOC_UINT8, 14788))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14761)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 14792))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14810)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14840)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
  goto l62;
l50:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14015))+44);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14037))+44);
  i3 = (OOC_INT32)w;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14044)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l53;
  i2=0u;
  goto l55;
l53:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14074))+44);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14085)))), &_td_OOC_SymbolTable__VarDeclDesc, 14085)), 14093))+60);
  
l55:
  if (i2) goto l57;
  i1=0u;
  goto l59;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14130))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14141)))), &_td_OOC_SymbolTable__VarDeclDesc, 14141)), 14149))+48);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14156)))), &_td_OOC_SymbolTable__ArrayDesc));
  
l59:
  if (!i1) goto l61;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14295)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "*", 2);
l61:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14333)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16613)))), OOC_C_DeclWriter__WriterDesc_WriteType)),OOC_C_DeclWriter__WriterDesc_WriteType)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 16845))+36);
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
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17185))+24);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17221));
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
    i3 = *(OOC_INT8*)((_check_pointer(i0, 17305))+4);
    i3 = i3!=2;
    if (!i3) goto l20;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17356))+96);
    i3 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
    targetVar = (Object__Object)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17396))+96);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17423));
    i4 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i4, (Object__Object)i5);
    if (i4) goto l15;
    return 0u;
    goto l20;
l15:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17461))+96);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17485));
    i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i5);
    sourceVar = (Object__Object)i4;
    i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17518)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i4, (Object__Object)i3);
    i3 = !i3;
    if (!i3) goto l20;
    return 0u;
l20:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17766))+8);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17788));
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
  _failed_function(16673); return 0;
  ;
}

OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_EmptyBlock(OOC_SSA_WriteC__Writer w, OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Schedule__InstrProxy proxy;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18128)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
  if (i1) goto l3;
  return 0u;
  goto l15;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18168))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  
l6_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18236))+12);
  i2 = OOC_SSA_WriteC__WriterDesc_Noop((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i2);
  i2 = !i2;
  if (!i2) goto l9;
  return 0u;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18309));
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l14:
  return 1u;
l15:
  _failed_function(17911); return 0;
  ;
}

static void OOC_SSA_WriteC__CastToPtr(OOC_SSA_WriteC__Writer w, OOC_SSA__Result var, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT32 i0,i1,i2;
  Object__String name;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18570)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18593))+8);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 18600))+36);
  i2 = i2==61;
  if (i2) goto l41;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18688)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18723)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18761)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
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
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18873)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l23;
  i1=0u;
  goto l25;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18907)))), &_td_OOC_SSA__ConstDesc, 18907)), 18913))+44);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18921)))), &_td_Object_Boxed__StringDesc);
  
l25:
  if (i1) goto l42;
  i1 = passByReference;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19034))+24);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19207)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19237)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19268)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
  goto l42;
l37:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19118)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(void*)", 8);
  goto l42;
l41:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18639)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(RT0__Struct)", 14);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 19798))+36);
  switch (i1) {
  case 78:
    
    goto l5;
  case 77:
  case 76:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19941))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19950));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19954))+8);
    instr = (OOC_SSA__Instr)i0;
    
    goto l5;
  default:
    _failed_case(i1, 19788);
    
    goto l5;
  }
l5:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20003))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20012));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19983))+100);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20016))+8);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
  obj = (Object__Object)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20030)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_context", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20061)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
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
  auto void OOC_SSA_WriteC__WriteExpr_VTableProcAddress(OOC_SSA__Instr instr);
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
      i3 = *(OOC_INT8*)((_check_pointer(i0, 20471))+4);
      i3 = i3==i1;
      if (!i3) goto l13;
      i3 = i2!=0;
      if (!i3) goto l9;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20536)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l9:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20591)))), &_td_OOC_SSA__TypedOpndDesc);
      if (!i3) goto l12;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20683)))), &_td_OOC_SSA__TypedOpndDesc, 20683)), 20693))+20);
      i4 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20733)))), &_td_OOC_SSA__TypedOpndDesc, 20733)), 20743))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20644));
      i6 = (OOC_INT32)w;
      OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i6, (OOC_SSA__Result)i5, (OOC_SymbolTable__Type)i3, i4);
l12:
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i0);
      i2 = i2+1;
      count = i2;
      
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20858))+8);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20957)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20975)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_assert(", 9);
      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21024))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21034))+8);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21064)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21112))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21093)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21130)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CheckIndex(OOC_SSA__Instr checkIndex) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 bt;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21276)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_check_index(", 14);
      i0 = (OOC_INT32)checkIndex;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21334))+24);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21364)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)instr;
      i1 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
      i1 = i1+4;
      bt = i1;
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 21485))+24)+(_check_index(i1, 17, OOC_UINT8, 21496))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21469)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 21500))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21516)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21568))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21545)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21586)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CheckPointer(OOC_SSA__Instr checkPointer) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21696)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_check_pointer(", 16);
      i0 = (OOC_INT32)checkPointer;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21757))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21767))+8);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21787)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21841))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21816)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21859)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22099));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22109)))), &_td_OOC_SSA__TypeRefDesc, 22109)), 22117))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22147)))), &_td_OOC_SymbolTable__TypeClosureDesc);
      if (i2) goto l3;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22267)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_type_guard(", 13);
      goto l4;
l3:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22213)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_type_guard_q(", 15);
l4:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22334))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22344))+8);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i2, 1);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22374)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ", &", 4);
      i2 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22447))+92);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22458))+16);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1, (OOC_C_Naming__QualTypeData)i2);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22476)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22505)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 22556))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22534)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22574)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_FailedCheck(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d, OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(fct,OOC_CHAR8 ,fct_0d)

      OOC_INITIALIZE_VPAR(fct__ref,fct,OOC_CHAR8 ,fct_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22711)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22729)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)fct, fct_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22757)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
      i0 = (OOC_INT32)opnd;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22837)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
l4:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 22895))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22877)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22913)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Call(OOC_SSA__Instr call) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 _class;
      OOC_SSA__Instr adr;
      OOC_SymbolTable__Declaration decl;
      Object__String name;
      OOC_SymbolTable__FormalPars procType;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23162))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23172));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23177))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 23184))+36);
      _class = i1;
      i2 = i1==63;
      if (i2) goto l3;
      i1 = i1==87;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23697))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23707));
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23713)))), &_td_OOC_SSA__DeclRefDesc));
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24073))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      goto l12;
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23828))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23843)))), &_td_OOC_SSA__TypedOpndDesc, 23843)), 23853))+20);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23864)))), &_td_OOC_SymbolTable__FormalParsDesc, 23864);
      procType = (OOC_SymbolTable__FormalPars)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23886)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23914)))), OOC_C_DeclWriter__WriterDesc_WriteTypeCast)),OOC_C_DeclWriter__WriterDesc_WriteTypeCast)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24001))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24023)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
      goto l12;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23374))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23384));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23389))+8);
      adr = (OOC_SSA__Instr)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23417))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23427))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23437));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23442))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23454)))), &_td_OOC_SSA__DeclRefDesc, 23454)), 23462))+44);
      decl = (OOC_SymbolTable__Declaration)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23479)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "OOC_TBCALL(", 12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23530))+24);
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23552)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23629)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23660)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
l12:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24104)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24144))+24);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i0, 1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24174)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteDyadicOp(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(op,OOC_CHAR8 ,op_0d)

      OOC_INITIALIZE_VPAR(op__ref,op,OOC_CHAR8 ,op_0d)
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24305))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24325)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)(OOC_INT32)op, op_0d);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24364))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24374))+8);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24705))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 24714));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 24718))+5);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25028)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 25072))+24)+(_check_index(i1, 17, OOC_UINT8, 25083))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25056)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i3, 25089))+1), 32);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25107)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 41u);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25147))+24);
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25169)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)(OOC_INT32)op, op_0d);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25198)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 25242))+24)+(_check_index(i1, 17, OOC_UINT8, 25253))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25226)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 25259))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25277)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25317))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25327))+8);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25507)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)fct, fct_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25535)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 40u);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25573))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25593)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25631))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25641))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25661)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25800)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)op, op_0d);
      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25839))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25859)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CastFromPtr(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)res;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 25976))+5);
      i0 = i0==9;
      if (!i0) goto l4;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26021)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 26067))+24)+(_check_index(i1, 17, OOC_UINT8, 26078))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26051)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 26107))+1), 32);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26125)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26317)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "RT0__NewObject(", 16);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 12);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26446));
      i2 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26516))+92);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26456)))), &_td_OOC_SSA__TypeRefDesc, 26456)), 26464))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26527))+16);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1, (OOC_C_Naming__QualTypeData)i2);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26545)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26574)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ".baseTypes[0]", 14);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26626))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 26670))+4);
      i1 = i1==1;
      
l5:
      if (!i1) goto l16;
l7_loop:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26702)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26767))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 26670))+4);
      i1 = i1==1;
      
l12:
      if (i1) goto l7_loop;
l16:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26797)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_NewBlock(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26955)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "RT0__NewBlock(", 15);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 1);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27063)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeCast(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 destType;
      OOC_INT8 sourceType;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = *(OOC_INT8*)((_check_pointer(i0, 27290))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      destType = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27359))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 27369));
      i2 = *(OOC_INT8*)((_check_pointer(i2, 27374))+5);
      i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
      sourceType = i2;
      i3 = OOC_SSA_Opcode__ConvDiffersFromCast(i2, i1);
      if (i3) goto l3;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27511)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_type_cast_fast(", 17);
      goto l4;
l3:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27460)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_type_cast(", 12);
l4:
      i3 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i3, 27581))+24)+(_check_index(i1, 17, OOC_UINT8, 27592))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27565)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, (void*)((_check_pointer(i1, 27602))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27618)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 27663))+24)+(_check_index(i2, 17, OOC_UINT8, 27674))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27647)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 27686))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27702)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27743))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27763)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeConv(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 destType;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 27949))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      destType = i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27969)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(", 2);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 28013))+24)+(_check_index(i1, 17, OOC_UINT8, 28024))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27997)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 28034))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28050)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28090))+24);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28242))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28252));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28258)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28426))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28436));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28442)))), &_td_OOC_SSA__TypeRefDesc);
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28691)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_TYPE_TAG(", 14);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28745))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28767)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 41u);
      goto l8;
l5:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28472)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 38u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28540))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28549));
      i1 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28618))+92);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28558)))), &_td_OOC_SSA__TypeRefDesc, 28558)), 28566))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28629))+16);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i1);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28649)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      goto l8;
l7:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28327))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28337));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28347)))), &_td_OOC_SSA__DeclRefDesc, 28347)), 28355))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeTagParam((OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28366)))), &_td_OOC_SymbolTable__VarDeclDesc, 28366)));
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28386)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28959))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28969))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28999));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29009)))), &_td_OOC_SSA__TypeRefDesc, 29009)), 29017))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29041)))), &_td_OOC_SymbolTable__TypeClosureDesc);
      if (i2) goto l3;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29168)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "OOC_TYPE_TEST(", 15);
      goto l4;
l3:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29107)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "RT0__TypeTest((OOC_PTR)", 24);
l4:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29230))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29250)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", &", 4);
      i0 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29323))+92);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29334))+16);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1, (OOC_C_Naming__QualTypeData)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29352)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29381)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TBProcAddress(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29539)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_TBPROC_ADR(", 16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29593))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29613)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29680))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29690))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29700));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29710)))), &_td_OOC_SSA__DeclRefDesc, 29710)), 29718))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29734)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29763)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_VTableProcAddress(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29931)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_VTABLEPROC_ADR(", 20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29989))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30009)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30076))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30086))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30096));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30106)))), &_td_OOC_SSA__DeclRefDesc, 30106)), 30114))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30130)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30159)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CopyParameter(OOC_SSA__Address instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__VarDecl varDecl;
      Object__String name;

      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30346))+44);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30357)))), &_td_OOC_SymbolTable__VarDeclDesc, 30357);
      varDecl = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
      name = (Object__String)i2;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30431)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30449)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "OOC_INITIALIZE_VPAR(", 21);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30496)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30525)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "__ref,", 7);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30577)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriteTypeAndLength((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i0, (OOC_SymbolTable__VarDecl)i1, 1u);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Copy(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30760)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30790))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30800))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30810));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30820)))), &_td_OOC_SSA__TypeRefDesc, 30820)), 30828))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30843)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_copy_block(", 13);
      i2 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30933)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 6);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31011)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 44u);
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 31054))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31037)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31073)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    OOC_INT32 OOC_SSA_WriteC__WriteExpr_TypeId(OOC_SSA__Result res) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31189)))), &_td_OOC_SSA__TypeRefDesc, 31189)), 31197))+44);
      i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31208)))), &_td_OOC_SymbolTable__PredefTypeDesc, 31208)), 31219))+40);
      return i0;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CopyString(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 source;
      OOC_INT32 dest;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31341)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31962)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_32(", 10);
      goto l18;
l5:
      switch (i2) {
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31779)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_16(", 10);
        goto l18;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31836)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_16to32(", 14);
        goto l18;
      default:
        _failed_case(i2, 31738);
        goto l18;
      }
l12:
      switch (i2) {
      case 1:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31525)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8(", 9);
        goto l18;
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31581)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8to16(", 13);
        goto l18;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31641)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8to32(", 13);
        goto l18;
      default:
        _failed_case(i2, 31484);
        goto l18;
      }
l18:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32009)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(const void*)", 14);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32100)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ",(void*)", 9);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 6);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32187)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 1);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32260)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CmpString(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32363)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_NthArg((OOC_SSA__Instr)i0, 1);
      i1 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i1);
      switch (i1) {
      case 1:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32438)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp8((const void*)", 20);
        goto l6;
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32501)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp16((const void*)", 21);
        goto l6;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32565)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp32((const void*)", 21);
        goto l6;
      default:
        _failed_case(i1, 32380);
        goto l6;
      }
l6:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32692)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",(const void*)", 15);
l7_loop:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32815))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 32844))+4);
      i1 = i1==4;
      if (!i1) goto l7_loop;
l11:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32897)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Concat(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33050)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Object__Concat2(", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33120))+24);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l11;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33183))+24);
      i2 = i1!=i2;
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33210)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ",", 2);
l6:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33252)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(void*)", 8);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33319))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33348)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_MoveBlock(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33446)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33464)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_move_block(", 13);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33554)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 6);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33632)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 1);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33705)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Shift(OOC_SSA__Instr instr, OOC_CHAR8 rotate) {
      register OOC_INT32 i0,i1,i2;

      i0 = rotate;
      if (i0) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33888)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_lsh(", 6);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33843)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_rot(", 6);
l4:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 33995))+5);
      i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 33947))+24)+(_check_index(i2, 17, OOC_UINT8, 33958))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33931)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 34007))+1), 32);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34023)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34064))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34084)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34125))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34135))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34155)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Indexed(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34261))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34281)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 43u);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34319))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34329))+8);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34349)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 42u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34387))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34397))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34407))+8);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 34653));
      adr = (OOC_SSA__Result)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34680))+8);
      design = (OOC_SSA__Opnd)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34706)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l3;
      i0=0u;
      goto l9;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34741))+8);
      i1 = i1==0;
      if (i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34779))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 34789))+4);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 34805))+4);
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
      _failed_function(34452); return 0;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_PreloadedVar(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 id;
      OOC_C_DeclWriter__Writer wd;

      i0 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35172))+92);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35183))+36);
      i1 = (OOC_INT32)instr;
      i0 = OOC_SSA_WriteC__GetPreloadId((ADT_Dictionary_IntValue__Dictionary)i0, (OOC_SSA__Instr)i1);
      id = i0;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35240)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_c", 3);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35279))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35279))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35290)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
      i1 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35323))+92);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35334))+4);
      wd = (OOC_C_DeclWriter__Writer)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35347)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "static void* _c", 16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35403))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35403))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35414)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i3, i0, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35441)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35468)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      return;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 35525))+36);
  switch (i1) {
  case 12:
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    i0 = (OOC_INT32)instr;
    i0 = OOC_SSA_WriteC__WriteExpr_SimpleVarAccess((OOC_SSA__Instr)i0, 4);
    if (i0) goto l5;
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35709)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*(", 3);
    i1 = (OOC_INT32)instr;
    i2 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
    i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 35756))+24)+(_check_index(i2, 17, OOC_UINT8, 35792))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35740)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 35821))+1), 32);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35839)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*)", 3);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35882))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35892))+8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
    goto l82;
l5:
    i0 = (OOC_INT32)instr;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
    i1 = (OOC_INT32)w;
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    goto l82;
  case 13:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35948)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    i0 = OOC_SSA_WriteC__WriteExpr_SimpleVarAccess((OOC_SSA__Instr)i0, 6);
    if (i0) goto l10;
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36253)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*(", 3);
    i1 = (OOC_INT32)instr;
    i2 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
    i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 36300))+24)+(_check_index(i2, 17, OOC_UINT8, 36336))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36284)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 36365))+1), 32);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36383)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*)", 3);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36426))+24);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36436))+8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36458)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " = ", 4);
    
    goto l11;
l10:
    i0 = (OOC_INT32)instr;
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 7);
    i2 = (OOC_INT32)w;
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 7);
    var = (OOC_SSA__Result)i1;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36132)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, " = ", 4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36190)))), &_td_OOC_SSA__DeclRefDesc, 36190)), 36198))+44);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 36209)))), &_td_OOC_SymbolTable__VarDeclDesc, 36209)), 36217))+48);
    OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Result)i1, (OOC_SymbolTable__Type)i3, 0u);
    i1=i0;i0=i2;
l11:
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
    goto l82;
  case 14:
    OOC_SSA_WriteC__WriteExpr_Copy((OOC_SSA__Instr)i0);
    goto l82;
  case 15:
    OOC_SSA_WriteC__WriteExpr_CopyString((OOC_SSA__Instr)i0);
    goto l82;
  case 16:
    OOC_SSA_WriteC__WriteExpr_CmpString((OOC_SSA__Instr)i0);
    goto l82;
  case 17:
    OOC_SSA_WriteC__WriteExpr_Concat((OOC_SSA__Instr)i0);
    goto l82;
  case 18:
    OOC_SSA_WriteC__WriteExpr_MoveBlock((OOC_SSA__Instr)i0);
    goto l82;
  case 56:
    i1 = (OOC_INT32)w;
    OOC_SSA_WriteC__WriterDesc_LengthExprHeap((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    goto l82;
  case 57:
    goto l82;
  case 58:
    OOC_SSA_WriteC__WriteExpr_CopyParameter((OOC_SSA__Address)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37017)))), &_td_OOC_SSA__AddressDesc, 37017)));
    goto l82;
  case 59:
    OOC_SSA_WriteC__WriteExpr_NewObject((OOC_SSA__Instr)i0);
    goto l82;
  case 60:
    OOC_SSA_WriteC__WriteExpr_NewBlock((OOC_SSA__Instr)i0);
    goto l82;
  case 61:
    OOC_SSA_WriteC__WriteExpr_TypeTag((OOC_SSA__Instr)i0);
    goto l82;
  case 62:
    OOC_SSA_WriteC__WriteExpr_TypeTest((OOC_SSA__Instr)i0);
    goto l82;
  case 63:
    OOC_SSA_WriteC__WriteExpr_TBProcAddress((OOC_SSA__Instr)i0);
    goto l82;
  case 87:
    OOC_SSA_WriteC__WriteExpr_VTableProcAddress((OOC_SSA__Instr)i0);
    goto l82;
  case 41:
    OOC_SSA_WriteC__WriteExpr_TypeCast((OOC_SSA__Instr)i0);
    goto l82;
  case 42:
    OOC_SSA_WriteC__WriteExpr_TypeConv((OOC_SSA__Instr)i0);
    goto l82;
  case 19:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "+", 2);
    goto l82;
  case 20:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "-", 2);
    goto l82;
  case 21:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "-", 2, "", 1);
    goto l82;
  case 22:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "*", 2);
    goto l82;
  case 23:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 37708))+5);
    i1 = i1<5;
    if (i1) goto l35;
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "/", 2);
    goto l82;
l35:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_div", 5);
    goto l82;
  case 24:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_mod", 5);
    goto l82;
  case 31:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "&&", 3);
    goto l82;
  case 32:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "||", 3);
    goto l82;
  case 33:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "!", 2, "", 1);
    goto l82;
  case 34:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "&", 2);
    goto l82;
  case 35:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "|", 2);
    goto l82;
  case 36:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "^", 2);
    goto l82;
  case 38:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_logical_subtr", 15);
    goto l82;
  case 37:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "~", 2, "", 1);
    goto l82;
  case 39:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_set_bit", 9);
    goto l82;
  case 40:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_clear_bit", 11);
    goto l82;
  case 43:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_in", 4);
    goto l82;
  case 44:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_bit_range", 11);
    goto l82;
  case 45:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_abs(", 6, ")", 2);
    goto l82;
  case 46:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "<<", 3);
    goto l82;
  case 47:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, ">>", 3);
    goto l82;
  case 48:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_ash", 5);
    goto l82;
  case 49:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_cap(", 6, ")", 2);
    goto l82;
  case 50:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_entier(", 9, ")", 2);
    goto l82;
  case 51:
    OOC_SSA_WriteC__WriteExpr_Indexed((OOC_SSA__Instr)i0);
    goto l82;
  case 52:
    OOC_SSA_WriteC__WriteExpr_Shift((OOC_SSA__Instr)i0, 0u);
    goto l82;
  case 53:
    OOC_SSA_WriteC__WriteExpr_Shift((OOC_SSA__Instr)i0, 1u);
    goto l82;
  case 54:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_odd(", 6, ")", 2);
    goto l82;
  case 25:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "==", 3);
    goto l82;
  case 26:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "!=", 3);
    goto l82;
  case 27:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, "<", 2);
    goto l82;
  case 28:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, "<=", 3);
    goto l82;
  case 29:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, ">", 2);
    goto l82;
  case 30:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, ">=", 3);
    goto l82;
  case 64:
    OOC_SSA_WriteC__WriteExpr_Assert((OOC_SSA__Instr)i0);
    goto l82;
  case 65:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39627)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39645)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_halt(", 7);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39690))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39700))+8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39720)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
    goto l82;
  case 66:
    OOC_SSA_WriteC__WriteExpr_CheckIndex((OOC_SSA__Instr)i0);
    goto l82;
  case 67:
    OOC_SSA_WriteC__WriteExpr_CheckPointer((OOC_SSA__Instr)i0);
    goto l82;
  case 68:
    OOC_SSA_WriteC__WriteExpr_TypeGuard((OOC_SSA__Instr)i0);
    goto l82;
  case 69:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39967))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39977))+8);
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_case", 13, (OOC_SSA__Opnd)i1);
    goto l82;
  case 70:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40062))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40072))+8);
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_with", 13, (OOC_SSA__Opnd)i1);
    goto l82;
  case 71:
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_type_assert", 20, (OOC_SSA__Opnd)(OOC_INT32)0);
    goto l82;
  case 55:
    i1 = (OOC_INT32)w;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40208))+96);
    i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
    i2 = !i2;
    if (i2) goto l77;
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    goto l78;
l77:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40252)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
l78:
    i0 = (OOC_INT32)instr;
    OOC_SSA_WriteC__WriteExpr_Call((OOC_SSA__Instr)i0);
    goto l82;
  case 76:
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40399)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "Exception__Current()", 21);
    goto l82;
  case 81:
    OOC_SSA_WriteC__WriteExpr_PreloadedVar((OOC_SSA__Instr)i0);
    goto l82;
  default:
    _failed_case(i1, 35515);
    goto l82;
  }
l82:
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40964)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_ClearSwapData((OOC_SSA_WriteC__Writer)i0);
      i0 = (OOC_INT32)collect;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41140))+24);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = (OOC_INT32)targetInstr;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 41176));
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
      i4 = *(OOC_INT8*)((_check_pointer(i1, 41260))+4);
      i4 = i4!=2;
      if (!i4) goto l13;
      i4 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 41311))+96);
      i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
      targetVar = (Object__Object)i4;
      i5 = (OOC_INT32)w;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 41351))+96);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 41378));
      i5 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i5, (Object__Object)i6);
      if (!i5) goto l13;
      i5 = (OOC_INT32)w;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 41416))+96);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 41440));
      i5 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i5, (Object__Object)i6);
      sourceVar = (Object__Object)i5;
      i6 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i3);
      i7 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_AddSwapData((OOC_SSA_WriteC__Writer)i7, (Object__String)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 41486)))), &_td_Object__StringDesc, 41486)), (Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 41533)))), &_td_Object__StringDesc, 41533)), i6);
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41645))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 41667));
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
      i1 = *(OOC_INT32*)((_check_pointer(i1, 41857))+112);
      i1 = i1!=0;
      if (!i1) goto l51;
l25_loop:
      i = 0;
      i1 = (OOC_INT32)w;
      i3 = *(OOC_INT32*)((_check_pointer(i1, 41919))+112);
      i3 = 0!=i3;
      if (i3) goto l28;
      i3=0u;
      goto l30;
l28:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41942))+108);
      i3 = _check_pointer(i3, 41953);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_INT32*)((i3+((_check_index(0, i4, OOC_UINT32, 41953))*16))+8);
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
      i4 = *(OOC_INT32*)((_check_pointer(i1, 41919))+112);
      i4 = i3!=i4;
      if (i4) goto l36;
      i4=0u;
      goto l38;
l36:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41942))+108);
      i4 = _check_pointer(i4, 41953);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 41953))*16))+8);
      i4 = i4!=0;
      
l38:
      if (i4) goto l33_loop;
l42:
      i4 = *(OOC_INT32*)((_check_pointer(i1, 42025))+112);
      i4 = i3==i4;
      if (i4) goto l45;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42184))+108);
      i4 = _check_pointer(i4, 42195);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 42195))*16))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42168)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42218)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "=", 2);
      i1 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42266))+108);
      i4 = _check_pointer(i4, 42277);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 42277))*16));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42250)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42302)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_RemoveSwapData((OOC_SSA_WriteC__Writer)i1, i3);
      goto l46;
l45:
      OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar((OOC_SSA_WriteC__Writer)i1, 0);
l46:
      i1 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 41857))+112);
      i1 = i1!=0;
      if (i1) goto l25_loop;
l51:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_FixupHelperVars((OOC_SSA_WriteC__Writer)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42509))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 42545));
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
      i2 = *(OOC_INT8*)((_check_pointer(i0, 42629))+4);
      i2 = i2!=2;
      if (!i2) goto l64;
      i2 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42680))+96);
      i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
      targetVar = (Object__Object)i2;
      i3 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 42721))+96);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 42748));
      i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
      i3 = !i3;
      if (!i3) goto l64;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42773)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42813)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "=", 2);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42874)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 59u);
l64:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42940))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42962));
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43103)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed(OOC_SSA__Instr selectReturn) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)selectReturn;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43616))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43626))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43655))+8);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l9;
l4_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43696))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43655))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l4_loop;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 43737));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43742))+8);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 43749))+36);
      return (i0==7);
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43823))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l65;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43883))+12);
  instr = (OOC_SSA__Instr)i0;
  target = (Object__Object)(OOC_INT32)0;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44120))+96);
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
  if (i2) goto l6;
  i2=(OOC_INT32)0;
  goto l10;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44174))+96);
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
  target = (Object__Object)i2;
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i3 = i2!=i3;
  if (!i3) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44262)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44427)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44462)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " = ", 4);
l10:
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l60;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44722))+36);
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
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45931)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return", 7);
    
    goto l30;
l29:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45733)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "return ", 8);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45821))+104);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45832))+20);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45842))+64);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45854))+44);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45790));
    OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Result)i3, (OOC_SymbolTable__Type)i2, 0u);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    i0=i1;
l30:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45982)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 59u);
    goto l60;
  case 8:
    i0 = OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed((OOC_SSA__Instr)i0);
    i0 = !i0;
    if (!i0) goto l60;
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn();
    i0 = (OOC_INT32)w;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46132))+104);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46142))+20);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46151))+64);
    fpars = (OOC_SymbolTable__FormalPars)i1;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46185))+44);
    i2 = i2!=(OOC_INT32)0;
    if (i2) goto l39;
    i1 = *(OOC_UINT8*)((_check_pointer(i1, 46574))+57);
    i1 = !i1;
    if (!i1) goto l60;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46604)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return;", 8);
    goto l60;
l39:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46227))+104);
    i2 = *(OOC_UINT8*)((_check_pointer(i2, 46238))+24);
    if (!i2) goto l42;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46282)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_failed_function(", 18);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46350))+104);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 46361))+20);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 46371))+20);
    i2 = *(OOC_INT32*)(_check_pointer(i2, 46377));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46336)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i2, 0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46405)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "); ", 4);
l42:
    i1 = *(OOC_UINT8*)((_check_pointer(i1, 46470))+57);
    i1 = !i1;
    if (!i1) goto l60;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46502)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return 0;", 10);
    goto l60;
  case 72:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46711)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46732)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "{", 2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46762)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, 1);
    goto l60;
  case 73:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46810)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46840)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, (-1));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46864)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46885)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "}", 2);
    goto l60;
  case 74:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46948)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46969)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Raise((void*)", 25);
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 1);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47057)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l60;
  case 78:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47127)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47148)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__PushContext(&", 25);
    i0 = (OOC_INT32)OOC_SSA_WriteC__WriteExceptionContext((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    obj = (Object__Object)i0;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47251)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", &_target", 11);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47290)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47320)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l60;
  case 79:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47389)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47410)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__PopContext(", 23);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47483))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47492))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 47501));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47510)))), &_td_OOC_SSA__ConstDesc, 47510)), 47516))+44);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47461)))), OOC_C_DeclWriter__WriterDesc_WriteBasicConst)),OOC_C_DeclWriter__WriterDesc_WriteBasicConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, 4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47582)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l60;
  case 77:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47646)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47667)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Clear();", 20);
    goto l60;
  case 80:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47749)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47770)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__ActivateContext();", 30);
    goto l60;
  default:
    OOC_SSA_WriteC__WriteExpr((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    i0 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)i0);
    i0 = !i0;
    if (!i0) goto l60;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47953)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
    goto l60;
  }
l60:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 48038));
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48510)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "l", 2);
      i1 = (OOC_INT32)w;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 48554))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48540)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i2, 0);
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 48576))+28);
      if (!i0) goto l7;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48605)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_loop", 6);
      goto l7;
l6:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48449)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "XXX WriteBlockId(NIL)", 22);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48838)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "goto ", 6);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48903)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 59u);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48775)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "/* goto: unreachable */", 24);
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
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 49218));
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
          i1 = *(OOC_INT8*)((_check_pointer(i0, 49387))+36);
          i1 = i1==82;
          if (i1) goto l3;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49950)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49972)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "default:", 9);
          goto l15;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49441))+24);
          opnd = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l15;
l6_loop:
          lower = (OOC_SSA__Opnd)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49536))+8);
          opnd = (OOC_SSA__Opnd)i1;
          upper = (OOC_SSA__Opnd)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49599))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49637)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49661)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "case ", 6);
          i3 = (OOC_INT32)w;
          OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i0);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 49748));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 49735));
          i0 = i0!=i3;
          if (!i0) goto l9;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49775)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ... ", 6);
          i0 = (OOC_INT32)w;
          OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
l9:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49890)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ":", 2);
          i0 = i2!=(OOC_INT32)0;
          if (!i0) goto l15;
          i0=i2;
          goto l6_loop;
l15:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 50061))+36);
      i1 = i1!=0;
      if (i1) goto l3;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50084)))), &_td_OOC_SSA_Schedule__JumpBlockDesc));
      
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50185)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)registeredGoto;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      registeredGoto = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
l13:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 50295))+36);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50411)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i1);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId((OOC_SSA_Schedule__Block)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50461)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 58u);
l20:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_WriteInstrList((OOC_SSA_WriteC__Writer)i1, (OOC_SSA_Schedule__Block)i0);
l21:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50554)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51225)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52006)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52206)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l30;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52203)))), 52203);
      goto l67;
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52255))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l32:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 52043))+36);
      i1 = i1!=0;
      if (!i1) goto l35;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52135))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52141))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
l35:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52184))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l37:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51260)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51280)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "switch (", 9);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51325))+48);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51343)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") {", 4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51396))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i = 0;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l40;
      i2=0u;
      goto l42;
l40:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51457))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 51463)), 0);
      i2 = 0!=i2;
      
l42:
      if (i2) goto l44;
      i0=i1;
      goto l54;
l44:
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}i2=0;
l45_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51498))+52);
      i3 = _check_pointer(i3, 51504);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 51504))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 51507))+4);
      _assert((i0==i3), 127, 51480);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51539))+60);
      i0 = _check_pointer(i0, 51551);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 51551))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51554));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51559))+8);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteCases((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51591)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i0, 1);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51634))+52);
      i1 = _check_pointer(i1, 51640);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 51640))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51643))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51674))+52);
      i1 = _check_pointer(i1, 51680);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 51680))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51683))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51703)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)registeredGoto;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51763)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, (-1));
      i1 = (OOC_INT32)nested;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 51804));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i3+1;
      i = i2;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l48;
      i3=0u;
      goto l50;
l48:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51457))+52);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 51463)), 0);
      i3 = i2!=i3;
      
l50:
      if (!i3) goto l53;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l45_loop;
l53:
      i0=i1;
l54:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51859));
      _assert((i1==(OOC_INT32)0), 127, 51845);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51886)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51906)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "}", 2);
      registeredGoto = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l56:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50589)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50609)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "if (", 5);
      i1 = (OOC_INT32)OOC_SSA_Schedule__BranchBlockDesc_DefaultTarget((OOC_SSA_Schedule__BranchBlock)i0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50667))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50673))+4);
      i1 = i1==i2;
      if (i1) goto l62;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 50944))+56);
      if (!i1) goto l61;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50977)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 33u);
l61:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51029))+52);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51054)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51098))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51104))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51142))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51152))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
      goto l66;
l62:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 50701))+56);
      i1 = !i1;
      if (!i1) goto l65;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50734)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 33u);
l65:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50786))+52);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50811)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50855))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50865))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50903))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50909))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
l66:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51195))+16);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52834)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52853)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "jmp_buf ", 9);
      i1 = ADT_Dictionary__DictionaryDesc_Size((ADT_Dictionary__Dictionary)i0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l13;
      i2=0;
l5_loop:
      i3 = i2!=0;
      if (!i3) goto l8;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52950)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l8:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52985)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_target", 8);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53011)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i3, i2, 0);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l5_loop;
l13:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53051)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53080)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53099)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Context ", 20);
      i0 = ADT_Dictionary__DictionaryDesc_Size((ADT_Dictionary__Dictionary)i0);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l24;
      i1=0;
l16_loop:
      i2 = i1!=0;
      if (!i2) goto l19;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53207)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ", ", 3);
l19:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53242)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_context", 9);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53269)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i2, i1, 0);
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l16_loop;
l24:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53309)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53477))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53477))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53491)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)pre, pre_0d, 0, (-1));
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l6;
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53539))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53539))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53553)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)post, post_0d, 0, (-1));
      i0 = i0!=(OOC_INT32)0;
      
      goto l9;
l6:
      i0=1u;
l9:
      if (!i0) goto l11;
      Err__String("PROCEDURE ", 11);
      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53650))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53660))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53666))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53650))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53660))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53666))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 53671)), 0);
      Err__String((void*)(_check_pointer(i1, 53671)), i0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54220))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 54226))+28);
          i1 = !i1;
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54274))+4);
          i2 = (OOC_INT32)w;
          i1 = OOC_SSA_WriteC__WriterDesc_EmptyBlock((OOC_SSA_WriteC__Writer)i2, (OOC_SSA_Schedule__Block)i1);
          
l5:
          if (i1) goto l7;
          i1=0u;
          goto l9;
l7:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54303))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54316));
          i1 = i1!=i2;
          
l9:
          if (!i1) goto l24;
l11_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54411))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54426)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 54426)), 54436))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54441))+4);
          OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54220))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 54226))+28);
          i1 = !i1;
          if (i1) goto l14;
          i1=0u;
          goto l16;
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54274))+4);
          i2 = (OOC_INT32)w;
          i1 = OOC_SSA_WriteC__WriterDesc_EmptyBlock((OOC_SSA_WriteC__Writer)i2, (OOC_SSA_Schedule__Block)i1);
          
l16:
          if (i1) goto l18;
          i1=0u;
          goto l20;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54303))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54316));
          i1 = i1!=i2;
          
l20:
          if (i1) goto l11_loop;
l24:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54506)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54604)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54693)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l10;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54752)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l14;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54749)))), 54749);
      goto l14;
l10:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 54733))+48));
      goto l14;
l13:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 54548))+48));
      i0 = (OOC_INT32)b;
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 54573))+60));
l14:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54836))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
l17_loop:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54932));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55293)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (!i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55332))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55342))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 55348))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 55356))+40);
      i1 = i1>i2;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55377))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55383))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 55389))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 55398))+40);
      i1 = i1<=i2;
      
l7:
      if (i1) goto l16;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55552))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55562))+4);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 55544))+40);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 55568))+40);
      i1 = i2<i1;
      if (i1) goto l11;
      i1=0u;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55592))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55602))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55616))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 55622))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 55608))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 55628))+40);
      i1 = i1<i2;
      
l13:
      if (!i1) goto l18;
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch((void*)((_check_pointer(i0, 55712))+56), (void*)((_check_pointer(i0, 55729))+60), (void*)((_check_pointer(i0, 55742))+48));
      goto l18;
l16:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch((void*)((_check_pointer(i0, 55489))+56), (void*)((_check_pointer(i0, 55506))+60), (void*)((_check_pointer(i0, 55519))+48));
l18:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55831))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l26;
l21_loop:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55928));
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
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 56278)), 0);
      i2 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i2);
      varList = (Object__ObjectArrayPtr)i2;
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 56316)), 0);
      i4 = 0<i3;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 56339);
      i6 = _check_pointer(i1, 56358);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 56358))*4);
      i6 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i6);
      i7 = OOC_ARRAY_LENGTH(i5, 0);
      i8 = _check_pointer(i1, 56376);
      i9 = OOC_ARRAY_LENGTH(i8, 0);
      i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 56376))*4);
      *(OOC_INT32*)(i5+(_check_index(i6, i7, OOC_UINT32, 56339))*4) = i8;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l3_loop;
l8:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 56430)), 0);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l27;
      i1=0;
l11_loop:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56447)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56466)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_c", 3);
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 56507))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 56507))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56518)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i3, i1, 0);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56545)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, " = ", 4);
      i3 = _check_pointer(i2, 56590);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 56590))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56598)))), &_td_OOC_SSA__InstrDesc, 56598)), 56604))+24);
      opnd = (OOC_SSA__Opnd)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 56637));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56646)))), &_td_OOC_SSA__ConstDesc, 56646)), 56652))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56665)))), &_td_Object_Boxed__StringDesc, 56665)), 56672));
      i4 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56686)))), &_td_Object__String8Desc, 56686)));
      chars = (Object__CharsLatin1)i4;
      i5 = (OOC_INT32)w;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 56737)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 56719)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i5, (void*)(_check_pointer(i4, 56737)), i6);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56750)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i4, "(", 2);
      count = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 56809))+8);
      opnd = (OOC_SSA__Opnd)i3;
      i4 = i3!=0;
      if (!i4) goto l22;
      i4=i3;i3=0;
l14_loop:
      i5 = i3!=0;
      if (!i5) goto l17;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 56894)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i5, ", ", 3);
l17:
      i5 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i5, (OOC_SSA__Opnd)i4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 56974))+8);
      opnd = (OOC_SSA__Opnd)i4;
      i3 = i3+1;
      count = i3;
      i5 = i4!=0;
      if (i5) goto l14_loop;
l22:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 57031)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ");", 3);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57211))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57242))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 57248))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 57254))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57242))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 57248))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 57254))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 57259)), 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57211))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 57224)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i2, (void*)(_check_pointer(i4, 57259)), i5, 0, (-1));
  writeProc = (i2!=(OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 57292));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57306))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 57316));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57321))+8);
  enter = (OOC_SSA__Instr)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 57366));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57411))+8);
  i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i1, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i0);
  s = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 57430));
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59047))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59047))+24);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59061)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i1, "schedule", 9, 0, (-1));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59310));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59310));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59313)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i2, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59387));
  i2 = (OOC_INT32)pb;
  i3 = (OOC_INT32)domRoot;
  i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters((OOC_SSA__ProcBlock)i2, (OOC_SSA_Schedule__Block)i3, (OOC_C_DeclWriter__Writer)i1);
  registerMap = (ADT_Dictionary__Dictionary)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59417));
  i4 = (OOC_INT32)jmpbufMap;
  i1 = (OOC_INT32)OOC_SSA_WriteC__NewWriter((OOC_SSA_WriteC__Translator)i0, (OOC_C_DeclWriter__Writer)i3, (OOC_SSA__ProcBlock)i2, (ADT_Dictionary__Dictionary)i1, (ADT_Dictionary__Dictionary)i4);
  i3 = (OOC_INT32)jmpbufMap;
  w = (OOC_SSA_WriteC__Writer)i1;
  OOC_SSA_WriteC__WriteLocalDecl((OOC_SSA_WriteC__Translator)i0, (OOC_SSA_WriteC__Writer)i1, (OOC_SSA__ProcBlock)i2, (i3!=(OOC_INT32)0));
  i0 = (OOC_INT32)jmpbufMap;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)proc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59542))+4);
  i0 = OOC_SymbolTable__ProcDeclDesc_IsModuleBody((OOC_SymbolTable__ProcDecl)i0);
  if (!i0) goto l27;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59733))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)t;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l26;
l18_loop:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 59791))+36);
  i2 = i2==81;
  if (!i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59860))+36);
  i2 = OOC_SSA_WriteC__GetPreloadId((ADT_Dictionary_IntValue__Dictionary)i2, (OOC_SSA__Instr)i0);
  dummy = i2;
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59919))+28);
  instr = (OOC_SSA__Instr)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l18_loop;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59974))+36);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars((ADT_Dictionary_IntValue__Dictionary)i0);
l27:
  i0 = (OOC_INT32)t;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60005)))), OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures)),OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures)((OOC_Make_TranslateToC__Translator)i0);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60122)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i1 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__WriterDesc_WriteBlocks((OOC_SSA_WriteC__Writer)i0, (OOC_SSA_Schedule__Block)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60168)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60300)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 60326));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 60326));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60329)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i0, (-1));
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
  *(OOC_INT32*)((_check_pointer(i0, 60637))+20) = i1;
  i1 = (OOC_INT32)inspectStage;
  *(OOC_INT32*)((_check_pointer(i0, 60672))+24) = i1;
  i1 = writeStats;
  *(OOC_UINT8*)((_check_pointer(i0, 60709))+28) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 60742))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 60772))+36) = i1;
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
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 61353)), 0);
  i4 = 0<i3;
  if (!i4) goto l10;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 61377);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 61377))*4);
  OOC_IR__ProcedureDesc_Accept((OOC_IR__Procedure)i5, (OOC_IR__Visitor)i2);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l5_loop;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 61433))+4);
  *(OOC_INT32*)((_check_pointer(i0, 61412))+32) = i1;
l11:
  return;
  ;
}

void OOC_OOC_SSA_WriteC_init(void) {

  return;
  ;
}

/* --- */
