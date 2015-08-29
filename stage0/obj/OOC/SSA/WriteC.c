#include <OOC/SSA/WriteC.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_SSA_WriteC__Visitor OOC_SSA_WriteC__NewVisitor() {
  register OOC_INT32 i0,i1;
  OOC_SSA_WriteC__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Visitor.baseTypes[0]);
  v = (OOC_SSA_WriteC__Visitor)i0;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i0);
  *(OOC_INT32*)(_check_pointer(i0, 2954)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 2986))+4) = i1;
  return (OOC_SSA_WriteC__Visitor)i0;
  ;
}

void OOC_SSA_WriteC__VisitorDesc_VisitProcedure(OOC_SSA_WriteC__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3166))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3135)) = i2;
  OOC_IR_VisitAll__VisitorDesc_VisitProcedure((OOC_IR_VisitAll__Visitor)i0, (OOC_IR__Procedure)i1);
  *(OOC_INT32*)(_check_pointer(i0, 3215)) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SSA_WriteC__VisitorDesc_VisitVar(OOC_SSA_WriteC__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__ProcDecl proc;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3366))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3366))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3372)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i2);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3403));
  i3 = i1!=i3;
  if (!i3) goto l4;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3435))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3435))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3461))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3451)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
l4:
  return;
  ;
}

static OOC_INT8 OOC_SSA_WriteC__SubclassToBasicType(OOC_SSA__Result res) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)res;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 3598))+5);
  switch (i0) {
  case 0:
    return 0;
    goto l15;
  case 9:
    return 4;
    goto l15;
  case 5:
    return 6;
    goto l15;
  case 6:
    return 7;
    goto l15;
  case 7:
    return 8;
    goto l15;
  case 8:
    return 9;
    goto l15;
  case 1:
    return 2;
    goto l15;
  case 2:
    return 3;
    goto l15;
  case 3:
    return 4;
    goto l15;
  case 4:
    return 5;
    goto l15;
  case 10:
    return 13;
    goto l15;
  case 11:
    return 14;
    goto l15;
  default:
    _failed_case(i0, 3590);
    goto l15;
  }
l15:
  _failed_function(3515); return 0;
  ;
}

static OOC_SSA_WriteC__Writer OOC_SSA_WriteC__NewWriter(OOC_SSA_WriteC__Translator translator, OOC_C_DeclWriter__Writer cWriter, OOC_SSA__ProcBlock procBlock, ADT_Dictionary__Dictionary registerMap, ADT_Dictionary__Dictionary jmpbufMap) {
  register OOC_INT32 i0,i1;
  OOC_SSA_WriteC__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Writer.baseTypes[0]);
  w = (OOC_SSA_WriteC__Writer)i0;
  i1 = (OOC_INT32)cWriter;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4623)))), OOC_C_DeclWriter__WriterDesc_CopyTo)),OOC_C_DeclWriter__WriterDesc_CopyTo)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Writer)i0);
  i1 = (OOC_INT32)procBlock;
  *(OOC_INT32*)((_check_pointer(i0, 4642))+104) = i1;
  i1 = (OOC_INT32)registerMap;
  *(OOC_INT32*)((_check_pointer(i0, 4673))+96) = i1;
  i1 = (OOC_INT32)jmpbufMap;
  *(OOC_INT32*)((_check_pointer(i0, 4708))+100) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 4744))+108) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__SwapArray.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 4766))+112) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4795))+116) = 0;
  i1 = (OOC_INT32)translator;
  *(OOC_INT32*)((_check_pointer(i0, 4823))+92) = i1;
  return (OOC_SSA_WriteC__Writer)i0;
  ;
}

void OOC_SSA_WriteC__WriterDesc_ClearSwapData(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)((_check_pointer(i0, 4932))+112) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4961))+116) = 0;
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_AddSwapData(OOC_SSA_WriteC__Writer w, Object__String source, Object__String dest, OOC_INT8 ctype) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SSA_WriteC__SwapArray _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)dest;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5194)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  i2 = !i2;
  if (!i2) goto l14;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5286))+108);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 5260))+112);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5297)), (OOC_INT32)0);
  i3 = i4==i3;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5330))+108);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5341)), (OOC_INT32)0);
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__SwapArray.baseTypes[0], (i3*2));
  _new = (OOC_SSA_WriteC__SwapArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5376))+108);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 5387)), (OOC_INT32)0);
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l12;
  i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5416))+108);
  i6 = _check_pointer(i6, 5427);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i3, 5408);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  _copy_block((i6+((_check_index(i5, i7, OOC_UINT32, 5427))*16)),(i8+((_check_index(i5, i9, OOC_UINT32, 5408))*16)),16);
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l7_loop;
l12:
  *(OOC_INT32*)((_check_pointer(i2, 5453))+108) = i3;
l13:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5490))+108);
  i3 = _check_pointer(i3, 5501);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 5503))+112);
  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i4, i5, OOC_UINT32, 5501))*16)) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5548))+108);
  i0 = _check_pointer(i0, 5559);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 5561))+112);
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)((i0+((_check_index(i3, i4, OOC_UINT32, 5559))*16))+4) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5602))+108);
  i0 = _check_pointer(i0, 5613);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 5615))+112);
  i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i4 = ctype;
  *(OOC_INT8*)((i0+((_check_index(i1, i3, OOC_UINT32, 5613))*16))+12) = i4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5658))+108);
  i0 = _check_pointer(i0, 5669);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 5671))+112);
  i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 5669))*16))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 5719))+112);
  *(OOC_INT32*)((_check_pointer(i2, 5719))+112) = (i0+1);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5864))+112);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l21;
  i2=0;
l3_loop:
  c = 0;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5922))+112);
  i3 = i3-1;
  i4 = 0<=i3;
  j = 0;
  if (i4) goto l6;
  i3=0;
  goto l16;
l6:
  i4=0;i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5957))+108);
  i6 = _check_pointer(i6, 5968);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i4, i7, OOC_UINT32, 5968))*16));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5957))+108);
  i7 = _check_pointer(i7, 5968);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5989))+108);
  i9 = _check_pointer(i9, 6000);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = (OOC_INT32)*(OOC_INT32*)((i9+((_check_index(i2, i10, OOC_UINT32, 6000))*16))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+((_check_index(i4, i8, OOC_UINT32, 5968))*16));
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5979)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i7, (Object__Object)i9);
  if (!i6) goto l11;
  i5 = i5+1;
  c = i5;
  
l11:
  i4 = i4+1;
  i6 = i4<=i3;
  j = i4;
  if (i6) goto l7_loop;
l15:
  i3=i5;
l16:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6065))+108);
  i4 = _check_pointer(i4, 6076);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 6076))*16))+8) = i3;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l21:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_RemoveSwapData(OOC_SSA_WriteC__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 j;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6226))+108);
  i1 = _check_pointer(i1, 6237);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = i;
  i1 = *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6237))*16))+8);
  _assert((i1==0), 127, 6217);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6277))+112);
  i1 = i1-1;
  i2 = 0<=i1;
  j = 0;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6310))+108);
  i4 = _check_pointer(i4, 6321);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 6321))*16))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6310))+108);
  i5 = _check_pointer(i5, 6321);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6340))+108);
  i7 = _check_pointer(i7, 6351);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 6321))*16))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i7+((_check_index(i3, i8, OOC_UINT32, 6351))*16));
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6330)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i5, (Object__Object)i6);
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6383))+108);
  i4 = _check_pointer(i4, 6394);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6383))+108);
  i6 = _check_pointer(i6, 6394);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)((i6+((_check_index(i2, i7, OOC_UINT32, 6394))*16))+8);
  *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 6394))*16))+8) = (i6-1);
l6:
  i2 = i2+1;
  i4 = i2<=i1;
  j = i2;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6454))+108);
  i1 = _check_pointer(i1, 6465);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6467))+112);
  i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6435))+108);
  i5 = _check_pointer(i5, 6446);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  _copy_block((i1+((_check_index((i2-1), i4, OOC_UINT32, 6465))*16)),(i5+((_check_index(i3, i6, OOC_UINT32, 6446))*16)),16);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6499))+112);
  *(OOC_INT32*)((_check_pointer(i0, 6499))+112) = (i1-1);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar(OOC_SSA_WriteC__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_CHAR8 str[16];
  Object__String h;
  OOC_INT32 j;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6682))+108);
  i1 = _check_pointer(i1, 6693);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = i;
  i1 = *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6693))*16))+8);
  _assert((i1!=0), 127, 6673);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6736))+116);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 16);
  Strings__Insert("h", 2, (OOC_INT32)0, (void*)(OOC_INT32)str, 16);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
  h = (Object__String)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6836))+116);
  *(OOC_INT32*)((_check_pointer(i0, 6836))+116) = (i2+1);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6879))+112);
  i2 = i2-1;
  i4 = 0<=i2;
  j = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6912))+108);
  i5 = _check_pointer(i5, 6923);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 6923))*16));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6912))+108);
  i6 = _check_pointer(i6, 6923);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6944))+108);
  i8 = _check_pointer(i8, 6955);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 6955))*16))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i4, i7, OOC_UINT32, 6923))*16));
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6934)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i6, (Object__Object)i8);
  if (!i5) goto l6;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6980))+108);
  i5 = _check_pointer(i5, 6991);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 6991))*16)) = i1;
l6:
  i4 = i4+1;
  i5 = i4<=i2;
  j = i4;
  if (i5) goto l3_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7034))+108);
  i2 = _check_pointer(i2, 7045);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 7045))*16))+8) = 0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7072)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "{register ", 11);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7160))+108);
  i2 = _check_pointer(i2, 7171);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT8*)((i2+((_check_index(i3, i4, OOC_UINT32, 7171))*16))+12);
  i2 = OOC_SSA_Allocator__RegisterType(i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 7123))+24)+(_check_index(i2, 17, OOC_UINT8, 7134))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7107)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 7183))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7197)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7223)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7247)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'=');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7287))+108);
  i1 = _check_pointer(i1, 7298);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 7298))*16))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7271)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7315)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)';');
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_FixupHelperVars(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7420))+116);
  i1 = i1!=0;
  if (!i1) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7452)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'}');
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7483))+116);
  *(OOC_INT32*)((_check_pointer(i0, 7483))+116) = (i1-1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7420))+116);
  i1 = i1!=0;
  if (i1) goto l3_loop;
l8:
  return;
  ;
}

static void OOC_SSA_WriteC__Fixup(OOC_SSA__ProcBlock pb, ADT_Dictionary__Dictionary *jmpbufMap) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr instr;
  OOC_CHAR8 num[16];

  *jmpbufMap = (ADT_Dictionary__Dictionary)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7709))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l20;
  i2=(OOC_INT32)0;
l3_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i1, 7765))+36);
  switch (i3) {
  case 55:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7815))+24);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7825));
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7831)))), &_td_OOC_SSA__AddressDesc);
    if (!i3) goto l15;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8150))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8209))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 8219));
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8150))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8229)))), &_td_OOC_SSA__AddressDesc, 8229)), 8237))+44);
    i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8190)))), OOC_SSA__ProcBlockDesc_GetDeclRef)),OOC_SSA__ProcBlockDesc_GetDeclRef)((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Declaration)i4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8160)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i5, (OOC_SSA__Result)i4);
    goto l15;
  case 72:
    i3 = i2==(OOC_INT32)0;
    if (!i3) goto l13;
    i2 = (OOC_INT32)ADT_Dictionary__New();
    *jmpbufMap = (ADT_Dictionary__Dictionary)i2;
    
l13:
    i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8407)))), ADT_Dictionary__DictionaryDesc_Size)),ADT_Dictionary__DictionaryDesc_Size)((ADT_Dictionary__Dictionary)i2);
    IntStr__IntToStr(i3, (void*)(OOC_INT32)num, 16);
    i3 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)num, 16);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8439)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i3);
    
    goto l15;
  default:
    
    goto l15;
  }
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8537))+28);
  instr = (OOC_SSA__Instr)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l3_loop;
l20:
  return;
  ;
}

static void OOC_SSA_WriteC__WriteTypeCast(OOC_C_DeclWriter__Writer w, OOC_INT8 ctype) {
  register OOC_INT32 i0,i1;
  OOC_INT8 rtype;

  i0 = ctype;
  i1 = OOC_SSA_Allocator__RegisterType(i0);
  i0 = i1!=i0;
  rtype = i1;
  if (!i0) goto l4;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8781)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'(');
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 8823))+24)+(_check_index(i1, 17, OOC_UINT8, 8834))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8807)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 8841))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8857)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)')');
l4:
  return;
  ;
}

static void OOC_SSA_WriteC__WriteTypeAndLength(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr, OOC_SymbolTable__VarDecl varDecl, OOC_CHAR8 inBytes) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9147)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",", 2);
  i1 = (OOC_INT32)varDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9183))+40);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9190)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9309))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9293)))), OOC_SSA_WriteC__WriterDesc_TypeRef)),OOC_SSA_WriteC__WriterDesc_TypeRef)((OOC_SSA_WriteC__Writer)i0, (OOC_SymbolTable__Type)i1);
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9232))+40);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9232))+40);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9242)))), &_td_OOC_SymbolTable__ArrayDesc, 9242)), 9248)))), OOC_SymbolTable__ArrayDesc_GetInnermostElementType)),OOC_SymbolTable__ArrayDesc_GetInnermostElementType)((OOC_SymbolTable__Array)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9242)))), &_td_OOC_SymbolTable__ArrayDesc, 9242)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9216)))), OOC_SSA_WriteC__WriterDesc_TypeRef)),OOC_SSA_WriteC__WriterDesc_TypeRef)((OOC_SSA_WriteC__Writer)i0, (OOC_SymbolTable__Type)i1);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9331)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",", 2);
  i1 = inBytes;
  if (i1) goto l7;
  i1 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9429)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i1, 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9419)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
  goto l8;
l7:
  i1 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9389)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i1, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9379)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9457)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  return;
  ;
}

static void OOC_SSA_WriteC__WriteLocalDecl(OOC_SSA_WriteC__Translator t, OOC_SSA_WriteC__Writer w, OOC_SSA__ProcBlock pb, OOC_CHAR8 _volatile) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10011)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l34;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10310))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l11;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10371))+4);
      i1 = i1!=5;
      if (i1) goto l8;
      i1=OOC_FALSE;
      goto l11;
l8:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10420))+4);
      i1 = i1!=7;
      
l11:
      if (!i1) goto l27;
l14_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10474))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17;
      i1=OOC_FALSE;
      goto l23;
l17:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10371))+4);
      i1 = i1!=5;
      if (i1) goto l20;
      i1=OOC_FALSE;
      goto l23;
l20:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10420))+4);
      i1 = i1!=7;
      
l23:
      if (i1) goto l14_loop;
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10515));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10521)))), &_td_OOC_SSA__DeclRefDesc);
      if (!i1) goto l33;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10567));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10577)))), &_td_OOC_SSA__DeclRefDesc, 10577)), 10585))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10596)))), &_td_OOC_SymbolTable__VarDeclDesc, 10596);
      varDecl = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10627)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10645))+16);
      i1 = i1==i2;
      if (!i1) goto l33;
      return (OOC_SymbolTable__VarDecl)i0;
l33:
      return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
      goto l43;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10091))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10098)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l37;
      i1=OOC_FALSE;
      goto l39;
l37:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10133))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10133))+44);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10144)))), &_td_OOC_SymbolTable__VarDeclDesc, 10144)), 10152)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10144)))), &_td_OOC_SymbolTable__VarDeclDesc, 10144)));
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10170))+16);
      i1 = i1==i2;
      
l39:
      if (i1) goto l41;
      return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
      goto l43;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10209))+44);
      return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10220)))), &_td_OOC_SymbolTable__VarDeclDesc, 10220));
l43:
      _failed_function(9881); return 0;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  declMap = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10828))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l40;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10883))+36);
  i1 = i1==12;
  if (i1) goto l6;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10924))+36);
  i1 = i1==13;
  
  goto l8;
l6:
  i1=OOC_TRUE;
l8:
  if (i1) goto l10;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10965))+36);
  i1 = i1==58;
  
  goto l12;
l10:
  i1=OOC_TRUE;
l12:
  if (i1) goto l14;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11016))+36);
  i1 = i1==3;
  
  goto l16;
l14:
  i1=OOC_TRUE;
l16:
  if (!i1) goto l35;
  i0 = (OOC_INT32)OOC_SSA_WriteC__WriteLocalDecl_GetLocalDecl((OOC_SSA__Instr)i0);
  decl = (OOC_SymbolTable__VarDecl)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l20;
  i1=OOC_FALSE;
  goto l22;
l20:
  i1 = (OOC_INT32)declMap;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11120)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  i1 = !i1;
  
l22:
  if (!i1) goto l35;
  i1 = (OOC_INT32)instr;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 11160))+36);
  i2 = i2==58;
  if (i2) goto l32;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11436))+48);
  i1 = !i1;
  if (!i1) goto l35;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_ConvertDecl__GetDecl((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Declaration)i0);
  cDecl = (OOC_C_DeclWriter__Declaration)i2;
  i3 = _volatile;
  if (!i3) goto l30;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11555)))), OOC_C_DeclWriter__DeclarationDesc_SetTypeQualifier)),OOC_C_DeclWriter__DeclarationDesc_SetTypeQualifier)((OOC_C_DeclWriter__Declaration)i2, 2);
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11627)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11651)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11692)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)';');
  i1 = (OOC_INT32)declMap;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11730)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
  goto l35;
l32:
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i2;
  i3 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11263)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11287)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "OOC_ALLOCATE_VPAR(", 19);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11338)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
  OOC_SSA_WriteC__WriteTypeAndLength((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Instr)i1, (OOC_SymbolTable__VarDecl)i0, OOC_FALSE);
l35:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11807))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l40:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12016))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12026))+8);
  item = (OOC_SymbolTable__Item)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)declMap;
  
l43_loop:
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12082)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (!i5) goto l57;
  i5 = *(OOC_UINT8*)((_check_pointer(i1, 12115))+48);
  i5 = !i5;
  if (i5) goto l48;
  i5=OOC_FALSE;
  goto l50;
l48:
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12150)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i4, (Object__Object)i1);
  i5 = !i5;
  
l50:
  if (i5) goto l52;
  i5=OOC_FALSE;
  goto l54;
l52:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12180))+24);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12180))+24);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12196)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i6, (Object__Object)i1);
  
l54:
  if (!i5) goto l57;
  i5 = (OOC_INT32)OOC_C_ConvertDecl__GetDecl((OOC_C_DeclWriter__Writer)i3, (OOC_SymbolTable__Declaration)i1);
  cDecl = (OOC_C_DeclWriter__Declaration)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12278)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12300)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i3, (OOC_C_DeclWriter__Declaration)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12339)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i3, (OOC_CHAR8)';');
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12375)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i4, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12488));
  item = (OOC_SymbolTable__Item)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l43_loop;
l62:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12632))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12642))+8);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l73;
  i1 = (OOC_INT32)declMap;
  i2 = (OOC_INT32)w;
  
l65_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12698)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (!i3) goto l68;
  i3 = (OOC_INT32)OOC_C_ConvertDecl__GetProc((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__ProcDecl)i0, OOC_TRUE);
  cDecl = (OOC_C_DeclWriter__Declaration)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12779)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12799)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12836)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)';');
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12870)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
l68:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12970));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13087)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_ARRAY_LENGTH(", 18);
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13141))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13151))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13129)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13169)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13208))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13196)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13226)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_LengthExprParam(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result design;
  Object__String name;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13403)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 5);
  design = (OOC_SSA__Result)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13493)))), &_td_OOC_SSA__DeclRefDesc, 13493)), 13501))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13527))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13527))+24);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13537)))), OOC_SSA__OpndDesc_GetIntConst)),OOC_SSA__OpndDesc_GetIntConst)((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfLengthParam((OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13512)))), &_td_OOC_SymbolTable__VarDeclDesc, 13512)), i0);
  name = (Object__String)i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13560)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_Ref(OOC_SSA_WriteC__Writer w, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Result arg;
  Object__String name;
  OOC_INT8 bt;
  OOC_SSA__Instr instr;
  Object__Object obj;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13850));
  arg = (OOC_SSA__Result)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13869)))), &_td_OOC_SSA__DeclRefDesc);
  if (i2) goto l46;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14382)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l40;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14957)))), &_td_OOC_SSA__AddressDesc);
  if (i2) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15555));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15560))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15579))+96);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15579))+96);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15606));
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15592)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i4, (Object__Object)i5);
  if (i3) goto l17;
  i0 = *(OOC_INT8*)((_check_pointer(i1, 15892))+36);
  i0 = i0==57;
  if (i0) goto l15;
  i0 = *(OOC_INT8*)((_check_pointer(i1, 15994))+36);
  i0 = i0==72;
  if (i0) goto l13;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16247)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "XXX undefined ref /*internal error*/", 37);
  goto l58;
l13:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16035)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "setjmp(_target", 15);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16083))+100);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16083))+100);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16093)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
  obj = (Object__Object)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16115)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16143)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ")", 2);
  goto l58;
l15:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15940)))), OOC_SSA_WriteC__WriterDesc_LengthExprParam)),OOC_SSA_WriteC__WriterDesc_LengthExprParam)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i1);
  goto l58;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15634))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15634))+96);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15658));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15647)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i3 = i1==i3;
  obj = (Object__Object)i1;
  if (i3) goto l20;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15839)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
  goto l58;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15723)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'(');
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15770));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15775))+8);
  OOC_SSA_WriteC__WriteExpr((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15796)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)')');
  goto l58;
l23:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15017))+44);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i2 = (OOC_INT32)w;
  OOC_SSA_WriteC__WriteTypeCast((OOC_C_DeclWriter__Writer)i2, 1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15083))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15090)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l26;
  i3=OOC_FALSE;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15124))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15135)))), &_td_OOC_SymbolTable__VarDeclDesc, 15135)), 15143))+40);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15150)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l28:
  if (i3) goto l34;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15184))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15191)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l32;
  i1=OOC_FALSE;
  goto l35;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15224))+44);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15235)))), &_td_OOC_SymbolTable__VarDeclDesc, 15235)), 15243))+51);
  
  goto l35;
l34:
  i1=OOC_TRUE;
l35:
  i1 = !i1;
  if (!i1) goto l38;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15461)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'&');
l38:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15498)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  goto l58;
l40:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14573))+44);
  i2 = (OOC_INT32)OOC_SSA__nil;
  i0 = i0==i2;
  if (i0) goto l43;
  i0 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14927))+48);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14915))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14898)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i2);
  goto l58;
l43:
  bt = 4;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14749)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
  i1 = bt;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 14795))+24)+(_check_index(i1, 17, OOC_UINT8, 14806))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14779)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 14810))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14828)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14859)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
  goto l58;
l46:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14033))+44);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14055))+44);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14062)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l49;
  i2=OOC_FALSE;
  goto l51;
l49:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14092))+44);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14103)))), &_td_OOC_SymbolTable__VarDeclDesc, 14103)), 14111))+51);
  
l51:
  if (i2) goto l53;
  i1=OOC_FALSE;
  goto l54;
l53:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14148))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14159)))), &_td_OOC_SymbolTable__VarDeclDesc, 14159)), 14167))+40);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14174)))), &_td_OOC_SymbolTable__ArrayDesc));
  
l54:
  i2 = (OOC_INT32)w;
  if (!i1) goto l57;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14313)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "*", 2);
l57:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14351)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
l58:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_TypeRef(OOC_SSA_WriteC__Writer w, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_C_DeclWriter__Type cType;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_C_ConvertDecl__GetTypeRef((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Type)i0);
  cType = (OOC_C_DeclWriter__Type)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16475)))), OOC_C_DeclWriter__WriterDesc_WriteType)),OOC_C_DeclWriter__WriterDesc_WriteType)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_Noop(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SSA__Instr targetInstr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Result res;
  Object__Object targetVar;
  Object__Object sourceVar;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 16707))+36);
  switch (i1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 81:
  case 10:
  case 11:
  case 9:
    return OOC_TRUE;
    goto l31;
  case 6:
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17006)))), OOC_SSA__InstrDesc_GetCollectTarget)),OOC_SSA__InstrDesc_GetCollectTarget)((OOC_SSA__Instr)i0);
    targetInstr = (OOC_SSA__Instr)i1;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17047))+24);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17083));
    i2 = i0!=(OOC_INT32)0;
    res = (OOC_SSA__Result)i1;
    if (i2) goto l6;
    i2=OOC_FALSE;
    goto l8;
l6:
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17129)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
    i2 = !i2;
    
l8:
    if (!i2) goto l29;
    i2 = (OOC_INT32)w;
    
l10_loop:
    i3 = *(OOC_INT8*)((_check_pointer(i0, 17167))+4);
    i3 = i3!=2;
    if (!i3) goto l20;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17218))+96);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17218))+96);
    i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17231)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i4, (Object__Object)i1);
    targetVar = (Object__Object)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17258))+96);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17258))+96);
    i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17285));
    i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17271)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i5, (Object__Object)i6);
    if (i4) goto l15;
    return OOC_FALSE;
    goto l20;
l15:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17323))+96);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17323))+96);
    i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17347));
    i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17336)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i5, (Object__Object)i6);
    sourceVar = (Object__Object)i4;
    i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17380)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i4, (Object__Object)i3);
    i3 = !i3;
    if (!i3) goto l20;
    return OOC_FALSE;
l20:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17628))+8);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17650));
    res = (OOC_SSA__Result)i1;
    i3 = i0!=(OOC_INT32)0;
    if (i3) goto l23;
    i3=OOC_FALSE;
    goto l25;
l23:
    i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17129)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
    i3 = !i3;
    
l25:
    if (i3) goto l10_loop;
l29:
    return OOC_TRUE;
    goto l31;
  default:
    return OOC_FALSE;
    goto l31;
  }
l31:
  _failed_function(16535); return 0;
  ;
}

OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_EmptyBlock(OOC_SSA_WriteC__Writer w, OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Schedule__InstrProxy proxy;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17990)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l15;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18030))+8);
  i1 = i0!=(OOC_INT32)0;
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  
l6_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18098))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18085)))), OOC_SSA_WriteC__WriterDesc_Noop)),OOC_SSA_WriteC__WriterDesc_Noop)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i2);
  i2 = !i2;
  if (!i2) goto l9;
  return OOC_FALSE;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18171));
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l14:
  return OOC_TRUE;
l15:
  _failed_function(17773); return 0;
  ;
}

static void OOC_SSA_WriteC__CastToPtr(OOC_SSA_WriteC__Writer w, OOC_SSA__Result var, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT32 i0,i1,i2;
  Object__String name;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18427))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 18434))+36);
  i1 = i1==61;
  if (i1) goto l37;
  i1 = (OOC_INT32)type;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18522)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18557)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l7;
l5:
  i2=OOC_TRUE;
l7:
  if (i2) goto l9;
  i2 = passByReference;
  
  goto l11;
l9:
  i2=OOC_TRUE;
l11:
  if (i2) goto l13;
  i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 12);
  
  goto l15;
l13:
  i2=OOC_TRUE;
l15:
  if (!i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18672)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l19;
  i0=OOC_FALSE;
  goto l21;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18706)))), &_td_OOC_SSA__ConstDesc, 18706)), 18712))+44);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18720)))), &_td_Object_Boxed__StringDesc);
  
l21:
  if (i0) goto l38;
  i0 = passByReference;
  if (i0) goto l25;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18833))+20);
  i0 = i0==(OOC_INT32)0;
  
  goto l27;
l25:
  i0=OOC_TRUE;
l27:
  if (i0) goto l29;
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 12);
  
  goto l31;
l29:
  i0=OOC_TRUE;
l31:
  if (i0) goto l33;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i1);
  name = (Object__String)i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19006)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19036)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19067)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
  goto l38;
l33:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18917)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(void*)", 8);
  goto l38;
l37:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18473)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(RT0__Struct)", 14);
l38:
  return;
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
      i3 = *(OOC_INT8*)((_check_pointer(i0, 19471))+4);
      i3 = i3==i1;
      if (!i3) goto l13;
      i3 = i2!=0;
      if (!i3) goto l9;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19536)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l9:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19591)))), &_td_OOC_SSA__TypedOpndDesc);
      if (!i3) goto l12;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19683)))), &_td_OOC_SSA__TypedOpndDesc, 19683)), 19693))+20);
      i4 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19733)))), &_td_OOC_SSA__TypedOpndDesc, 19733)), 19743))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19644));
      i6 = (OOC_INT32)w;
      OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i6, (OOC_SSA__Result)i5, (OOC_SymbolTable__Type)i3, i4);
l12:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19789)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i0);
      i2 = i2+1;
      count = i2;
      
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19858))+8);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19957)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19975)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_assert(", 9);
      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20024))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20034))+8);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20064)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 20112))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20093)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20130)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CheckIndex(OOC_SSA__Instr checkIndex) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 bt;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20276)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_check_index(", 14);
      i0 = (OOC_INT32)checkIndex;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20334))+24);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20364)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)instr;
      i1 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
      i1 = i1+4;
      bt = i1;
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 20485))+24)+(_check_index(i1, 17, OOC_UINT8, 20496))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20469)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 20500))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20516)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 20568))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20545)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20586)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CheckPointer(OOC_SSA__Instr checkPointer) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20696)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_check_pointer(", 16);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)checkPointer;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20757))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20767))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20738)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20787)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 20841))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20816)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20859)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeGuard(OOC_SSA__Instr typeGuard) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      Object__String name;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21015)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_type_guard(", 13);
      i0 = (OOC_INT32)typeGuard;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21071))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21081))+8);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21111)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", &", 4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21157)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 12);
      opnd = (OOC_SSA__Opnd)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21232));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21242)))), &_td_OOC_SSA__TypeRefDesc, 21242)), 21250))+44);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21266)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21295)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21346))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21324)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21364)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_FailedCheck(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d, OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(fct,OOC_CHAR8 ,fct_0d)

      OOC_INITIALIZE_VPAR(fct__ref,fct,OOC_CHAR8 ,fct_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21501)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21519)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)fct, fct_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21547)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
      i0 = (OOC_INT32)opnd;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21604)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21627)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
l4:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21685))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21667)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21703)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21919))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21929));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21934))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 21941))+36);
      i1 = i1==63;
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22388))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22398));
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22404)))), &_td_OOC_SSA__DeclRefDesc));
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22764))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22753)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      goto l8;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22519))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22534)))), &_td_OOC_SSA__TypedOpndDesc, 22534)), 22544))+20);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22555)))), &_td_OOC_SymbolTable__FormalParsDesc, 22555);
      procType = (OOC_SymbolTable__FormalPars)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22577)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'(');
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22605)))), OOC_C_DeclWriter__WriterDesc_WriteTypeCast)),OOC_C_DeclWriter__WriterDesc_WriteTypeCast)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i1);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22692))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22681)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22714)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)')');
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22065))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22075));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22080))+8);
      adr = (OOC_SSA__Instr)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22108))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22118))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22128));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22133))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22145)))), &_td_OOC_SSA__DeclRefDesc, 22145)), 22153))+44);
      decl = (OOC_SymbolTable__Declaration)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22170)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "OOC_TBCALL(", 12);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22221))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22210)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i3);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22243)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)',');
      i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22320)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22351)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)')');
l8:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22795)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22835))+24);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i0, 1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22865)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteDyadicOp(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(op,OOC_CHAR8 ,op_0d)

      OOC_INITIALIZE_VPAR(op__ref,op,OOC_CHAR8 ,op_0d)
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22996))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22984)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23016)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)op, op_0d);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23055))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23065))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23043)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteDyadicFct(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(fct,OOC_CHAR8 ,fct_0d)

      OOC_INITIALIZE_VPAR(fct__ref,fct,OOC_CHAR8 ,fct_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23188)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)fct, fct_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23216)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'(');
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23254))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23242)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23274)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)',');
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23312))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23322))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23300)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23342)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23481)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)op, op_0d);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23520))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23508)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23540)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CastFromPtr(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)res;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 23657))+5);
      i0 = i0==9;
      if (!i0) goto l4;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23702)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 23748))+24)+(_check_index(i1, 17, OOC_UINT8, 23759))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23732)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 23788))+1), 32);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23806)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23998)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "RT0__NewObject(", 16);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24052)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 12);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24127));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24137)))), &_td_OOC_SSA__TypeRefDesc, 24137)), 24145))+44);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24161)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24190)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ".baseTypes[0]", 14);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24242))+8);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 24286))+4);
      i1 = i1==1;
      
l5:
      if (!i1) goto l16;
l7_loop:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24318)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24349)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24383))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l10;
      i1=OOC_FALSE;
      goto l12;
l10:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 24286))+4);
      i1 = i1==1;
      
l12:
      if (i1) goto l7_loop;
l16:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24413)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_NewBlock(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24571)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "RT0__NewBlock(", 15);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24624)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 1);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24658)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24679)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeCast(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 destType;
      OOC_INT8 sourceType;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = *(OOC_INT8*)((_check_pointer(i0, 24906))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      destType = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24975))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 24985));
      i2 = *(OOC_INT8*)((_check_pointer(i2, 24990))+5);
      i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
      sourceType = i2;
      i3 = OOC_SSA_Opcode__ConvDiffersFromCast(i2, i1);
      if (i3) goto l3;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 25127)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_type_cast_fast(", 17);
      goto l4;
l3:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 25076)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_type_cast(", 12);
l4:
      i3 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i3, 25197))+24)+(_check_index(i1, 17, OOC_UINT8, 25208))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 25181)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, (void*)((_check_pointer(i1, 25218))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25234)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 25279))+24)+(_check_index(i2, 17, OOC_UINT8, 25290))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25263)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 25302))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25318)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25359))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25347)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25379)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeConv(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 destType;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 25565))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      destType = i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25585)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(", 2);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 25629))+24)+(_check_index(i1, 17, OOC_UINT8, 25640))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25613)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 25650))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25666)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25706))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25694)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeTag(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25858))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25868));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25874)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26042))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 26052));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26058)))), &_td_OOC_SSA__TypeRefDesc);
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26245)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_TYPE_TAG(", 14);
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26299))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26287)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26321)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)')');
      goto l8;
l5:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26088)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'&');
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26157))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26167));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26177)))), &_td_OOC_SSA__TypeRefDesc, 26177)), 26185))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26203)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      goto l8;
l7:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25943))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25953));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25963)))), &_td_OOC_SSA__DeclRefDesc, 25963)), 25971))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeTagParam((OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25982)))), &_td_OOC_SymbolTable__VarDeclDesc, 25982)));
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26002)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
l8:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeTest(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      Object__String name;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26479)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_TYPE_TEST(", 15);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26532))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26520)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26552)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", &", 4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26594))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26604))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26663));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26673)))), &_td_OOC_SSA__TypeRefDesc, 26673)), 26681))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26697)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26726)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TBProcAddress(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26884)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_TBPROC_ADR(", 16);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26938))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26926)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26958)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27025))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27035))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27045));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27055)))), &_td_OOC_SSA__DeclRefDesc, 27055)), 27063))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27079)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27108)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CopyParameter(OOC_SSA__Address instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__VarDecl varDecl;
      Object__String name;

      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27291))+44);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27302)))), &_td_OOC_SymbolTable__VarDeclDesc, 27302);
      varDecl = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
      name = (Object__String)i2;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27376)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27394)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "OOC_INITIALIZE_VPAR(", 21);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27441)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27470)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "__ref,", 7);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27522)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriteTypeAndLength((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i0, (OOC_SymbolTable__VarDecl)i1, OOC_TRUE);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Copy(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27705)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27735))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27745))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27755));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27765)))), &_td_OOC_SSA__TypeRefDesc, 27765)), 27773))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27788)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_copy_block(", 13);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27839)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27827)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i3);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27878)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)',');
      i2 = (OOC_INT32)w;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27916)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27904)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27956)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)',');
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 27999))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27982)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28018)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    OOC_INT32 OOC_SSA_WriteC__WriteExpr_TypeId(OOC_SSA__Result res) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28134)))), &_td_OOC_SSA__TypeRefDesc, 28134)), 28142))+44);
      i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28153)))), &_td_OOC_SymbolTable__PredefTypeDesc, 28153)), 28164))+32);
      return i0;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CopyString(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 source;
      OOC_INT32 dest;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28286)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28326)))), OOC_SSA__InstrDesc_NthArg)),OOC_SSA__InstrDesc_NthArg)((OOC_SSA__Instr)i0, 1);
      i1 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i1);
      source = i1;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28368)))), OOC_SSA__InstrDesc_NthArg)),OOC_SSA__InstrDesc_NthArg)((OOC_SSA__Instr)i0, 2);
      i2 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i2);
      dest = i2;
      i3 = i1==1;
      if (i3) goto l12;
      i1 = i1==2;
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28907)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_32(", 10);
      goto l18;
l5:
      switch (i2) {
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28724)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_16(", 10);
        goto l18;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28781)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_16to32(", 14);
        goto l18;
      default:
        _failed_case(i2, 28683);
        goto l18;
      }
l12:
      switch (i2) {
      case 1:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28470)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8(", 9);
        goto l18;
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28526)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8to16(", 13);
        goto l18;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28586)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8to32(", 13);
        goto l18;
      default:
        _failed_case(i2, 28429);
        goto l18;
      }
l18:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28954)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(const void*)", 14);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29006)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28994)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29045)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ",(void*)", 9);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29092)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29080)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29132)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)',');
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29170)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29158)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29205)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CmpString(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29308)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29342)))), OOC_SSA__InstrDesc_NthArg)),OOC_SSA__InstrDesc_NthArg)((OOC_SSA__Instr)i0, 1);
      i1 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i1);
      switch (i1) {
      case 1:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29383)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp8((const void*)", 20);
        goto l6;
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29446)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp16((const void*)", 21);
        goto l6;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29510)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp32((const void*)", 21);
        goto l6;
      default:
        _failed_case(i1, 29325);
        goto l6;
      }
l6:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29578)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 4);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29616)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29637)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",(const void*)", 15);
l7_loop:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29760))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 29789))+4);
      i1 = i1==4;
      if (!i1) goto l7_loop;
l11:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29821)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29842)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Concat(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29995)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Object__Concat2(", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30065))+24);
      i2 = i1!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i1;
      if (!i2) goto l11;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30128))+24);
      i2 = i1!=i2;
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30155)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ",", 2);
l6:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30197)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(void*)", 8);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30232)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30264))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30293)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_MoveBlock(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30391)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30409)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_move_block(", 13);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30460)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30448)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30499)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)',');
      i0 = (OOC_INT32)w;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30537)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30525)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30577)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)',');
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30615)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30603)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30650)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Shift(OOC_SSA__Instr instr, OOC_CHAR8 rotate) {
      register OOC_INT32 i0,i1,i2;

      i0 = rotate;
      if (i0) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30833)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_lsh(", 6);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30788)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_rot(", 6);
l4:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 30940))+5);
      i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 30892))+24)+(_check_index(i2, 17, OOC_UINT8, 30903))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30876)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 30952))+1), 32);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30968)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31009))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30997)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31029)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31070))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31080))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31058)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31100)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Indexed(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31206))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31194)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31226)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'+');
      i0 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31264))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31274))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31252)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31294)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'*');
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31332))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31342))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31352))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31320)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31554)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, i1);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31598));
      adr = (OOC_SSA__Result)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31625))+8);
      design = (OOC_SSA__Opnd)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31651)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l9;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31686))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31724))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 31734))+4);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 31750))+4);
      i0 = i1!=i0;
      
      goto l9;
l6:
      i0=OOC_TRUE;
l9:
      if (i0) goto l11;
      return OOC_FALSE;
      goto l12;
l11:
      return OOC_TRUE;
l12:
      _failed_function(31397); return 0;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_PreloadedVar(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_C_DeclWriter__Writer wd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32105)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_c", 3);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32144))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32167))+92);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32178))+28);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 32192))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32144))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32155)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i3, 0);
      i1 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32217))+92);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32228))+4);
      wd = (OOC_C_DeclWriter__Writer)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32241)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32259)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "static void* _c", 16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32315))+8);
      i3 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32338))+92);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32349))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32315))+8);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 32363))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32326)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i4, i3, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32382)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32415))+92);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32426))+28);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32415))+92);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32426))+28);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32440)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32503))+36);
  switch (i1) {
  case 12:
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    i0 = (OOC_INT32)instr;
    i0 = OOC_SSA_WriteC__WriteExpr_SimpleVarAccess((OOC_SSA__Instr)i0, 4);
    if (i0) goto l5;
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32687)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*(", 3);
    i1 = (OOC_INT32)instr;
    i2 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
    i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 32734))+24)+(_check_index(i2, 17, OOC_UINT8, 32770))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32718)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 32799))+1), 32);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32817)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*)", 3);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32860))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32870))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32848)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
    goto l81;
l5:
    i0 = (OOC_INT32)w;
    i1 = (OOC_INT32)instr;
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32633)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32621)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
    goto l81;
  case 13:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32926)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    i0 = OOC_SSA_WriteC__WriteExpr_SimpleVarAccess((OOC_SSA__Instr)i0, 6);
    i1 = (OOC_INT32)w;
    i2 = (OOC_INT32)instr;
    if (i0) goto l10;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33231)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "*(", 3);
    i0 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i2);
    i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 33278))+24)+(_check_index(i0, 17, OOC_UINT8, 33314))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33262)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i0, 33343))+1), 32);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33361)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "*)", 3);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33404))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33414))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33392)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33436)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " = ", 4);
    goto l11;
l10:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33011)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32999)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33067)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i2, 7);
    var = (OOC_SSA__Result)i0;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33110)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " = ", 4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33168)))), &_td_OOC_SSA__DeclRefDesc, 33168)), 33176))+44);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 33187)))), &_td_OOC_SymbolTable__VarDeclDesc, 33187)), 33195))+40);
    OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Result)i0, (OOC_SymbolTable__Type)i3, OOC_FALSE);
l11:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33489)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33477)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
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
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33805)))), OOC_SSA_WriteC__WriterDesc_LengthExprHeap)),OOC_SSA_WriteC__WriterDesc_LengthExprHeap)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    goto l81;
  case 57:
    goto l81;
  case 58:
    OOC_SSA_WriteC__WriteExpr_CopyParameter((OOC_SSA__Address)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33995)))), &_td_OOC_SSA__AddressDesc, 33995)));
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
    i1 = *(OOC_INT8*)((_check_pointer(i0, 34628))+5);
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
    OOC_SSA_WriteC__WriteExpr_Shift((OOC_SSA__Instr)i0, OOC_FALSE);
    goto l81;
  case 53:
    OOC_SSA_WriteC__WriteExpr_Shift((OOC_SSA__Instr)i0, OOC_TRUE);
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
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "<", 2);
    goto l81;
  case 28:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "<=", 3);
    goto l81;
  case 29:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, ">", 2);
    goto l81;
  case 30:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, ">=", 3);
    goto l81;
  case 64:
    OOC_SSA_WriteC__WriteExpr_Assert((OOC_SSA__Instr)i0);
    goto l81;
  case 65:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36543)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36561)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_halt(", 7);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36606))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36616))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36594)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36636)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
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
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36883))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36893))+8);
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_case", 13, (OOC_SSA__Opnd)i1);
    goto l81;
  case 70:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36978))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36988))+8);
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_with", 13, (OOC_SSA__Opnd)i1);
    goto l81;
  case 71:
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_type_assert", 20, (OOC_SSA__Opnd)(OOC_INT32)0);
    goto l81;
  case 55:
    i1 = (OOC_INT32)w;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37124))+96);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37124))+96);
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37137)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i3, (Object__Object)i0);
    i2 = !i2;
    if (i2) goto l76;
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    goto l77;
l76:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37168)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
l77:
    i0 = (OOC_INT32)instr;
    OOC_SSA_WriteC__WriteExpr_Call((OOC_SSA__Instr)i0);
    goto l81;
  case 75:
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37289)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "Exception__Current()", 21);
    goto l81;
  case 80:
    OOC_SSA_WriteC__WriteExpr_PreloadedVar((OOC_SSA__Instr)i0);
    goto l81;
  default:
    _failed_case(i1, 32493);
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
  Object__Object obj;
  auto void OOC_SSA_WriteC__WriterDesc_WriteInstrList_WriteCollect(OOC_SSA__Instr collect, OOC_SSA__Instr targetInstr);
  auto void OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn();
  auto OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed(OOC_SSA__Instr selectReturn);
    
    void OOC_SSA_WriteC__WriterDesc_WriteInstrList_WriteCollect(OOC_SSA__Instr collect, OOC_SSA__Instr targetInstr) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Result res;
      Object__Object targetVar;
      Object__Object sourceVar;
      OOC_INT32 i;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37827)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37965)))), OOC_SSA_WriteC__WriterDesc_ClearSwapData)),OOC_SSA_WriteC__WriterDesc_ClearSwapData)((OOC_SSA_WriteC__Writer)i0);
      i0 = (OOC_INT32)collect;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38003))+24);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = (OOC_INT32)targetInstr;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 38039));
      i4 = i1!=(OOC_INT32)0;
      res = (OOC_SSA__Result)i3;
      if (i4) goto l3;
      i4=OOC_FALSE;
      goto l5;
l3:
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38085)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i1);
      i4 = !i4;
      
l5:
      if (!i4) goto l22;
l7_loop:
      i4 = *(OOC_INT8*)((_check_pointer(i1, 38123))+4);
      i4 = i4!=2;
      if (!i4) goto l13;
      i4 = (OOC_INT32)w;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 38174))+96);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 38174))+96);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38187)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
      targetVar = (Object__Object)i4;
      i5 = (OOC_INT32)w;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38214))+96);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38214))+96);
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 38241));
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 38227)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i5, (Object__Object)i7);
      if (!i5) goto l13;
      i5 = (OOC_INT32)w;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38279))+96);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38279))+96);
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 38303));
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 38292)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i5, (Object__Object)i7);
      sourceVar = (Object__Object)i5;
      i6 = (OOC_INT32)w;
      i7 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 38324)))), OOC_SSA_WriteC__WriterDesc_AddSwapData)),OOC_SSA_WriteC__WriterDesc_AddSwapData)((OOC_SSA_WriteC__Writer)i6, (Object__String)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38349)))), &_td_Object__StringDesc, 38349)), (Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 38396)))), &_td_Object__StringDesc, 38396)), i7);
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38508))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 38530));
      res = (OOC_SSA__Result)i3;
      i4 = i1!=(OOC_INT32)0;
      if (i4) goto l16;
      i4=OOC_FALSE;
      goto l18;
l16:
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38085)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i1);
      i4 = !i4;
      
l18:
      if (i4) goto l7_loop;
l22:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38684)))), OOC_SSA_WriteC__WriterDesc_CountReadsSwapData)),OOC_SSA_WriteC__WriterDesc_CountReadsSwapData)((OOC_SSA_WriteC__Writer)i1);
      i1 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 38720))+112);
      i1 = i1!=0;
      if (!i1) goto l51;
l25_loop:
      i = 0;
      i1 = (OOC_INT32)w;
      i3 = *(OOC_INT32*)((_check_pointer(i1, 38782))+112);
      i3 = 0!=i3;
      if (i3) goto l28;
      i3=OOC_FALSE;
      goto l30;
l28:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38805))+108);
      i3 = _check_pointer(i3, 38816);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_INT32*)((i3+((_check_index(0, i4, OOC_UINT32, 38816))*16))+8);
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
      i4 = *(OOC_INT32*)((_check_pointer(i1, 38782))+112);
      i4 = i3!=i4;
      if (i4) goto l36;
      i4=OOC_FALSE;
      goto l38;
l36:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38805))+108);
      i4 = _check_pointer(i4, 38816);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 38816))*16))+8);
      i4 = i4!=0;
      
l38:
      if (i4) goto l33_loop;
l42:
      i4 = *(OOC_INT32*)((_check_pointer(i1, 38888))+112);
      i4 = i3==i4;
      if (i4) goto l45;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39047))+108);
      i4 = _check_pointer(i4, 39058);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 39058))*16))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39031)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39081)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "=", 2);
      i1 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39129))+108);
      i4 = _check_pointer(i4, 39140);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 39140))*16));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39113)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39165)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)';');
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39195)))), OOC_SSA_WriteC__WriterDesc_RemoveSwapData)),OOC_SSA_WriteC__WriterDesc_RemoveSwapData)((OOC_SSA_WriteC__Writer)i1, i3);
      goto l46;
l45:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38923)))), OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar)),OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar)((OOC_SSA_WriteC__Writer)i1, 0);
l46:
      i1 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 38720))+112);
      i1 = i1!=0;
      if (i1) goto l25_loop;
l51:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39247)))), OOC_SSA_WriteC__WriterDesc_FixupHelperVars)),OOC_SSA_WriteC__WriterDesc_FixupHelperVars)((OOC_SSA_WriteC__Writer)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39372))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 39408));
      res = (OOC_SSA__Result)i1;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l54;
      i2=OOC_FALSE;
      goto l56;
l54:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39454)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
      i2 = !i2;
      
l56:
      if (!i2) goto l73;
l58_loop:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 39492))+4);
      i2 = i2!=2;
      if (!i2) goto l64;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39543))+96);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39543))+96);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39556)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
      targetVar = (Object__Object)i2;
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 39584))+96);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 39584))+96);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39611));
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 39597)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i3, (Object__Object)i5);
      i3 = !i3;
      if (!i3) goto l64;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39636)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39676)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "=", 2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39710)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39737)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)';');
l64:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39803))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 39825));
      res = (OOC_SSA__Result)i1;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l67;
      i2=OOC_FALSE;
      goto l69;
l67:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39454)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
      i2 = !i2;
      
l69:
      if (i2) goto l58_loop;
l73:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39966)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed(OOC_SSA__Instr selectReturn) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)selectReturn;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40479))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40489))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40518))+8);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l9;
l4_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40559))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40518))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l4_loop;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40600));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40605))+8);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 40612))+36);
      return (i0==7);
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40688))+8);
  i1 = i0!=(OOC_INT32)0;
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  if (!i1) goto l58;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40748))+12);
  instr = (OOC_SSA__Instr)i0;
  target = (Object__Object)(OOC_INT32)0;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40985))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40985))+96);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 40998)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i3, (Object__Object)i0);
  if (i2) goto l6;
  i2=(OOC_INT32)0;
  goto l10;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41039))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41039))+96);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 41052)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i0);
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i3 = i2!=i3;
  target = (Object__Object)i2;
  if (!i3) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41127)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41292)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41327)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " = ", 4);
l10:
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l53;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 41587))+36);
  switch (i2) {
  case 0:
    goto l53;
  case 1:
    goto l53;
  case 2:
    goto l53;
  case 3:
    goto l53;
  case 4:
    goto l53;
  case 5:
    goto l53;
  case 81:
    goto l53;
  case 10:
    goto l53;
  case 11:
    goto l53;
  case 9:
    goto l53;
  case 6:
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42364)))), OOC_SSA__InstrDesc_GetCollectTarget)),OOC_SSA__InstrDesc_GetCollectTarget)((OOC_SSA__Instr)i0);
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_WriteCollect((OOC_SSA__Instr)i0, (OOC_SSA__Instr)i1);
    goto l53;
  case 7:
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn();
    i0 = (OOC_INT32)instr;
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42460)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 9);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = i0!=(OOC_INT32)0;
    i2 = (OOC_INT32)w;
    if (i1) goto l28;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42740)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "return", 7);
    goto l29;
l28:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42542)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "return ", 8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42630))+104);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42641))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42651))+52);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42663))+36);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 42599));
    OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Result)i3, (OOC_SymbolTable__Type)i1, OOC_FALSE);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42698)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
l29:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42791)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)';');
    goto l53;
  case 8:
    i0 = OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed((OOC_SSA__Instr)i0);
    i0 = !i0;
    if (!i0) goto l53;
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn();
    i0 = (OOC_INT32)w;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42936))+104);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42947))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42957))+52);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42969))+36);
    i1 = i1!=(OOC_INT32)0;
    if (i1) goto l35;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43308)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return;", 8);
    goto l53;
l35:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43012))+104);
    i1 = *(OOC_UINT8*)((_check_pointer(i1, 43023))+20);
    if (!i1) goto l38;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43067)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_failed_function(", 18);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43135))+104);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43146))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43156))+16);
    i1 = *(OOC_INT32*)(_check_pointer(i1, 43162));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43121)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43190)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "); ", 4);
l38:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43247)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return 0;", 10);
    goto l53;
  case 72:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43415)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43436)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "{", 2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43466)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, 1);
    goto l53;
  case 73:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43514)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43544)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, -1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43568)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43589)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "}", 2);
    goto l53;
  case 74:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43652)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43673)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Raise((void*)", 25);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43736)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43726)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43761)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l53;
  case 77:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43831)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43852)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__PushContext(&_context", 33);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43920))+100);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43940))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 43949));
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43920))+100);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43953))+8);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43930)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i0);
    obj = (Object__Object)i0;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43973)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44003)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", &_target", 11);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44042)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44072)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l53;
  case 78:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44141)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44162)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__PopContext(", 23);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44230))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44239))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 44248));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44257)))), &_td_OOC_SSA__ConstDesc, 44257)), 44263))+44);
    i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44213)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, (OOC_SymbolTable__Type)i2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44338)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l53;
  case 76:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44402)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44423)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Clear();", 20);
    goto l53;
  case 79:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44505)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44526)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__ActivateContext();", 30);
    goto l53;
  default:
    OOC_SSA_WriteC__WriteExpr((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44637)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
    i0 = !i0;
    if (!i0) goto l53;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44709)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)';');
    goto l53;
  }
l53:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 44794));
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l58:
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45266)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "l", 2);
      i1 = (OOC_INT32)w;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 45310))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45296)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i2, 0);
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 45332))+28);
      if (!i0) goto l7;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45361)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_loop", 6);
      goto l7;
l6:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45205)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "XXX WriteBlockId(NIL)", 22);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45594)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "goto ", 6);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45659)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)';');
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45531)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "/* goto: unreachable */", 24);
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
          register OOC_INT32 i0;

          i0 = (OOC_INT32)nested;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l8;
l3_loop:
          i0 = (OOC_INT32)nested;
          OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45974));
          nested = (OOC_SSA_Schedule__Block)i0;
          i0 = i0!=(OOC_INT32)0;
          if (i0) goto l3_loop;
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
          i1 = *(OOC_INT8*)((_check_pointer(i0, 46143))+36);
          i1 = i1==81;
          if (i1) goto l3;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46706)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46728)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "default:", 9);
          goto l15;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46197))+24);
          i1 = i0!=(OOC_INT32)0;
          opnd = (OOC_SSA__Opnd)i0;
          if (!i1) goto l15;
l6_loop:
          lower = (OOC_SSA__Opnd)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46292))+8);
          opnd = (OOC_SSA__Opnd)i1;
          upper = (OOC_SSA__Opnd)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46355))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 46393)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 46417)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "case ", 6);
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 46455)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i0);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 46504));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 46491));
          i0 = i0!=i3;
          if (!i0) goto l9;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46531)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ... ", 6);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46601)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
l9:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46646)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ":", 2);
          i0 = i2!=(OOC_INT32)0;
          if (!i0) goto l15;
          i0=i2;
          goto l6_loop;
l15:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 46817))+36);
      i1 = i1!=0;
      if (i1) goto l3;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46840)))), &_td_OOC_SSA_Schedule__JumpBlockDesc));
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (!i1) goto l21;
      i1 = (OOC_INT32)registeredGoto;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9;
      i1=OOC_FALSE;
      goto l11;
l9:
      i1 = i1!=i0;
      
l11:
      if (!i1) goto l13;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46941)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)registeredGoto;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      registeredGoto = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
l13:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 47051))+36);
      i2 = (OOC_INT32)registeredGoto;
      i2 = i0==i2;
      d = i1;
      if (!i2) goto l17;
      i1 = i1-1;
      d = i1;
      
l17:
      i1 = i1!=0;
      if (!i1) goto l20;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47167)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i1);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId((OOC_SSA_Schedule__Block)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47217)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)':');
l20:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47258)))), OOC_SSA_WriteC__WriterDesc_WriteInstrList)),OOC_SSA_WriteC__WriterDesc_WriteInstrList)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA_Schedule__Block)i0);
l21:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47310)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47981)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48762)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48962)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l30;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48959)))), 48959);
      goto l67;
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49011))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l32:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 48799))+36);
      i1 = i1!=0;
      if (!i1) goto l35;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48891))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48897))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
l35:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48940))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l37:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48016)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48036)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "switch (", 9);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48081))+48);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48073)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48099)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") {", 4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48152))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      i = 0;
      if (i2) goto l40;
      i0=OOC_FALSE;
      goto l42;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48213))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 48219)), (OOC_INT32)0);
      i0 = 0!=i0;
      
l42:
      if (i0) goto l44;
      i0=i1;
      goto l54;
l44:
      i0=i1;i1=0;
l45_loop:
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 48254))+52);
      i3 = _check_pointer(i3, 48260);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 48260))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 48263))+4);
      _assert((i0==i3), 127, 48236);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 48295))+60);
      i0 = _check_pointer(i0, 48307);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 48307))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 48310));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48315))+8);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteCases((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48347)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i0, 1);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48390))+52);
      i1 = _check_pointer(i1, 48396);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = i;
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 48396))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48399))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48430))+52);
      i1 = _check_pointer(i1, 48436);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 48436))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48439))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48459)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)registeredGoto;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48519)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, -1);
      i1 = (OOC_INT32)nested;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 48560));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i3+1;
      i = i2;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l48;
      i0=OOC_FALSE;
      goto l50;
l48:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48213))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 48219)), (OOC_INT32)0);
      i0 = i2!=i0;
      
l50:
      if (!i0) goto l53;
      i0=i1;i1=i2;
      goto l45_loop;
l53:
      i0=i1;
l54:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 48615));
      _assert((i1==(OOC_INT32)0), 127, 48601);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48642)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48662)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "}", 2);
      registeredGoto = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l56:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47345)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47365)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "if (", 5);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47402)))), OOC_SSA_Schedule__BranchBlockDesc_DefaultTarget)),OOC_SSA_Schedule__BranchBlockDesc_DefaultTarget)((OOC_SSA_Schedule__BranchBlock)i0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47423))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47429))+4);
      i1 = i1==i2;
      if (i1) goto l62;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 47700))+56);
      if (!i1) goto l61;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47733)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'!');
l61:
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47785))+52);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47777)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47810)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47854))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47860))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47898))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47908))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
      goto l66;
l62:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 47457))+56);
      i1 = !i1;
      if (!i1) goto l65;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47490)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'!');
l65:
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47542))+52);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47534)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47567)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47611))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47621))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47659))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47665))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
l66:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47951))+16);
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
  volatile OOC_SSA_Schedule__Block domRoot;
  volatile ADT_Dictionary__Dictionary jmpbufMap;
  volatile ADT_Dictionary__Dictionary registerMap;
  volatile OOC_SSA_WriteC__Writer w;
  volatile OOC_INT32 oldSize;
  volatile OOC_SSA__Instr instr;
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl(ADT_Dictionary__Dictionary jmpbufMap);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], volatile OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], volatile OOC_LEN post_0d);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars(ADT_ArrayList__ArrayList vars);
  jmp_buf _target0;
  Exception__Context _context0;
    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl(ADT_Dictionary__Dictionary jmpbufMap) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;

      i0 = (OOC_INT32)jmpbufMap;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49592)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49611)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "jmp_buf ", 9);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49668)))), ADT_Dictionary__DictionaryDesc_Size)),ADT_Dictionary__DictionaryDesc_Size)((ADT_Dictionary__Dictionary)i0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l13;
      i2=0;
l5_loop:
      i3 = i2!=0;
      if (!i3) goto l8;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49708)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l8:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49743)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_target", 8);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49769)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i3, i2, 0);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l5_loop;
l13:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49809)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49838)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49857)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Context ", 20);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49925)))), ADT_Dictionary__DictionaryDesc_Size)),ADT_Dictionary__DictionaryDesc_Size)((ADT_Dictionary__Dictionary)i0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l24;
      i1=0;
l16_loop:
      i2 = i1!=0;
      if (!i2) goto l19;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49965)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ", ", 3);
l19:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 50000)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_context", 9);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 50027)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i2, i1, 0);
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l16_loop;
l24:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50067)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
l25:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], volatile OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], volatile OOC_LEN post_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(pre,OOC_CHAR8 ,pre_0d)
      OOC_ALLOCATE_VPAR(post,OOC_CHAR8 ,post_0d)
      jmp_buf _target0;
      Exception__Context _context0;

      OOC_INITIALIZE_VPAR(pre__ref,pre,OOC_CHAR8 ,pre_0d)
      OOC_INITIALIZE_VPAR(post__ref,post,OOC_CHAR8 ,post_0d)
      i0 = writeProc;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l9;
l3:
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50214))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50214))+20);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50228)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)pre, pre_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l6;
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50276))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50276))+20);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50290)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)post, post_0d, 0, -1);
      i0 = i0!=(OOC_INT32)0;
      
      goto l9;
l6:
      i0=OOC_TRUE;
l9:
      if (!i0) goto l18;
      Out__String("PROCEDURE ", 11);
      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50387))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50397))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50403))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50387))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50397))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50403))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 50408)), (OOC_INT32)0);
      Out__String((void*)(_check_pointer(i1, 50408)), i0);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)pre, pre_0d);
      Out__String("/", 2);
      Out__String((void*)(OOC_INT32)post, post_0d);
      Out__String(":", 2);
      Out__Ln();
      Out__Flush();
      {
        if (!setjmp(_target0)) goto l16;
        Exception__PopContext(1);
        i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
        if (i0) goto l15;
        Exception__ActivateContext();
l15:
        Exception__Clear();
        goto l17;
l16:
        Exception__PushContext(&_context0, &_target0);
        i0 = (OOC_INT32)IO_StdChannels__stdout;
        i1 = (OOC_INT32)pb;
        OOC_SSA_XML__Write((IO__ByteChannel)i0, (OOC_SSA__ProcBlock)i1, OOC_TRUE);
        Exception__PopContext(1);
l17:;
      }
      Out__Flush();
l18:
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50888))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 50894))+28);
          i1 = !i1;
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50942))+4);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50924)))), OOC_SSA_WriteC__WriterDesc_EmptyBlock)),OOC_SSA_WriteC__WriterDesc_EmptyBlock)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA_Schedule__Block)i2);
          
l5:
          if (i1) goto l7;
          i1=OOC_FALSE;
          goto l9;
l7:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50971))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 50984));
          i1 = i1!=i2;
          
l9:
          if (!i1) goto l24;
l11_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51079))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51094)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 51094)), 51104))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51109))+4);
          OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50888))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 50894))+28);
          i1 = !i1;
          if (i1) goto l14;
          i1=OOC_FALSE;
          goto l16;
l14:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50942))+4);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50924)))), OOC_SSA_WriteC__WriterDesc_EmptyBlock)),OOC_SSA_WriteC__WriterDesc_EmptyBlock)((OOC_SSA_WriteC__Writer)i1, (OOC_SSA_Schedule__Block)i2);
          
l16:
          if (i1) goto l18;
          i1=OOC_FALSE;
          goto l20;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50971))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 50984));
          i1 = i1!=i2;
          
l20:
          if (i1) goto l11_loop;
l24:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51174)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51272)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51361)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l10;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51420)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l14;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51417)))), 51417);
      goto l14;
l10:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 51401))+48));
      goto l14;
l13:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 51216))+48));
      i0 = (OOC_INT32)b;
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 51241))+60));
l14:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51504))+16);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i0;
      if (!i1) goto l22;
l17_loop:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51600));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51961)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (!i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52000))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52010))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 52016))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 52024))+40);
      i1 = i1>i2;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52045))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52051))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 52057))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 52066))+40);
      i1 = i1<=i2;
      
l7:
      if (i1) goto l16;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52220))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52230))+4);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 52212))+40);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 52236))+40);
      i1 = i2<i1;
      if (i1) goto l11;
      i1=OOC_FALSE;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52260))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52270))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52284))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 52290))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 52276))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 52296))+40);
      i1 = i1<i2;
      
l13:
      if (!i1) goto l18;
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch((void*)((_check_pointer(i0, 52380))+56), (void*)((_check_pointer(i0, 52397))+60), (void*)((_check_pointer(i0, 52410))+48));
      goto l18;
l16:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch((void*)((_check_pointer(i0, 52157))+56), (void*)((_check_pointer(i0, 52174))+60), (void*)((_check_pointer(i0, 52187))+48));
l18:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52499))+16);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i0;
      if (!i1) goto l26;
l21_loop:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52596));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l21_loop;
l26:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars(ADT_ArrayList__ArrayList vars) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 i;
      OOC_SSA__Opnd opnd;
      Object__CharsLatin1 chars;
      OOC_INT32 count;

      i0 = (OOC_INT32)vars;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 52822))+4);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l19;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52842)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52861)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_c", 3);
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52902))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52902))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 52913)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i3, i2, 0);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52940)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, " = ", 4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52982));
      i3 = _check_pointer(i3, 52988);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 52988))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52996)))), &_td_OOC_SSA__InstrDesc, 52996)), 53002))+24);
      opnd = (OOC_SSA__Opnd)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 53035));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 53044)))), &_td_OOC_SSA__ConstDesc, 53044)), 53050))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 53063)))), &_td_Object_Boxed__StringDesc, 53063)), 53070));
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 53035));
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 53044)))), &_td_OOC_SSA__ConstDesc, 53044)), 53050))+44);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 53063)))), &_td_Object_Boxed__StringDesc, 53063)), 53070));
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 53084)))), &_td_Object__String8Desc, 53084)), 53092)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 53084)))), &_td_Object__String8Desc, 53084)));
      chars = (Object__CharsLatin1)i4;
      i5 = (OOC_INT32)w;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 53135)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 53117)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i5, (void*)(_check_pointer(i4, 53135)), i6);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 53148)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i4, "(", 2);
      count = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 53207))+8);
      opnd = (OOC_SSA__Opnd)i3;
      i4 = i3!=(OOC_INT32)0;
      if (!i4) goto l14;
      i4=i3;i3=0;
l6_loop:
      i5 = i3!=0;
      if (!i5) goto l9;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 53292)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i5, ", ", 3);
l9:
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 53338)))), OOC_SSA_WriteC__WriterDesc_Ref)),OOC_SSA_WriteC__WriterDesc_Ref)((OOC_SSA_WriteC__Writer)i5, (OOC_SSA__Opnd)i4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 53372))+8);
      opnd = (OOC_SSA__Opnd)i4;
      i3 = i3+1;
      count = i3;
      i5 = i4!=(OOC_INT32)0;
      if (i5) goto l6_loop;
l14:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53429)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ");", 3);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l3_loop;
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)proc;
  i1 = (OOC_INT32)OOC_SSA__NewProcBlock((OOC_IR__Procedure)i0);
  pb = (OOC_SSA__ProcBlock)i1;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 53609))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53640))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 53646))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 53652))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53640))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 53646))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 53652))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 53657)), (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 53609))+16);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53622)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i2, (void*)(_check_pointer(i4, 53657)), i5, 0, -1);
  writeProc = (i2!=(OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 53690));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 53704))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 53714));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 53719))+8);
  enter = (OOC_SSA__Instr)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 53764));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53809))+8);
  i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i1, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i0);
  s = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 53828));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 53828));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53842)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 2);
  OOC_SSA_IRtoSSA__DiscardGets((OOC_SSA__ProcBlock)i1);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("initial", 8, "dce-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("dce-post", 9, "destore-pre", 12);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54141)))), OOC_SSA_Destore__StateDesc_Transform)),OOC_SSA_Destore__StateDesc_Transform)((OOC_SSA_Destore__State)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("destore-post", 13, "constprop-pre", 14);
  i0 = (OOC_INT32)pb;
  OOC_SSA_ConstProp__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("constprop-post", 15, "algebraic-pre", 14);
  i0 = (OOC_INT32)pb;
  OOC_SSA_Algebraic__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("algebraic-post", 15, "cse-pre", 8);
  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_CSE__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("cse-post", 9, "final", 6);
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Schedule__Schedule((OOC_SSA__ProcBlock)i0);
  domRoot = (OOC_SSA_Schedule__Block)i0;
  i1 = writeProc;
  if (!i1) goto l13;
  i1 = (OOC_INT32)t;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54572))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54572))+20);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54586)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i1, "schedule", 9, 0, -1);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
  {
    if (!setjmp(_target0)) goto l10;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l9;
    Exception__ActivateContext();
l9:
    Exception__Clear();
    goto l11;
l10:
    Exception__PushContext(&_context0, &_target0);
    i1 = (OOC_INT32)IO_StdChannels__stdout;
    OOC_SSA_XML__WriteSchedule((IO__ByteChannel)i1, (OOC_SSA_Schedule__Block)i0);
    Exception__PopContext(1);
l11:;
  }
  Out__Flush();
l13:
  i0 = (OOC_INT32)pb;
  OOC_SSA_WriteC__Fixup((OOC_SSA__ProcBlock)i0, (void*)(OOC_INT32)&jmpbufMap);
  i1 = (OOC_INT32)t;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 54862));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 54862));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54865)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i3, 1);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 54939));
  i3 = (OOC_INT32)domRoot;
  i2 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters((OOC_SSA__ProcBlock)i0, (OOC_SSA_Schedule__Block)i3, (OOC_C_DeclWriter__Writer)i2);
  registerMap = (ADT_Dictionary__Dictionary)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 54969));
  i4 = (OOC_INT32)jmpbufMap;
  i2 = (OOC_INT32)OOC_SSA_WriteC__NewWriter((OOC_SSA_WriteC__Translator)i1, (OOC_C_DeclWriter__Writer)i3, (OOC_SSA__ProcBlock)i0, (ADT_Dictionary__Dictionary)i2, (ADT_Dictionary__Dictionary)i4);
  i3 = (OOC_INT32)jmpbufMap;
  w = (OOC_SSA_WriteC__Writer)i2;
  OOC_SSA_WriteC__WriteLocalDecl((OOC_SSA_WriteC__Translator)i1, (OOC_SSA_WriteC__Writer)i2, (OOC_SSA__ProcBlock)i0, (i3!=(OOC_INT32)0));
  i0 = (OOC_INT32)jmpbufMap;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55094))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55094))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55099)))), OOC_SymbolTable__ProcDeclDesc_IsModuleBody)),OOC_SymbolTable__ProcDeclDesc_IsModuleBody)((OOC_SymbolTable__ProcDecl)i0);
  if (!i0) goto l27;
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55286))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55286))+28);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55300)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i2);
  oldSize = i1;
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55326))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l26;
l18_loop:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 55384))+36);
  i2 = i2==80;
  if (!i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55431))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55431))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55445)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i3, (Object__Object)i1);
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55496))+28);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l18_loop;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55551))+28);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars((ADT_ArrayList__ArrayList)i0);
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55638))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55675))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55638))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55675))+28);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55689)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
  i2 = oldSize;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55652)))), ADT_ArrayList__ArrayListDesc_RemoveRange)),ADT_ArrayList__ArrayListDesc_RemoveRange)((ADT_ArrayList__ArrayList)i3, i2, i0);
l27:
  i0 = (OOC_INT32)t;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55713)))), OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures)),OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures)((OOC_Make_TranslateToC__Translator)i0);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55830)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i1 = (OOC_INT32)domRoot;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55846)))), OOC_SSA_WriteC__WriterDesc_WriteBlocks)),OOC_SSA_WriteC__WriterDesc_WriteBlocks)((OOC_SSA_WriteC__Writer)i0, (OOC_SSA_Schedule__Block)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55876)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56008)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 56034));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 56034));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56037)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i0, -1);
  i0 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56059)))), OOC_SSA__ProcBlockDesc_Destroy)),OOC_SSA__ProcBlockDesc_Destroy)((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_SSA_WriteC__InitTranslator(OOC_SSA_WriteC__Translator t, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  OOC_Make_TranslateToC__InitTranslator((OOC_Make_TranslateToC__Translator)i0);
  i1 = (OOC_INT32)inspectProc;
  *(OOC_INT32*)((_check_pointer(i0, 56324))+16) = i1;
  i1 = (OOC_INT32)inspectStage;
  *(OOC_INT32*)((_check_pointer(i0, 56359))+20) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 56396))+24) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 56426))+28) = i1;
  return;
  ;
}

OOC_SSA_WriteC__Translator OOC_SSA_WriteC__NewTranslator(StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Translator.baseTypes[0]);
  i1 = (OOC_INT32)inspectProc;
  i2 = (OOC_INT32)inspectStage;
  OOC_SSA_WriteC__InitTranslator((OOC_SSA_WriteC__Translator)i0, (StringSearch__Matcher)i1, (StringSearch__Matcher)i2);
  return (OOC_SSA_WriteC__Translator)i0;
  ;
}

void OOC_SSA_WriteC__TranslatorDesc_SetProcedureList(OOC_SSA_WriteC__Translator t, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_WriteC__Visitor v;
  OOC_INT32 i;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)procList;
  OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList((OOC_Make_TranslateToC__Translator)i0, (OOC_IR__ProcedureList)i1);
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)OOC_SSA_WriteC__NewVisitor();
  v = (OOC_SSA_WriteC__Visitor)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 56952)), (OOC_INT32)0);
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l10;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 56976);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 56976))*4);
  i6 = _check_pointer(i1, 56976);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 56976))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 56979)))), OOC_IR__ProcedureDesc_Accept)),OOC_IR__ProcedureDesc_Accept)((OOC_IR__Procedure)i6, (OOC_IR__Visitor)i2);
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l5_loop;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57032))+4);
  *(OOC_INT32*)((_check_pointer(i0, 57011))+24) = i1;
l11:
  return;
  ;
}

void OOC_OOC_SSA_WriteC_init(void) {

  return;
  ;
}

/* --- */
