#include <OOC/Make/TranslateToC.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Make_TranslateToC__InitTranslator(OOC_Make_TranslateToC__Translator t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)t;
  *(OOC_INT32*)(_check_pointer(i0, 2176)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2193))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2211))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2235))+12) = (-1);
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_SetWriter(OOC_Make_TranslateToC__Translator t, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 2353)) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList(OOC_Make_TranslateToC__Translator t, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 2468))+8) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_SetDataWriter(OOC_Make_TranslateToC__Translator t, OOC_C_DeclWriter__Writer wd) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)wd;
  *(OOC_INT32*)((_check_pointer(i0, 2596))+4) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody(OOC_Make_TranslateToC__Translator t, OOC_IR__Procedure proc) {

  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure(OOC_Make_TranslateToC__Translator t, OOC_INT32 procIndex) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 oldProcIndex;
  OOC_C_DeclWriter__Writer w;
  OOC_C_DeclWriter__Declaration d;

  i0 = (OOC_INT32)t;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2908))+12);
  oldProcIndex = i1;
  i2 = procIndex;
  *(OOC_INT32*)((_check_pointer(i0, 2928))+12) = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3042));
  w = (OOC_C_DeclWriter__Writer)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3081))+8);
  i4 = _check_pointer(i4, 3091);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 3091))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3102))+4);
  i4 = (OOC_INT32)OOC_C_ConvertDecl__GetProc((OOC_C_DeclWriter__Writer)i3, (OOC_SymbolTable__ProcDecl)i4, 0u);
  d = (OOC_C_DeclWriter__Declaration)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3123)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3139)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i3, (OOC_C_DeclWriter__Declaration)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3168)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, " {", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3213))+8);
  i4 = _check_pointer(i4, 3223);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 3223))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3195)))), OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToC__Translator)i0, (OOC_IR__Procedure)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3242)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3258)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "}", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3284)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i3);
  *(OOC_INT32*)((_check_pointer(i0, 3301))+12) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures(OOC_Make_TranslateToC__Translator t) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__ProcDecl currentDecl;
  OOC_INT32 i;

  i0 = (OOC_INT32)t;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3853))+12);
  i1 = i1>=0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3946))+8);
  i1 = _check_pointer(i1, 3956);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3958))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 3956))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3972))+4);
  currentDecl = (OOC_SymbolTable__ProcDecl)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3992))+12);
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4032))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4042)), 0);
  i3 = i2!=i3;
  if (!i3) goto l14;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4062))+8);
  i3 = _check_pointer(i3, 4072);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 4072))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4075))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4081))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4121));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4121));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4124)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i4, 1);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4149));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4149));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4152)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i4);
  OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure((OOC_Make_TranslateToC__Translator)i0, i2);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4207));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4207));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4210)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i4, (-1));
l8:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4032))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4042)), 0);
  i3 = i2!=i3;
  if (i3) goto l5_loop;
l14:
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteModuleName(OOC_C_DeclWriter__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, OOC_Repository__Module module, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d, OOC_CHAR8 newline) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(prefix,OOC_CHAR8 ,prefix_0d)
  OOC_ALLOCATE_VPAR(suffix,OOC_CHAR8 ,suffix_0d)
  OOC_CHAR8 str[1024];
  OOC_INT32 i;

  OOC_INITIALIZE_VPAR(prefix__ref,prefix,OOC_CHAR8 ,prefix_0d)
  OOC_INITIALIZE_VPAR(suffix__ref,suffix,OOC_CHAR8 ,suffix_0d)
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4576))+4);
  _copy_8((const void*)(_check_pointer(i0, 4582)),(void*)(OOC_INT32)str,1024);
  i = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT32, 4617)));
  i0 = i0!=0u;
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4643)));
  i1 = i1==58u;
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4662))) = 95u;
l6:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4617)));
  i1 = i1!=0u;
  if (i1) goto l3_loop;
l11:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4706)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)prefix, prefix_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4735)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4761)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
  i1 = newline;
  if (!i1) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4812)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
l14:
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteHeaderFile(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, ADT_Dictionary_AddressKey__Dictionary exports) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)m;
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "#ifndef _MODULE_", 17, (OOC_Repository__Module)i1, "_", 2, 1u);
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "#define _MODULE_", 17, (OOC_Repository__Module)i1, "_", 2, 1u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5126)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5246)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include <__typemap.h>", 23);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5293)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5428)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include <RT0.oh>", 18);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5512)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i2 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)exports;
  OOC_C_ConvertDecl__ConvertSymTab((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, (OOC_SymbolTable__Module)i2, (ADT_Dictionary_AddressKey__Dictionary)i3, 1u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5594)))), OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)),OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)((OOC_C_DeclWriter__Writer)i0);
  OOC_C_RuntimeData__Write((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Module)i2, 1u);
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "#endif /* _MODULE_", 19, (OOC_Repository__Module)i1, "_ */", 5, 1u);
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteDeclFile(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, ADT_Dictionary_AddressKey__Dictionary exports) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)m;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5902)))), OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)),OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, 13);
  i2 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)exports;
  OOC_C_ConvertDecl__ConvertSymTab((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, (OOC_SymbolTable__Module)i2, (ADT_Dictionary_AddressKey__Dictionary)i3, 0u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6025)))), OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)),OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)((OOC_C_DeclWriter__Writer)i0);
  OOC_C_RuntimeData__Write((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Module)i2, 0u);
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteCodeFile(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Writer wd, OOC_Repository__Module m, OOC_IR__Module moduleIR, OOC_Make_TranslateToC__Translator translator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)m;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6292)))), OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)),OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, 12);
  i2 = (OOC_INT32)translator;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6355)))), OOC_Make_TranslateToC__TranslatorDesc_SetWriter)),OOC_Make_TranslateToC__TranslatorDesc_SetWriter)((OOC_Make_TranslateToC__Translator)i2, (OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6571)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include <__oo2c.h>", 20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6615)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6631)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include <setjmp.h>", 20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6675)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i3 = (OOC_INT32)wd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6700)))), OOC_Make_TranslateToC__TranslatorDesc_SetDataWriter)),OOC_Make_TranslateToC__TranslatorDesc_SetDataWriter)((OOC_Make_TranslateToC__Translator)i2, (OOC_C_DeclWriter__Writer)i3);
  i3 = (OOC_INT32)moduleIR;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6764))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6736)))), OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToC__Translator)i2, (OOC_IR__ProcedureList)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6808))+8);
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 6818)), 0);
  i5 = 0<i4;
  if (!i5) goto l11;
  i5=0;
l3_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6844))+8);
  i6 = _check_pointer(i6, 6854);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 6854))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6857))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6863))+4);
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6872)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (!i6) goto l6;
  OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure((OOC_Make_TranslateToC__Translator)i2, i5);
l6:
  i5 = i5+1;
  i = i5;
  i6 = i5<i4;
  if (i6) goto l3_loop;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6957)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "void OOC_", 10, (OOC_Repository__Module)i1, "_init(void) {", 14, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7072))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7047)))), OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToC__Translator)i2, (OOC_IR__Procedure)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7092)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7108)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "}", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7134)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7160)))), OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToC__Translator)i2, (OOC_IR__ProcedureList)(OOC_INT32)0);
  return;
  ;
}

OOC_Error__List OOC_Make_TranslateToC__Run(OOC_Repository__Module m, Object__String libraryName, OOC_CHAR8 analysisOnly, OOC_SymbolTable_Uses__Uses uses, OOC_CHAR8 writeAST, OOC_CHAR8 writeIR, OOC_Make_TranslateToC__Translator translator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  OOC_Error__List errList;
  OOC_IR__Module module;
  ADT_Dictionary_AddressKey__Dictionary exports;
  OOC_C_DeclWriter__Writer wd;
  OOC_C_DeclWriter__Writer wh;
  OOC_C_DeclWriter__Writer wc;
  auto OOC_C_DeclWriter__Writer OOC_Make_TranslateToC__Run_WriteFile(OOC_INT8 fileId);
  auto void OOC_Make_TranslateToC__Run_CloseFile(OOC_C_DeclWriter__Writer w);
    
    OOC_C_DeclWriter__Writer OOC_Make_TranslateToC__Run_WriteFile(OOC_INT8 fileId) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      IO__ByteChannel ch;
      OOC_C_DeclWriter__Writer w;

      i0 = (OOC_INT32)m;
      i1 = fileId;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7887)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i0, i1, 1u);
      ch = (IO__ByteChannel)i0;
      i2 = (OOC_INT32)m;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7960)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i2, i1, 0u);
      i0 = (OOC_INT32)OOC_C_DeclWriter__NewWriter((IO__ByteChannel)i0, (URI__HierarchicalURI)i2);
      w = (OOC_C_DeclWriter__Writer)i0;
      switch (i1) {
      case 13:
        i1 = (OOC_INT32)exports;
        i2 = (OOC_INT32)symTab;
        i3 = (OOC_INT32)m;
        OOC_Make_TranslateToC__WriteHeaderFile((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i2, (ADT_Dictionary_AddressKey__Dictionary)i1);
        goto l6;
      case 12:
        i1 = (OOC_INT32)exports;
        i2 = (OOC_INT32)symTab;
        i3 = (OOC_INT32)m;
        OOC_Make_TranslateToC__WriteDeclFile((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i2, (ADT_Dictionary_AddressKey__Dictionary)i1);
        goto l6;
      case 11:
        i1 = (OOC_INT32)wd;
        i2 = (OOC_INT32)module;
        i3 = (OOC_INT32)translator;
        i4 = (OOC_INT32)m;
        OOC_Make_TranslateToC__WriteCodeFile((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Writer)i1, (OOC_Repository__Module)i4, (OOC_IR__Module)i2, (OOC_Make_TranslateToC__Translator)i3);
        goto l6;
      default:
        _failed_case(i1, 7993);
        goto l6;
      }
l6:
      return (OOC_C_DeclWriter__Writer)i0;
      ;
    }

    
    void OOC_Make_TranslateToC__Run_CloseFile(OOC_C_DeclWriter__Writer w) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8410)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8430)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "/* --- */", 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8468)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8492))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8503))+4);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l5;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8539))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8550))+4);
      Exception__Raise((void*)i1);
l5:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8581)))), OOC_C_DeclWriter__WriterDesc_Close)),OOC_C_DeclWriter__WriterDesc_Close)((OOC_C_DeclWriter__Writer)i0);
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)libraryName;
  i2 = (OOC_INT32)uses;
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, 1u, 1u, 0u, 0u, (Object__String)i1, (OOC_SymbolTable_Uses__Uses)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i0 = (OOC_INT32)errList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (!i0) goto l34;
  i0 = writeAST;
  if (!i0) goto l5;
  i0 = (OOC_INT32)ast;
  i1 = (OOC_INT32)IO_StdChannels__stdout;
  OOC_AST_ExtTree_XML__Write((IO__ByteChannel)i1, (OOC_AST_ExtTree__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9113)))), &_td_OOC_AST_ExtTree__ModuleDesc, 9113)));
l5:
  i0 = (OOC_INT32)ast;
  i1 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)pragmaHistory;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)OOC_IR_ConstFold__NewConstFold();
  i2 = (OOC_INT32)OOC_IR__NewBuilder((OOC_SymbolTable__Module)i1, (OOC_SymbolTable_Uses__Uses)i2, (OOC_Config_Pragmas__History)i3, (OOC_Error__List)i4, (OOC_IR__ConstFold)i5);
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR((OOC_AST_ExtTree__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9181)))), &_td_OOC_AST_ExtTree__ModuleDesc, 9181)), (OOC_SymbolTable__Module)i1, (OOC_IR__Builder)i2);
  module = (OOC_IR__Module)i0;
  i1 = (OOC_INT32)errList;
  i2 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i1);
  if (!i2) goto l8;
  i2 = (OOC_INT32)pragmaHistory;
  i3 = (OOC_INT32)symTab;
  OOC_IR_CheckUses__CheckUses((OOC_IR__Module)i0, (OOC_SymbolTable__Module)i3, (OOC_Config_Pragmas__History)i2, (OOC_Error__List)i1);
l8:
  i1 = writeIR;
  if (!i1) goto l11;
  i1 = (OOC_INT32)IO_StdChannels__stdout;
  OOC_IR_XML__Write((IO__ByteChannel)i1, (OOC_IR__Module)i0);
l11:
  i0 = (OOC_INT32)symTab;
  i0 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i0, 1u);
  exports = (ADT_Dictionary_AddressKey__Dictionary)i0;
  i0 = (OOC_INT32)errList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (i0) goto l14;
  i0=0u;
  goto l16;
l14:
  i0 = analysisOnly;
  i0 = !i0;
  
l16:
  if (!i0) goto l33;
  wd = (OOC_C_DeclWriter__Writer)(OOC_INT32)0;
  i0 = (OOC_INT32)OOC_Make_TranslateToC__Run_WriteFile(13);
  wh = (OOC_C_DeclWriter__Writer)i0;
  i0 = (OOC_INT32)errList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (i0) goto l20;
  wd = (OOC_C_DeclWriter__Writer)(OOC_INT32)0;
  goto l21;
l20:
  i0 = (OOC_INT32)OOC_Make_TranslateToC__Run_WriteFile(12);
  wd = (OOC_C_DeclWriter__Writer)i0;
l21:
  i0 = (OOC_INT32)symTab;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 10087))+52);
  i0 = i0==0;
  if (i0) goto l24;
  i0=0u;
  goto l26;
l24:
  i0 = (OOC_INT32)errList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  
l26:
  if (i0) goto l28;
  wc = (OOC_C_DeclWriter__Writer)(OOC_INT32)0;
  goto l29;
l28:
  i0 = (OOC_INT32)OOC_Make_TranslateToC__Run_WriteFile(11);
  wc = (OOC_C_DeclWriter__Writer)i0;
l29:
  i0 = (OOC_INT32)errList;
  i1 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (!i1) goto l32;
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)m;
  OOC_Auxiliary_WriteSymbolFile__WriteSymbolFile((OOC_Repository__Module)i2, (OOC_SymbolTable__Module)i1, (OOC_Error__List)i0);
l32:
  i0 = (OOC_INT32)wh;
  OOC_Make_TranslateToC__Run_CloseFile((OOC_C_DeclWriter__Writer)i0);
  i0 = (OOC_INT32)wd;
  OOC_Make_TranslateToC__Run_CloseFile((OOC_C_DeclWriter__Writer)i0);
  i0 = (OOC_INT32)wc;
  OOC_Make_TranslateToC__Run_CloseFile((OOC_C_DeclWriter__Writer)i0);
l33:
  i0 = (OOC_INT32)module;
  OOC_IR__ModuleDesc_Destroy((OOC_IR__Module)i0);
l34:
  i0 = (OOC_INT32)errList;
  return (OOC_Error__List)i0;
  ;
}

void OOC_OOC_Make_TranslateToC_init(void) {

  return;
  ;
}

/* --- */
