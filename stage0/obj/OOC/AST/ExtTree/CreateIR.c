#include <OOC/AST/ExtTree/CreateIR.d>
#include <__oo2c.h>
#include <setjmp.h>

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
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1827));
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
          left = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1853)))), &_td_OOC_IR__ModuleRefDesc);
          if (i2) goto l7;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2135))+16);
          i3 = i1==i3;
          if (i3) goto l5;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2276))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2354))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2370)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2370)), 2379));
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2280));
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2257)))), OOC_IR__BuilderDesc_NewSelect)),OOC_IR__BuilderDesc_NewSelect)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2172))+16);
          return (OOC_IR__Expression)i0;
          goto l8;
l7:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1991))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2007)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2007)), 2016));
          i3 = (OOC_INT32)currentNamespace;
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1889)))), OOC_IR__BuilderDesc_NewQualident)),OOC_IR__BuilderDesc_NewQualident)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_IR__ModuleRef)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
l8:
          _failed_function(1693); return 0;
          ;
        }


      i0 = (OOC_INT32)design;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2464)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2646)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3150)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3431)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l9;
      Log__Type("++ Unknown type in Designator", 30, (void*)i0);
      _assert(0u, 127, 3580);
      goto l33;
l9:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, 0u);
      return (OOC_IR__Expression)i0;
      goto l33;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3190))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3194));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3199))+4);
      i1 = i1==18;
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3297))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3301));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3306))+4);
      _assert((i1==17), 127, 3283);
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3364))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3393));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3368));
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3346)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
      return (OOC_IR__Expression)i0;
      goto l33;
l14:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select((OOC_AST_ExtTree__Operator)i0);
      return (OOC_IR__Expression)i0;
      goto l33;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2704));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2736))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2743));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
      i = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2791))+8);
      i3 = *(OOC_INT32*)(_check_pointer(i3, 2800));
      i3 = 0<i3;
      if (i3) goto l20;
      i0=i1;
      goto l30;
l20:
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}i3=0;
l21_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2895))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 2904))+4);
      i5 = _check_pointer(i5, 2907);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 2907))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 2919)))), &_td_OOC_AST_ExtTree__NodeDesc, 2919)));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2829)))), OOC_IR__BuilderDesc_NewIndex)),OOC_IR__BuilderDesc_NewIndex)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
      left = (OOC_IR__Expression)i2;
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2971))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2980));
      i4 = i3<i4;
      if (!i4) goto l25;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3017))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3026))+4);
      i1 = _check_pointer(i1, 3029);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 3029))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3041)))), &_td_OOC_AST_ExtTree__TerminalDesc, 3041)), 3050));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i1;
      
l25:
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2791))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2800));
      i4 = i3<i4;
      if (i4) goto l21_loop;
l29:
      i0=i2;
l30:
      return (OOC_IR__Expression)i0;
      goto l33;
l32:
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2612));
      i2 = (OOC_INT32)currentNamespace;
      i3 = (OOC_INT32)currentSourceContext;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2502)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      return (OOC_IR__Expression)i0;
l33:
      _failed_function(1546); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Range(OOC_AST_ExtTree__Node expr, OOC_CHAR8 isSet) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_IR__Expression e;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3812)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3848))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3852));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3857))+4);
      i1 = i1==21;
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3915))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3933));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3918));
      i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3950))+8);
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
      i5 = isSet;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3898)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, i5);
      return (OOC_IR__Expression)i1;
l6:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      e = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4043));
      i3 = isSet;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4029)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0, (OOC_IR__Expression)i0, i3);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct(OOC_AST_ExtTree__Set sc) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 len;
      OOC_IR__Expression result;
      OOC_INT32 i;

      i0 = (OOC_INT32)sc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4211))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4224));
      i1 = i1==0;
      if (i1) goto l12;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4328))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4340));
      i1 = (i1+1)>>1;
      len = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4380))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4392))+4);
      i2 = _check_pointer(i2, 4394);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 4394))*4);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4406)))), &_td_OOC_AST_ExtTree__NodeDesc, 4406)), 1u);
      result = (OOC_IR__Expression)i2;
      i = 1;
      i3 = 1<i1;
      if (i3) goto l5;
      i0=i2;
      goto l11;
l5:
      i3=1;
l6_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4512))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4524))+4);
      i5 = _check_pointer(i5, 4526);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i3*2), i6, OOC_UINT32, 4526))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4540)))), &_td_OOC_AST_ExtTree__NodeDesc, 4540)), 1u);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4468)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)0, 6, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
      result = (OOC_IR__Expression)i2;
      i3 = i3+1;
      i = i3;
      i4 = i3<i1;
      if (i4) goto l6_loop;
l10:
      i0=i2;
l11:
      return (OOC_IR__Expression)i0;
      goto l13;
l12:
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4271))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4279));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4254)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)0, (OOC_IR__Expression)0, 1u);
      return (OOC_IR__Expression)i0;
l13:
      _failed_function(4089); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_IR__Expression res;
      OOC_IR__Expression left;
      OOC_IR__Expression right;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4744)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l39;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5439)))), &_td_OOC_AST_ExtTree__FactorDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5517)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5624)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6192)))), &_td_OOC_AST_ExtTree__SetDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6257)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l13;
      Log__Type("++ Unknown expression class in Expr", 36, (void*)i0);
      _assert(0u, 127, 6420);
      goto l51;
l13:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, 0u);
      res = (OOC_IR__Expression)i0;
      goto l51;
l15:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct((OOC_AST_ExtTree__Set)i0);
      res = (OOC_IR__Expression)i0;
      goto l51;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5662))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5666));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5671))+4);
      i1 = i1==18;
      if (i1) goto l20;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5712))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5716));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5721))+4);
      i1 = i1==17;
      
      goto l22;
l20:
      i1=1u;
l22:
      if (i1) goto l32;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5860));
      i1 = i1!=0;
      if (i1) goto l26;
      left = (OOC_IR__Expression)0;
      i1=0;
      goto l27;
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5909));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      
l27:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5989))+8);
      i2 = i2!=0;
      if (i2) goto l30;
      right = (OOC_IR__Expression)0;
      i2=0;
      goto l31;
l30:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6040))+8);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i2);
      right = (OOC_IR__Expression)i2;
      
l31:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6141))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6145));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6122)))), OOC_IR__BuilderDesc_NewOperator)),OOC_IR__BuilderDesc_NewOperator)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5484))+4);
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      goto l51;
l39:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4783));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 4788))+4);
      switch (i1) {
      case 45:
        i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 43:
      case 44:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4947));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4925)))), OOC_IR__BuilderDesc_NewStringConst)),OOC_IR__BuilderDesc_NewStringConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 37:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5020));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4999)))), OOC_IR__BuilderDesc_NewIntConst10)),OOC_IR__BuilderDesc_NewIntConst10)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 38:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5093));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5072)))), OOC_IR__BuilderDesc_NewIntConst16)),OOC_IR__BuilderDesc_NewIntConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 39:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5168));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5146)))), OOC_IR__BuilderDesc_NewCharConst16)),OOC_IR__BuilderDesc_NewCharConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 40:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5242));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5222)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 8);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 41:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5329));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5309)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 9);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 42:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5407));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5393)))), OOC_IR__BuilderDesc_NewNil)),OOC_IR__BuilderDesc_NewNil)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      default:
        _failed_case(i1, 4774);
        goto l51;
      }
l51:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)res;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6460)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_IR__Expression design;
      OOC_IR__ExpressionList arguments;
      OOC_INT32 i;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6740));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      design = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6778))+8);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 6789));
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], ((i2+1)>>1));
      arguments = (OOC_IR__ExpressionList)i2;
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6840)), 0);
      i4 = 0<i3;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 6865);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6882))+8);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6893))+4);
      i7 = _check_pointer(i7, 6896);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i4*2), i8, OOC_UINT32, 6896))*4);
      i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6910)))), &_td_OOC_AST_ExtTree__NodeDesc, 6910)));
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6865))*4) = i7;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l3_loop;
l8:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6989))+12);
      i4 = isProcCall;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6997));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6942)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (!i4), (OOC_Scanner_Builder_BasicList__Symbol)i0);
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
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm(OOC_AST_ExtTree__TryStatm tryStatm);
        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ProcedureCall(OOC_AST_ExtTree__ProcedureCall call) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_IR__Expression expr;
          OOC_IR__ExpressionList arguments;
          OOC_IR__Expression design;

          i0 = (OOC_INT32)call;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7411));
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7418)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
          if (i1) goto l3;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 0);
          arguments = (OOC_IR__ExpressionList)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7661));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
          design = (OOC_IR__Expression)i0;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7732));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7689)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i1, 0u, (OOC_Scanner_Builder_BasicList__Symbol)i3);
          expr = (OOC_IR__Expression)i0;
          
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7484));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7499)))), &_td_OOC_AST_ExtTree__FunctionCallDesc, 7499)), 1u);
          expr = (OOC_IR__Expression)i0;
          
l4:
          i1 = i0!=0;
          if (i1) goto l7;
          i1=0u;
          goto l9;
l7:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7785)))), &_td_OOC_IR__StatementDesc);
          
l9:
          if (i1) goto l11;
          return (OOC_IR__Statement)0;
          goto l12;
l11:
          return (OOC_IR__Statement)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7832)))), &_td_OOC_IR__StatementDesc, 7832));
l12:
          _failed_function(7239); return 0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return(OOC_AST_ExtTree__ReturnStatm _return) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)_return;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8072))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8198));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8256))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8206));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8271)))), &_td_OOC_AST_ExtTree__NodeDesc, 8271)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8179)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
          return (OOC_IR__Statement)i0;
          goto l4;
l3:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8128));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8136));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8109)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0);
          return (OOC_IR__Statement)i0;
l4:
          _failed_function(7990); return 0;
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
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8571)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8571)), 8580));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8543)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm(OOC_AST_ExtTree__IfStatm ifStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_IR__StatementSeq elseSeq;
          OOC_INT32 i;
          OOC_IR__Statement _else;

          i0 = (OOC_INT32)ifStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8822))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8883))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l4:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8970));
          i2 = *(OOC_INT32*)(_check_pointer(i2, 8981));
          i2 = i2-4;
          i = i2;
          {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l5_loop:
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9059));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9070))+4);
          i4 = _check_pointer(i4, 9073);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 9073))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9129));
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9140))+4);
          i5 = _check_pointer(i5, 9143);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i1+1), i6, OOC_UINT32, 9143))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9085)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9085)), 9094));
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9157)))), &_td_OOC_AST_ExtTree__NodeDesc, 9157)));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9201));
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9212))+4);
          i6 = _check_pointer(i6, 9215);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i1+3), i7, OOC_UINT32, 9215))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9229)))), &_td_OOC_AST_ExtTree__NodeListDesc, 9229)));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9024)))), OOC_IR__BuilderDesc_NewIfStatm)),OOC_IR__BuilderDesc_NewIfStatm)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6, (OOC_IR__StatementSeq)i2);
          _else = (OOC_IR__Statement)i2;
          i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i3;
          i4 = _check_pointer(i3, 9311);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          *(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 9311))*4) = i2;
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
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
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
              i1 = *(OOC_INT32*)(_check_pointer(i0, 9797));
              i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], ((i1+1)>>1));
              setRanges = (OOC_IR__CaseLabels)i1;
              i = 0;
              i2 = *(OOC_INT32*)(_check_pointer(i0, 9844));
              i3 = 0<i2;
              if (!i3) goto l8;
              i3=0;
l3_loop:
              i4 = _check_pointer(i1, 9881);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9907))+4);
              i6 = _check_pointer(i6, 9910);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 9910))*4);
              i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9922)))), &_td_OOC_AST_ExtTree__NodeDesc, 9922)), 0u);
              *(OOC_INT32*)(i4+(_check_index((i3>>1), i5, OOC_UINT32, 9881))*4) = i6;
              i3 = i3+2;
              i = i3;
              i4 = i3<i2;
              if (i4) goto l3_loop;
l8:
              return (OOC_IR__CaseLabels)i1;
              ;
            }


          i0 = (OOC_INT32)caseStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10052))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          select = (OOC_IR__Expression)i1;
          count = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10152))+12);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 10162));
          i = 0;
          i2 = 0<i1;
          if (i2) goto l3;
          i1=0;
          goto l13;
l3:
          i2=0;i3=0;
l4_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10201))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10211))+4);
          i4 = _check_pointer(i4, 10214);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10214))*4);
          i4 = i4!=0;
          if (!i4) goto l8;
          i3 = i3+1;
          count = i3;
          
l8:
          i2 = i2+4;
          i = i2;
          i4 = i2<i1;
          if (i4) goto l4_loop;
l12:
          i1=i3;
l13:
          caseList = (OOC_IR__CaseList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseList.baseTypes[0], i1));
          count = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10413))+12);
          i = 0;
          i1 = *(OOC_INT32*)(_check_pointer(i1, 10423));
          i2 = 0<i1;
          if (!i2) goto l26;
          i2=0;i3=0;
l17_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10462))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10472))+4);
          i4 = _check_pointer(i4, 10475);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10475))*4);
          i4 = i4!=0;
          if (i4) goto l20;
          {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
          goto l21;
l20:
          i4 = (OOC_INT32)caseList;
          i4 = _check_pointer(i4, 10511);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = (OOC_INT32)b;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10557))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10567))+4);
          i7 = _check_pointer(i7, 10570);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i2+1), i8, OOC_UINT32, 10570))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10632))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10642))+4);
          i0 = _check_pointer(i0, 10645);
          i8 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i8, OOC_UINT32, 10645))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10584)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10584)), 10593));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels((OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10657)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10657)));
          i7 = (OOC_INT32)caseStatm;
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10707))+12);
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 10717))+4);
          i8 = _check_pointer(i8, 10720);
          i9 = i;
          i10 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index((i9+2), i10, OOC_UINT32, 10720))*4);
          i8 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 10734)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10734)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10523)))), OOC_IR__BuilderDesc_NewCase)),OOC_IR__BuilderDesc_NewCase)((OOC_IR__Builder)i6, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__CaseLabels)i0, (OOC_IR__StatementSeq)i8);
          i2 = count;
          *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10511))*4) = i0;
          i0 = i2+1;
          count = i0;
          i2=i0;i0=i7;i3=i9;
l21:
          i3 = i3+4;
          i = i3;
          i4 = i3<i1;
          if (!i4) goto l26;
          {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
          goto l17_loop;
l26:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10821))+16);
          i1 = i1!=0;
          if (i1) goto l29;
          elseSeq = (OOC_IR__StatementSeq)0;
          i1=0;
          goto l30;
l29:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10884))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l30:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10992));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10998));
          i3 = (OOC_INT32)select;
          i4 = (OOC_INT32)caseList;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10967)))), OOC_IR__BuilderDesc_NewCaseStatm)),OOC_IR__BuilderDesc_NewCaseStatm)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__CaseList)i4, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm(OOC_AST_ExtTree__RepeatStatm repeatStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)repeatStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11222));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11230));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11296))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11360))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11193)))), OOC_IR__BuilderDesc_NewRepeatStatm)),OOC_IR__BuilderDesc_NewRepeatStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm(OOC_AST_ExtTree__WhileStatm whileStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)whileStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11524));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11531));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11587))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11654))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11497)))), OOC_IR__BuilderDesc_NewWhileStatm)),OOC_IR__BuilderDesc_NewWhileStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__StatementSeq)i1);
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
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12011))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12014));
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12028));
              i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12045))+8);
              i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11994)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
              return (OOC_IR__Expression)i0;
              ;
            }


          i0 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12122))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12185))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
l4:
          _else = (OOC_IR__Statement)(OOC_INT32)0;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12295));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 12306));
          i0 = i0-4;
          i = i0;
          
l5_loop:
          i1 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12371));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12381))+4);
          i1 = _check_pointer(i1, 12383);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 12383))*4);
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr((OOC_AST_ExtTree__Operator)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12397)))), &_td_OOC_AST_ExtTree__OperatorDesc, 12397)));
          guard = (OOC_IR__Expression)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12429)))), &_td_OOC_IR__TypeTestDesc);
          if (!i1) goto l8;
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12498)))), OOC_IR__BuilderDesc_StartTypeGuard)),OOC_IR__BuilderDesc_StartTypeGuard)((OOC_IR__Builder)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12525)))), &_td_OOC_IR__TypeTestDesc, 12525)), (void*)(OOC_INT32)&currentNamespace);
          i1 = (OOC_INT32)withStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12599));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12609))+4);
          i2 = _check_pointer(i2, 12611);
          i3 = i;
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3+3), i4, OOC_UINT32, 12611))*4);
          i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12625)))), &_td_OOC_AST_ExtTree__NodeListDesc, 12625)));
          region = (OOC_IR__StatementSeq)i2;
          i4 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12650)))), OOC_IR__BuilderDesc_EndTypeGuard)),OOC_IR__BuilderDesc_EndTypeGuard)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&currentNamespace);
          i4 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12760));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12771))+4);
          i1 = _check_pointer(i1, 12774);
          i5 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i5, OOC_UINT32, 12774))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12786)))), &_td_OOC_AST_ExtTree__TerminalDesc, 12786)), 12795));
          i3 = (OOC_INT32)elseSeq;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12719)))), OOC_IR__BuilderDesc_NewWithStatm)),OOC_IR__BuilderDesc_NewWithStatm)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_IR__StatementSeq)i2, (OOC_IR__StatementSeq)i3);
          _else = (OOC_IR__Statement)i0;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          i1 = _check_pointer(i1, 12893);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 12893))*4) = i0;
l8:
          i0 = i;
          i0 = i0-4;
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
          auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step(void);
            
            OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step(void) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)forStatm;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13152))+28);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l3;
              return (OOC_IR__Expression)(OOC_INT32)0;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13204))+28);
              i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
              return (OOC_IR__Expression)i0;
l4:
              _failed_function(13092); return 0;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)forStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13343));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13348));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13406))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i3);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13461))+12);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13521))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
          i6 = (OOC_INT32)forStatm;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13626))+36);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i6);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13320)))), OOC_IR__BuilderDesc_NewForStatm)),OOC_IR__BuilderDesc_NewForStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm(OOC_AST_ExtTree__LoopStatm loopStatm) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)loopStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13786));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13792));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13854))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13761)))), OOC_IR__BuilderDesc_NewLoopStatm)),OOC_IR__BuilderDesc_NewLoopStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm(OOC_AST_ExtTree__TryStatm tryStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__CatchList catchList;
          OOC_IR__StatementSeq statmSeq;
          OOC_INT32 i;
          OOC_IR__Expression guard;
          OOC_IR__StatementSeq catchStatm;

          i0 = (OOC_INT32)tryStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14142))+8);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 14152));
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CatchList.baseTypes[0], (i1>>2));
          catchList = (OOC_IR__CatchList)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14206))+4);
          i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i2);
          statmSeq = (OOC_IR__StatementSeq)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14248))+8);
          i = 0;
          i3 = *(OOC_INT32*)(_check_pointer(i3, 14258));
          i4 = 0<i3;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14305))+8);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14315))+4);
          i5 = _check_pointer(i5, 14317);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i4+1), i6, OOC_UINT32, 14317))*4);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14331)))), &_td_OOC_AST_ExtTree__NodeDesc, 14331)));
          guard = (OOC_IR__Expression)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14384))+8);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14394))+4);
          i6 = _check_pointer(i6, 14396);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+3), i7, OOC_UINT32, 14396))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14410)))), &_td_OOC_AST_ExtTree__NodeListDesc, 14410)));
          catchStatm = (OOC_IR__StatementSeq)i6;
          i7 = _check_pointer(i1, 14441);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i9 = (OOC_INT32)b;
          i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 14455)))), OOC_IR__BuilderDesc_NewCatchClause)),OOC_IR__BuilderDesc_NewCatchClause)((OOC_IR__Builder)i9, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          *(OOC_INT32*)(i7+(_check_index((i4>>2), i8, OOC_UINT32, 14441))*4) = i5;
          i4 = i4+4;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l3_loop;
l8:
          i3 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14541));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14545));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14520)))), OOC_IR__BuilderDesc_NewTryStatm)),OOC_IR__BuilderDesc_NewTryStatm)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__StatementSeq)i2, (OOC_IR__CatchList)i1);
          return (OOC_IR__Statement)i0;
          ;
        }


      count = 0;
      i0 = (OOC_INT32)statmSeq;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 14730));
      i = 0;
      i2 = 0<i1;
      if (i2) goto l3;
      i1=0;
      goto l13;
l3:
      i2=0;i3=0;
l4_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14766))+4);
      i4 = _check_pointer(i4, 14769);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 14769))*4);
      i4 = i4!=0;
      if (!i4) goto l8;
      i3 = i3+1;
      count = i3;
      
l8:
      i2 = i2+2;
      i = i2;
      i4 = i2<i1;
      if (i4) goto l4_loop;
l12:
      i1=i3;
l13:
      statmSeqIR = (OOC_IR__StatementSeq)((OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], i1));
      count = 0;
      i = 0;
      i0 = *(OOC_INT32*)(_check_pointer(i0, 14907));
      i1 = 0<i0;
      if (!i1) goto l75;
      i1=0;
l16_loop:
      i2 = (OOC_INT32)statmSeq;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14943))+4);
      i3 = _check_pointer(i3, 14946);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 14946))*4);
      i3 = i3!=0;
      if (!i3) goto l70;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14985))+4);
      i2 = _check_pointer(i2, 14988);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 14988))*4);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15000)))), &_td_OOC_AST_ExtTree__NodeDesc, 15000);
      n = (OOC_AST_ExtTree__Node)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15023)))), &_td_OOC_AST_ExtTree__ProcedureCallDesc);
      if (i2) goto l65;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15116)))), &_td_OOC_AST_ExtTree__ReturnStatmDesc);
      if (i2) goto l63;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15188)))), &_td_OOC_AST_ExtTree__AssignmentDesc);
      if (i2) goto l61;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15387)))), &_td_OOC_AST_ExtTree__IfStatmDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15455)))), &_td_OOC_AST_ExtTree__CaseStatmDesc);
      if (i2) goto l57;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15543)))), &_td_OOC_AST_ExtTree__WithStatmDesc);
      if (i2) goto l55;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15615)))), &_td_OOC_AST_ExtTree__RepeatStatmDesc);
      if (i2) goto l53;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15705)))), &_td_OOC_AST_ExtTree__WhileStatmDesc);
      if (i2) goto l51;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15779)))), &_td_OOC_AST_ExtTree__ForStatmDesc);
      if (i2) goto l49;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15850)))), &_td_OOC_AST_ExtTree__LoopStatmDesc);
      if (i2) goto l47;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15923)))), &_td_OOC_AST_ExtTree__ExitStatmDesc);
      if (i2) goto l45;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16008)))), &_td_OOC_AST_ExtTree__TryStatmDesc);
      if (i2) goto l43;
      Log__Type("++ Unknown type in StatementSeq", 32, (void*)i1);
      _assert(0u, 127, 16164);
      goto l66;
l43:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm((OOC_AST_ExtTree__TryStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l45:
      i2 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15980));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15986));
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15968)))), OOC_IR__BuilderDesc_NewExit)),OOC_IR__BuilderDesc_NewExit)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l47:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm((OOC_AST_ExtTree__LoopStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l49:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm((OOC_AST_ExtTree__ForStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l51:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm((OOC_AST_ExtTree__WhileStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l53:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm((OOC_AST_ExtTree__RepeatStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l55:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm((OOC_AST_ExtTree__WithStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l57:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm((OOC_AST_ExtTree__CaseStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l59:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm((OOC_AST_ExtTree__IfStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l61:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15246));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15300));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15352));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15312))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15364))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15258));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Assignment((OOC_AST_ExtTree__Node)i2, (OOC_AST_ExtTree__Node)i3, (OOC_AST_ExtTree__Node)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l63:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return((OOC_AST_ExtTree__ReturnStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l65:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ProcedureCall((OOC_AST_ExtTree__ProcedureCall)i1);
      statm = (OOC_IR__Statement)i1;
l66:
      i1 = (OOC_INT32)statm;
      i2 = i1!=0;
      if (!i2) goto l70;
      i2 = (OOC_INT32)statmSeqIR;
      i2 = _check_pointer(i2, 16289);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = count;
      *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 16289))*4) = i1;
      count = (i4+1);
l70:
      i1 = i;
      i1 = i1+2;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l16_loop;
l75:
      i0 = (OOC_INT32)statmSeqIR;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16403)), 0);
      i2 = count;
      i1 = i2!=i1;
      if (!i1) goto l86;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], i2);
      copy = (OOC_IR__StatementSeq)i1;
      i = 0;
      i3 = 0<i2;
      if (!i3) goto l85;
      i3=0;
l80_loop:
      i4 = _check_pointer(i1, 16584);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 16601);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16601))*4);
      *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 16584))*4) = i6;
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l80_loop;
l85:
      statmSeqIR = (OOC_IR__StatementSeq)i1;
l86:
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16833)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      expr = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16923))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16904)))), &_td_OOC_IR__ConstDesc, 16904)), 16910))+8);
      i2 = (OOC_INT32)constDecl;
      OOC_SymbolTable__ConstDeclDesc_SetValueType((OOC_SymbolTable__ConstDecl)i2, (Object_Boxed__Object)i0, (OOC_SymbolTable__PredefType)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16934)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16934)));
      return;
      ;
    }

    
    OOC_IR__Procedure OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_AST_ExtTree__ProcDecl procCode) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SymbolTable__Namespace oldNamespace;
      OOC_SymbolTable__Item oldSourceContext;
      OOC_IR__StatementSeq statmSeq;
      OOC_Scanner_Builder_BasicList__Symbol endOfBody;

      i0 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i0;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i2 = (OOC_INT32)procDecl;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17386))+52);
      currentNamespace = (OOC_SymbolTable__Namespace)i3;
      currentSourceContext = (OOC_SymbolTable__Item)i2;
      i3 = (OOC_INT32)procCode;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17457))+28);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17483))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17489))+8);
      i4 = i4==(OOC_INT32)0;
      
      goto l5;
l3:
      i4=1u;
l5:
      if (i4) goto l7;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17591))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17597))+8);
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i4);
      statmSeq = (OOC_IR__StatementSeq)i4;
      
      goto l8;
l7:
      i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i4;
      
l8:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17638))+28);
      i5 = i5==(OOC_INT32)0;
      if (i5) goto l11;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17722))+28);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17728))+12);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17733));
      endOfBody = (OOC_Scanner_Builder_BasicList__Symbol)i5;
      
      goto l12;
l11:
      endOfBody = (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0;
      i5=(OOC_INT32)0;
l12:
      currentNamespace = (OOC_SymbolTable__Namespace)i0;
      currentSourceContext = (OOC_SymbolTable__Item)i1;
      i0 = (OOC_INT32)b;
      i1 = _check_pointer(i0, 17860);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17884));
      i6 = _check_pointer(i6, 17890);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17997))+28);
      i7 = i7!=(OOC_INT32)0;
      if (i7) goto l15;
      i3=0u;
      goto l16;
l15:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18052))+28);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18057))+4);
      i3 = i3!=(OOC_INT32)0;
      
l16:
      i6 = (OOC_INT32)*(OOC_INT32*)i6;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG(i1)), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i6, (OOC_SymbolTable__ProcDecl)i2, (OOC_IR__StatementSeq)i4, (OOC_Scanner_Builder_BasicList__Symbol)i5, i3);
      return (OOC_IR__Procedure)i0;
      ;
    }

    
    OOC_IR__Module OOC_AST_ExtTree_CreateIR__CreateIR_Module(OOC_SymbolTable__Module moduleDecl, OOC_AST_ExtTree__Module moduleAST) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
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
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 18429))+41);
          return (!i0);
          ;
        }

        
        OOC_INT32 OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT32 count;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18605)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18641)))), &_td_OOC_SymbolTable__ProcDeclDesc, 18641)));
          
l5:
          if (i1) goto l7;
          count = 0;
          i1=0;
          goto l8;
l7:
          count = 1;
          i1=1;
l8:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18757))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l11;
          i0=i1;
          goto l17;
l11:
          {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l12_loop:
          i2 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i1);
          i0 = i0+i2;
          count = i0;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18874));
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19060)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l6;
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)i0);
          if (!i1) goto l6;
          i1 = (OOC_INT32)procList;
          i1 = _check_pointer(i1, 19130);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = count;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19161))+64);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_AST_ExtTree__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19178)))), &_td_OOC_AST_ExtTree__ProcDeclDesc, 19178)));
          i5 = count;
          *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 19130))*4) = i4;
          count = (i5+1);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19327))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l14;
l9_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19439));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l9_loop;
l14:
          return;
          ;
        }


      i0 = (OOC_INT32)moduleAST;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19536))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19542));
      declSeq = (OOC_AST_ExtTree__NodeList)i0;
      i0 = (OOC_INT32)moduleDecl;
      i0 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i0);
      procList = (OOC_IR__ProcedureList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureList.baseTypes[0], i0));
      count = 0;
      i0 = (OOC_INT32)moduleDecl;
      OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)moduleAST;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19684))+20);
      i1 = i1==0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19711))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19717))+8);
      i1 = i1==0;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19820))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19826))+8);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
      goto l8;
l7:
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
l8:
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19892));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20025))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20031))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19900));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 20036));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19916))+28);
      i5 = (OOC_INT32)moduleDecl;
      i6 = (OOC_INT32)procList;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19870)))), OOC_IR__BuilderDesc_NewModule)),OOC_IR__BuilderDesc_NewModule)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_Scanner_InputBuffer__CharArray)i0, (OOC_SymbolTable__Module)i5, (OOC_IR__ProcedureList)i6, (OOC_IR__StatementSeq)i1, (OOC_Scanner_Builder_BasicList__Symbol)i4);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20679))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l8;
l3_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20794));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20876)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l3;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
l3:
      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21138)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l9;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21480)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21528))+48);
      OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl((OOC_SymbolTable__ConstDecl)i0, (OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21548)))), &_td_OOC_AST_ExtTree__NodeDesc, 21548)));
      goto l17;
l9:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 21169))+32);
      i1 = !i1;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21216))+48);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21237)))), &_td_OOC_AST_ExtTree__NodeDesc, 21237)));
      expr = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21267))+16);
      i2 = i1==i2;
      if (i2) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21397)))), &_td_OOC_IR__ConstDesc, 21397)), 21403))+8);
      i1 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21417)))), &_td_Object_BigInt__BigIntDesc, 21417)));
      OOC_SymbolTable__ArrayDesc_SetLength((OOC_SymbolTable__Array)i0, i1);
      goto l17;
l14:
      OOC_SymbolTable__ArrayDesc_SetLength((OOC_SymbolTable__Array)i0, 1);
l17:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21617)))), &_td_OOC_SymbolTable__TypeDesc);
      if (!i1) goto l23;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21649)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (!i1) goto l23;
      OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i0);
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21771)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l29;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22127)))), &_td_OOC_SymbolTable__RecordDesc));
      if (!i1) goto l30;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
      goto l30;
l29:
      i1 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i1;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21913))+52);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22312))+40);
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
