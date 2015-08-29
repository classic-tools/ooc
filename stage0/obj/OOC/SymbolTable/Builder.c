#include <OOC/SymbolTable/Builder.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable_Builder__Init(OOC_SymbolTable_Builder__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT8*)(_check_pointer(i0, 3139)) = 0;
  return;
  ;
}

OOC_SymbolTable_Builder__Builder OOC_SymbolTable_Builder__New() {
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
  *(OOC_INT8*)(_check_pointer(i0, 3361)) = i1;
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

OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__TypeDecl t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeDecl.baseTypes[0]);
  t = (OOC_SymbolTable__TypeDecl)i0;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  i6 = (OOC_INT32)type;
  OOC_SymbolTable__InitTypeDecl((OOC_SymbolTable__TypeDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, (OOC_SymbolTable__Type)i6);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5309))+20);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5344)))), OOC_SymbolTable__TypeDesc_SetNamingDecl)),OOC_SymbolTable__TypeDesc_SetNamingDecl)((OOC_SymbolTable__Type)i6, (OOC_SymbolTable__TypeDecl)i0);
l4:
  return (OOC_SymbolTable__TypeDecl)i0;
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
  i6 = isParameter;
  i7 = isReceiver;
  i8 = isVarParam;
  i9 = (OOC_INT32)type;
  OOC_SymbolTable__InitVarDecl((OOC_SymbolTable__VarDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, i6, i7, i8, (OOC_SymbolTable__Type)i9);
  if (i6) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)b;
  i1 = *(OOC_INT8*)(_check_pointer(i1, 6316));
  i1 = i1==3;
  
l5:
  if (!i1) goto l7;
  *(OOC_UINT8*)((_check_pointer(i0, 6357))+55) = OOC_FALSE;
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

OOC_SymbolTable__ProcDecl OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isTypeBound, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ProcDecl.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  i6 = isTypeBound;
  i7 = isForwardDecl;
  i8 = (OOC_INT32)procAST;
  OOC_SymbolTable__InitProcDecl((OOC_SymbolTable__ProcDecl)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5, i6, i7, (OOC_AST__Node)i8);
  return (OOC_SymbolTable__ProcDecl)i0;
  ;
}

static void OOC_SymbolTable_Builder__EvalContext(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 8047));
  i0 = i0==3;
  if (!i0) goto l14;
  i0 = (OOC_INT32)type;
  *(OOC_UINT8*)((_check_pointer(i0, 8088))+30) = OOC_FALSE;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8128)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8192)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8268)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l14;
  *(OOC_UINT8*)((_check_pointer(i0, 8297))+41) = OOC_TRUE;
  goto l14;
l10:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8242))+32);
  *(OOC_UINT8*)((_check_pointer(i0, 8219))+33) = (!i1);
  goto l14;
l12:
  *(OOC_UINT8*)((_check_pointer(i0, 8156))+50) = OOC_FALSE;
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

OOC_SymbolTable__ExceptionName OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionName.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)type;
  OOC_SymbolTable__InitExceptionName((OOC_SymbolTable__ExceptionName)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_SymbolTable__ExceptionName)i0;
  ;
}

OOC_SymbolTable__FormalPars OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type resultType) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__FormalPars.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = (OOC_INT32)resultType;
  OOC_SymbolTable__InitFormalPars((OOC_SymbolTable__FormalPars)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)i3);
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
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11538)), (OOC_INT32)0);
  _copy_8((const void*)"_MODULE_BODY",(void*)(_check_pointer(i1, 11538)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, -1, -1, -1);
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11605)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i0, 0, 0, (OOC_Doc__Document)(OOC_INT32)0, OOC_FALSE, OOC_FALSE, (OOC_AST__Node)(OOC_INT32)0);
  bodyDecl = (OOC_SymbolTable__ProcDecl)i0;
  i2 = (OOC_INT32)name;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11745)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 11728))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11800))+52);
  *(OOC_INT32*)((_check_pointer(i1, 11812))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], 0));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11843))+52);
  *(OOC_INT32*)((_check_pointer(i1, 11855))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
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
      if (!i1) goto l55;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12346)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (!i1) goto l46;
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12405))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l7;
      i1=0;
      goto l25;
l7:
      i2=0;
l8_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12471)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l11;
      i3=OOC_FALSE;
      goto l13;
l11:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12513)))), &_td_OOC_SymbolTable__VarDeclDesc, 12513)), 12521))+48);
      
l13:
      if (i3) goto l15;
      i3=OOC_FALSE;
      goto l17;
l15:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12561)))), &_td_OOC_SymbolTable__VarDeclDesc, 12561)), 12569))+49);
      i3 = !i3;
      
l17:
      if (!i3) goto l20;
      i2 = i2+1;
      c = i2;
      
l20:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12648));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l8_loop;
l24:
      i1=i2;
l25:
      *(OOC_INT32*)((_check_pointer(i0, 12706))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i1));
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12759))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l46;
      i2=0;
l28_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12825)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l31;
      i3=OOC_FALSE;
      goto l33;
l31:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12866)))), &_td_OOC_SymbolTable__VarDeclDesc, 12866)), 12874))+48);
      
l33:
      if (i3) goto l35;
      i3=OOC_FALSE;
      goto l37;
l35:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12914)))), &_td_OOC_SymbolTable__VarDeclDesc, 12914)), 12922))+49);
      i3 = !i3;
      
l37:
      if (!i3) goto l40;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12958))+44);
      i3 = _check_pointer(i3, 12966);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 12966))*4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12981)))), &_td_OOC_SymbolTable__VarDeclDesc, 12981));
      i2 = i2+1;
      c = i2;
      
l40:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13052));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l28_loop;
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13133))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l55;
l49_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13232));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l49_loop;
l55:
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13607)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l3;
          return OOC_FALSE;
          goto l8;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13651))+32);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l6;
          i0=OOC_FALSE;
          goto l7;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13695))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13702))+12);
          i1 = (OOC_INT32)decl;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13715))+12);
          i0 = (
          _cmp8((const void*)(_check_pointer(i0, 13707)),(const void*)(_check_pointer(i1, 13720))))==(OOC_INT32)0;
          
l7:
          return i0;
l8:
          _failed_function(13518); return 0;
          ;
        }

        
        OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name typeName) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__TypeDecl pointerDecl;
          OOC_SymbolTable__Item ptr;

          pointerDecl = (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          i0 = (OOC_INT32)scope;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14006))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i0=(OOC_INT32)0;
          goto l25;
l3:
          i1 = (OOC_INT32)typeName;
          i2=(OOC_INT32)0;
l4_loop:
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14068)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (!i3) goto l20;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14105))+40);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14112)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i3) goto l10;
          i3=OOC_FALSE;
          goto l12;
l10:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14168))+40);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14178)))), &_td_OOC_SymbolTable__PointerDesc, 14178)), 14186))+36);
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
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14416));
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14695))+8);
          i1 = i0!=(OOC_INT32)0;
          ptr = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)pointer;
          i2 = i1!=(OOC_INT32)0;
          i3 = (OOC_INT32)record;
          
l3_loop:
          i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14757)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i4) goto l20;
          i4 = *(OOC_UINT8*)((_check_pointer(i0, 14793))+40);
          if (i4) goto l8;
          i4=OOC_FALSE;
          goto l17;
l8:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14846))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14857))+32);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14866))+44);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Type)i4);
          if (i4) goto l14;
          if (i2) goto l12;
          i4=OOC_FALSE;
          goto l17;
l12:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14955))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14966))+32);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14975))+44);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Type)i4);
          
          goto l17;
l14:
          i4=OOC_TRUE;
l17:
          if (!i4) goto l20;
          return OOC_TRUE;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15087));
          ptr = (OOC_SymbolTable__Item)i0;
          i4 = i0!=(OOC_INT32)0;
          if (i4) goto l3_loop;
l25:
          return OOC_FALSE;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15227)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l8;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16304)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i0) goto l37;
      return;
      goto l37;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15263))+40);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15270)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l37;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15392))+4);
      _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15401)))), &_td_OOC_SymbolTable__ModuleDesc)), 127, 15380);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15443))+40);
      record = (OOC_SymbolTable__Record)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15454)))), &_td_OOC_SymbolTable__RecordDesc, 15454));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15524))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15510))+4);
      i0 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1);
      pointerDecl = (OOC_SymbolTable__TypeDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      pointerName = (OOC_SymbolTable__Name)(OOC_INT32)0;
      i0=(OOC_INT32)0;
      goto l15;
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15613))+16);
      pointerName = (OOC_SymbolTable__Name)i0;
      
l15:
      if (i1) goto l21;
      i1 = (OOC_INT32)record;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15761))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l19;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15832))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15886))+16);
      i0 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_HasTypeBoundProcedures((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Name)i0);
      
      goto l23;
l19:
      i0=OOC_TRUE;
      goto l23;
l21:
      i0=OOC_TRUE;
l23:
      if (!i0) goto l37;
      i0 = (OOC_INT32)record;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15952))+16);
      i3 = (OOC_INT32)pointerName;
      *(OOC_INT32*)((_check_pointer(i0, 15933))+52) = i2;
      i2 = i3!=(OOC_INT32)0;
      if (!i2) goto l37;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16047))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16047))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16059))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16065))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16059))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16065))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16052)), (OOC_INT32)0);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16070)), (OOC_INT32)0);
      Strings__FindNext((void*)(_check_pointer(i2, 16052)), i3, (void*)(_check_pointer(i4, 16070)), i1, (OOC_INT32)0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
      i1 = found;
      if (i1) goto l29;
      i1=OOC_FALSE;
      goto l31;
l29:
      i1 = pos;
      i1 = i1==(OOC_INT32)0;
      
l31:
      if (!i1) goto l37;
      i1 = (OOC_INT32)pointerDecl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16215))+16);
      *(OOC_INT32*)((_check_pointer(i0, 16189))+52) = i1;
l37:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16433))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
l40_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16527));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l40_loop;
l46:
      return;
      ;
    }

    
    void OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports(OOC_SymbolTable__Module module, OOC_INT32 len) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
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
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16949)), (OOC_INT32)0);
          _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i1, 16949)),i2);
          i2 = prefix;
          if (!i2) goto l4;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17016)), (OOC_INT32)0);
          Strings__Insert("-", 2, (OOC_INT32)0, (void*)(_check_pointer(i1, 17016)), i2);
l4:
          OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, 0, 0, 0);
          return (OOC_SymbolTable__Name)i0;
          ;
        }


      i0 = len;
      i0 = i0-1;
      i1 = 0<=i0;
      a = 0;
      if (!i1) goto l28;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
      i3 = _check_pointer(i2, 17190);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 17190))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17193))+4);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 17201)), (OOC_INT32)0);
      i3 = i3-1;
      e = i3;
      i4 = i3>=0;
      if (i4) goto l6;
      i4=OOC_FALSE;
      goto l8;
l6:
      i4 = _check_pointer(i2, 17243);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 17243))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17246))+4);
      i4 = _check_pointer(i4, 17254);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17254))*4);
      i5 = (OOC_INT32)module;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17267))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17273))+12);
      i4 = (
      _cmp8((const void*)(_check_pointer(i4, 17257)),(const void*)(_check_pointer(i5, 17278))))!=(OOC_INT32)0;
      
l8:
      if (!i4) goto l20;
      i4 = (OOC_INT32)module;
      
l11_loop:
      i3 = i3-1;
      e = i3;
      i5 = i3>=0;
      if (i5) goto l14;
      i5=OOC_FALSE;
      goto l16;
l14:
      i5 = _check_pointer(i2, 17243);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 17243))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17246))+4);
      i5 = _check_pointer(i5, 17254);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 17254))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17267))+16);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 17273))+12);
      i5 = (
      _cmp8((const void*)(_check_pointer(i5, 17257)),(const void*)(_check_pointer(i6, 17278))))!=(OOC_INT32)0;
      
l16:
      if (i5) goto l11_loop;
l20:
      i3 = i3<0;
      if (!i3) goto l23;
      i3 = (OOC_INT32)b;
      i4 = _check_pointer(i2, 17490);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 17490))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17493));
      i2 = _check_pointer(i2, 17490);
      i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i5, OOC_UINT32, 17490))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17493));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17500)), (OOC_INT32)0);
      i2 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i4, 17500)), i1, OOC_TRUE);
      i4 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
      i5 = _check_pointer(i4, 17604);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = a;
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i7, i6, OOC_UINT32, 17604))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17607));
      i4 = _check_pointer(i4, 17604);
      i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i7, i6, OOC_UINT32, 17604))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17607));
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17614)), (OOC_INT32)0);
      i4 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i5, 17614)), i4, OOC_FALSE);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17417)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, 0, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Name)i4);
      import = (OOC_SymbolTable__Import)i1;
l23:
      i1 = a;
      i1 = i1+1;
      i2 = i1<=i0;
      a = i1;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 17758))+44);
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17914)), (OOC_INT32)0);
  OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports((OOC_SymbolTable__Module)i0, i1);
l10:
  return;
  ;
}

void OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable(OOC_SymbolTable_Builder__Builder b, Channel__Channel ch, OOC_SymbolTable__Module symTab, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object_Storage__Writer writer;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)ADT_Object_Storage__ConnectWriter((Channel__Channel)i0);
  writer = (ADT_Object_Storage__Writer)i1;
  i2 = (OOC_INT32)symTab;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18447)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i1, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18488));
  i2 = i1==(OOC_INT32)0;
  *res = (Msg__Msg)i1;
  if (!i2) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18543));
  *res = (Msg__Msg)i0;
l4:
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable(OOC_SymbolTable_Builder__Builder b, Channel__Channel ch, Msg__Msg *res) {
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
  i0 = (OOC_INT32)ADT_Object_Storage__ConnectReader((Channel__Channel)i0);
  reader = (ADT_Object_Storage__Reader)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18978)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)mn, 5, 0, 4);
  *(OOC_UINT8*)((OOC_INT32)mn+(_check_index(4, 5, OOC_UINT8, 19021))) = (OOC_CHAR8)'\000';
  i1 = (
  _cmp8((const void*)(OOC_INT32)mn,(const void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber))!=(OOC_INT32)0;
  if (!i1) goto l3;
  Out__String("Fatal error: Symbol file does not start with required magic number.", 68);
  Out__Ln();
  _halt(1);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19215)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&fp, 4, 0, 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19265)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i1);
  prunedImports = (OOC_SymbolTable__ModuleRefArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19344)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l11;
  i3=0;
l6_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19364)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i4 = len;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i4+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19414)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(_check_pointer(i5, 19428)), -1, 0, i4);
  i4 = _check_pointer(i5, 19449);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i7 = len;
  *(OOC_UINT8*)(i4+(_check_index(i7, i6, OOC_UINT32, 19449))) = (OOC_CHAR8)'\000';
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19474)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&fpi, 4, 0, 4);
  i4 = _check_pointer(i1, 19539);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 19539))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]));
  i4 = _check_pointer(i1, 19564);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 19564))*4);
  *(OOC_INT32*)(_check_pointer(i4, 19567)) = i5;
  i4 = _check_pointer(i1, 19600);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 19600))*4);
  i5 = fpi;
  *(OOC_INT32*)((_check_pointer(i4, 19603))+4) = i5;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l6_loop;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19648)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19685));
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  *res = (Msg__Msg)i0;
  if (i3) goto l14;
  i0 = fp;
  *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19756)))), &_td_OOC_SymbolTable__ModuleDesc, 19756)), 19763))+60) = i0;
  *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19797)))), &_td_OOC_SymbolTable__ModuleDesc, 19797)), 19804))+64) = i1;
  return (OOC_SymbolTable__Module)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19858)))), &_td_OOC_SymbolTable__ModuleDesc, 19858));
  goto l15;
l14:
  return (OOC_SymbolTable__Module)(OOC_INT32)0;
l15:
  _failed_function(18605); return 0;
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20061)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 20061)),i1);
  return (OOC_SymbolTable_Builder__Name)i0;
  ;
}

void OOC_OOC_SymbolTable_Builder_init(void) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  OOC_SymbolTable_Builder__doAutoImport = 0;
  _copy_8((const void*)"OOC4",(void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber,5);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2845.baseTypes[0], 2);
  OOC_SymbolTable_Builder__autoImport = (void*)i0;
  i1 = _check_pointer(i0, 20196);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 20196))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 20214);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 20214))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("RT0", 4);
  *(OOC_INT32*)(_check_pointer(i0, 20217)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 20255);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 20255))*4);
  *(OOC_INT32*)((_check_pointer(i1, 20258))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2170.baseTypes[0], 2));
  i1 = _check_pointer(i0, 20284);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 20284))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20287))+4);
  i1 = _check_pointer(i1, 20295);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = _check_pointer(i0, 20312);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 20312))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20315));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 20295))*4) = i3;
  i0 = _check_pointer(i0, 20336);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 20336))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20339))+4);
  i0 = _check_pointer(i0, 20347);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 20347))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 20381);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20381))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 20399);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 20399))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("Object", 7);
  *(OOC_INT32*)(_check_pointer(i0, 20402)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 20447);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20447))*4);
  *(OOC_INT32*)((_check_pointer(i1, 20450))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2170.baseTypes[0], 3));
  i1 = _check_pointer(i0, 20476);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20476))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20479))+4);
  i1 = _check_pointer(i1, 20487);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = _check_pointer(i0, 20504);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 20504))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20507));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 20487))*4) = i3;
  i1 = _check_pointer(i0, 20528);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20528))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20531))+4);
  i1 = _check_pointer(i1, 20539);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = _check_pointer(i0, 20556);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 20556))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20559));
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20539))*4) = i3;
  i0 = _check_pointer(i0, 20580);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 20580))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20583))+4);
  i0 = _check_pointer(i0, 20591);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 20591))*4) = i2;
  return;
  ;
}

/* --- */
