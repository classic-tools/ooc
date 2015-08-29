#include <OOC/IR/XML.d>
#include <__oo2c.h>

static void OOC_IR_XML__InitVisitor(OOC_IR_XML__Visitor v, XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  OOC_IR__InitVisitor((OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 1227)) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1556)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){84,121,112,101,0}), 5, (Object__String)i1);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConst(OOC_IR_XML__Visitor v, OOC_IR__Const _const) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String value;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1733));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1733));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1736)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,110,115,116,0}), 6, OOC_TRUE);
  i1 = (OOC_INT32)_const;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1787))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1778));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1813)))), OOC_IR__ConstDesc_ToString)),OOC_IR__ConstDesc_ToString)((OOC_IR__Const)i1);
  value = (Object__String)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1853)))), &_td_Object__String8Desc, 1853)), 1861)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1853)))), &_td_Object__String8Desc, 1853)));
  chars = (Object__CharsLatin1)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1882));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1905)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1882));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1885)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i4, (void*)(_check_pointer(i1, 1905)), i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1914));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1914));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1917)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitVar(OOC_IR_XML__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2020));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2020));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2023)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,0}), 4, OOC_TRUE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2054));
  i2 = (OOC_INT32)var;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2075))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2081))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2087))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2075))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2081))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2087))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2092)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2054));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2057)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i4, (void*)(_check_pointer(i3, 2092)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2101));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2101));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2104)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitPredefProc(OOC_IR_XML__Visitor v, OOC_IR__PredefProc pproc) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2219));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2219));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2222)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,101,100,101,102,45,112,114,111,99,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2262));
  i2 = (OOC_INT32)pproc;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2298))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2304))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2310))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2298))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2304))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2310))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2315)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2262));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2265)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2315)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2324));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2324));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2327)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitProcedureRef(OOC_IR_XML__Visitor v, OOC_IR__ProcedureRef procRef) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Module module;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2493));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2493));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2496)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,45,114,101,102,101,114,101,110,99,101,0}), 20, OOC_FALSE);
  i1 = (OOC_INT32)procRef;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2560))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2560))+8);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2566)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i3);
  module = (OOC_SymbolTable__Module)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2583));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2622))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2628))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2622))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2628))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2633)), (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2583));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2586)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i4, 2633)), i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2642));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2680))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2686))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2692))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2680))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2686))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2692))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2697)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2642));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2645)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2697)), i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2706));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2706));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2709)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeRef(OOC_IR_XML__Visitor v, OOC_IR__TypeRef typeRef) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2845));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2845));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2848)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,114,101,102,101,114,101,110,99,101,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2891));
  i2 = (OOC_INT32)typeRef;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2929))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2935))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2941))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2929))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2935))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2941))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2946)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2891));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2894)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2946)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2955));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2955));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2958)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitModuleRef(OOC_IR_XML__Visitor v, OOC_IR__ModuleRef modRef) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3087));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3087));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3090)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,101,114,101,110,99,101,0}), 17, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3135));
  i2 = (OOC_INT32)modRef;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3172))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3178))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3184))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3172))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3178))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3184))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3189)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3135));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3138)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 3189)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3198));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3198));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3201)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAdr(OOC_IR_XML__Visitor v, OOC_IR__Adr adr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3319));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3319));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3322)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,100,114,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)adr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3356))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3356))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3364)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3383));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3383));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3386)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitLen(OOC_IR_XML__Visitor v, OOC_IR__Len len) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_CHAR8 str[32];

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3518));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3518));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3521)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,101,110,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3553));
  i2 = (OOC_INT32)len;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 3577))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3553));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3556)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){100,105,109,0}), 4, i3);
  i1 = *(OOC_INT8*)((_check_pointer(i2, 3597))+8);
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
    _failed_case(i1, 3589);
    goto l7;
  }
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3822));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3822));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3825)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){118,97,114,105,97,110,116,0}), 8, (void*)(OOC_INT32)str, 32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3869))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3869))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3876)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3895));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3895));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3898)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitDeref(OOC_IR_XML__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4003));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4003));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4006)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){100,101,114,101,102,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4040));
  i2 = (OOC_INT32)deref;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4077))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4040));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4043)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,112,111,105,110,116,101,114,0}), 14, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4103))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4103))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4112)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4131));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4131));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4134)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitIndex(OOC_IR_XML__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4243));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4243));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4246)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,110,100,101,120,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4280));
  i2 = (OOC_INT32)index;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4315))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4280));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4283)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,105,110,100,101,120,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4339))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4339))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4346)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4369))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4369))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4376)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4395));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4395));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4398)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSelectField(OOC_IR_XML__Visitor v, OOC_IR__SelectField sf) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4516));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4516));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4519)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,108,101,99,116,45,102,105,101,108,100,0}), 13, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4560));
  i2 = (OOC_INT32)sf;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4594))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4601))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4607))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4594))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4601))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4607))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4612)), (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4560));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4563)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){102,105,101,108,100,0}), 6, (void*)(_check_pointer(i3, 4612)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4622))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4622))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4630)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4649));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4649));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4652)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSelectProc(OOC_IR_XML__Visitor v, OOC_IR__SelectProc sp) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4781));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4781));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4784)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,108,101,99,116,45,116,98,45,112,114,111,99,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4827));
  i2 = (OOC_INT32)sp;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4859))+28);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4827));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4830)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){115,116,97,116,105,99,45,99,97,108,108,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4881));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4917))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4925))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4931))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4917))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4925))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4931))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4936)), (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4881));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4884)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,98,45,112,114,111,99,0}), 8, (void*)(_check_pointer(i3, 4936)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4946))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4946))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4956)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4975));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4975));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4978)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNegate(OOC_IR_XML__Visitor v, OOC_IR__Negate neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5101));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5101));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5104)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,103,97,116,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)neg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5141))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5141))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5150)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5169));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5169));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5172)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNewBlock(OOC_IR_XML__Visitor v, OOC_IR__NewBlock _new) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5287));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5287));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5290)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,119,45,98,108,111,99,107,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)_new;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5360))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5360))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5366)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5385));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5385));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5388)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNewObject(OOC_IR_XML__Visitor v, OOC_IR__NewObject _new) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5532));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5532));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5535)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,119,45,111,98,106,101,99,116,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)_new;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5610))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5659))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5667)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l11;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5686))+8);
  i4 = _check_pointer(i4, 5694);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5694))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5686))+8);
  i5 = _check_pointer(i5, 5694);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 5694))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5697)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5736));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5736));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5739)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNot(OOC_IR_XML__Visitor v, OOC_IR__Not neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5851));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5851));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5854)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,111,116,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)neg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5888))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5888))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5897)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5916));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5916));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5919)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAbs(OOC_IR_XML__Visitor v, OOC_IR__Abs abs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6018));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6018));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6021)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,98,115,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)abs;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6055))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6055))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6064)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6083));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6083));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6086)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAsh(OOC_IR_XML__Visitor v, OOC_IR__Ash ash) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6185));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6185));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6188)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,104,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)ash;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6222))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6222))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6229)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6250))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6250))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6255)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6274));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6274));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6277)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCap(OOC_IR_XML__Visitor v, OOC_IR__Cap cap) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6376));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6376));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6379)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,112,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)cap;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6413))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6413))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6422)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6441));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6441));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6444)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitEntier(OOC_IR_XML__Visitor v, OOC_IR__Entier entier) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6552));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6552));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6555)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,116,105,101,114,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)entier;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6595))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6595))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6604)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6623));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6623));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6626)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitOdd(OOC_IR_XML__Visitor v, OOC_IR__Odd odd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6731));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6731));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6734)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){111,100,100,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)odd;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6768))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6768))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6777)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6796));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6796));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6799)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitShift(OOC_IR_XML__Visitor v, OOC_IR__Shift shift) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6904));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6904));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6907)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,103,105,99,97,108,45,115,104,105,102,116,0}), 14, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6949));
  i2 = (OOC_INT32)shift;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 6979))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6949));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6952)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,111,116,97,116,101,0}), 7, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6999))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6999))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7006)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7029))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7029))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7033)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7052));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7052));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7055)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitDyadicOp(OOC_IR_XML__Visitor v, OOC_IR__Operator op, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7243));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7243));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7246)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i2, (void*)(OOC_INT32)name, name_0d, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7283));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7283));
  i3 = variant;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7286)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,105,97,110,116,0}), 8, i3);
  i1 = (OOC_INT32)left;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7326)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)right;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7349)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7368));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7368));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7371)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitBinaryArith(OOC_IR_XML__Visitor v, OOC_IR__BinaryArith op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 7514))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7526))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7535))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "binaryArith", 12);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitBooleanOp(OOC_IR_XML__Visitor v, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 7679))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7691))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7700))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "booleanOp", 10);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConcat(OOC_IR_XML__Visitor v, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7833));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7833));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7835)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i2, "concat", 7, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7893))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7901)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7917))+8);
  i4 = _check_pointer(i4, 7925);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7925))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7917))+8);
  i5 = _check_pointer(i5, 7925);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 7925))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7928)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7954));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7954));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7956)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCompare(OOC_IR_XML__Visitor v, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8116))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8128))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8137))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "compare", 8);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitChangeElement(OOC_IR_XML__Visitor v, OOC_IR__ChangeElement op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8281))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8293))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8301))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "change-element", 15);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetOp(OOC_IR_XML__Visitor v, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8444))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8456))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8465))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "setOp", 6);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeCast(OOC_IR_XML__Visitor v, OOC_IR__TypeCast op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8574));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8574));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8577)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,99,97,115,116,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8629))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8623));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8643))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8643))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8649)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8667));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8667));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8670)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeConv(OOC_IR_XML__Visitor v, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8774));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8774));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8777)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,99,111,110,118,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8829))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8823));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8843))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8843))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8849)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8867));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8867));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8870)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeGuard(OOC_IR_XML__Visitor v, OOC_IR__TypeGuard op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8976));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8976));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8979)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,103,117,97,114,100,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9032))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9026));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9046))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9052))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9046))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9052))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9058)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9076));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9076));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9079)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeTag(OOC_IR_XML__Visitor v, OOC_IR__TypeTag op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9182));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9182));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9185)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,116,97,103,0}), 9, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9222))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9222))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9230)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9248));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9248));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9251)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeTest(OOC_IR_XML__Visitor v, OOC_IR__TypeTest op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9354));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9354));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9357)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,116,101,115,116,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9395))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9395))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9401)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9434))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9428));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i2, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9447));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9447));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9450)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitStatementSeq(OOC_IR_XML__Visitor v, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)statmSeq;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9612)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 9634);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9634))*4);
  i5 = _check_pointer(i0, 9634);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 9634))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9637)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCall(OOC_IR_XML__Visitor v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9771));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9771));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9774)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9807));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9807));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9810)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){100,101,115,105,103,110,97,116,111,114,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)call;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9852))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9852))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9860)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9879));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9879));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9882)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9937))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9948)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9963));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9963));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9966)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){97,114,103,117,109,101,110,116,0}), 9, OOC_FALSE);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10008))+12);
  i4 = _check_pointer(i4, 10019);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10019))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10008))+12);
  i5 = _check_pointer(i5, 10019);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10019))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10022)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10043));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10043));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10046)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i5);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10086));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10086));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10089)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssert(OOC_IR_XML__Visitor v, OOC_IR__Assert assert) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10199));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10199));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10202)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,101,114,116,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10237));
  i2 = (OOC_INT32)assert;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 10270))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10237));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10240)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){100,105,115,97,98,108,101,100,0}), 9, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10288));
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10316))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10288));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10291)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,111,100,101,0}), 5, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10339))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10375))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10375))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10386)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10414));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10414));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10417)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetRange(OOC_IR_XML__Visitor v, OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10534));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10534));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10537)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,116,45,114,97,110,103,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10579))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10579))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10584)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10605))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10605))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10608)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10625));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10625));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10628)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetMember(OOC_IR_XML__Visitor v, OOC_IR__SetMember range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10752));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10752));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10755)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,116,45,109,101,109,98,101,114,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10798))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10798))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10806)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10827))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10827))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10831)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10848));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10848));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10851)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitReturn(OOC_IR_XML__Visitor v, OOC_IR__Return _return) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10973));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10973));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10976)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,116,117,114,110,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)_return;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11020))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11053))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11053))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11061)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11089));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11089));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11092)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssignment(OOC_IR_XML__Visitor v, OOC_IR__Assignment assignment) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11218));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11218));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11221)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,105,103,110,109,101,110,116,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)assignment;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11269))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11269))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11279)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11307))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11307))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11314)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11333));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11333));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11336)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssignOp(OOC_IR_XML__Visitor v, OOC_IR__AssignOp assignOp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11464));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11464));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11467)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,105,103,110,45,111,112,101,114,97,116,105,111,110,0}), 17, OOC_FALSE);
  i1 = (OOC_INT32)assignOp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11519))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11519))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11529)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11555))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11555))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11562)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11581));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11581));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11584)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitExit(OOC_IR_XML__Visitor v, OOC_IR__Exit exit) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11704));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11704));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11707)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,120,105,116,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11740));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11740));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11743)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitForStatm(OOC_IR_XML__Visitor v, OOC_IR__ForStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11861));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11861));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11864)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,104,105,108,101,45,115,116,97,116,109,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11904));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11904));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11907)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,0}), 9, OOC_FALSE);
  i1 = (OOC_INT32)whileStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11953))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11953))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11958)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11977));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11977));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11980)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12011));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12011));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12014)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,97,114,116,45,118,97,108,117,101,0}), 12, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12063))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12063))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12070)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12089));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12089));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12092)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12126));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12126));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12129)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){101,110,100,45,118,97,108,117,101,0}), 10, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12176))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12176))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12181)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12200));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12200));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12203)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12235));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12235));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12238)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,101,112,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12280))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12280))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12286)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12305));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12305));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12308)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12335));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12335));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12338)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12402))+24);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12416));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12416));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12419)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12446));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12446));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12449)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitIfStatm(OOC_IR_XML__Visitor v, OOC_IR__IfStatm ifStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12573));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12573));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12576)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,102,45,115,116,97,116,109,0}), 9, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12613));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12613));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12616)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)ifStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12656))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12656))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12663)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12682));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12682));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12685)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12718));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12718));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12721)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,116,114,117,101,0}), 10, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12787))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12805));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12805));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12808)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12855))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12886));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12886));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12889)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,102,97,108,115,101,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12958))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12979));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12979));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12982)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13024));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13024));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13027)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCase(OOC_IR_XML__Visitor v, OOC_IR__Case _case) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13160));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13160));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13163)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,115,101,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13196));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13196));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13199)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)_case;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13255))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 13263)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13278));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13278));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13281)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){108,97,98,101,108,0}), 6, OOC_FALSE);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13320))+8);
  i4 = _check_pointer(i4, 13328);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13328))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13320))+8);
  i5 = _check_pointer(i5, 13328);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13328))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13331)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13352));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13352));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13355)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i5);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13392));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13392));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13395)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13428));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13428));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13431)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,97,116,109,45,115,101,113,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13494))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13512));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13512));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13515)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13547));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13547));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13550)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCaseStatm(OOC_IR_XML__Visitor v, OOC_IR__CaseStatm caseStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13691));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13691));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13694)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,115,101,45,115,116,97,116,109,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13733));
  i2 = (OOC_INT32)caseStatm;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 13772))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13733));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13736)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,109,97,116,99,104,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13792));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13792));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13795)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,101,108,101,99,116,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13838))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13838))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13846)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13865));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13865));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13868)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13925))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13935)), (OOC_INT32)0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13958))+12);
  i4 = _check_pointer(i4, 13968);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13968))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13958))+12);
  i5 = _check_pointer(i5, 13968);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13968))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13971)))), OOC_IR__CaseDesc_Accept)),OOC_IR__CaseDesc_Accept)((OOC_IR__Case)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14012))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14041));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14041));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14044)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,102,97,117,108,116,45,112,97,116,104,0}), 13, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14117))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14136));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14136));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14139)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14183));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14183));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14186)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitLoopStatm(OOC_IR_XML__Visitor v, OOC_IR__LoopStatm loopStatm) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14316));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14316));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14319)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,111,112,45,115,116,97,116,109,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14358));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14358));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14361)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)loopStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14424))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14438));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14438));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14441)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14468));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14468));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14471)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitMoveBlock(OOC_IR_XML__Visitor v, OOC_IR__MoveBlock move) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14596));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14596));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14599)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,118,101,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14632));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14632));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14635)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)move;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14673))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14673))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14681)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14700));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14700));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14703)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14732));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14732));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14735)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14771))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14771))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14777)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14796));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14796));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14799)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14826));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14826));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14829)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,105,122,101,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14865))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14865))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14871)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14890));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14890));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14893)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14920));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14920));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14923)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitRepeatStatm(OOC_IR_XML__Visitor v, OOC_IR__RepeatStatm repeatStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15059));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15059));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15062)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,101,97,116,45,115,116,97,116,109,0}), 13, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15103));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15103));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15106)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)repeatStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15171))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15185));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15185));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15188)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15215));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15215));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15218)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){101,120,105,116,45,99,111,110,100,105,116,105,111,110,0}), 15, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15271))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15271))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15286)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15305));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15305));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15308)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15345));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15345));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15348)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitWhileStatm(OOC_IR_XML__Visitor v, OOC_IR__WhileStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15485));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15485));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15488)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,104,105,108,101,45,115,116,97,116,109,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15528));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15528));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15531)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)whileStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15574))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15574))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15581)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15600));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15600));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15603)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15631));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15631));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15634)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15698))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15712));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15712));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15715)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15742));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15742));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15745)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitWithStatm(OOC_IR_XML__Visitor v, OOC_IR__WithStatm withStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15877));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15877));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15880)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,105,116,104,45,115,116,97,116,109,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15919));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15919));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15922)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)withStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15964))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15964))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15971)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15990));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15990));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15993)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16026));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16026));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16029)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,116,114,117,101,0}), 10, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16097))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16115));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16115));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16118)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16167))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16198));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16198));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16201)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,102,97,108,115,101,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16272))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16293));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16293));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16296)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16338));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16338));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16341)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopy(OOC_IR_XML__Visitor v, OOC_IR__Copy cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16454));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16454));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16457)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16490));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16490));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16493)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)cp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16529))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16529))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16537)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16556));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16556));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16559)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16588));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16588));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16591)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16625))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16625))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16631)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16650));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16650));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16653)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16680));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16680));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16683)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopyParameter(OOC_IR_XML__Visitor v, OOC_IR__CopyParameter cp) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16803));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16803));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16806)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,45,112,97,114,97,109,101,116,101,114,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16849));
  i2 = (OOC_INT32)cp;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16887))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16894))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16900))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16906))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16887))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16894))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16900))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16906))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16911)), (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16849));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16852)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){112,97,114,97,109,101,116,101,114,0}), 10, (void*)(_check_pointer(i3, 16911)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16920));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16920));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16923)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopyString(OOC_IR_XML__Visitor v, OOC_IR__CopyString cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17056));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17056));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17059)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,45,115,116,114,105,110,103,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17099));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17099));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17102)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)cp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17138))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17138))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17146)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17165));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17165));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17168)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17197));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17197));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17200)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17234))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17234))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17240)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17259));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17259));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17262)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17289));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17289));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17292)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){109,97,120,45,108,101,110,103,116,104,0}), 11, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17332))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17332))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17343)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17362));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17362));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17365)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17398));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17398));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17401)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitProcedureList(OOC_IR_XML__Visitor v, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)procList;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17587)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 17609);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17609))*4);
  i5 = _check_pointer(i0, 17609);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 17609))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17612)))), OOC_IR__ProcedureDesc_Accept)),OOC_IR__ProcedureDesc_Accept)((OOC_IR__Procedure)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitProcedure(OOC_IR_XML__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17740));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17740));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17743)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17781));
  i2 = (OOC_INT32)procedure;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17821))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17827))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17833))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17821))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17827))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17833))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17838)), (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17781));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17784)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 17838)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17847));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17847));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17850)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,114,111,99,45,99,111,100,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17918))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17936));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17936));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17939)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17971));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17971));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17974)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitModule(OOC_IR_XML__Visitor v, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18094));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18094));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18097)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18132));
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18169))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18169))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18175)), (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18132));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18135)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 18175)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18212))+8);
  OOC_IR_XML__VisitProcedureList((OOC_IR_XML__Visitor)i0, (OOC_IR__ProcedureList)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18230));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18230));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18233)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){105,110,105,116,45,99,111,100,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18298))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18310))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18328));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18328));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18331)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18363));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18363));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18366)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__Write(Channel__Writer cw, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2;
  XML_Writer__Writer w;
  OOC_IR_XML__Visitor v;

  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18577)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)OOC_IR_XML__NewVisitor((XML_Writer__Writer)i0);
  v = (OOC_IR_XML__Visitor)i1;
  i2 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18649)))), OOC_IR__ModuleDesc_Accept)),OOC_IR__ModuleDesc_Accept)((OOC_IR__Module)i2, (OOC_IR__Visitor)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18673)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_IR_XML_init(void) {

  return;
  ;
}

/* --- */
