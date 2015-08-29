#include <OOC/SymbolTable/Builder.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable_Builder__Init(OOC_SymbolTable_Builder__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT8*)(_check_pointer(i0, 3134)) = 0;
  return;
  ;
}

OOC_SymbolTable_Builder__Builder OOC_SymbolTable_Builder__New(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__Builder.baseTypes[0]);
  OOC_SymbolTable_Builder__Init((OOC_SymbolTable_Builder__Builder)i0);
  return (OOC_SymbolTable_Builder__Builder)i0;
  ;
}

void OOC_SymbolTable_Builder__BuilderDesc_SetClass(OOC_SymbolTable_Builder__Builder b, OOC_INT8 _class) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = _class;
  *(OOC_INT8*)(_check_pointer(i0, 3356)) = i1;
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable_Builder__BuilderDesc_NewImport(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_Doc__Document docString, OOC_SymbolTable__Name moduleName) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Import.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)moduleName;
  OOC_SymbolTable__InitImport((OOC_SymbolTable__Import)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (OOC_Doc__Document)i4, (OOC_SymbolTable__Name)i5);
  return (OOC_SymbolTable__Import)i0;
  ;
}

OOC_SymbolTable__ConstDecl OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, Object_Boxed__Object value, OOC_SymbolTable__PredefType type, OOC_AST__Node constExpr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ConstDecl.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  i6 = (OOC_INT32)value;
  i7 = (OOC_INT32)type;
  i8 = (OOC_INT32)constExpr;
  OOC_SymbolTable__InitConstDecl((OOC_SymbolTable__ConstDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, (Object_Boxed__Object)i6, (OOC_SymbolTable__PredefType)i7, (OOC_AST__Node)i8);
  return (OOC_SymbolTable__ConstDecl)i0;
  ;
}

OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type, OOC_CHAR8 isTypeParameter) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__TypeDecl t;
  auto OOC_SymbolTable__TypeVar OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl_NewTypeVar(OOC_SymbolTable__Type bound, OOC_SymbolTable__Item parent);
    
    OOC_SymbolTable__TypeVar OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl_NewTypeVar(OOC_SymbolTable__Type bound, OOC_SymbolTable__Item parent) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__TypeVar tv;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeVar.baseTypes[0]);
      tv = (OOC_SymbolTable__TypeVar)i0;
      i1 = (OOC_INT32)type;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5439))+16);
      i2 = (OOC_INT32)parent;
      i3 = (OOC_INT32)bound;
      OOC_SymbolTable__InitTypeVar((OOC_SymbolTable__TypeVar)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i1, (OOC_SymbolTable__Type)i3);
      i1 = (OOC_INT32)t;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5466)))), OOC_SymbolTable__TypeDesc_SetNamingDecl)),OOC_SymbolTable__TypeDesc_SetNamingDecl)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__TypeDecl)i1);
      return (OOC_SymbolTable__TypeVar)i0;
      ;
    }


  t = (OOC_SymbolTable__TypeDecl)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeDecl.baseTypes[0]));
  i0 = isTypeParameter;
  if (!i0) goto l3;
  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl_NewTypeVar((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i0);
  type = (OOC_SymbolTable__Type)i0;
l3:
  i0 = (OOC_INT32)name;
  i1 = visibleFrom;
  i2 = exportMark;
  i3 = (OOC_INT32)docString;
  i4 = (OOC_INT32)parent;
  i5 = (OOC_INT32)type;
  i6 = isTypeParameter;
  i7 = (OOC_INT32)t;
  OOC_SymbolTable__InitTypeDecl((OOC_SymbolTable__TypeDecl)i7, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i0, i1, i2, (OOC_Doc__Document)i3, (OOC_SymbolTable__Type)i5, i6);
  i0 = i5!=(OOC_INT32)0;
  if (i0) goto l6;
  i0=0u;
  goto l8;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5771))+20);
  i0 = i0==(OOC_INT32)0;
  
l8:
  if (!i0) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 5805)))), OOC_SymbolTable__TypeDesc_SetNamingDecl)),OOC_SymbolTable__TypeDesc_SetNamingDecl)((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__TypeDecl)i7);
l10:
  return (OOC_SymbolTable__TypeDecl)i7;
  ;
}

OOC_SymbolTable__Redirect OOC_SymbolTable_Builder__BuilderDesc_NewRedirect(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Redirect.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)module;
  i4 = (OOC_INT32)ident;
  OOC_SymbolTable__InitRedirect((OOC_SymbolTable__Redirect)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, (OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Name)i4);
  return (OOC_SymbolTable__Redirect)i0;
  ;
}

OOC_SymbolTable__VarDecl OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isParameter, OOC_CHAR8 isReceiver, OOC_CHAR8 isVarParam, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__VarDecl var;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDecl.baseTypes[0]);
  var = (OOC_SymbolTable__VarDecl)i0;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  i6 = isReceiver;
  i7 = isVarParam;
  i8 = (OOC_INT32)type;
  i9 = isParameter;
  OOC_SymbolTable__InitVarDecl((OOC_SymbolTable__VarDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, i9, i6, i7, (OOC_SymbolTable__Type)i8);
  if (i9) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)b;
  i1 = *(OOC_INT8*)(_check_pointer(i1, 6777));
  i1 = i1==3;
  
l5:
  if (!i1) goto l7;
  *(OOC_UINT8*)((_check_pointer(i0, 6818))+60) = 0u;
l7:
  return (OOC_SymbolTable__VarDecl)i0;
  ;
}

OOC_SymbolTable__FieldDecl OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__FieldDecl.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  i6 = (OOC_INT32)type;
  OOC_SymbolTable__InitFieldDecl((OOC_SymbolTable__FieldDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, (OOC_SymbolTable__Type)i6);
  return (OOC_SymbolTable__FieldDecl)i0;
  ;
}

OOC_SymbolTable__PredefProc OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT16 id, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__PredefProc.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = id;
  i4 = minArgs;
  i5 = maxArgs;
  OOC_SymbolTable__InitPredefProc((OOC_SymbolTable__PredefProc)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, i5);
  return (OOC_SymbolTable__PredefProc)i0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_INT8 procClass, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ProcDecl.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  i6 = procClass;
  i7 = isForwardDecl;
  i8 = (OOC_INT32)procAST;
  OOC_SymbolTable__InitProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, i6, i7, (OOC_AST__Node)i8);
  return (OOC_SymbolTable__ProcDecl)i0;
  ;
}

static void OOC_SymbolTable_Builder__EvalContext(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 8551));
  i0 = i0==3;
  if (!i0) goto l14;
  i0 = (OOC_INT32)type;
  *(OOC_UINT8*)((_check_pointer(i0, 8592))+34) = 0u;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8632)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8696)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8772)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l14;
  *(OOC_UINT8*)((_check_pointer(i0, 8801))+45) = 1u;
  goto l14;
l10:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8746))+36);
  *(OOC_UINT8*)((_check_pointer(i0, 8723))+37) = (!i1);
  goto l14;
l12:
  *(OOC_UINT8*)((_check_pointer(i0, 8660))+54) = 0u;
l14:
  return;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_Builder__BuilderDesc_NewPredefType(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__PredefType.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = id;
  OOC_SymbolTable__InitPredefType((OOC_SymbolTable__PredefType)i0, (OOC_SymbolTable__Item)i1, i2);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__PredefType)i0;
  ;
}

OOC_SymbolTable__TypeName OOC_SymbolTable_Builder__BuilderDesc_NewTypeName(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeName.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = (OOC_INT32)module;
  i4 = (OOC_INT32)ident;
  OOC_SymbolTable__InitTypeName((OOC_SymbolTable__TypeName)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Name)i4);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__TypeName)i0;
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable_Builder__BuilderDesc_NewRecord(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Record.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = (OOC_INT32)baseType;
  OOC_SymbolTable__InitRecord((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)i3);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Record)i0;
  ;
}

OOC_SymbolTable__Array OOC_SymbolTable_Builder__BuilderDesc_NewArray(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_CHAR8 isOpenArray, OOC_AST__Node lengthExpr, OOC_SymbolTable__Type elementType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Array.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = isOpenArray;
  i4 = (OOC_INT32)elementType;
  i5 = (OOC_INT32)lengthExpr;
  OOC_SymbolTable__InitArray((OOC_SymbolTable__Array)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, i3, (OOC_SymbolTable__Type)i4, (OOC_AST__Node)i5);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Array)i0;
  ;
}

OOC_SymbolTable__Pointer OOC_SymbolTable_Builder__BuilderDesc_NewPointer(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Pointer.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = (OOC_INT32)baseType;
  OOC_SymbolTable__InitPointer((OOC_SymbolTable__Pointer)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)i3);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Pointer)i0;
  ;
}

OOC_SymbolTable__TypePars OOC_SymbolTable_Builder__BuilderDesc_NewTypePars(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypePars.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitTypePars((OOC_SymbolTable__TypePars)i0, (OOC_SymbolTable__Item)i1);
  return (OOC_SymbolTable__TypePars)i0;
  ;
}

OOC_SymbolTable__QualType OOC_SymbolTable_Builder__BuilderDesc_NewQualType(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__QualType.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = (OOC_INT32)baseType;
  i4 = (OOC_INT32)arguments;
  OOC_SymbolTable__InitQualType((OOC_SymbolTable__QualType)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypeRefArray)i4);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__QualType)i0;
  ;
}

OOC_SymbolTable__ExceptionName OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionName.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)type;
  OOC_SymbolTable__InitExceptionName((OOC_SymbolTable__ExceptionName)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_SymbolTable__ExceptionName)i0;
  ;
}

OOC_SymbolTable__FormalPars OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__FormalPars.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitFormalPars((OOC_SymbolTable__FormalPars)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)b;
  OOC_SymbolTable_Builder__EvalContext((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__FormalPars)i0;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Builder__BuilderDesc_NewModule(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Name name, OOC_Doc__Document docString, OOC_INT8 _class, OOC_INT8 callConv, OOC_AST__Node moduleAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Name bodyName;
  OOC_Scanner_InputBuffer__CharArray str;
  OOC_SymbolTable__ProcDecl bodyDecl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  bodyName = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 32);
  str = (OOC_Scanner_InputBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12638)), 0);
  _copy_8((const void*)"_MODULE_BODY",(void*)(_check_pointer(i1, 12638)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, (-1), (-1), (-1));
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12705)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i0, 0, 0, (OOC_Doc__Document)(OOC_INT32)0, 0, 0u, (OOC_AST__Node)(OOC_INT32)0);
  bodyDecl = (OOC_SymbolTable__ProcDecl)i0;
  i2 = (OOC_INT32)name;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12856)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i2);
  *(OOC_INT32*)((_check_pointer(i0, 12839))+60) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12906))+60);
  *(OOC_INT32*)((_check_pointer(i1, 12918))+48) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], 0));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12949))+60);
  *(OOC_INT32*)((_check_pointer(i1, 12961))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  i1 = (OOC_INT32)docString;
  i3 = _class;
  i4 = callConv;
  i5 = (OOC_INT32)moduleAST;
  i6 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Module.baseTypes[0]);
  OOC_SymbolTable__InitModule((OOC_SymbolTable__Module)i6, (OOC_SymbolTable__Name)i2, (OOC_Doc__Document)i1, i3, i4, (OOC_AST__Node)i5, (OOC_SymbolTable__ProcDecl)i0);
  return (OOC_SymbolTable__Module)i6;
  ;
}

void OOC_SymbolTable_Builder__BuilderDesc_Finalize(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Module module) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars(OOC_SymbolTable__Item item);
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName(OOC_SymbolTable__Item item);
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports(OOC_SymbolTable__Module module, OOC_INT32 len);
    
    void OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 c;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13691)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (!i1) goto l49;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13729))+48);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l49;
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13792))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9;
      i1=0;
      goto l27;
l9:
      i2=0;
l10_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13862)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l13;
      i3=0u;
      goto l15;
l13:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13906)))), &_td_OOC_SymbolTable__VarDeclDesc, 13906)), 13914))+52);
      
l15:
      if (i3) goto l17;
      i3=0u;
      goto l19;
l17:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13956)))), &_td_OOC_SymbolTable__VarDeclDesc, 13956)), 13964))+53);
      i3 = !i3;
      
l19:
      if (!i3) goto l22;
      i2 = i2+1;
      c = i2;
      
l22:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14049));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l10_loop;
l26:
      i1=i2;
l27:
      *(OOC_INT32*)((_check_pointer(i0, 14113))+48) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i1));
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14170))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l49;
      i2=0;
l30_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14240)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l33;
      i3=0u;
      goto l35;
l33:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14283)))), &_td_OOC_SymbolTable__VarDeclDesc, 14283)), 14291))+52);
      
l35:
      if (i3) goto l37;
      i3=0u;
      goto l39;
l37:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14333)))), &_td_OOC_SymbolTable__VarDeclDesc, 14333)), 14341))+53);
      i3 = !i3;
      
l39:
      if (!i3) goto l42;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14379))+48);
      i3 = _check_pointer(i3, 14387);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 14387))*4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14402)))), &_td_OOC_SymbolTable__VarDeclDesc, 14402));
      i2 = i2+1;
      c = i2;
      
l42:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14479));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l30_loop;
l49:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14578))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l58;
l52_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14677));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l52_loop;
l58:
      return;
      ;
    }

    
    void OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SymbolTable__Record record;
      OOC_SymbolTable__TypeDecl pointerDecl;
      OOC_SymbolTable__Name pointerName;
      OOC_CHAR8 found;
      OOC_INT16 pos;
      OOC_SymbolTable__Item ptr;
      auto OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType(OOC_SymbolTable__Name decl, OOC_SymbolTable__Type typeName);
      auto OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name typeName);
      auto OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_HasTypeBoundProcedures(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name record, OOC_SymbolTable__Name pointer);
        
        OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType(OOC_SymbolTable__Name decl, OOC_SymbolTable__Type typeName) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)typeName;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15052)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l3;
          return 0u;
          goto l8;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15096))+36);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l6;
          i0=0u;
          goto l7;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15140))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15147))+12);
          i1 = (OOC_INT32)decl;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15160))+12);
          i0 = (
          _cmp8((const void*)(_check_pointer(i0, 15152)),(const void*)(_check_pointer(i1, 15165))))==0;
          
l7:
          return i0;
l8:
          _failed_function(14963); return 0;
          ;
        }

        
        OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name typeName) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__TypeDecl pointerDecl;
          OOC_SymbolTable__Item ptr;

          pointerDecl = (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          i0 = (OOC_INT32)scope;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15451))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i0=(OOC_INT32)0;
          goto l25;
l3:
          i1 = (OOC_INT32)typeName;
          i2=(OOC_INT32)0;
l4_loop:
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15513)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (!i3) goto l20;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15550))+44);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15557)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i3) goto l10;
          i3=0u;
          goto l12;
l10:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15613))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15623)))), &_td_OOC_SymbolTable__PointerDesc, 15623)), 15631))+40);
          i3 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Type)i3);
          
l12:
          if (!i3) goto l20;
          i3 = i2==(OOC_INT32)0;
          if (i3) goto l17;
          return (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          
          goto l20;
l17:
          pointerDecl = (OOC_SymbolTable__TypeDecl)i0;
          i2=i0;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15861));
          ptr = (OOC_SymbolTable__Item)i0;
          i3 = i0!=(OOC_INT32)0;
          if (i3) goto l4_loop;
l24:
          i0=i2;
l25:
          return (OOC_SymbolTable__TypeDecl)i0;
          ;
        }

        
        OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_HasTypeBoundProcedures(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name record, OOC_SymbolTable__Name pointer) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Item ptr;

          i0 = (OOC_INT32)scope;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16140))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)record;
          i2 = (OOC_INT32)pointer;
          i3 = i2!=(OOC_INT32)0;
          
l3_loop:
          i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16202)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i4) goto l20;
          i4 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
          if (i4) goto l8;
          i4=0u;
          goto l17;
l8:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16292))+60);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16303))+36);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16312))+48);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Type)i4);
          if (i4) goto l14;
          if (i3) goto l12;
          i4=0u;
          goto l17;
l12:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16401))+60);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16412))+36);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16421))+48);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i2, (OOC_SymbolTable__Type)i4);
          
          goto l17;
l14:
          i4=1u;
l17:
          if (!i4) goto l20;
          return 1u;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16533));
          ptr = (OOC_SymbolTable__Item)i0;
          i4 = i0!=(OOC_INT32)0;
          if (i4) goto l3_loop;
l25:
          return 0u;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16673)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l8;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17750)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i0) goto l37;
      return;
      goto l37;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16709))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16716)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l37;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16838))+4);
      _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16847)))), &_td_OOC_SymbolTable__ModuleDesc)), 127, 16826);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16889))+44);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16900)))), &_td_OOC_SymbolTable__RecordDesc, 16900);
      record = (OOC_SymbolTable__Record)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16970))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16956))+4);
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl((OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i2);
      pointerDecl = (OOC_SymbolTable__TypeDecl)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l13;
      pointerName = (OOC_SymbolTable__Name)(OOC_INT32)0;
      i2=(OOC_INT32)0;
      goto l15;
l13:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17059))+16);
      pointerName = (OOC_SymbolTable__Name)i2;
      
l15:
      if (i3) goto l21;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17207))+40);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l19;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17278))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17332))+16);
      i0 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_HasTypeBoundProcedures((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, (OOC_SymbolTable__Name)i2);
      
      goto l23;
l19:
      i0=1u;
      goto l23;
l21:
      i0=1u;
l23:
      if (!i0) goto l37;
      i0 = (OOC_INT32)record;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17398))+16);
      *(OOC_INT32*)((_check_pointer(i0, 17379))+56) = i2;
      i2 = (OOC_INT32)pointerName;
      i3 = i2!=(OOC_INT32)0;
      if (!i3) goto l37;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17493))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17493))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17505))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17511))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17505))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17511))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17498)), 0);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17516)), 0);
      Strings__FindNext((void*)(_check_pointer(i3, 17498)), i2, (void*)(_check_pointer(i4, 17516)), i1, 0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
      i1 = found;
      if (i1) goto l29;
      i1=0u;
      goto l31;
l29:
      i1 = pos;
      i1 = i1==0;
      
l31:
      if (!i1) goto l37;
      i1 = (OOC_INT32)pointerDecl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17661))+16);
      *(OOC_INT32*)((_check_pointer(i0, 17635))+56) = i1;
l37:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17879))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
l40_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17973));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l40_loop;
l46:
      return;
      ;
    }

    
    void OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports(OOC_SymbolTable__Module module, OOC_INT32 len) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 a;
      OOC_INT32 e;
      OOC_SymbolTable__Import import;
      auto OOC_SymbolTable__Name OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 prefix);
        
        OOC_SymbolTable__Name OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 prefix) {
          register OOC_INT32 i0,i1,i2;
          OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
          OOC_SymbolTable__Name name;
          OOC_Scanner_InputBuffer__CharArray nameStr;

          OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
          name = (OOC_SymbolTable__Name)i0;
          i1 = Strings__Length((void*)(OOC_INT32)str, str_0d);
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+2));
          nameStr = (OOC_Scanner_InputBuffer__CharArray)i1;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18395)), 0);
          _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i1, 18395)),i2);
          i2 = prefix;
          if (!i2) goto l4;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18462)), 0);
          Strings__Insert("-", 2, 0, (void*)(_check_pointer(i1, 18462)), i2);
l4:
          OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, 0, 0, 0);
          return (OOC_SymbolTable__Name)i0;
          ;
        }


      a = 0;
      i0 = len;
      i1 = 0<i0;
      if (!i1) goto l28;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
      i3 = _check_pointer(i2, 18636);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 18636))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18639))+4);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 18647)), 0);
      i3 = i3-1;
      e = i3;
      i4 = i3>=0;
      if (i4) goto l6;
      i4=0u;
      goto l8;
l6:
      i4 = _check_pointer(i2, 18689);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 18689))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18692))+4);
      i4 = _check_pointer(i4, 18700);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 18700))*4);
      i5 = (OOC_INT32)module;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18713))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18719))+12);
      i4 = (
      _cmp8((const void*)(_check_pointer(i4, 18703)),(const void*)(_check_pointer(i5, 18724))))!=0;
      
l8:
      if (!i4) goto l20;
      i4 = (OOC_INT32)module;
      
l11_loop:
      i3 = i3-1;
      e = i3;
      i5 = i3>=0;
      if (i5) goto l14;
      i5=0u;
      goto l16;
l14:
      i5 = _check_pointer(i2, 18689);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 18689))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18692))+4);
      i5 = _check_pointer(i5, 18700);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 18700))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18713))+16);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 18719))+12);
      i5 = (
      _cmp8((const void*)(_check_pointer(i5, 18703)),(const void*)(_check_pointer(i6, 18724))))!=0;
      
l16:
      if (i5) goto l11_loop;
l20:
      i3 = i3<0;
      if (!i3) goto l23;
      i3 = (OOC_INT32)b;
      i4 = _check_pointer(i2, 18936);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 18936))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 18939));
      i2 = _check_pointer(i2, 18936);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i5, OOC_UINT32, 18936))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18939));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18946)), 0);
      i1 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i4, 18946)), i1, 1u);
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
      i4 = _check_pointer(i2, 19050);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = a;
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i6, i5, OOC_UINT32, 19050))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 19053));
      i2 = _check_pointer(i2, 19050);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i6, i5, OOC_UINT32, 19050))*4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19053));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 19060)), 0);
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i4, 19060)), i2, 0u);
      i4 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18863)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i1, 0, (OOC_Doc__Document)0, (OOC_SymbolTable__Name)i2);
      import = (OOC_SymbolTable__Import)i1;
l23:
      i1 = a;
      i1 = i1+1;
      a = i1;
      i2 = i1<i0;
      if (i2) goto l3_loop;
l28:
      return;
      ;
    }


  i0 = (OOC_INT32)module;
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)module;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 19204))+48);
  i1 = i1==1;
  if (i1) goto l10;
  i1 = OOC_SymbolTable_Builder__doAutoImport;
  i2 = i1==2;
  if (i2) goto l8;
  i1 = i1==1;
  if (!i1) goto l10;
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports((OOC_SymbolTable__Module)i0, 1);
  goto l10;
l8:
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19360)), 0);
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports((OOC_SymbolTable__Module)i0, i1);
l10:
  return;
  ;
}

void OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable(OOC_SymbolTable_Builder__Builder b, IO__ByteChannel ch, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;
  ADT_Object_Storage__Writer writer;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)ADT_Object_Storage__ConnectWriter((IO__ByteChannel)i0);
  writer = (ADT_Object_Storage__Writer)i0;
  i1 = (OOC_INT32)symTab;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19925)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable(OOC_SymbolTable_Builder__Builder b, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_Object_Storage__Reader reader;
  OOC_CHAR8 mn[5];
  OOC_INT32 fp;
  OOC_INT32 len;
  OOC_SymbolTable__ModuleRefArray prunedImports;
  OOC_INT32 i;
  OOC_Scanner_InputBuffer__CharArray str;
  OOC_INT32 fpi;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)ADT_Object_Storage__ConnectReader((IO__ByteChannel)i0);
  reader = (ADT_Object_Storage__Reader)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20319)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)mn, 5, 0, 4);
  *(OOC_UINT8*)((OOC_INT32)mn+(_check_index(4, 5, OOC_UINT8, 20362))) = 0u;
  i1 = (
  _cmp8((const void*)(OOC_INT32)mn,(const void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber))!=0;
  if (!i1) goto l3;
  Out__String("Fatal error: Symbol file does not start with required magic number.", 68);
  Out__Ln();
  _halt(1);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20556)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&fp, 4, 0, 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20606)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i1);
  prunedImports = (OOC_SymbolTable__ModuleRefArray)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20685)), 0);
  i3 = 0<i2;
  if (!i3) goto l11;
  i3=0;
l6_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20705)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i4 = len;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i4+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20755)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i5, 20769)), (-1), 0, i4);
  i4 = _check_pointer(i5, 20790);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i7 = len;
  *(OOC_UINT8*)(i4+(_check_index(i7, i6, OOC_UINT32, 20790))) = 0u;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20815)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&fpi, 4, 0, 4);
  i4 = _check_pointer(i1, 20880);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 20880))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]));
  i4 = _check_pointer(i1, 20905);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 20905))*4);
  *(OOC_INT32*)(_check_pointer(i4, 20908)) = i5;
  i4 = _check_pointer(i1, 20941);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 20941))*4);
  i5 = fpi;
  *(OOC_INT32*)((_check_pointer(i4, 20944))+4) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l6_loop;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20989)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==0;
  if (i2) goto l14;
  i2 = fp;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21073)))), &_td_OOC_SymbolTable__ModuleDesc, 21073)), 21080))+64) = i2;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21114)))), &_td_OOC_SymbolTable__ModuleDesc, 21114)), 21121))+68) = i1;
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21175)))), &_td_OOC_SymbolTable__ModuleDesc, 21175));
  goto l15;
l14:
  return (OOC_SymbolTable__Module)0;
l15:
  _failed_function(19997); return 0;
  ;
}

static OOC_SymbolTable_Builder__Name OOC_SymbolTable_Builder__N(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT32 len;
  OOC_SymbolTable_Builder__Name name;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  len = i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__Name.baseTypes[0], (i0+1));
  name = (OOC_SymbolTable_Builder__Name)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21378)), 0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 21378)),i1);
  return (OOC_SymbolTable_Builder__Name)i0;
  ;
}

void OOC_OOC_SymbolTable_Builder_init(void) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  OOC_SymbolTable_Builder__doAutoImport = 0;
  _copy_8((const void*)"OOC6",(void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber,5);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2840.baseTypes[0], 3);
  OOC_SymbolTable_Builder__autoImport = (void*)i0;
  i1 = _check_pointer(i0, 21513);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 21513))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 21531);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 21531))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("RT0", 4);
  *(OOC_INT32*)(_check_pointer(i0, 21534)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 21572);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 21572))*4);
  *(OOC_INT32*)((_check_pointer(i1, 21575))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2165.baseTypes[0], 2));
  i1 = _check_pointer(i0, 21601);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 21601))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21604))+4);
  i1 = _check_pointer(i1, 21612);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 21629);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 21629))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 21632));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 21612))*4) = i3;
  i0 = _check_pointer(i0, 21653);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 21653))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21656))+4);
  i0 = _check_pointer(i0, 21664);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 21664))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 21701);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 21701))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 21719);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 21719))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("Object", 7);
  *(OOC_INT32*)(_check_pointer(i0, 21722)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 21767);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 21767))*4);
  *(OOC_INT32*)((_check_pointer(i1, 21770))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2165.baseTypes[0], 3));
  i1 = _check_pointer(i0, 21796);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 21796))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21799))+4);
  i1 = _check_pointer(i1, 21807);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 21824);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 21824))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 21827));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 21807))*4) = i3;
  i1 = _check_pointer(i0, 21848);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 21848))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21851))+4);
  i1 = _check_pointer(i1, 21859);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 21876);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 21876))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 21879));
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 21859))*4) = i3;
  i0 = _check_pointer(i0, 21900);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 21900))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21903))+4);
  i0 = _check_pointer(i0, 21911);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 21911))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 21948);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 21948))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 21966);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 21966))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("Exception", 10);
  *(OOC_INT32*)(_check_pointer(i0, 21969)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 22013);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 22013))*4);
  *(OOC_INT32*)((_check_pointer(i1, 22016))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2165.baseTypes[0], 4));
  i1 = _check_pointer(i0, 22042);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 22042))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22045))+4);
  i1 = _check_pointer(i1, 22053);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 22070);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 22070))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 22073));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 22053))*4) = i3;
  i1 = _check_pointer(i0, 22094);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 22094))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22097))+4);
  i1 = _check_pointer(i1, 22105);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 22122);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 22122))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 22125));
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 22105))*4) = i3;
  i1 = _check_pointer(i0, 22146);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 22146))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22149))+4);
  i1 = _check_pointer(i1, 22157);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 22174);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(2, i4, OOC_UINT8, 22174))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 22177));
  *(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 22157))*4) = i3;
  i0 = _check_pointer(i0, 22198);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 22198))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22201))+4);
  i0 = _check_pointer(i0, 22209);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(3, i1, OOC_UINT8, 22209))*4) = i2;
  return;
  ;
}

/* --- */
