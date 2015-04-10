#include "OOC/Make/TranslateToIA32.d"
#include "__oo2c.h"

void OOC_Make_TranslateToIA32__InitTranslator(OOC_Make_TranslateToIA32__Translator t, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  *(OOC_INT32*)(_check_pointer(i0, 1934)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1951))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1975))+16) = -1;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 2001))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2026))+8) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter(OOC_Make_TranslateToIA32__Translator t, OOC_IA32_Writer__Writer w, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 2156)) = i1;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 2171))+8) = i1;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList(OOC_Make_TranslateToIA32__Translator t, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 2296))+12) = i1;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody(OOC_Make_TranslateToIA32__Translator t, OOC_IR__Procedure proc) {

  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure(OOC_Make_TranslateToIA32__Translator t, OOC_INT32 procIndex) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldProcIndex;

  i0 = (OOC_INT32)t;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2566))+16);
  oldProcIndex = i1;
  i2 = procIndex;
  *(OOC_INT32*)((_check_pointer(i0, 2586))+16) = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2642))+12);
  i3 = _check_pointer(i3, 2652);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 2652))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2624)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__Procedure)i2);
  *(OOC_INT32*)((_check_pointer(i0, 2676))+16) = i1;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_WriteNestedProcedures(OOC_Make_TranslateToIA32__Translator t) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__ProcDecl currentDecl;
  OOC_INT32 i;

  i0 = (OOC_INT32)t;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3228))+16);
  i1 = i1>=0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3321))+12);
  i1 = _check_pointer(i1, 3331);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3333))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 3331))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3347))+4);
  currentDecl = (OOC_SymbolTable__ProcDecl)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3367))+16);
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3407))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3417)), 0);
  i3 = i2!=i3;
  if (!i3) goto l14;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3437))+12);
  i3 = _check_pointer(i3, 3447);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3447))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3450))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3456))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3496));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3496));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3499)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3521)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)((OOC_Make_TranslateToIA32__Translator)i0, i2);
l8:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3407))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3417)), 0);
  i3 = i2!=i3;
  if (i3) goto l5_loop;
l14:
  return;
  ;
}

static void OOC_Make_TranslateToIA32__WriteCodeFile(OOC_IA32_Writer__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, OOC_IR__Module moduleIR, OOC_Make_TranslateToIA32__Translator translator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)translator;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)symTab;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3817)))), OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter)),OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IA32_Writer__Writer)i1, (OOC_SymbolTable__Module)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3848)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i1, ".text", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3874)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, ".Ltext0", 8);
  OOC_IA32_RuntimeData__Write((OOC_IA32_Writer__Writer)i1, (OOC_SymbolTable__Module)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3959)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i1, ".text", 6);
  i2 = (OOC_INT32)moduleIR;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4022))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3994)))), OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__ProcedureList)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4066))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4076)), 0);
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4102))+8);
  i5 = _check_pointer(i5, 4112);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4112))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4115))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4121))+4);
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4130)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (!i5) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4168)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)((OOC_Make_TranslateToIA32__Translator)i0, i4);
l6:
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4249))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4224)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__Procedure)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4278)))), OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__ProcedureList)(OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4310)))), OOC_IA32_Writer__WriterDesc_WriteStringData)),OOC_IA32_Writer__WriterDesc_WriteStringData)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4341)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, ".Letext", 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4367)))), OOC_IA32_Writer__WriterDesc_Directive)),OOC_IA32_Writer__WriterDesc_Directive)((OOC_IA32_Writer__Writer)i1, ".ident\011\"OOC: 0.1\"", 18);
  return;
  ;
}

OOC_Error__List OOC_Make_TranslateToIA32__Run(OOC_Repository__Module m, ADT_String__String libraryName, OOC_CHAR8 writeAST, OOC_CHAR8 writeIR, OOC_Make_TranslateToIA32__Translator translator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  OOC_Error__List errList;
  OOC_IR__Module moduleIR;
  ADT_Dictionary__Dictionary exports;
  OOC_IA32_Writer__Writer w;
  Msg__Msg res;
  auto void OOC_Make_TranslateToIA32__Run_CloseFile(OOC_IA32_Writer__Writer w);
    
    void OOC_Make_TranslateToIA32__Run_CloseFile(OOC_IA32_Writer__Writer w) {
      register OOC_INT32 i0,i1;
      Msg__Msg res;

      i0 = (OOC_INT32)w;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4991)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5011)))), OOC_IA32_Writer__WriterDesc_Close)),OOC_IA32_Writer__WriterDesc_Close)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5071)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)libraryName;
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, OOC_TRUE, OOC_TRUE, OOC_FALSE, OOC_FALSE, (ADT_String__String)i1, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i1 = (OOC_INT32)errList;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5516)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i1);
  if (!i1) goto l16;
  i1 = writeAST;
  if (!i1) goto l5;
  i1 = (OOC_INT32)StdChannels__stdout;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5598)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  i2 = (OOC_INT32)ast;
  OOC_AST_ExtTree_XML__Write((Channel__Writer)i1, (OOC_AST_ExtTree__Module)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5624)))), &_td_OOC_AST_ExtTree__ModuleDesc, 5624)));
l5:
  i1 = (OOC_INT32)ast;
  i2 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)pragmaHistory;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)OOC_IR_ConstFold__NewConstFold();
  i3 = (OOC_INT32)OOC_IR__NewBuilder((OOC_SymbolTable__Module)i2, (OOC_Config_Pragmas__History)i3, (OOC_Error__List)i4, (OOC_IR__ConstFold)i5);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR((OOC_AST_ExtTree__Module)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5694)))), &_td_OOC_AST_ExtTree__ModuleDesc, 5694)), (OOC_SymbolTable__Module)i2, (OOC_IR__Builder)i3);
  moduleIR = (OOC_IR__Module)i1;
  i2 = writeIR;
  if (!i2) goto l8;
  i2 = (OOC_INT32)StdChannels__stdout;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5991)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i2);
  OOC_IR_XML__Write((Channel__Writer)i2, (OOC_IR__Module)i1);
l8:
  i2 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i2, OOC_TRUE);
  exports = (ADT_Dictionary__Dictionary)i2;
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6110)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l16;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6252)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i0, 14, OOC_TRUE, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)OOC_IA32_Writer__NewWriter((Channel__Channel)i2);
  i3 = (OOC_INT32)res;
  i4 = i3==(OOC_INT32)0;
  w = (OOC_IA32_Writer__Writer)i2;
  if (i4) goto l13;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6436)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i3);
  goto l14;
l13:
  i3 = (OOC_INT32)translator;
  i4 = (OOC_INT32)symTab;
  OOC_Make_TranslateToIA32__WriteCodeFile((OOC_IA32_Writer__Writer)i2, (OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i4, (OOC_IR__Module)i1, (OOC_Make_TranslateToIA32__Translator)i3);
l14:
  i1 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)errList;
  OOC_Auxiliary_WriteSymbolFile__WriteSymbolFile((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i1, (OOC_Error__List)i3);
  OOC_Make_TranslateToIA32__Run_CloseFile((OOC_IA32_Writer__Writer)i2);
l16:
  i0 = (OOC_INT32)errList;
  return (OOC_Error__List)i0;
  ;
}

void OOC_OOC_Make_TranslateToIA32_init(void) {

  return;
  ;
}

/* --- */
