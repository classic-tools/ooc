#include <OOC/AST.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_AST__InitNodeList(OOC_AST__NodeList nl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)nl;
  *(OOC_INT32*)(_check_pointer(i0, 6311)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 6334))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_AST__NodeArray.baseTypes[0], 8));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6748))+4);
  i2 = *(OOC_INT32*)(_check_pointer(i0, 6733));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6751)), 0);
  i1 = i2==i1;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6783))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6786)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_AST__NodeArray.baseTypes[0], (i1*2));
  _new = (OOC_AST__NodeArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6820))+4);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6823)), 0);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = _check_pointer(i1, 6842);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6851))+4);
  i6 = _check_pointer(i6, 6854);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 6854))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6842))*4) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 6877))+4) = i1;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6903))+4);
  i1 = _check_pointer(i1, 6906);
  i2 = *(OOC_INT32*)(_check_pointer(i0, 6909));
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)node;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 6906))*4) = i4;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6936));
  *(OOC_INT32*)(_check_pointer(i0, 6936)) = (i1+1);
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
  *(OOC_INT32*)(_check_pointer(i0, 7660)) = 0;
  return;
  ;
}

void OOC_AST__BuilderDesc_SetModuleName(OOC_AST__Builder b, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)b;
  i1 = Strings__Length((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)(_check_pointer(i0, 7967)) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8032));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8032));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8052)), 0);
  _copy_8((const void*)(OOC_INT32)name,(void*)(_check_pointer(i1, 8052)),i0);
  return;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Terminal(OOC_AST__Builder b, OOC_Scanner_BasicList__Symbol sym) {

  _failed_function(8112); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_IdentDef(OOC_AST__Builder b, OOC_AST__Node ident, OOC_AST__Node mark) {

  _failed_function(8371); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ModuleIdent(OOC_AST__Builder b, OOC_AST__NodeList nameList) {

  _failed_function(8845); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ArrayType(OOC_AST__Builder b, OOC_AST__Node array, OOC_AST__Node flags, OOC_AST__NodeList exprList, OOC_AST__Node of, OOC_AST__Node type) {

  _failed_function(9110); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FieldList(OOC_AST__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {

  _failed_function(10080); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_RecordType(OOC_AST__Builder b, OOC_AST__Node record, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__Node qualident, OOC_AST__Node rParen, OOC_AST__NodeList fieldLists, OOC_AST__Node end) {

  _failed_function(10747); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_PointerType(OOC_AST__Builder b, OOC_AST__Node pointer, OOC_AST__Node flags, OOC_AST__Node to, OOC_AST__Node type) {

  _failed_function(12066); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FPSection(OOC_AST__Builder b, OOC_AST__Node var, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {

  _failed_function(12484); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FormalPars(OOC_AST__Builder b, OOC_AST__Node flags, OOC_AST__Node lParen, OOC_AST__NodeList fpSections, OOC_AST__Node rParen, OOC_AST__Node colon, OOC_AST__Node result, OOC_AST__Node raises, OOC_AST__NodeList raisesList) {

  _failed_function(13302); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcType(OOC_AST__Builder b, OOC_AST__Node procedure, OOC_AST__Node formalPars) {

  _failed_function(15591); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_TPSection(OOC_AST__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type) {

  _failed_function(15998); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_TypePars(OOC_AST__Builder b, OOC_AST__Node lParen, OOC_AST__NodeList tpSections, OOC_AST__Node rParen) {

  _failed_function(16563); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_QualType(OOC_AST__Builder b, OOC_AST__Node qualident, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {

  _failed_function(17321); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ImportDecl(OOC_AST__Builder b, OOC_AST__Node alias, OOC_AST__Node becomes, OOC_AST__Node module, OOC_Scanner_InputBuffer__CharArray moduleName) {

  _failed_function(18419); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ConstDecl(OOC_AST__Builder b, OOC_AST__Node identDef, OOC_AST__Node flags, OOC_AST__Node equal, OOC_AST__Node expr, OOC_AST__Node semicolon) {

  _failed_function(19235); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_TypeDecl(OOC_AST__Builder b, OOC_AST__Node identDef, OOC_AST__Node flags, OOC_AST__Node typePars, OOC_AST__Node equal, OOC_AST__Node type, OOC_AST__Node semicolon) {

  _failed_function(19852); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_VarDecl(OOC_AST__Builder b, OOC_AST__NodeList identList, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node semicolon) {

  _failed_function(20607); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Receiver(OOC_AST__Builder b, OOC_AST__Node lParen, OOC_AST__Node var, OOC_AST__Node ident, OOC_AST__Node colon, OOC_AST__Node type, OOC_AST__Node lParenAlias, OOC_AST__NodeList aliasList, OOC_AST__Node rParenAlias, OOC_AST__Node rParen) {

  _failed_function(21434); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcDecl(OOC_AST__Builder b, OOC_AST__Node proc, OOC_AST__Node arrow, OOC_AST__Node receiver, OOC_AST__Node flags, OOC_AST__Node identDef, OOC_AST__Node formalPars, OOC_AST__Node semicolon1, OOC_AST__Node body, OOC_AST__Node semicolon2) {

  _failed_function(22745); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ImportList(OOC_AST__Builder b, OOC_AST__Node import, OOC_AST__NodeList imports, OOC_AST__Node semicolon) {

  _failed_function(24167); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Body(OOC_AST__Builder b, OOC_AST__NodeList declSeq, OOC_AST__Node begin, OOC_AST__NodeList statmSeq, OOC_AST__Node end, OOC_AST__Node name) {

  _failed_function(24857); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Module(OOC_AST__Builder b, OOC_AST__Node module, OOC_AST__Node name, OOC_AST__Node flags, OOC_AST__Node semicolon, OOC_AST__Node importList, OOC_AST__Node body, OOC_AST__Node period, OOC_Scanner_InputBuffer__CharArray moduleName) {

  _failed_function(26448); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Operator(OOC_AST__Builder b, OOC_AST__Node left, OOC_AST__Node op, OOC_AST__Node right) {

  _failed_function(27553); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Factor(OOC_AST__Builder b, OOC_AST__Node lParen, OOC_AST__Node expr, OOC_AST__Node rParen) {

  _failed_function(28250); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Set(OOC_AST__Builder b, OOC_AST__Node type, OOC_AST__Node lBrace, OOC_AST__NodeList elementList, OOC_AST__Node rBrace) {

  _failed_function(28759); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ArrayIndex(OOC_AST__Builder b, OOC_AST__Node design, OOC_AST__Node lBrak, OOC_AST__NodeList indices, OOC_AST__Node rBrak) {

  _failed_function(29612); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_FunctionCall(OOC_AST__Builder b, OOC_AST__Node design, OOC_AST__Node lParen, OOC_AST__NodeList arguments, OOC_AST__Node rParen) {

  _failed_function(30265); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Assignment(OOC_AST__Builder b, OOC_AST__Node assignment) {

  _failed_function(31271); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcedureCall(OOC_AST__Builder b, OOC_AST__Node call) {

  _failed_function(31668); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_IfStatm(OOC_AST__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {

  _failed_function(32149); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_CaseStatm(OOC_AST__Builder b, OOC_AST__Node _case, OOC_AST__Node expr, OOC_AST__Node of, OOC_AST__NodeList caseList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {

  _failed_function(33276); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_WhileStatm(OOC_AST__Builder b, OOC_AST__Node _while, OOC_AST__Node guard, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {

  _failed_function(34920); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_RepeatStatm(OOC_AST__Builder b, OOC_AST__Node repeat, OOC_AST__NodeList statmSeq, OOC_AST__Node until, OOC_AST__Node expr) {

  _failed_function(35342); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ForStatm(OOC_AST__Builder b, OOC_AST__Node _for, OOC_AST__Node ident, OOC_AST__Node becomes, OOC_AST__Node startValue, OOC_AST__Node to, OOC_AST__Node endValue, OOC_AST__Node by, OOC_AST__Node step, OOC_AST__Node _do, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {

  _failed_function(35728); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LoopStatm(OOC_AST__Builder b, OOC_AST__Node loop, OOC_AST__NodeList statmSeq, OOC_AST__Node end) {

  _failed_function(36606); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_WithStatm(OOC_AST__Builder b, OOC_AST__NodeList guardList, OOC_AST__Node _else, OOC_AST__NodeList elseStatmSeq, OOC_AST__Node end) {

  _failed_function(36925); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ExitStatm(OOC_AST__Builder b, OOC_AST__Node exit) {

  _failed_function(38099); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ReturnStatm(OOC_AST__Builder b, OOC_AST__Node _return, OOC_AST__Node expr) {

  _failed_function(38287); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_TryStatm(OOC_AST__Builder b, OOC_AST__Node _try, OOC_AST__NodeList statmSeq, OOC_AST__NodeList catchList, OOC_AST__Node end) {

  _failed_function(38622); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_Flags(OOC_AST__Builder b, OOC_INT8 context, OOC_AST__Node lBrak, OOC_AST__NodeList flagList, OOC_AST__Node rBrak) {

  _failed_function(39559); return 0;
  ;
}

OOC_CHAR8 OOC_AST__BuilderDesc_ProcWithoutBody(OOC_AST__Builder b, OOC_AST__Node moduleFlags, OOC_AST__Node procFlags) {

  _failed_function(39727); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ProcIdFlag(OOC_AST__Builder b, OOC_AST__Node procId, OOC_AST__Node equal, OOC_AST__Node number) {

  _failed_function(40173); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_ModuleFlags(OOC_AST__Builder b, OOC_AST__Node external, OOC_AST__Node callConv, OOC_AST__NodeList moduleFlags, OOC_AST__Node semicolon, OOC_AST__Node link, OOC_AST__NodeList linkSections, OOC_AST__Node end) {

  _failed_function(40275); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LinkFileFlag(OOC_AST__Builder b, OOC_AST__Node file, OOC_AST__Node fileName, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {

  _failed_function(40514); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LinkObjFlag(OOC_AST__Builder b, OOC_AST__Node obj, OOC_AST__Node fileName) {

  _failed_function(40653); return 0;
  ;
}

OOC_AST__Node OOC_AST__BuilderDesc_LinkLibFlag(OOC_AST__Builder b, OOC_AST__Node lib, OOC_AST__Node libName, OOC_AST__Node lParen, OOC_AST__NodeList dependences, OOC_AST__Node rParen, OOC_AST__Node addOption, OOC_AST__Node prefixOpt, OOC_AST__Node comma, OOC_AST__Node suffixOpt) {

  _failed_function(40749); return 0;
  ;
}

void OOC_OOC_AST_init(void) {

  return;
  ;
}

/* --- */
