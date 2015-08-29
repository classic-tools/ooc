#include <OOC/SymbolTable/Builder.d>
#include <__oo2c.h>

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
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11251)), (OOC_INT32)0);
  _copy_8((const void*)"_MODULE_BODY",(void*)(_check_pointer(i1, 11251)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, -1, -1, -1);
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11318)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i0, 0, 0, (OOC_Doc__Document)(OOC_INT32)0, OOC_FALSE, OOC_FALSE, (OOC_AST__Node)(OOC_INT32)0);
  bodyDecl = (OOC_SymbolTable__ProcDecl)i0;
  i2 = (OOC_INT32)name;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11458)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 11441))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11513))+52);
  *(OOC_INT32*)((_check_pointer(i1, 11525))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], 0));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12016)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (!i1) goto l46;
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12075))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l7;
      i1=0;
      goto l25;
l7:
      i2=0;
l8_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12141)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l11;
      i3=OOC_FALSE;
      goto l13;
l11:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12183)))), &_td_OOC_SymbolTable__VarDeclDesc, 12183)), 12191))+48);
      
l13:
      if (i3) goto l15;
      i3=OOC_FALSE;
      goto l17;
l15:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12231)))), &_td_OOC_SymbolTable__VarDeclDesc, 12231)), 12239))+49);
      i3 = !i3;
      
l17:
      if (!i3) goto l20;
      i2 = i2+1;
      c = i2;
      
l20:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12318));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l8_loop;
l24:
      i1=i2;
l25:
      *(OOC_INT32*)((_check_pointer(i0, 12376))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i1));
      c = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12429))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l46;
      i2=0;
l28_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12495)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i3) goto l31;
      i3=OOC_FALSE;
      goto l33;
l31:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12536)))), &_td_OOC_SymbolTable__VarDeclDesc, 12536)), 12544))+48);
      
l33:
      if (i3) goto l35;
      i3=OOC_FALSE;
      goto l37;
l35:
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12584)))), &_td_OOC_SymbolTable__VarDeclDesc, 12584)), 12592))+49);
      i3 = !i3;
      
l37:
      if (!i3) goto l40;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12628))+44);
      i3 = _check_pointer(i3, 12636);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 12636))*4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12651)))), &_td_OOC_SymbolTable__VarDeclDesc, 12651));
      i2 = i2+1;
      c = i2;
      
l40:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12722));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l28_loop;
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12803))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l55;
l49_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_CollectFormalPars((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12902));
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13277)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l3;
          return OOC_FALSE;
          goto l8;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13321))+32);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l6;
          i0=OOC_FALSE;
          goto l7;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13365))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13372))+12);
          i1 = (OOC_INT32)decl;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13385))+12);
          i0 = (
          _cmp8((const void*)(_check_pointer(i0, 13377)),(const void*)(_check_pointer(i1, 13390))))==(OOC_INT32)0;
          
l7:
          return i0;
l8:
          _failed_function(13188); return 0;
          ;
        }

        
        OOC_SymbolTable__TypeDecl OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl(OOC_SymbolTable__Item scope, OOC_SymbolTable__Name typeName) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__TypeDecl pointerDecl;
          OOC_SymbolTable__Item ptr;

          pointerDecl = (OOC_SymbolTable__TypeDecl)(OOC_INT32)0;
          i0 = (OOC_INT32)scope;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13676))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i0=(OOC_INT32)0;
          goto l25;
l3:
          i1 = (OOC_INT32)typeName;
          i2=(OOC_INT32)0;
l4_loop:
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13738)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (!i3) goto l20;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13775))+40);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13782)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i3) goto l10;
          i3=OOC_FALSE;
          goto l12;
l10:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13838))+40);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13848)))), &_td_OOC_SymbolTable__PointerDesc, 13848)), 13856))+36);
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
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14086));
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14365))+8);
          i1 = i0!=(OOC_INT32)0;
          ptr = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)pointer;
          i2 = i1!=(OOC_INT32)0;
          i3 = (OOC_INT32)record;
          
l3_loop:
          i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14427)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i4) goto l20;
          i4 = *(OOC_UINT8*)((_check_pointer(i0, 14463))+40);
          if (i4) goto l8;
          i4=OOC_FALSE;
          goto l17;
l8:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14516))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14527))+32);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14536))+44);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Type)i4);
          if (i4) goto l14;
          if (i2) goto l12;
          i4=OOC_FALSE;
          goto l17;
l12:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14625))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14636))+32);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14645))+44);
          i4 = OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_SameType((OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Type)i4);
          
          goto l17;
l14:
          i4=OOC_TRUE;
l17:
          if (!i4) goto l20;
          return OOC_TRUE;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14757));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14897)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l8;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15974)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i0) goto l37;
      return;
      goto l37;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14933))+40);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14940)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l37;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15062))+4);
      _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15071)))), &_td_OOC_SymbolTable__ModuleDesc)), 127, 15050);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15113))+40);
      record = (OOC_SymbolTable__Record)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15124)))), &_td_OOC_SymbolTable__RecordDesc, 15124));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15194))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15180))+4);
      i0 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName_GetPointerDecl((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1);
      pointerDecl = (OOC_SymbolTable__TypeDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      pointerName = (OOC_SymbolTable__Name)(OOC_INT32)0;
      i0=(OOC_INT32)0;
      goto l15;
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15283))+16);
      pointerName = (OOC_SymbolTable__Name)i0;
      
l15:
      if (i1) goto l21;
      i1 = (OOC_INT32)record;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15431))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l19;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15502))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15556))+16);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15622))+16);
      i3 = (OOC_INT32)pointerName;
      *(OOC_INT32*)((_check_pointer(i0, 15603))+52) = i2;
      i2 = i3!=(OOC_INT32)0;
      if (!i2) goto l37;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15717))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15717))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15729))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15735))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15729))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15735))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15722)), (OOC_INT32)0);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15740)), (OOC_INT32)0);
      Strings__FindNext((void*)(_check_pointer(i2, 15722)), i3, (void*)(_check_pointer(i4, 15740)), i1, (OOC_INT32)0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15885))+16);
      *(OOC_INT32*)((_check_pointer(i0, 15859))+52) = i1;
l37:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16103))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
l40_loop:
      OOC_SymbolTable_Builder__BuilderDesc_Finalize_SetClassName((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16197));
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
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16619)), (OOC_INT32)0);
          _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i1, 16619)),i2);
          i2 = prefix;
          if (!i2) goto l4;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16686)), (OOC_INT32)0);
          Strings__Insert("-", 2, (OOC_INT32)0, (void*)(_check_pointer(i1, 16686)), i2);
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
      i3 = _check_pointer(i2, 16860);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 16860))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16863))+4);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16871)), (OOC_INT32)0);
      i3 = i3-1;
      e = i3;
      i4 = i3>=0;
      if (i4) goto l6;
      i4=OOC_FALSE;
      goto l8;
l6:
      i4 = _check_pointer(i2, 16913);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 16913))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16916))+4);
      i4 = _check_pointer(i4, 16924);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 16924))*4);
      i5 = (OOC_INT32)module;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16937))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16943))+12);
      i4 = (
      _cmp8((const void*)(_check_pointer(i4, 16927)),(const void*)(_check_pointer(i5, 16948))))!=(OOC_INT32)0;
      
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
      i5 = _check_pointer(i2, 16913);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 16913))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16916))+4);
      i5 = _check_pointer(i5, 16924);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 16924))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16937))+16);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16943))+12);
      i5 = (
      _cmp8((const void*)(_check_pointer(i5, 16927)),(const void*)(_check_pointer(i6, 16948))))!=(OOC_INT32)0;
      
l16:
      if (i5) goto l11_loop;
l20:
      i3 = i3<0;
      if (!i3) goto l23;
      i3 = (OOC_INT32)b;
      i4 = _check_pointer(i2, 17160);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 17160))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17163));
      i2 = _check_pointer(i2, 17160);
      i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i5, OOC_UINT32, 17160))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17163));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17170)), (OOC_INT32)0);
      i2 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i4, 17170)), i1, OOC_TRUE);
      i4 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
      i5 = _check_pointer(i4, 17274);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = a;
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i7, i6, OOC_UINT32, 17274))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17277));
      i4 = _check_pointer(i4, 17274);
      i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i7, i6, OOC_UINT32, 17274))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17277));
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17284)), (OOC_INT32)0);
      i4 = (OOC_INT32)OOC_SymbolTable_Builder__BuilderDesc_Finalize_AddAutoImports_GetName((void*)(_check_pointer(i5, 17284)), i4, OOC_FALSE);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17087)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i1, 0, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Name)i4);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 17428))+44);
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17584)), (OOC_INT32)0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18117)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i1, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18158));
  i2 = i1==(OOC_INT32)0;
  *res = (Msg__Msg)i1;
  if (!i2) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18213));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18648)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)mn, 5, 0, 4);
  *(OOC_UINT8*)((OOC_INT32)mn+(_check_index(4, 5, OOC_UINT8, 18691))) = (OOC_CHAR8)'\000';
  i1 = (
  _cmp8((const void*)(OOC_INT32)mn,(const void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber))!=(OOC_INT32)0;
  if (!i1) goto l3;
  Out__String("Fatal error: Symbol file does not start with required magic number.", 68);
  Out__Ln();
  _halt(1);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18885)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&fp, 4, 0, 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18935)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i1);
  prunedImports = (OOC_SymbolTable__ModuleRefArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19014)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l11;
  i3=0;
l6_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19034)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i4 = len;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i4+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19084)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(_check_pointer(i5, 19098)), -1, 0, i4);
  i4 = _check_pointer(i5, 19119);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i7 = len;
  *(OOC_UINT8*)(i4+(_check_index(i7, i6, OOC_UINT32, 19119))) = (OOC_CHAR8)'\000';
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19144)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&fpi, 4, 0, 4);
  i4 = _check_pointer(i1, 19209);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 19209))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]));
  i4 = _check_pointer(i1, 19234);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 19234))*4);
  *(OOC_INT32*)(_check_pointer(i4, 19237)) = i5;
  i4 = _check_pointer(i1, 19270);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 19270))*4);
  i5 = fpi;
  *(OOC_INT32*)((_check_pointer(i4, 19273))+4) = i5;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l6_loop;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19318)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19355));
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  *res = (Msg__Msg)i0;
  if (i3) goto l14;
  i0 = fp;
  *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19426)))), &_td_OOC_SymbolTable__ModuleDesc, 19426)), 19433))+60) = i0;
  *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19467)))), &_td_OOC_SymbolTable__ModuleDesc, 19467)), 19474))+64) = i1;
  return (OOC_SymbolTable__Module)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19528)))), &_td_OOC_SymbolTable__ModuleDesc, 19528));
  goto l15;
l14:
  return (OOC_SymbolTable__Module)(OOC_INT32)0;
l15:
  _failed_function(18275); return 0;
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19731)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 19731)),i1);
  return (OOC_SymbolTable_Builder__Name)i0;
  ;
}

void OOC_OOC_SymbolTable_Builder_init(void) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  OOC_SymbolTable_Builder__doAutoImport = 0;
  _copy_8((const void*)"OOC3",(void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber,5);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2845.baseTypes[0], 2);
  OOC_SymbolTable_Builder__autoImport = (void*)i0;
  i1 = _check_pointer(i0, 19866);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 19866))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 19884);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 19884))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("RT0", 4);
  *(OOC_INT32*)(_check_pointer(i0, 19887)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 19925);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 19925))*4);
  *(OOC_INT32*)((_check_pointer(i1, 19928))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2170.baseTypes[0], 2));
  i1 = _check_pointer(i0, 19954);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 19954))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19957))+4);
  i1 = _check_pointer(i1, 19965);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = _check_pointer(i0, 19982);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 19982))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19985));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 19965))*4) = i3;
  i0 = _check_pointer(i0, 20006);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 20006))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20009))+4);
  i0 = _check_pointer(i0, 20017);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 20017))*4) = i2;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 20051);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20051))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__AutoImport.baseTypes[0]));
  i0 = _check_pointer(i0, 20069);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 20069))*4);
  i1 = (OOC_INT32)OOC_SymbolTable_Builder__N("Object", 7);
  *(OOC_INT32*)(_check_pointer(i0, 20072)) = i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__autoImport;
  i1 = _check_pointer(i0, 20117);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20117))*4);
  *(OOC_INT32*)((_check_pointer(i1, 20120))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_Builder__2170.baseTypes[0], 3));
  i1 = _check_pointer(i0, 20146);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20146))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20149))+4);
  i1 = _check_pointer(i1, 20157);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = _check_pointer(i0, 20174);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 20174))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20177));
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 20157))*4) = i3;
  i1 = _check_pointer(i0, 20198);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20198))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20201))+4);
  i1 = _check_pointer(i1, 20209);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = _check_pointer(i0, 20226);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 20226))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20229));
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 20209))*4) = i3;
  i0 = _check_pointer(i0, 20250);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 20250))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20253))+4);
  i0 = _check_pointer(i0, 20261);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__N("Out0", 5);
  *(OOC_INT32*)(i0+(_check_index(2, i1, OOC_UINT8, 20261))*4) = i2;
  return;
  ;
}

/* --- */
