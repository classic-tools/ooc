#include "OOC/SymbolTable/CreateNamespace.d"
#include "__oo2c.h"

void OOC_SymbolTable_CreateNamespace__ErrorContextDesc_GetTemplate(OOC_SymbolTable_CreateNamespace__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2303))+8);
  switch (i1) {
  case 1:
    _copy_16(((OOC_CHAR16[]){85,110,100,101,99,108,97,114,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(OOC_INT32)t,128);
    goto l28;
  case 2:
    _copy_16(((OOC_CHAR16[]){68,97,116,97,32,116,121,112,101,32,101,120,112,101,99,116,101,100,0}),(OOC_INT32)t,128);
    goto l28;
  case 3:
    _copy_16(((OOC_CHAR16[]){84,104,105,115,32,116,121,112,101,32,99,97,110,110,111,116,32,98,101,32,117,115,101,100,32,97,115,32,97,32,114,101,99,111,114,100,32,98,97,115,101,32,116,121,112,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 4:
    _copy_16(((OOC_CHAR16[]){67,97,110,39,116,32,117,115,101,32,116,121,112,101,32,99,111,110,115,116,114,117,99,116,111,114,32,104,101,114,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 5:
    _copy_16(((OOC_CHAR16[]){73,108,108,101,103,97,108,32,114,101,99,101,105,118,101,114,32,116,121,112,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 6:
    _copy_16(((OOC_CHAR16[]){73,108,108,101,103,97,108,32,116,121,112,101,32,102,111,114,32,102,117,110,99,116,105,111,110,32,114,101,115,117,108,116,0}),(OOC_INT32)t,128);
    goto l28;
  case 7:
    _copy_16(((OOC_CHAR16[]){73,108,108,101,103,97,108,32,112,111,105,110,116,101,114,32,98,97,115,101,32,116,121,112,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 8:
    _copy_16(((OOC_CHAR16[]){73,108,108,101,103,97,108,32,116,121,112,101,32,102,111,114,32,97,114,114,97,121,32,101,108,101,109,101,110,116,0}),(OOC_INT32)t,128);
    goto l28;
  case 9:
    _copy_16(((OOC_CHAR16[]){67,97,110,110,111,116,32,117,115,101,32,111,112,101,110,32,97,114,114,97,121,32,116,121,112,101,32,104,101,114,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 10:
    _copy_16(((OOC_CHAR16[]){82,101,99,101,105,118,101,114,32,111,102,32,114,101,99,111,114,100,32,116,121,112,101,32,109,117,115,116,32,98,101,32,97,32,118,97,114,105,97,98,108,101,32,112,97,114,97,109,101,116,101,114,0}),(OOC_INT32)t,128);
    goto l28;
  case 11:
    _copy_16(((OOC_CHAR16[]){82,101,99,101,105,118,101,114,32,111,102,32,112,111,105,110,116,101,114,32,116,121,112,101,32,109,117,115,116,32,98,101,32,97,32,118,97,108,117,101,32,112,97,114,97,109,101,116,101,114,0}),(OOC_INT32)t,128);
    goto l28;
  case 12:
    _copy_16(((OOC_CHAR16[]){85,110,114,101,115,111,108,118,101,100,32,112,114,111,99,101,100,117,114,101,32,102,111,114,119,97,114,100,32,100,101,99,108,97,114,97,116,105,111,110,0}),(OOC_INT32)t,128);
    goto l28;
  case 13:
    _copy_16(((OOC_CHAR16[]){78,97,109,101,32,111,102,32,102,111,114,119,97,114,100,32,100,101,99,108,97,114,97,116,105,111,110,32,97,108,114,101,97,100,121,32,97,115,115,105,103,110,101,100,32,116,111,32,97,110,111,116,104,101,114,32,111,98,106,101,99,116,0}),(OOC_INT32)t,128);
    goto l28;
  case 14:
    _copy_16(((OOC_CHAR16[]){77,117,108,116,105,112,108,101,32,102,111,114,119,97,114,100,32,100,101,99,108,97,114,97,116,105,111,110,115,32,102,111,114,32,115,97,109,101,32,110,97,109,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 15:
    _copy_16(((OOC_CHAR16[]){70,111,114,119,97,114,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,112,108,97,99,101,100,32,97,102,116,101,114,32,116,104,101,32,100,101,102,105,110,105,116,105,111,110,0}),(OOC_INT32)t,128);
    goto l28;
  case 16:
    _copy_16(((OOC_CHAR16[]){70,111,114,109,97,108,32,112,97,114,97,109,101,116,101,114,115,32,100,111,110,39,116,32,109,97,116,99,104,32,112,114,111,99,101,100,117,114,101,32,100,101,102,105,110,105,116,105,111,110,0}),(OOC_INT32)t,128);
    goto l28;
  case 17:
    _copy_16(((OOC_CHAR16[]){85,110,100,101,99,108,97,114,101,100,32,109,111,100,117,108,101,32,110,97,109,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 18:
    _copy_16(((OOC_CHAR16[]){84,104,105,115,32,105,115,32,110,111,116,32,97,32,109,111,100,117,108,101,32,110,97,109,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 19:
    _copy_16(((OOC_CHAR16[]){73,110,118,97,108,105,100,32,109,111,100,105,102,105,101,114,32,102,108,97,103,0}),(OOC_INT32)t,128);
    goto l28;
  case 20:
    _copy_16(((OOC_CHAR16[]){84,104,105,115,32,109,111,100,105,102,105,101,114,32,102,108,97,103,32,104,97,115,32,110,111,32,101,102,102,101,99,116,32,104,101,114,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 21:
    _copy_16(((OOC_CHAR16[]){67,97,110,110,111,116,32,99,114,101,97,116,101,32,97,110,32,105,110,115,116,97,110,99,101,32,97,110,32,97,98,115,116,114,97,99,116,32,116,121,112,101,0}),(OOC_INT32)t,128);
    goto l28;
  case 22:
    _copy_16(((OOC_CHAR16[]){82,101,99,101,105,118,101,114,32,116,121,112,101,32,105,115,32,110,111,116,32,97,98,115,116,114,97,99,116,0}),(OOC_INT32)t,128);
    goto l28;
  case 23:
    _copy_16(((OOC_CHAR16[]){65,98,115,116,114,97,99,116,32,112,114,111,99,101,100,117,114,101,32,109,117,115,116,32,98,101,32,101,120,112,111,114,116,101,100,0}),(OOC_INT32)t,128);
    goto l28;
  case 24:
    _copy_16(((OOC_CHAR16[]){73,110,104,101,114,105,116,101,100,32,112,114,111,99,101,100,117,114,101,32,96,36,123,110,97,109,101,125,39,32,105,115,32,115,116,105,108,108,32,97,98,115,116,114,97,99,116,0}),(OOC_INT32)t,128);
    goto l28;
  case 25:
    _copy_16(((OOC_CHAR16[]){77,111,100,117,108,101,32,109,117,115,116,32,112,114,111,118,105,100,101,32,97,116,32,109,111,115,116,32,111,110,101,32,76,73,78,75,32,70,73,76,69,32,100,105,114,101,99,116,105,118,101,0}),(OOC_INT32)t,128);
    goto l28;
  default:
    _failed_case(i1, 2295);
    goto l28;
  }
l28:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4283)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable_CreateNamespace__ResolveQualident(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item contextOfUse, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Declaration m;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)contextOfUse;
  i2 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4534)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, OOC_FALSE);
  i2 = i0==(OOC_INT32)0;
  m = (OOC_SymbolTable__Declaration)i0;
  if (i2) goto l3;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4598)))), &_td_OOC_SymbolTable__ImportDesc));
  
  goto l5;
l3:
  i2=OOC_TRUE;
l5:
  if (i2) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4652)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4689)))), &_td_OOC_SymbolTable__ImportDesc, 4689)), 4696))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4711))+40);
  ns = (OOC_SymbolTable__Namespace)i0;
  goto l8;
l7:
  return (OOC_SymbolTable__Declaration)(OOC_INT32)0;
l8:
  i0 = (OOC_INT32)ns;
  i2 = (OOC_INT32)ident;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4739)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, OOC_FALSE);
  decl = (OOC_SymbolTable__Declaration)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4813)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i0);
l11:
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable_CreateNamespace__CreateNamespace(OOC_SymbolTable__Module root, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2;
  ADT_Dictionary__Dictionary visited;
  Msg__Msg lastError;
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(OOC_INT32 code, OOC_SymbolTable__TypeName tname);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(OOC_INT32 code, OOC_SymbolTable__Type type);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(OOC_INT32 code, OOC_SymbolTable__Declaration decl, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ImportAllModules(OOC_SymbolTable__Module root);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace(OOC_SymbolTable__Item item);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckLocalUniqueness(OOC_SymbolTable__Item item, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ConnectNamespaces(OOC_SymbolTable__Item item, OOC_SymbolTable__Module predefModule, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames(OOC_SymbolTable__Item item, OOC_SymbolTable__Item contextOfUse, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions(OOC_SymbolTable__Item item, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_InsertTypeBoundProcs(OOC_SymbolTable__Module module, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveForwardDecl(OOC_SymbolTable__Item item, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords(OOC_SymbolTable__Item item, OOC_Error__List errList);
  auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags(OOC_SymbolTable__Item item, OOC_Error__List errList);
  auto OOC_INT32 OOC_SymbolTable_CreateNamespace__CreateNamespace_LinkFileSections(OOC_SymbolTable__LinkDirective ld);
    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(OOC_INT32 code, OOC_SymbolTable__TypeName tname) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Position pos;

      i0 = code;
      i1 = i0==1;
      if (i1) goto l3;
      i1 = (OOC_INT32)tname;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6064))+16);
      pos = (OOC_SymbolTable__Position)i1;
      
      goto l4;
l3:
      i1 = (OOC_INT32)tname;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6025))+36);
      pos = (OOC_SymbolTable__Position)i1;
      
l4:
      i2 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__createNamespaceContext;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i2, i0);
      lastError = (Msg__Msg)i0;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 6188));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6162)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6238))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6211)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6291))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6262)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6315)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(OOC_INT32 code, OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__createNamespaceContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)type;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6521))+16);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 6531));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6494)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6582))+16);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 6592))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6554)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6646))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6656))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6616)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6680)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(OOC_INT32 code, OOC_SymbolTable__Declaration decl, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__createNamespaceContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)decl;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6918))+16);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 6924));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6891)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6975))+16);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 6981))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6947)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7035))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 7041))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7005)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7065)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ImportAllModules(OOC_SymbolTable__Module root) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__systemModule;
      i1 = (OOC_INT32)root;
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_ImportModules__ImportModules((OOC_SymbolTable__Module)i0, (OOC_SymbolTable__Module)i1, (OOC_Error__List)i2);
      i0 = (OOC_INT32)errList;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7273)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
      if (!i0) goto l17;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7309))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l17;
l5_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7371)))), &_td_OOC_SymbolTable__ImportDesc);
      if (!i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7406))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7422))+40);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7659))+44);
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i1, (OOC_Error__List)i2);
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7872));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5_loop;
l17:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item ptr;
      auto OOC_SymbolTable__Namespace OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble(OOC_SymbolTable__Item item, OOC_CHAR8 nested);
        
        OOC_SymbolTable__Namespace OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble(OOC_SymbolTable__Item item, OOC_CHAR8 nested) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 c;
          OOC_SymbolTable__Item ptr;
          OOC_SymbolTable__DeclarationArray da;
          auto OOC_CHAR8 OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_IsDeclaration(OOC_SymbolTable__Item item);
          auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_Quicksort(OOC_SymbolTable__DeclarationArray da, OOC_INT32 l, OOC_INT32 r);
            
            OOC_CHAR8 OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_IsDeclaration(OOC_SymbolTable__Item item) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)item;
              i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8743)))), &_td_OOC_SymbolTable__ProcDeclDesc);
              if (i1) goto l3;
              return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8864)))), &_td_OOC_SymbolTable__DeclarationDesc));
              goto l8;
l3:
              i1 = *(OOC_UINT8*)((_check_pointer(i0, 8786))+40);
              if (i1) goto l6;
              i0 = *(OOC_UINT8*)((_check_pointer(i0, 8807))+41);
              
              goto l7;
l6:
              i0=OOC_TRUE;
l7:
              return (!i0);
l8:
              _failed_function(8669); return 0;
              ;
            }

            
            void OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_Quicksort(OOC_SymbolTable__DeclarationArray da, OOC_INT32 l, OOC_INT32 r) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
              OOC_INT32 i;
              OOC_INT32 j;
              OOC_Scanner_InputBuffer__CharArray v;
              OOC_SymbolTable__Declaration t;

              i0 = l;
              i1 = r;
              i2 = i0<i1;
              if (!i2) goto l26;
              i2 = i0-1;
              i = i2;
              j = i1;
              i3 = (OOC_INT32)da;
              i4 = _check_pointer(i3, 9186);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 9186))*4);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9189))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9195))+12);
              v = (OOC_Scanner_InputBuffer__CharArray)i4;
              i5=i1;
l3_loop:
              
l4_loop:
              i2 = i2+1;
              i6 = i2>i1;
              i = i2;
              if (i6) goto l7;
              i6 = _check_pointer(i3, 9268);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 9268))*4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9271))+16);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9277))+12);
              i6 = (
              _cmp8((const void*)(_check_pointer(i6, 9282)),(const void*)(_check_pointer(i4, 9288))))>=0;
              
              goto l9;
l7:
              i6=OOC_TRUE;
l9:
              if (!i6) goto l4_loop;
l13_loop:
              i5 = i5-1;
              i6 = i5<i0;
              j = i5;
              if (i6) goto l16;
              i6 = _check_pointer(i3, 9341);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 9341))*4);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9344))+16);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9350))+12);
              i6 = (
              _cmp8((const void*)(_check_pointer(i6, 9355)),(const void*)(_check_pointer(i4, 9361))))<=0;
              
              goto l18;
l16:
              i6=OOC_TRUE;
l18:
              if (!i6) goto l13_loop;
l21:
              i6 = i2>=i5;
              if (i6) goto l25;
              i6 = _check_pointer(i3, 9427);
              i7 = OOC_ARRAY_LENGTH(i6, 0);
              i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 9427))*4);
              t = (OOC_SymbolTable__Declaration)i6;
              i7 = _check_pointer(i3, 9434);
              i8 = OOC_ARRAY_LENGTH(i7, 0);
              i9 = _check_pointer(i3, 9443);
              i10 = OOC_ARRAY_LENGTH(i9, 0);
              i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i5, i10, OOC_UINT32, 9443))*4);
              *(OOC_INT32*)(i7+(_check_index(i2, i8, OOC_UINT32, 9434))*4) = i9;
              i7 = _check_pointer(i3, 9450);
              i8 = OOC_ARRAY_LENGTH(i7, 0);
              *(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 9450))*4) = i6;
              
              goto l3_loop;
l25:
              i4 = _check_pointer(i3, 9495);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 9495))*4);
              t = (OOC_SymbolTable__Declaration)i4;
              i5 = _check_pointer(i3, 9502);
              i6 = OOC_ARRAY_LENGTH(i5, 0);
              i7 = _check_pointer(i3, 9511);
              i8 = OOC_ARRAY_LENGTH(i7, 0);
              i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i1, i8, OOC_UINT32, 9511))*4);
              *(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 9502))*4) = i7;
              i5 = _check_pointer(i3, 9518);
              i6 = OOC_ARRAY_LENGTH(i5, 0);
              *(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 9518))*4) = i4;
              OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_Quicksort((OOC_SymbolTable__DeclarationArray)i3, i0, (i2-1));
              OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_Quicksort((OOC_SymbolTable__DeclarationArray)i3, (i2+1), i1);
l26:
              return;
              ;
            }


          c = 0;
          i0 = (OOC_INT32)item;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9739))+8);
          i1 = i0!=(OOC_INT32)0;
          ptr = (OOC_SymbolTable__Item)i0;
          if (!i1) goto l11;
l3_loop:
          i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_IsDeclaration((OOC_SymbolTable__Item)i0);
          if (!i0) goto l6;
          i0 = c;
          c = (i0+1);
l6:
          i0 = (OOC_INT32)ptr;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9876));
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l11:
          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9919)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l25;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10305)))), &_td_OOC_SymbolTable__ProcDeclDesc, 10305)), 10314))+52);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10326))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l25;
l16_loop:
          i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_IsDeclaration((OOC_SymbolTable__Item)i0);
          if (!i0) goto l19;
          i0 = c;
          c = (i0+1);
l19:
          i0 = (OOC_INT32)ptr;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10473));
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l16_loop;
l25:
          i0 = c;
          da = (OOC_SymbolTable__DeclarationArray)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], i0));
          c = 0;
          i0 = (OOC_INT32)item;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10629))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l36;
l28_loop:
          i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_IsDeclaration((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)ptr;
          if (!i0) goto l31;
          i0 = (OOC_INT32)da;
          i0 = _check_pointer(i0, 10725);
          i2 = OOC_ARRAY_LENGTH(i0, 0);
          i3 = c;
          *(OOC_INT32*)(i0+(_check_index(i3, i2, OOC_UINT32, 10725))*4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10740)))), &_td_OOC_SymbolTable__DeclarationDesc, 10740));
          c = (i3+1);
l31:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10809));
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l28_loop;
l36:
          i0 = (OOC_INT32)item;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10852)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (!i1) goto l50;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10991)))), &_td_OOC_SymbolTable__ProcDeclDesc, 10991)), 11000))+52);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11012))+8);
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l50;
l41_loop:
          i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_IsDeclaration((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)ptr;
          if (!i0) goto l44;
          i0 = (OOC_INT32)da;
          i0 = _check_pointer(i0, 11114);
          i2 = OOC_ARRAY_LENGTH(i0, 0);
          i3 = c;
          *(OOC_INT32*)(i0+(_check_index(i3, i2, OOC_UINT32, 11114))*4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11129)))), &_td_OOC_SymbolTable__DeclarationDesc, 11129));
          c = (i3+1);
l44:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11204));
          ptr = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l41_loop;
l50:
          i0 = c;
          i1 = (OOC_INT32)da;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble_Quicksort((OOC_SymbolTable__DeclarationArray)i1, 0, (i0-1));
          i0 = nested;
          if (i0) goto l53;
          i0 = c;
          i1 = (OOC_INT32)da;
          i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewExtended((OOC_SymbolTable__DeclarationArray)i1, i0);
          return (OOC_SymbolTable__Namespace)i0;
          goto l54;
l53:
          i0 = c;
          i1 = (OOC_INT32)da;
          i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i1, i0);
          return (OOC_SymbolTable__Namespace)i0;
l54:
          _failed_function(8506); return 0;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11528))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l10;
l5_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace((OOC_SymbolTable__Item)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11627));
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l10:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11671)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11754)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l18;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11839)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l22;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble((OOC_SymbolTable__Item)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11869)))), OOC_SymbolTable__RecordDesc_SetNamespace)),OOC_SymbolTable__RecordDesc_SetNamespace)((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Namespace)i1);
      goto l22;
l18:
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble((OOC_SymbolTable__Item)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11786)))), OOC_SymbolTable__ProcDeclDesc_SetNamespace)),OOC_SymbolTable__ProcDeclDesc_SetNamespace)((OOC_SymbolTable__ProcDecl)i0, (OOC_SymbolTable__Namespace)i1);
      goto l22;
l20:
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace_Assemble((OOC_SymbolTable__Item)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11701)))), OOC_SymbolTable__ModuleDesc_SetNamespace)),OOC_SymbolTable__ModuleDesc_SetNamespace)((OOC_SymbolTable__Module)i0, (OOC_SymbolTable__Namespace)i1);
l22:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckLocalUniqueness(OOC_SymbolTable__Item item, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Namespace ns0;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12491)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i0);
      ns0 = (OOC_SymbolTable__Namespace)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l5;
      i2 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12558)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 12558)), 12568)))), OOC_SymbolTable_Namespace__NamespaceDesc_CheckLocalUniqueness)),OOC_SymbolTable_Namespace__NamespaceDesc_CheckLocalUniqueness)((OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12558)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 12558)), (OOC_Error__List)i2);
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12683))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)errList;
      
l8_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckLocalUniqueness((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12794));
      ptr = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l8_loop;
l14:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ConnectNamespaces(OOC_SymbolTable__Item item, OOC_SymbolTable__Module predefModule, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13542)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13742)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l19;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13778))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13787)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l12;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13997))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14006)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l19;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14044))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14044))+48);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14110))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14123)))), &_td_OOC_SymbolTable__ProcDeclDesc, 14123)), 14132))+48);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14059)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 14059)), 14066)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14059)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 14059)), (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14187)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 14187)));
      goto l19;
l12:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13823))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13823))+48);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13889))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13902)))), &_td_OOC_SymbolTable__ModuleDesc, 13902)), 13909))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13838)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 13838)), 13845)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13838)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 13838)), (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13964)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 13964)));
      goto l19;
l15:
      i1 = (OOC_INT32)predefModule;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l19;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13613))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13613))+40);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13687))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13628)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 13628)), 13635)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13628)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 13628)), (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13702)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 13702)));
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14358))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l28;
      i1 = (OOC_INT32)errList;
      i2 = (OOC_INT32)predefModule;
      
l22_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ConnectNamespaces((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Module)i2, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14480));
      ptr = (OOC_SymbolTable__Item)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l22_loop;
l28:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames(OOC_SymbolTable__Item item, OOC_SymbolTable__Item contextOfUse, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Item ptr;
      auto OOC_SymbolTable__Type OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName(OOC_SymbolTable__Type typeName, OOC_SymbolTable__Item contextOfUse, OOC_CHAR8 extendedSearch, OOC_Error__List errList);
        
        OOC_SymbolTable__Type OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName(OOC_SymbolTable__Type typeName, OOC_SymbolTable__Item contextOfUse, OOC_CHAR8 extendedSearch, OOC_Error__List errList) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Namespace ns;
          OOC_SymbolTable__Declaration item;
          OOC_SymbolTable__Declaration itemRedir;

          i0 = (OOC_INT32)typeName;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15617)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l3;
          return (OOC_SymbolTable__Type)i0;
          goto l42;
l3:
          i1 = (OOC_INT32)contextOfUse;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15663)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i1);
          ns = (OOC_SymbolTable__Namespace)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15700))+32);
          i3 = i3!=(OOC_INT32)0;
          if (!i3) goto l18;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15844))+32);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15810)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i3, OOC_FALSE);
          item = (OOC_SymbolTable__Declaration)i3;
          i4 = i3!=(OOC_INT32)0;
          if (!i4) goto l9;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15913)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i3);
l9:
          i4 = i3==(OOC_INT32)0;
          if (i4) goto l16;
          i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16085)))), &_td_OOC_SymbolTable__ImportDesc));
          if (i4) goto l14;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16222)))), &_td_OOC_SymbolTable__ImportDesc, 16222)), 16229))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16245))+40);
          ns = (OOC_SymbolTable__Namespace)i2;
          _assert((i2!=(OOC_INT32)0), 127, 16265);
          
          goto l18;
l14:
          OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(18, (OOC_SymbolTable__TypeName)i0);
          return (OOC_SymbolTable__Type)i0;
          
          goto l18;
l16:
          OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(17, (OOC_SymbolTable__TypeName)i0);
          return (OOC_SymbolTable__Type)i0;
          
l18:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16368))+36);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16334)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i3, OOC_FALSE);
          item = (OOC_SymbolTable__Declaration)i3;
          i4 = i3==(OOC_INT32)0;
          if (i4) goto l21;
          i4=OOC_FALSE;
          goto l23;
l21:
          i4 = extendedSearch;
          
l23:
          if (i4) goto l25;
          i2=i3;
          goto l26;
l25:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16494))+36);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16455)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i3, OOC_TRUE);
          item = (OOC_SymbolTable__Declaration)i2;
          
l26:
          i3 = i2==(OOC_INT32)0;
          if (i3) goto l40;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16822)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i2);
          itemRedir = (OOC_SymbolTable__Declaration)i2;
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16898)))), &_td_OOC_SymbolTable__RedirectDesc);
          if (i3) goto l31;
          i1=i2;
          goto l35;
l31:
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16967)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17043))+40);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17061))+44);
          i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__ResolveQualident((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i4, (OOC_SymbolTable__Name)i2);
          item = (OOC_SymbolTable__Declaration)i1;
          i2 = i1==(OOC_INT32)0;
          if (!i2) goto l35;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(1, (OOC_SymbolTable__TypeName)i0);
          return (OOC_SymbolTable__Type)i0;
l35:
          i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17275)))), &_td_OOC_SymbolTable__TypeDeclDesc));
          if (i2) goto l38;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17417)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17417)), 17426))+40);
          return (OOC_SymbolTable__Type)i0;
          goto l42;
l38:
          OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(2, (OOC_SymbolTable__TypeName)i0);
          return (OOC_SymbolTable__Type)i0;
          goto l42;
l40:
          OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(1, (OOC_SymbolTable__TypeName)i0);
          return (OOC_SymbolTable__Type)i0;
l42:
          _failed_function(14973); return 0;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l52;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17594)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17718)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17844)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17969)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18131)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l31;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18375)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18545)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18869)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18930)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l43;
      contextOfUse = (OOC_SymbolTable__Item)i0;
      goto l43;
l22:
      contextOfUse = (OOC_SymbolTable__Item)i0;
      goto l43;
l24:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18579))+32);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l43;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18650))+32);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_FALSE, (OOC_Error__List)i2);
      *(OOC_INT32*)((_check_pointer(i0, 18618))+32) = i1;
      goto l43;
l29:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18440))+36);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_FALSE, (OOC_Error__List)i2);
      *(OOC_INT32*)((_check_pointer(i0, 18404))+36) = i1;
      goto l43;
l31:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18169))+36);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l43;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18245))+36);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_FALSE, (OOC_Error__List)i2);
      *(OOC_INT32*)((_check_pointer(i0, 18210))+36) = i1;
      goto l43;
l36:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18033))+32);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_TRUE, (OOC_Error__List)i2);
      *(OOC_INT32*)((_check_pointer(i0, 18000))+32) = i1;
      goto l43;
l38:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17906))+40);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_FALSE, (OOC_Error__List)i2);
      *(OOC_INT32*)((_check_pointer(i0, 17877))+40) = i1;
      goto l43;
l40:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17779))+40);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_FALSE, (OOC_Error__List)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17749)))), OOC_SymbolTable__VarDeclDesc_SetType)),OOC_SymbolTable__VarDeclDesc_SetType)((OOC_SymbolTable__VarDecl)i0, (OOC_SymbolTable__Type)i1);
      goto l43;
l42:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17655))+40);
      i2 = (OOC_INT32)errList;
      i3 = (OOC_INT32)contextOfUse;
      i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames_GetTypeByName((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i3, OOC_FALSE, (OOC_Error__List)i2);
      *(OOC_INT32*)((_check_pointer(i0, 17626))+40) = i1;
l43:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19109))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l52;
      i1 = (OOC_INT32)errList;
      i2 = (OOC_INT32)contextOfUse;
      
l46_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i2, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19230));
      ptr = (OOC_SymbolTable__Item)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l46_loop;
l52:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions(OOC_SymbolTable__Item item, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Type type;
      OOC_SymbolTable__Record record;
      OOC_SymbolTable__Item ptr;
      auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckOpenArray(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType);
      auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckInstance(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType);
        
        void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckOpenArray(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)type;
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19638)))), &_td_OOC_SymbolTable__TypeNameDesc));
          if (i1) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
          
l5:
          if (!i0) goto l7;
          i0 = (OOC_INT32)srcCodeType;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(9, (OOC_SymbolTable__Type)i0);
l7:
          return;
          ;
        }

        
        void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckInstance(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType) {
          register OOC_INT32 i0;

          i0 = (OOC_INT32)type;
          i0 = OOC_SymbolTable_TypeRules__VariableInstance((OOC_SymbolTable__Type)i0);
          i0 = !i0;
          if (!i0) goto l4;
          i0 = (OOC_INT32)srcCodeType;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(21, (OOC_SymbolTable__Type)i0);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l124;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20042)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l77;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20927)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21073)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21502)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21738)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21999)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22332)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l115;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22366))+32);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l115;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22412))+32);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_SymbolTable_TypeRules__IsValidRecordBaseType((OOC_SymbolTable__Type)i1);
      if (i2) goto l21;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22655))+36);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_Err(3, (OOC_SymbolTable__TypeName)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22676)))), &_td_OOC_SymbolTable__TypeNameDesc, 22676)));
      goto l115;
l21:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22492))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22492))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22562)))), &_td_OOC_SymbolTable__RecordDesc, 22562)), 22569))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22506)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 22506)), 22515)))), OOC_SymbolTable_Namespace__ExtendedDesc_SetBaseNamespace)),OOC_SymbolTable_Namespace__ExtendedDesc_SetBaseNamespace)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22506)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 22506)), (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22583)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 22583)));
      goto l115;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22036))+36);
      type = (OOC_SymbolTable__Type)i1;
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22071)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (i2) goto l28;
      i1=OOC_FALSE;
      goto l30;
l28:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 22142))+32);
      i1 = OOC_SymbolTable_TypeRules__IsValidArrayElementType((OOC_SymbolTable__Type)i1, i2);
      i1 = !i1;
      
l30:
      if (!i1) goto l32;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22212))+40);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(8, (OOC_SymbolTable__Type)i1);
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22277))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22295))+40);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckInstance((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      goto l115;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21780))+36);
      type = (OOC_SymbolTable__Type)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l37;
      i2=OOC_FALSE;
      goto l39;
l37:
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21829)))), &_td_OOC_SymbolTable__TypeNameDesc));
      
l39:
      if (i2) goto l41;
      i1=OOC_FALSE;
      goto l43;
l41:
      i1 = OOC_SymbolTable_TypeRules__IsValidResultType((OOC_SymbolTable__Type)i1);
      i1 = !i1;
      
l43:
      if (!i1) goto l115;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21939))+40);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(6, (OOC_SymbolTable__Type)i0);
      goto l115;
l47:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21541))+32);
      type = (OOC_SymbolTable__Type)i1;
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21573)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (i2) goto l50;
      i1=OOC_FALSE;
      goto l52;
l50:
      i1 = OOC_SymbolTable_TypeRules__IsValidPointerBaseType((OOC_SymbolTable__Type)i1);
      i1 = !i1;
      
l52:
      if (!i1) goto l115;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21680))+36);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(7, (OOC_SymbolTable__Type)i0);
      goto l115;
l56:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 21108))+40);
      if (i1) goto l59;
      i1=OOC_FALSE;
      goto l61;
l59:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 21127))+42);
      
l61:
      if (!i1) goto l115;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21170)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)i0);
      record = (OOC_SymbolTable__Record)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l65;
      i1=OOC_FALSE;
      goto l67;
l65:
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 21219))+49);
      i1 = !i1;
      
l67:
      if (!i1) goto l69;
      i1 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(22, (OOC_SymbolTable__Declaration)i0, (OOC_Error__List)i1);
l69:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 21342))+24);
      i1 = i1==0;
      if (!i1) goto l115;
      i1 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(23, (OOC_SymbolTable__Declaration)i0, (OOC_Error__List)i1);
      goto l115;
l75:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20976))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20988))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckOpenArray((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21032))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21043))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckInstance((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      goto l115;
l77:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20081))+40);
      type = (OOC_SymbolTable__Type)i1;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 20106))+48);
      if (i2) goto l80;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20330))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20342))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckOpenArray((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20388))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20399))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions_CheckInstance((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      goto l88;
l80:
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20147)))), &_td_OOC_SymbolTable__TypeNameDesc));
      if (i2) goto l83;
      i1=OOC_FALSE;
      goto l85;
l83:
      i1 = OOC_SymbolTable_TypeRules__IsValidParameterType((OOC_SymbolTable__Type)i1);
      i1 = !i1;
      
l85:
      if (!i1) goto l88;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20252))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(4, (OOC_SymbolTable__Type)i0);
l88:
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 20446))+49);
      if (i1) goto l91;
      i1=OOC_FALSE;
      goto l93;
l91:
      i1 = (OOC_INT32)type;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20468)))), &_td_OOC_SymbolTable__TypeNameDesc));
      
l93:
      if (!i1) goto l115;
      i1 = (OOC_INT32)type;
      i2 = OOC_SymbolTable_TypeRules__IsValidReceiverType((OOC_SymbolTable__Type)i1);
      i2 = !i2;
      if (i2) goto l112;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20628)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l99;
      i2=OOC_FALSE;
      goto l101;
l99:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 20650))+50);
      i2 = !i2;
      
l101:
      if (i2) goto l110;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20761)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l105;
      i1=OOC_FALSE;
      goto l107;
l105:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 20783))+50);
      
l107:
      if (!i1) goto l115;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20856))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(11, (OOC_SymbolTable__Type)i0);
      goto l115;
l110:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20722))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(10, (OOC_SymbolTable__Type)i0);
      goto l115;
l112:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20589))+44);
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(5, (OOC_SymbolTable__Type)i0);
l115:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22862))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l124;
      i1 = (OOC_INT32)errList;
      
l118_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22974));
      ptr = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l118_loop;
l124:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_InsertTypeBoundProcs(OOC_SymbolTable__Module module, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Item ptr;
      OOC_SymbolTable__Item record;

      i0 = (OOC_INT32)root;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23263))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l25;
      i1 = (OOC_INT32)errList;
      
l3_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23321)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i2) goto l20;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 23355))+40);
      if (i2) goto l8;
      i2=OOC_FALSE;
      goto l10;
l8:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 23375))+41);
      i2 = !i2;
      
l10:
      if (!i2) goto l20;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23421))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23433))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23443))+40);
      record = (OOC_SymbolTable__Item)i2;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23474)))), &_td_OOC_SymbolTable__PointerDesc);
      if (!i3) goto l15;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23530)))), &_td_OOC_SymbolTable__PointerDesc, 23530)), 23538))+32);
      record = (OOC_SymbolTable__Item)i2;
      
l15:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23589)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i3) goto l20;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23625))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23625))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23640)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 23640)), 23649)))), OOC_SymbolTable_Namespace__ExtendedDesc_InsertTBProc)),OOC_SymbolTable_Namespace__ExtendedDesc_InsertTBProc)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23640)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 23640)), (OOC_SymbolTable__ProcDecl)i0, (OOC_Error__List)i1);
l20:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23811));
      ptr = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l25:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveForwardDecl(OOC_SymbolTable__Item item, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SymbolTable__ProcDecl forward;
      OOC_SymbolTable__Record _class;
      OOC_SymbolTable__Namespace ns;
      OOC_SymbolTable__Declaration def;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l45;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24266)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24294)))), &_td_OOC_SymbolTable__ProcDeclDesc, 24294)), 24303))+41);
      
l7:
      if (!i1) goto l36;
      i1 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24354)))), &_td_OOC_SymbolTable__ProcDeclDesc, 24354);
      forward = (OOC_SymbolTable__ProcDecl)i1;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 24396))+40);
      if (i2) goto l11;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24608))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24608))+4);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24616)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i3);
      ns = (OOC_SymbolTable__Namespace)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24676))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24693))+16);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24652)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, OOC_TRUE);
      def = (OOC_SymbolTable__Declaration)i2;
      
      goto l12;
l11:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24443)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)i1);
      _class = (OOC_SymbolTable__Record)i2;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24477)))), OOC_SymbolTable__RecordDesc_Namespace)),OOC_SymbolTable__RecordDesc_Namespace)((OOC_SymbolTable__Record)i2);
      ns = (OOC_SymbolTable__Namespace)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24537))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24554))+16);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24513)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, OOC_TRUE);
      def = (OOC_SymbolTable__Declaration)i2;
      
l12:
      i3 = i2==(OOC_INT32)0;
      if (i3) goto l34;
      i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24847)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i3) goto l32;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24965))+16);
      i4 = *(OOC_INT32*)((_check_pointer(i2, 24946))+20);
      i3 = *(OOC_INT32*)(_check_pointer(i3, 24971));
      i3 = i4<i3;
      if (i3) goto l27;
      i3 = *(OOC_INT32*)((_check_pointer(i2, 25151))+20);
      i4 = *(OOC_INT32*)((_check_pointer(i1, 25174))+20);
      i3 = i3<i4;
      if (i3) goto l25;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25304))+52);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25367)))), &_td_OOC_SymbolTable__ProcDeclDesc, 25367)), 25376))+52);
      i3 = OOC_SymbolTable_TypeRules__IsValidForwardDecl((OOC_SymbolTable__FormalPars)i3, (OOC_SymbolTable__FormalPars)i4);
      i3 = !i3;
      if (i3) goto l23;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25491)))), &_td_OOC_SymbolTable__ProcDeclDesc, 25491)), 25500)))), OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl)),OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl)((OOC_SymbolTable__ProcDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25491)))), &_td_OOC_SymbolTable__ProcDeclDesc, 25491)), (OOC_SymbolTable__ProcDecl)i1);
      goto l36;
l23:
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(16, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i2);
      goto l36;
l25:
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(15, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i2);
      goto l36;
l27:
      i2 = *(OOC_INT32*)((_check_pointer(i2, 25002))+20);
      i2 = i2>=0;
      if (!i2) goto l36;
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(14, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i2);
      goto l36;
l32:
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(13, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i2);
      goto l36;
l34:
      i2 = (OOC_INT32)errList;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(12, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i2);
l36:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25587))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l45;
      i1 = (OOC_INT32)errList;
      
l39_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveForwardDecl((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25696));
      ptr = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l39_loop;
l45:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords(OOC_SymbolTable__Item item, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item ptr;
      auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords_CheckRecord(OOC_SymbolTable__Record record);
        
        void OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords_CheckRecord(OOC_SymbolTable__Record record) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 i;
          OOC_SymbolTable__ProcDecl proc;

          i0 = (OOC_INT32)record;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 26214))+40);
          i1 = i1==-1;
          if (!i1) goto l25;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26259))+32);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l5;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26302))+32);
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26313)))), &_td_OOC_SymbolTable__RecordDesc));
          
          goto l7;
l5:
          i1=OOC_TRUE;
l7:
          if (i1) goto l9;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26416))+32);
          OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords_CheckRecord((OOC_SymbolTable__Record)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26431)))), &_td_OOC_SymbolTable__RecordDesc, 26431)));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26482))+32);
          i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26497)))), &_td_OOC_SymbolTable__RecordDesc, 26497)), 26504))+40);
          *(OOC_INT32*)((_check_pointer(i0, 26459))+40) = i1;
          goto l10;
l9:
          *(OOC_INT32*)((_check_pointer(i0, 26351))+40) = 0;
l10:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26549))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26549))+44);
          i3 = (OOC_INT32)errList;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26563)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 26563)), 26572)))), OOC_SymbolTable_Namespace__ExtendedDesc_CheckRestrictions)),OOC_SymbolTable_Namespace__ExtendedDesc_CheckRestrictions)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26563)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 26563)), (OOC_SymbolTable__Record)i0, (OOC_Error__List)i3);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 26631))+49);
          i1 = !i1;
          if (!i1) goto l25;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 26738))+40);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l25;
          i2=0;
l15_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26784))+44);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26784))+44);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 26798)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 26798)), 26807)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 26798)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 26798)), i2);
          proc = (OOC_SymbolTable__ProcDecl)i3;
          i4 = *(OOC_UINT8*)((_check_pointer(i3, 26851))+42);
          if (!i4) goto l18;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrType(24, (OOC_SymbolTable__Type)i0);
          i4 = (OOC_INT32)lastError;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 27038))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 27043))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 27038))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 27043))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 27047)), 0);
          i3 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i5, 27047)), i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 26950)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i4, "name", 5, (Msg__StringPtr)i3);
l18:
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l15_loop;
l25:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27197)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l5;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords_CheckRecord((OOC_SymbolTable__Record)i0);
l5:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27337))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)errList;
      
l8_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27448));
      ptr = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l8_loop;
l14:
      return;
      ;
    }

    
    void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags(OOC_SymbolTable__Item item, OOC_Error__List errList) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Type type;
      OOC_SymbolTable__Item ptr;
      auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags(OOC_SymbolTable__Item item);
      auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlagsDirect(OOC_SymbolTable__Item referrer, OOC_SymbolTable__Item item);
        
        void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_SymbolTable__Flag flag;
          auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag(OOC_SymbolTable__Flag flag, OOC_INT16 code);
          auto void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag(OOC_CHAR8 *flagAttribute, OOC_CHAR8 newValue);
            
            void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag(OOC_SymbolTable__Flag flag, OOC_INT16 code) {
              register OOC_INT32 i0,i1,i2;

              i0 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__createNamespaceContext;
              i1 = code;
              i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
              lastError = (Msg__Msg)i0;
              i1 = (OOC_INT32)flag;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27912))+8);
              i2 = *(OOC_INT32*)(_check_pointer(i2, 27916));
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27885)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
              i0 = (OOC_INT32)lastError;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27970))+8);
              i2 = *(OOC_INT32*)((_check_pointer(i2, 27974))+4);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27942)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
              i0 = (OOC_INT32)lastError;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28031))+8);
              i1 = *(OOC_INT32*)((_check_pointer(i1, 28035))+8);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28001)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
              i0 = (OOC_INT32)errList;
              i1 = (OOC_INT32)lastError;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28062)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
              return;
              ;
            }

            
            void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag(OOC_CHAR8 *flagAttribute, OOC_CHAR8 newValue) {
              register OOC_INT32 i0,i1;

              i0 = *flagAttribute;
              i1 = newValue;
              i0 = i0!=i1;
              if (i0) goto l3;
              i0 = (OOC_INT32)flag;
              OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 20);
              goto l4;
l3:
              *flagAttribute = i1;
l4:
              return;
              ;
            }


          i0 = (OOC_INT32)visited;
          i1 = (OOC_INT32)item;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28427)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
          i0 = !i0;
          if (!i0) goto l84;
          i0 = (OOC_INT32)visited;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28463)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1, (ADT_Object__Object)(OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28513))+12);
          flag = (OOC_SymbolTable__Flag)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l84;
l5_loop:
          i1 = (OOC_INT32)item;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28577)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i2) goto l52;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29516)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i2) goto l43;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30027)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l28;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30582)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l22;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30845)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i2) goto l16;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
          goto l78;
l16:
          i2 = *(OOC_INT16*)((_check_pointer(i0, 30886))+4);
          switch (i2) {
          case 1:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 30955))+42), OOC_TRUE);
            goto l78;
          default:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          }
l22:
          i2 = *(OOC_INT16*)((_check_pointer(i0, 30622))+4);
          switch (i2) {
          case 5:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 30690))+40), OOC_TRUE);
            goto l78;
          default:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          }
l28:
          i2 = *(OOC_INT16*)((_check_pointer(i0, 30065))+4);
          switch (i2) {
          case 3:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 30138))+30), OOC_FALSE);
            goto l78;
          case 2:
            i2 = *(OOC_UINT8*)((_check_pointer(i1, 30224))+32);
            i2 = !i2;
            if (i2) goto l34;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30282))+36);
            i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
            
            goto l36;
l34:
            i2=OOC_TRUE;
l36:
            if (i2) goto l38;
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 30410))+33), OOC_FALSE);
            goto l78;
l38:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          default:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          }
l43:
          i2 = *(OOC_INT16*)((_check_pointer(i0, 29555))+4);
          switch (i2) {
          case 1:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 29624))+49), OOC_TRUE);
            goto l78;
          case 3:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 29710))+30), OOC_FALSE);
            goto l78;
          case 4:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 29801))+50), OOC_FALSE);
            goto l78;
          case 7:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 29883))+48), OOC_TRUE);
            goto l78;
          default:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          }
l52:
          i2 = *(OOC_INT16*)((_check_pointer(i0, 28617))+4);
          switch (i2) {
          case 0:
            i2 = *(OOC_UINT8*)((_check_pointer(i1, 28680))+48);
            i2 = !i2;
            if (i2) goto l57;
            i2 = *(OOC_UINT8*)((_check_pointer(i1, 28719))+50);
            
            goto l59;
l57:
            i2=OOC_TRUE;
l59:
            if (i2) goto l65;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28760))+40);
            i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28766)))), &_td_OOC_SymbolTable__ArrayDesc);
            if (i2) goto l63;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28809))+40);
            i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28815)))), &_td_OOC_SymbolTable__RecordDesc);
            
            goto l64;
l63:
            i2=OOC_TRUE;
l64:
            i2 = !i2;
            
            goto l67;
l65:
            i2=OOC_TRUE;
l67:
            if (i2) goto l69;
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 29061))+52), OOC_FALSE);
            i0 = (OOC_INT32)item;
            *(OOC_UINT8*)((_check_pointer(i0, 29106))+53) = OOC_TRUE;
            goto l78;
l69:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          case 6:
            i2 = *(OOC_UINT8*)((_check_pointer(i1, 29207))+51);
            i2 = !i2;
            if (i2) goto l74;
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_SetFlag((void*)((_check_pointer(i1, 29341))+54), OOC_TRUE);
            goto l78;
l74:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          default:
            OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags_InvalidFlag((OOC_SymbolTable__Flag)i0, 19);
            goto l78;
          }
l78:
          i0 = (OOC_INT32)flag;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31196));
          flag = (OOC_SymbolTable__Flag)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l5_loop;
l84:
          return;
          ;
        }

        
        void OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlagsDirect(OOC_SymbolTable__Item referrer, OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)referrer;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31352)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)item;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31368)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          i0 = i0==i2;
          if (!i0) goto l4;
          OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags((OOC_SymbolTable__Item)i1);
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l43;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlags((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31553)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31739)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (!i1) goto l34;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 31773))+48);
      if (!i1) goto l34;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31815))+40);
      type = (OOC_SymbolTable__Type)i1;
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags_ResolveFlagsDirect((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31887)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l11;
      i1=OOC_FALSE;
      goto l13;
l11:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31914)))), &_td_OOC_SymbolTable__RecordDesc, 31914)), 31921))+30);
      i1 = !i1;
      
l13:
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31960)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l17;
      i0=OOC_FALSE;
      goto l21;
l17:
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31986)))), &_td_OOC_SymbolTable__ArrayDesc, 31986)), 31992))+33);
      i0 = !i0;
      
      goto l21;
l19:
      i0=OOC_TRUE;
l21:
      if (!i0) goto l34;
      i0 = (OOC_INT32)item;
      *(OOC_UINT8*)((_check_pointer(i0, 32030))+55) = OOC_FALSE;
      goto l34;
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31588))+32);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31598)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l29;
      i1=OOC_FALSE;
      goto l31;
l29:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31633))+32);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31647)))), &_td_OOC_SymbolTable__RecordDesc, 31647)), 31654))+30);
      i1 = !i1;
      
l31:
      if (!i1) goto l34;
      *(OOC_UINT8*)((_check_pointer(i0, 31690))+41) = OOC_TRUE;
l34:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32197))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l43;
      i1 = (OOC_INT32)errList;
      
l37_loop:
      OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32308));
      ptr = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l37_loop;
l43:
      return;
      ;
    }

    
    OOC_INT32 OOC_SymbolTable_CreateNamespace__CreateNamespace_LinkFileSections(OOC_SymbolTable__LinkDirective ld) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)ld;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l7;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32515)))), &_td_OOC_SymbolTable__LinkFileDesc);
      if (i1) goto l5;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32628));
      i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_LinkFileSections((OOC_SymbolTable__LinkDirective)i0);
      return i0;
      goto l8;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32569));
      i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_LinkFileSections((OOC_SymbolTable__LinkDirective)i0);
      return (i0+1);
      goto l8;
l7:
      return 0;
l8:
      _failed_function(32386); return 0;
      ;
    }


  i0 = (OOC_INT32)errList;
  _assert((i0!=(OOC_INT32)0), 127, 32701);
  i0 = (OOC_INT32)root;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32739))+44);
  switch (i1) {
  case 3:
  case 2:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32818))+56);
    i0 = OOC_SymbolTable_CreateNamespace__CreateNamespace_LinkFileSections((OOC_SymbolTable__LinkDirective)i0);
    i0 = i0>1;
    if (!i0) goto l7;
    i0 = (OOC_INT32)errList;
    i1 = (OOC_INT32)root;
    OOC_SymbolTable_CreateNamespace__CreateNamespace_ErrDecl(25, (OOC_SymbolTable__Declaration)i1, (OOC_Error__List)i0);
    goto l7;
  default:
    goto l7;
  }
l7:
  i0 = (OOC_INT32)root;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_ImportAllModules((OOC_SymbolTable__Module)i0);
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33450)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  i0 = !i0;
  if (!i0) goto l10;
  return;
l10:
  i0 = (OOC_INT32)root;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_PopulateNamespace((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckLocalUniqueness((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__predefModule;
  i1 = (OOC_INT32)root;
  i2 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_ConnectNamespaces((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Module)i0, (OOC_Error__List)i2);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveTypeNames((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)ADT_Dictionary__New();
  visited = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveModifierFlags((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckTypeRestrictions((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_InsertTypeBoundProcs((OOC_SymbolTable__Module)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_ResolveForwardDecl((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_SymbolTable_CreateNamespace__CreateNamespace_CheckExtendedRecords((OOC_SymbolTable__Item)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)errList;
  OOC_Doc_ResolveRef__Resolve((OOC_SymbolTable__Module)i0, (OOC_Error__List)i1);
  return;
  ;
}

void OOC_SymbolTable_CreateNamespace__Init() {
  register OOC_INT32 i0,i1,i2;

  OOC_SymbolTable_CreateNamespace__predefModule = (OOC_SymbolTable__Module)(OOC_INT32)0;
  OOC_SymbolTable_CreateNamespace__systemModule = (OOC_SymbolTable__Module)(OOC_INT32)0;
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__New();
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__CreatePredef((OOC_SymbolTable_Builder__Builder)i0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__CreateSYSTEM((OOC_SymbolTable_Builder__Builder)i0);
  i2 = (OOC_INT32)OOC_Error__NewList("", 1);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i1, (OOC_Error__List)i2);
  i2 = (OOC_INT32)OOC_Error__NewList("", 1);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i0, (OOC_Error__List)i2);
  OOC_SymbolTable_CreateNamespace__predefModule = (OOC_SymbolTable__Module)i1;
  OOC_SymbolTable_CreateNamespace__systemModule = (OOC_SymbolTable__Module)i0;
  return;
  ;
}

void OOC_OOC_SymbolTable_CreateNamespace_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_CreateNamespace__ErrorContext.baseTypes[0]);
  OOC_SymbolTable_CreateNamespace__createNamespaceContext = (OOC_SymbolTable_CreateNamespace__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:SymbolTable:CreateNamespace", 32);
  OOC_SymbolTable_CreateNamespace__Init();
  return;
  ;
}

/* --- */
