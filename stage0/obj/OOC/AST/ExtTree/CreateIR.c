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
      _assert(0u, 127, 3581);
      goto l33;
l9:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, 0u);
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
      i6 = OOC_ARRAY_LENGTH(i5, 0);
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
      i4 = OOC_ARRAY_LENGTH(i1, 0);
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
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3849))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3853));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3858))+4);
      i1 = i1==21;
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3916))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3934));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3919));
      i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3951))+8);
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
      i5 = isSet;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3899)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, i5);
      return (OOC_IR__Expression)i1;
l6:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      e = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4044));
      i3 = isSet;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4030)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0, (OOC_IR__Expression)i0, i3);
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
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 4395))*4);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4407)))), &_td_OOC_AST_ExtTree__NodeDesc, 4407)), 1u);
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
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4513))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4525))+4);
      i5 = _check_pointer(i5, 4527);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i3*2), i6, OOC_UINT32, 4527))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4541)))), &_td_OOC_AST_ExtTree__NodeDesc, 4541)), 1u);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4469)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)0, 6, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4272))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4280));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4255)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)0, (OOC_IR__Expression)0, 1u);
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
      _assert(0u, 127, 6421);
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
      i1=1u;
l22:
      if (i1) goto l32;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5861));
      i1 = i1!=0;
      if (i1) goto l26;
      left = (OOC_IR__Expression)0;
      i1=0;
      goto l27;
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5910));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      
l27:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5990))+8);
      i2 = i2!=0;
      if (i2) goto l30;
      right = (OOC_IR__Expression)0;
      i2=0;
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
      case 45:
        i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 43:
      case 44:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4948));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4926)))), OOC_IR__BuilderDesc_NewStringConst)),OOC_IR__BuilderDesc_NewStringConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 37:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5021));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5000)))), OOC_IR__BuilderDesc_NewIntConst10)),OOC_IR__BuilderDesc_NewIntConst10)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 38:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5094));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5073)))), OOC_IR__BuilderDesc_NewIntConst16)),OOC_IR__BuilderDesc_NewIntConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 39:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5169));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5147)))), OOC_IR__BuilderDesc_NewCharConst16)),OOC_IR__BuilderDesc_NewCharConst16)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 40:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5243));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5223)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 8);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 41:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5330));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5310)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, 9);
        res = (OOC_IR__Expression)i0;
        goto l51;
      case 42:
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
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6841)), 0);
      i4 = 0<i3;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 6866);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6883))+8);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6894))+4);
      i7 = _check_pointer(i7, 6897);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i4*2), i8, OOC_UINT32, 6897))*4);
      i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6911)))), &_td_OOC_AST_ExtTree__NodeDesc, 6911)));
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6866))*4) = i7;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
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
      auto OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm(OOC_AST_ExtTree__TryStatm tryStatm);
        
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
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7690)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i1, 0u, (OOC_Scanner_Builder_BasicList__Symbol)i3);
          expr = (OOC_IR__Expression)i0;
          
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7485));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7500)))), &_td_OOC_AST_ExtTree__FunctionCallDesc, 7500)), 1u);
          expr = (OOC_IR__Expression)i0;
          
l4:
          i1 = i0!=0;
          if (i1) goto l7;
          i1=0u;
          goto l9;
l7:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7786)))), &_td_OOC_IR__StatementDesc);
          
l9:
          if (i1) goto l11;
          return (OOC_IR__Statement)0;
          goto l12;
l11:
          return (OOC_IR__Statement)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7833)))), &_td_OOC_IR__StatementDesc, 7833));
l12:
          _failed_function(7240); return 0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return(OOC_AST_ExtTree__ReturnStatm _return) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)_return;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8073))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8199));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8257))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8207));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8272)))), &_td_OOC_AST_ExtTree__NodeDesc, 8272)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8180)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
          return (OOC_IR__Statement)i0;
          goto l4;
l3:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8129));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8137));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8110)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0);
          return (OOC_IR__Statement)i0;
l4:
          _failed_function(7991); return 0;
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
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8572)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8572)), 8581));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8544)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm(OOC_AST_ExtTree__IfStatm ifStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_IR__StatementSeq elseSeq;
          OOC_INT32 i;
          OOC_IR__Statement _else;

          i0 = (OOC_INT32)ifStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8823))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8884))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l4:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8971));
          i2 = *(OOC_INT32*)(_check_pointer(i2, 8982));
          i2 = i2-4;
          i = i2;
          {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l5_loop:
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9060));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9071))+4);
          i4 = _check_pointer(i4, 9074);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 9074))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9130));
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9141))+4);
          i5 = _check_pointer(i5, 9144);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i1+1), i6, OOC_UINT32, 9144))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9086)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9086)), 9095));
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9158)))), &_td_OOC_AST_ExtTree__NodeDesc, 9158)));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9202));
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9213))+4);
          i6 = _check_pointer(i6, 9216);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i1+3), i7, OOC_UINT32, 9216))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9230)))), &_td_OOC_AST_ExtTree__NodeListDesc, 9230)));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9025)))), OOC_IR__BuilderDesc_NewIfStatm)),OOC_IR__BuilderDesc_NewIfStatm)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6, (OOC_IR__StatementSeq)i2);
          _else = (OOC_IR__Statement)i2;
          i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i3;
          i4 = _check_pointer(i3, 9312);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          *(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 9312))*4) = i2;
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
              i1 = *(OOC_INT32*)(_check_pointer(i0, 9798));
              i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], ((i1+1)>>1));
              setRanges = (OOC_IR__CaseLabels)i1;
              i = 0;
              i2 = *(OOC_INT32*)(_check_pointer(i0, 9845));
              i3 = 0<i2;
              if (!i3) goto l8;
              i3=0;
l3_loop:
              i4 = _check_pointer(i1, 9882);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9908))+4);
              i6 = _check_pointer(i6, 9911);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 9911))*4);
              i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9923)))), &_td_OOC_AST_ExtTree__NodeDesc, 9923)), 0u);
              *(OOC_INT32*)(i4+(_check_index((i3>>1), i5, OOC_UINT32, 9882))*4) = i6;
              i3 = i3+2;
              i = i3;
              i4 = i3<i2;
              if (i4) goto l3_loop;
l8:
              return (OOC_IR__CaseLabels)i1;
              ;
            }


          i0 = (OOC_INT32)caseStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10053))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          select = (OOC_IR__Expression)i1;
          count = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10153))+12);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 10163));
          i = 0;
          i2 = 0<i1;
          if (i2) goto l3;
          i1=0;
          goto l13;
l3:
          i2=0;i3=0;
l4_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10202))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10212))+4);
          i4 = _check_pointer(i4, 10215);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10215))*4);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10414))+12);
          i = 0;
          i1 = *(OOC_INT32*)(_check_pointer(i1, 10424));
          i2 = 0<i1;
          if (!i2) goto l26;
          i2=0;i3=0;
l17_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10463))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10473))+4);
          i4 = _check_pointer(i4, 10476);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10476))*4);
          i4 = i4!=0;
          if (i4) goto l20;
          {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
          goto l21;
l20:
          i4 = (OOC_INT32)caseList;
          i4 = _check_pointer(i4, 10512);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = (OOC_INT32)b;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10558))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10568))+4);
          i7 = _check_pointer(i7, 10571);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i2+1), i8, OOC_UINT32, 10571))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10633))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10643))+4);
          i0 = _check_pointer(i0, 10646);
          i8 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i8, OOC_UINT32, 10646))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10585)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10585)), 10594));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels((OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10658)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10658)));
          i7 = (OOC_INT32)caseStatm;
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10708))+12);
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 10718))+4);
          i8 = _check_pointer(i8, 10721);
          i9 = i;
          i10 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index((i9+2), i10, OOC_UINT32, 10721))*4);
          i8 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 10735)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10735)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10524)))), OOC_IR__BuilderDesc_NewCase)),OOC_IR__BuilderDesc_NewCase)((OOC_IR__Builder)i6, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__CaseLabels)i0, (OOC_IR__StatementSeq)i8);
          i2 = count;
          *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10512))*4) = i0;
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10822))+16);
          i1 = i1!=0;
          if (i1) goto l29;
          elseSeq = (OOC_IR__StatementSeq)0;
          i1=0;
          goto l30;
l29:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10885))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l30:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10993));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10999));
          i3 = (OOC_INT32)select;
          i4 = (OOC_INT32)caseList;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10968)))), OOC_IR__BuilderDesc_NewCaseStatm)),OOC_IR__BuilderDesc_NewCaseStatm)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__CaseList)i4, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm(OOC_AST_ExtTree__RepeatStatm repeatStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)repeatStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11223));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11231));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11297))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11361))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11194)))), OOC_IR__BuilderDesc_NewRepeatStatm)),OOC_IR__BuilderDesc_NewRepeatStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm(OOC_AST_ExtTree__WhileStatm whileStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)whileStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11525));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11532));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11588))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11655))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11498)))), OOC_IR__BuilderDesc_NewWhileStatm)),OOC_IR__BuilderDesc_NewWhileStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__StatementSeq)i1);
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
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12012))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12015));
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12029));
              i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12046))+8);
              i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11995)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
              return (OOC_IR__Expression)i0;
              ;
            }


          i0 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12123))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12186))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
l4:
          _else = (OOC_IR__Statement)(OOC_INT32)0;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12296));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 12307));
          i0 = i0-4;
          i = i0;
          
l5_loop:
          i1 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12372));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12382))+4);
          i1 = _check_pointer(i1, 12384);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 12384))*4);
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr((OOC_AST_ExtTree__Operator)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12398)))), &_td_OOC_AST_ExtTree__OperatorDesc, 12398)));
          guard = (OOC_IR__Expression)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12430)))), &_td_OOC_IR__TypeTestDesc);
          if (!i1) goto l8;
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12499)))), OOC_IR__BuilderDesc_StartTypeGuard)),OOC_IR__BuilderDesc_StartTypeGuard)((OOC_IR__Builder)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12526)))), &_td_OOC_IR__TypeTestDesc, 12526)), (void*)(OOC_INT32)&currentNamespace);
          i1 = (OOC_INT32)withStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12600));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12610))+4);
          i2 = _check_pointer(i2, 12612);
          i3 = i;
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3+3), i4, OOC_UINT32, 12612))*4);
          i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12626)))), &_td_OOC_AST_ExtTree__NodeListDesc, 12626)));
          region = (OOC_IR__StatementSeq)i2;
          i4 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12651)))), OOC_IR__BuilderDesc_EndTypeGuard)),OOC_IR__BuilderDesc_EndTypeGuard)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&currentNamespace);
          i4 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12761));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12772))+4);
          i1 = _check_pointer(i1, 12775);
          i5 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i5, OOC_UINT32, 12775))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12787)))), &_td_OOC_AST_ExtTree__TerminalDesc, 12787)), 12796));
          i3 = (OOC_INT32)elseSeq;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12720)))), OOC_IR__BuilderDesc_NewWithStatm)),OOC_IR__BuilderDesc_NewWithStatm)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_IR__StatementSeq)i2, (OOC_IR__StatementSeq)i3);
          _else = (OOC_IR__Statement)i0;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          i1 = _check_pointer(i1, 12894);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 12894))*4) = i0;
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
          auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
            
            OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step() {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)forStatm;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13153))+28);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l3;
              return (OOC_IR__Expression)(OOC_INT32)0;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13205))+28);
              i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
              return (OOC_IR__Expression)i0;
l4:
              _failed_function(13093); return 0;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)forStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13344));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13349));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13407))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i3);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13462))+12);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13522))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
          i6 = (OOC_INT32)forStatm;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13627))+36);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i6);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13321)))), OOC_IR__BuilderDesc_NewForStatm)),OOC_IR__BuilderDesc_NewForStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm(OOC_AST_ExtTree__LoopStatm loopStatm) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)loopStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13787));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13793));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13855))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13762)))), OOC_IR__BuilderDesc_NewLoopStatm)),OOC_IR__BuilderDesc_NewLoopStatm)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i1);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14143))+8);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 14153));
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CatchList.baseTypes[0], (i1>>2));
          catchList = (OOC_IR__CatchList)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14207))+4);
          i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i2);
          statmSeq = (OOC_IR__StatementSeq)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14249))+8);
          i = 0;
          i3 = *(OOC_INT32*)(_check_pointer(i3, 14259));
          i4 = 0<i3;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14306))+8);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14316))+4);
          i5 = _check_pointer(i5, 14318);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i4+1), i6, OOC_UINT32, 14318))*4);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14332)))), &_td_OOC_AST_ExtTree__NodeDesc, 14332)));
          guard = (OOC_IR__Expression)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14385))+8);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14395))+4);
          i6 = _check_pointer(i6, 14397);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+3), i7, OOC_UINT32, 14397))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14411)))), &_td_OOC_AST_ExtTree__NodeListDesc, 14411)));
          catchStatm = (OOC_IR__StatementSeq)i6;
          i7 = _check_pointer(i1, 14442);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i9 = (OOC_INT32)b;
          i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 14456)))), OOC_IR__BuilderDesc_NewCatchClause)),OOC_IR__BuilderDesc_NewCatchClause)((OOC_IR__Builder)i9, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          *(OOC_INT32*)(i7+(_check_index((i4>>2), i8, OOC_UINT32, 14442))*4) = i5;
          i4 = i4+4;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l3_loop;
l8:
          i3 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14542));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14546));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14521)))), OOC_IR__BuilderDesc_NewTryStatm)),OOC_IR__BuilderDesc_NewTryStatm)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__StatementSeq)i2, (OOC_IR__CatchList)i1);
          return (OOC_IR__Statement)i0;
          ;
        }


      count = 0;
      i0 = (OOC_INT32)statmSeq;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 14731));
      i = 0;
      i2 = 0<i1;
      if (i2) goto l3;
      i1=0;
      goto l13;
l3:
      i2=0;i3=0;
l4_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14767))+4);
      i4 = _check_pointer(i4, 14770);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 14770))*4);
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
      i0 = *(OOC_INT32*)(_check_pointer(i0, 14908));
      i1 = 0<i0;
      if (!i1) goto l75;
      i1=0;
l16_loop:
      i2 = (OOC_INT32)statmSeq;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14944))+4);
      i3 = _check_pointer(i3, 14947);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 14947))*4);
      i3 = i3!=0;
      if (!i3) goto l70;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14986))+4);
      i2 = _check_pointer(i2, 14989);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 14989))*4);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15001)))), &_td_OOC_AST_ExtTree__NodeDesc, 15001);
      n = (OOC_AST_ExtTree__Node)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15024)))), &_td_OOC_AST_ExtTree__ProcedureCallDesc);
      if (i2) goto l65;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15117)))), &_td_OOC_AST_ExtTree__ReturnStatmDesc);
      if (i2) goto l63;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15189)))), &_td_OOC_AST_ExtTree__AssignmentDesc);
      if (i2) goto l61;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15388)))), &_td_OOC_AST_ExtTree__IfStatmDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15456)))), &_td_OOC_AST_ExtTree__CaseStatmDesc);
      if (i2) goto l57;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15544)))), &_td_OOC_AST_ExtTree__WithStatmDesc);
      if (i2) goto l55;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15616)))), &_td_OOC_AST_ExtTree__RepeatStatmDesc);
      if (i2) goto l53;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15706)))), &_td_OOC_AST_ExtTree__WhileStatmDesc);
      if (i2) goto l51;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15780)))), &_td_OOC_AST_ExtTree__ForStatmDesc);
      if (i2) goto l49;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15851)))), &_td_OOC_AST_ExtTree__LoopStatmDesc);
      if (i2) goto l47;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15924)))), &_td_OOC_AST_ExtTree__ExitStatmDesc);
      if (i2) goto l45;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16009)))), &_td_OOC_AST_ExtTree__TryStatmDesc);
      if (i2) goto l43;
      Log__Type("++ Unknown type in StatementSeq", 32, (void*)i1);
      _assert(0u, 127, 16165);
      goto l66;
l43:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm((OOC_AST_ExtTree__TryStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l45:
      i2 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15981));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15987));
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15969)))), OOC_IR__BuilderDesc_NewExit)),OOC_IR__BuilderDesc_NewExit)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15247));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15301));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15353));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15313))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15365))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15259));
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
      i2 = _check_pointer(i2, 16290);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = count;
      *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 16290))*4) = i1;
      count = (i4+1);
l70:
      i1 = i;
      i1 = i1+2;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l16_loop;
l75:
      i0 = (OOC_INT32)statmSeqIR;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16404)), 0);
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
      i4 = _check_pointer(i1, 16585);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 16602);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16602))*4);
      *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 16585))*4) = i6;
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16834)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      expr = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)constDecl;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16924))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16905)))), &_td_OOC_IR__ConstDesc, 16905)), 16911))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16881)))), OOC_SymbolTable__ConstDeclDesc_SetValueType)),OOC_SymbolTable__ConstDeclDesc_SetValueType)((OOC_SymbolTable__ConstDecl)i1, (Object_Boxed__Object)i0, (OOC_SymbolTable__PredefType)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16935)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16935)));
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17352))+48);
      currentNamespace = (OOC_SymbolTable__Namespace)i3;
      currentSourceContext = (OOC_SymbolTable__Item)i2;
      i3 = (OOC_INT32)procCode;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17423))+28);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17449))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17455))+8);
      i4 = i4==(OOC_INT32)0;
      
      goto l5;
l3:
      i4=1u;
l5:
      if (i4) goto l7;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17557))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17563))+8);
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
      i1 = _check_pointer(i0, 17695);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17719));
      i5 = _check_pointer(i5, 17725);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17791))+28);
      i6 = i6!=(OOC_INT32)0;
      if (i6) goto l11;
      i3=0u;
      goto l12;
l11:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17845))+28);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17850))+4);
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
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 18222))+41);
          return (!i0);
          ;
        }

        
        OOC_INT32 OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT32 count;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18398)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18434)))), &_td_OOC_SymbolTable__ProcDeclDesc, 18434)));
          
l5:
          if (i1) goto l7;
          count = 0;
          i1=0;
          goto l8;
l7:
          count = 1;
          i1=1;
l8:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18550))+8);
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
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18667));
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18853)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l6;
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)i0);
          if (!i1) goto l6;
          i1 = (OOC_INT32)procList;
          i1 = _check_pointer(i1, 18923);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = count;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18954))+60);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_AST_ExtTree__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18971)))), &_td_OOC_AST_ExtTree__ProcDeclDesc, 18971)));
          i5 = count;
          *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 18923))*4) = i4;
          count = (i5+1);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19120))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l14;
l9_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19232));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l9_loop;
l14:
          return;
          ;
        }


      i0 = (OOC_INT32)moduleAST;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19329))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19335));
      declSeq = (OOC_AST_ExtTree__NodeList)i0;
      i0 = (OOC_INT32)moduleDecl;
      i0 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i0);
      procList = (OOC_IR__ProcedureList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureList.baseTypes[0], i0));
      count = 0;
      i0 = (OOC_INT32)moduleDecl;
      OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)moduleAST;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19477))+20);
      i1 = i1==0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19504))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19510))+8);
      i1 = i1==0;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19613))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19619))+8);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
      goto l8;
l7:
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
l8:
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19685));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19693));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19709))+28);
      i4 = (OOC_INT32)moduleDecl;
      i5 = (OOC_INT32)procList;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19663)))), OOC_IR__BuilderDesc_NewModule)),OOC_IR__BuilderDesc_NewModule)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_Scanner_InputBuffer__CharArray)i0, (OOC_SymbolTable__Module)i4, (OOC_IR__ProcedureList)i5, (OOC_IR__StatementSeq)i1);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20418))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l8;
l3_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20533));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20615)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l3;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
l3:
      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20877)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l9;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21219)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21267))+48);
      OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl((OOC_SymbolTable__ConstDecl)i0, (OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21287)))), &_td_OOC_AST_ExtTree__NodeDesc, 21287)));
      goto l17;
l9:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 20908))+32);
      i1 = !i1;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20955))+48);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20976)))), &_td_OOC_AST_ExtTree__NodeDesc, 20976)));
      expr = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21006))+16);
      i2 = i1==i2;
      if (i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21136)))), &_td_OOC_IR__ConstDesc, 21136)), 21142))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21136)))), &_td_OOC_IR__ConstDesc, 21136)), 21142))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21156)))), &_td_Object_BigInt__BigIntDesc, 21156)), 21163)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21156)))), &_td_Object_BigInt__BigIntDesc, 21156)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21116)))), OOC_SymbolTable__ArrayDesc_SetLength)),OOC_SymbolTable__ArrayDesc_SetLength)((OOC_SymbolTable__Array)i0, i1);
      goto l17;
l14:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21069)))), OOC_SymbolTable__ArrayDesc_SetLength)),OOC_SymbolTable__ArrayDesc_SetLength)((OOC_SymbolTable__Array)i0, 1);
l17:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21356)))), &_td_OOC_SymbolTable__TypeDesc);
      if (!i1) goto l23;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21388)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (!i1) goto l23;
      OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i0);
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21510)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l29;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21866)))), &_td_OOC_SymbolTable__RecordDesc));
      if (!i1) goto l30;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
      goto l30;
l29:
      i1 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i1;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21652))+48);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22051))+40);
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
