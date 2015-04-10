#include "OOC/Make/TranslateToC.d"
#include "__oo2c.h"

void OOC_Make_TranslateToC__InitTranslator(OOC_Make_TranslateToC__Translator t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)t;
  *(OOC_INT32*)(_check_pointer(i0, 2161)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2178))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2196))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2220))+12) = -1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_SetWriter(OOC_Make_TranslateToC__Translator t, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 2338)) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList(OOC_Make_TranslateToC__Translator t, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 2453))+8) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_SetDataWriter(OOC_Make_TranslateToC__Translator t, OOC_C_DeclWriter__Writer wd) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)wd;
  *(OOC_INT32*)((_check_pointer(i0, 2581))+4) = i1;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2893))+12);
  oldProcIndex = i1;
  i2 = procIndex;
  *(OOC_INT32*)((_check_pointer(i0, 2913))+12) = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3027));
  w = (OOC_C_DeclWriter__Writer)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3066))+8);
  i4 = _check_pointer(i4, 3076);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 3076))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3087))+4);
  i4 = (OOC_INT32)OOC_C_ConvertDecl__GetProc((OOC_C_DeclWriter__Writer)i3, (OOC_SymbolTable__ProcDecl)i4, OOC_FALSE);
  d = (OOC_C_DeclWriter__Declaration)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3108)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3124)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i3, (OOC_C_DeclWriter__Declaration)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3153)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, " {", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3198))+8);
  i4 = _check_pointer(i4, 3208);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 3208))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3180)))), OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToC__Translator)i0, (OOC_IR__Procedure)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3227)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3243)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "}", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3269)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i3);
  *(OOC_INT32*)((_check_pointer(i0, 3286))+12) = i1;
  return;
  ;
}

void OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures(OOC_Make_TranslateToC__Translator t) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__ProcDecl currentDecl;
  OOC_INT32 i;

  i0 = (OOC_INT32)t;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3838))+12);
  i1 = i1>=0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3931))+8);
  i1 = _check_pointer(i1, 3941);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3943))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 3941))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3957))+4);
  currentDecl = (OOC_SymbolTable__ProcDecl)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3977))+12);
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4017))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4027)), 0);
  i3 = i2!=i3;
  if (!i3) goto l14;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4047))+8);
  i3 = _check_pointer(i3, 4057);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 4057))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4060))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4066))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4106));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4106));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4109)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i4, 1);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4134));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4134));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4137)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4159)))), OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure)),OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure)((OOC_Make_TranslateToC__Translator)i0, i2);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4192));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4192));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4195)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i4, -1);
l8:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4017))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4027)), 0);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4561))+4);
  _copy_8((_check_pointer(i0, 4567)),(OOC_INT32)str,1024);
  i = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT32, 4602)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4628)));
  i1 = i1==(OOC_CHAR8)':';
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4647))) = (OOC_CHAR8)'_';
l6:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4602)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3_loop;
l11:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4691)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)prefix, prefix_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4720)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4746)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
  i1 = newline;
  if (!i1) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4797)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
l14:
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteHeaderFile(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, ADT_Dictionary__Dictionary exports) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)m;
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "#ifndef _MODULE_", 17, (OOC_Repository__Module)i1, "_", 2, OOC_TRUE);
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "#define _MODULE_", 17, (OOC_Repository__Module)i1, "_", 2, OOC_TRUE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5121)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5241)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include \"__typemap.h\"", 23);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5288)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5423)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include \"RT0.oh\"", 18);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5507)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i2 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)exports;
  OOC_C_ConvertDecl__ConvertSymTab((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)i3, OOC_TRUE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5589)))), OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)),OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)((OOC_C_DeclWriter__Writer)i0);
  OOC_C_RuntimeData__Write((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Module)i2, OOC_TRUE);
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "#endif /* _MODULE_", 19, (OOC_Repository__Module)i1, "_ */", 5, OOC_TRUE);
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteDeclFile(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_SymbolTable__Module symTab, ADT_Dictionary__Dictionary exports) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)m;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5907)))), OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)),OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, 13);
  i2 = (OOC_INT32)symTab;
  i3 = (OOC_INT32)exports;
  OOC_C_ConvertDecl__ConvertSymTab((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)i3, OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6030)))), OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)),OOC_C_DeclWriter__WriterDesc_WriteDeclarationList)((OOC_C_DeclWriter__Writer)i0);
  OOC_C_RuntimeData__Write((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Module)i2, OOC_FALSE);
  return;
  ;
}

static void OOC_Make_TranslateToC__WriteCodeFile(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Writer wd, OOC_Repository__Module m, OOC_IR__Module moduleIR, OOC_Make_TranslateToC__Translator translator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)m;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6297)))), OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)),OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, 12);
  i2 = (OOC_INT32)translator;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6360)))), OOC_Make_TranslateToC__TranslatorDesc_SetWriter)),OOC_Make_TranslateToC__TranslatorDesc_SetWriter)((OOC_Make_TranslateToC__Translator)i2, (OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6576)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include \"__oo2c.h\"", 20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6620)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i3 = (OOC_INT32)wd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6645)))), OOC_Make_TranslateToC__TranslatorDesc_SetDataWriter)),OOC_Make_TranslateToC__TranslatorDesc_SetDataWriter)((OOC_Make_TranslateToC__Translator)i2, (OOC_C_DeclWriter__Writer)i3);
  i3 = (OOC_INT32)moduleIR;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6709))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6681)))), OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToC__Translator)i2, (OOC_IR__ProcedureList)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6753))+8);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 6763)), 0);
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l11;
  i5=0;
l3_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6789))+8);
  i6 = _check_pointer(i6, 6799);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 6799))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6802))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6808))+4);
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6817)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (!i6) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6855)))), OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure)),OOC_Make_TranslateToC__TranslatorDesc_WriteProcedure)((OOC_Make_TranslateToC__Translator)i2, i5);
l6:
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l3_loop;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6902)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_Make_TranslateToC__WriteModuleName((OOC_C_DeclWriter__Writer)i0, "void OOC_", 10, (OOC_Repository__Module)i1, "_init(void) {", 14, OOC_FALSE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7017))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6992)))), OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)),OOC_Make_TranslateToC__TranslatorDesc_WriteProcBody)((OOC_Make_TranslateToC__Translator)i2, (OOC_IR__Procedure)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7037)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7053)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "}", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7079)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7105)))), OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)),OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList)((OOC_Make_TranslateToC__Translator)i2, (OOC_IR__ProcedureList)(OOC_INT32)0);
  return;
  ;
}

OOC_Error__List OOC_Make_TranslateToC__Run(OOC_Repository__Module m, ADT_String__String libraryName, OOC_CHAR8 writeAST, OOC_CHAR8 writeIR, OOC_Make_TranslateToC__Translator translator) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  OOC_Error__List errList;
  OOC_IR__Module module;
  ADT_Dictionary__Dictionary exports;
  OOC_C_DeclWriter__Writer wh;
  OOC_C_DeclWriter__Writer wd;
  OOC_C_DeclWriter__Writer wc;
  auto OOC_C_DeclWriter__Writer OOC_Make_TranslateToC__Run_WriteFile(OOC_INT8 fileId);
  auto void OOC_Make_TranslateToC__Run_CloseFile(OOC_C_DeclWriter__Writer w);
    
    OOC_C_DeclWriter__Writer OOC_Make_TranslateToC__Run_WriteFile(OOC_INT8 fileId) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      Channel__Channel ch;
      Msg__Msg res;
      OOC_C_DeclWriter__Writer w;

      i0 = (OOC_INT32)m;
      i1 = fileId;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7783)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i0, i1, OOC_TRUE, (void*)(OOC_INT32)&res);
      i2 = (OOC_INT32)res;
      i3 = i2==(OOC_INT32)0;
      ch = (Channel__Channel)i0;
      if (i3) goto l3;
      i0 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8267)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return (OOC_C_DeclWriter__Writer)(OOC_INT32)0;
      goto l10;
l3:
      i2 = (OOC_INT32)m;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7898)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i2, i1, OOC_FALSE);
      i0 = (OOC_INT32)OOC_C_DeclWriter__NewWriter((Channel__Channel)i0, (URI__HierarchicalURI)i2);
      w = (OOC_C_DeclWriter__Writer)i0;
      switch (i1) {
      case 13:
        i1 = (OOC_INT32)exports;
        i2 = (OOC_INT32)symTab;
        i3 = (OOC_INT32)m;
        OOC_Make_TranslateToC__WriteHeaderFile((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)i1);
        goto l9;
      case 12:
        i1 = (OOC_INT32)exports;
        i2 = (OOC_INT32)symTab;
        i3 = (OOC_INT32)m;
        OOC_Make_TranslateToC__WriteDeclFile((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)i1);
        goto l9;
      case 11:
        i1 = (OOC_INT32)wd;
        i2 = (OOC_INT32)module;
        i3 = (OOC_INT32)translator;
        i4 = (OOC_INT32)m;
        OOC_Make_TranslateToC__WriteCodeFile((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Writer)i1, (OOC_Repository__Module)i4, (OOC_IR__Module)i2, (OOC_Make_TranslateToC__Translator)i3);
        goto l9;
      default:
        _failed_case(i1, 7933);
        goto l9;
      }
l9:
      return (OOC_C_DeclWriter__Writer)i0;
l10:
      _failed_function(7617); return 0;
      ;
    }

    
    void OOC_Make_TranslateToC__Run_CloseFile(OOC_C_DeclWriter__Writer w) {
      register OOC_INT32 i0,i1;
      Msg__Msg res;

      i0 = (OOC_INT32)w;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8452)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8472)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "/* --- */", 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8510)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8530)))), OOC_C_DeclWriter__WriterDesc_Close)),OOC_C_DeclWriter__WriterDesc_Close)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)&res);
      i0 = (OOC_INT32)res;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8590)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)libraryName;
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, OOC_TRUE, OOC_TRUE, OOC_FALSE, OOC_FALSE, (ADT_String__String)i1, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9035)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l27;
  i0 = writeAST;
  if (!i0) goto l5;
  i0 = (OOC_INT32)StdChannels__stdout;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9117)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i0);
  i1 = (OOC_INT32)ast;
  OOC_AST_ExtTree_XML__Write((Channel__Writer)i0, (OOC_AST_ExtTree__Module)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9143)))), &_td_OOC_AST_ExtTree__ModuleDesc, 9143)));
l5:
  i0 = (OOC_INT32)ast;
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)pragmaHistory;
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)OOC_IR_ConstFold__NewConstFold();
  i2 = (OOC_INT32)OOC_IR__NewBuilder((OOC_SymbolTable__Module)i1, (OOC_Config_Pragmas__History)i2, (OOC_Error__List)i3, (OOC_IR__ConstFold)i4);
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateIR__CreateIR((OOC_AST_ExtTree__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9211)))), &_td_OOC_AST_ExtTree__ModuleDesc, 9211)), (OOC_SymbolTable__Module)i1, (OOC_IR__Builder)i2);
  module = (OOC_IR__Module)i0;
  i1 = writeIR;
  if (!i1) goto l8;
  i1 = (OOC_INT32)StdChannels__stdout;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9503)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  OOC_IR_XML__Write((Channel__Writer)i1, (OOC_IR__Module)i0);
l8:
  i0 = (OOC_INT32)symTab;
  i0 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i0, OOC_TRUE);
  exports = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9620)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l26;
  i0 = (OOC_INT32)OOC_Make_TranslateToC__Run_WriteFile(13);
  wh = (OOC_C_DeclWriter__Writer)i0;
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9789)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (i0) goto l13;
  wd = (OOC_C_DeclWriter__Writer)(OOC_INT32)0;
  goto l14;
l13:
  i0 = (OOC_INT32)OOC_Make_TranslateToC__Run_WriteFile(12);
  wd = (OOC_C_DeclWriter__Writer)i0;
l14:
  i0 = (OOC_INT32)symTab;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 9924))+44);
  i0 = i0==0;
  if (i0) goto l17;
  i0=OOC_FALSE;
  goto l19;
l17:
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9959)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
l19:
  if (i0) goto l21;
  wc = (OOC_C_DeclWriter__Writer)(OOC_INT32)0;
  goto l22;
l21:
  i0 = (OOC_INT32)OOC_Make_TranslateToC__Run_WriteFile(11);
  wc = (OOC_C_DeclWriter__Writer)i0;
l22:
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10095)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l25;
  i0 = (OOC_INT32)errList;
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)m;
  OOC_Auxiliary_WriteSymbolFile__WriteSymbolFile((OOC_Repository__Module)i2, (OOC_SymbolTable__Module)i1, (OOC_Error__List)i0);
l25:
  i0 = (OOC_INT32)wh;
  OOC_Make_TranslateToC__Run_CloseFile((OOC_C_DeclWriter__Writer)i0);
  i0 = (OOC_INT32)wd;
  OOC_Make_TranslateToC__Run_CloseFile((OOC_C_DeclWriter__Writer)i0);
  i0 = (OOC_INT32)wc;
  OOC_Make_TranslateToC__Run_CloseFile((OOC_C_DeclWriter__Writer)i0);
l26:
  i0 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10549)))), OOC_IR__ModuleDesc_Destroy)),OOC_IR__ModuleDesc_Destroy)((OOC_IR__Module)i0);
l27:
  i0 = (OOC_INT32)errList;
  return (OOC_Error__List)i0;
  ;
}

void OOC_OOC_Make_TranslateToC_init(void) {

  return;
  ;
}

/* --- */
