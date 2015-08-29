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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 12274));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12297))+4);
  i4 = _check_pointer(i4, 12300);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 12300))*4);
  i4 = i4!=0;
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12326))+4);
  i4 = _check_pointer(i4, 12329);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 12329))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12326))+4);
  i5 = _check_pointer(i5, 12329);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 12329))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12333)))), &_td_OOC_AST_ExtTree__NodeDesc, 12333)), 12338)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12333)))), &_td_OOC_AST_ExtTree__NodeDesc, 12333)), (OOC_AST_ExtTree__Visitor)i2);
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

void OOC_AST_ExtTree__VisitorDesc_VisitTPSection(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__TPSection tpSection) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitTypePars(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__TypePars typePars) {

  return;
  ;
}

void OOC_AST_ExtTree__VisitorDesc_VisitQualType(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__QualType qualType) {

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

void OOC_AST_ExtTree__VisitorDesc_VisitCatch(OOC_AST_ExtTree__Visitor v, OOC_AST_ExtTree__Catch _catch) {

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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16846)))), OOC_AST_ExtTree__VisitorDesc_VisitNodeList)),OOC_AST_ExtTree__VisitorDesc_VisitNodeList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__NodeList)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Terminal(OOC_AST_ExtTree__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Terminal t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Terminal.baseTypes[0]);
  t = (OOC_AST_ExtTree__Terminal)i0;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 16996)) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TerminalDesc_Accept(OOC_AST_ExtTree__Terminal terminal, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)terminal;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17106)))), OOC_AST_ExtTree__VisitorDesc_VisitTerminal)),OOC_AST_ExtTree__VisitorDesc_VisitTerminal)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Terminal)i1);
  return;
  ;
}

Object__String OOC_AST_ExtTree__TerminalDesc_GetString(OOC_AST_ExtTree__Terminal terminal, OOC_CHAR8 stripQuotes) {
  register OOC_INT32 i0,i1,i2;

  i0 = stripQuotes;
  if (i0) goto l3;
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17416));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17421))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17416));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17421))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17426)), 0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 17426)), i0);
  return (Object__String)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17299));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17304))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17299));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17304))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17354));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 17359))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17309)), 0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i1, 17309)), i2, 1, (i0-1));
  return (Object__String)i0;
l4:
  _failed_function(17179); return 0;
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
  *(OOC_INT32*)(_check_pointer(i0, 17644)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 17600)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17617)))), &_td_OOC_AST_ExtTree__TerminalDesc, 17617));
l4:
  i1 = (OOC_INT32)mark;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 17743))+4) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 17701))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17716)))), &_td_OOC_AST_ExtTree__TerminalDesc, 17716));
l8:
  *(OOC_INT32*)((_check_pointer(i0, 17772))+8) = (OOC_INT32)0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IdentDefDesc_AttachDocString(OOC_AST_ExtTree__IdentDef identDef, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)identDef;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17922))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 18014))+8) = i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17960))+8);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18137)))), OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)),OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IdentDef)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ModuleIdent(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList nameList) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleIdent moduleIdent;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleIdent.baseTypes[0]);
  moduleIdent = (OOC_AST_ExtTree__ModuleIdent)i0;
  i1 = (OOC_INT32)nameList;
  *(OOC_INT32*)(_check_pointer(i0, 18330)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 18369))+4) = 0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleIdentDesc_AttachDocString(OOC_AST_ExtTree__ModuleIdent moduleIdent, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)moduleIdent;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18540))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 18638))+4) = i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18581))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18767)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)),OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleIdent)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 19053)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 19147))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 19105))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19122)))), &_td_OOC_AST_ExtTree__FlagsDesc, 19122));
l4:
  i1 = (OOC_INT32)exprList;
  *(OOC_INT32*)((_check_pointer(i0, 19178))+8) = i1;
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 19208))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19226))+16) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayTypeDesc_Accept(OOC_AST_ExtTree__ArrayType arrayType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19342)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayType)),OOC_AST_ExtTree__VisitorDesc_VisitArrayType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FieldList(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FieldList fl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FieldList.baseTypes[0]);
  fl = (OOC_AST_ExtTree__FieldList)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 19530)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 19562))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19586))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FieldListDesc_Accept(OOC_AST_ExtTree__FieldList fieldList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fieldList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19702)))), OOC_AST_ExtTree__VisitorDesc_VisitFieldList)),OOC_AST_ExtTree__VisitorDesc_VisitFieldList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FieldList)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 19955)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20051))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20009))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20026)))), &_td_OOC_AST_ExtTree__FlagsDesc, 20026));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 20082))+8) = i1;
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 20108))+12) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 20138))+16) = i1;
  i1 = (OOC_INT32)fieldLists;
  *(OOC_INT32*)((_check_pointer(i0, 20164))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 20198))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RecordTypeDesc_Accept(OOC_AST_ExtTree__RecordType recordType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)recordType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20315)))), OOC_AST_ExtTree__VisitorDesc_VisitRecordType)),OOC_AST_ExtTree__VisitorDesc_VisitRecordType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RecordType)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 20516)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20614))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20572))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20589)))), &_td_OOC_AST_ExtTree__FlagsDesc, 20589));
l4:
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 20645))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 20663))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__PointerTypeDesc_Accept(OOC_AST_ExtTree__PointerType pointerType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)pointerType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20785)))), OOC_AST_ExtTree__VisitorDesc_VisitPointerType)),OOC_AST_ExtTree__VisitorDesc_VisitPointerType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__PointerType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FPSection(OOC_AST_ExtTree__Builder b, OOC_AST__Node var, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FPSection fp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FPSection.baseTypes[0]);
  fp = (OOC_AST_ExtTree__FPSection)i0;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)(_check_pointer(i0, 20992)) = i1;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)((_check_pointer(i0, 21012))+4) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 21044))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 21068))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FPSectionDesc_Accept(OOC_AST_ExtTree__FPSection fpSection, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fpSection;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21184)))), OOC_AST_ExtTree__VisitorDesc_VisitFPSection)),OOC_AST_ExtTree__VisitorDesc_VisitFPSection)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FPSection)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 21514)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 21472)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21489)))), &_td_OOC_AST_ExtTree__FlagsDesc, 21489));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 21545))+4) = i1;
  i1 = (OOC_INT32)fpSections;
  *(OOC_INT32*)((_check_pointer(i0, 21571))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 21605))+12) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 21631))+16) = i1;
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 21655))+20) = i1;
  i1 = (OOC_INT32)raises;
  *(OOC_INT32*)((_check_pointer(i0, 21681))+24) = i1;
  i1 = (OOC_INT32)raisesList;
  *(OOC_INT32*)((_check_pointer(i0, 21707))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FormalParsDesc_Accept(OOC_AST_ExtTree__FormalPars formalPars, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)formalPars;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21840)))), OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)),OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FormalPars)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 22032)) = i1;
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 22064))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcTypeDesc_Accept(OOC_AST_ExtTree__ProcType procType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22189)))), OOC_AST_ExtTree__VisitorDesc_VisitProcType)),OOC_AST_ExtTree__VisitorDesc_VisitProcType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TPSection(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TPSection tp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TPSection.baseTypes[0]);
  tp = (OOC_AST_ExtTree__TPSection)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)((_check_pointer(i0, 22375))+4) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 22407))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 22431))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TPSectionDesc_Accept(OOC_AST_ExtTree__TPSection tpSection, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tpSection;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22547)))), OOC_AST_ExtTree__VisitorDesc_VisitTPSection)),OOC_AST_ExtTree__VisitorDesc_VisitTPSection)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TPSection)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TypePars(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__NodeList tpSections, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TypePars tp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TypePars.baseTypes[0]);
  tp = (OOC_AST_ExtTree__TypePars)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 22815)) = i1;
  i1 = (OOC_INT32)tpSections;
  *(OOC_INT32*)((_check_pointer(i0, 22841))+4) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 22875))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TypeParsDesc_Accept(OOC_AST_ExtTree__TypePars typePars, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typePars;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22994)))), OOC_AST_ExtTree__VisitorDesc_VisitTypePars)),OOC_AST_ExtTree__VisitorDesc_VisitTypePars)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TypePars)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_QualType(OOC_AST_ExtTree__Builder b, OOC_AST__Node qualident, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__QualType qt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__QualType.baseTypes[0]);
  qt = (OOC_AST_ExtTree__QualType)i0;
  i1 = (OOC_INT32)qualident;
  *(OOC_INT32*)(_check_pointer(i0, 23310)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23334)))), &_td_OOC_AST_ExtTree__NodeDesc, 23334));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 23347))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23365)))), &_td_OOC_AST_ExtTree__TerminalDesc, 23365));
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 23382))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 23413))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23431)))), &_td_OOC_AST_ExtTree__TerminalDesc, 23431));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__QualTypeDesc_Accept(OOC_AST_ExtTree__QualType qualType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)qualType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23542)))), OOC_AST_ExtTree__VisitorDesc_VisitQualType)),OOC_AST_ExtTree__VisitorDesc_VisitQualType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__QualType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node alias, OOC_AST__Node becomes, OOC_AST__Node module, OOC_Scanner_InputBuffer__CharArray moduleName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportDecl id;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportDecl.baseTypes[0]);
  id = (OOC_AST_ExtTree__ImportDecl)i0;
  i1 = (OOC_INT32)alias;
  *(OOC_INT32*)(_check_pointer(i0, 23775)) = i1;
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 23799))+4) = i1;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 23827))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23846)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 23846));
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 23866))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportDeclDesc_Accept(OOC_AST_ExtTree__ImportDecl importDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23997)))), OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)),OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ConstDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node flags, OOC_AST__Node equal, OOC_AST__Node expr, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ConstDecl cd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ConstDecl.baseTypes[0]);
  cd = (OOC_AST_ExtTree__ConstDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 24225)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24248)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 24248));
  i1 = (OOC_INT32)flags;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24326))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24343)))), &_td_OOC_AST_ExtTree__FlagsDesc, 24343));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24293))+4) = 0;
l4:
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 24366))+8) = i1;
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 24390))+12) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 24412))+16) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ConstDeclDesc_Accept(OOC_AST_ExtTree__ConstDecl constDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)constDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24538)))), OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)),OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ConstDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TypeDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node flags, OOC_AST__Node typePars, OOC_AST__Node equal, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__TypeDecl td;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TypeDecl.baseTypes[0]);
  td = (OOC_AST_ExtTree__TypeDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 24771)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24794)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 24794));
  i1 = (OOC_INT32)flags;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24872))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24889)))), &_td_OOC_AST_ExtTree__FlagsDesc, 24889));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24839))+4) = 0;
l4:
  i1 = (OOC_INT32)typePars;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 24979))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25002)))), &_td_OOC_AST_ExtTree__TypeParsDesc, 25002));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 24943))+8) = 0;
l8:
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 25028))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 25052))+16) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 25074))+20) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TypeDeclDesc_Accept(OOC_AST_ExtTree__TypeDecl typeDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typeDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25197)))), OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)),OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TypeDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_VarDecl(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__VarDecl vd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__VarDecl.baseTypes[0]);
  vd = (OOC_AST_ExtTree__VarDecl)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 25390)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 25422))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 25446))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 25468))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__VarDeclDesc_Accept(OOC_AST_ExtTree__VarDecl varDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)varDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25588)))), OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)),OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__VarDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Receiver(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node var, OOC_AST__Node ident, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node lParenAlias, OOC_AST__NodeList aliasList, OOC_AST__Node rParenAlias, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Receiver r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Receiver.baseTypes[0]);
  r = (OOC_AST_ExtTree__Receiver)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 25933)) = i1;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 25958))+4) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 25977))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25994)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 25994));
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 26010))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 26033))+16) = i1;
  i1 = (OOC_INT32)lParenAlias;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26234))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 26263))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 26290))+28) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26088))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26117)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26117));
  i1 = (OOC_INT32)aliasList;
  *(OOC_INT32*)((_check_pointer(i0, 26135))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26160)))), &_td_OOC_AST_ExtTree__NodeListDesc, 26160));
  i1 = (OOC_INT32)rParenAlias;
  *(OOC_INT32*)((_check_pointer(i0, 26178))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26207)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26207));
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 26326))+32) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReceiverDesc_Accept(OOC_AST_ExtTree__Receiver receiver, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)receiver;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26442)))), OOC_AST_ExtTree__VisitorDesc_VisitReceiver)),OOC_AST_ExtTree__VisitorDesc_VisitReceiver)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Receiver)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node proc, OOC_AST__Node arrow, OOC_AST__Node receiver, OOC_AST__Node flags, OOC_AST__Node identDef, OOC_AST__Node formalPars, OOC_AST__Node semicolon1, OOC_AST__Node body, OOC_AST__Node semicolon2) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ProcDecl pd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcDecl.baseTypes[0]);
  pd = (OOC_AST_ExtTree__ProcDecl)i0;
  i1 = (OOC_INT32)proc;
  *(OOC_INT32*)(_check_pointer(i0, 26736)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26751)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26751));
  i1 = (OOC_INT32)arrow;
  *(OOC_INT32*)((_check_pointer(i0, 26768))+4) = i1;
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i0, 26792))+8) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26892))+12) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26850))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26867)))), &_td_OOC_AST_ExtTree__FlagsDesc, 26867));
l4:
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)((_check_pointer(i0, 26923))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26946)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 26946));
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 26963))+20) = i1;
  i1 = (OOC_INT32)semicolon1;
  *(OOC_INT32*)((_check_pointer(i0, 26997))+24) = i1;
  i1 = (OOC_INT32)body;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 27089))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27104)))), &_td_OOC_AST_ExtTree__BodyDesc, 27104));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 27058))+28) = 0;
l8:
  i1 = (OOC_INT32)semicolon2;
  *(OOC_INT32*)((_check_pointer(i0, 27125))+32) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcDeclDesc_Accept(OOC_AST_ExtTree__ProcDecl procDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27250)))), OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)),OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportList(OOC_AST_ExtTree__Builder b, OOC_AST__Node import, OOC_AST__NodeList imports, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportList.baseTypes[0]);
  il = (OOC_AST_ExtTree__ImportList)i0;
  i1 = (OOC_INT32)import;
  *(OOC_INT32*)(_check_pointer(i0, 27483)) = i1;
  i1 = (OOC_INT32)imports;
  *(OOC_INT32*)((_check_pointer(i0, 27509))+4) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 27537))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportListDesc_Accept(OOC_AST_ExtTree__ImportList importList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27666)))), OOC_AST_ExtTree__VisitorDesc_VisitImportList)),OOC_AST_ExtTree__VisitorDesc_VisitImportList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportList)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Body(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList declSeq, OOC_AST__Node begin, OOC_AST__NodeList statmSeq, OOC_AST__Node end, OOC_AST__Node name) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Body body;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Body.baseTypes[0]);
  body = (OOC_AST_ExtTree__Body)i0;
  i1 = (OOC_INT32)declSeq;
  *(OOC_INT32*)(_check_pointer(i0, 27954)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27975)))), &_td_OOC_AST_ExtTree__NodeListDesc, 27975));
  i1 = (OOC_INT32)begin;
  *(OOC_INT32*)((_check_pointer(i0, 27994))+4) = i1;
  i1 = (OOC_INT32)statmSeq;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28089))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28112)))), &_td_OOC_AST_ExtTree__NodeListDesc, 28112));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28051))+8) = 0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 28139))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28152)))), &_td_OOC_AST_ExtTree__TerminalDesc, 28152));
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 28171))+16) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__BodyDesc_Accept(OOC_AST_ExtTree__Body body, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)body;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28274)))), OOC_AST_ExtTree__VisitorDesc_VisitBody)),OOC_AST_ExtTree__VisitorDesc_VisitBody)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Body)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 28584)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28603)))), &_td_OOC_AST_ExtTree__TerminalDesc, 28603));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 28552)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 28627))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28642)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 28642));
  i1 = (OOC_INT32)flags;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 28729))+8) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 28689))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28706)))), &_td_OOC_AST_ExtTree__FlagsDesc, 28706));
l8:
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 28758))+12) = i1;
  i1 = (OOC_INT32)importList;
  *(OOC_INT32*)((_check_pointer(i0, 28789))+16) = i1;
  i1 = (OOC_INT32)body;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 28886))+20) = (OOC_INT32)0;
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 28849))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28864)))), &_td_OOC_AST_ExtTree__BodyDesc, 28864));
l12:
  i1 = (OOC_INT32)period;
  *(OOC_INT32*)((_check_pointer(i0, 28914))+24) = i1;
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 28939))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleDesc_Accept(OOC_AST_ExtTree__Module module, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29057)))), OOC_AST_ExtTree__VisitorDesc_VisitModule)),OOC_AST_ExtTree__VisitorDesc_VisitModule)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Module)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 29271)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29286)))), &_td_OOC_AST_ExtTree__NodeDesc, 29286));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 29241)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)op;
  *(OOC_INT32*)((_check_pointer(i0, 29306))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29317)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29317));
  i1 = (OOC_INT32)right;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 29392))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29409)))), &_td_OOC_AST_ExtTree__NodeDesc, 29409));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 29361))+8) = (OOC_INT32)0;
l8:
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__OperatorDesc_Accept(OOC_AST_ExtTree__Operator _operator, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_operator;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29520)))), OOC_AST_ExtTree__VisitorDesc_VisitOperator)),OOC_AST_ExtTree__VisitorDesc_VisitOperator)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Operator)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Factor(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node expr, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Factor f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Factor.baseTypes[0]);
  f = (OOC_AST_ExtTree__Factor)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 29681)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29700)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29700));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 29716))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29731)))), &_td_OOC_AST_ExtTree__NodeDesc, 29731));
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 29743))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29762)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29762));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FactorDesc_Accept(OOC_AST_ExtTree__Factor factor, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)factor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29863)))), OOC_AST_ExtTree__VisitorDesc_VisitFactor)),OOC_AST_ExtTree__VisitorDesc_VisitFactor)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Factor)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Set(OOC_AST_ExtTree__Builder b, OOC_AST__Node type, OOC_AST__Node lBrace, OOC_AST__NodeList elementList, OOC_AST__Node rBrace) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Set s;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Set.baseTypes[0]);
  s = (OOC_AST_ExtTree__Set)i0;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)(_check_pointer(i0, 30051)) = i1;
  i1 = (OOC_INT32)lBrace;
  *(OOC_INT32*)((_check_pointer(i0, 30072))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30091)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30091));
  i1 = (OOC_INT32)elementList;
  *(OOC_INT32*)((_check_pointer(i0, 30107))+8) = i1;
  i1 = (OOC_INT32)rBrace;
  *(OOC_INT32*)((_check_pointer(i0, 30142))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30161)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30161));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__SetDesc_Accept(OOC_AST_ExtTree__Set set, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)set;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30253)))), OOC_AST_ExtTree__VisitorDesc_VisitSet)),OOC_AST_ExtTree__VisitorDesc_VisitSet)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Set)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ArrayIndex(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lBrak, OOC_AST__NodeList indices, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ArrayIndex ai;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ArrayIndex.baseTypes[0]);
  ai = (OOC_AST_ExtTree__ArrayIndex)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 30448)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30467)))), &_td_OOC_AST_ExtTree__NodeDesc, 30467));
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 30480))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30497)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30497));
  i1 = (OOC_INT32)indices;
  *(OOC_INT32*)((_check_pointer(i0, 30514))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30535)))), &_td_OOC_AST_ExtTree__NodeListDesc, 30535));
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 30552))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30569)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30569));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayIndexDesc_Accept(OOC_AST_ExtTree__ArrayIndex arrayIndex, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayIndex;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30683)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)),OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayIndex)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FunctionCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FunctionCall fc;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FunctionCall.baseTypes[0]);
  fc = (OOC_AST_ExtTree__FunctionCall)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 30900)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30919)))), &_td_OOC_AST_ExtTree__NodeDesc, 30919));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 30932))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30951)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30951));
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 30968))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 31000))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31019)))), &_td_OOC_AST_ExtTree__TerminalDesc, 31019));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FunctionCallDesc_Accept(OOC_AST_ExtTree__FunctionCall functionCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)functionCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31139)))), OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)),OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FunctionCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Assignment(OOC_AST_ExtTree__Builder b, OOC_AST__Node assignment) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Assignment a;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Assignment.baseTypes[0]);
  a = (OOC_AST_ExtTree__Assignment)i0;
  i1 = (OOC_INT32)assignment;
  *(OOC_INT32*)(_check_pointer(i0, 31306)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31333)))), &_td_OOC_AST_ExtTree__OperatorDesc, 31333));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__AssignmentDesc_Accept(OOC_AST_ExtTree__Assignment assignment, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)assignment;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31446)))), OOC_AST_ExtTree__VisitorDesc_VisitAssignment)),OOC_AST_ExtTree__VisitorDesc_VisitAssignment)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Assignment)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcedureCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node call) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcedureCall p;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcedureCall.baseTypes[0]);
  p = (OOC_AST_ExtTree__ProcedureCall)i0;
  i1 = (OOC_INT32)call;
  *(OOC_INT32*)(_check_pointer(i0, 31609)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31624)))), &_td_OOC_AST_ExtTree__NodeDesc, 31624));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcedureCallDesc_Accept(OOC_AST_ExtTree__ProcedureCall procedureCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedureCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31742)))), OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)),OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcedureCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_IfStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__IfStatm i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__IfStatm.baseTypes[0]);
  i = (OOC_AST_ExtTree__IfStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 31967)) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 31998))+4) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 32112))+8) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 32054))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32085)))), &_td_OOC_AST_ExtTree__NodeListDesc, 32085));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 32149))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IfStatmDesc_Accept(OOC_AST_ExtTree__IfStatm ifStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ifStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32256)))), OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)),OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IfStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_CaseStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _case, OOC_AST__Node expr, OOC_AST__Node of, OOC_AST__NodeList caseList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__CaseStatm c;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__CaseStatm.baseTypes[0]);
  c = (OOC_AST_ExtTree__CaseStatm)i0;
  i1 = (OOC_INT32)_case;
  *(OOC_INT32*)(_check_pointer(i0, 32498)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32513)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32513));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 32529))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32544)))), &_td_OOC_AST_ExtTree__NodeDesc, 32544));
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 32556))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 32573))+12) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 32602))+16) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 32697))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32728)))), &_td_OOC_AST_ExtTree__NodeListDesc, 32728));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 32658))+20) = 0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 32753))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__CaseStatmDesc_Accept(OOC_AST_ExtTree__CaseStatm caseStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)caseStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32866)))), OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)),OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__CaseStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WhileStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _while, OOC_AST__Node guard, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__WhileStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WhileStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WhileStatm)i0;
  i1 = (OOC_INT32)_while;
  *(OOC_INT32*)(_check_pointer(i0, 33072)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33089)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33089));
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 33105))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33122)))), &_td_OOC_AST_ExtTree__NodeDesc, 33122));
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 33134))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33145)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33145));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 33161))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33184)))), &_td_OOC_AST_ExtTree__NodeListDesc, 33184));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 33200))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33213)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33213));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WhileStatmDesc_Accept(OOC_AST_ExtTree__WhileStatm whileStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)whileStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33326)))), OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WhileStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_RepeatStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node repeat, OOC_AST__NodeList statmSeq, OOC_AST__Node until, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__RepeatStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__RepeatStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__RepeatStatm)i0;
  i1 = (OOC_INT32)repeat;
  *(OOC_INT32*)(_check_pointer(i0, 33534)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33553)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33553));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 33569))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33592)))), &_td_OOC_AST_ExtTree__NodeListDesc, 33592));
  i1 = (OOC_INT32)until;
  *(OOC_INT32*)((_check_pointer(i0, 33608))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33625)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33625));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 33641))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33656)))), &_td_OOC_AST_ExtTree__NodeDesc, 33656));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RepeatStatmDesc_Accept(OOC_AST_ExtTree__RepeatStatm repeatStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)repeatStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33768)))), OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)),OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RepeatStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ForStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _for, OOC_AST__Node ident, OOC_AST__Node becomes, OOC_AST__Node startValue, OOC_AST__Node to, OOC_AST__Node endValue, OOC_AST__Node by, OOC_AST__Node step, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ForStatm f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ForStatm.baseTypes[0]);
  f = (OOC_AST_ExtTree__ForStatm)i0;
  i1 = (OOC_INT32)_for;
  *(OOC_INT32*)(_check_pointer(i0, 34017)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34030)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34030));
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 34046))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34063)))), &_td_OOC_AST_ExtTree__NodeDesc, 34063));
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 34075))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34096)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34096));
  i1 = (OOC_INT32)startValue;
  *(OOC_INT32*)((_check_pointer(i0, 34112))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34139)))), &_td_OOC_AST_ExtTree__NodeDesc, 34139));
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 34151))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34162)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34162));
  i1 = (OOC_INT32)endValue;
  *(OOC_INT32*)((_check_pointer(i0, 34178))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34201)))), &_td_OOC_AST_ExtTree__NodeDesc, 34201));
  i1 = (OOC_INT32)step;
  i2 = i1==0;
  if (i2) goto l3;
  i2 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i0, 34291))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34302)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34302));
  *(OOC_INT32*)((_check_pointer(i0, 34320))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34335)))), &_td_OOC_AST_ExtTree__NodeDesc, 34335));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 34240))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 34260))+28) = 0;
l4:
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 34356))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34367)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34367));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 34383))+36) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34406)))), &_td_OOC_AST_ExtTree__NodeListDesc, 34406));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 34422))+40) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34435)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34435));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ForStatmDesc_Accept(OOC_AST_ExtTree__ForStatm forStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)forStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34542)))), OOC_AST_ExtTree__VisitorDesc_VisitForStatm)),OOC_AST_ExtTree__VisitorDesc_VisitForStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ForStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_LoopStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node loop, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LoopStatm l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LoopStatm.baseTypes[0]);
  l = (OOC_AST_ExtTree__LoopStatm)i0;
  i1 = (OOC_INT32)loop;
  *(OOC_INT32*)(_check_pointer(i0, 34732)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34747)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34747));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 34763))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34786)))), &_td_OOC_AST_ExtTree__NodeListDesc, 34786));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 34802))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34815)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34815));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__LoopStatmDesc_Accept(OOC_AST_ExtTree__LoopStatm loopStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)loopStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34925)))), OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)),OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LoopStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WithStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__WithStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WithStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WithStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 35146)) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 35177))+4) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 35291))+8) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 35233))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35264)))), &_td_OOC_AST_ExtTree__NodeListDesc, 35264));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 35328))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WithStatmDesc_Accept(OOC_AST_ExtTree__WithStatm withStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)withStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35441)))), OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WithStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ExitStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node exit) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ExitStatm e;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ExitStatm.baseTypes[0]);
  e = (OOC_AST_ExtTree__ExitStatm)i0;
  i1 = (OOC_INT32)exit;
  *(OOC_INT32*)(_check_pointer(i0, 35594)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35609)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35609));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ExitStatmDesc_Accept(OOC_AST_ExtTree__ExitStatm exitStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)exitStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35719)))), OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)),OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ExitStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ReturnStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _return, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ReturnStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ReturnStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__ReturnStatm)i0;
  i1 = (OOC_INT32)_return;
  *(OOC_INT32*)(_check_pointer(i0, 35884)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35903)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35903));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 35919))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReturnStatmDesc_Accept(OOC_AST_ExtTree__ReturnStatm returnStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)returnStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36040)))), OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)),OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ReturnStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Catch(OOC_AST_ExtTree__Builder b, OOC_AST__Node _catch, OOC_AST__Node type, OOC_AST__Node lParen, OOC_AST__Node ident, OOC_AST__Node rParen, OOC_AST__Node colon, OOC_AST__NodeList statmSeq) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Catch c;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Catch.baseTypes[0]);
  c = (OOC_AST_ExtTree__Catch)i0;
  i1 = (OOC_INT32)_catch;
  *(OOC_INT32*)(_check_pointer(i0, 36278)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36294)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36294));
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 36310))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36324)))), &_td_OOC_AST_ExtTree__NodeDesc, 36324));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 36336))+8) = i1;
  i1 = (OOC_INT32)ident;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 36419))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36435)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36435));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 36388))+12) = 0;
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 36460))+16) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 36484))+20) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 36506))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36528)))), &_td_OOC_AST_ExtTree__NodeListDesc, 36528));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__CatchDesc_Accept(OOC_AST_ExtTree__Catch _catch, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_catch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36627)))), OOC_AST_ExtTree__VisitorDesc_VisitCatch)),OOC_AST_ExtTree__VisitorDesc_VisitCatch)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Catch)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TryStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _try, OOC_AST__NodeList statmSeq, OOC_AST__NodeList catchList, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TryStatm t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TryStatm.baseTypes[0]);
  t = (OOC_AST_ExtTree__TryStatm)i0;
  i1 = (OOC_INT32)_try;
  *(OOC_INT32*)(_check_pointer(i0, 36866)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36878)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36878));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 36894))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36916)))), &_td_OOC_AST_ExtTree__NodeListDesc, 36916));
  i1 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i0, 36932))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36956)))), &_td_OOC_AST_ExtTree__NodeListDesc, 36956));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 36972))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36984)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36984));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TryStatmDesc_Accept(OOC_AST_ExtTree__TryStatm tryStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tryStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37092)))), OOC_AST_ExtTree__VisitorDesc_VisitTryStatm)),OOC_AST_ExtTree__VisitorDesc_VisitTryStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TryStatm)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Flags(OOC_AST_ExtTree__Builder b, OOC_INT8 context, OOC_AST__Node lBrak, OOC_AST__NodeList flagList, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Flags f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Flags.baseTypes[0]);
  f = (OOC_AST_ExtTree__Flags)i0;
  i1 = context;
  *(OOC_INT8*)(_check_pointer(i0, 37332)) = i1;
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 37359))+4) = i1;
  i1 = (OOC_INT32)flagList;
  *(OOC_INT32*)((_check_pointer(i0, 37382))+8) = i1;
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 37411))+12) = i1;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37638)))), &_td_OOC_AST_ExtTree__FlagsDesc, 37638)), 37644))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37654))+4);
  i0 = _check_pointer(i0, 37657);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 37657))*4);
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37661)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  
l5:
  if (i0) goto l7;
  return 0u;
  goto l26;
l7:
  i0 = (OOC_INT32)procFlags;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l25;
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37918)))), &_td_OOC_AST_ExtTree__FlagsDesc, 37918)), 37924))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 37934));
  i1 = 0<i1;
  if (!i1) goto l25;
  i1=0;
l12_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37969)))), &_td_OOC_AST_ExtTree__FlagsDesc, 37969)), 37975))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37985))+4);
  i2 = _check_pointer(i2, 37988);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 37988))*4);
  n = (OOC_AST__Node)i2;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38009)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i3) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38027)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38027)), 38036));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38041))+8);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 38046)),(const void*)"HAS_BODY"))==0;
  
l17:
  if (!i2) goto l19;
  return 0u;
l19:
  i1 = i1+2;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37918)))), &_td_OOC_AST_ExtTree__FlagsDesc, 37918)), 37924))+8);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 37934));
  i2 = i1<i2;
  if (i2) goto l12_loop;
l25:
  return 1u;
l26:
  _failed_function(37479); return 0;
  ;
}

void OOC_AST_ExtTree__FlagsDesc_Accept(OOC_AST_ExtTree__Flags flags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)flags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38290)))), OOC_AST_ExtTree__VisitorDesc_VisitFlags)),OOC_AST_ExtTree__VisitorDesc_VisitFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Flags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ProcIdFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node procId, OOC_AST__Node equal, OOC_AST__Node number) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcIdFlag pid;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcIdFlag.baseTypes[0]);
  pid = (OOC_AST_ExtTree__ProcIdFlag)i0;
  i1 = (OOC_INT32)procId;
  *(OOC_INT32*)(_check_pointer(i0, 38464)) = i1;
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 38491))+4) = i1;
  i1 = (OOC_INT32)number;
  *(OOC_INT32*)((_check_pointer(i0, 38516))+8) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcIdFlagDesc_Accept(OOC_AST_ExtTree__ProcIdFlag procIdFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procIdFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38640)))), OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)),OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcIdFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ModuleFlags(OOC_AST_ExtTree__Builder b, OOC_AST__Node external, OOC_AST__Node callConv, OOC_AST__NodeList moduleFlags, OOC_AST__Node semicolon, OOC_AST__Node link, OOC_AST__NodeList linkSections, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleFlags mf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleFlags.baseTypes[0]);
  mf = (OOC_AST_ExtTree__ModuleFlags)i0;
  i1 = (OOC_INT32)external;
  *(OOC_INT32*)(_check_pointer(i0, 38958)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38981)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38981));
  i1 = (OOC_INT32)callConv;
  *(OOC_INT32*)((_check_pointer(i0, 38998))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39021)))), &_td_OOC_AST_ExtTree__TerminalDesc, 39021));
  i1 = (OOC_INT32)moduleFlags;
  *(OOC_INT32*)((_check_pointer(i0, 39038))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 39074))+12) = i1;
  i1 = (OOC_INT32)link;
  *(OOC_INT32*)((_check_pointer(i0, 39106))+16) = i1;
  i1 = (OOC_INT32)linkSections;
  *(OOC_INT32*)((_check_pointer(i0, 39128))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 39166))+24) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleFlagsDesc_Accept(OOC_AST_ExtTree__ModuleFlags moduleFlags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleFlags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39286)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)),OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleFlags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkFileFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node file, OOC_AST__Node fileName, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkFileFlag lff;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkFileFlag.baseTypes[0]);
  lff = (OOC_AST_ExtTree__LinkFileFlag)i0;
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)(_check_pointer(i0, 39509)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 39532))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39555)))), &_td_OOC_AST_ExtTree__TerminalDesc, 39555));
  i1 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 39573))+8) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 39675))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39700)))), &_td_OOC_AST_ExtTree__TerminalDesc, 39700));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 39638))+12) = 0;
l4:
  i1 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 39726))+16) = i1;
  i1 = (OOC_INT32)suffixOpt;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 39820))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39845)))), &_td_OOC_AST_ExtTree__TerminalDesc, 39845));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 39783))+20) = 0;
l8:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkFileFlagDesc_Accept(OOC_AST_ExtTree__LinkFileFlag linkFileFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkFileFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39974)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkFileFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkObjFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node obj, OOC_AST__Node fileName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LinkObjFlag lof;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkObjFlag.baseTypes[0]);
  lof = (OOC_AST_ExtTree__LinkObjFlag)i0;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)(_check_pointer(i0, 40156)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 40177))+4) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkObjFlagDesc_Accept(OOC_AST_ExtTree__LinkObjFlag linkObjFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkObjFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40308)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkObjFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkLibFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node lib, OOC_AST__Node libName, OOC_AST__Node lParen, OOC_AST__NodeList dependencies, OOC_AST__Node rParen, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkLibFlag llf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkLibFlag.baseTypes[0]);
  llf = (OOC_AST_ExtTree__LinkLibFlag)i0;
  i1 = (OOC_INT32)lib;
  *(OOC_INT32*)(_check_pointer(i0, 40617)) = i1;
  i1 = (OOC_INT32)libName;
  *(OOC_INT32*)((_check_pointer(i0, 40638))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40659)))), &_td_OOC_AST_ExtTree__TerminalDesc, 40659));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 40677))+8) = i1;
  i1 = (OOC_INT32)dependencies;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 40780))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40811)))), &_td_OOC_AST_ExtTree__NodeListDesc, 40811));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 40739))+12) = 0;
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 40838))+16) = i1;
  i1 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 40865))+20) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 40967))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40992)))), &_td_OOC_AST_ExtTree__TerminalDesc, 40992));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 40930))+24) = 0;
l8:
  i1 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 41018))+28) = i1;
  i1 = (OOC_INT32)suffixOpt;
  i2 = i1==0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 41112))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41137)))), &_td_OOC_AST_ExtTree__TerminalDesc, 41137));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 41075))+32) = 0;
l12:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkLibFlagDesc_Accept(OOC_AST_ExtTree__LinkLibFlag linkLibFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkLibFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41263)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkLibFlag)i1);
  return;
  ;
}

void OOC_OOC_AST_ExtTree_init(void) {

  return;
  ;
}

/* --- */
