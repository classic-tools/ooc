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
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1831));
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
          left = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1857)))), &_td_OOC_IR__ModuleRefDesc);
          if (i2) goto l7;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2053)))), &_td_OOC_IR__ConstDesc);
          if (i2) goto l5;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2291))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2367))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2383)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2383)), 2392));
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2295));
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2272)))), OOC_IR__BuilderDesc_NewSelect)),OOC_IR__BuilderDesc_NewSelect)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
          goto l8;
l5:
          i0 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2093))+16);
          _assert((i1==i2), 127, 2077);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2125))+16);
          return (OOC_IR__Expression)i0;
          goto l8;
l7:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1995))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2011)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2011)), 2020));
          i3 = (OOC_INT32)currentNamespace;
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1893)))), OOC_IR__BuilderDesc_NewQualident)),OOC_IR__BuilderDesc_NewQualident)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_IR__ModuleRef)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
l8:
          _failed_function(1697); return 0;
          ;
        }


      i0 = (OOC_INT32)design;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2462)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2644)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3148)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3429)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l9;
      Log__Type("++ Unknown type in Designator", 30, (void*)i0);
      _assert(OOC_FALSE, 127, 3578);
      goto l33;
l9:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, OOC_FALSE);
      return (OOC_IR__Expression)i0;
      goto l33;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3188))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3192));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3197))+4);
      i1 = i1==18;
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3295))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3299));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3304))+4);
      _assert((i1==17), 127, 3281);
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3362))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3391));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3366));
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3344)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
      return (OOC_IR__Expression)i0;
      goto l33;
l14:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select((OOC_AST_ExtTree__Operator)i0);
      return (OOC_IR__Expression)i0;
      goto l33;
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2702));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2734))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2741));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
      i = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2789))+8);
      i3 = *(OOC_INT32*)(_check_pointer(i3, 2798));
      i3 = 0<i3;
      if (i3) goto l20;
      i0=i1;
      goto l30;
l20:
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}i3=0;
l21_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2893))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 2902))+4);
      i5 = _check_pointer(i5, 2905);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 2905))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 2917)))), &_td_OOC_AST_ExtTree__NodeDesc, 2917)));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2827)))), OOC_IR__BuilderDesc_NewIndex)),OOC_IR__BuilderDesc_NewIndex)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
      left = (OOC_IR__Expression)i2;
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2969))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2978));
      i4 = i3<i4;
      if (!i4) goto l25;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3015))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3024))+4);
      i1 = _check_pointer(i1, 3027);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 3027))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3039)))), &_td_OOC_AST_ExtTree__TerminalDesc, 3039)), 3048));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i1;
      
l25:
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2789))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2798));
      i4 = i3<i4;
      if (i4) goto l21_loop;
l29:
      i0=i2;
l30:
      return (OOC_IR__Expression)i0;
      goto l33;
l32:
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2610));
      i2 = (OOC_INT32)currentNamespace;
      i3 = (OOC_INT32)currentSourceContext;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2500)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      return (OOC_IR__Expression)i0;
l33:
      _failed_function(1550); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Range(OOC_AST_ExtTree__Node expr, OOC_CHAR8 isSet) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_IR__Expression e;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3810)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      i2 = isSet;
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3846))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3850));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3855))+4);
      i1 = i1==21;
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3913))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3931));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 3916));
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3948))+8);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i5);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3896)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, i2);
      return (OOC_IR__Expression)i1;
l6:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      e = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4041));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4027)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i0, i2);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct(OOC_AST_ExtTree__Set sc) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 len;
      OOC_IR__Expression result;
      OOC_INT32 i;

      i0 = (OOC_INT32)sc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4209))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4222));
      i1 = i1==0;
      if (i1) goto l12;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4326))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4338));
      i1 = (i1+1)>>1;
      len = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4378))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4390))+4);
      i2 = _check_pointer(i2, 4392);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 4392))*4);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4404)))), &_td_OOC_AST_ExtTree__NodeDesc, 4404)), OOC_TRUE);
      result = (OOC_IR__Expression)i2;
      i1 = i1-1;
      i3 = 1<=i1;
      i = 1;
      if (i3) goto l5;
      i0=i2;
      goto l11;
l5:
      i3=1;
l6_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4510))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4522))+4);
      i5 = _check_pointer(i5, 4524);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i3*2), i6, OOC_UINT32, 4524))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4538)))), &_td_OOC_AST_ExtTree__NodeDesc, 4538)), OOC_TRUE);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4466)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0, 6, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4269))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4277));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4252)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)(OOC_INT32)0, OOC_TRUE);
      return (OOC_IR__Expression)i0;
l13:
      _failed_function(4087); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_IR__Expression res;
      OOC_IR__Expression left;
      OOC_IR__Expression right;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4742)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l39;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5437)))), &_td_OOC_AST_ExtTree__FactorDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5515)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5622)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6190)))), &_td_OOC_AST_ExtTree__SetDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6255)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l13;
      Log__Type("++ Unknown expression class in Expr", 36, (void*)i0);
      _assert(OOC_FALSE, 127, 6418);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5660))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5664));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5669))+4);
      i1 = i1==18;
      if (i1) goto l20;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5710))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5714));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5719))+4);
      i1 = i1==17;
      
      goto l22;
l20:
      i1=OOC_TRUE;
l22:
      if (i1) goto l32;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5858));
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l26;
      left = (OOC_IR__Expression)(OOC_INT32)0;
      i1=(OOC_INT32)0;
      goto l27;
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5907));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      
l27:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5987))+8);
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l30;
      right = (OOC_IR__Expression)(OOC_INT32)0;
      i2=(OOC_INT32)0;
      goto l31;
l30:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6038))+8);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i2);
      right = (OOC_IR__Expression)i2;
      
l31:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6139))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6143));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6120)))), OOC_IR__BuilderDesc_NewOperator)),OOC_IR__BuilderDesc_NewOperator)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5482))+4);
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      goto l51;
l39:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4781));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 4786))+4);
      switch (i1) {
      case 43:
        i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 41:
      case 42:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4945));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4923)))), OOC_IR__BuilderDesc_NewStringConst)),OOC_IR__BuilderDesc_NewStringConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 35:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5018));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4997)))), OOC_IR__BuilderDesc_NewIntConst10)),OOC_IR__BuilderDesc_NewIntConst10)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 36:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5091));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5070)))), OOC_IR__BuilderDesc_NewIntConst16)),OOC_IR__BuilderDesc_NewIntConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 37:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5166));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5144)))), OOC_IR__BuilderDesc_NewCharConst16)),OOC_IR__BuilderDesc_NewCharConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 38:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5240));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5220)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 7);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 39:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5327));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5307)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 8);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 40:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5405));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5391)))), OOC_IR__BuilderDesc_NewNil)),OOC_IR__BuilderDesc_NewNil)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      default:
        _failed_case(i1, 4772);
        goto l51;
      }
l51:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)res;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6458)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_IR__Expression design;
      OOC_IR__ExpressionList arguments;
      OOC_INT32 i;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6738));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      design = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6776))+8);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 6787));
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], ((i2+1)>>1));
      arguments = (OOC_IR__ExpressionList)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6838)), 0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 6863);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6880))+8);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6891))+4);
      i7 = _check_pointer(i7, 6894);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i4*2), i8, OOC_UINT32, 6894))*4);
      i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6908)))), &_td_OOC_AST_ExtTree__NodeDesc, 6908)));
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6863))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l3_loop;
l8:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6987))+12);
      i4 = isProcCall;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6995));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6940)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (!i4), (OOC_Scanner_Builder_BasicList__Symbol)i0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7409));
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7416)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
          if (i1) goto l3;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 0);
          arguments = (OOC_IR__ExpressionList)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7659));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
          design = (OOC_IR__Expression)i0;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7730));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7687)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i1, OOC_FALSE, (OOC_Scanner_Builder_BasicList__Symbol)i3);
          expr = (OOC_IR__Expression)i0;
          
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7482));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7497)))), &_td_OOC_AST_ExtTree__FunctionCallDesc, 7497)), OOC_TRUE);
          expr = (OOC_IR__Expression)i0;
          
l4:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7768)))), &_td_OOC_IR__StatementDesc);
          if (i1) goto l7;
          return (OOC_IR__Statement)(OOC_INT32)0;
          goto l8;
l7:
          return (OOC_IR__Statement)i0;
l8:
          _failed_function(7237); return 0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return(OOC_AST_ExtTree__ReturnStatm _return) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)_return;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8037))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8163));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8221))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8171));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8236)))), &_td_OOC_AST_ExtTree__NodeDesc, 8236)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8144)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
          return (OOC_IR__Statement)i0;
          goto l4;
l3:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8093));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8101));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8074)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0);
          return (OOC_IR__Statement)i0;
l4:
          _failed_function(7955); return 0;
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
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8536)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8536)), 8545));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8508)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm(OOC_AST_ExtTree__IfStatm ifStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_IR__StatementSeq elseSeq;
          OOC_INT32 i;
          OOC_IR__Statement _else;

          i0 = (OOC_INT32)ifStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8787))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8848))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l4:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8935));
          i2 = *(OOC_INT32*)(_check_pointer(i2, 8946));
          i2 = i2-4;
          i = i2;
          {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l5_loop:
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9024));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9035))+4);
          i4 = _check_pointer(i4, 9038);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 9038))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9094));
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9105))+4);
          i5 = _check_pointer(i5, 9108);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i1+1), i6, OOC_UINT32, 9108))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9050)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9050)), 9059));
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9122)))), &_td_OOC_AST_ExtTree__NodeDesc, 9122)));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9166));
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9177))+4);
          i6 = _check_pointer(i6, 9180);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i1+3), i7, OOC_UINT32, 9180))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9194)))), &_td_OOC_AST_ExtTree__NodeListDesc, 9194)));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8989)))), OOC_IR__BuilderDesc_NewIfStatm)),OOC_IR__BuilderDesc_NewIfStatm)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6, (OOC_IR__StatementSeq)i2);
          _else = (OOC_IR__Statement)i2;
          i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i3;
          i4 = _check_pointer(i3, 9276);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          *(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 9276))*4) = i2;
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
              i1 = *(OOC_INT32*)(_check_pointer(i0, 9762));
              i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], ((i1+1)>>1));
              setRanges = (OOC_IR__CaseLabels)i1;
              i2 = *(OOC_INT32*)(_check_pointer(i0, 9809));
              i2 = i2-1;
              i3 = 0<=i2;
              i = 0;
              if (!i3) goto l8;
              i3=0;
l3_loop:
              i4 = _check_pointer(i1, 9846);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9872))+4);
              i6 = _check_pointer(i6, 9875);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 9875))*4);
              i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9887)))), &_td_OOC_AST_ExtTree__NodeDesc, 9887)), OOC_FALSE);
              *(OOC_INT32*)(i4+(_check_index((i3>>1), i5, OOC_UINT32, 9846))*4) = i6;
              i3 = i3+2;
              i4 = i3<=i2;
              i = i3;
              if (i4) goto l3_loop;
l8:
              return (OOC_IR__CaseLabels)i1;
              ;
            }


          i0 = (OOC_INT32)caseStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10017))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          select = (OOC_IR__Expression)i1;
          count = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10117))+12);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 10127));
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (i2) goto l3;
          i1=0;
          goto l13;
l3:
          i2=0;i3=0;
l4_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10166))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10176))+4);
          i4 = _check_pointer(i4, 10179);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10179))*4);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10378))+12);
          i0 = *(OOC_INT32*)(_check_pointer(i0, 10388));
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l25;
          i1=0;i2=0;
l16_loop:
          i3 = (OOC_INT32)caseStatm;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10427))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10437))+4);
          i4 = _check_pointer(i4, 10440);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 10440))*4);
          i4 = i4!=(OOC_INT32)0;
          if (i4) goto l19;
          i1=i2;
          goto l20;
l19:
          i4 = (OOC_INT32)caseList;
          i4 = _check_pointer(i4, 10476);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = (OOC_INT32)b;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10522))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10532))+4);
          i7 = _check_pointer(i7, 10535);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i1+1), i8, OOC_UINT32, 10535))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10597))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10607))+4);
          i3 = _check_pointer(i3, 10610);
          i8 = OOC_ARRAY_LENGTH(i3, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i8, OOC_UINT32, 10610))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10549)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10549)), 10558));
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels((OOC_AST_ExtTree__NodeList)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10622)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10622)));
          i7 = (OOC_INT32)caseStatm;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10672))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10682))+4);
          i7 = _check_pointer(i7, 10685);
          i8 = i;
          i9 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i8+2), i9, OOC_UINT32, 10685))*4);
          i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10699)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10699)));
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10488)))), OOC_IR__BuilderDesc_NewCase)),OOC_IR__BuilderDesc_NewCase)((OOC_IR__Builder)i6, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__CaseLabels)i1, (OOC_IR__StatementSeq)i7);
          i3 = count;
          *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10476))*4) = i1;
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10786))+16);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l28;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l29;
l28:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10849))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l29:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10957));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10963));
          i3 = (OOC_INT32)select;
          i4 = (OOC_INT32)caseList;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10932)))), OOC_IR__BuilderDesc_NewCaseStatm)),OOC_IR__BuilderDesc_NewCaseStatm)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__CaseList)i4, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm(OOC_AST_ExtTree__RepeatStatm repeatStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)repeatStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11187));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11195));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11261))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11325))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11158)))), OOC_IR__BuilderDesc_NewRepeatStatm)),OOC_IR__BuilderDesc_NewRepeatStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm(OOC_AST_ExtTree__WhileStatm whileStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)whileStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11489));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11496));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11552))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11619))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11462)))), OOC_IR__BuilderDesc_NewWhileStatm)),OOC_IR__BuilderDesc_NewWhileStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__StatementSeq)i1);
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
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11976))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11979));
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11993));
              i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12010))+8);
              i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11959)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
              return (OOC_IR__Expression)i0;
              ;
            }


          i0 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12087))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12150))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
l4:
          _else = (OOC_IR__Statement)(OOC_INT32)0;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12260));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 12271));
          i0 = i0-4;
          i = i0;
          
l5_loop:
          i1 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12336));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12346))+4);
          i1 = _check_pointer(i1, 12348);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 12348))*4);
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr((OOC_AST_ExtTree__Operator)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12362)))), &_td_OOC_AST_ExtTree__OperatorDesc, 12362)));
          guard = (OOC_IR__Expression)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12394)))), &_td_OOC_IR__TypeTestDesc);
          i2 = i;
          if (!i1) goto l8;
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12463)))), OOC_IR__BuilderDesc_StartTypeGuard)),OOC_IR__BuilderDesc_StartTypeGuard)((OOC_IR__Builder)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12490)))), &_td_OOC_IR__TypeTestDesc, 12490)), (void*)(OOC_INT32)&currentNamespace);
          i1 = (OOC_INT32)withStatm;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12564));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12574))+4);
          i3 = _check_pointer(i3, 12576);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i2+3), i4, OOC_UINT32, 12576))*4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12590)))), &_td_OOC_AST_ExtTree__NodeListDesc, 12590)));
          region = (OOC_IR__StatementSeq)i3;
          i4 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12615)))), OOC_IR__BuilderDesc_EndTypeGuard)),OOC_IR__BuilderDesc_EndTypeGuard)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&currentNamespace);
          i4 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12725));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12736))+4);
          i1 = _check_pointer(i1, 12739);
          i5 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i5, OOC_UINT32, 12739))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12751)))), &_td_OOC_AST_ExtTree__TerminalDesc, 12751)), 12760));
          i5 = (OOC_INT32)elseSeq;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12684)))), OOC_IR__BuilderDesc_NewWithStatm)),OOC_IR__BuilderDesc_NewWithStatm)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i5);
          _else = (OOC_IR__Statement)i0;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          i1 = _check_pointer(i1, 12858);
          i3 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 12858))*4) = i0;
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13117))+28);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l3;
              return (OOC_IR__Expression)(OOC_INT32)0;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13169))+28);
              i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
              return (OOC_IR__Expression)i0;
l4:
              _failed_function(13057); return 0;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)forStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13308));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13313));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13371))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i3);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13426))+12);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13486))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
          i6 = (OOC_INT32)forStatm;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13591))+36);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i6);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13285)))), OOC_IR__BuilderDesc_NewForStatm)),OOC_IR__BuilderDesc_NewForStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm(OOC_AST_ExtTree__LoopStatm loopStatm) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)loopStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13751));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13757));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13819))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13726)))), OOC_IR__BuilderDesc_NewLoopStatm)),OOC_IR__BuilderDesc_NewLoopStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }


      count = 0;
      i0 = (OOC_INT32)statmSeq;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 13991));
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (i2) goto l3;
      i1=0;
      goto l13;
l3:
      i2=0;i3=0;
l4_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14027))+4);
      i4 = _check_pointer(i4, 14030);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 14030))*4);
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
      i0 = *(OOC_INT32*)(_check_pointer(i0, 14168));
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l71;
      i1=0;
l16_loop:
      i2 = (OOC_INT32)statmSeq;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14204))+4);
      i3 = _check_pointer(i3, 14207);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 14207))*4);
      i3 = i3!=(OOC_INT32)0;
      if (!i3) goto l66;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14246))+4);
      i2 = _check_pointer(i2, 14249);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 14249))*4);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14261)))), &_td_OOC_AST_ExtTree__NodeDesc, 14261);
      n = (OOC_AST_ExtTree__Node)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14284)))), &_td_OOC_AST_ExtTree__ProcedureCallDesc);
      if (i2) goto l61;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14377)))), &_td_OOC_AST_ExtTree__ReturnStatmDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14449)))), &_td_OOC_AST_ExtTree__AssignmentDesc);
      if (i2) goto l57;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14648)))), &_td_OOC_AST_ExtTree__IfStatmDesc);
      if (i2) goto l55;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14716)))), &_td_OOC_AST_ExtTree__CaseStatmDesc);
      if (i2) goto l53;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14804)))), &_td_OOC_AST_ExtTree__WithStatmDesc);
      if (i2) goto l51;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14876)))), &_td_OOC_AST_ExtTree__RepeatStatmDesc);
      if (i2) goto l49;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14966)))), &_td_OOC_AST_ExtTree__WhileStatmDesc);
      if (i2) goto l47;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15040)))), &_td_OOC_AST_ExtTree__ForStatmDesc);
      if (i2) goto l45;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15111)))), &_td_OOC_AST_ExtTree__LoopStatmDesc);
      if (i2) goto l43;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15184)))), &_td_OOC_AST_ExtTree__ExitStatmDesc);
      if (i2) goto l41;
      Log__Type("++ Unknown type in StatementSeq", 32, (void*)i1);
      _assert(OOC_FALSE, 127, 15342);
      goto l62;
l41:
      i2 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15241));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15247));
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15229)))), OOC_IR__BuilderDesc_NewExit)),OOC_IR__BuilderDesc_NewExit)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14507));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14561));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14613));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14573))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14625))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14519));
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
      i2 = _check_pointer(i2, 15467);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = count;
      *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 15467))*4) = i1;
      count = (i4+1);
l66:
      i1 = i;
      i1 = i1+2;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l16_loop;
l71:
      i0 = (OOC_INT32)statmSeqIR;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15581)), 0);
      i2 = count;
      i1 = i2!=i1;
      if (!i1) goto l82;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], i2);
      copy = (OOC_IR__StatementSeq)i1;
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l81;
      i3=0;
l76_loop:
      i4 = _check_pointer(i1, 15762);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 15779);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 15779))*4);
      *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15762))*4) = i6;
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16011)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      expr = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)constDecl;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16101))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16082)))), &_td_OOC_IR__ConstDesc, 16082)), 16088))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16058)))), OOC_SymbolTable__ConstDeclDesc_SetValueType)),OOC_SymbolTable__ConstDeclDesc_SetValueType)((OOC_SymbolTable__ConstDecl)i1, (Language__Value)i0, (OOC_SymbolTable__PredefType)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16112)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16112)));
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16529))+48);
      currentNamespace = (OOC_SymbolTable__Namespace)i3;
      currentSourceContext = (OOC_SymbolTable__Item)i2;
      i3 = (OOC_INT32)procCode;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16600))+28);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16626))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16632))+8);
      i4 = i4==(OOC_INT32)0;
      
      goto l5;
l3:
      i4=OOC_TRUE;
l5:
      if (i4) goto l7;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16734))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16740))+8);
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
      i1 = _check_pointer(i0, 16872);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 16896));
      i5 = _check_pointer(i5, 16902);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16968))+28);
      i6 = i6!=(OOC_INT32)0;
      if (i6) goto l11;
      i3=OOC_FALSE;
      goto l12;
l11:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17022))+28);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17027))+4);
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
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 17399))+41);
          return (!i0);
          ;
        }

        
        OOC_INT32 OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT32 count;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17575)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17611)))), &_td_OOC_SymbolTable__ProcDeclDesc, 17611)));
          
l5:
          if (i1) goto l7;
          count = 0;
          i1=0;
          goto l8;
l7:
          count = 1;
          i1=1;
l8:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17727))+8);
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
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17844));
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18030)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l6;
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)i0);
          if (!i1) goto l6;
          i1 = (OOC_INT32)procList;
          i1 = _check_pointer(i1, 18100);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = count;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18131))+60);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_AST_ExtTree__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18148)))), &_td_OOC_AST_ExtTree__ProcDeclDesc, 18148)));
          i5 = count;
          *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 18100))*4) = i4;
          count = (i5+1);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18297))+8);
          i1 = i0!=(OOC_INT32)0;
          nested = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l14;
l9_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18409));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l9_loop;
l14:
          return;
          ;
        }


      i0 = (OOC_INT32)moduleAST;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18506))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18512));
      declSeq = (OOC_AST_ExtTree__NodeList)i0;
      i0 = (OOC_INT32)moduleDecl;
      i0 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i0);
      procList = (OOC_IR__ProcedureList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureList.baseTypes[0], i0));
      count = 0;
      i0 = (OOC_INT32)moduleDecl;
      OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)moduleAST;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18654))+20);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18681))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18687))+8);
      i1 = i1==(OOC_INT32)0;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18790))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18796))+8);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
      goto l8;
l7:
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
l8:
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18862));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18870));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18886))+28);
      i4 = (OOC_INT32)moduleDecl;
      i5 = (OOC_INT32)procList;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18840)))), OOC_IR__BuilderDesc_NewModule)),OOC_IR__BuilderDesc_NewModule)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_Scanner_InputBuffer__CharArray)i0, (OOC_SymbolTable__Module)i4, (OOC_IR__ProcedureList)i5, (OOC_IR__StatementSeq)i1);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19595))+8);
          i1 = i0!=(OOC_INT32)0;
          nested = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l8;
l3_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19710));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19792)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l3;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
l3:
      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20054)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l9;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20396)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20444))+48);
      OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl((OOC_SymbolTable__ConstDecl)i0, (OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20464)))), &_td_OOC_AST_ExtTree__NodeDesc, 20464)));
      goto l17;
l9:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 20085))+32);
      i1 = !i1;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20132))+48);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20153)))), &_td_OOC_AST_ExtTree__NodeDesc, 20153)));
      expr = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20183))+16);
      i2 = i1==i2;
      if (i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20315)))), &_td_OOC_IR__ConstDesc, 20315)), 20321))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20315)))), &_td_OOC_IR__ConstDesc, 20315)), 20321))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20337)))), &_td_Language_Integer__ValueDesc, 20337)), 20343)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20337)))), &_td_Language_Integer__ValueDesc, 20337)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20294)))), OOC_SymbolTable__ArrayDesc_SetLength)),OOC_SymbolTable__ArrayDesc_SetLength)((OOC_SymbolTable__Array)i0, i1);
      goto l17;
l14:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20246)))), OOC_SymbolTable__ArrayDesc_SetLength)),OOC_SymbolTable__ArrayDesc_SetLength)((OOC_SymbolTable__Array)i0, 1);
l17:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20533)))), &_td_OOC_SymbolTable__TypeDesc);
      if (!i1) goto l23;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20565)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (!i1) goto l23;
      OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i0);
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20687)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l29;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21043)))), &_td_OOC_SymbolTable__RecordDesc));
      if (!i1) goto l30;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
      goto l30;
l29:
      i1 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i1;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20829))+48);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21228))+40);
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
