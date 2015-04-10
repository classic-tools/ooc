#include "OOC/IR/XML.d"
#include "__oo2c.h"

static void OOC_IR_XML__InitVisitor(OOC_IR_XML__Visitor v, XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  OOC_IR__InitVisitor((OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 1231)) = i1;
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
  register OOC_INT32 i0,i1,i2;
  ADT_String__String name;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_IR__TypeName((OOC_SymbolTable__Type)i0);
  name = (ADT_String__String)i0;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1654))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1654))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1660)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1623)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){84,121,112,101,0}), 5, (void*)(_check_pointer(i2, 1660)), i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConst(OOC_IR_XML__Visitor v, OOC_IR__Const _const) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  ADT_String__String value;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1780));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1780));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1783)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,110,115,116,0}), 6, OOC_TRUE);
  i1 = (OOC_INT32)_const;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1834))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1825));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1860)))), OOC_IR__ConstDesc_ToString)),OOC_IR__ConstDesc_ToString)((OOC_IR__Const)i1);
  value = (ADT_String__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1879));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1902))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1902))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1909)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1879));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1882)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i4, (void*)(_check_pointer(i3, 1909)), i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2027)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,0}), 4, OOC_TRUE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2058));
  i2 = (OOC_INT32)var;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2079))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2085))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2091))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2079))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2085))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2226)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,101,100,101,102,45,112,114,111,99,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2266));
  i2 = (OOC_INT32)pproc;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2302))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2308))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2314))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2302))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2308))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2500)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,45,114,101,102,101,114,101,110,99,101,0}), 20, OOC_FALSE);
  i1 = (OOC_INT32)procRef;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2564))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2564))+8);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2570)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i3);
  module = (OOC_SymbolTable__Module)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2587));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2626))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2632))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2626))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2632))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2637)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2587));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2590)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i4, 2637)), i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2646));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2684))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2690))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2696))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2684))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2690))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2852)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,114,101,102,101,114,101,110,99,101,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2895));
  i2 = (OOC_INT32)typeRef;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2933))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2939))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2945))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2933))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2939))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3094)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,101,114,101,110,99,101,0}), 17, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3139));
  i2 = (OOC_INT32)modRef;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3176))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3182))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3188))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3176))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3182))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3326)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,100,114,0}), 4, OOC_FALSE);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3525)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,101,110,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3557));
  i2 = (OOC_INT32)len;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 3581))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3557));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3560)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){100,105,109,0}), 4, i3);
  i1 = *(OOC_INT8*)((_check_pointer(i2, 3601))+8);
  switch (i1) {
  case 16:
    _copy_8("string-const",(OOC_INT32)str,32);
    goto l7;
  case 17:
    _copy_8("fixed-array",(OOC_INT32)str,32);
    goto l7;
  case 18:
    _copy_8("open-array-param",(OOC_INT32)str,32);
    goto l7;
  case 19:
    _copy_8("open-array-heap",(OOC_INT32)str,32);
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

void OOC_IR_XML__VisitorDesc_VisitDeref(OOC_IR_XML__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4007));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4007));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4010)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){100,101,114,101,102,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4044));
  i2 = (OOC_INT32)deref;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4081))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4044));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4047)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,112,111,105,110,116,101,114,0}), 14, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4107))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4107))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4116)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4135));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4135));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4138)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitIndex(OOC_IR_XML__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4247));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4247));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4250)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,110,100,101,120,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4284));
  i2 = (OOC_INT32)index;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4319))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4284));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4287)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,105,110,100,101,120,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4343))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4343))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4350)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4373))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4373))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4380)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4399));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4399));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4402)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSelectField(OOC_IR_XML__Visitor v, OOC_IR__SelectField sf) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4520));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4520));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4523)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,108,101,99,116,45,102,105,101,108,100,0}), 13, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4564));
  i2 = (OOC_INT32)sf;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4598))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4605))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4611))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4598))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4605))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4611))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4616)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4564));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4567)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){102,105,101,108,100,0}), 6, (void*)(_check_pointer(i3, 4616)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4626))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4626))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4634)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4653));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4653));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4656)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSelectProc(OOC_IR_XML__Visitor v, OOC_IR__SelectProc sp) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4785));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4785));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4788)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,108,101,99,116,45,116,98,45,112,114,111,99,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4831));
  i2 = (OOC_INT32)sp;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 4863))+28);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4831));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4834)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){115,116,97,116,105,99,45,99,97,108,108,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4885));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4921))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4929))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4935))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4921))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4929))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4935))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4940)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4885));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4888)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,98,45,112,114,111,99,0}), 8, (void*)(_check_pointer(i3, 4940)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4950))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4950))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4960)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4979));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4979));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4982)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNegate(OOC_IR_XML__Visitor v, OOC_IR__Negate neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5105));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5105));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5108)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,103,97,116,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)neg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5145))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5145))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5154)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5173));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5173));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5176)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNewBlock(OOC_IR_XML__Visitor v, OOC_IR__NewBlock _new) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5291));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5291));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5294)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,119,45,98,108,111,99,107,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)_new;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5364))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5364))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5370)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5389));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5389));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5392)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNewObject(OOC_IR_XML__Visitor v, OOC_IR__NewObject _new) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5536));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5536));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5539)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,101,119,45,111,98,106,101,99,116,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)_new;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5614))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5663))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5671)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l11;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5690))+8);
  i4 = _check_pointer(i4, 5698);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5698))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5690))+8);
  i5 = _check_pointer(i5, 5698);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 5698))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5701)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5740));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5740));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5743)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitNot(OOC_IR_XML__Visitor v, OOC_IR__Not neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5855));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5855));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5858)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,111,116,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)neg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5892))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5892))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5901)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5920));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5920));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5923)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAbs(OOC_IR_XML__Visitor v, OOC_IR__Abs abs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6022));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6022));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6025)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,98,115,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)abs;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6059))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6059))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6068)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6087));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6087));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6090)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAsh(OOC_IR_XML__Visitor v, OOC_IR__Ash ash) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6189));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6189));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6192)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,104,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)ash;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6226))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6226))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6233)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6254))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6254))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6259)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6278));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6278));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6281)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCap(OOC_IR_XML__Visitor v, OOC_IR__Cap cap) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6380));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6380));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6383)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,112,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)cap;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6417))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6417))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6426)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6445));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6445));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6448)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitEntier(OOC_IR_XML__Visitor v, OOC_IR__Entier entier) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6556));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6556));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6559)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,116,105,101,114,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)entier;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6599))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6599))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6608)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6627));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6627));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6630)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitOdd(OOC_IR_XML__Visitor v, OOC_IR__Odd odd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6735));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6735));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6738)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){111,100,100,0}), 4, OOC_FALSE);
  i1 = (OOC_INT32)odd;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6772))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6772))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6781)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6800));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6800));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6803)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitShift(OOC_IR_XML__Visitor v, OOC_IR__Shift shift) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6908));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6908));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6911)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,103,105,99,97,108,45,115,104,105,102,116,0}), 14, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6953));
  i2 = (OOC_INT32)shift;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 6983))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6953));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6956)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,111,116,97,116,101,0}), 7, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7003))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7003))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7010)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7033))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7033))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7037)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7056));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7056));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7059)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitDyadicOp(OOC_IR_XML__Visitor v, OOC_IR__Operator op, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7247));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7247));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7250)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i2, (void*)(OOC_INT32)name, name_0d, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7287));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7287));
  i3 = variant;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7290)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,105,97,110,116,0}), 8, i3);
  i1 = (OOC_INT32)left;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7330)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)right;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7353)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7372));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7372));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7375)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitBinaryArith(OOC_IR_XML__Visitor v, OOC_IR__BinaryArith op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 7518))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7530))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7539))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "binaryArith", 12);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitBooleanOp(OOC_IR_XML__Visitor v, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 7683))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7695))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7704))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "booleanOp", 10);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitConcat(OOC_IR_XML__Visitor v, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7837));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7837));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7839)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i2, "concat", 7, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7897))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7905)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7921))+8);
  i4 = _check_pointer(i4, 7929);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7929))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7921))+8);
  i5 = _check_pointer(i5, 7929);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 7929))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7932)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7958));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7958));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7960)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCompare(OOC_IR_XML__Visitor v, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8120))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8132))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8141))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "compare", 8);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitChangeElement(OOC_IR_XML__Visitor v, OOC_IR__ChangeElement op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8285))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8297))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8305))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "change-element", 15);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetOp(OOC_IR_XML__Visitor v, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)op;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8448))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8460))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8469))+16);
  i4 = (OOC_INT32)v;
  OOC_IR_XML__VisitDyadicOp((OOC_IR_XML__Visitor)i4, (OOC_IR__Operator)i0, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, "setOp", 6);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeCast(OOC_IR_XML__Visitor v, OOC_IR__TypeCast op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8578));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8578));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8581)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,99,97,115,116,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8633))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8627));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8647))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8647))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8653)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8671));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8671));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8674)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeConv(OOC_IR_XML__Visitor v, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8778));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8778));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8781)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,99,111,110,118,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8833))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8827));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8847))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8847))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8853)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8871));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8871));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8874)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeGuard(OOC_IR_XML__Visitor v, OOC_IR__TypeGuard op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8980));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8980));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8983)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,103,117,97,114,100,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9036))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9030));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9050))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9056))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9050))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9056))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9062)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9080));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9080));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9083)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeTag(OOC_IR_XML__Visitor v, OOC_IR__TypeTag op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9186));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9186));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9189)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,116,97,103,0}), 9, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9226))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9226))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9234)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9252));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9252));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9255)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitTypeTest(OOC_IR_XML__Visitor v, OOC_IR__TypeTest op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9358));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9358));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9361)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){116,121,112,101,45,116,101,115,116,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9399))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9399))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9405)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9438))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9432));
  OOC_IR_XML__TypeAttr((XML_Writer__Writer)i2, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9451));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9451));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9454)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitStatementSeq(OOC_IR_XML__Visitor v, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)statmSeq;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9616)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 9638);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9638))*4);
  i5 = _check_pointer(i0, 9638);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 9638))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9641)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9775));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9775));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9778)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9811));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9811));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9814)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){100,101,115,105,103,110,97,116,111,114,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)call;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9856))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9856))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9864)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9883));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9883));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9886)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9941))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9952)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9967));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9967));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9970)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){97,114,103,117,109,101,110,116,0}), 9, OOC_FALSE);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10012))+12);
  i4 = _check_pointer(i4, 10023);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10023))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10012))+12);
  i5 = _check_pointer(i5, 10023);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10023))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10026)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10047));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10047));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10050)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i5);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10090));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10090));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10093)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssert(OOC_IR_XML__Visitor v, OOC_IR__Assert assert) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10203));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10203));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10206)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,101,114,116,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10241));
  i2 = (OOC_INT32)assert;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 10274))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10241));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10244)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){100,105,115,97,98,108,101,100,0}), 9, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10292));
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10320))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10292));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10295)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,111,100,101,0}), 5, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10343))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10379))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10379))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10390)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10418));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10418));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10421)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetRange(OOC_IR_XML__Visitor v, OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10538));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10538));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10541)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,116,45,114,97,110,103,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10583))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10583))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10588)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10609))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10609))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10612)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10629));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10629));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10632)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitSetMember(OOC_IR_XML__Visitor v, OOC_IR__SetMember range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10756));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10756));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10759)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,101,116,45,109,101,109,98,101,114,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10802))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10802))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10810)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10831))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10831))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10835)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10852));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10852));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10855)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitReturn(OOC_IR_XML__Visitor v, OOC_IR__Return _return) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10977));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10977));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10980)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,116,117,114,110,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)_return;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11024))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11057))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11057))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11065)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11093));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11093));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11096)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssignment(OOC_IR_XML__Visitor v, OOC_IR__Assignment assignment) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11222));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11222));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11225)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,105,103,110,109,101,110,116,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)assignment;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11273))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11273))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11283)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11311))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11311))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11318)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11337));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11337));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11340)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitAssignOp(OOC_IR_XML__Visitor v, OOC_IR__AssignOp assignOp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11468));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11468));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11471)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,115,115,105,103,110,45,111,112,101,114,97,116,105,111,110,0}), 17, OOC_FALSE);
  i1 = (OOC_INT32)assignOp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11523))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11523))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11533)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11559))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11559))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11566)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11585));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11585));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11588)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitExit(OOC_IR_XML__Visitor v, OOC_IR__Exit exit) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11708));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11708));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11711)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,120,105,116,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11744));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11744));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11747)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitForStatm(OOC_IR_XML__Visitor v, OOC_IR__ForStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11865));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11865));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11868)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,104,105,108,101,45,115,116,97,116,109,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11908));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11908));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11911)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,0}), 9, OOC_FALSE);
  i1 = (OOC_INT32)whileStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11957))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11957))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11962)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11981));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11981));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11984)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12015));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12015));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12018)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,97,114,116,45,118,97,108,117,101,0}), 12, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12067))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12067))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12074)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12093));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12093));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12096)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12130));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12130));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12133)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){101,110,100,45,118,97,108,117,101,0}), 10, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12180))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12180))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12185)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12204));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12204));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12207)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12239));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12239));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12242)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,101,112,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12284))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12284))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12290)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12309));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12309));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12312)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12339));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12339));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12342)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12406))+24);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12420));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12420));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12423)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12450));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12450));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12453)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitIfStatm(OOC_IR_XML__Visitor v, OOC_IR__IfStatm ifStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12577));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12577));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12580)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,102,45,115,116,97,116,109,0}), 9, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12617));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12617));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12620)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)ifStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12660))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12660))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12667)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12686));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12686));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12689)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12722));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12722));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12725)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,116,114,117,101,0}), 10, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12791))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12809));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12809));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12812)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12859))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12890));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12890));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12893)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,102,97,108,115,101,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12962))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12983));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12983));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12986)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13028));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13028));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13031)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCase(OOC_IR_XML__Visitor v, OOC_IR__Case _case) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13164));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13164));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13167)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,115,101,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13200));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13200));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13203)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)_case;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13259))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 13267)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13282));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13282));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13285)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){108,97,98,101,108,0}), 6, OOC_FALSE);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13324))+8);
  i4 = _check_pointer(i4, 13332);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13332))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13324))+8);
  i5 = _check_pointer(i5, 13332);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13332))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13335)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13356));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13356));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13359)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i5);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13396));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13396));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13399)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13432));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13432));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13435)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,116,97,116,109,45,115,101,113,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13498))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13516));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13516));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13519)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13551));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13551));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13554)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCaseStatm(OOC_IR_XML__Visitor v, OOC_IR__CaseStatm caseStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13695));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13695));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13698)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,115,101,45,115,116,97,116,109,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13737));
  i2 = (OOC_INT32)caseStatm;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 13776))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13737));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13740)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){99,104,101,99,107,45,109,97,116,99,104,0}), 12, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13796));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13796));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13799)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,101,108,101,99,116,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13842))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13842))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13850)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13869));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13869));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13872)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13929))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13939)), 0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13962))+12);
  i4 = _check_pointer(i4, 13972);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13972))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13962))+12);
  i5 = _check_pointer(i5, 13972);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13972))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13975)))), OOC_IR__CaseDesc_Accept)),OOC_IR__CaseDesc_Accept)((OOC_IR__Case)i5, (OOC_IR__Visitor)i0);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14016))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14045));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14045));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14048)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,102,97,117,108,116,45,112,97,116,104,0}), 13, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14121))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14140));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14140));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14143)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14187));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14187));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14190)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitLoopStatm(OOC_IR_XML__Visitor v, OOC_IR__LoopStatm loopStatm) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14320));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14320));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14323)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,111,112,45,115,116,97,116,109,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14362));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14362));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14365)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)loopStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14428))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14442));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14442));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14445)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14472));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14472));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14475)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitMoveBlock(OOC_IR_XML__Visitor v, OOC_IR__MoveBlock move) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14600));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14600));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14603)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,118,101,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14636));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14636));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14639)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)move;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14677))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14677))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14685)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14704));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14704));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14707)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14736));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14736));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14739)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14775))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14775))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14781)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14800));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14800));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14803)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14830));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14830));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14833)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){115,105,122,101,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14869))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14869))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14875)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14894));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14894));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14897)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14924));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14924));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14927)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitRepeatStatm(OOC_IR_XML__Visitor v, OOC_IR__RepeatStatm repeatStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15063));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15063));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15066)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,101,97,116,45,115,116,97,116,109,0}), 13, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15107));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15107));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15110)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)repeatStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15175))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15189));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15189));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15192)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15219));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15219));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15222)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){101,120,105,116,45,99,111,110,100,105,116,105,111,110,0}), 15, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15275))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15275))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15290)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15309));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15309));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15312)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15349));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15349));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15352)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitWhileStatm(OOC_IR_XML__Visitor v, OOC_IR__WhileStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15489));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15489));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15492)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,104,105,108,101,45,115,116,97,116,109,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15532));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15532));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15535)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)whileStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15578))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15578))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15585)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15604));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15604));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15607)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15635));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15635));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15638)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){98,111,100,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15702))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15716));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15716));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15719)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15746));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15746));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15749)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitWithStatm(OOC_IR_XML__Visitor v, OOC_IR__WithStatm withStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15881));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15881));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15884)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){119,105,116,104,45,115,116,97,116,109,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15923));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15923));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15926)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){103,117,97,114,100,0}), 6, OOC_FALSE);
  i1 = (OOC_INT32)withStatm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15968))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15968))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15975)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15994));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15994));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15997)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16030));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16030));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16033)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,116,114,117,101,0}), 10, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16101))+12);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16119));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16119));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16122)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16171))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16202));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16202));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16205)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,97,116,104,45,102,97,108,115,101,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16276))+16);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16297));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16297));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16300)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16342));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16342));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16345)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopy(OOC_IR_XML__Visitor v, OOC_IR__Copy cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16458));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16458));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16461)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,0}), 5, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16494));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16494));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16497)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)cp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16533))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16533))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16541)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16560));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16560));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16563)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16592));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16592));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16595)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16629))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16629))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16635)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16654));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16654));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16657)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16684));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16684));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16687)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopyParameter(OOC_IR_XML__Visitor v, OOC_IR__CopyParameter cp) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16807));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16807));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16810)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,45,112,97,114,97,109,101,116,101,114,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16853));
  i2 = (OOC_INT32)cp;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16891))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16898))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16904))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16910))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16891))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16898))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16904))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16910))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16915)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16853));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16856)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){112,97,114,97,109,101,116,101,114,0}), 10, (void*)(_check_pointer(i3, 16915)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16924));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16924));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16927)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitCopyString(OOC_IR_XML__Visitor v, OOC_IR__CopyString cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17060));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17060));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17063)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,112,121,45,115,116,114,105,110,103,0}), 12, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17103));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17103));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17106)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,111,117,114,99,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)cp;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17142))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17142))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17150)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17169));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17169));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17172)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17201));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17201));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17204)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,115,116,0}), 5, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17238))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17238))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17244)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i3, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17263));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17263));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17266)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17293));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17293));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17296)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){109,97,120,45,108,101,110,103,116,104,0}), 11, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17336))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17336))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17347)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17366));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17366));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17369)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17402));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17402));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17405)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void OOC_IR_XML__VisitProcedureList(OOC_IR_XML__Visitor v, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)procList;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17591)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 17613);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17613))*4);
  i5 = _check_pointer(i0, 17613);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 17613))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17616)))), OOC_IR__ProcedureDesc_Accept)),OOC_IR__ProcedureDesc_Accept)((OOC_IR__Procedure)i5, (OOC_IR__Visitor)i2);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17744));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17744));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17747)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17785));
  i2 = (OOC_INT32)procedure;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17825))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17831))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17837))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17825))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17831))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17837))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17842)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17785));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17788)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 17842)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17851));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17851));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17854)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){112,114,111,99,45,99,111,100,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17922))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17940));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17940));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17943)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17975));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17975));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17978)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_IR_XML__VisitorDesc_VisitModule(OOC_IR_XML__Visitor v, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18098));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18098));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18101)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18136));
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18173))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18173))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18179)), 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18136));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18139)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 18179)), i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18216))+8);
  OOC_IR_XML__VisitProcedureList((OOC_IR_XML__Visitor)i0, (OOC_IR__ProcedureList)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18234));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18234));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18237)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){105,110,105,116,45,99,111,100,101,0}), 10, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18302))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18314))+8);
  OOC_IR_XML__VisitStatementSeq((OOC_IR_XML__Visitor)i0, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18332));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18332));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18335)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18367));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18367));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18370)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18581)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)OOC_IR_XML__NewVisitor((XML_Writer__Writer)i0);
  v = (OOC_IR_XML__Visitor)i1;
  i2 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18653)))), OOC_IR__ModuleDesc_Accept)),OOC_IR__ModuleDesc_Accept)((OOC_IR__Module)i2, (OOC_IR__Visitor)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18677)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_IR_XML_init(void) {

  return;
  ;
}

/* --- */
