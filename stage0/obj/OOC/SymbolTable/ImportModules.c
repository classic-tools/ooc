#include "OOC/SymbolTable/ImportModules.d"
#include "__oo2c.h"

void OOC_SymbolTable_ImportModules__ErrorContextDesc_GetTemplate(OOC_SymbolTable_ImportModules__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1399))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,108,111,99,97,116,101,32,109,111,100,117,108,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){70,97,105,108,101,100,32,116,111,32,114,101,97,100,32,115,121,109,98,111,108,32,102,105,108,101,58,32,36,123,114,101,97,115,111,110,125,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  default:
    _failed_case(i1, 1391);
    goto l5;
  }
l5:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1571)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_SymbolTable_ImportModules__ImportModules(OOC_SymbolTable__Module systemModule, OOC_SymbolTable__Module symTab, OOC_Error__List errList) {
  register OOC_INT32 i0,i1;
  Msg__Msg lastError;
  OOC_SymbolTable__Item ptr;
  auto void OOC_SymbolTable_ImportModules__ImportModules_Err(OOC_INT32 code, OOC_SymbolTable__Name name);
  auto void OOC_SymbolTable_ImportModules__ImportModules_ReadSymbolFile(OOC_SymbolTable__Import import);
    
    void OOC_SymbolTable_ImportModules__ImportModules_Err(OOC_INT32 code, OOC_SymbolTable__Name name) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_SymbolTable_ImportModules__importModulesContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)name;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 1988));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1961)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 2039))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2011)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 2093))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2063)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
      i0 = (OOC_INT32)lastError;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2168))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2168))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2173)), (OOC_INT32)0);
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 2173)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2119)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2191)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_SymbolTable_ImportModules__ImportModules_ReadSymbolFile(OOC_SymbolTable__Import import) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Repository__Module m;
      Msg__Msg res;

      i0 = (OOC_INT32)import;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2358)))), OOC_SymbolTable__ImportDesc_IsInternalImport)),OOC_SymbolTable__ImportDesc_IsInternalImport)((OOC_SymbolTable__Import)i0);
      if (i1) goto l15;
      i1 = (OOC_INT32)OOC_Config__repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2495))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2507))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2495))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2507))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2512)), (OOC_INT32)0);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2476)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i1, (void*)(_check_pointer(i2, 2512)), i3);
      i2 = i1==(OOC_INT32)0;
      m = (OOC_Repository__Module)i1;
      if (i2) goto l13;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 2619))+16);
      i2 = i2==3;
      if (i2) goto l7;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2892)))), OOC_Repository__ModuleDesc_ReadSymbolFile)),OOC_Repository__ModuleDesc_ReadSymbolFile)((OOC_Repository__Module)i1, (void*)(OOC_INT32)&res);
      symTab = (OOC_SymbolTable__Module)i2;
      
      goto l8;
l7:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2821))+12);
      symTab = (OOC_SymbolTable__Module)i2;
      res = (Msg__Msg)(OOC_INT32)0;
      
l8:
      i3 = (OOC_INT32)res;
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l11;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3315)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i1, (OOC_SymbolTable__Module)i2, 4, OOC_TRUE);
      i2 = (OOC_INT32)symTab;
      i2 = *(OOC_INT32*)((_check_pointer(i2, 3413))+60);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3391)))), OOC_Repository__ModuleDesc_SetFingerprint)),OOC_Repository__ModuleDesc_SetFingerprint)((OOC_Repository__Module)i1, i2);
      i1 = (OOC_INT32)symTab;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3446)))), OOC_SymbolTable__ImportDesc_SetExternalSymTab)),OOC_SymbolTable__ImportDesc_SetExternalSymTab)((OOC_SymbolTable__Import)i0, (OOC_SymbolTable__Module)i1);
      goto l16;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3004))+40);
      OOC_SymbolTable_ImportModules__ImportModules_Err(2, (OOC_SymbolTable__Name)i0);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3040)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "reason", 7, (Msg__Msg)i1);
      goto l16;
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2577))+40);
      OOC_SymbolTable_ImportModules__ImportModules_Err(1, (OOC_SymbolTable__Name)i0);
      goto l16;
l15:
      i1 = (OOC_INT32)systemModule;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2398)))), OOC_SymbolTable__ImportDesc_SetExternalSymTab)),OOC_SymbolTable__ImportDesc_SetExternalSymTab)((OOC_SymbolTable__Import)i0, (OOC_SymbolTable__Module)i1);
l16:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)symTab;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3585))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l11;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3639)))), &_td_OOC_SymbolTable__ImportDesc);
  if (!i1) goto l6;
  OOC_SymbolTable_ImportModules__ImportModules_ReadSymbolFile((OOC_SymbolTable__Import)i0);
l6:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3722));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l11:
  return;
  ;
}

void OOC_OOC_SymbolTable_ImportModules_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable_ImportModules__ErrorContext.baseTypes[0]);
  OOC_SymbolTable_ImportModules__importModulesContext = (OOC_SymbolTable_ImportModules__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:SymbolTable:ImportModules", 30);
  return;
  ;
}

/* --- */
