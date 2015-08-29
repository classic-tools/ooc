#include <OOC/SymbolTable/Builder.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable_Builder__Init(OOC_SymbolTable_Builder__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT8*)(_check_pointer(i0, 3495)) = 0;
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
  *(OOC_INT8*)(_check_pointer(i0, 3717)) = i1;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5800))+20);
      i2 = (OOC_INT32)parent;
      i3 = (OOC_INT32)bound;
      OOC_SymbolTable__InitTypeVar((OOC_SymbolTable__TypeVar)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i1, (OOC_SymbolTable__Type)i3);
      i1 = (OOC_INT32)t;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5827)))), OOC_SymbolTable__TypeDesc_SetNamingDecl)),OOC_SymbolTable__TypeDesc_SetNamingDecl)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__TypeDecl)i1);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6132))+24);
  i0 = i0==(OOC_INT32)0;
  
l8:
  if (!i0) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6166)))), OOC_SymbolTable__TypeDesc_SetNamingDecl)),OOC_SymbolTable__TypeDesc_SetNamingDecl)((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__TypeDecl)i7);
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
  i1 = *(OOC_INT8*)(_check_pointer(i1, 7138));
  i1 = i1==3;
  
l5:
  if (!i1) goto l7;
  *(OOC_UINT8*)((_check_pointer(i0, 7179))+64) = 0u;
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
  i0 = *(OOC_INT8*)(_check_pointer(i0, 8912));
  i0 = i0==3;
  if (!i0) goto l14;
  i0 = (OOC_INT32)type;
  *(OOC_UINT8*)((_check_pointer(i0, 8953))+38) = 0u;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8993)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9057)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9133)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l14;
  *(OOC_UINT8*)((_check_pointer(i0, 9162))+49) = 1u;
  goto l14;
l10:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9107))+40);
  *(OOC_UINT8*)((_check_pointer(i0, 9084))+41) = (!i1);
  goto l14;
l12:
  *(OOC_UINT8*)((_check_pointer(i0, 9021))+58) = 0u;
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
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12999)), 0);
  _copy_8((const void*)"_MODULE_BODY",(void*)(_check_pointer(i1, 12999)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, (-1), (-1), (-1));
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13066)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i0, 0, 0, (OOC_Doc__Document)(OOC_INT32)0, 0, 0u, (OOC_AST__Node)(OOC_INT32)0);
  bodyDecl = (OOC_SymbolTable__ProcDecl)i0;
  i2 = (OOC_INT32)name;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13217)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i2);
  *(OOC_INT32*)((_check_pointer(i0, 13200))+64) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13267))+64);
  *(OOC_INT32*)((_check_pointer(i1, 13279))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], 0));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13310))+64);
  *(OOC_INT32*)((_check_pointer(i1, 13322))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
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
  ADT_Dictionary__Dictionary getPointerDecl;
  ADT_Dictionary__Dictionary hasTypeBoundProc;
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars(OOC_SymbolTable__Item item);
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_PreprocessSetClassName(OOC_SymbolTable__Module module);
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName(OOC_SymbolTable__Item item);
  auto void OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports(OOC_SymbolTable__Module module, OOC_INT32 len);
    
    void OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 c;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14196)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (!i1) goto l49;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14234))+52);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l49;
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14297))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9;
      i1=0;
      goto l27;
l9:
      i2=0;
l10_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14367)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l13;
      i3=0u;
      goto l15;
l13:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14411)))), &_td_OOC_SymbolTable__VarDeclDesc, 14411)), 14419))+56);
      
l15:
      if (i3) goto l17;
      i3=0u;
      goto l19;
l17:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14461)))), &_td_OOC_SymbolTable__VarDeclDesc, 14461)), 14469))+57);
      i3 = !i3;
      
l19:
      if (!i3) goto l22;
      i2 = i2+1;
      c = i2;
      
l22:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14554));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l10_loop;
l26:
      i1=i2;
l27:
      *(OOC_INT32*)((_check_pointer(i0, 14618))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i1));
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14675))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l49;
      i2=0;
l30_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14745)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l33;
      i3=0u;
      goto l35;
l33:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14788)))), &_td_OOC_SymbolTable__VarDeclDesc, 14788)), 14796))+56);
      
l35:
      if (i3) goto l37;
      i3=0u;
      goto l39;
l37:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14838)))), &_td_OOC_SymbolTable__VarDeclDesc, 14838)), 14846))+57);
      i3 = !i3;
      
l39:
      if (!i3) goto l42;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14884))+52);
      i3 = _check_pointer(i3, 14892);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 14892))*4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14907)))), &_td_OOC_SymbolTable__VarDeclDesc, 14907));
      i2 = i2+1;
      c = i2;
      
l42:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14984));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l30_loop;
l49:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15083))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l58;
l52_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15182));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l52_loop;
l58:
      return;
      ;
    }

    
    void OOC_SymbolTable_Builder__BuilderDesc_Finalize_PreprocessSetClassName(OOC_SymbolTable__Module module) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item ptr;
      Object__String8 name;
      auto OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_PreprocessSetClassName_UnqualifiedName(OOC_SymbolTable__Type type);
        
        OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_PreprocessSetClassName_UnqualifiedName(OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15444)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l3;
          return 0u;
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15484))+40);
          return (i0==(OOC_INT32)0);
l4:
          _failed_function(15373); return 0;
          ;
        }


      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15610))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l29;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15667)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16168)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l24;
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
      if (!i1) goto l24;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16262))+64);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16273))+40);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16282))+52);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16299)))), &_td_OOC_SymbolTable__TypeNameDesc, 16299)), 16308))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16314))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16262))+64);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16273))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16282))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16299)))), &_td_OOC_SymbolTable__TypeNameDesc, 16299)), 16308))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16314))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16318)), 0);
      i1 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 16318)), i2);
      name = (Object__String8)i1;
      i2 = (OOC_INT32)hasTypeBoundProc;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      goto l24;
l12:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15702))+48);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15708)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l15;
      i1=0u;
      goto l17;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15758))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15768)))), &_td_OOC_SymbolTable__PointerDesc, 15768)), 15776))+44);
      i1 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_PreprocessSetClassName_UnqualifiedName((OOC_SymbolTable__Type)i1);
      
l17:
      if (!i1) goto l24;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15839))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15849)))), &_td_OOC_SymbolTable__PointerDesc, 15849)), 15857))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15878)))), &_td_OOC_SymbolTable__TypeNameDesc, 15878)), 15887))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15893))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15839))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15849)))), &_td_OOC_SymbolTable__PointerDesc, 15849)), 15857))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15878)))), &_td_OOC_SymbolTable__TypeNameDesc, 15878)), 15887))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15893))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15897)), 0);
      i1 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 15897)), i2);
      name = (Object__String8)i1;
      i2 = (OOC_INT32)getPointerDecl;
      i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
      if (i2) goto l21;
      i2 = (OOC_INT32)getPointerDecl;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i0);
      goto l24;
l21:
      i2 = (OOC_INT32)getPointerDecl;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l24:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16425));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l29:
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16794)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l3;
          return 0u;
          goto l8;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16838))+40);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l6;
          i0=0u;
          goto l7;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16882))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16889))+12);
          i1 = (OOC_INT32)decl;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16902))+12);
          i0 = (
          _cmp8((const void*)(_check_pointer(i0, 16894)),(const void*)(_check_pointer(i1, 16907))))==0;
          
l7:
          return i0;
l8:
          _failed_function(16705); return 0;
          ;
        }

        
        OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name typeName) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__TypeDecl pointerDecl;
          OOC_SymbolTable__Item ptr;

          i0 = (OOC_INT32)scope;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17193)))), &_td_OOC_SymbolTable__ModuleDesc);
          if (i1) goto l28;
          pointerDecl = (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17525))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l5;
          i0=(OOC_INT32)0;
          goto l27;
l5:
          i1 = (OOC_INT32)typeName;
          i2=(OOC_INT32)0;
l6_loop:
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17590)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (!i3) goto l22;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17629))+48);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17635)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i3) goto l12;
          i3=0u;
          goto l14;
l12:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17692))+48);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17702)))), &_td_OOC_SymbolTable__PointerDesc, 17702)), 17710))+44);
          i3 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Type)i3);
          
l14:
          if (!i3) goto l22;
          i3 = i2==(OOC_INT32)0;
          if (i3) goto l19;
          return (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          
          goto l22;
l19:
          pointerDecl = (OOC_SymbolTable__TypeDecl)i0;
          i2=i0;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17962));
          ptr = (OOC_SymbolTable__Item)i0;
          i3 = i0!=(OOC_INT32)0;
          if (i3) goto l6_loop;
l26:
          i0=i2;
l27:
          return (OOC_SymbolTable__TypeDecl)i0;
          goto l33;
l28:
          i0 = (OOC_INT32)typeName;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17256))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17256))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17260)), 0);
          i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 17260)), i0);
          i1 = (OOC_INT32)getPointerDecl;
          i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          if (i1) goto l31;
          return (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          goto l33;
l31:
          i1 = (OOC_INT32)getPointerDecl;
          i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          return (OOC_SymbolTable__TypeDecl)i0;
l33:
          _failed_function(16997); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_HasTypeBoundProcedures(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name record, OOC_SymbolTable__Name pointer) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          Object__String8 name;
          OOC_SymbolTable__Item ptr;

          i0 = (OOC_INT32)scope;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18287)))), &_td_OOC_SymbolTable__ModuleDesc);
          if (i1) goto l28;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18737))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l27;
          i1 = (OOC_INT32)pointer;
          i2 = (OOC_INT32)record;
          i3 = i1!=(OOC_INT32)0;
          
l5_loop:
          i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18803)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i4) goto l22;
          i4 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
          if (i4) goto l10;
          i4=0u;
          goto l19;
l10:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18896))+64);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18907))+40);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18916))+52);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i2, (OOC_SymbolTable__Type)i4);
          if (i4) goto l16;
          if (i3) goto l14;
          i4=0u;
          goto l19;
l14:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19008))+64);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19019))+40);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19028))+52);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Type)i4);
          
          goto l19;
l16:
          i4=1u;
l19:
          if (!i4) goto l22;
          return 1u;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19152));
          ptr = (OOC_SymbolTable__Item)i0;
          i4 = i0!=(OOC_INT32)0;
          if (i4) goto l5_loop;
l27:
          return 0u;
          goto l39;
l28:
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18348))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18348))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18352)), 0);
          i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 18352)), i0);
          name = (Object__String8)i0;
          i1 = (OOC_INT32)hasTypeBoundProc;
          i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          if (i0) goto l37;
          i0 = (OOC_INT32)pointer;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l38;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18510))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18510))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18514)), 0);
          i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 18514)), i0);
          i1 = (OOC_INT32)hasTypeBoundProc;
          i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          if (!i0) goto l38;
          return 1u;
          goto l38;
l37:
          return 1u;
l38:
          return 0u;
l39:
          _failed_function(18078); return 0;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19310)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l8;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20387)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i0) goto l37;
      return;
      goto l37;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19346))+48);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19353)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l37;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19475))+4);
      _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19484)))), &_td_OOC_SymbolTable__ModuleDesc)), 127, 19463);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19526))+48);
      record = (OOC_SymbolTable__Record)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19537)))), &_td_OOC_SymbolTable__RecordDesc, 19537));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19607))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19593))+4);
      i0 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1);
      pointerDecl = (OOC_SymbolTable__TypeDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      pointerName = (OOC_SymbolTable__Name)(OOC_INT32)0;
      i0=(OOC_INT32)0;
      goto l15;
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19696))+20);
      pointerName = (OOC_SymbolTable__Name)i0;
      
l15:
      if (i1) goto l21;
      i1 = (OOC_INT32)record;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19844))+44);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l19;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19915))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19969))+20);
      i0 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_HasTypeBoundProcedures((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Name)i0);
      
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20035))+20);
      *(OOC_INT32*)((_check_pointer(i0, 20016))+64) = i2;
      i2 = (OOC_INT32)pointerName;
      i3 = i2!=(OOC_INT32)0;
      if (!i3) goto l37;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20130))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20130))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20142))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20148))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20142))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20148))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20135)), 0);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20153)), 0);
      Strings__FindNext((void*)(_check_pointer(i3, 20135)), i2, (void*)(_check_pointer(i4, 20153)), i1, 0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20298))+20);
      *(OOC_INT32*)((_check_pointer(i0, 20272))+64) = i1;
l37:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20516))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
l40_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20610));
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
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21032)), 0);
          _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i1, 21032)),i2);
          i2 = prefix;
          if (!i2) goto l4;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21099)), 0);
          Strings__Insert("-", 2, 0, (void*)(_check_pointer(i1, 21099)), i2);
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
      i3 = _check_pointer(i2, 21273);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 21273))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21276))+4);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 21284)), 0);
      i3 = i3-1;
      e = i3;
      i4 = i3>=0;
      if (i4) goto l6;
      i4=0u;
      goto l8;
l6:
      i4 = _check_pointer(i2, 21326);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 21326))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21329))+4);
      i4 = _check_pointer(i4, 21337);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 21337))*4);
      i5 = (OOC_INT32)module;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21350))+20);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21356))+12);
      i4 = (
      _cmp8((const void*)(_check_pointer(i4, 21340)),(const void*)(_check_pointer(i5, 21361))))!=0;
      
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
      i5 = _check_pointer(i2, 21326);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 21326))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21329))+4);
      i5 = _check_pointer(i5, 21337);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 21337))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21350))+20);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 21356))+12);
      i5 = (
      _cmp8((const void*)(_check_pointer(i5, 21340)),(const void*)(_check_pointer(i6, 21361))))!=0;
      
l16:
      if (i5) goto l11_loop;
l20:
      i3 = i3<0;
      if (!i3) goto l23;
      i3 = (OOC_INT32)b;
      i4 = _check_pointer(i2, 21573);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 21573))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 21576));
      i2 = _check_pointer(i2, 21573);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i5, OOC_UINT32, 21573))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21576));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21583)), 0);
      i1 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i4, 21583)), i1, 1u);
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
      i4 = _check_pointer(i2, 21687);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = a;
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i6, i5, OOC_UINT32, 21687))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 21690));
      i2 = _check_pointer(i2, 21687);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i6, i5, OOC_UINT32, 21687))*4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21690));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21697)), 0);
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i4, 21697)), i2, 0u);
      i4 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21500)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i1, 0, (OOC_Doc__Document)0, (OOC_SymbolTable__Name)i2);
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
  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i0);
  getPointerDecl = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i0);
  hasTypeBoundProc = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_PreprocessSetClassName((OOC_SymbolTable__Module)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)module;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 22086))+52);
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22242)), 0);
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports((OOC_SymbolTable__Module)i0, i1);
l10:
  return;
  ;
}

void OOC_SymbolTable_Builder__WriterDesc_INIT(OOC_SymbolTable_Builder__Writer w, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)chDoc;
  OOC_SymbolTable__WriterDesc_INIT((OOC_SymbolTable__Writer)i0, (IO__ByteChannel)i1, (IO__ByteChannel)i2);
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 22448))+284) = i1;
  return;
  ;
}

void OOC_SymbolTable_Builder__WriterDesc_WriteObject(OOC_SymbolTable_Builder__Writer w, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String str;

  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22695)))), &_td_OOC_SymbolTable__NameDesc);
  if (i1) goto l5;
  i1 = (OOC_INT32)w;
  ADT_Object_Storage__WriterDesc_WriteObject((ADT_Object_Storage__Writer)i1, (Object__Object)i0);
  goto l12;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22744))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22744))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22748)), 0);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 22748)), i2);
  str = (Object__String)i1;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22764))+284);
  i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
  if (i3) goto l8;
  ADT_Object_Storage__WriterDesc_WriteObject((ADT_Object_Storage__Writer)i2, (Object__Object)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22887))+284);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i0);
  goto l12;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22814))+284);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
  ADT_Object_Storage__WriterDesc_WriteObject((ADT_Object_Storage__Writer)i2, (Object__Object)i0);
  goto l12;
l11:
  i0 = (OOC_INT32)w;
  ADT_Object_Storage__WriterDesc_WriteObject((ADT_Object_Storage__Writer)i0, (Object__Object)(OOC_INT32)0);
l12:
  return;
  ;
}

void OOC_SymbolTable_Builder__WriterDesc_Disconnect(OOC_SymbolTable_Builder__Writer w) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  ADT_Object_Storage__WriterDesc_Disconnect((ADT_Object_Storage__Writer)i0);
  *(OOC_INT32*)((_check_pointer(i0, 23069))+284) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable(OOC_SymbolTable_Builder__Builder b, IO__ByteChannel ch, IO__ByteChannel chDoc, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__Writer.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)chDoc;
  OOC_SymbolTable_Builder__WriterDesc_INIT((OOC_SymbolTable_Builder__Writer)i0, (IO__ByteChannel)i1, (IO__ByteChannel)i2);
  i1 = (OOC_INT32)symTab;
  OOC_SymbolTable_Builder__WriterDesc_WriteObject((OOC_SymbolTable_Builder__Writer)i0, (Object__Object)i1);
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable(OOC_SymbolTable_Builder__Builder b, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable_Builder__Reader reader;
  OOC_CHAR8 mn[5];
  OOC_INT32 fp;
  OOC_INT32 len;
  OOC_SymbolTable__ModuleRefArray prunedImports;
  OOC_INT32 i;
  OOC_Scanner_InputBuffer__CharArray str;
  OOC_INT32 fpi;
  Object__Object obj;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__Reader.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)chDoc;
  OOC_SymbolTable__ReaderDesc_INIT((OOC_SymbolTable__Reader)i0, (IO__ByteChannel)i1, (IO__ByteChannel)i2);
  reader = (OOC_SymbolTable_Builder__Reader)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23939)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)mn, 5, 0, 4);
  *(OOC_UINT8*)((OOC_INT32)mn+(_check_index(4, 5, OOC_UINT8, 23982))) = 0u;
  i1 = (
  _cmp8((const void*)(OOC_INT32)mn,(const void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber))!=0;
  if (!i1) goto l3;
  Out__String("Fatal error: Symbol file does not start with required magic number.", 68);
  Out__Ln();
  _halt(1);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24176)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&fp, 4, 0, 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24226)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i1);
  prunedImports = (OOC_SymbolTable__ModuleRefArray)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 24305)), 0);
  i3 = 0<i2;
  if (!i3) goto l11;
  i3=0;
l6_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24325)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i4 = len;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i4+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24375)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i5, 24389)), (-1), 0, i4);
  i4 = _check_pointer(i5, 24410);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i7 = len;
  *(OOC_UINT8*)(i4+(_check_index(i7, i6, OOC_UINT32, 24410))) = 0u;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24435)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&fpi, 4, 0, 4);
  i4 = _check_pointer(i1, 24500);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 24500))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]));
  i4 = _check_pointer(i1, 24525);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 24525))*4);
  *(OOC_INT32*)(_check_pointer(i4, 24528)) = i5;
  i4 = _check_pointer(i1, 24561);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 24561))*4);
  i5 = fpi;
  *(OOC_INT32*)((_check_pointer(i4, 24564))+4) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l6_loop;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24609)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l14;
  i2 = fp;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24693)))), &_td_OOC_SymbolTable__ModuleDesc, 24693)), 24700))+68) = i2;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24734)))), &_td_OOC_SymbolTable__ModuleDesc, 24734)), 24741))+72) = i1;
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24795)))), &_td_OOC_SymbolTable__ModuleDesc, 24795));
  goto l15;
l14:
  return (OOC_SymbolTable__Module)(OOC_INT32)0;
l15:
  _failed_function(23624); return 0;
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24998)), 0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 24998)),i1);
  return (OOC_SymbolTable_Builder__Name)i0;
  ;
}

void OOC_OOC_SymbolTable_Builder_init(void) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  OOC_SymbolTable_Builder__doAutoImport = 0;
  _copy_8((const void*)"OOC7",(void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber,5);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__3201.baseTypes[0], 3);
  OOC_SymbolTable_Builder__autoImport = (void*)i0;
  i1 = _check_pointer(i0, 25133);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 25133))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 25151);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 25151))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("RT0", 4);
  *(OOC_INT32*)(_check_pointer(i0, 25154)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 25192);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 25192))*4);
  *(OOC_INT32*)((_check_pointer(i1, 25195))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2526.baseTypes[0], 2));
  i1 = _check_pointer(i0, 25221);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 25221))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25224))+4);
  i1 = _check_pointer(i1, 25232);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 25249);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 25249))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25252));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 25232))*4) = i3;
  i0 = _check_pointer(i0, 25273);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 25273))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25276))+4);
  i0 = _check_pointer(i0, 25284);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 25284))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 25321);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 25321))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 25339);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 25339))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("Object", 7);
  *(OOC_INT32*)(_check_pointer(i0, 25342)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 25387);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 25387))*4);
  *(OOC_INT32*)((_check_pointer(i1, 25390))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2526.baseTypes[0], 4));
  i1 = _check_pointer(i0, 25416);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 25416))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25419))+4);
  i1 = _check_pointer(i1, 25427);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 25444);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 25444))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25447));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 25427))*4) = i3;
  i1 = _check_pointer(i0, 25468);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 25468))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25471))+4);
  i1 = _check_pointer(i1, 25479);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 25496);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 25496))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25499));
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 25479))*4) = i3;
  i0 = _check_pointer(i0, 25520);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 25520))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25523))+4);
  i0 = _check_pointer(i0, 25531);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 25531))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i0 = _check_pointer(i0, 25561);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 25561))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25564))+4);
  i0 = _check_pointer(i0, 25572);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("HashCode", 9);
  *(OOC_INT32*)(i0+(_check_index(3, i1, OOC_UINT8, 25572))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 25613);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 25613))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 25631);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 25631))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("Exception", 10);
  *(OOC_INT32*)(_check_pointer(i0, 25634)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 25678);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 25678))*4);
  *(OOC_INT32*)((_check_pointer(i1, 25681))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2526.baseTypes[0], 5));
  i1 = _check_pointer(i0, 25707);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 25707))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25710))+4);
  i1 = _check_pointer(i1, 25718);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 25735);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 25735))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25738));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 25718))*4) = i3;
  i1 = _check_pointer(i0, 25759);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 25759))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25762))+4);
  i1 = _check_pointer(i1, 25770);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 25787);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 25787))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25790));
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 25770))*4) = i3;
  i1 = _check_pointer(i0, 25811);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 25811))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25814))+4);
  i1 = _check_pointer(i1, 25822);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = _check_pointer(i0, 25839);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(2, i4, OOC_UINT8, 25839))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 25842));
  *(OOC_INT32*)(i1+(_check_index(2, i2, OOC_UINT8, 25822))*4) = i3;
  i0 = _check_pointer(i0, 25863);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 25863))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25866))+4);
  i0 = _check_pointer(i0, 25874);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(3, i1, OOC_UINT8, 25874))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i0 = _check_pointer(i0, 25904);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 25904))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25907))+4);
  i0 = _check_pointer(i0, 25915);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("HashCode", 9);
  *(OOC_INT32*)(i0+(_check_index(4, i1, OOC_UINT8, 25915))*4) = i2;
  return;
  ;
}

/* --- */
