#include "OOC/AST.d"
#include "__oo2c.h"

void OOC_AST__InitNodeList(OOC_AST__NodeList nl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)nl;
  *(OOC_INT32*)(_check_pointer(i0, 6223)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 6246))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_AST__NodeArray.baseTypes[0], 8));
  return;
  ;
}

OOC_AST__NodeList OOC_AST__BuilderDesc_NewNodeList(OOC_AST__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST__NodeList.baseTypes[0]);
  OOC_AST__InitNodeList((OOC_AST__NodeList)i0);
  return (OOC_AST__NodeList)i0;
  ;
}

void OOC_AST__NodeListDesc_Append(OOC_AST__NodeList nl, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_AST__NodeArray _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)nl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6660))+4);
  i2 = *(OOC_INT32*)(_check_pointer(i0, 6645));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6663)), 0);
  i1 = i2==i1;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6695))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6698)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_AST__NodeArray.baseTypes[0], (i1*2));
  _new = (OOC_AST__NodeArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6732))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6735)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = _check_pointer(i1, 6754);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6763))+4);
  i6 = _check_pointer(i6, 6766);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 6766))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6754))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 6789))+4) = i1;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6815))+4);
  i1 = _check_pointer(i1, 6818);
  i2 = *(OOC_INT32*)(_check_pointer(i0, 6821));
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)node;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 6818))*4) = i4;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6848));
  *(OOC_INT32*)(_check_pointer(i0, 6848)) = (i1+1);
  return;
  ;
}

void OOC_AST__NodeDesc_AttachDocString(OOC_AST__Node n, OOC_Doc__Document docComment) {

  return;
  ;
}

void OOC_AST__InitBuilder(OOC_AST__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)(_check_pointer(i0, 7572)) = (OOC_INT32)0;
  return;
  ;
}

void OOC_AST__BuilderDesc_SetModuleName(OOC_AST__Builder b, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)b;
  i1 = Strings__Length((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)(_check_pointer(i0, 7879)) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7944));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7944));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7964)), 0);
  _copy_8((OOC_INT32)name,(_check_pointer(i1, 7964)),i0);
  return;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Terminal(OOC_AST__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {

  _failed_function(8024); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_IdentDef(OOC_AST__Builder b, OOC_AST__Node ident, OOC_AST__Node mark) {

  _failed_function(8283); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ModuleIdent(OOC_AST__Builder b, OOC_AST__NodeList nameList) {

  _failed_function(8757); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ArrayType(OOC_AST__Builder b, OOC_AST__Node array, OOC_AST__Node flags, OOC_AST__NodeList exprList, OOC_AST__Node of, OOC_AST__Node type) {

  _failed_function(9022); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FieldList(OOC_AST__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {

  _failed_function(9992); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_RecordType(OOC_AST__Builder b, OOC_AST__Node record, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__Node qualident, OOC_AST__Node rParen, OOC_AST__NodeList fieldLists, OOC_AST__Node end) {

  _failed_function(10589); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_PointerType(OOC_AST__Builder b, OOC_AST__Node pointer, OOC_AST__Node flags, OOC_AST__Node to, OOC_AST__Node type) {

  _failed_function(11908); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FPSection(OOC_AST__Builder b, OOC_AST__Node var, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {

  _failed_function(12326); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FormalPars(OOC_AST__Builder b, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__NodeList fpSections, OOC_AST__Node rParen, OOC_AST__Node colon, OOC_AST__Node result) {

  _failed_function(13144); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcType(OOC_AST__Builder b, OOC_AST__Node procedure, OOC_AST__Node formalPars) {

  _failed_function(14729); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ImportDecl(OOC_AST__Builder b, OOC_AST__Node alias, OOC_AST__Node becomes, OOC_AST__Node module, OOC_Scanner_InputBuffer__CharArray moduleName) {

  _failed_function(15136); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ConstDecl(OOC_AST__Builder b, OOC_AST__Node identDef, OOC_AST__Node equal, OOC_AST__Node expr, OOC_AST__Node semicolon) {

  _failed_function(15952); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_TypeDecl(OOC_AST__Builder b, OOC_AST__Node identDef, OOC_AST__Node equal, OOC_AST__Node type, OOC_AST__Node semicolon) {

  _failed_function(16524); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_VarDecl(OOC_AST__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node semicolon) {

  _failed_function(17029); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Receiver(OOC_AST__Builder b, OOC_AST__Node lParen, OOC_AST__Node var, OOC_AST__Node ident, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node rParen) {

  _failed_function(17856); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcDecl(OOC_AST__Builder b, OOC_AST__Node proc, OOC_AST__Node arrow, OOC_AST__Node receiver, OOC_AST__Node flags, OOC_AST__Node identDef, OOC_AST__Node formalPars, OOC_AST__Node semicolon1, OOC_AST__Node body, OOC_AST__Node semicolon2) {

  _failed_function(18588); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ImportList(OOC_AST__Builder b, OOC_AST__Node import, OOC_AST__NodeList imports, OOC_AST__Node semicolon) {

  _failed_function(20010); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Body(OOC_AST__Builder b, OOC_AST__NodeList declSeq, OOC_AST__Node begin, OOC_AST__NodeList statmSeq, OOC_AST__Node end, OOC_AST__Node name) {

  _failed_function(20700); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Module(OOC_AST__Builder b, OOC_AST__Node module, OOC_AST__Node name, OOC_AST__Node flags, OOC_AST__Node semicolon, OOC_AST__Node importList, OOC_AST__Node body, OOC_AST__Node period, OOC_Scanner_InputBuffer__CharArray moduleName) {

  _failed_function(22291); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Operator(OOC_AST__Builder b, OOC_AST__Node left, OOC_AST__Node op, OOC_AST__Node right) {

  _failed_function(23396); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Factor(OOC_AST__Builder b, OOC_AST__Node lParen, OOC_AST__Node expr, OOC_AST__Node rParen) {

  _failed_function(24093); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Set(OOC_AST__Builder b, OOC_AST__Node type, OOC_AST__Node lBrace, OOC_AST__NodeList elementList, OOC_AST__Node rBrace) {

  _failed_function(24602); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ArrayIndex(OOC_AST__Builder b, OOC_AST__Node design, OOC_AST__Node lBrak, OOC_AST__NodeList indices, OOC_AST__Node rBrak) {

  _failed_function(25455); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FunctionCall(OOC_AST__Builder b, OOC_AST__Node design, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {

  _failed_function(26108); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Assignment(OOC_AST__Builder b, OOC_AST__Node assignment) {

  _failed_function(27114); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcedureCall(OOC_AST__Builder b, OOC_AST__Node call) {

  _failed_function(27511); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_IfStatm(OOC_AST__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {

  _failed_function(27992); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_CaseStatm(OOC_AST__Builder b, OOC_AST__Node _case, OOC_AST__Node expr, OOC_AST__Node of, OOC_AST__NodeList caseList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {

  _failed_function(29119); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_WhileStatm(OOC_AST__Builder b, OOC_AST__Node _while, OOC_AST__Node guard, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {

  _failed_function(30763); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_RepeatStatm(OOC_AST__Builder b, OOC_AST__Node repeat, OOC_AST__NodeList statmSeq, OOC_AST__Node until, OOC_AST__Node expr) {

  _failed_function(31185); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ForStatm(OOC_AST__Builder b, OOC_AST__Node _for, OOC_AST__Node ident, OOC_AST__Node becomes, OOC_AST__Node startValue, OOC_AST__Node to, OOC_AST__Node endValue, OOC_AST__Node by, OOC_AST__Node step, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {

  _failed_function(31571); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LoopStatm(OOC_AST__Builder b, OOC_AST__Node loop, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {

  _failed_function(32449); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_WithStatm(OOC_AST__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {

  _failed_function(32768); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ExitStatm(OOC_AST__Builder b, OOC_AST__Node exit) {

  _failed_function(33942); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ReturnStatm(OOC_AST__Builder b, OOC_AST__Node _return, OOC_AST__Node expr) {

  _failed_function(34130); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Flags(OOC_AST__Builder b, OOC_INT8 context, OOC_AST__Node lBrak, OOC_AST__NodeList flagList, OOC_AST__Node rBrak) {

  _failed_function(34466); return 0;
  ;
}

OOC_CHAR8 OOC_AST__BuilderDesc_ProcWithoutBody(OOC_AST__Builder b, OOC_AST__Node moduleFlags, OOC_AST__Node procFlags) {

  _failed_function(34634); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcIdFlag(OOC_AST__Builder b, OOC_AST__Node procId, OOC_AST__Node equal, OOC_AST__Node number) {

  _failed_function(35080); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ModuleFlags(OOC_AST__Builder b, OOC_AST__Node external, OOC_AST__Node callConv, OOC_AST__NodeList moduleFlags, OOC_AST__Node semicolon, OOC_AST__Node link, OOC_AST__NodeList linkSections, OOC_AST__Node end) {

  _failed_function(35182); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LinkFileFlag(OOC_AST__Builder b, OOC_AST__Node file, OOC_AST__Node fileName, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {

  _failed_function(35421); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LinkObjFlag(OOC_AST__Builder b, OOC_AST__Node obj, OOC_AST__Node fileName) {

  _failed_function(35560); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LinkLibFlag(OOC_AST__Builder b, OOC_AST__Node lib, OOC_AST__Node libName, OOC_AST__Node lParen, OOC_AST__NodeList dependences, OOC_AST__Node rParen, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {

  _failed_function(35656); return 0;
  ;
}

void OOC_OOC_AST_init(void) {

  return;
  ;
}

/* --- */
