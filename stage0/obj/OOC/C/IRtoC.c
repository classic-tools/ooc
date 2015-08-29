#include "OOC/C/IRtoC.d"
#include "__oo2c.h"

static void OOC_C_IRtoC__Call(OOC_C_DeclWriter__Writer w, OOC_IR__Call statm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Expression design;
  Object__String name;
  OOC_INT32 i;

  i0 = (OOC_INT32)statm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 504))+8);
  design = (OOC_IR__Expression)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 529)))), &_td_OOC_IR__ProcedureRefDesc);
  i3 = (OOC_INT32)w;
  if (i2) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 518)))), 518);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 596))+8);
  i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
  name = (Object__String)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 612)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i3, (Object__String)i1);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 644)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "(", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 693))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 704)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l15;
  i2=0;
l7_loop:
  i4 = i2!=0;
  if (!i4) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 905)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 962))+12);
  i4 = _check_pointer(i4, 973);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 973))*4);
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i3, (OOC_IR__Expression)i4);
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l7_loop;
l15:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 992)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ")", 2);
  return;
  ;
}

static void OOC_C_IRtoC__WriteExpr(OOC_C_DeclWriter__Writer w, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;
  Object__String name;
  auto void OOC_C_IRtoC__WriteExpr_SetRange(OOC_IR__SetRange expr);
    
    void OOC_C_IRtoC__WriteExpr_SetRange(OOC_IR__SetRange expr) {
      register OOC_INT32 i0,i1,i2;
      auto void OOC_C_IRtoC__WriteExpr_SetRange_Bit(OOC_IR__Expression expr, OOC_CHAR8 next);
        
        void OOC_C_IRtoC__WriteExpr_SetRange_Bit(OOC_IR__Expression expr, OOC_CHAR8 next) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1262)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(1<<(", 6);
          i0 = (OOC_INT32)expr;
          i1 = (OOC_INT32)w;
          OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i1, (OOC_IR__Expression)i0);
          i0 = next;
          if (!i0) goto l4;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1336)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "+1", 3);
l4:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1369)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "))", 3);
          return;
          ;
        }


      i0 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1432))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1442))+8);
      i1 = i1==i2;
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1504)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1541))+12);
      OOC_C_IRtoC__WriteExpr_SetRange_Bit((OOC_IR__Expression)i0, OOC_TRUE);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1562)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "-", 2);
      i0 = (OOC_INT32)expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1598))+8);
      OOC_C_IRtoC__WriteExpr_SetRange_Bit((OOC_IR__Expression)i0, OOC_FALSE);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1622)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      goto l4;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1469))+8);
      OOC_C_IRtoC__WriteExpr_SetRange_Bit((OOC_IR__Expression)i0, OOC_FALSE);
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1695)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l55;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1776)))), &_td_OOC_IR__VarDesc);
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1884)))), &_td_OOC_IR__AdrDesc);
  if (i1) goto l51;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2093)))), &_td_OOC_IR__LenDesc);
  if (i1) goto l49;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2385)))), &_td_OOC_IR__NegateDesc);
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2479)))), &_td_OOC_IR__BinaryArithDesc);
  if (i1) goto l36;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2865)))), &_td_OOC_IR__SetOpDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3179)))), &_td_OOC_IR__TypeConvDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3290)))), &_td_OOC_IR__CallDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3346)))), &_td_OOC_IR__SetRangeDesc);
  if (i1) goto l21;
  Log__Type("++ Unknown operator class in WriteExpr", 39, (void*)i0);
  _assert(OOC_FALSE, 127, 3464);
  goto l56;
l21:
  OOC_C_IRtoC__WriteExpr_SetRange((OOC_IR__SetRange)i0);
  goto l56;
l23:
  i1 = (OOC_INT32)w;
  OOC_C_IRtoC__Call((OOC_C_DeclWriter__Writer)i1, (OOC_IR__Call)i0);
  goto l56;
l25:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3219))+8);
  i1 = (OOC_INT32)w;
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i1, (OOC_IR__Expression)i0);
  goto l56;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2902))+12);
  i2 = (OOC_INT32)w;
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i2, (OOC_IR__Expression)i1);
  i1 = *(OOC_INT8*)((_check_pointer(i0, 2925))+8);
  switch (i1) {
  case 6:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2960)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'|');
    goto l34;
  case 7:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3001)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "& ~", 4);
    goto l34;
  case 8:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3049)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'&');
    goto l34;
  case 9:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3093)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'^');
    goto l34;
  default:
    _failed_case(i1, 2916);
    goto l34;
  }
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3145))+16);
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i2, (OOC_IR__Expression)i0);
  goto l56;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2522))+12);
  i2 = (OOC_INT32)w;
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i2, (OOC_IR__Expression)i1);
  i1 = *(OOC_INT8*)((_check_pointer(i0, 2546))+8);
  switch (i1) {
  case 0:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2581)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'+');
    goto l45;
  case 1:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2622)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'-');
    goto l45;
  case 2:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2663)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'/');
    goto l45;
  case 3:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2704)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'/');
    goto l45;
  case 4:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2745)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'*');
    goto l45;
  case 5:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2786)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)'%');
    goto l45;
  default:
    _failed_case(i1, 2537);
    goto l45;
  }
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2838))+16);
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i2, (OOC_IR__Expression)i0);
  goto l56;
l47:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2407)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'-');
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2450))+8);
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i1, (OOC_IR__Expression)i0);
  goto l56;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2227))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2234))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2245)))), &_td_OOC_SymbolTable__PredefTypeDesc, 2245)), 2256))+32);
  _assert((i1==13), 127, 2215);
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2307))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2318)))), &_td_OOC_IR__ConstDesc, 2318)), 2324))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2338)))), &_td_Object_Boxed__StringDesc, 2338)), 2345));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 2352));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2290)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, (i0+1), 0);
  goto l56;
l51:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2065))+8);
  i1 = (OOC_INT32)w;
  OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i1, (OOC_IR__Expression)i0);
  goto l56;
l53:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1832))+8);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1848)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i1, (Object__String)i0);
  goto l56;
l55:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1747))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1734))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1716)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, (OOC_SymbolTable__Type)i2);
l56:
  return;
  ;
}

void OOC_C_IRtoC__WriteStatmSeq(OOC_C_DeclWriter__Writer w, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_IR__Statement statm;
  auto void OOC_C_IRtoC__WriteStatmSeq_Assert(OOC_IR__Assert statm);
  auto void OOC_C_IRtoC__WriteStatmSeq_Return(OOC_IR__Return _return);
    
    void OOC_C_IRtoC__WriteStatmSeq_Assert(OOC_IR__Assert statm) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)statm;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 3724))+16);
      i1 = !i1;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3749)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3769)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_assert(", 9);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3824))+8);
      i2 = (OOC_INT32)w;
      OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i2, (OOC_IR__Expression)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3847)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 3896))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3878)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3917)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3948)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4011)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ");", 3);
l4:
      return;
      ;
    }

    
    void OOC_C_IRtoC__WriteStatmSeq_Return(OOC_IR__Return _return) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4118)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)_return;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4145))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4221)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "return ", 8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4276))+8);
      i1 = (OOC_INT32)w;
      OOC_C_IRtoC__WriteExpr((OOC_C_DeclWriter__Writer)i1, (OOC_IR__Expression)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4296)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4175)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return;", 8);
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)statmSeq;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4492)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l20;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)statmSeq;
  i2 = _check_pointer(i2, 4523);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 4523))*4);
  statm = (OOC_IR__Statement)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4544)))), &_td_OOC_IR__AssertDesc);
  if (i2) goto l14;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4595)))), &_td_OOC_IR__CallDesc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4694)))), &_td_OOC_IR__ReturnDesc);
  if (i2) goto l10;
  Log__Type("++ Unknown statement class in WriteStatmSeq", 44, (void*)i1);
  _assert(OOC_FALSE, 127, 4823);
  goto l15;
l10:
  OOC_C_IRtoC__WriteStatmSeq_Return((OOC_IR__Return)i1);
  goto l15;
l12:
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4617)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i2);
  OOC_C_IRtoC__Call((OOC_C_DeclWriter__Writer)i2, (OOC_IR__Call)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4662)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)';');
  goto l15;
l14:
  OOC_C_IRtoC__WriteStatmSeq_Assert((OOC_IR__Assert)i1);
l15:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l20:
  return;
  ;
}

void OOC_C_IRtoC__InitTranslator(OOC_C_IRtoC__Translator t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)t;
  OOC_Make_TranslateToC__InitTranslator((OOC_Make_TranslateToC__Translator)i0);
  return;
  ;
}

OOC_C_IRtoC__Translator OOC_C_IRtoC__NewTranslator() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_IRtoC__Translator.baseTypes[0]);
  OOC_C_IRtoC__InitTranslator((OOC_C_IRtoC__Translator)i0);
  return (OOC_C_IRtoC__Translator)i0;
  ;
}

void OOC_C_IRtoC__TranslatorDesc_WriteProcBody(OOC_C_IRtoC__Translator t, OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)proc;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5226));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5235))+8);
  OOC_C_IRtoC__WriteStatmSeq((OOC_C_DeclWriter__Writer)i0, (OOC_IR__StatementSeq)i1);
  return;
  ;
}

void OOC_OOC_C_IRtoC_init(void) {

  return;
  ;
}

/* --- */
