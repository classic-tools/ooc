#include <OOC/Auxiliary/ParseModule.d>
#include <__oo2c.h>

void OOC_Auxiliary_ParseModule__ParseModule(OOC_Repository__Module m, OOC_CHAR8 checkModuleName, OOC_CHAR8 createNamespace, OOC_CHAR8 writeSymbolFile, OOC_CHAR8 abortAfterImport, Object__String libraryName, OOC_AST__Node *ast, OOC_SymbolTable__Module *symTab, OOC_Config_Pragmas__History *pragmaHistory, OOC_Error__List *errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_Scanner_InputBuffer__Buffer inputBuffer;
  Msg__Msg res;
  URI__URI uri;
  OOC_Repository__URIBuffer uriStr;
  OOC_Scanner_Builder_BasicList__Builder scannerBuilder;
  OOC_UINT32 scannerFlags;
  OOC_AST_ExtTree__Builder astBuilder;
  OOC_UINT32 parserFlags;
  OOC_SymbolTable_Builder__Builder stb;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1823)))), OOC_Repository__ModuleDesc_GetInputBuffer)),OOC_Repository__ModuleDesc_GetInputBuffer)((OOC_Repository__Module)i0, (void*)(OOC_INT32)&res);
  i2 = i1==(OOC_INT32)0;
  inputBuffer = (OOC_Scanner_InputBuffer__Buffer)i1;
  if (i2) goto l34;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2142))+20);
  *errList = (OOC_Error__List)i2;
  i3 = (OOC_INT32)OOC_Scanner_Builder_BasicList__New((OOC_Scanner_InputBuffer__Buffer)i1, OOC_TRUE);
  scannerBuilder = (OOC_Scanner_Builder_BasicList__Builder)i3;
  i4 = abortAfterImport;
  scannerFlags = 31;
  if (i4) goto l5;
  i5=31;
  goto l6;
l5:
  i5 = _set_bit(31,5);
  scannerFlags = i5;
  
l6:
  i6 = (OOC_INT32)OOC_Config__pragmas;
  OOC_Scanner__ScanInput((OOC_Scanner_Builder__Builder)i3, (OOC_Config_Pragmas__Section)i6, i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2441)))), OOC_Scanner_InputBuffer__BufferDesc_Close)),OOC_Scanner_InputBuffer__BufferDesc_Close)((OOC_Scanner_InputBuffer__Buffer)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2487))+4);
  *pragmaHistory = (OOC_Config_Pragmas__History)i1;
  *ast = (OOC_AST__Node)(OOC_INT32)0;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2545)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (i1) goto l9;
  i1=(OOC_INT32)0;
  goto l17;
l9:
  i1 = (OOC_INT32)OOC_AST_ExtTree__New();
  astBuilder = (OOC_AST_ExtTree__Builder)i1;
  i5 = checkModuleName;
  if (!i5) goto l12;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2669))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2669))+4);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 2675)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2651)))), OOC_AST__BuilderDesc_SetModuleName)),OOC_AST__BuilderDesc_SetModuleName)((OOC_AST__Builder)i1, (void*)(_check_pointer(i5, 2675)), i6);
l12:
  parserFlags = -17;
  if (i4) goto l15;
  i4=-17;
  goto l16;
l15:
  i4 = _clear_bit((_set_bit(-17,4)),3);
  parserFlags = i4;
  
l16:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2929))+8);
  i1 = (OOC_INT32)OOC_Parser__Module((OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_AST__Builder)i1, (OOC_Error__List)i2, i4);
  *ast = (OOC_AST__Node)i1;
  
l17:
  *symTab = (OOC_SymbolTable__Module)(OOC_INT32)0;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3052)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i3) goto l35;
  i3 = (OOC_INT32)OOC_SymbolTable_Builder__New();
  stb = (OOC_SymbolTable_Builder__Builder)i3;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3178)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, OOC_FALSE);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3236));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 3244))+4);
  i6 = (OOC_INT32)libraryName;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__CreateSymTab((OOC_AST__Node)i1, (OOC_SymbolTable_Builder__Builder)i3, (Object__String)i6, (URI__HierarchicalURI)i4, (URI__HierarchicalURI)i5);
  *symTab = (OOC_SymbolTable__Module)i1;
  i3 = createNamespace;
  if (!i3) goto l35;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3308)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i3) goto l24;
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i1, (OOC_Error__List)i2);
l24:
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3422)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (i3) goto l27;
  i3=OOC_FALSE;
  goto l29;
l27:
  i3 = writeSymbolFile;
  
l29:
  if (!i3) goto l35;
  OOC_Auxiliary_WriteSymbolFile__WriteSymbolFile((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i1, (OOC_Error__List)i2);
  goto l35;
l34:
  *ast = (OOC_AST__Node)(OOC_INT32)0;
  *symTab = (OOC_SymbolTable__Module)(OOC_INT32)0;
  *pragmaHistory = (OOC_Config_Pragmas__History)(OOC_INT32)0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1960)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2014)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)uriStr, 1024);
  i0 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)uriStr, 1024);
  *errList = (OOC_Error__List)i0;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2090)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
l35:
  return;
  ;
}

void OOC_OOC_Auxiliary_ParseModule_init(void) {

  return;
  ;
}

/* --- */
