#include <OOC/AST/ExtTree.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_AST_ExtTree__NodeDesc_Accept(OOC_AST_ExtTree__Node node, OOC_AST_ExtTree__Visitor v) {

  return;
  ;
}

void OOC_AST_ExtTree__InitVisitor(OOC_AST_ExtTree__Visitor v) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitNodeList(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__NodeList nl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)nl;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 11310));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11333))+4);
  i4 = _check_pointer(i4, 11336);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11336))*4);
  i4 = i4!=0;
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11362))+4);
  i4 = _check_pointer(i4, 11365);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11365))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11362))+4);
  i5 = _check_pointer(i5, 11365);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 11365))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11369)))), &_td_OOC_AST_ExtTree__NodeDesc, 11369)), 11374)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11369)))), &_td_OOC_AST_ExtTree__NodeDesc, 11369)), (OOC_AST_ExtTree__Visitor)i2);
l6:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitTerminal(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Terminal terminal) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitIdentDef(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__IdentDef identDef) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ModuleIdent moduleIdent) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitArrayType(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ArrayType arrayType) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitFieldList(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__FieldList fieldList) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitRecordType(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__RecordType recordType) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitPointerType(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitFPSection(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__FPSection fpSection) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitFormalPars(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__FormalPars formalPars) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitProcType(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ProcType procType) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitImportDecl(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ImportDecl importDecl) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__TypeDecl typeDecl) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitVarDecl(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__VarDecl varDecl) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitReceiver(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Receiver receiver) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitProcDecl(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ProcDecl procDecl) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitImportList(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ImportList importList) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitBody(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Body body) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitModule(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Module module) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitOperator(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Operator _operator) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitFactor(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Factor factor) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitSet(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Set set) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ArrayIndex arrayIndex) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__FunctionCall functionCall) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitAssignment(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Assignment assignment) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ProcedureCall procedureCall) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitIfStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__IfStatm ifStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__CaseStatm caseStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__WhileStatm whileStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__RepeatStatm repeatStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitForStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ForStatm forStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__LoopStatm loopStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitWithStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__WithStatm withStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitExitStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ExitStatm exitStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ReturnStatm returnStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitTryStatm(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__TryStatm tryStatm) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitFlags(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Flags flags) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ProcIdFlag procIdFlag) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__ModuleFlags moduleFlags) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__LinkFileFlag linkFileFlag) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__LinkObjFlag linkObjFlag) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__LinkLibFlag linkLibFlag) {

  return;
  ;
}

void OOC_AST_ExtTree__Init(OOC_AST_ExtTree__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  OOC_AST__InitBuilder((OOC_AST__Builder)i0);
  return;
  ;
}

OOC_AST_ExtTree__Builder OOC_AST_ExtTree__New(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Builder.baseTypes[0]);
  OOC_AST_ExtTree__Init((OOC_AST_ExtTree__Builder)i0);
  return (OOC_AST_ExtTree__Builder)i0;
  ;
}

OOC_AST_ExtTree__NodeList OOC_AST_ExtTree__BuilderDesc_NewNodeList(OOC_AST_ExtTree__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__NodeList.baseTypes[0]);
  OOC_AST__InitNodeList((OOC_AST__NodeList)i0);
  return (OOC_AST_ExtTree__NodeList)i0;
  ;
}

void OOC_AST_ExtTree__NodeListDesc_Accept(OOC_AST_ExtTree__NodeList nl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)nl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15561)))), OOC_AST_ExtTree__VisitorDesc_VisitNodeList)),OOC_AST_ExtTree__VisitorDesc_VisitNodeList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__NodeList)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Terminal(OOC_AST_ExtTree__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Terminal t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Terminal.baseTypes[0]);
  t = (OOC_AST_ExtTree__Terminal)i0;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 15711)) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TerminalDesc_Accept(OOC_AST_ExtTree__Terminal terminal, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)terminal;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15821)))), OOC_AST_ExtTree__VisitorDesc_VisitTerminal)),OOC_AST_ExtTree__VisitorDesc_VisitTerminal)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Terminal)i1);
  return;
  ;
}

Object__String OOC_AST_ExtTree__TerminalDesc_GetString(OOC_AST_ExtTree__Terminal terminal, OOC_CHAR8 stripQuotes) {
  register OOC_INT32 i0,i1,i2;

  i0 = stripQuotes;
  if (i0) goto l3;
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16131));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16136))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16131));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16136))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16141)), 0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 16141)), i0);
  return (Object__String)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16014));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16019))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16014));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16019))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16069));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 16074))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16024)), 0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i1, 16024)), i2, 1, (i0-1));
  return (Object__String)i0;
l4:
  _failed_function(15894); return 0;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_IdentDef(OOC_AST_ExtTree__Builder b, OOC_AST__Node ident, OOC_AST__Node mark) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__IdentDef id;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__IdentDef.baseTypes[0]);
  id = (OOC_AST_ExtTree__IdentDef)i0;
  i1 = (OOC_INT32)ident;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 16359)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 16315)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16332)))), &_td_OOC_AST_ExtTree__TerminalDesc, 16332));
l4:
  i1 = (OOC_INT32)mark;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 16458))+4) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 16416))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16431)))), &_td_OOC_AST_ExtTree__TerminalDesc, 16431));
l8:
  *(OOC_INT32*)((_check_pointer(i0, 16487))+8) = (OOC_INT32)0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IdentDefDesc_AttachDocString(OOC_AST_ExtTree__IdentDef identDef, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)identDef;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16637))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 16729))+8) = i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16675))+8);
  i1 = (OOC_INT32)docString;
  OOC_Doc__DocumentDesc_Merge((OOC_Doc__Document)i0, (OOC_Doc__Document)i1);
l4:
  return;
  ;
}

void OOC_AST_ExtTree__IdentDefDesc_Accept(OOC_AST_ExtTree__IdentDef identDef, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)identDef;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16852)))), OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)),OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IdentDef)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ModuleIdent(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList nameList) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleIdent moduleIdent;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleIdent.baseTypes[0]);
  moduleIdent = (OOC_AST_ExtTree__ModuleIdent)i0;
  i1 = (OOC_INT32)nameList;
  *(OOC_INT32*)(_check_pointer(i0, 17045)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 17084))+4) = 0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleIdentDesc_AttachDocString(OOC_AST_ExtTree__ModuleIdent moduleIdent, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)moduleIdent;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17255))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 17353))+4) = i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17296))+4);
  i1 = (OOC_INT32)docString;
  OOC_Doc__DocumentDesc_Merge((OOC_Doc__Document)i0, (OOC_Doc__Document)i1);
l4:
  return;
  ;
}

void OOC_AST_ExtTree__ModuleIdentDesc_Accept(OOC_AST_ExtTree__ModuleIdent moduleIdent, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleIdent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17482)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)),OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleIdent)i1);
  return;
  ;
}

static void OOC_AST_ExtTree__InitType(OOC_AST_ExtTree__Type t) {

  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ArrayType(OOC_AST_ExtTree__Builder b, OOC_AST__Node array, OOC_AST__Node flags, OOC_AST__NodeList exprList, OOC_AST__Node of, OOC_AST__Node type) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ArrayType at;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ArrayType.baseTypes[0]);
  at = (OOC_AST_ExtTree__ArrayType)i0;
  OOC_AST_ExtTree__InitType((OOC_AST_ExtTree__Type)i0);
  i1 = (OOC_INT32)array;
  *(OOC_INT32*)(_check_pointer(i0, 17768)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 17862))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 17820))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17837)))), &_td_OOC_AST_ExtTree__FlagsDesc, 17837));
l4:
  i1 = (OOC_INT32)exprList;
  *(OOC_INT32*)((_check_pointer(i0, 17893))+8) = i1;
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 17923))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 17941))+16) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayTypeDesc_Accept(OOC_AST_ExtTree__ArrayType arrayType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18057)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayType)),OOC_AST_ExtTree__VisitorDesc_VisitArrayType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FieldList(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FieldList fl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FieldList.baseTypes[0]);
  fl = (OOC_AST_ExtTree__FieldList)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 18245)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 18277))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 18301))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FieldListDesc_Accept(OOC_AST_ExtTree__FieldList fieldList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fieldList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18417)))), OOC_AST_ExtTree__VisitorDesc_VisitFieldList)),OOC_AST_ExtTree__VisitorDesc_VisitFieldList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FieldList)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_RecordType(OOC_AST_ExtTree__Builder b, OOC_AST__Node record, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__Node baseType, OOC_AST__Node rParen, OOC_AST__NodeList fieldLists, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__RecordType rt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__RecordType.baseTypes[0]);
  rt = (OOC_AST_ExtTree__RecordType)i0;
  OOC_AST_ExtTree__InitType((OOC_AST_ExtTree__Type)i0);
  i1 = (OOC_INT32)record;
  *(OOC_INT32*)(_check_pointer(i0, 18670)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18766))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 18724))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18741)))), &_td_OOC_AST_ExtTree__FlagsDesc, 18741));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 18797))+8) = i1;
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 18823))+12) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 18853))+16) = i1;
  i1 = (OOC_INT32)fieldLists;
  *(OOC_INT32*)((_check_pointer(i0, 18879))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 18913))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RecordTypeDesc_Accept(OOC_AST_ExtTree__RecordType recordType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)recordType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19030)))), OOC_AST_ExtTree__VisitorDesc_VisitRecordType)),OOC_AST_ExtTree__VisitorDesc_VisitRecordType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RecordType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_PointerType(OOC_AST_ExtTree__Builder b, OOC_AST__Node pointer, OOC_AST__Node flags, OOC_AST__Node to, OOC_AST__Node type) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__PointerType pt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__PointerType.baseTypes[0]);
  pt = (OOC_AST_ExtTree__PointerType)i0;
  OOC_AST_ExtTree__InitType((OOC_AST_ExtTree__Type)i0);
  i1 = (OOC_INT32)pointer;
  *(OOC_INT32*)(_check_pointer(i0, 19231)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 19329))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 19287))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19304)))), &_td_OOC_AST_ExtTree__FlagsDesc, 19304));
l4:
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 19360))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19378))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__PointerTypeDesc_Accept(OOC_AST_ExtTree__PointerType pointerType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)pointerType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19500)))), OOC_AST_ExtTree__VisitorDesc_VisitPointerType)),OOC_AST_ExtTree__VisitorDesc_VisitPointerType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__PointerType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FPSection(OOC_AST_ExtTree__Builder b, OOC_AST__Node var, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FPSection fp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FPSection.baseTypes[0]);
  fp = (OOC_AST_ExtTree__FPSection)i0;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)(_check_pointer(i0, 19707)) = i1;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)((_check_pointer(i0, 19727))+4) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 19759))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19783))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FPSectionDesc_Accept(OOC_AST_ExtTree__FPSection fpSection, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fpSection;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19899)))), OOC_AST_ExtTree__VisitorDesc_VisitFPSection)),OOC_AST_ExtTree__VisitorDesc_VisitFPSection)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FPSection)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FormalPars(OOC_AST_ExtTree__Builder b, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__NodeList fpSections, OOC_AST__Node rParen, OOC_AST__Node colon, OOC_AST__Node result, OOC_AST__Node raises, OOC_AST__NodeList raisesList) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__FormalPars fp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FormalPars.baseTypes[0]);
  fp = (OOC_AST_ExtTree__FormalPars)i0;
  i1 = (OOC_INT32)flags;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 20229)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 20187)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20204)))), &_td_OOC_AST_ExtTree__FlagsDesc, 20204));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 20260))+4) = i1;
  i1 = (OOC_INT32)fpSections;
  *(OOC_INT32*)((_check_pointer(i0, 20286))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 20320))+12) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 20346))+16) = i1;
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 20370))+20) = i1;
  i1 = (OOC_INT32)raises;
  *(OOC_INT32*)((_check_pointer(i0, 20396))+24) = i1;
  i1 = (OOC_INT32)raisesList;
  *(OOC_INT32*)((_check_pointer(i0, 20422))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FormalParsDesc_Accept(OOC_AST_ExtTree__FormalPars formalPars, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)formalPars;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20555)))), OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)),OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FormalPars)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcType(OOC_AST_ExtTree__Builder b, OOC_AST__Node procedure, OOC_AST__Node formalPars) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcType pt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcType.baseTypes[0]);
  pt = (OOC_AST_ExtTree__ProcType)i0;
  OOC_AST_ExtTree__InitType((OOC_AST_ExtTree__Type)i0);
  i1 = (OOC_INT32)procedure;
  *(OOC_INT32*)(_check_pointer(i0, 20747)) = i1;
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 20779))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcTypeDesc_Accept(OOC_AST_ExtTree__ProcType procType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20904)))), OOC_AST_ExtTree__VisitorDesc_VisitProcType)),OOC_AST_ExtTree__VisitorDesc_VisitProcType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node alias, OOC_AST__Node becomes, OOC_AST__Node module, OOC_Scanner_InputBuffer__CharArray moduleName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportDecl id;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportDecl.baseTypes[0]);
  id = (OOC_AST_ExtTree__ImportDecl)i0;
  i1 = (OOC_INT32)alias;
  *(OOC_INT32*)(_check_pointer(i0, 21137)) = i1;
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 21161))+4) = i1;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 21189))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21208)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 21208));
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 21228))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportDeclDesc_Accept(OOC_AST_ExtTree__ImportDecl importDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21359)))), OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)),OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ConstDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node equal, OOC_AST__Node expr, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ConstDecl cd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ConstDecl.baseTypes[0]);
  cd = (OOC_AST_ExtTree__ConstDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 21545)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21568)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 21568));
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 21585))+4) = i1;
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 21609))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 21631))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ConstDeclDesc_Accept(OOC_AST_ExtTree__ConstDecl constDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)constDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21757)))), OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)),OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ConstDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TypeDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node equal, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TypeDecl td;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TypeDecl.baseTypes[0]);
  td = (OOC_AST_ExtTree__TypeDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 21939)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21962)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 21962));
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 21979))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 22003))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 22025))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TypeDeclDesc_Accept(OOC_AST_ExtTree__TypeDecl typeDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typeDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22148)))), OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)),OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TypeDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_VarDecl(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__VarDecl vd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__VarDecl.baseTypes[0]);
  vd = (OOC_AST_ExtTree__VarDecl)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 22341)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 22373))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 22397))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 22419))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__VarDeclDesc_Accept(OOC_AST_ExtTree__VarDecl varDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)varDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22539)))), OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)),OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__VarDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Receiver(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node var, OOC_AST__Node ident, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Receiver r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Receiver.baseTypes[0]);
  r = (OOC_AST_ExtTree__Receiver)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 22721)) = i1;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 22746))+4) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 22765))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22782)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 22782));
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 22798))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 22821))+16) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 22842))+20) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReceiverDesc_Accept(OOC_AST_ExtTree__Receiver receiver, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)receiver;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22958)))), OOC_AST_ExtTree__VisitorDesc_VisitReceiver)),OOC_AST_ExtTree__VisitorDesc_VisitReceiver)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Receiver)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node proc, OOC_AST__Node arrow, OOC_AST__Node receiver, OOC_AST__Node flags, OOC_AST__Node identDef, OOC_AST__Node formalPars, OOC_AST__Node semicolon1, OOC_AST__Node body, OOC_AST__Node semicolon2) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ProcDecl pd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcDecl.baseTypes[0]);
  pd = (OOC_AST_ExtTree__ProcDecl)i0;
  i1 = (OOC_INT32)proc;
  *(OOC_INT32*)(_check_pointer(i0, 23253)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23268)))), &_td_OOC_AST_ExtTree__TerminalDesc, 23268));
  i1 = (OOC_INT32)arrow;
  *(OOC_INT32*)((_check_pointer(i0, 23285))+4) = i1;
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i0, 23309))+8) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 23409))+12) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 23367))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23384)))), &_td_OOC_AST_ExtTree__FlagsDesc, 23384));
l4:
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)((_check_pointer(i0, 23440))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23463)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 23463));
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 23480))+20) = i1;
  i1 = (OOC_INT32)semicolon1;
  *(OOC_INT32*)((_check_pointer(i0, 23514))+24) = i1;
  i1 = (OOC_INT32)body;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 23606))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23621)))), &_td_OOC_AST_ExtTree__BodyDesc, 23621));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 23575))+28) = 0;
l8:
  i1 = (OOC_INT32)semicolon2;
  *(OOC_INT32*)((_check_pointer(i0, 23642))+32) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcDeclDesc_Accept(OOC_AST_ExtTree__ProcDecl procDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23767)))), OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)),OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportList(OOC_AST_ExtTree__Builder b, OOC_AST__Node import, OOC_AST__NodeList imports, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportList.baseTypes[0]);
  il = (OOC_AST_ExtTree__ImportList)i0;
  i1 = (OOC_INT32)import;
  *(OOC_INT32*)(_check_pointer(i0, 24000)) = i1;
  i1 = (OOC_INT32)imports;
  *(OOC_INT32*)((_check_pointer(i0, 24026))+4) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 24054))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportListDesc_Accept(OOC_AST_ExtTree__ImportList importList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24183)))), OOC_AST_ExtTree__VisitorDesc_VisitImportList)),OOC_AST_ExtTree__VisitorDesc_VisitImportList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportList)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Body(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList declSeq, OOC_AST__Node begin, OOC_AST__NodeList statmSeq, OOC_AST__Node end, OOC_AST__Node name) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Body body;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Body.baseTypes[0]);
  body = (OOC_AST_ExtTree__Body)i0;
  i1 = (OOC_INT32)declSeq;
  *(OOC_INT32*)(_check_pointer(i0, 24471)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24492)))), &_td_OOC_AST_ExtTree__NodeListDesc, 24492));
  i1 = (OOC_INT32)begin;
  *(OOC_INT32*)((_check_pointer(i0, 24511))+4) = i1;
  i1 = (OOC_INT32)statmSeq;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24606))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24629)))), &_td_OOC_AST_ExtTree__NodeListDesc, 24629));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24568))+8) = 0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 24656))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24669)))), &_td_OOC_AST_ExtTree__TerminalDesc, 24669));
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 24688))+16) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__BodyDesc_Accept(OOC_AST_ExtTree__Body body, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)body;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24791)))), OOC_AST_ExtTree__VisitorDesc_VisitBody)),OOC_AST_ExtTree__VisitorDesc_VisitBody)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Body)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Module(OOC_AST_ExtTree__Builder b, OOC_AST__Node module, OOC_AST__Node name, OOC_AST__Node flags, OOC_AST__Node semicolon, OOC_AST__Node importList, OOC_AST__Node body, OOC_AST__Node period, OOC_Scanner_InputBuffer__CharArray moduleName) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Module m;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Module.baseTypes[0]);
  m = (OOC_AST_ExtTree__Module)i0;
  i1 = (OOC_INT32)module;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 25101)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25120)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25120));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 25069)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 25144))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25159)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 25159));
  i1 = (OOC_INT32)flags;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 25246))+8) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 25206))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25223)))), &_td_OOC_AST_ExtTree__FlagsDesc, 25223));
l8:
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 25275))+12) = i1;
  i1 = (OOC_INT32)importList;
  *(OOC_INT32*)((_check_pointer(i0, 25306))+16) = i1;
  i1 = (OOC_INT32)body;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 25403))+20) = (OOC_INT32)0;
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 25366))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25381)))), &_td_OOC_AST_ExtTree__BodyDesc, 25381));
l12:
  i1 = (OOC_INT32)period;
  *(OOC_INT32*)((_check_pointer(i0, 25431))+24) = i1;
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 25456))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleDesc_Accept(OOC_AST_ExtTree__Module module, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25574)))), OOC_AST_ExtTree__VisitorDesc_VisitModule)),OOC_AST_ExtTree__VisitorDesc_VisitModule)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Module)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Operator(OOC_AST_ExtTree__Builder b, OOC_AST__Node left, OOC_AST__Node op, OOC_AST__Node right) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Operator o;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Operator.baseTypes[0]);
  o = (OOC_AST_ExtTree__Operator)i0;
  i1 = (OOC_INT32)left;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 25788)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25803)))), &_td_OOC_AST_ExtTree__NodeDesc, 25803));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 25758)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)op;
  *(OOC_INT32*)((_check_pointer(i0, 25823))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25834)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25834));
  i1 = (OOC_INT32)right;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 25909))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25926)))), &_td_OOC_AST_ExtTree__NodeDesc, 25926));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 25878))+8) = (OOC_INT32)0;
l8:
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__OperatorDesc_Accept(OOC_AST_ExtTree__Operator _operator, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_operator;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26037)))), OOC_AST_ExtTree__VisitorDesc_VisitOperator)),OOC_AST_ExtTree__VisitorDesc_VisitOperator)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Operator)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Factor(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node expr, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Factor f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Factor.baseTypes[0]);
  f = (OOC_AST_ExtTree__Factor)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 26198)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26217)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26217));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 26233))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26248)))), &_td_OOC_AST_ExtTree__NodeDesc, 26248));
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 26260))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26279)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26279));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FactorDesc_Accept(OOC_AST_ExtTree__Factor factor, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)factor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26380)))), OOC_AST_ExtTree__VisitorDesc_VisitFactor)),OOC_AST_ExtTree__VisitorDesc_VisitFactor)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Factor)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Set(OOC_AST_ExtTree__Builder b, OOC_AST__Node type, OOC_AST__Node lBrace, OOC_AST__NodeList elementList, OOC_AST__Node rBrace) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Set s;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Set.baseTypes[0]);
  s = (OOC_AST_ExtTree__Set)i0;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)(_check_pointer(i0, 26568)) = i1;
  i1 = (OOC_INT32)lBrace;
  *(OOC_INT32*)((_check_pointer(i0, 26589))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26608)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26608));
  i1 = (OOC_INT32)elementList;
  *(OOC_INT32*)((_check_pointer(i0, 26624))+8) = i1;
  i1 = (OOC_INT32)rBrace;
  *(OOC_INT32*)((_check_pointer(i0, 26659))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26678)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26678));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__SetDesc_Accept(OOC_AST_ExtTree__Set set, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)set;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26770)))), OOC_AST_ExtTree__VisitorDesc_VisitSet)),OOC_AST_ExtTree__VisitorDesc_VisitSet)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Set)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ArrayIndex(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lBrak, OOC_AST__NodeList indices, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ArrayIndex ai;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ArrayIndex.baseTypes[0]);
  ai = (OOC_AST_ExtTree__ArrayIndex)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 26965)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26984)))), &_td_OOC_AST_ExtTree__NodeDesc, 26984));
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 26997))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27014)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27014));
  i1 = (OOC_INT32)indices;
  *(OOC_INT32*)((_check_pointer(i0, 27031))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27052)))), &_td_OOC_AST_ExtTree__NodeListDesc, 27052));
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 27069))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27086)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27086));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayIndexDesc_Accept(OOC_AST_ExtTree__ArrayIndex arrayIndex, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayIndex;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27200)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)),OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayIndex)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FunctionCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FunctionCall fc;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FunctionCall.baseTypes[0]);
  fc = (OOC_AST_ExtTree__FunctionCall)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 27417)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27436)))), &_td_OOC_AST_ExtTree__NodeDesc, 27436));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 27449))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27468)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27468));
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 27485))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 27517))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27536)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27536));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FunctionCallDesc_Accept(OOC_AST_ExtTree__FunctionCall functionCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)functionCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27656)))), OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)),OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FunctionCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Assignment(OOC_AST_ExtTree__Builder b, OOC_AST__Node assignment) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Assignment a;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Assignment.baseTypes[0]);
  a = (OOC_AST_ExtTree__Assignment)i0;
  i1 = (OOC_INT32)assignment;
  *(OOC_INT32*)(_check_pointer(i0, 27823)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27850)))), &_td_OOC_AST_ExtTree__OperatorDesc, 27850));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__AssignmentDesc_Accept(OOC_AST_ExtTree__Assignment assignment, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)assignment;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27963)))), OOC_AST_ExtTree__VisitorDesc_VisitAssignment)),OOC_AST_ExtTree__VisitorDesc_VisitAssignment)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Assignment)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcedureCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node call) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcedureCall p;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcedureCall.baseTypes[0]);
  p = (OOC_AST_ExtTree__ProcedureCall)i0;
  i1 = (OOC_INT32)call;
  *(OOC_INT32*)(_check_pointer(i0, 28126)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28141)))), &_td_OOC_AST_ExtTree__NodeDesc, 28141));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcedureCallDesc_Accept(OOC_AST_ExtTree__ProcedureCall procedureCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedureCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28259)))), OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)),OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcedureCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_IfStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__IfStatm i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__IfStatm.baseTypes[0]);
  i = (OOC_AST_ExtTree__IfStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 28484)) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 28515))+4) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28629))+8) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28571))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28602)))), &_td_OOC_AST_ExtTree__NodeListDesc, 28602));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 28666))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IfStatmDesc_Accept(OOC_AST_ExtTree__IfStatm ifStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ifStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28773)))), OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)),OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IfStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_CaseStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _case, OOC_AST__Node expr, OOC_AST__Node of, OOC_AST__NodeList caseList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__CaseStatm c;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__CaseStatm.baseTypes[0]);
  c = (OOC_AST_ExtTree__CaseStatm)i0;
  i1 = (OOC_INT32)_case;
  *(OOC_INT32*)(_check_pointer(i0, 29015)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29030)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29030));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 29046))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29061)))), &_td_OOC_AST_ExtTree__NodeDesc, 29061));
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 29073))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 29090))+12) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 29119))+16) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 29214))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29245)))), &_td_OOC_AST_ExtTree__NodeListDesc, 29245));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 29175))+20) = 0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 29270))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__CaseStatmDesc_Accept(OOC_AST_ExtTree__CaseStatm caseStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)caseStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29383)))), OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)),OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__CaseStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WhileStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _while, OOC_AST__Node guard, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__WhileStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WhileStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WhileStatm)i0;
  i1 = (OOC_INT32)_while;
  *(OOC_INT32*)(_check_pointer(i0, 29589)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29606)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29606));
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 29622))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29639)))), &_td_OOC_AST_ExtTree__NodeDesc, 29639));
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 29651))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29662)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29662));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 29678))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29701)))), &_td_OOC_AST_ExtTree__NodeListDesc, 29701));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 29717))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29730)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29730));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WhileStatmDesc_Accept(OOC_AST_ExtTree__WhileStatm whileStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)whileStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29843)))), OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WhileStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_RepeatStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node repeat, OOC_AST__NodeList statmSeq, OOC_AST__Node until, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__RepeatStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__RepeatStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__RepeatStatm)i0;
  i1 = (OOC_INT32)repeat;
  *(OOC_INT32*)(_check_pointer(i0, 30051)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30070)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30070));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 30086))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30109)))), &_td_OOC_AST_ExtTree__NodeListDesc, 30109));
  i1 = (OOC_INT32)until;
  *(OOC_INT32*)((_check_pointer(i0, 30125))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30142)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30142));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 30158))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30173)))), &_td_OOC_AST_ExtTree__NodeDesc, 30173));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RepeatStatmDesc_Accept(OOC_AST_ExtTree__RepeatStatm repeatStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)repeatStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30285)))), OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)),OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RepeatStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ForStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _for, OOC_AST__Node ident, OOC_AST__Node becomes, OOC_AST__Node startValue, OOC_AST__Node to, OOC_AST__Node endValue, OOC_AST__Node by, OOC_AST__Node step, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ForStatm f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ForStatm.baseTypes[0]);
  f = (OOC_AST_ExtTree__ForStatm)i0;
  i1 = (OOC_INT32)_for;
  *(OOC_INT32*)(_check_pointer(i0, 30534)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30547)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30547));
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 30563))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30580)))), &_td_OOC_AST_ExtTree__NodeDesc, 30580));
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 30592))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30613)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30613));
  i1 = (OOC_INT32)startValue;
  *(OOC_INT32*)((_check_pointer(i0, 30629))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30656)))), &_td_OOC_AST_ExtTree__NodeDesc, 30656));
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 30668))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30679)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30679));
  i1 = (OOC_INT32)endValue;
  *(OOC_INT32*)((_check_pointer(i0, 30695))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30718)))), &_td_OOC_AST_ExtTree__NodeDesc, 30718));
  i1 = (OOC_INT32)step;
  i2 = i1==0;
  if (i2) goto l3;
  i2 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i0, 30808))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30819)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30819));
  *(OOC_INT32*)((_check_pointer(i0, 30837))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30852)))), &_td_OOC_AST_ExtTree__NodeDesc, 30852));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 30757))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 30777))+28) = 0;
l4:
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 30873))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30884)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30884));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 30900))+36) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30923)))), &_td_OOC_AST_ExtTree__NodeListDesc, 30923));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 30939))+40) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30952)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30952));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ForStatmDesc_Accept(OOC_AST_ExtTree__ForStatm forStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)forStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31059)))), OOC_AST_ExtTree__VisitorDesc_VisitForStatm)),OOC_AST_ExtTree__VisitorDesc_VisitForStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ForStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_LoopStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node loop, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LoopStatm l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LoopStatm.baseTypes[0]);
  l = (OOC_AST_ExtTree__LoopStatm)i0;
  i1 = (OOC_INT32)loop;
  *(OOC_INT32*)(_check_pointer(i0, 31249)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31264)))), &_td_OOC_AST_ExtTree__TerminalDesc, 31264));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 31280))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31303)))), &_td_OOC_AST_ExtTree__NodeListDesc, 31303));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 31319))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31332)))), &_td_OOC_AST_ExtTree__TerminalDesc, 31332));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__LoopStatmDesc_Accept(OOC_AST_ExtTree__LoopStatm loopStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)loopStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31442)))), OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)),OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LoopStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WithStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__WithStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WithStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WithStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 31663)) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 31694))+4) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 31808))+8) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 31750))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31781)))), &_td_OOC_AST_ExtTree__NodeListDesc, 31781));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 31845))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WithStatmDesc_Accept(OOC_AST_ExtTree__WithStatm withStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)withStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31958)))), OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WithStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ExitStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node exit) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ExitStatm e;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ExitStatm.baseTypes[0]);
  e = (OOC_AST_ExtTree__ExitStatm)i0;
  i1 = (OOC_INT32)exit;
  *(OOC_INT32*)(_check_pointer(i0, 32111)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32126)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32126));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ExitStatmDesc_Accept(OOC_AST_ExtTree__ExitStatm exitStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)exitStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32236)))), OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)),OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ExitStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ReturnStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _return, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ReturnStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ReturnStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__ReturnStatm)i0;
  i1 = (OOC_INT32)_return;
  *(OOC_INT32*)(_check_pointer(i0, 32401)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32420)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32420));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 32436))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReturnStatmDesc_Accept(OOC_AST_ExtTree__ReturnStatm returnStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)returnStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32557)))), OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)),OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ReturnStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TryStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _try, OOC_AST__NodeList statmSeq, OOC_AST__NodeList catchList, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TryStatm t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TryStatm.baseTypes[0]);
  t = (OOC_AST_ExtTree__TryStatm)i0;
  i1 = (OOC_INT32)_try;
  *(OOC_INT32*)(_check_pointer(i0, 32809)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32821)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32821));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 32837))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32859)))), &_td_OOC_AST_ExtTree__NodeListDesc, 32859));
  i1 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i0, 32875))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32899)))), &_td_OOC_AST_ExtTree__NodeListDesc, 32899));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 32915))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32927)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32927));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TryStatmDesc_Accept(OOC_AST_ExtTree__TryStatm tryStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tryStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33035)))), OOC_AST_ExtTree__VisitorDesc_VisitTryStatm)),OOC_AST_ExtTree__VisitorDesc_VisitTryStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TryStatm)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Flags(OOC_AST_ExtTree__Builder b, OOC_INT8 context, OOC_AST__Node lBrak, OOC_AST__NodeList flagList, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Flags f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Flags.baseTypes[0]);
  f = (OOC_AST_ExtTree__Flags)i0;
  i1 = context;
  *(OOC_INT8*)(_check_pointer(i0, 33275)) = i1;
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 33302))+4) = i1;
  i1 = (OOC_INT32)flagList;
  *(OOC_INT32*)((_check_pointer(i0, 33325))+8) = i1;
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 33354))+12) = i1;
  return (OOC_AST__Node)i0;
  ;
}

OOC_CHAR8 OOC_AST_ExtTree__BuilderDesc_ProcWithoutBody(OOC_AST_ExtTree__Builder b, OOC_AST__Node moduleFlags, OOC_AST__Node procFlags) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_AST__Node n;

  i0 = (OOC_INT32)moduleFlags;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33581)))), &_td_OOC_AST_ExtTree__FlagsDesc, 33581)), 33587))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33597))+4);
  i0 = _check_pointer(i0, 33600);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 33600))*4);
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33604)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  
l5:
  if (i0) goto l7;
  return 0u;
  goto l26;
l7:
  i0 = (OOC_INT32)procFlags;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l25;
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33861)))), &_td_OOC_AST_ExtTree__FlagsDesc, 33861)), 33867))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 33877));
  i1 = 0<i1;
  if (!i1) goto l25;
  i1=0;
l12_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33912)))), &_td_OOC_AST_ExtTree__FlagsDesc, 33912)), 33918))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33928))+4);
  i2 = _check_pointer(i2, 33931);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 33931))*4);
  n = (OOC_AST__Node)i2;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33952)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i3) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33970)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33970)), 33979));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33984))+8);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 33989)),(const void*)"HAS_BODY"))==0;
  
l17:
  if (!i2) goto l19;
  return 0u;
l19:
  i1 = i1+2;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33861)))), &_td_OOC_AST_ExtTree__FlagsDesc, 33861)), 33867))+8);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 33877));
  i2 = i1<i2;
  if (i2) goto l12_loop;
l25:
  return 1u;
l26:
  _failed_function(33422); return 0;
  ;
}

void OOC_AST_ExtTree__FlagsDesc_Accept(OOC_AST_ExtTree__Flags flags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)flags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34233)))), OOC_AST_ExtTree__VisitorDesc_VisitFlags)),OOC_AST_ExtTree__VisitorDesc_VisitFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Flags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ProcIdFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node procId, OOC_AST__Node equal, OOC_AST__Node number) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcIdFlag pid;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcIdFlag.baseTypes[0]);
  pid = (OOC_AST_ExtTree__ProcIdFlag)i0;
  i1 = (OOC_INT32)procId;
  *(OOC_INT32*)(_check_pointer(i0, 34407)) = i1;
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 34434))+4) = i1;
  i1 = (OOC_INT32)number;
  *(OOC_INT32*)((_check_pointer(i0, 34459))+8) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcIdFlagDesc_Accept(OOC_AST_ExtTree__ProcIdFlag procIdFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procIdFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34583)))), OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)),OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcIdFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ModuleFlags(OOC_AST_ExtTree__Builder b, OOC_AST__Node external, OOC_AST__Node callConv, OOC_AST__NodeList moduleFlags, OOC_AST__Node semicolon, OOC_AST__Node link, OOC_AST__NodeList linkSections, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleFlags mf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleFlags.baseTypes[0]);
  mf = (OOC_AST_ExtTree__ModuleFlags)i0;
  i1 = (OOC_INT32)external;
  *(OOC_INT32*)(_check_pointer(i0, 34901)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34924)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34924));
  i1 = (OOC_INT32)callConv;
  *(OOC_INT32*)((_check_pointer(i0, 34941))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34964)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34964));
  i1 = (OOC_INT32)moduleFlags;
  *(OOC_INT32*)((_check_pointer(i0, 34981))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 35017))+12) = i1;
  i1 = (OOC_INT32)link;
  *(OOC_INT32*)((_check_pointer(i0, 35049))+16) = i1;
  i1 = (OOC_INT32)linkSections;
  *(OOC_INT32*)((_check_pointer(i0, 35071))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 35109))+24) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleFlagsDesc_Accept(OOC_AST_ExtTree__ModuleFlags moduleFlags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleFlags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35229)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)),OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleFlags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkFileFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node file, OOC_AST__Node fileName, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkFileFlag lff;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkFileFlag.baseTypes[0]);
  lff = (OOC_AST_ExtTree__LinkFileFlag)i0;
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)(_check_pointer(i0, 35452)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 35475))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35498)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35498));
  i1 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 35516))+8) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 35618))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35643)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35643));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 35581))+12) = 0;
l4:
  i1 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 35669))+16) = i1;
  i1 = (OOC_INT32)suffixOpt;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 35763))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35788)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35788));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 35726))+20) = 0;
l8:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkFileFlagDesc_Accept(OOC_AST_ExtTree__LinkFileFlag linkFileFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkFileFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35917)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkFileFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkObjFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node obj, OOC_AST__Node fileName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LinkObjFlag lof;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkObjFlag.baseTypes[0]);
  lof = (OOC_AST_ExtTree__LinkObjFlag)i0;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)(_check_pointer(i0, 36099)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 36120))+4) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkObjFlagDesc_Accept(OOC_AST_ExtTree__LinkObjFlag linkObjFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkObjFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36251)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkObjFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkLibFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node lib, OOC_AST__Node libName, OOC_AST__Node lParen, OOC_AST__NodeList dependencies, OOC_AST__Node rParen, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkLibFlag llf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkLibFlag.baseTypes[0]);
  llf = (OOC_AST_ExtTree__LinkLibFlag)i0;
  i1 = (OOC_INT32)lib;
  *(OOC_INT32*)(_check_pointer(i0, 36560)) = i1;
  i1 = (OOC_INT32)libName;
  *(OOC_INT32*)((_check_pointer(i0, 36581))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36602)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36602));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 36620))+8) = i1;
  i1 = (OOC_INT32)dependencies;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 36723))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36754)))), &_td_OOC_AST_ExtTree__NodeListDesc, 36754));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 36682))+12) = 0;
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 36781))+16) = i1;
  i1 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 36808))+20) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 36910))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36935)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36935));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 36873))+24) = 0;
l8:
  i1 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 36961))+28) = i1;
  i1 = (OOC_INT32)suffixOpt;
  i2 = i1==0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 37055))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37080)))), &_td_OOC_AST_ExtTree__TerminalDesc, 37080));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 37018))+32) = 0;
l12:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkLibFlagDesc_Accept(OOC_AST_ExtTree__LinkLibFlag linkLibFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkLibFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37206)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkLibFlag)i1);
  return;
  ;
}

void OOC_OOC_AST_ExtTree_init(void) {

  return;
  ;
}

/* --- */
