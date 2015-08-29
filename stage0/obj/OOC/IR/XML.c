#include <OOC/IR/XML.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IR_XML__InitVisitor(OOC_IR_XML__Visitor v, XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  OOC_IR__InitVisitor((OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 1228)) = i1;
  return;
  ;
}

static OOC_IR_XML__Visitor OOC_IR_XML__NewVisitor(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_XML__Visitor.baseTypes[0]);
  i1 = (OOC_INT32)w;
  OOC_IR_XML__InitVisitor((OOC_IR_XML__Visitor)i0, (XML_Writer__Writer)i1);
  return (OOC_IR_XML__Visitor)i0;
  ;
}

static void OOC_IR_XML__TypeAttr(XML_Writer__Writer w, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)type;
  i1 = (OOC_INT32)OOC_IR__TypeName((OOC_SymbolTable__Type)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1557)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){84,121,112,101,0}), 5, (Object__String)i1);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConst(OOC_IR_XML__Visitor v, OOC_IR__Const _const) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String value;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1737));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1737));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1740)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,110,115,116,0}), 6, 1u);
  i1 = (OOC_INT32)_const;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1791))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1782));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)OOC_IR__ConstDesc_ToString((OOC_IR__Const)i1);
  value = (Object__String)i1;
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1857)))), &_td_Object__String8Desc, 1857)));
  chars = (Object__CharsLatin1)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1886));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1909)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1886));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1889)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i4, (void*)(_check_pointer(i1, 1909)), i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1918));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1918));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1921)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitVar(OOC_IR_XML__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2024));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2024));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2027)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,0}), 4, 1u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2058));
  i2 = (OOC_INT32)var;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2079))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2085))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2091))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2079))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2085))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2091))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2096)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2058));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2061)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i4, (void*)(_check_pointer(i3, 2096)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2105));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2105));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2108)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitPredefProc(OOC_IR_XML__Visitor v, OOC_IR__PredefProc pproc) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2223));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2223));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2226)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,101,100,101,102,45,112,114,111,99,0}), 12, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2266));
  i2 = (OOC_INT32)pproc;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2302))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2308))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2314))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2302))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2308))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2314))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2319)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2266));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2269)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2319)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2328));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2328));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2331)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitProcedureRef(OOC_IR_XML__Visitor v, OOC_IR__ProcedureRef procRef) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Module module;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2497));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2497));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2500)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,45,114,101,102,101,114,101,110,99,101,0}), 20, 0u);
  i1 = (OOC_INT32)procRef;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2564))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2564))+8);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2570)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i3);
  module = (OOC_SymbolTable__Module)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2587));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2626))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2632))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2626))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2632))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2637)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2587));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2590)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i4, 2637)), i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2646));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2684))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2690))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2696))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2684))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2690))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2696))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2701)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2646));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2649)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2701)), i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2710));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2710));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2713)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeRef(OOC_IR_XML__Visitor v, OOC_IR__TypeRef typeRef) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2849));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2849));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2852)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,114,101,102,101,114,101,110,99,101,0}), 15, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2895));
  i2 = (OOC_INT32)typeRef;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2933))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2939))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2945))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2933))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2939))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2945))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2950)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2895));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2898)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2950)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2959));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2959));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2962)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitModuleRef(OOC_IR_XML__Visitor v, OOC_IR__ModuleRef modRef) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3091));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3091));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3094)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,101,114,101,110,99,101,0}), 17, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3139));
  i2 = (OOC_INT32)modRef;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3176))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3182))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3188))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3176))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3182))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3188))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3193)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3139));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3142)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 3193)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3202));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3202));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3205)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAdr(OOC_IR_XML__Visitor v, OOC_IR__Adr adr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3323));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3323));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3326)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,100,114,0}), 4, 0u);
  i1 = (OOC_INT32)adr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3360))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3360))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3368)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3387));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3387));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3390)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitLen(OOC_IR_XML__Visitor v, OOC_IR__Len len) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_CHAR8 str[32];

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3522));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3522));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3525)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,101,110,0}), 4, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3557));
  i2 = (OOC_INT32)len;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 3581))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3557));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3560)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){100,105,109,0}), 4, i3);
  i1 = *(OOC_INT8*)((_check_pointer(i2, 3601))+8);
  switch (i1) {
  case 16:
    _copy_8((const void*)"string-const",(void*)(OOC_INT32)str,32);
    goto l7;
  case 17:
    _copy_8((const void*)"fixed-array",(void*)(OOC_INT32)str,32);
    goto l7;
  case 18:
    _copy_8((const void*)"open-array-param",(void*)(OOC_INT32)str,32);
    goto l7;
  case 19:
    _copy_8((const void*)"open-array-heap",(void*)(OOC_INT32)str,32);
    goto l7;
  default:
    _failed_case(i1, 3593);
    goto l7;
  }
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3826));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3826));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3829)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){118,97,114,105,97,110,116,0}), 8, (void*)(OOC_INT32)str, 32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3873))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3873))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3880)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3899));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3899));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3902)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConstructor(OOC_IR_XML__Visitor v, OOC_IR__Constructor cons) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4018));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4018));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4021)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,110,115,116,114,117,99,116,111,114,0}), 12, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4061));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4061));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4064)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,108,108,111,99,0}), 6, 0u);
  i1 = (OOC_INT32)cons;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4101))+8);
  OOC_IR__NewObjectDesc_Accept((OOC_IR__NewObject)i2, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4126));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4126));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4129)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4164))+12);
  i2 = i2!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4189));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4189));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4192)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){105,110,105,116,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4230))+12);
  OOC_IR__CallDesc_Accept((OOC_IR__Call)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4256));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4256));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4259)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4295));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4295));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4298)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCurrentException(OOC_IR_XML__Visitor v, OOC_IR__CurrentException ce) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4437));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4437));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4440)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,117,114,114,101,110,116,45,101,120,99,101,112,116,105,111,110,0}), 18, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4486));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4486));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4489)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitDeref(OOC_IR_XML__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4621));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4621));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4624)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){100,101,114,101,102,0}), 6, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4658));
  i2 = (OOC_INT32)deref;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4695))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4658));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4661)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,112,111,105,110,116,101,114,0}), 14, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4721))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4721))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4730)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4749));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4749));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4752)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitIndex(OOC_IR_XML__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4861));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4861));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4864)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,110,100,101,120,0}), 6, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4898));
  i2 = (OOC_INT32)index;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4933))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4898));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4901)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,105,110,100,101,120,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4957))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4957))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4964)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4987))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4987))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4994)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5013));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5013));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5016)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSelectField(OOC_IR_XML__Visitor v, OOC_IR__SelectField sf) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5134));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5134));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5137)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,108,101,99,116,45,102,105,101,108,100,0}), 13, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5178));
  i2 = (OOC_INT32)sf;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5212))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5219))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5225))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5212))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5219))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5225))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 5230)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5178));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5181)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){102,105,101,108,100,0}), 6, (void*)(_check_pointer(i3, 5230)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5240))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5240))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5248)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5267));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5267));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5270)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSelectProc(OOC_IR_XML__Visitor v, OOC_IR__SelectProc sp) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5399));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5399));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5402)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,108,101,99,116,45,116,98,45,112,114,111,99,0}), 15, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5445));
  i2 = (OOC_INT32)sp;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 5477))+28);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5445));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5448)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){115,116,97,116,105,99,45,99,97,108,108,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5499));
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 5530))+29);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5499));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5502)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){115,117,112,101,114,45,99,97,108,108,0}), 11, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5551));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5587))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5595))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5601))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5587))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5595))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5601))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 5606)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5551));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5554)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,98,45,112,114,111,99,0}), 8, (void*)(_check_pointer(i3, 5606)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5616))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5616))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5626)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5645));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5645));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5648)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNegate(OOC_IR_XML__Visitor v, OOC_IR__Negate neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5771));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5771));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5774)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,103,97,116,101,0}), 7, 0u);
  i1 = (OOC_INT32)neg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5811))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5811))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5820)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5839));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5839));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5842)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNewBlock(OOC_IR_XML__Visitor v, OOC_IR__NewBlock _new) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5957));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5957));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5960)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,119,45,98,108,111,99,107,0}), 10, 0u);
  i1 = (OOC_INT32)_new;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6030))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6030))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6036)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6055));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6055));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6058)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNewObject(OOC_IR_XML__Visitor v, OOC_IR__NewObject _new) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6202));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6202));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6205)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,119,45,111,98,106,101,99,116,0}), 11, 0u);
  i1 = (OOC_INT32)_new;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6280))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6329))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6337)), 0);
  i3 = 0<i2;
  if (!i3) goto l11;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6356))+8);
  i4 = _check_pointer(i4, 6364);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6364))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6356))+8);
  i5 = _check_pointer(i5, 6364);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 6364))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6367)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6406));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6406));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6409)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNot(OOC_IR_XML__Visitor v, OOC_IR__Not neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6521));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6521));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6524)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,111,116,0}), 4, 0u);
  i1 = (OOC_INT32)neg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6558))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6558))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6567)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6586));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6586));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6589)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAbs(OOC_IR_XML__Visitor v, OOC_IR__Abs abs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6688));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6688));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6691)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,98,115,0}), 4, 0u);
  i1 = (OOC_INT32)abs;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6725))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6725))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6734)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6753));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6753));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6756)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAsh(OOC_IR_XML__Visitor v, OOC_IR__Ash ash) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6855));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6855));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6858)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,104,0}), 4, 0u);
  i1 = (OOC_INT32)ash;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6892))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6892))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6899)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6920))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6920))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6925)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6944));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6944));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6947)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCap(OOC_IR_XML__Visitor v, OOC_IR__Cap cap) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7046));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7046));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7049)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,112,0}), 4, 0u);
  i1 = (OOC_INT32)cap;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7083))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7083))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7092)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7111));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7111));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7114)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitEntier(OOC_IR_XML__Visitor v, OOC_IR__Entier entier) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7222));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7222));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7225)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,116,105,101,114,0}), 7, 0u);
  i1 = (OOC_INT32)entier;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7265))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7265))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7274)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7293));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7293));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7296)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitOdd(OOC_IR_XML__Visitor v, OOC_IR__Odd odd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7401));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7401));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7404)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){111,100,100,0}), 4, 0u);
  i1 = (OOC_INT32)odd;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7438))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7438))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7447)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7466));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7466));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7469)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitShift(OOC_IR_XML__Visitor v, OOC_IR__Shift shift) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7574));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7574));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7577)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,103,105,99,97,108,45,115,104,105,102,116,0}), 14, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7619));
  i2 = (OOC_INT32)shift;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 7649))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7619));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7622)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,111,116,97,116,101,0}), 7, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7669))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7669))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7676)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7699))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7699))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7703)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7722));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7722));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7725)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitDyadicOp(OOC_IR_XML__Visitor v, OOC_IR__Operator op, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7913));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7913));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7916)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i2, (void*)(OOC_INT32)name, name_0d, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7953));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7953));
  i3 = variant;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7956)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,105,97,110,116,0}), 8, i3);
  i1 = (OOC_INT32)left;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7996)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)right;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8019)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8038));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8038));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8041)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitBinaryArith(OOC_IR_XML__Visitor v, OOC_IR__BinaryArith op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8184))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8196))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8205))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "binaryArith", 12);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitBooleanOp(OOC_IR_XML__Visitor v, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8349))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8361))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8370))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "booleanOp", 10);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConcat(OOC_IR_XML__Visitor v, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8503));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8503));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8505)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i2, "concat", 7, 0u);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8563))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8571)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8587))+8);
  i4 = _check_pointer(i4, 8595);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8595))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8587))+8);
  i5 = _check_pointer(i5, 8595);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 8595))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8598)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8624));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8624));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8626)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCompare(OOC_IR_XML__Visitor v, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8786))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8798))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8807))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "compare", 8);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitChangeElement(OOC_IR_XML__Visitor v, OOC_IR__ChangeElement op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8951))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8963))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8971))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "change-element", 15);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetOp(OOC_IR_XML__Visitor v, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9114))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9126))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9135))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "setOp", 6);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeCast(OOC_IR_XML__Visitor v, OOC_IR__TypeCast op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9244));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9244));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9247)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,99,97,115,116,0}), 10, 0u);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9299))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9293));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9313))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9313))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9319)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9337));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9337));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9340)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeConv(OOC_IR_XML__Visitor v, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9444));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9444));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9447)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,99,111,110,118,0}), 10, 0u);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9499))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9493));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9513))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9513))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9519)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9537));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9537));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9540)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeGuard(OOC_IR_XML__Visitor v, OOC_IR__TypeGuard op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9646));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9646));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9649)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,103,117,97,114,100,0}), 11, 0u);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9702))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9696));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9716))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9722))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9716))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9722))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9728)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9746));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9746));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9749)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeTag(OOC_IR_XML__Visitor v, OOC_IR__TypeTag op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9852));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9852));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9855)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,116,97,103,0}), 9, 0u);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9892))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9892))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9900)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9918));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9918));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9921)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeTest(OOC_IR_XML__Visitor v, OOC_IR__TypeTest op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10024));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10024));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10027)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,116,101,115,116,0}), 10, 0u);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10065))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10065))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10071)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10104))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10098));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i2, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10117));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10117));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10120)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitStatementSeq(OOC_IR_XML__Visitor v, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)statmSeq;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10282)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 10304);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10304))*4);
  i5 = _check_pointer(i0, 10304);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10304))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10307)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCall(OOC_IR_XML__Visitor v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10441));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10441));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10444)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10477));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10477));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10480)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){100,101,115,105,103,110,97,116,111,114,0}), 11, 0u);
  i1 = (OOC_INT32)call;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10522))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10522))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10530)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10549));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10549));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10552)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10607))+12);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10618)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10633));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10633));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10636)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){97,114,103,117,109,101,110,116,0}), 9, 0u);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10678))+12);
  i4 = _check_pointer(i4, 10689);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10689))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10678))+12);
  i5 = _check_pointer(i5, 10689);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10689))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10692)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10713));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10713));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10716)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i5);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10756));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10756));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10759)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssert(OOC_IR_XML__Visitor v, OOC_IR__Assert assert) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10869));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10869));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10872)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,101,114,116,0}), 7, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10907));
  i2 = (OOC_INT32)assert;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 10940))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10907));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10910)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){100,105,115,97,98,108,101,100,0}), 9, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10958));
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10986))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10958));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10961)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,111,100,101,0}), 5, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11009))+8);
  i1 = i1!=0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11045))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11045))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11056)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11084));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11084));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11087)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetRange(OOC_IR_XML__Visitor v, OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11204));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11204));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11207)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,116,45,114,97,110,103,101,0}), 10, 0u);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11249))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11249))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11254)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11275))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11275))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11278)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11295));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11295));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11298)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetMember(OOC_IR_XML__Visitor v, OOC_IR__SetMember range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11422));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11422));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11425)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,116,45,109,101,109,98,101,114,0}), 11, 0u);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11468))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11468))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11476)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11497))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11497))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11501)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11518));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11518));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11521)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitReturn(OOC_IR_XML__Visitor v, OOC_IR__Return _return) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11643));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11643));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11646)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,116,117,114,110,0}), 7, 0u);
  i1 = (OOC_INT32)_return;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11690))+8);
  i2 = i2!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11723))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11723))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11731)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11759));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11759));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11762)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssignment(OOC_IR_XML__Visitor v, OOC_IR__Assignment assignment) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11888));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11888));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11891)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,105,103,110,109,101,110,116,0}), 11, 0u);
  i1 = (OOC_INT32)assignment;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11939))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11939))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11949)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11977))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11977))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11984)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12003));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12003));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12006)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssignOp(OOC_IR_XML__Visitor v, OOC_IR__AssignOp assignOp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12134));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12134));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12137)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,105,103,110,45,111,112,101,114,97,116,105,111,110,0}), 17, 0u);
  i1 = (OOC_INT32)assignOp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12189))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12189))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12199)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12225))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12225))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12232)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12251));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12251));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12254)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitExit(OOC_IR_XML__Visitor v, OOC_IR__Exit exit) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12374));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12374));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12377)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,120,105,116,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12410));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12410));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12413)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitForStatm(OOC_IR_XML__Visitor v, OOC_IR__ForStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12531));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12531));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12534)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,104,105,108,101,45,115,116,97,116,109,0}), 12, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12574));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12574));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12577)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,0}), 9, 0u);
  i1 = (OOC_INT32)whileStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12623))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12623))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12628)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12647));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12647));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12650)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12681));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12681));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12684)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,97,114,116,45,118,97,108,117,101,0}), 12, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12733))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12733))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12740)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12759));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12759));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12762)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12796));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12796));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12799)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){101,110,100,45,118,97,108,117,101,0}), 10, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12846))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12846))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12851)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12870));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12870));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12873)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12905));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12905));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12908)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,101,112,0}), 5, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12950))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12950))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12956)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12975));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12975));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12978)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13005));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13005));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13008)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){98,111,100,121,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13072))+24);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13086));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13086));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13089)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13116));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13116));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13119)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitIfStatm(OOC_IR_XML__Visitor v, OOC_IR__IfStatm ifStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13243));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13243));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13246)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,102,45,115,116,97,116,109,0}), 9, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13283));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13283));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13286)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, 0u);
  i1 = (OOC_INT32)ifStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13326))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13326))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13333)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13352));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13352));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13355)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13388));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13388));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13391)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,116,114,117,101,0}), 10, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13457))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13475));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13475));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13478)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13525))+16);
  i2 = i2!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13556));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13556));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13559)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,102,97,108,115,101,0}), 11, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13628))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13649));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13649));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13652)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13694));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13694));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13697)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCase(OOC_IR_XML__Visitor v, OOC_IR__Case _case) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13830));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13830));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13833)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,115,101,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13866));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13866));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13869)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, 0u);
  i1 = (OOC_INT32)_case;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13925))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 13933)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13948));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13948));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13951)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){108,97,98,101,108,0}), 6, 0u);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13990))+8);
  i4 = _check_pointer(i4, 13998);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13998))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13990))+8);
  i5 = _check_pointer(i5, 13998);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13998))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14001)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14022));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14022));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14025)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i5);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14062));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14062));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14065)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14098));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14098));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14101)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,97,116,109,45,115,101,113,0}), 10, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14164))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14182));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14182));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14185)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14217));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14217));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14220)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCaseStatm(OOC_IR_XML__Visitor v, OOC_IR__CaseStatm caseStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14361));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14361));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14364)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,115,101,45,115,116,97,116,109,0}), 11, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14403));
  i2 = (OOC_INT32)caseStatm;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 14442))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14403));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14406)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,109,97,116,99,104,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14462));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14462));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14465)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,101,108,101,99,116,0}), 7, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14508))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14508))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14516)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14535));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14535));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14538)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14595))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14605)), 0);
  i3 = 0<i1;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14628))+12);
  i4 = _check_pointer(i4, 14638);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14638))*4);
  OOC_IR__CaseDesc_Accept((OOC_IR__Case)i4, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14682))+16);
  i1 = i1!=0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14711));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14711));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14714)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,102,97,117,108,116,45,112,97,116,104,0}), 13, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14787))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14806));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14806));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14809)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14853));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14853));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14856)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitLoopStatm(OOC_IR_XML__Visitor v, OOC_IR__LoopStatm loopStatm) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14986));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14986));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14989)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,111,112,45,115,116,97,116,109,0}), 11, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15028));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15028));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15031)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,111,100,121,0}), 5, 0u);
  i1 = (OOC_INT32)loopStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15094))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15108));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15108));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15111)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15138));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15138));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15141)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitMoveBlock(OOC_IR_XML__Visitor v, OOC_IR__MoveBlock move) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15266));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15266));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15269)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,118,101,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15302));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15302));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15305)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, 0u);
  i1 = (OOC_INT32)move;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15343))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15343))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15351)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15370));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15370));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15373)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15402));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15402));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15405)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15441))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15441))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15447)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15466));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15466));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15469)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15496));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15496));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15499)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,105,122,101,0}), 5, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15535))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15535))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15541)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15560));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15560));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15563)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15590));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15590));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15593)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitRaise(OOC_IR_XML__Visitor v, OOC_IR__Raise raise) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15705));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15705));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15708)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,97,105,115,101,0}), 6, 0u);
  i1 = (OOC_INT32)raise;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15746))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15746))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15757)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15776));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15776));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15779)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitRepeatStatm(OOC_IR_XML__Visitor v, OOC_IR__RepeatStatm repeatStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15906));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15906));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15909)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,101,97,116,45,115,116,97,116,109,0}), 13, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15950));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15950));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15953)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,111,100,121,0}), 5, 0u);
  i1 = (OOC_INT32)repeatStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16018))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16032));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16032));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16035)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16062));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16062));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16065)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){101,120,105,116,45,99,111,110,100,105,116,105,111,110,0}), 15, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16118))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16118))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16133)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16152));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16152));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16155)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16192));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16192));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16195)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCatchClause(OOC_IR_XML__Visitor v, OOC_IR__CatchClause _catch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16329));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16329));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16331)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,116,99,104,0}), 6, 0u);
  i1 = (OOC_INT32)_catch;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16381))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16372));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16419))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16436));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16436));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16438)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTryStatm(OOC_IR_XML__Visitor v, OOC_IR__TryStatm tryStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16585));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16585));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16587)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,114,121,45,115,116,97,116,109,0}), 10, 0u);
  i1 = (OOC_INT32)tryStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16651))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16693))+12);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16703)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16725))+12);
  i4 = _check_pointer(i4, 16735);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 16735))*4);
  OOC_IR__CatchClauseDesc_Accept((OOC_IR__CatchClause)i4, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16764));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16764));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16766)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitWhileStatm(OOC_IR_XML__Visitor v, OOC_IR__WhileStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16898));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16898));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16901)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,104,105,108,101,45,115,116,97,116,109,0}), 12, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16941));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16941));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16944)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, 0u);
  i1 = (OOC_INT32)whileStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16987))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16987))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16994)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17013));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17013));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17016)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17044));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17044));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17047)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){98,111,100,121,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17111))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17125));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17125));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17128)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17155));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17155));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17158)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitWithStatm(OOC_IR_XML__Visitor v, OOC_IR__WithStatm withStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17290));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17290));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17293)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,105,116,104,45,115,116,97,116,109,0}), 11, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17332));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17332));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17335)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, 0u);
  i1 = (OOC_INT32)withStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17377))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17377))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17384)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17403));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17403));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17406)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17439));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17439));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17442)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,116,114,117,101,0}), 10, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17510))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17528));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17528));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17531)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17580))+16);
  i2 = i2!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17611));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17611));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17614)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,102,97,108,115,101,0}), 11, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17685))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17706));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17706));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17709)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17751));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17751));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17754)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopy(OOC_IR_XML__Visitor v, OOC_IR__Copy cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17867));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17867));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17870)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,0}), 5, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17903));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17903));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17906)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, 0u);
  i1 = (OOC_INT32)cp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17942))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17942))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17950)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17969));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17969));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17972)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18001));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18001));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18004)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18038))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18038))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18044)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18063));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18063));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18066)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18093));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18093));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18096)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopyParameter(OOC_IR_XML__Visitor v, OOC_IR__CopyParameter cp) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18216));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18216));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18219)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,45,112,97,114,97,109,101,116,101,114,0}), 15, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18262));
  i2 = (OOC_INT32)cp;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18300))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18307))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18313))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18319))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18300))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18307))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18313))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18319))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18324)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18262));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18265)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){112,97,114,97,109,101,116,101,114,0}), 10, (void*)(_check_pointer(i3, 18324)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18333));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18333));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18336)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopyString(OOC_IR_XML__Visitor v, OOC_IR__CopyString cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18469));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18469));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18472)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,45,115,116,114,105,110,103,0}), 12, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18512));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18512));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18515)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, 0u);
  i1 = (OOC_INT32)cp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18551))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18551))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18559)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18578));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18578));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18581)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18610));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18610));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18613)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18647))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18647))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18653)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18672));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18672));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18675)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18702));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18702));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18705)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){109,97,120,45,108,101,110,103,116,104,0}), 11, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18745))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18745))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18756)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18775));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18775));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18778)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18811));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18811));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18814)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitProcedureList(OOC_IR_XML__Visitor v, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)procList;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19000)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 19022);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 19022))*4);
  OOC_IR__ProcedureDesc_Accept((OOC_IR__Procedure)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitProcedure(OOC_IR_XML__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19153));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19153));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19156)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,0}), 10, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19194));
  i2 = (OOC_INT32)procedure;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19234))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19240))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19246))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19234))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19240))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19246))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19251)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19194));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19197)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 19251)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19260));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19260));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19263)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,114,111,99,45,99,111,100,101,0}), 10, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19331))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19349));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19349));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19352)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19384));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19384));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19387)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitModule(OOC_IR_XML__Visitor v, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19507));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19507));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19510)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19545));
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19582))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19582))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19588)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19545));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19548)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 19588)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19625))+8);
  OOC_IR_XML__VisitProcedureList((OOC_IR_XML__Visitor)i0, (OOC_IR__ProcedureList)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19643));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19643));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19646)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){105,110,105,116,45,99,111,100,101,0}), 10, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19711))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19723))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19741));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19741));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19744)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19776));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19776));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19779)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__Write(IO__ByteChannel cw, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2;
  XML_Writer__Writer w;
  OOC_IR_XML__Visitor v;

  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((IO__ByteChannel)i0, (XML_UnicodeCodec__Factory)i1, 1u, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20006)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)OOC_IR_XML__NewVisitor((XML_Writer__Writer)i0);
  v = (OOC_IR_XML__Visitor)i1;
  i2 = (OOC_INT32)module;
  OOC_IR__ModuleDesc_Accept((OOC_IR__Module)i2, (OOC_IR__Visitor)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20102)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_IR_XML_init(void) {

  return;
  ;
}

/* --- */
