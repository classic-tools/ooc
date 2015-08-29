#include "OOC/AST/ExtTree/CreateIR.d"
#include "__oo2c.h"

OOC_IR__Module OOC_AST_ExtTree_CreateIR__CreateIR(OOC_AST_ExtTree__Module module, OOC_SymbolTable__Module symTab, OOC_IR__Builder b) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item currentSourceContext;
  OOC_SymbolTable__Namespace currentNamespace;
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator(OOC_AST_ExtTree__Node design);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Range(OOC_AST_ExtTree__Node expr, OOC_CHAR8 isSet);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct(OOC_AST_ExtTree__Set sc);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall);
  auto OOC_IR__StatementSeq OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq(OOC_AST_ExtTree__NodeList statmSeq);
  auto void OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl(OOC_SymbolTable__ConstDecl constDecl, OOC_AST_ExtTree__Node constExpr);
  auto OOC_IR__Procedure OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_AST_ExtTree__ProcDecl procCode);
  auto OOC_IR__Module OOC_AST_ExtTree_CreateIR__CreateIR_Module(OOC_SymbolTable__Module moduleDecl, OOC_AST_ExtTree__Module moduleAST);
  auto void OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr(OOC_SymbolTable__Item item);
    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator(OOC_AST_ExtTree__Node design) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_IR__Expression left;
      OOC_Scanner_Builder_BasicList__Symbol sym;
      OOC_INT32 i;
      auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select(OOC_AST_ExtTree__Operator design);
        
        OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select(OOC_AST_ExtTree__Operator design) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_IR__Expression left;

          i0 = (OOC_INT32)design;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1828));
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
          left = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1854)))), &_td_OOC_IR__ModuleRefDesc);
          if (i2) goto l7;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2136))+16);
          i3 = i1==i3;
          if (i3) goto l5;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2277))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2355))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2371)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2371)), 2380));
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2281));
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2258)))), OOC_IR__BuilderDesc_NewSelect)),OOC_IR__BuilderDesc_NewSelect)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2173))+16);
          return (OOC_IR__Expression)i0;
          goto l8;
l7:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1992))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2008)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2008)), 2017));
          i3 = (OOC_INT32)currentNamespace;
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1890)))), OOC_IR__BuilderDesc_NewQualident)),OOC_IR__BuilderDesc_NewQualident)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_IR__ModuleRef)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
l8:
          _failed_function(1694); return 0;
          ;
        }


      i0 = (OOC_INT32)design;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2465)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2647)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3151)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3432)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l9;
      Log__Type("++ Unknown type in Designator", 30, (void*)i0);
      _assert(OOC_FALSE, 127, 3581);
      goto l33;
l9:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, OOC_FALSE);
      return (OOC_IR__Expression)i0;
      goto l33;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3191))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3195));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3200))+4);
      i1 = i1==18;
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3298))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3302));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3307))+4);
      _assert((i1==17), 127, 3284);
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3365))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3394));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3369));
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3347)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
      return (OOC_IR__Expression)i0;
      goto l33;
l14:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select((OOC_AST_ExtTree__Operator)i0);
      return (OOC_IR__Expression)i0;
      goto l33;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2705));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2737))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2744));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
      i = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2792))+8);
      i3 = *(OOC_INT32*)(_check_pointer(i3, 2801));
      i3 = 0<i3;
      if (i3) goto l20;
      i0=i1;
      goto l30;
l20:
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}i3=0;
l21_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2896))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 2905))+4);
      i5 = _check_pointer(i5, 2908);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 2908))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 2920)))), &_td_OOC_AST_ExtTree__NodeDesc, 2920)));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2830)))), OOC_IR__BuilderDesc_NewIndex)),OOC_IR__BuilderDesc_NewIndex)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
      left = (OOC_IR__Expression)i2;
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2972))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2981));
      i4 = i3<i4;
      if (!i4) goto l25;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3018))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3027))+4);
      i1 = _check_pointer(i1, 3030);
      i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 3030))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3042)))), &_td_OOC_AST_ExtTree__TerminalDesc, 3042)), 3051));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i1;
      
l25:
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2792))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2801));
      i4 = i3<i4;
      if (i4) goto l21_loop;
l29:
      i0=i2;
l30:
      return (OOC_IR__Expression)i0;
      goto l33;
l32:
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2613));
      i2 = (OOC_INT32)currentNamespace;
      i3 = (OOC_INT32)currentSourceContext;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2503)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      return (OOC_IR__Expression)i0;
l33:
      _failed_function(1547); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Range(OOC_AST_ExtTree__Node expr, OOC_CHAR8 isSet) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_IR__Expression e;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3813)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      i2 = isSet;
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3849))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3853));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3858))+4);
      i1 = i1==21;
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3916))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3934));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 3919));
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3951))+8);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i5);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3899)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, i2);
      return (OOC_IR__Expression)i1;
l6:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      e = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4044));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4030)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i0, i2);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct(OOC_AST_ExtTree__Set sc) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 len;
      OOC_IR__Expression result;
      OOC_INT32 i;

      i0 = (OOC_INT32)sc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4212))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4225));
      i1 = i1==0;
      if (i1) goto l12;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4329))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4341));
      i1 = (i1+1)>>1;
      len = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4381))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4393))+4);
      i2 = _check_pointer(i2, 4395);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 4395))*4);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4407)))), &_td_OOC_AST_ExtTree__NodeDesc, 4407)), OOC_TRUE);
      i1 = i1-1;
      result = (OOC_IR__Expression)i2;
      i3 = 1<=i1;
      i = 1;
      if (i3) goto l5;
      i0=i2;
      goto l11;
l5:
      i3=1;
l6_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4513))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4525))+4);
      i5 = _check_pointer(i5, 4527);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i3*2), i6, OOC_UINT32, 4527))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4541)))), &_td_OOC_AST_ExtTree__NodeDesc, 4541)), OOC_TRUE);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4469)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0, 6, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
      result = (OOC_IR__Expression)i2;
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l6_loop;
l10:
      i0=i2;
l11:
      return (OOC_IR__Expression)i0;
      goto l13;
l12:
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4272))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4280));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4255)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)(OOC_INT32)0, OOC_TRUE);
      return (OOC_IR__Expression)i0;
l13:
      _failed_function(4090); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_IR__Expression res;
      OOC_IR__Expression left;
      OOC_IR__Expression right;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4745)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l39;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5440)))), &_td_OOC_AST_ExtTree__FactorDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5518)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5625)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6193)))), &_td_OOC_AST_ExtTree__SetDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6258)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l13;
      Log__Type("++ Unknown expression class in Expr", 36, (void*)i0);
      _assert(OOC_FALSE, 127, 6421);
      goto l51;
l13:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, OOC_FALSE);
      res = (OOC_IR__Expression)i0;
      goto l51;
l15:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct((OOC_AST_ExtTree__Set)i0);
      res = (OOC_IR__Expression)i0;
      goto l51;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5663))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5667));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5672))+4);
      i1 = i1==18;
      if (i1) goto l20;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5713))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5717));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5722))+4);
      i1 = i1==17;
      
      goto l22;
l20:
      i1=OOC_TRUE;
l22:
      if (i1) goto l32;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5861));
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l26;
      left = (OOC_IR__Expression)(OOC_INT32)0;
      i1=(OOC_INT32)0;
      goto l27;
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5910));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      
l27:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5990))+8);
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l30;
      right = (OOC_IR__Expression)(OOC_INT32)0;
      i2=(OOC_INT32)0;
      goto l31;
l30:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6041))+8);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i2);
      right = (OOC_IR__Expression)i2;
      
l31:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6142))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6146));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6123)))), OOC_IR__BuilderDesc_NewOperator)),OOC_IR__BuilderDesc_NewOperator)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
      res = (OOC_IR__Expression)i0;
      
      goto l51;
l32:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      
      goto l51;
l35:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      goto l51;
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5485))+4);
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      goto l51;
l39:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4784));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 4789))+4);
      switch (i1) {
      case 43:
        i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 41:
      case 42:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4948));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4926)))), OOC_IR__BuilderDesc_NewStringConst)),OOC_IR__BuilderDesc_NewStringConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 35:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5021));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5000)))), OOC_IR__BuilderDesc_NewIntConst10)),OOC_IR__BuilderDesc_NewIntConst10)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 36:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5094));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5073)))), OOC_IR__BuilderDesc_NewIntConst16)),OOC_IR__BuilderDesc_NewIntConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 37:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5169));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5147)))), OOC_IR__BuilderDesc_NewCharConst16)),OOC_IR__BuilderDesc_NewCharConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 38:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5243));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5223)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 8);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 39:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5330));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5310)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 9);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 40:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5408));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5394)))), OOC_IR__BuilderDesc_NewNil)),OOC_IR__BuilderDesc_NewNil)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      default:
        _failed_case(i1, 4775);
        goto l51;
      }
l51:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)res;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6461)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_IR__Expression design;
      OOC_IR__ExpressionList arguments;
      OOC_INT32 i;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6741));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      design = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6779))+8);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 6790));
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], ((i2+1)>>1));
      arguments = (OOC_IR__ExpressionList)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6841)), (OOC_INT32)0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 6866);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6883))+8);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6894))+4);
      i7 = _check_pointer(i7, 6897);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i4*2), i8, OOC_UINT32, 6897))*4);
      i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6911)))), &_td_OOC_AST_ExtTree__NodeDesc, 6911)));
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6866))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l3_loop;
l8:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6990))+12);
      i4 = isProcCall;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6998));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6943)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (!i4), (OOC_Scanner_Builder_BasicList__Symbol)i0);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__StatementSeq OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq(OOC_AST_ExtTree__NodeList statmSeq) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_INT32 count;
      OOC_INT32 i;
      OOC_IR__StatementSeq statmSeqIR;
      OOC_AST_ExtTree__Node n;
      OOC_IR__Statement statm;
      OOC_IR__StatementSeq copy;
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ProcedureCall(OOC_AST_ExtTree__ProcedureCall call);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return(OOC_AST_ExtTree__ReturnStatm _return);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Assignment(OOC_AST_ExtTree__Node design, OOC_AST_ExtTree__Node op, OOC_AST_ExtTree__Node value);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm(OOC_AST_ExtTree__IfStatm ifStatm);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm(OOC_AST_ExtTree__CaseStatm caseStatm);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm(OOC_AST_ExtTree__RepeatStatm repeatStatm);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm(OOC_AST_ExtTree__WhileStatm whileStatm);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm(OOC_AST_ExtTree__WithStatm withStatm);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm(OOC_AST_ExtTree__ForStatm forStatm);
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm(OOC_AST_ExtTree__LoopStatm loopStatm);
        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ProcedureCall(OOC_AST_ExtTree__ProcedureCall call) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_IR__Expression expr;
          OOC_IR__ExpressionList arguments;
          OOC_IR__Expression design;

          i0 = (OOC_INT32)call;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7412));
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7419)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
          if (i1) goto l3;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 0);
          arguments = (OOC_IR__ExpressionList)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7662));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
          design = (OOC_IR__Expression)i0;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7733));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7690)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i1, OOC_FALSE, (OOC_Scanner_Builder_BasicList__Symbol)i3);
          expr = (OOC_IR__Expression)i0;
          
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7485));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7500)))), &_td_OOC_AST_ExtTree__FunctionCallDesc, 7500)), OOC_TRUE);
          expr = (OOC_IR__Expression)i0;
          
l4:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7771)))), &_td_OOC_IR__StatementDesc);
          if (i1) goto l7;
          return (OOC_IR__Statement)(OOC_INT32)0;
          goto l8;
l7:
          return (OOC_IR__Statement)i0;
l8:
          _failed_function(7240); return 0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return(OOC_AST_ExtTree__ReturnStatm _return) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)_return;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8040))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8166));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8224))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8174));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8239)))), &_td_OOC_AST_ExtTree__NodeDesc, 8239)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8147)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
          return (OOC_IR__Statement)i0;
          goto l4;
l3:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8096));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8104));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8077)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0);
          return (OOC_IR__Statement)i0;
l4:
          _failed_function(7958); return 0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Assignment(OOC_AST_ExtTree__Node design, OOC_AST_ExtTree__Node op, OOC_AST_ExtTree__Node value) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_IR__Expression variable;
          OOC_IR__Expression valueExpr;

          i0 = (OOC_INT32)design;
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
          variable = (OOC_IR__Expression)i0;
          i1 = (OOC_INT32)value;
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          valueExpr = (OOC_IR__Expression)i1;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)op;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8539)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8539)), 8548));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8511)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm(OOC_AST_ExtTree__IfStatm ifStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_IR__StatementSeq elseSeq;
          OOC_INT32 i;
          OOC_IR__Statement _else;

          i0 = (OOC_INT32)ifStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8790))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8851))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l4:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8938));
          i2 = *(OOC_INT32*)(_check_pointer(i2, 8949));
          i2 = i2-4;
          i = i2;
          {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l5_loop:
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9027));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9038))+4);
          i4 = _check_pointer(i4, 9041);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 9041))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9097));
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9108))+4);
          i5 = _check_pointer(i5, 9111);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i1+1), i6, OOC_UINT32, 9111))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9053)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9053)), 9062));
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9125)))), &_td_OOC_AST_ExtTree__NodeDesc, 9125)));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9169));
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9180))+4);
          i6 = _check_pointer(i6, 9183);
          i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i1+3), i7, OOC_UINT32, 9183))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9197)))), &_td_OOC_AST_ExtTree__NodeListDesc, 9197)));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8992)))), OOC_IR__BuilderDesc_NewIfStatm)),OOC_IR__BuilderDesc_NewIfStatm)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6, (OOC_IR__StatementSeq)i2);
          _else = (OOC_IR__Statement)i2;
          i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i3;
          i4 = _check_pointer(i3, 9279);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          *(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 9279))*4) = i2;
          i1 = i1-4;
          i = i1;
          i4 = i1<0;
          if (i4) goto l9;
          i2=i3;
          goto l5_loop;
l9:
          return (OOC_IR__Statement)i2;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm(OOC_AST_ExtTree__CaseStatm caseStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__Expression select;
          OOC_INT32 count;
          OOC_INT32 i;
          OOC_IR__CaseList caseList;
          OOC_IR__StatementSeq elseSeq;
          auto OOC_IR__CaseLabels OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels(OOC_AST_ExtTree__NodeList labels);
            
            OOC_IR__CaseLabels OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels(OOC_AST_ExtTree__NodeList labels) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
              OOC_IR__CaseLabels setRanges;
              OOC_INT32 i;

              i0 = (OOC_INT32)labels;
              i1 = *(OOC_INT32*)(_check_pointer(i0, 9765));
              i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], ((i1+1)>>1));
              setRanges = (OOC_IR__CaseLabels)i1;
              i2 = *(OOC_INT32*)(_check_pointer(i0, 9812));
              i2 = i2-1;
              i3 = 0<=i2;
              i = 0;
              if (!i3) goto l8;
              i3=0;
l3_loop:
              i4 = _check_pointer(i1, 9849);
              i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9875))+4);
              i6 = _check_pointer(i6, 9878);
              i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 9878))*4);
              i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9890)))), &_td_OOC_AST_ExtTree__NodeDesc, 9890)), OOC_FALSE);
              *(OOC_INT32*)(i4+(_check_index((i3>>1), i5, OOC_UINT32, 9849))*4) = i6;
              i3 = i3+2;
              i4 = i3<=i2;
              i = i3;
              if (i4) goto l3_loop;
l8:
              return (OOC_IR__CaseLabels)i1;
              ;
            }


          i0 = (OOC_INT32)caseStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10020))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          select = (OOC_IR__Expression)i1;
          count = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10120))+12);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 10130));
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (i2) goto l3;
          i1=0;
          goto l13;
l3:
          i2=0;i3=0;
l4_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10169))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10179))+4);
          i4 = _check_pointer(i4, 10182);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10182))*4);
          i4 = i4!=(OOC_INT32)0;
          if (!i4) goto l8;
          i3 = i3+1;
          count = i3;
          
l8:
          i2 = i2+4;
          i4 = i2<=i1;
          i = i2;
          if (i4) goto l4_loop;
l12:
          i1=i3;
l13:
          caseList = (OOC_IR__CaseList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseList.baseTypes[0], i1));
          count = 0;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10381))+12);
          i0 = *(OOC_INT32*)(_check_pointer(i0, 10391));
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l25;
          i1=0;i2=0;
l16_loop:
          i3 = (OOC_INT32)caseStatm;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10430))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10440))+4);
          i4 = _check_pointer(i4, 10443);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 10443))*4);
          i4 = i4!=(OOC_INT32)0;
          if (i4) goto l19;
          i1=i2;
          goto l20;
l19:
          i4 = (OOC_INT32)caseList;
          i4 = _check_pointer(i4, 10479);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i6 = (OOC_INT32)b;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10525))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10535))+4);
          i7 = _check_pointer(i7, 10538);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i1+1), i8, OOC_UINT32, 10538))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10600))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10610))+4);
          i3 = _check_pointer(i3, 10613);
          i8 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i8, OOC_UINT32, 10613))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10552)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10552)), 10561));
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels((OOC_AST_ExtTree__NodeList)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10625)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10625)));
          i7 = (OOC_INT32)caseStatm;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10675))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10685))+4);
          i7 = _check_pointer(i7, 10688);
          i8 = i;
          i9 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i8+2), i9, OOC_UINT32, 10688))*4);
          i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10702)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10702)));
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10491)))), OOC_IR__BuilderDesc_NewCase)),OOC_IR__BuilderDesc_NewCase)((OOC_IR__Builder)i6, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__CaseLabels)i1, (OOC_IR__StatementSeq)i7);
          i3 = count;
          *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10479))*4) = i1;
          i1 = i3+1;
          count = i1;
          
l20:
          i2 = i;
          i2 = i2+4;
          i3 = i2<=i0;
          i = i2;
          if (!i3) goto l25;
          {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
          goto l16_loop;
l25:
          i0 = (OOC_INT32)caseStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10789))+16);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l28;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l29;
l28:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10852))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l29:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10960));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10966));
          i3 = (OOC_INT32)select;
          i4 = (OOC_INT32)caseList;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10935)))), OOC_IR__BuilderDesc_NewCaseStatm)),OOC_IR__BuilderDesc_NewCaseStatm)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__CaseList)i4, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm(OOC_AST_ExtTree__RepeatStatm repeatStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)repeatStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11190));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11198));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11264))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11328))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11161)))), OOC_IR__BuilderDesc_NewRepeatStatm)),OOC_IR__BuilderDesc_NewRepeatStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm(OOC_AST_ExtTree__WhileStatm whileStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)whileStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11492));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11499));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11555))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11622))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11465)))), OOC_IR__BuilderDesc_NewWhileStatm)),OOC_IR__BuilderDesc_NewWhileStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm(OOC_AST_ExtTree__WithStatm withStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_IR__StatementSeq elseSeq;
          OOC_IR__Statement _else;
          OOC_INT32 i;
          OOC_IR__Expression guard;
          OOC_IR__StatementSeq region;
          auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr(OOC_AST_ExtTree__Operator op);
            
            OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr(OOC_AST_ExtTree__Operator op) {
              register OOC_INT32 i0,i1,i2,i3;

              i0 = (OOC_INT32)b;
              i1 = (OOC_INT32)op;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11979))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11982));
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11996));
              i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12013))+8);
              i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11962)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
              return (OOC_IR__Expression)i0;
              ;
            }


          i0 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12090))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12153))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
l4:
          _else = (OOC_IR__Statement)(OOC_INT32)0;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12263));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 12274));
          i0 = i0-4;
          i = i0;
          
l5_loop:
          i1 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12339));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12349))+4);
          i1 = _check_pointer(i1, 12351);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 12351))*4);
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr((OOC_AST_ExtTree__Operator)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12365)))), &_td_OOC_AST_ExtTree__OperatorDesc, 12365)));
          guard = (OOC_IR__Expression)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12397)))), &_td_OOC_IR__TypeTestDesc);
          i2 = i;
          if (!i1) goto l8;
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12466)))), OOC_IR__BuilderDesc_StartTypeGuard)),OOC_IR__BuilderDesc_StartTypeGuard)((OOC_IR__Builder)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12493)))), &_td_OOC_IR__TypeTestDesc, 12493)), (void*)(OOC_INT32)&currentNamespace);
          i1 = (OOC_INT32)withStatm;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12567));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12577))+4);
          i3 = _check_pointer(i3, 12579);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i2+3), i4, OOC_UINT32, 12579))*4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12593)))), &_td_OOC_AST_ExtTree__NodeListDesc, 12593)));
          region = (OOC_IR__StatementSeq)i3;
          i4 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12618)))), OOC_IR__BuilderDesc_EndTypeGuard)),OOC_IR__BuilderDesc_EndTypeGuard)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&currentNamespace);
          i4 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12728));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12739))+4);
          i1 = _check_pointer(i1, 12742);
          i5 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i5, OOC_UINT32, 12742))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12754)))), &_td_OOC_AST_ExtTree__TerminalDesc, 12754)), 12763));
          i5 = (OOC_INT32)elseSeq;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12687)))), OOC_IR__BuilderDesc_NewWithStatm)),OOC_IR__BuilderDesc_NewWithStatm)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i5);
          _else = (OOC_IR__Statement)i0;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          i1 = _check_pointer(i1, 12861);
          i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          *(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 12861))*4) = i0;
l8:
          i0 = i2-4;
          i = i0;
          i1 = i0<0;
          if (!i1) goto l5_loop;
l12:
          i0 = (OOC_INT32)_else;
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm(OOC_AST_ExtTree__ForStatm forStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
            
            OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step() {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)forStatm;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13120))+28);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l3;
              return (OOC_IR__Expression)(OOC_INT32)0;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13172))+28);
              i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
              return (OOC_IR__Expression)i0;
l4:
              _failed_function(13060); return 0;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)forStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13311));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13316));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13374))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i3);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13429))+12);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13489))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
          i6 = (OOC_INT32)forStatm;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13594))+36);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i6);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13288)))), OOC_IR__BuilderDesc_NewForStatm)),OOC_IR__BuilderDesc_NewForStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm(OOC_AST_ExtTree__LoopStatm loopStatm) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)loopStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13754));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13760));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13822))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13729)))), OOC_IR__BuilderDesc_NewLoopStatm)),OOC_IR__BuilderDesc_NewLoopStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }


      count = 0;
      i0 = (OOC_INT32)statmSeq;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 13994));
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (i2) goto l3;
      i1=0;
      goto l13;
l3:
      i2=0;i3=0;
l4_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14030))+4);
      i4 = _check_pointer(i4, 14033);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 14033))*4);
      i4 = i4!=(OOC_INT32)0;
      if (!i4) goto l8;
      i3 = i3+1;
      count = i3;
      
l8:
      i2 = i2+2;
      i4 = i2<=i1;
      i = i2;
      if (i4) goto l4_loop;
l12:
      i1=i3;
l13:
      statmSeqIR = (OOC_IR__StatementSeq)((OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], i1));
      count = 0;
      i0 = *(OOC_INT32*)(_check_pointer(i0, 14171));
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l71;
      i1=0;
l16_loop:
      i2 = (OOC_INT32)statmSeq;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14207))+4);
      i3 = _check_pointer(i3, 14210);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 14210))*4);
      i3 = i3!=(OOC_INT32)0;
      if (!i3) goto l66;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14249))+4);
      i2 = _check_pointer(i2, 14252);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 14252))*4);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14264)))), &_td_OOC_AST_ExtTree__NodeDesc, 14264);
      n = (OOC_AST_ExtTree__Node)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14287)))), &_td_OOC_AST_ExtTree__ProcedureCallDesc);
      if (i2) goto l61;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14380)))), &_td_OOC_AST_ExtTree__ReturnStatmDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14452)))), &_td_OOC_AST_ExtTree__AssignmentDesc);
      if (i2) goto l57;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14651)))), &_td_OOC_AST_ExtTree__IfStatmDesc);
      if (i2) goto l55;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14719)))), &_td_OOC_AST_ExtTree__CaseStatmDesc);
      if (i2) goto l53;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14807)))), &_td_OOC_AST_ExtTree__WithStatmDesc);
      if (i2) goto l51;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14879)))), &_td_OOC_AST_ExtTree__RepeatStatmDesc);
      if (i2) goto l49;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14969)))), &_td_OOC_AST_ExtTree__WhileStatmDesc);
      if (i2) goto l47;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15043)))), &_td_OOC_AST_ExtTree__ForStatmDesc);
      if (i2) goto l45;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15114)))), &_td_OOC_AST_ExtTree__LoopStatmDesc);
      if (i2) goto l43;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15187)))), &_td_OOC_AST_ExtTree__ExitStatmDesc);
      if (i2) goto l41;
      Log__Type("++ Unknown type in StatementSeq", 32, (void*)i1);
      _assert(OOC_FALSE, 127, 15345);
      goto l62;
l41:
      i2 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15244));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15250));
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15232)))), OOC_IR__BuilderDesc_NewExit)),OOC_IR__BuilderDesc_NewExit)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l43:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm((OOC_AST_ExtTree__LoopStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l45:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm((OOC_AST_ExtTree__ForStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l47:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm((OOC_AST_ExtTree__WhileStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l49:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm((OOC_AST_ExtTree__RepeatStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l51:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm((OOC_AST_ExtTree__WithStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l53:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm((OOC_AST_ExtTree__CaseStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l55:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm((OOC_AST_ExtTree__IfStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l57:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14510));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14564));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14616));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14576))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14628))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14522));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Assignment((OOC_AST_ExtTree__Node)i2, (OOC_AST_ExtTree__Node)i3, (OOC_AST_ExtTree__Node)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l59:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return((OOC_AST_ExtTree__ReturnStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l62;
l61:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ProcedureCall((OOC_AST_ExtTree__ProcedureCall)i1);
      statm = (OOC_IR__Statement)i1;
l62:
      i1 = (OOC_INT32)statm;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l66;
      i2 = (OOC_INT32)statmSeqIR;
      i2 = _check_pointer(i2, 15470);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = count;
      *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 15470))*4) = i1;
      count = (i4+1);
l66:
      i1 = i;
      i1 = i1+2;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l16_loop;
l71:
      i0 = (OOC_INT32)statmSeqIR;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15584)), (OOC_INT32)0);
      i2 = count;
      i1 = i2!=i1;
      if (!i1) goto l82;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], i2);
      i2 = i2-1;
      copy = (OOC_IR__StatementSeq)i1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l81;
      i3=0;
l76_loop:
      i4 = _check_pointer(i1, 15765);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = _check_pointer(i0, 15782);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 15782))*4);
      *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15765))*4) = i6;
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l76_loop;
l81:
      statmSeqIR = (OOC_IR__StatementSeq)i1;
l82:
      i0 = (OOC_INT32)statmSeqIR;
      return (OOC_IR__StatementSeq)i0;
      ;
    }

    
    void OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl(OOC_SymbolTable__ConstDecl constDecl, OOC_AST_ExtTree__Node constExpr) {
      register OOC_INT32 i0,i1,i2;
      OOC_IR__Expression expr;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)constExpr;
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16014)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      expr = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)constDecl;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16104))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16085)))), &_td_OOC_IR__ConstDesc, 16085)), 16091))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16061)))), OOC_SymbolTable__ConstDeclDesc_SetValueType)),OOC_SymbolTable__ConstDeclDesc_SetValueType)((OOC_SymbolTable__ConstDecl)i1, (Object_Boxed__Object)i0, (OOC_SymbolTable__PredefType)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16115)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16115)));
      return;
      ;
    }

    
    OOC_IR__Procedure OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_AST_ExtTree__ProcDecl procCode) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_SymbolTable__Namespace oldNamespace;
      OOC_SymbolTable__Item oldSourceContext;
      OOC_IR__StatementSeq statmSeq;

      i0 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i0;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i2 = (OOC_INT32)procDecl;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16532))+48);
      currentNamespace = (OOC_SymbolTable__Namespace)i3;
      currentSourceContext = (OOC_SymbolTable__Item)i2;
      i3 = (OOC_INT32)procCode;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16603))+28);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16629))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16635))+8);
      i4 = i4==(OOC_INT32)0;
      
      goto l5;
l3:
      i4=OOC_TRUE;
l5:
      if (i4) goto l7;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16737))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16743))+8);
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i4);
      statmSeq = (OOC_IR__StatementSeq)i4;
      
      goto l8;
l7:
      i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i4;
      
l8:
      currentNamespace = (OOC_SymbolTable__Namespace)i0;
      currentSourceContext = (OOC_SymbolTable__Item)i1;
      i0 = (OOC_INT32)b;
      i1 = _check_pointer(i0, 16875);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 16899));
      i5 = _check_pointer(i5, 16905);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16971))+28);
      i6 = i6!=(OOC_INT32)0;
      if (i6) goto l11;
      i3=OOC_FALSE;
      goto l12;
l11:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17025))+28);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17030))+4);
      i3 = i3!=(OOC_INT32)0;
      
l12:
      i5 = (OOC_INT32)*(OOC_INT32*)i5;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG(i1)), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i5, (OOC_SymbolTable__ProcDecl)i2, (OOC_IR__StatementSeq)i4, i3);
      return (OOC_IR__Procedure)i0;
      ;
    }

    
    OOC_IR__Module OOC_AST_ExtTree_CreateIR__CreateIR_Module(OOC_SymbolTable__Module moduleDecl, OOC_AST_ExtTree__Module moduleAST) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_AST_ExtTree__NodeList declSeq;
      OOC_IR__ProcedureList procList;
      OOC_INT32 count;
      OOC_IR__StatementSeq statmSeq;
      auto OOC_CHAR8 OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc(OOC_SymbolTable__ProcDecl procDecl);
      auto OOC_INT32 OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs(OOC_SymbolTable__Item item);
      auto void OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures(OOC_SymbolTable__Item item);
        
        OOC_CHAR8 OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc(OOC_SymbolTable__ProcDecl procDecl) {
          register OOC_INT32 i0;

          i0 = (OOC_INT32)procDecl;
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 17402))+41);
          return (!i0);
          ;
        }

        
        OOC_INT32 OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT32 count;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17578)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17614)))), &_td_OOC_SymbolTable__ProcDeclDesc, 17614)));
          
l5:
          if (i1) goto l7;
          count = 0;
          i1=0;
          goto l8;
l7:
          count = 1;
          i1=1;
l8:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17730))+8);
          i2 = i0!=(OOC_INT32)0;
          nested = (OOC_SymbolTable__Item)i0;
          if (i2) goto l11;
          i0=i1;
          goto l17;
l11:
          {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l12_loop:
          i2 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i1);
          i0 = i0+i2;
          count = i0;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17847));
          nested = (OOC_SymbolTable__Item)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l12_loop;
l17:
          return i0;
          ;
        }

        
        void OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18033)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l6;
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)i0);
          if (!i1) goto l6;
          i1 = (OOC_INT32)procList;
          i1 = _check_pointer(i1, 18103);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i3 = count;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18134))+60);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_AST_ExtTree__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18151)))), &_td_OOC_AST_ExtTree__ProcDeclDesc, 18151)));
          i5 = count;
          *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 18103))*4) = i4;
          count = (i5+1);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18300))+8);
          i1 = i0!=(OOC_INT32)0;
          nested = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l14;
l9_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18412));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l9_loop;
l14:
          return;
          ;
        }


      i0 = (OOC_INT32)moduleAST;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18509))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18515));
      declSeq = (OOC_AST_ExtTree__NodeList)i0;
      i0 = (OOC_INT32)moduleDecl;
      i0 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i0);
      procList = (OOC_IR__ProcedureList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureList.baseTypes[0], i0));
      count = 0;
      i0 = (OOC_INT32)moduleDecl;
      OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)moduleAST;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18657))+20);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18684))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18690))+8);
      i1 = i1==(OOC_INT32)0;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18793))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18799))+8);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
      goto l8;
l7:
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
l8:
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18865));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18873));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18889))+28);
      i4 = (OOC_INT32)moduleDecl;
      i5 = (OOC_INT32)procList;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18843)))), OOC_IR__BuilderDesc_NewModule)),OOC_IR__BuilderDesc_NewModule)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_Scanner_InputBuffer__CharArray)i0, (OOC_SymbolTable__Module)i4, (OOC_IR__ProcedureList)i5, (OOC_IR__StatementSeq)i1);
      return (OOC_IR__Module)i0;
      ;
    }

    
    void OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_IR__Expression expr;
      OOC_SymbolTable__Namespace oldNamespace;
      OOC_SymbolTable__Item oldSourceContext;
      auto void OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested(OOC_SymbolTable__Item item);
        
        void OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19598))+8);
          i1 = i0!=(OOC_INT32)0;
          nested = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l8;
l3_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19713));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19795)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l3;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
l3:
      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20057)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l9;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20399)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20447))+48);
      OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl((OOC_SymbolTable__ConstDecl)i0, (OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20467)))), &_td_OOC_AST_ExtTree__NodeDesc, 20467)));
      goto l17;
l9:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 20088))+32);
      i1 = !i1;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20135))+48);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20156)))), &_td_OOC_AST_ExtTree__NodeDesc, 20156)));
      expr = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20186))+16);
      i2 = i1==i2;
      if (i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20316)))), &_td_OOC_IR__ConstDesc, 20316)), 20322))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20316)))), &_td_OOC_IR__ConstDesc, 20316)), 20322))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20336)))), &_td_Object_BigInt__BigIntDesc, 20336)), 20343)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20336)))), &_td_Object_BigInt__BigIntDesc, 20336)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20296)))), OOC_SymbolTable__ArrayDesc_SetLength)),OOC_SymbolTable__ArrayDesc_SetLength)((OOC_SymbolTable__Array)i0, i1);
      goto l17;
l14:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20249)))), OOC_SymbolTable__ArrayDesc_SetLength)),OOC_SymbolTable__ArrayDesc_SetLength)((OOC_SymbolTable__Array)i0, 1);
l17:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20536)))), &_td_OOC_SymbolTable__TypeDesc);
      if (!i1) goto l23;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20568)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (!i1) goto l23;
      OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i0);
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20690)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l29;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21046)))), &_td_OOC_SymbolTable__RecordDesc));
      if (!i1) goto l30;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
      goto l30;
l29:
      i1 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i1;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20832))+48);
      currentNamespace = (OOC_SymbolTable__Namespace)i1;
      currentSourceContext = (OOC_SymbolTable__Item)i0;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)oldNamespace;
      currentNamespace = (OOC_SymbolTable__Namespace)i0;
      i0 = (OOC_INT32)oldSourceContext;
      currentSourceContext = (OOC_SymbolTable__Item)i0;
l30:
      return;
      ;
    }


  i0 = (OOC_INT32)symTab;
  currentSourceContext = (OOC_SymbolTable__Item)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21231))+40);
  currentNamespace = (OOC_SymbolTable__Namespace)i1;
  OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)symTab;
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Module((OOC_SymbolTable__Module)i1, (OOC_AST_ExtTree__Module)i0);
  return (OOC_IR__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateIR_init(void) {

  return;
  ;
}

/* --- */
