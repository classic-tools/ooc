#include <OOC/AST.oh>
#include <Strings.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_AST__Node = { (RT0__Struct[]){&_td_OOC_AST__NodeDesc}, NULL, &_mid, "Node", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_AST__NodeDesc = { (RT0__Struct[]){&_td_OOC_AST__NodeDesc}, (void*[]){(void*)OOC_AST__NodeDesc_AttachDocString}, &_mid, "NodeDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_AST__1290 = { (RT0__Struct[]){&_td_OOC_AST__Node}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_AST__NodeArray = { (RT0__Struct[]){&_td_OOC_AST__1290}, NULL, &_mid, "NodeArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_AST__NodeList = { (RT0__Struct[]){&_td_OOC_AST__NodeListDesc}, NULL, &_mid, "NodeList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_AST__NodeListDesc = { (RT0__Struct[]){&_td_OOC_AST__NodeDesc,&_td_OOC_AST__NodeListDesc}, (void*[]){(void*)OOC_AST__NodeDesc_AttachDocString,(void*)OOC_AST__NodeListDesc_Append}, &_mid, "NodeListDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_AST__Builder = { (RT0__Struct[]){&_td_OOC_AST__BuilderDesc}, NULL, &_mid, "Builder", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_AST__BuilderDesc = { (RT0__Struct[]){&_td_OOC_AST__BuilderDesc}, (void*[]){(void*)OOC_AST__BuilderDesc_ArrayIndex,(void*)OOC_AST__BuilderDesc_ArrayType,(void*)OOC_AST__BuilderDesc_Assignment,(void*)OOC_AST__BuilderDesc_Body,(void*)OOC_AST__BuilderDesc_CaseStatm,(void*)OOC_AST__BuilderDesc_ConstDecl,(void*)OOC_AST__BuilderDesc_ExitStatm,(void*)OOC_AST__BuilderDesc_FPSection,(void*)OOC_AST__BuilderDesc_Factor,(void*)OOC_AST__BuilderDesc_FieldList,(void*)OOC_AST__BuilderDesc_Flags,(void*)OOC_AST__BuilderDesc_ForStatm,(void*)OOC_AST__BuilderDesc_FormalPars,(void*)OOC_AST__BuilderDesc_FunctionCall,(void*)OOC_AST__BuilderDesc_IdentDef,(void*)OOC_AST__BuilderDesc_IfStatm,(void*)OOC_AST__BuilderDesc_ImportDecl,(void*)OOC_AST__BuilderDesc_ImportList,(void*)OOC_AST__BuilderDesc_LinkFileFlag,(void*)OOC_AST__BuilderDesc_LinkLibFlag,(void*)OOC_AST__BuilderDesc_LinkObjFlag,(void*)OOC_AST__BuilderDesc_LoopStatm,(void*)OOC_AST__BuilderDesc_Module,(void*)OOC_AST__BuilderDesc_ModuleFlags,(void*)OOC_AST__BuilderDesc_ModuleIdent,(void*)OOC_AST__BuilderDesc_NewNodeList,(void*)OOC_AST__BuilderDesc_Operator,(void*)OOC_AST__BuilderDesc_PointerType,(void*)OOC_AST__BuilderDesc_ProcDecl,(void*)OOC_AST__BuilderDesc_ProcIdFlag,(void*)OOC_AST__BuilderDesc_ProcType,(void*)OOC_AST__BuilderDesc_ProcWithoutBody,(void*)OOC_AST__BuilderDesc_ProcedureCall,(void*)OOC_AST__BuilderDesc_Receiver,(void*)OOC_AST__BuilderDesc_RecordType,(void*)OOC_AST__BuilderDesc_RepeatStatm,(void*)OOC_AST__BuilderDesc_ReturnStatm,(void*)OOC_AST__BuilderDesc_Set,(void*)OOC_AST__BuilderDesc_SetModuleName,(void*)OOC_AST__BuilderDesc_Terminal,(void*)OOC_AST__BuilderDesc_TypeDecl,(void*)OOC_AST__BuilderDesc_VarDecl,(void*)OOC_AST__BuilderDesc_WhileStatm,(void*)OOC_AST__BuilderDesc_WithStatm}, &_mid, "BuilderDesc", 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_AST__7699 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:AST", (RT0__Struct[]) { &_td_OOC_AST__Node, &_td_OOC_AST__NodeDesc, &_td_OOC_AST__NodeArray, &_td_OOC_AST__NodeList, &_td_OOC_AST__NodeListDesc, &_td_OOC_AST__Builder, &_td_OOC_AST__BuilderDesc, NULL } };

extern void OOC_OOC_AST_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_AST_init();
}

/* --- */
