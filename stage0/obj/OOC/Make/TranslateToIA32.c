#include "OOC/Make/TranslateToIA32.d"
#include "__oo2c.h"

void OOC_Make_TranslateToIA32__InitTranslator(OOC_Make_TranslateToIA32__Translator t, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  *(OOC_INT32*)(_check_pointer(i0, 1930)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1947))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1971))+16) = -1;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 1997))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2022))+8) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter(OOC_Make_TranslateToIA32__Translator t, OOC_IA32_Writer__Writer w, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 2152)) = i1;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 2167))+8) = i1;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList(OOC_Make_TranslateToIA32__Translator t, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 2292))+12) = i1;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2562))+16);
  oldProcIndex = i1;
  i2 = procIndex;
  *(OOC_INT32*)((_check_pointer(i0, 2582))+16) = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2638))+12);
  i3 = _check_pointer(i3, 2648);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 2648))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2620)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__Procedure)i2);
  *(OOC_INT32*)((_check_pointer(i0, 2672))+16) = i1;
  return;
  ;
}

void OOC_Make_TranslateToIA32__TranslatorDesc_WriteNestedProcedures(OOC_Make_TranslateToIA32__Translator t) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__ProcDecl currentDecl;
  OOC_INT32 i;

  i0 = (OOC_INT32)t;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3224))+16);
  i1 = i1>=0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3317))+12);
  i1 = _check_pointer(i1, 3327);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3329))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 3327))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3343))+4);
  currentDecl = (OOC_SymbolTable__ProcDecl)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3363))+16);
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3403))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3413)), (OOC_INT32)0);
  i3 = i2!=i3;
  if (!i3) goto l14;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3433))+12);
  i3 = _check_pointer(i3, 3443);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3443))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3446))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3452))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3492));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3492));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3495)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3517)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)((OOC_Make_TranslateToIA32__Translator)i0, i2);
l8:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3403))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3413)), (OOC_INT32)0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3813)))), OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter)),OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IA32_Writer__Writer)i1, (OOC_SymbolTable__Module)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3844)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i1, ".text", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3870)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (Object__String)((OOC_INT32)_c0));
  OOC_IA32_RuntimeData__Write((OOC_IA32_Writer__Writer)i1, (OOC_SymbolTable__Module)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3955)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i1, ".text", 6);
  i2 = (OOC_INT32)moduleIR;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4018))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3990)))), OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__ProcedureList)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4062))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4072)), (OOC_INT32)0);
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4098))+8);
  i5 = _check_pointer(i5, 4108);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4108))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4111))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4117))+4);
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4126)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (!i5) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4164)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure)((OOC_Make_TranslateToIA32__Translator)i0, i4);
l6:
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4245))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4220)))), OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__Procedure)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4274)))), OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToIA32__Translator)i0, (OOC_IR__ProcedureList)(OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4306)))), OOC_IA32_Writer__WriterDesc_WriteStringData)),OOC_IA32_Writer__WriterDesc_WriteStringData)((OOC_IA32_Writer__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4337)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i1, (Object__String)((OOC_INT32)_c1));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4363)))), OOC_IA32_Writer__WriterDesc_Directive)),OOC_IA32_Writer__WriterDesc_Directive)((OOC_IA32_Writer__Writer)i1, ".ident\011\"OOC: 0.1\"", 18);
  return;
  ;
}

OOC_Error__List OOC_Make_TranslateToIA32__Run(OOC_Repository__Module m, Object__String libraryName, OOC_CHAR8 writeAST, OOC_CHAR8 writeIR, OOC_Make_TranslateToIA32__Translator translator) {
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4980)))), OOC_IA32_Writer__WriterDesc_Newline)),OOC_IA32_Writer__WriterDesc_Newline)((OOC_IA32_Writer__Writer)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5000)))), OOC_IA32_Writer__WriterDesc_Close)),OOC_IA32_Writer__WriterDesc_Close)((OOC_IA32_Writer__Writer)i0, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5060)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)libraryName;
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, OOC_TRUE, OOC_TRUE, OOC_FALSE, OOC_FALSE, (Object__String)i1, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i1 = (OOC_INT32)errList;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5505)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i1);
  if (!i1) goto l16;
  i1 = writeAST;
  if (!i1) goto l5;
  i1 = (OOC_INT32)StdChannels__stdout;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5587)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  i2 = (OOC_INT32)ast;
  OOC_AST_ExtTree_XML__Write((Channel__Writer)i1, (OOC_AST_ExtTree__Module)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5613)))), &_td_OOC_AST_ExtTree__ModuleDesc, 5613)));
l5:
  i1 = (OOC_INT32)ast;
  i2 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)pragmaHistory;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)OOC_IR_ConstFold__NewConstFold();
  i3 = (OOC_INT32)OOC_IR__NewBuilder((OOC_SymbolTable__Module)i2, (OOC_Config_Pragmas__History)i3, (OOC_Error__List)i4, (OOC_IR__ConstFold)i5);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR((OOC_AST_ExtTree__Module)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5683)))), &_td_OOC_AST_ExtTree__ModuleDesc, 5683)), (OOC_SymbolTable__Module)i2, (OOC_IR__Builder)i3);
  moduleIR = (OOC_IR__Module)i1;
  i2 = writeIR;
  if (!i2) goto l8;
  i2 = (OOC_INT32)StdChannels__stdout;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5980)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i2);
  OOC_IR_XML__Write((Channel__Writer)i2, (OOC_IR__Module)i1);
l8:
  i2 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i2, OOC_TRUE);
  exports = (ADT_Dictionary__Dictionary)i2;
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6099)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l16;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6241)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i0, 14, OOC_TRUE, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)OOC_IA32_Writer__NewWriter((Channel__Channel)i2);
  i3 = (OOC_INT32)res;
  i4 = i3==(OOC_INT32)0;
  w = (OOC_IA32_Writer__Writer)i2;
  if (i4) goto l13;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6425)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i3);
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
  _c0 = Object__NewLatin1Region(".Ltext0", 8, (OOC_INT32)0, 7);
  _c1 = Object__NewLatin1Region(".Letext", 8, (OOC_INT32)0, 7);

  return;
  ;
}

/* --- */
