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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 11991));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12014))+4);
  i4 = _check_pointer(i4, 12017);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 12017))*4);
  i4 = i4!=0;
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12043))+4);
  i4 = _check_pointer(i4, 12046);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 12046))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12043))+4);
  i5 = _check_pointer(i5, 12046);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 12046))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12050)))), &_td_OOC_AST_ExtTree__NodeDesc, 12050)), 12055)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12050)))), &_td_OOC_AST_ExtTree__NodeDesc, 12050)), (OOC_AST_ExtTree__Visitor)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16493)))), OOC_AST_ExtTree__VisitorDesc_VisitNodeList)),OOC_AST_ExtTree__VisitorDesc_VisitNodeList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__NodeList)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Terminal(OOC_AST_ExtTree__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Terminal t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Terminal.baseTypes[0]);
  t = (OOC_AST_ExtTree__Terminal)i0;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 16643)) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TerminalDesc_Accept(OOC_AST_ExtTree__Terminal terminal, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)terminal;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16753)))), OOC_AST_ExtTree__VisitorDesc_VisitTerminal)),OOC_AST_ExtTree__VisitorDesc_VisitTerminal)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Terminal)i1);
  return;
  ;
}

Object__String OOC_AST_ExtTree__TerminalDesc_GetString(OOC_AST_ExtTree__Terminal terminal, OOC_CHAR8 stripQuotes) {
  register OOC_INT32 i0,i1,i2;

  i0 = stripQuotes;
  if (i0) goto l3;
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17063));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17068))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17063));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17068))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17073)), 0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 17073)), i0);
  return (Object__String)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)terminal;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16946));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16951))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16946));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16951))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17001));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 17006))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16956)), 0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i1, 16956)), i2, 1, (i0-1));
  return (Object__String)i0;
l4:
  _failed_function(16826); return 0;
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
  *(OOC_INT32*)(_check_pointer(i0, 17291)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 17247)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17264)))), &_td_OOC_AST_ExtTree__TerminalDesc, 17264));
l4:
  i1 = (OOC_INT32)mark;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 17390))+4) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 17348))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17363)))), &_td_OOC_AST_ExtTree__TerminalDesc, 17363));
l8:
  *(OOC_INT32*)((_check_pointer(i0, 17419))+8) = (OOC_INT32)0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IdentDefDesc_AttachDocString(OOC_AST_ExtTree__IdentDef identDef, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)identDef;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17569))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 17661))+8) = i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17607))+8);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17784)))), OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)),OOC_AST_ExtTree__VisitorDesc_VisitIdentDef)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IdentDef)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ModuleIdent(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList nameList) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleIdent moduleIdent;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleIdent.baseTypes[0]);
  moduleIdent = (OOC_AST_ExtTree__ModuleIdent)i0;
  i1 = (OOC_INT32)nameList;
  *(OOC_INT32*)(_check_pointer(i0, 17977)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 18016))+4) = 0;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleIdentDesc_AttachDocString(OOC_AST_ExtTree__ModuleIdent moduleIdent, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)moduleIdent;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18187))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 18285))+4) = i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18228))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18414)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)),OOC_AST_ExtTree__VisitorDesc_VisitModuleIdent)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleIdent)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 18700)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18794))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 18752))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18769)))), &_td_OOC_AST_ExtTree__FlagsDesc, 18769));
l4:
  i1 = (OOC_INT32)exprList;
  *(OOC_INT32*)((_check_pointer(i0, 18825))+8) = i1;
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 18855))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 18873))+16) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayTypeDesc_Accept(OOC_AST_ExtTree__ArrayType arrayType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18989)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayType)),OOC_AST_ExtTree__VisitorDesc_VisitArrayType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FieldList(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FieldList fl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FieldList.baseTypes[0]);
  fl = (OOC_AST_ExtTree__FieldList)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 19177)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 19209))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 19233))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FieldListDesc_Accept(OOC_AST_ExtTree__FieldList fieldList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fieldList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19349)))), OOC_AST_ExtTree__VisitorDesc_VisitFieldList)),OOC_AST_ExtTree__VisitorDesc_VisitFieldList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FieldList)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 19602)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 19698))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 19656))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19673)))), &_td_OOC_AST_ExtTree__FlagsDesc, 19673));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 19729))+8) = i1;
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 19755))+12) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 19785))+16) = i1;
  i1 = (OOC_INT32)fieldLists;
  *(OOC_INT32*)((_check_pointer(i0, 19811))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 19845))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RecordTypeDesc_Accept(OOC_AST_ExtTree__RecordType recordType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)recordType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19962)))), OOC_AST_ExtTree__VisitorDesc_VisitRecordType)),OOC_AST_ExtTree__VisitorDesc_VisitRecordType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RecordType)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 20163)) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20261))+4) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20219))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20236)))), &_td_OOC_AST_ExtTree__FlagsDesc, 20236));
l4:
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 20292))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 20310))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__PointerTypeDesc_Accept(OOC_AST_ExtTree__PointerType pointerType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)pointerType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20432)))), OOC_AST_ExtTree__VisitorDesc_VisitPointerType)),OOC_AST_ExtTree__VisitorDesc_VisitPointerType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__PointerType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FPSection(OOC_AST_ExtTree__Builder b, OOC_AST__Node var, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FPSection fp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FPSection.baseTypes[0]);
  fp = (OOC_AST_ExtTree__FPSection)i0;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)(_check_pointer(i0, 20639)) = i1;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)((_check_pointer(i0, 20659))+4) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 20691))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 20715))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FPSectionDesc_Accept(OOC_AST_ExtTree__FPSection fpSection, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)fpSection;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20831)))), OOC_AST_ExtTree__VisitorDesc_VisitFPSection)),OOC_AST_ExtTree__VisitorDesc_VisitFPSection)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FPSection)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 21161)) = (OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 21119)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21136)))), &_td_OOC_AST_ExtTree__FlagsDesc, 21136));
l4:
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 21192))+4) = i1;
  i1 = (OOC_INT32)fpSections;
  *(OOC_INT32*)((_check_pointer(i0, 21218))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 21252))+12) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 21278))+16) = i1;
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 21302))+20) = i1;
  i1 = (OOC_INT32)raises;
  *(OOC_INT32*)((_check_pointer(i0, 21328))+24) = i1;
  i1 = (OOC_INT32)raisesList;
  *(OOC_INT32*)((_check_pointer(i0, 21354))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FormalParsDesc_Accept(OOC_AST_ExtTree__FormalPars formalPars, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)formalPars;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21487)))), OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)),OOC_AST_ExtTree__VisitorDesc_VisitFormalPars)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FormalPars)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 21679)) = i1;
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 21711))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcTypeDesc_Accept(OOC_AST_ExtTree__ProcType procType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21836)))), OOC_AST_ExtTree__VisitorDesc_VisitProcType)),OOC_AST_ExtTree__VisitorDesc_VisitProcType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TPSection(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TPSection tp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TPSection.baseTypes[0]);
  tp = (OOC_AST_ExtTree__TPSection)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)((_check_pointer(i0, 22022))+4) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 22054))+8) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 22078))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TPSectionDesc_Accept(OOC_AST_ExtTree__TPSection tpSection, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tpSection;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22194)))), OOC_AST_ExtTree__VisitorDesc_VisitTPSection)),OOC_AST_ExtTree__VisitorDesc_VisitTPSection)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TPSection)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TypePars(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__NodeList tpSections, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TypePars tp;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TypePars.baseTypes[0]);
  tp = (OOC_AST_ExtTree__TypePars)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 22462)) = i1;
  i1 = (OOC_INT32)tpSections;
  *(OOC_INT32*)((_check_pointer(i0, 22488))+4) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 22522))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TypeParsDesc_Accept(OOC_AST_ExtTree__TypePars typePars, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typePars;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22641)))), OOC_AST_ExtTree__VisitorDesc_VisitTypePars)),OOC_AST_ExtTree__VisitorDesc_VisitTypePars)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TypePars)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_QualType(OOC_AST_ExtTree__Builder b, OOC_AST__Node qualident, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__QualType qt;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__QualType.baseTypes[0]);
  qt = (OOC_AST_ExtTree__QualType)i0;
  i1 = (OOC_INT32)qualident;
  *(OOC_INT32*)(_check_pointer(i0, 22957)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22981)))), &_td_OOC_AST_ExtTree__NodeDesc, 22981));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 22994))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23012)))), &_td_OOC_AST_ExtTree__TerminalDesc, 23012));
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 23029))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 23060))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23078)))), &_td_OOC_AST_ExtTree__TerminalDesc, 23078));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__QualTypeDesc_Accept(OOC_AST_ExtTree__QualType qualType, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)qualType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23189)))), OOC_AST_ExtTree__VisitorDesc_VisitQualType)),OOC_AST_ExtTree__VisitorDesc_VisitQualType)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__QualType)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node alias, OOC_AST__Node becomes, OOC_AST__Node module, OOC_Scanner_InputBuffer__CharArray moduleName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportDecl id;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportDecl.baseTypes[0]);
  id = (OOC_AST_ExtTree__ImportDecl)i0;
  i1 = (OOC_INT32)alias;
  *(OOC_INT32*)(_check_pointer(i0, 23422)) = i1;
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 23446))+4) = i1;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 23474))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23493)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 23493));
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 23513))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportDeclDesc_Accept(OOC_AST_ExtTree__ImportDecl importDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23644)))), OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)),OOC_AST_ExtTree__VisitorDesc_VisitImportDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ConstDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node flags, OOC_AST__Node equal, OOC_AST__Node expr, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ConstDecl cd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ConstDecl.baseTypes[0]);
  cd = (OOC_AST_ExtTree__ConstDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 23872)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23895)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 23895));
  i1 = (OOC_INT32)flags;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 23973))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23990)))), &_td_OOC_AST_ExtTree__FlagsDesc, 23990));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 23940))+4) = 0;
l4:
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 24013))+8) = i1;
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 24037))+12) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 24059))+16) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ConstDeclDesc_Accept(OOC_AST_ExtTree__ConstDecl constDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)constDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24185)))), OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)),OOC_AST_ExtTree__VisitorDesc_VisitConstDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ConstDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TypeDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node identDef, OOC_AST__Node flags, OOC_AST__Node typePars, OOC_AST__Node equal, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__TypeDecl td;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TypeDecl.baseTypes[0]);
  td = (OOC_AST_ExtTree__TypeDecl)i0;
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)(_check_pointer(i0, 24418)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24441)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 24441));
  i1 = (OOC_INT32)flags;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24519))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24536)))), &_td_OOC_AST_ExtTree__FlagsDesc, 24536));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24486))+4) = 0;
l4:
  i1 = (OOC_INT32)typePars;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 24626))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24649)))), &_td_OOC_AST_ExtTree__TypeParsDesc, 24649));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 24590))+8) = 0;
l8:
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 24675))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 24699))+16) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 24721))+20) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TypeDeclDesc_Accept(OOC_AST_ExtTree__TypeDecl typeDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typeDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24844)))), OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)),OOC_AST_ExtTree__VisitorDesc_VisitTypeDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TypeDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_VarDecl(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__VarDecl vd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__VarDecl.baseTypes[0]);
  vd = (OOC_AST_ExtTree__VarDecl)i0;
  i1 = (OOC_INT32)identList;
  *(OOC_INT32*)(_check_pointer(i0, 25037)) = i1;
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 25069))+4) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 25093))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 25115))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__VarDeclDesc_Accept(OOC_AST_ExtTree__VarDecl varDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)varDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25235)))), OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)),OOC_AST_ExtTree__VisitorDesc_VisitVarDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__VarDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Receiver(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node var, OOC_AST__Node ident, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node lParenAlias, OOC_AST__NodeList aliasList, OOC_AST__Node rParenAlias, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Receiver r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Receiver.baseTypes[0]);
  r = (OOC_AST_ExtTree__Receiver)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 25580)) = i1;
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 25605))+4) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 25624))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25641)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 25641));
  i1 = (OOC_INT32)colon;
  *(OOC_INT32*)((_check_pointer(i0, 25657))+12) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 25680))+16) = i1;
  i1 = (OOC_INT32)lParenAlias;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 25881))+20) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 25910))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 25937))+28) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 25735))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25764)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25764));
  i1 = (OOC_INT32)aliasList;
  *(OOC_INT32*)((_check_pointer(i0, 25782))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25807)))), &_td_OOC_AST_ExtTree__NodeListDesc, 25807));
  i1 = (OOC_INT32)rParenAlias;
  *(OOC_INT32*)((_check_pointer(i0, 25825))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25854)))), &_td_OOC_AST_ExtTree__TerminalDesc, 25854));
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 25973))+32) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReceiverDesc_Accept(OOC_AST_ExtTree__Receiver receiver, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)receiver;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26089)))), OOC_AST_ExtTree__VisitorDesc_VisitReceiver)),OOC_AST_ExtTree__VisitorDesc_VisitReceiver)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Receiver)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcDecl(OOC_AST_ExtTree__Builder b, OOC_AST__Node proc, OOC_AST__Node arrow, OOC_AST__Node receiver, OOC_AST__Node flags, OOC_AST__Node identDef, OOC_AST__Node formalPars, OOC_AST__Node semicolon1, OOC_AST__Node body, OOC_AST__Node semicolon2) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ProcDecl pd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcDecl.baseTypes[0]);
  pd = (OOC_AST_ExtTree__ProcDecl)i0;
  i1 = (OOC_INT32)proc;
  *(OOC_INT32*)(_check_pointer(i0, 26383)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26398)))), &_td_OOC_AST_ExtTree__TerminalDesc, 26398));
  i1 = (OOC_INT32)arrow;
  *(OOC_INT32*)((_check_pointer(i0, 26415))+4) = i1;
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i0, 26439))+8) = i1;
  i1 = (OOC_INT32)flags;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26539))+12) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26497))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26514)))), &_td_OOC_AST_ExtTree__FlagsDesc, 26514));
l4:
  i1 = (OOC_INT32)identDef;
  *(OOC_INT32*)((_check_pointer(i0, 26570))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26593)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 26593));
  i1 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i0, 26610))+20) = i1;
  i1 = (OOC_INT32)semicolon1;
  *(OOC_INT32*)((_check_pointer(i0, 26644))+24) = i1;
  i1 = (OOC_INT32)body;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 26736))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26751)))), &_td_OOC_AST_ExtTree__BodyDesc, 26751));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 26705))+28) = 0;
l8:
  i1 = (OOC_INT32)semicolon2;
  *(OOC_INT32*)((_check_pointer(i0, 26772))+32) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcDeclDesc_Accept(OOC_AST_ExtTree__ProcDecl procDecl, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26897)))), OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)),OOC_AST_ExtTree__VisitorDesc_VisitProcDecl)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcDecl)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ImportList(OOC_AST_ExtTree__Builder b, OOC_AST__Node import, OOC_AST__NodeList imports, OOC_AST__Node semicolon) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ImportList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ImportList.baseTypes[0]);
  il = (OOC_AST_ExtTree__ImportList)i0;
  i1 = (OOC_INT32)import;
  *(OOC_INT32*)(_check_pointer(i0, 27130)) = i1;
  i1 = (OOC_INT32)imports;
  *(OOC_INT32*)((_check_pointer(i0, 27156))+4) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 27184))+8) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ImportListDesc_Accept(OOC_AST_ExtTree__ImportList importList, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)importList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27313)))), OOC_AST_ExtTree__VisitorDesc_VisitImportList)),OOC_AST_ExtTree__VisitorDesc_VisitImportList)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ImportList)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Body(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList declSeq, OOC_AST__Node begin, OOC_AST__NodeList statmSeq, OOC_AST__Node end, OOC_AST__Node name) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__Body body;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Body.baseTypes[0]);
  body = (OOC_AST_ExtTree__Body)i0;
  i1 = (OOC_INT32)declSeq;
  *(OOC_INT32*)(_check_pointer(i0, 27601)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27622)))), &_td_OOC_AST_ExtTree__NodeListDesc, 27622));
  i1 = (OOC_INT32)begin;
  *(OOC_INT32*)((_check_pointer(i0, 27641))+4) = i1;
  i1 = (OOC_INT32)statmSeq;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 27736))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27759)))), &_td_OOC_AST_ExtTree__NodeListDesc, 27759));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 27698))+8) = 0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 27786))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27799)))), &_td_OOC_AST_ExtTree__TerminalDesc, 27799));
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 27818))+16) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__BodyDesc_Accept(OOC_AST_ExtTree__Body body, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)body;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27921)))), OOC_AST_ExtTree__VisitorDesc_VisitBody)),OOC_AST_ExtTree__VisitorDesc_VisitBody)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Body)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 28231)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28250)))), &_td_OOC_AST_ExtTree__TerminalDesc, 28250));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 28199)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 28274))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28289)))), &_td_OOC_AST_ExtTree__ModuleIdentDesc, 28289));
  i1 = (OOC_INT32)flags;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 28376))+8) = (OOC_INT32)0;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 28336))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28353)))), &_td_OOC_AST_ExtTree__FlagsDesc, 28353));
l8:
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 28405))+12) = i1;
  i1 = (OOC_INT32)importList;
  *(OOC_INT32*)((_check_pointer(i0, 28436))+16) = i1;
  i1 = (OOC_INT32)body;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 28533))+20) = (OOC_INT32)0;
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 28496))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28511)))), &_td_OOC_AST_ExtTree__BodyDesc, 28511));
l12:
  i1 = (OOC_INT32)period;
  *(OOC_INT32*)((_check_pointer(i0, 28561))+24) = i1;
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 28586))+28) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleDesc_Accept(OOC_AST_ExtTree__Module module, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28704)))), OOC_AST_ExtTree__VisitorDesc_VisitModule)),OOC_AST_ExtTree__VisitorDesc_VisitModule)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Module)i1);
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
  *(OOC_INT32*)(_check_pointer(i0, 28918)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28933)))), &_td_OOC_AST_ExtTree__NodeDesc, 28933));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 28888)) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)op;
  *(OOC_INT32*)((_check_pointer(i0, 28953))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28964)))), &_td_OOC_AST_ExtTree__TerminalDesc, 28964));
  i1 = (OOC_INT32)right;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 29039))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29056)))), &_td_OOC_AST_ExtTree__NodeDesc, 29056));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 29008))+8) = (OOC_INT32)0;
l8:
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__OperatorDesc_Accept(OOC_AST_ExtTree__Operator _operator, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_operator;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29167)))), OOC_AST_ExtTree__VisitorDesc_VisitOperator)),OOC_AST_ExtTree__VisitorDesc_VisitOperator)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Operator)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Factor(OOC_AST_ExtTree__Builder b, OOC_AST__Node lParen, OOC_AST__Node expr, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Factor f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Factor.baseTypes[0]);
  f = (OOC_AST_ExtTree__Factor)i0;
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)(_check_pointer(i0, 29328)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29347)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29347));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 29363))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29378)))), &_td_OOC_AST_ExtTree__NodeDesc, 29378));
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 29390))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29409)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29409));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FactorDesc_Accept(OOC_AST_ExtTree__Factor factor, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)factor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29510)))), OOC_AST_ExtTree__VisitorDesc_VisitFactor)),OOC_AST_ExtTree__VisitorDesc_VisitFactor)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Factor)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Set(OOC_AST_ExtTree__Builder b, OOC_AST__Node type, OOC_AST__Node lBrace, OOC_AST__NodeList elementList, OOC_AST__Node rBrace) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Set s;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Set.baseTypes[0]);
  s = (OOC_AST_ExtTree__Set)i0;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)(_check_pointer(i0, 29698)) = i1;
  i1 = (OOC_INT32)lBrace;
  *(OOC_INT32*)((_check_pointer(i0, 29719))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29738)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29738));
  i1 = (OOC_INT32)elementList;
  *(OOC_INT32*)((_check_pointer(i0, 29754))+8) = i1;
  i1 = (OOC_INT32)rBrace;
  *(OOC_INT32*)((_check_pointer(i0, 29789))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29808)))), &_td_OOC_AST_ExtTree__TerminalDesc, 29808));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__SetDesc_Accept(OOC_AST_ExtTree__Set set, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)set;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29900)))), OOC_AST_ExtTree__VisitorDesc_VisitSet)),OOC_AST_ExtTree__VisitorDesc_VisitSet)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Set)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ArrayIndex(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lBrak, OOC_AST__NodeList indices, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ArrayIndex ai;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ArrayIndex.baseTypes[0]);
  ai = (OOC_AST_ExtTree__ArrayIndex)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 30095)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30114)))), &_td_OOC_AST_ExtTree__NodeDesc, 30114));
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 30127))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30144)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30144));
  i1 = (OOC_INT32)indices;
  *(OOC_INT32*)((_check_pointer(i0, 30161))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30182)))), &_td_OOC_AST_ExtTree__NodeListDesc, 30182));
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 30199))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30216)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30216));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ArrayIndexDesc_Accept(OOC_AST_ExtTree__ArrayIndex arrayIndex, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)arrayIndex;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30330)))), OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)),OOC_AST_ExtTree__VisitorDesc_VisitArrayIndex)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ArrayIndex)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_FunctionCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node design, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__FunctionCall fc;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__FunctionCall.baseTypes[0]);
  fc = (OOC_AST_ExtTree__FunctionCall)i0;
  i1 = (OOC_INT32)design;
  *(OOC_INT32*)(_check_pointer(i0, 30547)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30566)))), &_td_OOC_AST_ExtTree__NodeDesc, 30566));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 30579))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30598)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30598));
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 30615))+8) = i1;
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 30647))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30666)))), &_td_OOC_AST_ExtTree__TerminalDesc, 30666));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__FunctionCallDesc_Accept(OOC_AST_ExtTree__FunctionCall functionCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)functionCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30786)))), OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)),OOC_AST_ExtTree__VisitorDesc_VisitFunctionCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__FunctionCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_Assignment(OOC_AST_ExtTree__Builder b, OOC_AST__Node assignment) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Assignment a;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Assignment.baseTypes[0]);
  a = (OOC_AST_ExtTree__Assignment)i0;
  i1 = (OOC_INT32)assignment;
  *(OOC_INT32*)(_check_pointer(i0, 30953)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30980)))), &_td_OOC_AST_ExtTree__OperatorDesc, 30980));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__AssignmentDesc_Accept(OOC_AST_ExtTree__Assignment assignment, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)assignment;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31093)))), OOC_AST_ExtTree__VisitorDesc_VisitAssignment)),OOC_AST_ExtTree__VisitorDesc_VisitAssignment)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Assignment)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ProcedureCall(OOC_AST_ExtTree__Builder b, OOC_AST__Node call) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcedureCall p;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcedureCall.baseTypes[0]);
  p = (OOC_AST_ExtTree__ProcedureCall)i0;
  i1 = (OOC_INT32)call;
  *(OOC_INT32*)(_check_pointer(i0, 31256)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31271)))), &_td_OOC_AST_ExtTree__NodeDesc, 31271));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcedureCallDesc_Accept(OOC_AST_ExtTree__ProcedureCall procedureCall, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedureCall;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31389)))), OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)),OOC_AST_ExtTree__VisitorDesc_VisitProcedureCall)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcedureCall)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_IfStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__IfStatm i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__IfStatm.baseTypes[0]);
  i = (OOC_AST_ExtTree__IfStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 31614)) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 31645))+4) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 31759))+8) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 31701))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31732)))), &_td_OOC_AST_ExtTree__NodeListDesc, 31732));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 31796))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__IfStatmDesc_Accept(OOC_AST_ExtTree__IfStatm ifStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ifStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31903)))), OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)),OOC_AST_ExtTree__VisitorDesc_VisitIfStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__IfStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_CaseStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _case, OOC_AST__Node expr, OOC_AST__Node of, OOC_AST__NodeList caseList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__CaseStatm c;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__CaseStatm.baseTypes[0]);
  c = (OOC_AST_ExtTree__CaseStatm)i0;
  i1 = (OOC_INT32)_case;
  *(OOC_INT32*)(_check_pointer(i0, 32145)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32160)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32160));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 32176))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32191)))), &_td_OOC_AST_ExtTree__NodeDesc, 32191));
  i1 = (OOC_INT32)of;
  *(OOC_INT32*)((_check_pointer(i0, 32203))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 32220))+12) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 32249))+16) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 32344))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32375)))), &_td_OOC_AST_ExtTree__NodeListDesc, 32375));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 32305))+20) = 0;
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 32400))+24) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__CaseStatmDesc_Accept(OOC_AST_ExtTree__CaseStatm caseStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)caseStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32513)))), OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)),OOC_AST_ExtTree__VisitorDesc_VisitCaseStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__CaseStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WhileStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _while, OOC_AST__Node guard, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__WhileStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WhileStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WhileStatm)i0;
  i1 = (OOC_INT32)_while;
  *(OOC_INT32*)(_check_pointer(i0, 32719)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32736)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32736));
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 32752))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32769)))), &_td_OOC_AST_ExtTree__NodeDesc, 32769));
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 32781))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32792)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32792));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 32808))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32831)))), &_td_OOC_AST_ExtTree__NodeListDesc, 32831));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 32847))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32860)))), &_td_OOC_AST_ExtTree__TerminalDesc, 32860));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WhileStatmDesc_Accept(OOC_AST_ExtTree__WhileStatm whileStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)whileStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32973)))), OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWhileStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WhileStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_RepeatStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node repeat, OOC_AST__NodeList statmSeq, OOC_AST__Node until, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__RepeatStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__RepeatStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__RepeatStatm)i0;
  i1 = (OOC_INT32)repeat;
  *(OOC_INT32*)(_check_pointer(i0, 33181)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33200)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33200));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 33216))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33239)))), &_td_OOC_AST_ExtTree__NodeListDesc, 33239));
  i1 = (OOC_INT32)until;
  *(OOC_INT32*)((_check_pointer(i0, 33255))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33272)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33272));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 33288))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33303)))), &_td_OOC_AST_ExtTree__NodeDesc, 33303));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__RepeatStatmDesc_Accept(OOC_AST_ExtTree__RepeatStatm repeatStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)repeatStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33415)))), OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)),OOC_AST_ExtTree__VisitorDesc_VisitRepeatStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__RepeatStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ForStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _for, OOC_AST__Node ident, OOC_AST__Node becomes, OOC_AST__Node startValue, OOC_AST__Node to, OOC_AST__Node endValue, OOC_AST__Node by, OOC_AST__Node step, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__ForStatm f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ForStatm.baseTypes[0]);
  f = (OOC_AST_ExtTree__ForStatm)i0;
  i1 = (OOC_INT32)_for;
  *(OOC_INT32*)(_check_pointer(i0, 33664)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33677)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33677));
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 33693))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33710)))), &_td_OOC_AST_ExtTree__NodeDesc, 33710));
  i1 = (OOC_INT32)becomes;
  *(OOC_INT32*)((_check_pointer(i0, 33722))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33743)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33743));
  i1 = (OOC_INT32)startValue;
  *(OOC_INT32*)((_check_pointer(i0, 33759))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33786)))), &_td_OOC_AST_ExtTree__NodeDesc, 33786));
  i1 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i0, 33798))+16) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33809)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33809));
  i1 = (OOC_INT32)endValue;
  *(OOC_INT32*)((_check_pointer(i0, 33825))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33848)))), &_td_OOC_AST_ExtTree__NodeDesc, 33848));
  i1 = (OOC_INT32)step;
  i2 = i1==0;
  if (i2) goto l3;
  i2 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i0, 33938))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33949)))), &_td_OOC_AST_ExtTree__TerminalDesc, 33949));
  *(OOC_INT32*)((_check_pointer(i0, 33967))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33982)))), &_td_OOC_AST_ExtTree__NodeDesc, 33982));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 33887))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 33907))+28) = 0;
l4:
  i1 = (OOC_INT32)_do;
  *(OOC_INT32*)((_check_pointer(i0, 34003))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34014)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34014));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 34030))+36) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34053)))), &_td_OOC_AST_ExtTree__NodeListDesc, 34053));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 34069))+40) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34082)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34082));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ForStatmDesc_Accept(OOC_AST_ExtTree__ForStatm forStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)forStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34189)))), OOC_AST_ExtTree__VisitorDesc_VisitForStatm)),OOC_AST_ExtTree__VisitorDesc_VisitForStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ForStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_LoopStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node loop, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LoopStatm l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LoopStatm.baseTypes[0]);
  l = (OOC_AST_ExtTree__LoopStatm)i0;
  i1 = (OOC_INT32)loop;
  *(OOC_INT32*)(_check_pointer(i0, 34379)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34394)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34394));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 34410))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34433)))), &_td_OOC_AST_ExtTree__NodeListDesc, 34433));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 34449))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34462)))), &_td_OOC_AST_ExtTree__TerminalDesc, 34462));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__LoopStatmDesc_Accept(OOC_AST_ExtTree__LoopStatm loopStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)loopStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34572)))), OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)),OOC_AST_ExtTree__VisitorDesc_VisitLoopStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LoopStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_WithStatm(OOC_AST_ExtTree__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__WithStatm w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__WithStatm.baseTypes[0]);
  w = (OOC_AST_ExtTree__WithStatm)i0;
  i1 = (OOC_INT32)guardList;
  *(OOC_INT32*)(_check_pointer(i0, 34793)) = i1;
  i1 = (OOC_INT32)_else;
  *(OOC_INT32*)((_check_pointer(i0, 34824))+4) = i1;
  i1 = (OOC_INT32)elseStatmSeq;
  i2 = i1!=0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 34938))+8) = 0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 34880))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34911)))), &_td_OOC_AST_ExtTree__NodeListDesc, 34911));
l4:
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 34975))+12) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__WithStatmDesc_Accept(OOC_AST_ExtTree__WithStatm withStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)withStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35088)))), OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)),OOC_AST_ExtTree__VisitorDesc_VisitWithStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__WithStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ExitStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node exit) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ExitStatm e;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ExitStatm.baseTypes[0]);
  e = (OOC_AST_ExtTree__ExitStatm)i0;
  i1 = (OOC_INT32)exit;
  *(OOC_INT32*)(_check_pointer(i0, 35241)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35256)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35256));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ExitStatmDesc_Accept(OOC_AST_ExtTree__ExitStatm exitStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)exitStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35366)))), OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)),OOC_AST_ExtTree__VisitorDesc_VisitExitStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ExitStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_ReturnStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _return, OOC_AST__Node expr) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ReturnStatm r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ReturnStatm.baseTypes[0]);
  r = (OOC_AST_ExtTree__ReturnStatm)i0;
  i1 = (OOC_INT32)_return;
  *(OOC_INT32*)(_check_pointer(i0, 35531)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35550)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35550));
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 35566))+4) = i1;
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__ReturnStatmDesc_Accept(OOC_AST_ExtTree__ReturnStatm returnStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)returnStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35687)))), OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)),OOC_AST_ExtTree__VisitorDesc_VisitReturnStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ReturnStatm)i1);
  return;
  ;
}

OOC_AST_ExtTree__Node OOC_AST_ExtTree__BuilderDesc_TryStatm(OOC_AST_ExtTree__Builder b, OOC_AST__Node _try, OOC_AST__NodeList statmSeq, OOC_AST__NodeList catchList, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__TryStatm t;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__TryStatm.baseTypes[0]);
  t = (OOC_AST_ExtTree__TryStatm)i0;
  i1 = (OOC_INT32)_try;
  *(OOC_INT32*)(_check_pointer(i0, 35939)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35951)))), &_td_OOC_AST_ExtTree__TerminalDesc, 35951));
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 35967))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35989)))), &_td_OOC_AST_ExtTree__NodeListDesc, 35989));
  i1 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i0, 36005))+8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36029)))), &_td_OOC_AST_ExtTree__NodeListDesc, 36029));
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 36045))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36057)))), &_td_OOC_AST_ExtTree__TerminalDesc, 36057));
  return (OOC_AST_ExtTree__Node)i0;
  ;
}

void OOC_AST_ExtTree__TryStatmDesc_Accept(OOC_AST_ExtTree__TryStatm tryStatm, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tryStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36165)))), OOC_AST_ExtTree__VisitorDesc_VisitTryStatm)),OOC_AST_ExtTree__VisitorDesc_VisitTryStatm)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__TryStatm)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_Flags(OOC_AST_ExtTree__Builder b, OOC_INT8 context, OOC_AST__Node lBrak, OOC_AST__NodeList flagList, OOC_AST__Node rBrak) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__Flags f;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__Flags.baseTypes[0]);
  f = (OOC_AST_ExtTree__Flags)i0;
  i1 = context;
  *(OOC_INT8*)(_check_pointer(i0, 36405)) = i1;
  i1 = (OOC_INT32)lBrak;
  *(OOC_INT32*)((_check_pointer(i0, 36432))+4) = i1;
  i1 = (OOC_INT32)flagList;
  *(OOC_INT32*)((_check_pointer(i0, 36455))+8) = i1;
  i1 = (OOC_INT32)rBrak;
  *(OOC_INT32*)((_check_pointer(i0, 36484))+12) = i1;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36711)))), &_td_OOC_AST_ExtTree__FlagsDesc, 36711)), 36717))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36727))+4);
  i0 = _check_pointer(i0, 36730);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 36730))*4);
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36734)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  
l5:
  if (i0) goto l7;
  return 0u;
  goto l26;
l7:
  i0 = (OOC_INT32)procFlags;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l25;
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36991)))), &_td_OOC_AST_ExtTree__FlagsDesc, 36991)), 36997))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 37007));
  i1 = 0<i1;
  if (!i1) goto l25;
  i1=0;
l12_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37042)))), &_td_OOC_AST_ExtTree__FlagsDesc, 37042)), 37048))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37058))+4);
  i2 = _check_pointer(i2, 37061);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 37061))*4);
  n = (OOC_AST__Node)i2;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37082)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i3) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37100)))), &_td_OOC_AST_ExtTree__TerminalDesc, 37100)), 37109));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37114))+8);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 37119)),(const void*)"HAS_BODY"))==0;
  
l17:
  if (!i2) goto l19;
  return 0u;
l19:
  i1 = i1+2;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36991)))), &_td_OOC_AST_ExtTree__FlagsDesc, 36991)), 36997))+8);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 37007));
  i2 = i1<i2;
  if (i2) goto l12_loop;
l25:
  return 1u;
l26:
  _failed_function(36552); return 0;
  ;
}

void OOC_AST_ExtTree__FlagsDesc_Accept(OOC_AST_ExtTree__Flags flags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)flags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37363)))), OOC_AST_ExtTree__VisitorDesc_VisitFlags)),OOC_AST_ExtTree__VisitorDesc_VisitFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__Flags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ProcIdFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node procId, OOC_AST__Node equal, OOC_AST__Node number) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ProcIdFlag pid;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ProcIdFlag.baseTypes[0]);
  pid = (OOC_AST_ExtTree__ProcIdFlag)i0;
  i1 = (OOC_INT32)procId;
  *(OOC_INT32*)(_check_pointer(i0, 37537)) = i1;
  i1 = (OOC_INT32)equal;
  *(OOC_INT32*)((_check_pointer(i0, 37564))+4) = i1;
  i1 = (OOC_INT32)number;
  *(OOC_INT32*)((_check_pointer(i0, 37589))+8) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ProcIdFlagDesc_Accept(OOC_AST_ExtTree__ProcIdFlag procIdFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procIdFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37713)))), OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)),OOC_AST_ExtTree__VisitorDesc_VisitProcIdFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ProcIdFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_ModuleFlags(OOC_AST_ExtTree__Builder b, OOC_AST__Node external, OOC_AST__Node callConv, OOC_AST__NodeList moduleFlags, OOC_AST__Node semicolon, OOC_AST__Node link, OOC_AST__NodeList linkSections, OOC_AST__Node end) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__ModuleFlags mf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__ModuleFlags.baseTypes[0]);
  mf = (OOC_AST_ExtTree__ModuleFlags)i0;
  i1 = (OOC_INT32)external;
  *(OOC_INT32*)(_check_pointer(i0, 38031)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38054)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38054));
  i1 = (OOC_INT32)callConv;
  *(OOC_INT32*)((_check_pointer(i0, 38071))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38094)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38094));
  i1 = (OOC_INT32)moduleFlags;
  *(OOC_INT32*)((_check_pointer(i0, 38111))+8) = i1;
  i1 = (OOC_INT32)semicolon;
  *(OOC_INT32*)((_check_pointer(i0, 38147))+12) = i1;
  i1 = (OOC_INT32)link;
  *(OOC_INT32*)((_check_pointer(i0, 38179))+16) = i1;
  i1 = (OOC_INT32)linkSections;
  *(OOC_INT32*)((_check_pointer(i0, 38201))+20) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 38239))+24) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__ModuleFlagsDesc_Accept(OOC_AST_ExtTree__ModuleFlags moduleFlags, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleFlags;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38359)))), OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)),OOC_AST_ExtTree__VisitorDesc_VisitModuleFlags)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__ModuleFlags)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkFileFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node file, OOC_AST__Node fileName, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkFileFlag lff;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkFileFlag.baseTypes[0]);
  lff = (OOC_AST_ExtTree__LinkFileFlag)i0;
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)(_check_pointer(i0, 38582)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 38605))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38628)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38628));
  i1 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 38646))+8) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 38748))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38773)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38773));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 38711))+12) = 0;
l4:
  i1 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 38799))+16) = i1;
  i1 = (OOC_INT32)suffixOpt;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 38893))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38918)))), &_td_OOC_AST_ExtTree__TerminalDesc, 38918));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 38856))+20) = 0;
l8:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkFileFlagDesc_Accept(OOC_AST_ExtTree__LinkFileFlag linkFileFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkFileFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39047)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkFileFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkFileFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkObjFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node obj, OOC_AST__Node fileName) {
  register OOC_INT32 i0,i1;
  OOC_AST_ExtTree__LinkObjFlag lof;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkObjFlag.baseTypes[0]);
  lof = (OOC_AST_ExtTree__LinkObjFlag)i0;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)(_check_pointer(i0, 39229)) = i1;
  i1 = (OOC_INT32)fileName;
  *(OOC_INT32*)((_check_pointer(i0, 39250))+4) = i1;
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkObjFlagDesc_Accept(OOC_AST_ExtTree__LinkObjFlag linkObjFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkObjFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39381)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkObjFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkObjFlag)i1);
  return;
  ;
}

OOC_AST__Node OOC_AST_ExtTree__BuilderDesc_LinkLibFlag(OOC_AST_ExtTree__Builder b, OOC_AST__Node lib, OOC_AST__Node libName, OOC_AST__Node lParen, OOC_AST__NodeList dependencies, OOC_AST__Node rParen, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST_ExtTree__LinkLibFlag llf;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree__LinkLibFlag.baseTypes[0]);
  llf = (OOC_AST_ExtTree__LinkLibFlag)i0;
  i1 = (OOC_INT32)lib;
  *(OOC_INT32*)(_check_pointer(i0, 39690)) = i1;
  i1 = (OOC_INT32)libName;
  *(OOC_INT32*)((_check_pointer(i0, 39711))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39732)))), &_td_OOC_AST_ExtTree__TerminalDesc, 39732));
  i1 = (OOC_INT32)lParen;
  *(OOC_INT32*)((_check_pointer(i0, 39750))+8) = i1;
  i1 = (OOC_INT32)dependencies;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 39853))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39884)))), &_td_OOC_AST_ExtTree__NodeListDesc, 39884));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 39812))+12) = 0;
l4:
  i1 = (OOC_INT32)rParen;
  *(OOC_INT32*)((_check_pointer(i0, 39911))+16) = i1;
  i1 = (OOC_INT32)addOption;
  *(OOC_INT32*)((_check_pointer(i0, 39938))+20) = i1;
  i1 = (OOC_INT32)prefixOpt;
  i2 = i1==0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 40040))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40065)))), &_td_OOC_AST_ExtTree__TerminalDesc, 40065));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 40003))+24) = 0;
l8:
  i1 = (OOC_INT32)comma;
  *(OOC_INT32*)((_check_pointer(i0, 40091))+28) = i1;
  i1 = (OOC_INT32)suffixOpt;
  i2 = i1==0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 40185))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40210)))), &_td_OOC_AST_ExtTree__TerminalDesc, 40210));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 40148))+32) = 0;
l12:
  return (OOC_AST__Node)i0;
  ;
}

void OOC_AST_ExtTree__LinkLibFlagDesc_Accept(OOC_AST_ExtTree__LinkLibFlag linkLibFlag, OOC_AST_ExtTree__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)linkLibFlag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40336)))), OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)),OOC_AST_ExtTree__VisitorDesc_VisitLinkLibFlag)((OOC_AST_ExtTree__Visitor)i0, (OOC_AST_ExtTree__LinkLibFlag)i1);
  return;
  ;
}

void OOC_OOC_AST_ExtTree_init(void) {

  return;
  ;
}

/* --- */
