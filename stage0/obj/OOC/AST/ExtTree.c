#include "OOC/AST/ExtTree.d"
#include "__oo2c.h"

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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 11074));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11097))+4);
  i4 = _check_pointer(i4, 11100);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11100))*4);
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11126))+4);
  i4 = _check_pointer(i4, 11129);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11129))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11126))+4);
  i5 = _check_pointer(i5, 11129);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 11129))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11133)))), &_td_OOC_AST_ExtTree__NodeDesc, 11133)), 11138)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11133)))), &_td_OOC_AST_ExtTree__NodeDesc, 11133)), (OOC_AST_ExtTree__Visitor)i2);
l6:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
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

OOC_AST_ExtTree__Builder OOC_AST_ExtTree__New() {
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15243)))), OOC_AST_ExtTree__VisitorDesc_VisitNodeList)),OOC_AST_ExtTree__VisitorDesc_VisitNodeList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__NodeList)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Terminal(OOC_AST_ExtTree__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Terminal t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Terminal.baseTypes[0]);
  t = (OOC_AST_ExtTree__Terminal)i0;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 15393)) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TerminalDesc_Accept(OOC_AST_ExtTree__Terminal terminal, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)terminal;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15503)))), OOC_AST_ExtTree__VisitorDesc_VisitTerminal)),OOC_AST_ExtTree__VisitorDesc_VisitTerminal)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Terminal)i1);
  return;
  ;
}

Object__String OOC_AST_ExtTree__TerminalDesc_GetString(OOC_AST_ExtTree__Terminal terminal, OOC_CHAR8 stripQuotes) {
  register OOC_INT32 i0,i1,i2;

  i0 = stripQuotes;
  if (i0) goto l3;
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15813));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15818))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15813));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15818))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15823)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 15823)), i0);
  return (Object__String)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15696));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15701))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15696));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15701))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15751));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 15756))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15706)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i1, 15706)), i2, 1, (i0-1));
  return (Object__String)i0;
l4:
  _failed_function(15576); return 0;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_IdentDef(OOC_AST_ExtTree__Builder b, OOC_AST__Node ident, OOC_AST__Node mark) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__IdentDef id;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__IdentDef.baseTypes[0]);
  i1 = (OOC_INT32)ident;
  i2 = i1!=(OOC_INT32)0;
  id = (OOC_AST_ExtTree__IdentDef)i0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 16041)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 15997)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16014)))), &_td_OOC_AST_ExtTree__TerminalDesc, 16014));
l4:
  i1 = (OOC_INT32)mark;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 16140))+4) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 16098))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16113)))), &_td_OOC_AST_ExtTree__TerminalDesc, 16113));
l8:
  *(OOC_INT32*)((_check_pointer(i0, 16169))+8) = (OOC_INT32)0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IdentDefDesc_AttachDocString(OOC_AST_ExtTree__IdentDef identDef, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)identDef;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16319))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 16411))+8) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16357))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16357))+8);
  i2 = (OOC_INT32)docString;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16368)))), OOC_Doc__DocumentDesc_Merge)),OOC_Doc__DocumentDesc_Merge)((OOC_Doc__Document)i0, (OOC_Doc__Document)i2);
l4:
  return;
  ;
}

void OOC_AST_ExtTree__IdentDefDesc_Accept(OOC_AST_ExtTree__IdentDef identDef, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)identDef;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16534)))), OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)),OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IdentDef)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ModuleIdent(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList nameList) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleIdent moduleIdent;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleIdent.baseTypes[0]);
  moduleIdent = (OOC_AST_ExtTree__ModuleIdent)i0;
  i1 = (OOC_INT32)nameList;
  *(OOC_INT32*)(_check_pointer(i0, 16727)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 16766))+4) = (OOC_INT32)0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleIdentDesc_AttachDocString(OOC_AST_ExtTree__ModuleIdent moduleIdent, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)moduleIdent;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16937))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 17035))+4) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16978))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16978))+4);
  i2 = (OOC_INT32)docString;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16989)))), OOC_Doc__DocumentDesc_Merge)),OOC_Doc__DocumentDesc_Merge)((OOC_Doc__Document)i0, (OOC_Doc__Document)i2);
l4:
  return;
  ;
}

void OOC_AST_ExtTree__ModuleIdentDesc_Accept(OOC_AST_ExtTree__ModuleIdent moduleIdent, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleIdent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17164)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)),OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleIdent)i1);
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
  i1 = (OOC_INT32)flags;
  i2 = (OOC_INT32)array;
  *(OOC_INT32*)(_check_pointer(i0, 17450)) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 17544))+4) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 17502))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17519)))), &_td_OOC_AST_ExtTree__FlagsDesc, 17519));
l4:
  i1 = (OOC_INT32)exprList;
  *(OOC_INT32*)((_check_pointer(i0, 17575))+8) = i1;
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 17605))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 17623))+16) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayTypeDesc_Accept(OOC_AST_ExtTree__ArrayType arrayType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17739)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayType)),OOC_AST_ExtTree__VisitorDesc_VisitArrayType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FieldList(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FieldList fl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FieldList.baseTypes[0]);
  fl = (OOC_AST_ExtTree__FieldList)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 17927)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 17959))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 17983))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FieldListDesc_Accept(OOC_AST_ExtTree__FieldList fieldList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fieldList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18099)))), OOC_AST_ExtTree__VisitorDesc_VisitFieldList)),OOC_AST_ExtTree__VisitorDesc_VisitFieldList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FieldList)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_RecordType(OOC_AST_ExtTree__Builder b, OOC_AST__Node record, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__Node baseType, OOC_AST__Node rParen, OOC_AST__NodeList fieldLists, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__RecordType rt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__RecordType.baseTypes[0]);
  rt = (OOC_AST_ExtTree__RecordType)i0;
  OOC_AST_ExtTree__InitType((OOC_AST_ExtTree__Type)i0);
  i1 = (OOC_INT32)flags;
  i2 = (OOC_INT32)record;
  *(OOC_INT32*)(_check_pointer(i0, 18352)) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18448))+4) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 18406))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18423)))), &_td_OOC_AST_ExtTree__FlagsDesc, 18423));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 18479))+8) = i1;
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 18505))+12) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 18535))+16) = i1;
  i1 = (OOC_INT32)fieldLists;
  *(OOC_INT32*)((_check_pointer(i0, 18561))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 18595))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RecordTypeDesc_Accept(OOC_AST_ExtTree__RecordType recordType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)recordType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18712)))), OOC_AST_ExtTree__VisitorDesc_VisitRecordType)),OOC_AST_ExtTree__VisitorDesc_VisitRecordType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RecordType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_PointerType(OOC_AST_ExtTree__Builder b, OOC_AST__Node pointer, OOC_AST__Node flags, OOC_AST__Node to, OOC_AST__Node type) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__PointerType pt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__PointerType.baseTypes[0]);
  pt = (OOC_AST_ExtTree__PointerType)i0;
  OOC_AST_ExtTree__InitType((OOC_AST_ExtTree__Type)i0);
  i1 = (OOC_INT32)flags;
  i2 = (OOC_INT32)pointer;
  *(OOC_INT32*)(_check_pointer(i0, 18913)) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 19011))+4) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 18969))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18986)))), &_td_OOC_AST_ExtTree__FlagsDesc, 18986));
l4:
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 19042))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19060))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__PointerTypeDesc_Accept(OOC_AST_ExtTree__PointerType pointerType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)pointerType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19182)))), OOC_AST_ExtTree__VisitorDesc_VisitPointerType)),OOC_AST_ExtTree__VisitorDesc_VisitPointerType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__PointerType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FPSection(OOC_AST_ExtTree__Builder b, OOC_AST__Node var, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FPSection fp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FPSection.baseTypes[0]);
  fp = (OOC_AST_ExtTree__FPSection)i0;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)(_check_pointer(i0, 19389)) = i1;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)((_check_pointer(i0, 19409))+4) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 19441))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19465))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FPSectionDesc_Accept(OOC_AST_ExtTree__FPSection fpSection, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fpSection;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19581)))), OOC_AST_ExtTree__VisitorDesc_VisitFPSection)),OOC_AST_ExtTree__VisitorDesc_VisitFPSection)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FPSection)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FormalPars(OOC_AST_ExtTree__Builder b, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__NodeList fpSections, OOC_AST__Node rParen, OOC_AST__Node colon, OOC_AST__Node result) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__FormalPars fp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FormalPars.baseTypes[0]);
  i1 = (OOC_INT32)flags;
  i2 = i1!=(OOC_INT32)0;
  fp = (OOC_AST_ExtTree__FormalPars)i0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 19877)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 19835)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19852)))), &_td_OOC_AST_ExtTree__FlagsDesc, 19852));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 19908))+4) = i1;
  i1 = (OOC_INT32)fpSections;
  *(OOC_INT32*)((_check_pointer(i0, 19934))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 19968))+12) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 19994))+16) = i1;
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 20018))+20) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FormalParsDesc_Accept(OOC_AST_ExtTree__FormalPars formalPars, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)formalPars;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20143)))), OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)),OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FormalPars)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 20335)) = i1;
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 20367))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcTypeDesc_Accept(OOC_AST_ExtTree__ProcType procType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20492)))), OOC_AST_ExtTree__VisitorDesc_VisitProcType)),OOC_AST_ExtTree__VisitorDesc_VisitProcType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node alias, OOC_AST__Node becomes, OOC_AST__Node module, OOC_Scanner_InputBuffer__CharArray moduleName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportDecl id;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportDecl.baseTypes[0]);
  id = (OOC_AST_ExtTree__ImportDecl)i0;
  i1 = (OOC_INT32)alias;
  *(OOC_INT32*)(_check_pointer(i0, 20725)) = i1;
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 20749))+4) = i1;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 20777))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20796)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 20796));
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 20816))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportDeclDesc_Accept(OOC_AST_ExtTree__ImportDecl importDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20947)))), OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)),OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ConstDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node equal, OOC_AST__Node expr, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ConstDecl cd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ConstDecl.baseTypes[0]);
  cd = (OOC_AST_ExtTree__ConstDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 21133)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21156)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 21156));
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 21173))+4) = i1;
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 21197))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 21219))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ConstDeclDesc_Accept(OOC_AST_ExtTree__ConstDecl constDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)constDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21345)))), OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)),OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ConstDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TypeDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node equal, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TypeDecl td;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TypeDecl.baseTypes[0]);
  td = (OOC_AST_ExtTree__TypeDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 21527)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21550)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 21550));
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 21567))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 21591))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 21613))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TypeDeclDesc_Accept(OOC_AST_ExtTree__TypeDecl typeDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typeDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21736)))), OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)),OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TypeDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_VarDecl(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__VarDecl vd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__VarDecl.baseTypes[0]);
  vd = (OOC_AST_ExtTree__VarDecl)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 21929)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 21961))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 21985))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 22007))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__VarDeclDesc_Accept(OOC_AST_ExtTree__VarDecl varDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)varDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22127)))), OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)),OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__VarDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Receiver(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node var, OOC_AST__Node ident, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Receiver r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Receiver.baseTypes[0]);
  r = (OOC_AST_ExtTree__Receiver)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 22309)) = i1;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 22334))+4) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 22353))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22370)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 22370));
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 22386))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 22409))+16) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 22430))+20) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReceiverDesc_Accept(OOC_AST_ExtTree__Receiver receiver, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)receiver;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22546)))), OOC_AST_ExtTree__VisitorDesc_VisitReceiver)),OOC_AST_ExtTree__VisitorDesc_VisitReceiver)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Receiver)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node proc, OOC_AST__Node arrow, OOC_AST__Node receiver, OOC_AST__Node flags, OOC_AST__Node identDef, OOC_AST__Node formalPars, OOC_AST__Node semicolon1, OOC_AST__Node body, OOC_AST__Node semicolon2) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ProcDecl pd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcDecl.baseTypes[0]);
  pd = (OOC_AST_ExtTree__ProcDecl)i0;
  i1 = (OOC_INT32)proc;
  *(OOC_INT32*)(_check_pointer(i0, 22841)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22856)))), &_td_OOC_AST_ExtTree__TerminalDesc, 22856));
  i1 = (OOC_INT32)arrow;
  *(OOC_INT32*)((_check_pointer(i0, 22873))+4) = i1;
  i1 = (OOC_INT32)flags;
  i2 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i0, 22897))+8) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 22997))+12) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 22955))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22972)))), &_td_OOC_AST_ExtTree__FlagsDesc, 22972));
l4:
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)((_check_pointer(i0, 23028))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23051)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 23051));
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 23068))+20) = i1;
  i1 = (OOC_INT32)body;
  i2 = (OOC_INT32)semicolon1;
  *(OOC_INT32*)((_check_pointer(i0, 23102))+24) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 23194))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23209)))), &_td_OOC_AST_ExtTree__BodyDesc, 23209));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 23163))+28) = (OOC_INT32)0;
l8:
  i1 = (OOC_INT32)semicolon2;
  *(OOC_INT32*)((_check_pointer(i0, 23230))+32) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcDeclDesc_Accept(OOC_AST_ExtTree__ProcDecl procDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23355)))), OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)),OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportList(OOC_AST_ExtTree__Builder b, OOC_AST__Node import, OOC_AST__NodeList imports, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportList.baseTypes[0]);
  il = (OOC_AST_ExtTree__ImportList)i0;
  i1 = (OOC_INT32)import;
  *(OOC_INT32*)(_check_pointer(i0, 23588)) = i1;
  i1 = (OOC_INT32)imports;
  *(OOC_INT32*)((_check_pointer(i0, 23614))+4) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 23642))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportListDesc_Accept(OOC_AST_ExtTree__ImportList importList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23771)))), OOC_AST_ExtTree__VisitorDesc_VisitImportList)),OOC_AST_ExtTree__VisitorDesc_VisitImportList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportList)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Body(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList declSeq, OOC_AST__Node begin, OOC_AST__NodeList statmSeq, OOC_AST__Node end, OOC_AST__Node name) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Body body;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Body.baseTypes[0]);
  body = (OOC_AST_ExtTree__Body)i0;
  i1 = (OOC_INT32)declSeq;
  *(OOC_INT32*)(_check_pointer(i0, 24059)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24080)))), &_td_OOC_AST_ExtTree__NodeListDesc, 24080));
  i1 = (OOC_INT32)statmSeq;
  i2 = (OOC_INT32)begin;
  *(OOC_INT32*)((_check_pointer(i0, 24099))+4) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24194))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24217)))), &_td_OOC_AST_ExtTree__NodeListDesc, 24217));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24156))+8) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 24244))+12) = i1;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 24266))+16) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__BodyDesc_Accept(OOC_AST_ExtTree__Body body, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)body;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24369)))), OOC_AST_ExtTree__VisitorDesc_VisitBody)),OOC_AST_ExtTree__VisitorDesc_VisitBody)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Body)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Module(OOC_AST_ExtTree__Builder b, OOC_AST__Node module, OOC_AST__Node name, OOC_AST__Node flags, OOC_AST__Node semicolon, OOC_AST__Node importList, OOC_AST__Node body, OOC_AST__Node period, OOC_Scanner_InputBuffer__CharArray moduleName) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Module m;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Module.baseTypes[0]);
  i1 = (OOC_INT32)module;
  i2 = i1==(OOC_INT32)0;
  m = (OOC_AST_ExtTree__Module)i0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 24679)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24698)))), &_td_OOC_AST_ExtTree__TerminalDesc, 24698));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 24647)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)flags;
  *(OOC_INT32*)((_check_pointer(i0, 24722))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24737)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 24737));
  i1 = i2!=(OOC_INT32)0;
  if (i1) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 24824))+8) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 24784))+8) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24801)))), &_td_OOC_AST_ExtTree__FlagsDesc, 24801));
l8:
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 24853))+12) = i1;
  i1 = (OOC_INT32)body;
  i2 = (OOC_INT32)importList;
  *(OOC_INT32*)((_check_pointer(i0, 24884))+16) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 24981))+20) = (OOC_INT32)0;
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 24944))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24959)))), &_td_OOC_AST_ExtTree__BodyDesc, 24959));
l12:
  i1 = (OOC_INT32)period;
  *(OOC_INT32*)((_check_pointer(i0, 25009))+24) = i1;
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 25034))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleDesc_Accept(OOC_AST_ExtTree__Module module, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25152)))), OOC_AST_ExtTree__VisitorDesc_VisitModule)),OOC_AST_ExtTree__VisitorDesc_VisitModule)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Module)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Operator(OOC_AST_ExtTree__Builder b, OOC_AST__Node left, OOC_AST__Node op, OOC_AST__Node right) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Operator o;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Operator.baseTypes[0]);
  i1 = (OOC_INT32)left;
  i2 = i1==(OOC_INT32)0;
  o = (OOC_AST_ExtTree__Operator)i0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 25366)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25381)))), &_td_OOC_AST_ExtTree__NodeDesc, 25381));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 25336)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 25401))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25412)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25412));
  i1 = i2==(OOC_INT32)0;
  if (i1) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 25487))+8) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25504)))), &_td_OOC_AST_ExtTree__NodeDesc, 25504));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 25456))+8) = (OOC_INT32)0;
l8:
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__OperatorDesc_Accept(OOC_AST_ExtTree__Operator _operator, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_operator;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25615)))), OOC_AST_ExtTree__VisitorDesc_VisitOperator)),OOC_AST_ExtTree__VisitorDesc_VisitOperator)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Operator)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Factor(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node expr, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Factor f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Factor.baseTypes[0]);
  f = (OOC_AST_ExtTree__Factor)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 25776)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25795)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25795));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 25811))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25826)))), &_td_OOC_AST_ExtTree__NodeDesc, 25826));
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 25838))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25857)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25857));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FactorDesc_Accept(OOC_AST_ExtTree__Factor factor, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)factor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25958)))), OOC_AST_ExtTree__VisitorDesc_VisitFactor)),OOC_AST_ExtTree__VisitorDesc_VisitFactor)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Factor)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Set(OOC_AST_ExtTree__Builder b, OOC_AST__Node type, OOC_AST__Node lBrace, OOC_AST__NodeList elementList, OOC_AST__Node rBrace) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Set s;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Set.baseTypes[0]);
  s = (OOC_AST_ExtTree__Set)i0;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)(_check_pointer(i0, 26146)) = i1;
  i1 = (OOC_INT32)lBrace;
  *(OOC_INT32*)((_check_pointer(i0, 26167))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26186)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26186));
  i1 = (OOC_INT32)elementList;
  *(OOC_INT32*)((_check_pointer(i0, 26202))+8) = i1;
  i1 = (OOC_INT32)rBrace;
  *(OOC_INT32*)((_check_pointer(i0, 26237))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26256)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26256));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__SetDesc_Accept(OOC_AST_ExtTree__Set set, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)set;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26348)))), OOC_AST_ExtTree__VisitorDesc_VisitSet)),OOC_AST_ExtTree__VisitorDesc_VisitSet)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Set)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ArrayIndex(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lBrak, OOC_AST__NodeList indices, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ArrayIndex ai;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ArrayIndex.baseTypes[0]);
  ai = (OOC_AST_ExtTree__ArrayIndex)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 26543)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26562)))), &_td_OOC_AST_ExtTree__NodeDesc, 26562));
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 26575))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26592)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26592));
  i1 = (OOC_INT32)indices;
  *(OOC_INT32*)((_check_pointer(i0, 26609))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26630)))), &_td_OOC_AST_ExtTree__NodeListDesc, 26630));
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 26647))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26664)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26664));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayIndexDesc_Accept(OOC_AST_ExtTree__ArrayIndex arrayIndex, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayIndex;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26778)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)),OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayIndex)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FunctionCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FunctionCall fc;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FunctionCall.baseTypes[0]);
  fc = (OOC_AST_ExtTree__FunctionCall)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 26995)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27014)))), &_td_OOC_AST_ExtTree__NodeDesc, 27014));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 27027))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27046)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27046));
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 27063))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 27095))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27114)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27114));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FunctionCallDesc_Accept(OOC_AST_ExtTree__FunctionCall functionCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)functionCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27234)))), OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)),OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FunctionCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Assignment(OOC_AST_ExtTree__Builder b, OOC_AST__Node assignment) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Assignment a;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Assignment.baseTypes[0]);
  a = (OOC_AST_ExtTree__Assignment)i0;
  i1 = (OOC_INT32)assignment;
  *(OOC_INT32*)(_check_pointer(i0, 27401)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27428)))), &_td_OOC_AST_ExtTree__OperatorDesc, 27428));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__AssignmentDesc_Accept(OOC_AST_ExtTree__Assignment assignment, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)assignment;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27541)))), OOC_AST_ExtTree__VisitorDesc_VisitAssignment)),OOC_AST_ExtTree__VisitorDesc_VisitAssignment)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Assignment)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcedureCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node call) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcedureCall p;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcedureCall.baseTypes[0]);
  p = (OOC_AST_ExtTree__ProcedureCall)i0;
  i1 = (OOC_INT32)call;
  *(OOC_INT32*)(_check_pointer(i0, 27704)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27719)))), &_td_OOC_AST_ExtTree__NodeDesc, 27719));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcedureCallDesc_Accept(OOC_AST_ExtTree__ProcedureCall procedureCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedureCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27837)))), OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)),OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcedureCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_IfStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__IfStatm i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__IfStatm.baseTypes[0]);
  i = (OOC_AST_ExtTree__IfStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 28062)) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 28093))+4) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28207))+8) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28149))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28180)))), &_td_OOC_AST_ExtTree__NodeListDesc, 28180));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 28244))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IfStatmDesc_Accept(OOC_AST_ExtTree__IfStatm ifStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ifStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28351)))), OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)),OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IfStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_CaseStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _case, OOC_AST__Node expr, OOC_AST__Node of, OOC_AST__NodeList caseList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__CaseStatm c;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__CaseStatm.baseTypes[0]);
  c = (OOC_AST_ExtTree__CaseStatm)i0;
  i1 = (OOC_INT32)_case;
  *(OOC_INT32*)(_check_pointer(i0, 28593)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28608)))), &_td_OOC_AST_ExtTree__TerminalDesc, 28608));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 28624))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28639)))), &_td_OOC_AST_ExtTree__NodeDesc, 28639));
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 28651))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 28668))+12) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 28697))+16) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28792))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28823)))), &_td_OOC_AST_ExtTree__NodeListDesc, 28823));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28753))+20) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 28848))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__CaseStatmDesc_Accept(OOC_AST_ExtTree__CaseStatm caseStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)caseStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28961)))), OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)),OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__CaseStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WhileStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _while, OOC_AST__Node guard, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__WhileStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WhileStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WhileStatm)i0;
  i1 = (OOC_INT32)_while;
  *(OOC_INT32*)(_check_pointer(i0, 29167)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29184)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29184));
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 29200))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29217)))), &_td_OOC_AST_ExtTree__NodeDesc, 29217));
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 29229))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29240)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29240));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 29256))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29279)))), &_td_OOC_AST_ExtTree__NodeListDesc, 29279));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 29295))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29308)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29308));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WhileStatmDesc_Accept(OOC_AST_ExtTree__WhileStatm whileStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)whileStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29421)))), OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WhileStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_RepeatStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node repeat, OOC_AST__NodeList statmSeq, OOC_AST__Node until, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__RepeatStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__RepeatStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__RepeatStatm)i0;
  i1 = (OOC_INT32)repeat;
  *(OOC_INT32*)(_check_pointer(i0, 29629)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29648)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29648));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 29664))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29687)))), &_td_OOC_AST_ExtTree__NodeListDesc, 29687));
  i1 = (OOC_INT32)until;
  *(OOC_INT32*)((_check_pointer(i0, 29703))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29720)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29720));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 29736))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29751)))), &_td_OOC_AST_ExtTree__NodeDesc, 29751));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RepeatStatmDesc_Accept(OOC_AST_ExtTree__RepeatStatm repeatStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)repeatStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29863)))), OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)),OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RepeatStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ForStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _for, OOC_AST__Node ident, OOC_AST__Node becomes, OOC_AST__Node startValue, OOC_AST__Node to, OOC_AST__Node endValue, OOC_AST__Node by, OOC_AST__Node step, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ForStatm f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ForStatm.baseTypes[0]);
  f = (OOC_AST_ExtTree__ForStatm)i0;
  i1 = (OOC_INT32)_for;
  *(OOC_INT32*)(_check_pointer(i0, 30112)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30125)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30125));
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 30141))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30158)))), &_td_OOC_AST_ExtTree__NodeDesc, 30158));
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 30170))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30191)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30191));
  i1 = (OOC_INT32)startValue;
  *(OOC_INT32*)((_check_pointer(i0, 30207))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30234)))), &_td_OOC_AST_ExtTree__NodeDesc, 30234));
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 30246))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30257)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30257));
  i1 = (OOC_INT32)endValue;
  i2 = (OOC_INT32)step;
  *(OOC_INT32*)((_check_pointer(i0, 30273))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30296)))), &_td_OOC_AST_ExtTree__NodeDesc, 30296));
  i1 = i2==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i0, 30386))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30397)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30397));
  *(OOC_INT32*)((_check_pointer(i0, 30415))+28) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30430)))), &_td_OOC_AST_ExtTree__NodeDesc, 30430));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 30335))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 30355))+28) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 30451))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30462)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30462));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 30478))+36) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30501)))), &_td_OOC_AST_ExtTree__NodeListDesc, 30501));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 30517))+40) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30530)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30530));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ForStatmDesc_Accept(OOC_AST_ExtTree__ForStatm forStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)forStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30637)))), OOC_AST_ExtTree__VisitorDesc_VisitForStatm)),OOC_AST_ExtTree__VisitorDesc_VisitForStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ForStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_LoopStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node loop, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LoopStatm l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LoopStatm.baseTypes[0]);
  l = (OOC_AST_ExtTree__LoopStatm)i0;
  i1 = (OOC_INT32)loop;
  *(OOC_INT32*)(_check_pointer(i0, 30827)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30842)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30842));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 30858))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30881)))), &_td_OOC_AST_ExtTree__NodeListDesc, 30881));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 30897))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30910)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30910));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__LoopStatmDesc_Accept(OOC_AST_ExtTree__LoopStatm loopStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)loopStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31020)))), OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)),OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LoopStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WithStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__WithStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WithStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WithStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 31241)) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 31272))+4) = i2;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 31386))+8) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 31328))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31359)))), &_td_OOC_AST_ExtTree__NodeListDesc, 31359));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 31423))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WithStatmDesc_Accept(OOC_AST_ExtTree__WithStatm withStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)withStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31536)))), OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WithStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ExitStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node exit) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ExitStatm e;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ExitStatm.baseTypes[0]);
  e = (OOC_AST_ExtTree__ExitStatm)i0;
  i1 = (OOC_INT32)exit;
  *(OOC_INT32*)(_check_pointer(i0, 31689)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31704)))), &_td_OOC_AST_ExtTree__TerminalDesc, 31704));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ExitStatmDesc_Accept(OOC_AST_ExtTree__ExitStatm exitStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)exitStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31814)))), OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)),OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ExitStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ReturnStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _return, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ReturnStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ReturnStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__ReturnStatm)i0;
  i1 = (OOC_INT32)_return;
  *(OOC_INT32*)(_check_pointer(i0, 31979)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31998)))), &_td_OOC_AST_ExtTree__TerminalDesc, 31998));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 32014))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReturnStatmDesc_Accept(OOC_AST_ExtTree__ReturnStatm returnStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)returnStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32135)))), OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)),OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ReturnStatm)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Flags(OOC_AST_ExtTree__Builder b, OOC_INT8 context, OOC_AST__Node lBrak, OOC_AST__NodeList flagList, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Flags f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Flags.baseTypes[0]);
  f = (OOC_AST_ExtTree__Flags)i0;
  i1 = context;
  *(OOC_INT8*)(_check_pointer(i0, 32382)) = i1;
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 32409))+4) = i1;
  i1 = (OOC_INT32)flagList;
  *(OOC_INT32*)((_check_pointer(i0, 32432))+8) = i1;
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 32461))+12) = i1;
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
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32688)))), &_td_OOC_AST_ExtTree__FlagsDesc, 32688)), 32694))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32704))+4);
  i0 = _check_pointer(i0, 32707);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 32707))*4);
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32711)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  
l5:
  if (i0) goto l7;
  return OOC_FALSE;
  goto l26;
l7:
  i0 = (OOC_INT32)procFlags;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l25;
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32968)))), &_td_OOC_AST_ExtTree__FlagsDesc, 32968)), 32974))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 32984));
  i1 = 0<i1;
  if (!i1) goto l25;
  i1=0;
l12_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33019)))), &_td_OOC_AST_ExtTree__FlagsDesc, 33019)), 33025))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33035))+4);
  i2 = _check_pointer(i2, 33038);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 33038))*4);
  n = (OOC_AST__Node)i2;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33059)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i3) goto l15;
  i2=OOC_FALSE;
  goto l17;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33077)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33077)), 33086));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33091))+8);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 33096)),(const void*)"HAS_BODY"))==(OOC_INT32)0;
  
l17:
  if (!i2) goto l19;
  return OOC_FALSE;
l19:
  i1 = i1+2;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32968)))), &_td_OOC_AST_ExtTree__FlagsDesc, 32968)), 32974))+8);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 32984));
  i2 = i1<i2;
  if (i2) goto l12_loop;
l25:
  return OOC_TRUE;
l26:
  _failed_function(32529); return 0;
  ;
}

void OOC_AST_ExtTree__FlagsDesc_Accept(OOC_AST_ExtTree__Flags flags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)flags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33340)))), OOC_AST_ExtTree__VisitorDesc_VisitFlags)),OOC_AST_ExtTree__VisitorDesc_VisitFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Flags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ProcIdFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node procId, OOC_AST__Node equal, OOC_AST__Node number) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcIdFlag pid;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcIdFlag.baseTypes[0]);
  pid = (OOC_AST_ExtTree__ProcIdFlag)i0;
  i1 = (OOC_INT32)procId;
  *(OOC_INT32*)(_check_pointer(i0, 33514)) = i1;
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 33541))+4) = i1;
  i1 = (OOC_INT32)number;
  *(OOC_INT32*)((_check_pointer(i0, 33566))+8) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcIdFlagDesc_Accept(OOC_AST_ExtTree__ProcIdFlag procIdFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procIdFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33690)))), OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)),OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcIdFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ModuleFlags(OOC_AST_ExtTree__Builder b, OOC_AST__Node external, OOC_AST__Node callConv, OOC_AST__NodeList moduleFlags, OOC_AST__Node semicolon, OOC_AST__Node link, OOC_AST__NodeList linkSections, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleFlags mf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleFlags.baseTypes[0]);
  mf = (OOC_AST_ExtTree__ModuleFlags)i0;
  i1 = (OOC_INT32)external;
  *(OOC_INT32*)(_check_pointer(i0, 34008)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34031)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34031));
  i1 = (OOC_INT32)callConv;
  *(OOC_INT32*)((_check_pointer(i0, 34048))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34071)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34071));
  i1 = (OOC_INT32)moduleFlags;
  *(OOC_INT32*)((_check_pointer(i0, 34088))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 34124))+12) = i1;
  i1 = (OOC_INT32)link;
  *(OOC_INT32*)((_check_pointer(i0, 34156))+16) = i1;
  i1 = (OOC_INT32)linkSections;
  *(OOC_INT32*)((_check_pointer(i0, 34178))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 34216))+24) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleFlagsDesc_Accept(OOC_AST_ExtTree__ModuleFlags moduleFlags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleFlags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34336)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)),OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleFlags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkFileFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node file, OOC_AST__Node fileName, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkFileFlag lff;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkFileFlag.baseTypes[0]);
  lff = (OOC_AST_ExtTree__LinkFileFlag)i0;
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)(_check_pointer(i0, 34559)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 34582))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34605)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34605));
  i1 = (OOC_INT32)prefixOpt;
  i2 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 34623))+8) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 34725))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34750)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34750));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 34688))+12) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)suffixOpt;
  i2 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 34776))+16) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 34870))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34895)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34895));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 34833))+20) = (OOC_INT32)0;
l8:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkFileFlagDesc_Accept(OOC_AST_ExtTree__LinkFileFlag linkFileFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkFileFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35024)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkFileFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkObjFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node obj, OOC_AST__Node fileName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LinkObjFlag lof;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkObjFlag.baseTypes[0]);
  lof = (OOC_AST_ExtTree__LinkObjFlag)i0;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)(_check_pointer(i0, 35206)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 35227))+4) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkObjFlagDesc_Accept(OOC_AST_ExtTree__LinkObjFlag linkObjFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkObjFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35358)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkObjFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkLibFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node lib, OOC_AST__Node libName, OOC_AST__Node lParen, OOC_AST__NodeList dependencies, OOC_AST__Node rParen, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkLibFlag llf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkLibFlag.baseTypes[0]);
  llf = (OOC_AST_ExtTree__LinkLibFlag)i0;
  i1 = (OOC_INT32)lib;
  *(OOC_INT32*)(_check_pointer(i0, 35667)) = i1;
  i1 = (OOC_INT32)libName;
  *(OOC_INT32*)((_check_pointer(i0, 35688))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35709)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35709));
  i1 = (OOC_INT32)dependencies;
  i2 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 35727))+8) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 35830))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35861)))), &_td_OOC_AST_ExtTree__NodeListDesc, 35861));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 35789))+12) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 35888))+16) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 35915))+20) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 36017))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36042)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36042));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 35980))+24) = (OOC_INT32)0;
l8:
  i1 = (OOC_INT32)suffixOpt;
  i2 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 36068))+28) = i2;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 36162))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36187)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36187));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 36125))+32) = (OOC_INT32)0;
l12:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkLibFlagDesc_Accept(OOC_AST_ExtTree__LinkLibFlag linkLibFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkLibFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36313)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkLibFlag)i1);
  return;
  ;
}

void OOC_OOC_AST_ExtTree_init(void) {

  return;
  ;
}

/* --- */
