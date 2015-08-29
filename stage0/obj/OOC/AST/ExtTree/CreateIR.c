#include <OOC/AST/ExtTree/CreateIR.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_IR__Module OOC_AST_ExtTree_CreateIR__CreateIR(OOC_AST_ExtTree__Module module, OOC_SymbolTable__Module symTab, OOC_IR__Builder b) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item currentSourceContext;
  OOC_SymbolTable__Namespace currentNamespace;
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_QualType(OOC_AST_ExtTree__QualType qualType);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator(OOC_AST_ExtTree__Node design);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Range(OOC_AST_ExtTree__Node expr, OOC_CHAR8 isSet);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct(OOC_AST_ExtTree__Set sc);
  auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_QualType(OOC_AST_ExtTree__QualType qualType);
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
      OOC_Scanner_BasicList__Symbol sym;
      OOC_INT32 i;
      auto OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select(OOC_AST_ExtTree__Operator design);
        
        OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select(OOC_AST_ExtTree__Operator design) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_IR__Expression left;

          i0 = (OOC_INT32)design;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1891));
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
          left = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1917)))), &_td_OOC_IR__ModuleRefDesc);
          if (i2) goto l7;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2189))+20);
          i3 = i1==i3;
          if (i3) goto l5;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2330))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2408))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2424)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2424)), 2433));
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2334));
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2311)))), OOC_IR__BuilderDesc_NewSelect)),OOC_IR__BuilderDesc_NewSelect)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2226))+20);
          return (OOC_IR__Expression)i0;
          goto l8;
l7:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2055))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2071)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2071)), 2080));
          i3 = (OOC_INT32)currentNamespace;
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1953)))), OOC_IR__BuilderDesc_NewQualident)),OOC_IR__BuilderDesc_NewQualident)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_IR__ModuleRef)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_BasicList__Symbol)i0);
          return (OOC_IR__Expression)i0;
l8:
          _failed_function(1757); return 0;
          ;
        }


      i0 = (OOC_INT32)design;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2518)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2700)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3204)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3485)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3571)))), &_td_OOC_AST_ExtTree__QualTypeDesc);
      if (i1) goto l11;
      Log__Type("++ Unknown type in Designator", 30, (void*)i0);
      _assert(0u, 127, 3713);
      goto l37;
l11:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_QualType((OOC_AST_ExtTree__QualType)i0);
      return (OOC_IR__Expression)i0;
      goto l37;
l13:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, 0u);
      return (OOC_IR__Expression)i0;
      goto l37;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3244))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3248));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3253))+4);
      i1 = i1==18;
      if (i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3351))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3355));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3360))+4);
      _assert((i1==17), 127, 3337);
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3418))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3447));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3422));
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3400)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
      return (OOC_IR__Expression)i0;
      goto l37;
l18:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator_Select((OOC_AST_ExtTree__Operator)i0);
      return (OOC_IR__Expression)i0;
      goto l37;
l21:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2758));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2790))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2797));
      sym = (OOC_Scanner_BasicList__Symbol)i2;
      i = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2845))+8);
      i3 = *(OOC_INT32*)(_check_pointer(i3, 2854));
      i3 = 0<i3;
      if (i3) goto l24;
      i0=i1;
      goto l34;
l24:
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}i3=0;
l25_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2949))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 2958))+4);
      i5 = _check_pointer(i5, 2961);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 2961))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 2973)))), &_td_OOC_AST_ExtTree__NodeDesc, 2973)));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2883)))), OOC_IR__BuilderDesc_NewIndex)),OOC_IR__BuilderDesc_NewIndex)((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
      left = (OOC_IR__Expression)i2;
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3025))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 3034));
      i4 = i3<i4;
      if (!i4) goto l29;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3071))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3080))+4);
      i1 = _check_pointer(i1, 3083);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 3083))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3095)))), &_td_OOC_AST_ExtTree__TerminalDesc, 3095)), 3104));
      sym = (OOC_Scanner_BasicList__Symbol)i1;
      
l29:
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2845))+8);
      i4 = *(OOC_INT32*)(_check_pointer(i4, 2854));
      i4 = i3<i4;
      if (i4) goto l25_loop;
l33:
      i0=i2;
l34:
      return (OOC_IR__Expression)i0;
      goto l37;
l36:
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2666));
      i2 = (OOC_INT32)currentNamespace;
      i3 = (OOC_INT32)currentSourceContext;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2556)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_Scanner_BasicList__Symbol)i0);
      return (OOC_IR__Expression)i0;
l37:
      _failed_function(1610); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Range(OOC_AST_ExtTree__Node expr, OOC_CHAR8 isSet) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_IR__Expression e;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3945)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3981))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3985));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 3990))+4);
      i1 = i1==21;
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4048))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4066));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4051));
      i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4083))+8);
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
      i5 = isSet;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4031)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, i5);
      return (OOC_IR__Expression)i1;
l6:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      e = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4176));
      i3 = isSet;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4162)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i0, (OOC_IR__Expression)i0, i3);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct(OOC_AST_ExtTree__Set sc) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 len;
      OOC_IR__Expression result;
      OOC_INT32 i;

      i0 = (OOC_INT32)sc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4344))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4357));
      i1 = i1==0;
      if (i1) goto l12;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4461))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4473));
      i1 = (i1+1)>>1;
      len = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4513))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4525))+4);
      i2 = _check_pointer(i2, 4527);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 4527))*4);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4539)))), &_td_OOC_AST_ExtTree__NodeDesc, 4539)), 1u);
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
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4645))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4657))+4);
      i5 = _check_pointer(i5, 4659);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i3*2), i6, OOC_UINT32, 4659))*4);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4673)))), &_td_OOC_AST_ExtTree__NodeDesc, 4673)), 1u);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4601)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)0, 6, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4404))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4412));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4387)))), OOC_IR__BuilderDesc_NewSetRange)),OOC_IR__BuilderDesc_NewSetRange)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)0, (OOC_IR__Expression)0, 1u);
      return (OOC_IR__Expression)i0;
l13:
      _failed_function(4222); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_QualType(OOC_AST_ExtTree__QualType qualType) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_IR__Expression type;
      OOC_IR__ExpressionList arguments;
      OOC_INT32 i;
      OOC_AST_ExtTree__Node n;

      i0 = (OOC_INT32)qualType;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4970));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      type = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5013))+8);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 5023));
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], ((i2+1)>>1));
      arguments = (OOC_IR__ExpressionList)i2;
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5072)), 0);
      i4 = 0<i3;
      if (!i4) goto l12;
      i4=0;
l3_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5101))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5111))+4);
      i5 = _check_pointer(i5, 5113);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i4*2), i6, OOC_UINT32, 5113))*4);
      i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 5127)))), &_td_OOC_AST_ExtTree__NodeDesc, 5127);
      n = (OOC_AST_ExtTree__Node)i5;
      i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 5148)))), &_td_OOC_AST_ExtTree__QualTypeDesc);
      if (i6) goto l6;
      i6 = _check_pointer(i2, 5241);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i5);
      *(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 5241))*4) = i5;
      goto l7;
l6:
      i6 = _check_pointer(i2, 5189);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_QualType((OOC_AST_ExtTree__QualType)i5);
      *(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 5189))*4) = i5;
l7:
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l3_loop;
l12:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5365))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5372));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5327)))), OOC_IR__BuilderDesc_NewQualType)),OOC_IR__BuilderDesc_NewQualType)((OOC_IR__Builder)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (OOC_Scanner_BasicList__Symbol)i0);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_Expr(OOC_AST_ExtTree__Node expr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_IR__Expression res;
      OOC_IR__Expression left;
      OOC_IR__Expression right;

      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5527)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6222)))), &_td_OOC_AST_ExtTree__FactorDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6300)))), &_td_OOC_AST_ExtTree__ArrayIndexDesc);
      if (i1) goto l39;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6407)))), &_td_OOC_AST_ExtTree__OperatorDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6975)))), &_td_OOC_AST_ExtTree__SetDesc);
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7040)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
      if (i1) goto l17;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7122)))), &_td_OOC_AST_ExtTree__QualTypeDesc);
      if (i1) goto l15;
      Log__Type("++ Unknown expression class in Expr", 36, (void*)i0);
      _assert(0u, 127, 7266);
      goto l55;
l15:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_QualType((OOC_AST_ExtTree__QualType)i0);
      res = (OOC_IR__Expression)i0;
      goto l55;
l17:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)i0, 0u);
      res = (OOC_IR__Expression)i0;
      goto l55;
l19:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_SetConstruct((OOC_AST_ExtTree__Set)i0);
      res = (OOC_IR__Expression)i0;
      goto l55;
l21:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6445))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6449));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 6454))+4);
      i1 = i1==18;
      if (i1) goto l24;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6495))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6499));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 6504))+4);
      i1 = i1==17;
      
      goto l26;
l24:
      i1=1u;
l26:
      if (i1) goto l36;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6643));
      i1 = i1!=0;
      if (i1) goto l30;
      left = (OOC_IR__Expression)0;
      i1=0;
      goto l31;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6692));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
      left = (OOC_IR__Expression)i1;
      
l31:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6772))+8);
      i2 = i2!=0;
      if (i2) goto l34;
      right = (OOC_IR__Expression)0;
      i2=0;
      goto l35;
l34:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6823))+8);
      i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i2);
      right = (OOC_IR__Expression)i2;
      
l35:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6924))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6928));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6905)))), OOC_IR__BuilderDesc_NewOperator)),OOC_IR__BuilderDesc_NewOperator)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
      res = (OOC_IR__Expression)i0;
      
      goto l55;
l36:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      
      goto l55;
l39:
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      goto l55;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6267))+4);
      i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
      res = (OOC_IR__Expression)i0;
      goto l55;
l43:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5566));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5571))+4);
      switch (i1) {
      case 45:
        i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 43:
      case 44:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5730));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5708)))), OOC_IR__BuilderDesc_NewStringConst)),OOC_IR__BuilderDesc_NewStringConst)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 37:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5803));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5782)))), OOC_IR__BuilderDesc_NewIntConst10)),OOC_IR__BuilderDesc_NewIntConst10)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 38:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5876));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5855)))), OOC_IR__BuilderDesc_NewIntConst16)),OOC_IR__BuilderDesc_NewIntConst16)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 39:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5951));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5929)))), OOC_IR__BuilderDesc_NewCharConst16)),OOC_IR__BuilderDesc_NewCharConst16)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 40:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6025));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6005)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, 8);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 41:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6112));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6092)))), OOC_IR__BuilderDesc_NewRealConst)),OOC_IR__BuilderDesc_NewRealConst)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, 9);
        res = (OOC_IR__Expression)i0;
        goto l55;
      case 42:
        i1 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6190));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6176)))), OOC_IR__BuilderDesc_NewNil)),OOC_IR__BuilderDesc_NewNil)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0);
        res = (OOC_IR__Expression)i0;
        goto l55;
      default:
        _failed_case(i1, 5557);
        goto l55;
      }
l55:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)res;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7306)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      return (OOC_IR__Expression)i0;
      ;
    }

    
    OOC_IR__Expression OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall(OOC_AST_ExtTree__FunctionCall call, OOC_CHAR8 isProcCall) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_IR__Expression design;
      OOC_IR__ExpressionList arguments;
      OOC_INT32 i;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7586));
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i1);
      design = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7624))+8);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 7635));
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], ((i2+1)>>1));
      arguments = (OOC_IR__ExpressionList)i2;
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7686)), 0);
      i4 = 0<i3;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 7711);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7728))+8);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7739))+4);
      i7 = _check_pointer(i7, 7742);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i4*2), i8, OOC_UINT32, 7742))*4);
      i7 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7756)))), &_td_OOC_AST_ExtTree__NodeDesc, 7756)));
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 7711))*4) = i7;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l3_loop;
l8:
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7878))+12);
      i4 = isProcCall;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7885));
      i5 = (OOC_INT32)currentSourceContext;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7788)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (!i4), (OOC_SymbolTable__Item)i5, (OOC_Scanner_BasicList__Symbol)i0);
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
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_IR__Expression expr;
          OOC_IR__ExpressionList arguments;
          OOC_IR__Expression design;

          i0 = (OOC_INT32)call;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8298));
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8305)))), &_td_OOC_AST_ExtTree__FunctionCallDesc);
          if (i1) goto l3;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 0);
          arguments = (OOC_IR__ExpressionList)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8548));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i0);
          design = (OOC_IR__Expression)i0;
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8667));
          i4 = (OOC_INT32)currentSourceContext;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8576)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i1, 0u, (OOC_SymbolTable__Item)i4, (OOC_Scanner_BasicList__Symbol)i3);
          expr = (OOC_IR__Expression)i0;
          
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8371));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_FunctionCall((OOC_AST_ExtTree__FunctionCall)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8386)))), &_td_OOC_AST_ExtTree__FunctionCallDesc, 8386)), 1u);
          expr = (OOC_IR__Expression)i0;
          
l4:
          i1 = i0!=0;
          if (i1) goto l7;
          i1=0u;
          goto l9;
l7:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8719)))), &_td_OOC_IR__StatementDesc);
          
l9:
          if (i1) goto l11;
          return (OOC_IR__Statement)0;
          goto l12;
l11:
          return (OOC_IR__Statement)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8766)))), &_td_OOC_IR__StatementDesc, 8766));
l12:
          _failed_function(8126); return 0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_Return(OOC_AST_ExtTree__ReturnStatm _return) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)_return;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9006))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9132));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9190))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9140));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9205)))), &_td_OOC_AST_ExtTree__NodeDesc, 9205)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9113)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i0);
          return (OOC_IR__Statement)i0;
          goto l4;
l3:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9062));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9070));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9043)))), OOC_IR__BuilderDesc_NewReturn)),OOC_IR__BuilderDesc_NewReturn)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0);
          return (OOC_IR__Statement)i0;
l4:
          _failed_function(8924); return 0;
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
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9505)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9505)), 9514));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9477)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_IfStatm(OOC_AST_ExtTree__IfStatm ifStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_IR__StatementSeq elseSeq;
          OOC_INT32 i;
          OOC_IR__Statement _else;

          i0 = (OOC_INT32)ifStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9756))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9817))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l4:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9904));
          i2 = *(OOC_INT32*)(_check_pointer(i2, 9915));
          i2 = i2-4;
          i = i2;
          {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l5_loop:
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9993));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10004))+4);
          i4 = _check_pointer(i4, 10007);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 10007))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10063));
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10074))+4);
          i5 = _check_pointer(i5, 10077);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index((i1+1), i6, OOC_UINT32, 10077))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10019)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10019)), 10028));
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10091)))), &_td_OOC_AST_ExtTree__NodeDesc, 10091)));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10135));
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10146))+4);
          i6 = _check_pointer(i6, 10149);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i1+3), i7, OOC_UINT32, 10149))*4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10163)))), &_td_OOC_AST_ExtTree__NodeListDesc, 10163)));
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9958)))), OOC_IR__BuilderDesc_NewIfStatm)),OOC_IR__BuilderDesc_NewIfStatm)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6, (OOC_IR__StatementSeq)i2);
          _else = (OOC_IR__Statement)i2;
          i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i3;
          i4 = _check_pointer(i3, 10245);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          *(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 10245))*4) = i2;
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
              i1 = *(OOC_INT32*)(_check_pointer(i0, 10731));
              i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], ((i1+1)>>1));
              setRanges = (OOC_IR__CaseLabels)i1;
              i = 0;
              i2 = *(OOC_INT32*)(_check_pointer(i0, 10778));
              i3 = 0<i2;
              if (!i3) goto l8;
              i3=0;
l3_loop:
              i4 = _check_pointer(i1, 10815);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10841))+4);
              i6 = _check_pointer(i6, 10844);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 10844))*4);
              i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Range((OOC_AST_ExtTree__Node)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10856)))), &_td_OOC_AST_ExtTree__NodeDesc, 10856)), 0u);
              *(OOC_INT32*)(i4+(_check_index((i3>>1), i5, OOC_UINT32, 10815))*4) = i6;
              i3 = i3+2;
              i = i3;
              i4 = i3<i2;
              if (i4) goto l3_loop;
l8:
              return (OOC_IR__CaseLabels)i1;
              ;
            }


          i0 = (OOC_INT32)caseStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10986))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          select = (OOC_IR__Expression)i1;
          count = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11086))+12);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 11096));
          i = 0;
          i2 = 0<i1;
          if (i2) goto l3;
          i1=0;
          goto l13;
l3:
          i2=0;i3=0;
l4_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11135))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11145))+4);
          i4 = _check_pointer(i4, 11148);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 11148))*4);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11347))+12);
          i = 0;
          i1 = *(OOC_INT32*)(_check_pointer(i1, 11357));
          i2 = 0<i1;
          if (!i2) goto l26;
          i2=0;i3=0;
l17_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11396))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11406))+4);
          i4 = _check_pointer(i4, 11409);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 11409))*4);
          i4 = i4!=0;
          if (i4) goto l20;
          {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
          goto l21;
l20:
          i4 = (OOC_INT32)caseList;
          i4 = _check_pointer(i4, 11445);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = (OOC_INT32)b;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11491))+12);
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 11501))+4);
          i7 = _check_pointer(i7, 11504);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i2+1), i8, OOC_UINT32, 11504))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11566))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11576))+4);
          i0 = _check_pointer(i0, 11579);
          i8 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i8, OOC_UINT32, 11579))*4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 11518)))), &_td_OOC_AST_ExtTree__TerminalDesc, 11518)), 11527));
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_CaseStatm_Labels((OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11591)))), &_td_OOC_AST_ExtTree__NodeListDesc, 11591)));
          i7 = (OOC_INT32)caseStatm;
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 11641))+12);
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 11651))+4);
          i8 = _check_pointer(i8, 11654);
          i9 = i;
          i10 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index((i9+2), i10, OOC_UINT32, 11654))*4);
          i8 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 11668)))), &_td_OOC_AST_ExtTree__NodeListDesc, 11668)));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11457)))), OOC_IR__BuilderDesc_NewCase)),OOC_IR__BuilderDesc_NewCase)((OOC_IR__Builder)i6, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__CaseLabels)i0, (OOC_IR__StatementSeq)i8);
          i2 = count;
          *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11445))*4) = i0;
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11755))+16);
          i1 = i1!=0;
          if (i1) goto l29;
          elseSeq = (OOC_IR__StatementSeq)0;
          i1=0;
          goto l30;
l29:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11818))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          
l30:
          i2 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11926));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11932));
          i3 = (OOC_INT32)select;
          i4 = (OOC_INT32)caseList;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11901)))), OOC_IR__BuilderDesc_NewCaseStatm)),OOC_IR__BuilderDesc_NewCaseStatm)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__CaseList)i4, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_RepeatStatm(OOC_AST_ExtTree__RepeatStatm repeatStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)repeatStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12156));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12164));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12230))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12294))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12127)))), OOC_IR__BuilderDesc_NewRepeatStatm)),OOC_IR__BuilderDesc_NewRepeatStatm)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WhileStatm(OOC_AST_ExtTree__WhileStatm whileStatm) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)whileStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12458));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12465));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12521))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12588))+12);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12431)))), OOC_IR__BuilderDesc_NewWhileStatm)),OOC_IR__BuilderDesc_NewWhileStatm)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__StatementSeq)i1);
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
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12945))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12948));
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12962));
              i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i3);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12979))+8);
              i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12928)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
              return (OOC_IR__Expression)i0;
              ;
            }


          i0 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13056))+4);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          elseSeq = (OOC_IR__StatementSeq)(OOC_INT32)0;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13119))+8);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          elseSeq = (OOC_IR__StatementSeq)i1;
l4:
          _else = (OOC_IR__Statement)(OOC_INT32)0;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13229));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 13240));
          i0 = i0-4;
          i = i0;
          
l5_loop:
          i1 = (OOC_INT32)withStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13305));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13315))+4);
          i1 = _check_pointer(i1, 13317);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i0+1), i2, OOC_UINT32, 13317))*4);
          i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_WithStatm_TypeTestExpr((OOC_AST_ExtTree__Operator)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13331)))), &_td_OOC_AST_ExtTree__OperatorDesc, 13331)));
          guard = (OOC_IR__Expression)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13363)))), &_td_OOC_IR__TypeTestDesc);
          if (!i1) goto l8;
          i1 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13432)))), OOC_IR__BuilderDesc_StartTypeGuard)),OOC_IR__BuilderDesc_StartTypeGuard)((OOC_IR__Builder)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13459)))), &_td_OOC_IR__TypeTestDesc, 13459)), (void*)(OOC_INT32)&currentNamespace);
          i1 = (OOC_INT32)withStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13533));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13543))+4);
          i2 = _check_pointer(i2, 13545);
          i3 = i;
          i4 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3+3), i4, OOC_UINT32, 13545))*4);
          i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13559)))), &_td_OOC_AST_ExtTree__NodeListDesc, 13559)));
          region = (OOC_IR__StatementSeq)i2;
          i4 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13584)))), OOC_IR__BuilderDesc_EndTypeGuard)),OOC_IR__BuilderDesc_EndTypeGuard)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&currentNamespace);
          i4 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13694));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13705))+4);
          i1 = _check_pointer(i1, 13708);
          i5 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i5, OOC_UINT32, 13708))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13720)))), &_td_OOC_AST_ExtTree__TerminalDesc, 13720)), 13729));
          i3 = (OOC_INT32)elseSeq;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13653)))), OOC_IR__BuilderDesc_NewWithStatm)),OOC_IR__BuilderDesc_NewWithStatm)((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_IR__StatementSeq)i2, (OOC_IR__StatementSeq)i3);
          _else = (OOC_IR__Statement)i0;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 1);
          elseSeq = (OOC_IR__StatementSeq)i1;
          i1 = _check_pointer(i1, 13827);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 13827))*4) = i0;
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14086))+28);
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l3;
              return (OOC_IR__Expression)(OOC_INT32)0;
              goto l4;
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14138))+28);
              i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i0);
              return (OOC_IR__Expression)i0;
l4:
              _failed_function(14026); return 0;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)forStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14277));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14282));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14340))+4);
          i3 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Designator((OOC_AST_ExtTree__Node)i3);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14395))+12);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14455))+20);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i1);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_ForStatm_Step();
          i6 = (OOC_INT32)forStatm;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14560))+36);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i6);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14254)))), OOC_IR__BuilderDesc_NewForStatm)),OOC_IR__BuilderDesc_NewForStatm)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i6);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_LoopStatm(OOC_AST_ExtTree__LoopStatm loopStatm) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)loopStatm;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14720));
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14726));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14788))+4);
          i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14695)))), OOC_IR__BuilderDesc_NewLoopStatm)),OOC_IR__BuilderDesc_NewLoopStatm)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i1);
          return (OOC_IR__Statement)i0;
          ;
        }

        
        OOC_IR__Statement OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm(OOC_AST_ExtTree__TryStatm tryStatm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__CatchList catchList;
          OOC_IR__StatementSeq statmSeq;
          OOC_INT32 i;
          OOC_AST_ExtTree__Catch _catch;
          OOC_IR__Expression guard;
          OOC_IR__StatementSeq catchStatm;

          i0 = (OOC_INT32)tryStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15106))+8);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 15116));
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CatchList.baseTypes[0], i1);
          catchList = (OOC_IR__CatchList)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15164))+4);
          i2 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i2);
          statmSeq = (OOC_IR__StatementSeq)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15206))+8);
          i = 0;
          i3 = *(OOC_INT32*)(_check_pointer(i3, 15216));
          i4 = 0<i3;
          if (!i4) goto l12;
          i4=0;
l3_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15253))+8);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15263))+4);
          i5 = _check_pointer(i5, 15265);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15265))*4);
          i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15277)))), &_td_OOC_AST_ExtTree__CatchDesc, 15277);
          _catch = (OOC_AST_ExtTree__Catch)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15314))+4);
          i6 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)i6);
          guard = (OOC_IR__Expression)i6;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15342))+12);
          i7 = i7==0;
          if (i7) goto l6;
          i7 = (OOC_INT32)b;
          i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15478))+12);
          i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 15484));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 15445)))), OOC_IR__BuilderDesc_StartExceptionScope)),OOC_IR__BuilderDesc_StartExceptionScope)((OOC_IR__Builder)i7, (OOC_IR__Expression)i6, (OOC_Scanner_BasicList__Symbol)i8, (void*)(OOC_INT32)&currentNamespace);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15553))+24);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i5);
          catchStatm = (OOC_IR__StatementSeq)i5;
          i7 = (OOC_INT32)b;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 15578)))), OOC_IR__BuilderDesc_EndExceptionScope)),OOC_IR__BuilderDesc_EndExceptionScope)((OOC_IR__Builder)i7, (void*)(OOC_INT32)&currentNamespace);
          
          goto l7;
l6:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15405))+24);
          i5 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i5);
          catchStatm = (OOC_IR__StatementSeq)i5;
          
l7:
          i7 = _check_pointer(i1, 15661);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i9 = (OOC_INT32)b;
          i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 15669)))), OOC_IR__BuilderDesc_NewCatchClause)),OOC_IR__BuilderDesc_NewCatchClause)((OOC_IR__Builder)i9, (OOC_IR__Expression)i6, (OOC_IR__StatementSeq)i5);
          *(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 15661))*4) = i5;
          i4 = i4+1;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l3_loop;
l12:
          i3 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15755));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15759));
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15734)))), OOC_IR__BuilderDesc_NewTryStatm)),OOC_IR__BuilderDesc_NewTryStatm)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__StatementSeq)i2, (OOC_IR__CatchList)i1);
          return (OOC_IR__Statement)i0;
          ;
        }


      count = 0;
      i0 = (OOC_INT32)statmSeq;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 15944));
      i = 0;
      i2 = 0<i1;
      if (i2) goto l3;
      i1=0;
      goto l13;
l3:
      i2=0;i3=0;
l4_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15980))+4);
      i4 = _check_pointer(i4, 15983);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 15983))*4);
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
      i0 = *(OOC_INT32*)(_check_pointer(i0, 16121));
      i1 = 0<i0;
      if (!i1) goto l75;
      i1=0;
l16_loop:
      i2 = (OOC_INT32)statmSeq;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16157))+4);
      i3 = _check_pointer(i3, 16160);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 16160))*4);
      i3 = i3!=0;
      if (!i3) goto l70;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16199))+4);
      i2 = _check_pointer(i2, 16202);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 16202))*4);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16214)))), &_td_OOC_AST_ExtTree__NodeDesc, 16214);
      n = (OOC_AST_ExtTree__Node)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16237)))), &_td_OOC_AST_ExtTree__ProcedureCallDesc);
      if (i2) goto l65;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16330)))), &_td_OOC_AST_ExtTree__ReturnStatmDesc);
      if (i2) goto l63;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16402)))), &_td_OOC_AST_ExtTree__AssignmentDesc);
      if (i2) goto l61;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16601)))), &_td_OOC_AST_ExtTree__IfStatmDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16669)))), &_td_OOC_AST_ExtTree__CaseStatmDesc);
      if (i2) goto l57;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16757)))), &_td_OOC_AST_ExtTree__WithStatmDesc);
      if (i2) goto l55;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16829)))), &_td_OOC_AST_ExtTree__RepeatStatmDesc);
      if (i2) goto l53;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16919)))), &_td_OOC_AST_ExtTree__WhileStatmDesc);
      if (i2) goto l51;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16993)))), &_td_OOC_AST_ExtTree__ForStatmDesc);
      if (i2) goto l49;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17064)))), &_td_OOC_AST_ExtTree__LoopStatmDesc);
      if (i2) goto l47;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17137)))), &_td_OOC_AST_ExtTree__ExitStatmDesc);
      if (i2) goto l45;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17222)))), &_td_OOC_AST_ExtTree__TryStatmDesc);
      if (i2) goto l43;
      Log__Type("++ Unknown type in StatementSeq", 32, (void*)i1);
      _assert(0u, 127, 17378);
      goto l66;
l43:
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq_TryStatm((OOC_AST_ExtTree__TryStatm)i1);
      statm = (OOC_IR__Statement)i1;
      goto l66;
l45:
      i2 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17194));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17200));
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17182)))), OOC_IR__BuilderDesc_NewExit)),OOC_IR__BuilderDesc_NewExit)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i1);
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
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16460));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16514));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16566));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16526))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16578))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16472));
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
      i2 = _check_pointer(i2, 17503);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = count;
      *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 17503))*4) = i1;
      count = (i4+1);
l70:
      i1 = i;
      i1 = i1+2;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l16_loop;
l75:
      i0 = (OOC_INT32)statmSeqIR;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17617)), 0);
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
      i4 = _check_pointer(i1, 17798);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 17815);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 17815))*4);
      *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17798))*4) = i6;
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18047)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
      expr = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18137))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18118)))), &_td_OOC_IR__ConstDesc, 18118)), 18124))+8);
      i2 = (OOC_INT32)constDecl;
      OOC_SymbolTable__ConstDeclDesc_SetValueType((OOC_SymbolTable__ConstDecl)i2, (Object_Boxed__Object)i0, (OOC_SymbolTable__PredefType)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18148)))), &_td_OOC_SymbolTable__PredefTypeDesc, 18148)));
      return;
      ;
    }

    
    OOC_IR__Procedure OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_AST_ExtTree__ProcDecl procCode) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SymbolTable__Namespace oldNamespace;
      OOC_SymbolTable__Item oldSourceContext;
      OOC_IR__StatementSeq statmSeq;
      OOC_Scanner_BasicList__Symbol endOfBody;

      i0 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i0;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i2 = (OOC_INT32)procDecl;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18600))+60);
      currentNamespace = (OOC_SymbolTable__Namespace)i3;
      currentSourceContext = (OOC_SymbolTable__Item)i2;
      i3 = (OOC_INT32)procCode;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18671))+28);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18697))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18703))+8);
      i4 = i4==(OOC_INT32)0;
      
      goto l5;
l3:
      i4=1u;
l5:
      if (i4) goto l7;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18805))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18811))+8);
      i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i4);
      statmSeq = (OOC_IR__StatementSeq)i4;
      
      goto l8;
l7:
      i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i4;
      
l8:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18852))+28);
      i5 = i5==(OOC_INT32)0;
      if (i5) goto l11;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18936))+28);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18942))+12);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 18947));
      endOfBody = (OOC_Scanner_BasicList__Symbol)i5;
      
      goto l12;
l11:
      endOfBody = (OOC_Scanner_BasicList__Symbol)(OOC_INT32)0;
      i5=(OOC_INT32)0;
l12:
      currentNamespace = (OOC_SymbolTable__Namespace)i0;
      currentSourceContext = (OOC_SymbolTable__Item)i1;
      i0 = (OOC_INT32)b;
      i1 = _check_pointer(i0, 19074);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19098));
      i6 = _check_pointer(i6, 19104);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19211))+28);
      i7 = i7!=(OOC_INT32)0;
      if (i7) goto l15;
      i3=0u;
      goto l16;
l15:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19266))+28);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19271))+4);
      i3 = i3!=(OOC_INT32)0;
      
l16:
      i6 = (OOC_INT32)*(OOC_INT32*)i6;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG(i1)), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i6, (OOC_SymbolTable__ProcDecl)i2, (OOC_IR__StatementSeq)i4, (OOC_Scanner_BasicList__Symbol)i5, i3);
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
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 19643))+49);
          return (!i0);
          ;
        }

        
        OOC_INT32 OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT32 count;
          OOC_SymbolTable__Item nested;

          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19819)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19855)))), &_td_OOC_SymbolTable__ProcDeclDesc, 19855)));
          
l5:
          if (i1) goto l7;
          count = 0;
          i1=0;
          goto l8;
l7:
          count = 1;
          i1=1;
l8:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19971))+8);
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
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20088));
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20274)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l6;
          i1 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_IsProc((OOC_SymbolTable__ProcDecl)i0);
          if (!i1) goto l6;
          i1 = (OOC_INT32)procList;
          i1 = _check_pointer(i1, 20344);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = count;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20375))+72);
          i4 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_ProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_AST_ExtTree__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 20392)))), &_td_OOC_AST_ExtTree__ProcDeclDesc, 20392)));
          i5 = count;
          *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 20344))*4) = i4;
          count = (i5+1);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20541))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l14;
l9_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20653));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l9_loop;
l14:
          return;
          ;
        }


      i0 = (OOC_INT32)moduleAST;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20750))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20756));
      declSeq = (OOC_AST_ExtTree__NodeList)i0;
      i0 = (OOC_INT32)moduleDecl;
      i0 = OOC_AST_ExtTree_CreateIR__CreateIR_Module_CountProcs((OOC_SymbolTable__Item)i0);
      procList = (OOC_IR__ProcedureList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureList.baseTypes[0], i0));
      count = 0;
      i0 = (OOC_INT32)moduleDecl;
      OOC_AST_ExtTree_CreateIR__CreateIR_Module_TraverseProcedures((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)moduleAST;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20898))+20);
      i1 = i1==0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20925))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20931))+8);
      i1 = i1==0;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21034))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21040))+8);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_StatementSeq((OOC_AST_ExtTree__NodeList)i1);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
      goto l8;
l7:
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], 0);
      statmSeq = (OOC_IR__StatementSeq)i1;
      
l8:
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21106));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21239))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21245))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 21114));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 21250));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21130))+28);
      i5 = (OOC_INT32)moduleDecl;
      i6 = (OOC_INT32)procList;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21084)))), OOC_IR__BuilderDesc_NewModule)),OOC_IR__BuilderDesc_NewModule)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_Scanner_InputBuffer__CharArray)i0, (OOC_SymbolTable__Module)i5, (OOC_IR__ProcedureList)i6, (OOC_IR__StatementSeq)i1, (OOC_Scanner_BasicList__Symbol)i4);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21893))+8);
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l8;
l3_loop:
          OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr((OOC_SymbolTable__Item)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22008));
          nested = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22090)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l3;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
l3:
      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22352)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l9;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22694)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22742))+56);
      OOC_AST_ExtTree_CreateIR__CreateIR_ConstDecl((OOC_SymbolTable__ConstDecl)i0, (OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22762)))), &_td_OOC_AST_ExtTree__NodeDesc, 22762)));
      goto l17;
l9:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 22383))+40);
      i1 = !i1;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22430))+56);
      i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR_Expr((OOC_AST_ExtTree__Node)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22451)))), &_td_OOC_AST_ExtTree__NodeDesc, 22451)));
      expr = (OOC_IR__Expression)i1;
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22481))+20);
      i2 = i1==i2;
      if (i2) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22611)))), &_td_OOC_IR__ConstDesc, 22611)), 22617))+8);
      i1 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22631)))), &_td_Object_BigInt__BigIntDesc, 22631)));
      OOC_SymbolTable__ArrayDesc_SetLength((OOC_SymbolTable__Array)i0, i1);
      goto l17;
l14:
      OOC_SymbolTable__ArrayDesc_SetLength((OOC_SymbolTable__Array)i0, 1);
l17:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22831)))), &_td_OOC_SymbolTable__TypeDesc);
      if (!i1) goto l23;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22863)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (!i1) goto l23;
      OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i0);
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22985)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l29;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23341)))), &_td_OOC_SymbolTable__RecordDesc));
      if (!i1) goto l30;
      OOC_AST_ExtTree_CreateIR__CreateIR_TranslateEmbeddedExpr_TraverseNested((OOC_SymbolTable__Item)i0);
      goto l30;
l29:
      i1 = (OOC_INT32)currentNamespace;
      oldNamespace = (OOC_SymbolTable__Namespace)i1;
      i1 = (OOC_INT32)currentSourceContext;
      oldSourceContext = (OOC_SymbolTable__Item)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23127))+60);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23526))+48);
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
