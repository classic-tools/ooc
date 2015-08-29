#include <OOC/Make.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Make__ErrorContextDesc_GetTemplate(OOC_Make__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4574))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,108,111,99,97,116,101,32,109,111,100,117,108,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){77,111,100,117,108,101,32,105,115,32,97,108,114,101,97,100,121,32,112,97,114,116,32,111,102,32,108,105,98,114,97,114,121,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  default:
    _failed_case(i1, 4566);
    goto l5;
  }
l5:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4753)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Make__InitRules(OOC_Make__Rules r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 4851)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 4883))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4909))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4938))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4979))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5009))+20) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 5031))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 5064))+28) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 5092))+32) = OOC_TRUE;
  i1 = (OOC_INT32)StdChannels__stdout;
  *(OOC_INT32*)((_check_pointer(i0, 5126))+36) = i1;
  return;
  ;
}

OOC_Make__Rules OOC_Make__NewRules() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__Rules.baseTypes[0]);
  OOC_Make__InitRules((OOC_Make__Rules)i0);
  return (OOC_Make__Rules)i0;
  ;
}

void OOC_Make__RulesDesc_SetBackend(OOC_Make__Rules r, OOC_INT32 backend) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = backend;
  *(OOC_INT32*)(_check_pointer(i0, 5360)) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetLibraryName(OOC_Make__Rules r, Object__String name, Object__String version) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 5590))+4) = i1;
  i1 = (OOC_INT32)version;
  *(OOC_INT32*)((_check_pointer(i0, 5617))+8) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetAllImportsModule(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 5744))+12) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetErrOut(OOC_Make__Rules r, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)((_check_pointer(i0, 5874))+36) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetExtensionDict(OOC_Make__Rules r, ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)dict;
  *(OOC_INT32*)((_check_pointer(i0, 5989))+28) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_CheckAllImports(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6324))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6367))+12);
  i1 = (OOC_INT32)module;
  i0 = i0==i1;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_Make__ModuleInfo OOC_Make__RulesDesc_GetModuleInfo(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__Object obj;
  OOC_Make__ModuleInfo mInfo;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6580))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6580))+24);
  i3 = (OOC_INT32)module;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6586)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l8;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ModuleInfo.baseTypes[0]);
  mInfo = (OOC_Make__ModuleInfo)i1;
  i = 0;
  i2=0;
l3_loop:
  *(OOC_UINT8*)((_check_pointer(i1, 6750))+(_check_index(i2, 21, OOC_UINT32, 6758))) = OOC_FALSE;
  *(OOC_UINT8*)(((_check_pointer(i1, 6785))+21)+(_check_index(i2, 21, OOC_UINT32, 6798))) = OOC_FALSE;
  i2 = i2+1;
  i = i2;
  i4 = i2<=20;
  if (i4) goto l3_loop;
l7:
  *(OOC_UINT8*)((_check_pointer(i1, 6834))+42) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i1, 6865))+43) = OOC_FALSE;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6897))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6897))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6903)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  i0=i1;
  goto l9;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6621))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6621))+24);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6627)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6660)))), &_td_OOC_Make__ModuleInfoDesc, 6660);
  
l9:
  return (OOC_Make__ModuleInfo)i0;
  ;
}

static OOC_CHAR8 OOC_Make__Exists(OOC_Repository__Module module, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)module;
  i1 = fileId;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7062)))), OOC_Repository__ModuleDesc_FileExists)),OOC_Repository__ModuleDesc_FileExists)((OOC_Repository__Module)i0, i1);
  if (i2) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7238)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " does not exist", 16);
  return OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7131)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " exists", 8);
  return OOC_TRUE;
l4:
  _failed_function(6983); return 0;
  ;
}

static OOC_CHAR8 OOC_Make__DerivedIsOlder2(OOC_Repository__Module descendentModule, OOC_INT8 descendent, OOC_Repository__Module ancestorModule, OOC_INT8 ancestor) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  struct Time__TimeStamp tsDesc;
  struct Time__TimeStamp tsAncest;

  i0 = (OOC_INT32)descendentModule;
  i1 = descendent;
  i2 = (OOC_INT32)&_td_Time__TimeStamp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7886)))), OOC_Repository__ModuleDesc_GetTimeStamp)),OOC_Repository__ModuleDesc_GetTimeStamp)((OOC_Repository__Module)i0, i1, (void*)(OOC_INT32)&tsDesc, (RT0__Struct)i2);
  i3 = *(OOC_INT32*)(OOC_INT32)&tsDesc;
  i3 = i3==2147483647;
  if (i3) goto l7;
  i3 = (OOC_INT32)ancestorModule;
  i4 = ancestor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8140)))), OOC_Repository__ModuleDesc_GetTimeStamp)),OOC_Repository__ModuleDesc_GetTimeStamp)((OOC_Repository__Module)i3, i4, (void*)(OOC_INT32)&tsAncest, (RT0__Struct)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(i2, Time__TimeStamp_Cmp)),Time__TimeStamp_Cmp)((void*)(OOC_INT32)&tsDesc, (RT0__Struct)i2, (void*)(OOC_INT32)&tsAncest);
  i2 = i2>=0;
  if (i2) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8476)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8560)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i3, i4, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("ts(", 4, (URI__URI)i0, ") < ts(", 8, (URI__URI)i1, ")", 2);
  return OOC_TRUE;
  goto l8;
l5:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8272)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8357)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i3, i4, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("ts(", 4, (URI__URI)i0, ") >= ts(", 9, (URI__URI)i1, ")", 2);
  return OOC_FALSE;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8016)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " does not exist", 16);
  return OOC_TRUE;
l8:
  _failed_function(7335); return 0;
  ;
}

static OOC_CHAR8 OOC_Make__DerivedIsOlder(OOC_Repository__Module module, OOC_INT8 descendent, OOC_INT8 ancestor) {
  register OOC_INT32 i0,i1,i2;

  i0 = descendent;
  i1 = (OOC_INT32)module;
  i2 = ancestor;
  i0 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, i0, (OOC_Repository__Module)i1, i2);
  return i0;
  ;
}

static OOC_CHAR8 OOC_Make__FingerprintMismatch(OOC_Repository__Module descendentModule, OOC_INT32 descendentFP, OOC_Repository__Module ancestorModule, OOC_INT32 ancestorFP) {
  register OOC_INT32 i0,i1;

  i0 = descendentFP;
  i1 = ancestorFP;
  i0 = i0==i1;
  if (i0) goto l3;
  i0 = (OOC_INT32)descendentModule;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9391)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, OOC_TRUE);
  i1 = (OOC_INT32)ancestorModule;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9480)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 1, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("fp(", 4, (URI__URI)i0, ") # fp(", 8, (URI__URI)i1, ")", 2);
  return OOC_TRUE;
  goto l4;
l3:
  i0 = (OOC_INT32)descendentModule;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9180)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, OOC_TRUE);
  i1 = (OOC_INT32)ancestorModule;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9269)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 1, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("fp(", 4, (URI__URI)i0, ") = fp(", 8, (URI__URI)i1, ")", 2);
  return OOC_FALSE;
l4:
  _failed_function(8853); return 0;
  ;
}

static OOC_Error__List OOC_Make__CreateErrList(OOC_Repository__Module module) {
  register OOC_INT32 i0;
  URI__URI uri;
  OOC_Repository__URIBuffer uriStr;

  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9709)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9752)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)uriStr, 1024);
  i0 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)uriStr, 1024);
  return (OOC_Error__List)i0;
  ;
}

void OOC_Make__RulesDesc_WriteErrList(OOC_Make__Rules r, OOC_Error__List errList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)errList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9911));
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9952))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9944)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
l4:
  return;
  ;
}

void OOC_Make__RulesDesc_WriteError(OOC_Make__Rules r, OOC_Repository__Module module, Msg__Msg res) {
  register OOC_INT32 i0,i1;
  OOC_Error__List errList;

  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i0;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10147)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10166)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i0);
  return;
  ;
}

static void OOC_Make__WriteImports(OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_Repository__Module import;

  i0 = (OOC_INT32)module;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10351))+16);
  _assert((i1>=2), 127, 10338);
  Out__String("> IMPORT of ", 13);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10432))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10432))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10437)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i1, 10437)), i2);
  Out__Ln();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10477))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10490)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l12;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)OOC_Config__repositories;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10550))+20);
  i4 = _check_pointer(i4, 10563);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 10563))*16));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10571))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10550))+20);
  i5 = _check_pointer(i5, 10563);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i2, i6, OOC_UINT32, 10563))*16));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10571))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10575)), (OOC_INT32)0);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10533)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i4, 10575)), i5);
  import = (OOC_Repository__Module)i3;
  i4 = i3==(OOC_INT32)0;
  if (i4) goto l6;
  Out__String("> ", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10782))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10782))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 10787)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i4, 10787)), i3);
  Out__Ln();
  goto l7;
l6:
  Out__String("> no such module: ", 19);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10675))+20);
  i3 = _check_pointer(i3, 10688);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 10688))*16));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10696))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10675))+20);
  i4 = _check_pointer(i4, 10688);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 10688))*16));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10696))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 10700)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i3, 10700)), i4);
  Out__Ln();
l7:
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l12:
  return;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_GetImports(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  OOC_Error__List errList;
  auto void OOC_Make__RulesDesc_GetImports_ResolveNames();
    
    void OOC_Make__RulesDesc_GetImports_ResolveNames() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;
      OOC_Repository__Module import;
      auto void OOC_Make__RulesDesc_GetImports_ResolveNames_Err(OOC_INT32 code, OOC_SymbolTable__Name sym);
        
        void OOC_Make__RulesDesc_GetImports_ResolveNames_Err(OOC_INT32 code, OOC_SymbolTable__Name sym) {
          register OOC_INT32 i0,i1,i2,i3;
          Msg__Msg lastError;
          OOC_INT32 pos;

          i0 = (OOC_INT32)OOC_Make__makeContext;
          i1 = code;
          i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
          lastError = (Msg__Msg)i0;
          i1 = (OOC_INT32)sym;
          i2 = *(OOC_INT32*)(_check_pointer(i1, 11726));
          i3 = i2<0;
          pos = i2;
          if (!i3) goto l4;
          pos = 0;
          i2=0;
l4:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11808)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
          i2 = *(OOC_INT32*)((_check_pointer(i1, 11881))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11854)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
          i2 = *(OOC_INT32*)((_check_pointer(i1, 11936))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11907)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12011))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12011))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12016)), (OOC_INT32)0);
          i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 12016)), i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11964)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
          i1 = (OOC_INT32)errList;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12036)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12117))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12130)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l15;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)module;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12156))+20);
      i3 = _check_pointer(i3, 12169);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i1, i4, OOC_UINT32, 12169))*16))+8);
      i3 = !i3;
      if (!i3) goto l10;
      i3 = (OOC_INT32)OOC_Config__repositories;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12243))+20);
      i4 = _check_pointer(i4, 12256);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i1, i5, OOC_UINT32, 12256))*16));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 12264))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12243))+20);
      i2 = _check_pointer(i2, 12256);
      i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i5, OOC_UINT32, 12256))*16));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12264))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12268)), (OOC_INT32)0);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12226)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i4, 12268)), i2);
      import = (OOC_Repository__Module)i2;
      i3 = i2==(OOC_INT32)0;
      if (i3) goto l8;
      i3 = (OOC_INT32)module;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12399))+20);
      i3 = _check_pointer(i3, 12412);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 12412))*16))+4) = i2;
      goto l10;
l8:
      i2 = (OOC_INT32)module;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12342))+20);
      i2 = _check_pointer(i2, 12355);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 12355))*16));
      OOC_Make__RulesDesc_GetImports_ResolveNames_Err(1, (OOC_SymbolTable__Name)i1);
l10:
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l15:
      return;
      ;
    }


  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12547))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12547))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12552)), (OOC_INT32)0);
  OOC_Logger__EnterMake("GetImports", 11, (void*)(_check_pointer(i1, 12552)), i2);
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12570))+16);
  i1 = i1!=1;
  if (i1) goto l14;
  i1 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i0, 1, 0);
  
l7:
  if (i1) goto l9;
  i1 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13547)))), OOC_Repository__ModuleDesc_ReadSymbolFile)),OOC_Repository__ModuleDesc_ReadSymbolFile)((OOC_Repository__Module)i0);
  symTab = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13670)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i2, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13585)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i1, 3, i2);
  i1 = (OOC_INT32)symTab;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13731))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13709)))), OOC_Repository__ModuleDesc_SetFingerprint)),OOC_Repository__ModuleDesc_SetFingerprint)((OOC_Repository__Module)i0, i1);
  goto l15;
l9:
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13096))+4);
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, OOC_FALSE, OOC_FALSE, OOC_FALSE, OOC_TRUE, (Object__String)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13194)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l15;
  i2 = (OOC_INT32)symTab;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13301)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13225)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i2, 2, i1);
  goto l15;
l14:
  OOC_Logger__ExplainMake("using cached value", 19);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12706))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12706))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12711)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake("GetImports", 11, (void*)(_check_pointer(i1, 12711)), i0, OOC_TRUE);
  return i0;
l15:
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13770)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l18;
  OOC_Make__RulesDesc_GetImports_ResolveNames();
l18:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13828)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13899))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13899))+4);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13914)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13904)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake("GetImports", 11, (void*)(_check_pointer(i1, 13904)), i0, i2);
  return i0;
  ;
}

OOC_INT32 OOC_Make__RulesDesc_SelectBackend(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 b;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 14182));
  b = i1;
  i2 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14200)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i2);
  if (i0) goto l3;
  i0=i1;
  goto l16;
l3:
  i0 = i1==3;
  if (i0) goto l6;
  i0=OOC_FALSE;
  goto l12;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14276))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 14283))+44);
  i0 = i0==2;
  if (i0) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14327))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 14334))+44);
  i0 = i0==3;
  
  goto l12;
l9:
  i0=OOC_TRUE;
l12:
  if (i0) goto l14;
  i0=i1;
  goto l16;
l14:
  i0=1;
l16:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_CompileModule(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Make__ModuleInfo mInfo;
  Object__String libraryName;
  OOC_Error__List errList;
  OOC_CHAR8 success;
  auto OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoEmptyBackend(Object__String libraryName);
  auto OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoSSAtoC(Object__String libraryName);
  auto OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoIRtoC(Object__String libraryName);
  auto OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoSSAtoIA32(Object__String libraryName);
    
    OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoEmptyBackend(Object__String libraryName) {
      register OOC_INT32 i0,i1;
      OOC_AST__Node ast;
      OOC_SymbolTable__Module symTab;
      OOC_Config_Pragmas__History pragmaHistory;
      OOC_Error__List errList;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)libraryName;
      OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, OOC_FALSE, OOC_TRUE, OOC_TRUE, OOC_FALSE, (Object__String)i1, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
      i0 = (OOC_INT32)errList;
      return (OOC_Error__List)i0;
      ;
    }

    
    OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoSSAtoC(Object__String libraryName) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)OOC_Make__inspectProc;
      i1 = (OOC_INT32)OOC_Make__inspectStage;
      i0 = (OOC_INT32)OOC_SSA_WriteC__NewTranslator((StringSearch__Matcher)i0, (StringSearch__Matcher)i1);
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)libraryName;
      i3 = OOC_Make__writeAST;
      i4 = OOC_Make__writeIR;
      i0 = (OOC_INT32)OOC_Make_TranslateToC__Run((OOC_Repository__Module)i1, (Object__String)i2, i3, i4, (OOC_Make_TranslateToC__Translator)i0);
      return (OOC_Error__List)i0;
      ;
    }

    
    OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoIRtoC(Object__String libraryName) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)OOC_C_IRtoC__NewTranslator();
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)libraryName;
      i3 = OOC_Make__writeAST;
      i4 = OOC_Make__writeIR;
      i0 = (OOC_INT32)OOC_Make_TranslateToC__Run((OOC_Repository__Module)i1, (Object__String)i2, i3, i4, (OOC_Make_TranslateToC__Translator)i0);
      return (OOC_Error__List)i0;
      ;
    }

    
    OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoSSAtoIA32(Object__String libraryName) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_Make__inspectProc;
      i2 = (OOC_INT32)OOC_Make__inspectStage;
      i0 = (OOC_INT32)OOC_IA32_WriteAssembler__NewTranslator((OOC_Repository__Module)i0, (StringSearch__Matcher)i1, (StringSearch__Matcher)i2);
      i1 = (OOC_INT32)libraryName;
      i2 = OOC_Make__writeAST;
      i3 = OOC_Make__writeIR;
      i4 = (OOC_INT32)module;
      i0 = (OOC_INT32)OOC_Make_TranslateToIA32__Run((OOC_Repository__Module)i4, (Object__String)i1, i2, i3, (OOC_Make_TranslateToIA32__Translator)i0);
      return (OOC_Error__List)i0;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15900)))), OOC_Make__RulesDesc_GetModuleInfo)),OOC_Make__RulesDesc_GetModuleInfo)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  mInfo = (OOC_Make__ModuleInfo)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 15936))+42);
  if (i3) goto l29;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16098))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16098))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16103)), (OOC_INT32)0);
  OOC_Logger__EnterMake("CompileModule", 14, (void*)(_check_pointer(i2, 16103)), i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16130))+4);
  i3 = i2!=(OOC_INT32)0;
  libraryName = (Object__String)i2;
  if (i3) goto l5;
  i3=OOC_FALSE;
  goto l7;
l5:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16182));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16193))+16);
  i3 = i3!=i4;
  
l7:
  if (!i3) goto l10;
  libraryName = (Object__String)(OOC_INT32)0;
  i2=(OOC_INT32)0;
l10:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16540)))), OOC_Make__RulesDesc_SelectBackend)),OOC_Make__RulesDesc_SelectBackend)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  switch (i0) {
  case 0:
    i0 = (OOC_INT32)OOC_Make__RulesDesc_CompileModule_DoEmptyBackend((Object__String)i2);
    errList = (OOC_Error__List)i0;
    goto l17;
  case 1:
    i0 = (OOC_INT32)OOC_Make__RulesDesc_CompileModule_DoSSAtoC((Object__String)i2);
    errList = (OOC_Error__List)i0;
    goto l17;
  case 2:
    i0 = (OOC_INT32)OOC_Make__RulesDesc_CompileModule_DoIRtoC((Object__String)i2);
    errList = (OOC_Error__List)i0;
    goto l17;
  case 3:
    i0 = (OOC_INT32)OOC_Make__RulesDesc_CompileModule_DoSSAtoIA32((Object__String)i2);
    errList = (OOC_Error__List)i0;
    goto l17;
  default:
    _failed_case(i0, 16534);
    goto l17;
  }
l17:
  i0 = (OOC_INT32)errList;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16889)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
  goto l21;
l20:
  i1=OOC_TRUE;
l21:
  success = i1;
  i2 = (OOC_INT32)r;
  i3 = (OOC_INT32)module;
  if (!i1) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16995)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i3, (OOC_SymbolTable__Module)(OOC_INT32)0, 1, OOC_TRUE);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17066)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i2, (OOC_Repository__Module)i3);
  success = i1;
  if (!i1) goto l28;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17151))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17127)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i4, 4, OOC_TRUE);
l28:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17221)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i2, (OOC_Error__List)i0);
  i0 = (OOC_INT32)mInfo;
  *(OOC_UINT8*)((_check_pointer(i0, 17263))+42) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 17293))+43) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17372))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17372))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17377)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake("CompileModule", 14, (void*)(_check_pointer(i0, 17377)), i2, i1);
  return i0;
  goto l30;
l29:
  OOC_Logger__ExplainMake("cached result: CompileModule", 29);
  i0 = *(OOC_UINT8*)((_check_pointer(i2, 16027))+43);
  return i0;
l30:
  _failed_function(14471); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateSymbolFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_CHAR8 isUpToDate;
  Msg__Msg err;
  Object__CharsLatin1 chars;
  OOC_INT32 i;
  OOC_Error__List errList;

  i0 = (OOC_INT32)module;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 17650))+16);
  i1 = i1==4;
  if (i1) goto l57;
  i1 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17760)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  if (!i2) goto l58;
  i2 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  i2 = !i2;
  if (i2) goto l7;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i0, 1, 0);
  i2 = !i2;
  
  goto l8;
l7:
  i2=OOC_TRUE;
l8:
  isUpToDate = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18081))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18110));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18121))+16);
  i3 = i3==i4;
  
l13:
  if (!i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18162))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18169))+48);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l21;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18466))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18473))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18466))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18473))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18494))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18485)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i4, (Object__Object)i5);
  i3 = !i3;
  if (!i3) goto l23;
  i3 = (OOC_INT32)OOC_Make__makeContext;
  i3 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i3, 2);
  err = (Msg__Msg)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18785))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18792))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18785))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18792))+48);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18812)))), &_td_Object__String8Desc, 18812)), 18820)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18812)))), &_td_Object__String8Desc, 18812)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18898)), (OOC_INT32)0);
  i4 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 18898)), i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18849)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i3, "name", 5, (Msg__StringPtr)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18914)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, (Msg__Msg)i3);
  return OOC_FALSE;
  goto l23;
l21:
  OOC_Logger__ExplainMake("module is not part of a library", 32);
  isUpToDate = OOC_FALSE;
  i2=OOC_FALSE;
l23:
  i = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19184))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19197)), (OOC_INT32)0);
  i3 = 0!=i3;
  if (!i3) goto l44;
  i3=i2;i2=0;
l27_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19222))+20);
  i4 = _check_pointer(i4, 19235);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)((i4+((_check_index(i2, i5, OOC_UINT32, 19235))*16))+8);
  i4 = !i4;
  if (!i4) goto l38;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19281))+20);
  i4 = _check_pointer(i4, 19294);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 19294))*16))+4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19267)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i4, 1);
  if (i4) goto l33;
  return OOC_FALSE;
  
  goto l38;
l33:
  if (i3) goto l35;
  i3=OOC_FALSE;
  goto l36;
l35:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19721))+20);
  i3 = _check_pointer(i3, 19734);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19794))+20);
  i5 = _check_pointer(i5, 19807);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19862))+20);
  i7 = _check_pointer(i7, 19875);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i2, i8, OOC_UINT32, 19875))*16))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 19885))+12);
  i3 = *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 19734))*16))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 19807))*16))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i7, 19892))+60);
  i3 = OOC_Make__FingerprintMismatch((OOC_Repository__Module)i0, i3, (OOC_Repository__Module)i4, i5);
  i3 = !i3;
  
l36:
  isUpToDate = i3;
  
l38:
  i2 = i2+1;
  i = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19184))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19197)), (OOC_INT32)0);
  i4 = i2!=i4;
  if (i4) goto l27_loop;
l42:
  i2=i3;
l44:
  if (i2) goto l46;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20362)))), OOC_Make__RulesDesc_CompileModule)),OOC_Make__RulesDesc_CompileModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  isUpToDate = i2;
  
  goto l48;
l46:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20181))+12);
  _assert((i3!=(OOC_INT32)0), 127, 20168);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20235))+12);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20301)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20211)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i3, 4, i4);
  
l48:
  if (i2) goto l50;
  i0=i2;
  goto l55;
l50:
  i3 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20511))+12);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i0, (OOC_Error__List)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20539)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i3);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20582)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i3);
  i0 = !i0;
  if (i0) goto l53;
  i0=i2;
  goto l55;
l53:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20610)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i3);
  i0=OOC_FALSE;
l55:
  return i0;
  goto l58;
l57:
  return OOC_TRUE;
l58:
  return OOC_FALSE;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateSymbolTableXML(OOC_Make__Rules r, OOC_Repository__Module module) {

  _assert(OOC_FALSE, 127, 20925);
  return OOC_FALSE;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateInterfaceDescr(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 success;
  OOC_Error__List errList;
  IO__ByteChannel outputChannel;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21184)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l8;
l3:
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 4, 1);
  if (i3) goto l6;
  i0=i2;
  goto l8;
l6:
  i2 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i1);
  errList = (OOC_Error__List)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21923))+12);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i3, (OOC_Error__List)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21975))+12);
  OOC_Doc_ResolveRef__Resolve((OOC_SymbolTable__Module)i3, (OOC_Error__List)i2);
  i3 = *(OOC_INT32*)(_check_pointer(i2, 22017));
  _assert((i3==0), 127, 22002);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22073)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i1, 4, OOC_TRUE);
  outputChannel = (IO__ByteChannel)i3;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22202)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 4, OOC_FALSE);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22339))+28);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22278))+12);
  i6 = (OOC_INT32)OOC_Config__repositories;
  OOC_SymbolTable_InterfaceDescr__Write((IO__ByteChannel)i3, (URI__HierarchicalURI)i4, (OOC_SymbolTable__Module)i1, (OOC_Config_Repositories__Section)i6, (ADT_Dictionary__Dictionary)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22377)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22416)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i2);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22466)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateInterfaceXML(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_CHAR8 success;
  OOC_Error__List errList;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  IO__ByteChannel outputChannel;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22826)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l11;
l3:
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 3, 1);
  if (i3) goto l6;
  i0=i2;
  goto l11;
l6:
  i2 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i1);
  errList = (OOC_Error__List)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23387))+4);
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i1, OOC_FALSE, OOC_TRUE, OOC_FALSE, OOC_FALSE, (Object__String)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23489)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l9;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23539)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i1, 3, OOC_TRUE);
  outputChannel = (IO__ByteChannel)i2;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23664)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 3, OOC_FALSE);
  i3 = (OOC_INT32)symTab;
  i4 = (OOC_INT32)OOC_Config__repositories;
  OOC_SymbolTable_InterfaceXML__Write((IO__ByteChannel)i2, (URI__HierarchicalURI)i1, (OOC_SymbolTable__Module)i3, (OOC_Config_Repositories__Section)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23783)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i2);
l9:
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23827)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23877)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
l11:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateInterfaceHTML(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 success;
  OOC_INT32 exit;
  URI__URI uri;
  OOC_Make__ShellCommand str;
  OOC_Repository__URIBuffer path;
  Msg__Msg res;
  OOC_Error__List errList;
  auto URI__URI OOC_Make__RulesDesc_UpdateInterfaceHTML_GetSystemId(OOC_Config_Repositories__Section repositories);
    
    URI__URI OOC_Make__RulesDesc_UpdateInterfaceHTML_GetSystemId(OOC_Config_Repositories__Section repositories) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)OOC_Make__stylesheetSystemId;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      return (URI__URI)i0;
      goto l7;
l3:
      i0 = (OOC_INT32)repositories;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24365)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.xsl", 30);
      OOC_Make__stylesheetSystemId = (URI__URI)i0;
      i0 = i0==(OOC_INT32)0;
      if (!i0) goto l6;
      Out__String("Error: Cannot locate stylesheet xml/interface-description.xsl from package OOC in any of the configured repositories.", 118);
      Out__Ln();
      _halt(1);
l6:
      i0 = (OOC_INT32)OOC_Make__stylesheetSystemId;
      return (URI__URI)i0;
l7:
      _failed_function(24213); return 0;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24854)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 4);
  success = i0;
  if (!i0) goto l18;
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 5, 4);
  if (!i1) goto l18;
  i0 = (OOC_INT32)OOC_Config__repositories;
  exit = 0;
  i0 = (OOC_INT32)OOC_Make__RulesDesc_UpdateInterfaceHTML_GetSystemId((OOC_Config_Repositories__Section)i0);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25082)))), &_td_URI_Scheme_File__URIDesc, 25082)), 25086)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25082)))), &_td_URI_Scheme_File__URIDesc, 25082)), (void*)(OOC_INT32)str, 4096);
  Strings__Insert(" ", 2, 0, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)OOC_Config__xsltproc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25178))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25197)))), &_td_Config_Value_String__ValueDesc, 25197)), 25203));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25178))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25197)))), &_td_Config_Value_String__ValueDesc, 25197)), 25203));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 25210)), 0);
  Strings__Insert((void*)(_check_pointer(i1, 25210)), i0, 0, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25275)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 4, OOC_TRUE);
  uri = (URI__URI)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25332)))), &_td_URI_Scheme_File__URIDesc, 25332)), 25336)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25332)))), &_td_URI_Scheme_File__URIDesc, 25332)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 4096);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 4096);
  Strings__Append(" >", 3, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25491)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25547)))), &_td_URI_Scheme_File__URIDesc, 25547)), 25551)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25547)))), &_td_URI_Scheme_File__URIDesc, 25547)), (void*)(OOC_INT32)path, 1024);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 4096);
  OS_Path__dirname((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)path, 1024);
  OS_Files__makedirs((void*)(OOC_INT32)path, 1024, 511, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l9;
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  exit = i0;
l9:
  i0 = (OOC_INT32)res;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l12;
  i0 = (OOC_INT32)OOC_Error__NewList("", 1);
  errList = (OOC_Error__List)i0;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25952)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
l12:
  i0 = (OOC_INT32)res;
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l15;
  i0=OOC_FALSE;
  goto l18;
l15:
  i0 = exit;
  i0 = i0==0;
  
l18:
  return i0;
  ;
}

static OOC_CHAR8 OOC_Make__UpdateCompilerOutput(OOC_Make__Rules r, OOC_Repository__Module module, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)module;
  i1 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  if (i1) goto l3;
  i1 = fileId;
  i0 = OOC_Make__Exists((OOC_Repository__Module)i0, i1);
  return i0;
  goto l8;
l3:
  i1 = fileId;
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i0, i1, 0);
  if (i1) goto l6;
  return OOC_TRUE;
  goto l8;
l6:
  i1 = (OOC_INT32)r;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26380)))), OOC_Make__RulesDesc_CompileModule)),OOC_Make__RulesDesc_CompileModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  return i0;
l8:
  _failed_function(26113); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateHeaderFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26946)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  if (i2) goto l3;
  return OOC_FALSE;
  goto l19;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27001))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27014)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l18;
  i3=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27040))+20);
  i4 = _check_pointer(i4, 27053);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)((i4+((_check_index(i3, i5, OOC_UINT32, 27053))*16))+8);
  i4 = !i4;
  if (i4) goto l9;
  i4=OOC_FALSE;
  goto l11;
l9:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27095))+20);
  i4 = _check_pointer(i4, 27108);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 27108))*16))+4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27081)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i4, 13);
  i4 = !i4;
  
l11:
  if (!i4) goto l13;
  return OOC_FALSE;
l13:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l6_loop;
l18:
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 13);
  return i0;
l19:
  _failed_function(26552); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateDeclFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27434)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 13);
  if (i2) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 12);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateCodeFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27654)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 12);
  if (i2) goto l3;
  return OOC_FALSE;
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27709))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 27716))+44);
  i2 = i2==2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27759))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 27766))+44);
  i2 = i2==3;
  
  goto l8;
l6:
  i2=OOC_TRUE;
l8:
  if (i2) goto l10;
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  return i0;
  goto l12;
l10:
  OOC_Logger__ExplainMake("module\047s C code provided by user", 33);
  return OOC_TRUE;
l12:
  _failed_function(27576); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateAssemblerFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28135)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  if (i2) goto l3;
  return OOC_FALSE;
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28176))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28183))+44);
  i2 = i2==2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28226))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28233))+44);
  i2 = i2==3;
  
  goto l8;
l6:
  i2=OOC_TRUE;
l8:
  if (i2) goto l10;
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 14);
  return i0;
  goto l12;
l10:
  OOC_Logger__ExplainMake("module\047s C code provided by user", 33);
  return OOC_TRUE;
l12:
  _failed_function(28053); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateObjectFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 success;
  OOC_Make__ShellCommand str;

  i0 = OOC_Config_CCompiler__HaveLibtool();
  i0 = !i0;
  i1 = (OOC_INT32)module;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = OOC_Make__Exists((OOC_Repository__Module)i1, 0);
  i0 = !i0;
  
l5:
  if (i0) goto l7;
  i0=OOC_FALSE;
  goto l9;
l7:
  i0 = OOC_Make__Exists((OOC_Repository__Module)i1, 7);
  
l9:
  if (!i0) goto l11;
  OOC_Logger__ExplainMake("no source code available, and object file exists", 49);
  return OOC_TRUE;
l11:
  i0 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29580)))), OOC_Make__RulesDesc_SelectBackend)),OOC_Make__RulesDesc_SelectBackend)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  i2 = i2==3;
  if (i2) goto l22;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30108)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  success = i0;
  if (i0) goto l16;
  i2=OOC_FALSE;
  goto l18;
l16:
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 7, 11);
  
l18:
  if (!i2) goto l27;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30250)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30327)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 11, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30399)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 7, OOC_TRUE);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
  goto l27;
l22:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29646)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 14);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 7, 14);
  if (!i2) goto l27;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29777)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29855)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 14, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29932)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 7, OOC_TRUE);
  OOC_Config_Assembler__AssembleFileCmd((URI__URI)i0, (URI__URI)i1, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
l27:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateObjectFileLib(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 success;
  URI__URI outputFile;
  OOC_Make__ShellCommand str;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31014)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 8, 11);
  if (!i2) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31136)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31200)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 8, OOC_TRUE);
  outputFile = (URI__URI)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31274)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 11, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31344)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 8, OOC_TRUE);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 success;
  OOC_CHAR8 isUpToDate;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32096)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l29;
l3:
  i3 = OOC_Make__Exists((OOC_Repository__Module)i1, 15);
  isUpToDate = i3;
  i = 0;
  if (i3) goto l6;
  i4=OOC_FALSE;
  goto l8;
l6:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32286))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 32294)), (OOC_INT32)0);
  i4 = 0!=i4;
  
l8:
  if (!i4) goto l24;
  i4=i3;i3=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32382))+20);
  i5 = _check_pointer(i5, 32390);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 32390))*4);
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 15, (OOC_Repository__Module)i5, 1);
  if (!i5) goto l15;
  isUpToDate = OOC_FALSE;
  i4=OOC_FALSE;
l15:
  i3 = i3+1;
  i = i3;
  if (i4) goto l18;
  i5=OOC_FALSE;
  goto l20;
l18:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32286))+20);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 32294)), (OOC_INT32)0);
  i5 = i3!=i5;
  
l20:
  if (i5) goto l11_loop;
l23:
  i3=i4;
l24:
  i3 = !i3;
  if (i3) goto l27;
  i0=i2;
  goto l29;
l27:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32565))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32565))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32573)), (OOC_INT32)0);
  OOC_Make_WriteMainFileC__WriteFile((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 32573)), i0);
  i0=OOC_TRUE;
l29:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainFileAssembler(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 success;
  OOC_CHAR8 isUpToDate;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32896)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (!i2) goto l27;
  i3 = OOC_Make__Exists((OOC_Repository__Module)i1, 16);
  isUpToDate = i3;
  i = 0;
  if (i3) goto l5;
  i4=OOC_FALSE;
  goto l7;
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33094))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 33102)), (OOC_INT32)0);
  i4 = 0!=i4;
  
l7:
  if (!i4) goto l23;
  i4=i3;i3=0;
l10_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33198))+20);
  i5 = _check_pointer(i5, 33206);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 33206))*4);
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 16, (OOC_Repository__Module)i5, 1);
  if (!i5) goto l14;
  isUpToDate = OOC_FALSE;
  i4=OOC_FALSE;
l14:
  i3 = i3+1;
  i = i3;
  if (i4) goto l17;
  i5=OOC_FALSE;
  goto l19;
l17:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33094))+20);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 33102)), (OOC_INT32)0);
  i5 = i3!=i5;
  
l19:
  if (i5) goto l10_loop;
l22:
  i3=i4;
l23:
  i3 = !i3;
  if (!i3) goto l27;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33389))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33389))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 33397)), (OOC_INT32)0);
  OOC_Make_WriteMainFileAssembler__WriteFile((OOC_Repository__Module)i1, (void*)(_check_pointer(i3, 33397)), i0);
l27:
  return i2;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainObjectFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 success;
  OOC_Make__ShellCommand str;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 33847));
  i1 = i1==3;
  if (i1) goto l7;
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34409)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 15);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 17, 15);
  if (!i2) goto l12;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34536)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 17);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34617)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 15, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34689)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 17, OOC_TRUE);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
  goto l12;
l7:
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33899)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 16);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 17, 16);
  if (!i2) goto l12;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34066)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 17);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34148)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 16, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34229)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 17, OOC_TRUE);
  OOC_Config_Assembler__AssembleFileCmd((URI__URI)i0, (URI__URI)i1, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
l12:
  return i0;
  ;
}

OOC_Make__ModuleList OOC_Make__ModuleClosure(OOC_Repository__Module module, Object__String restrictToLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_Dictionary__Dictionary dict;
  ADT_ArrayList__ArrayList list;
  OOC_Make__ModuleList a;
  OOC_INT32 i;
  auto void OOC_Make__ModuleClosure_Closure(OOC_Repository__Module module);
    
    void OOC_Make__ModuleClosure_Closure(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)restrictToLibrary;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)module;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35287))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35294))+48);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35273)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      i0=OOC_FALSE;
      goto l9;
l7:
      i0 = (OOC_INT32)dict;
      i1 = (OOC_INT32)module;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35326)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      
l9:
      if (!i0) goto l22;
      i0 = (OOC_INT32)dict;
      i1 = (OOC_INT32)module;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35359)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35419))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 35432)), (OOC_INT32)0);
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l21;
      i2=0;
l13_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35460))+20);
      i3 = _check_pointer(i3, 35473);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i2, i4, OOC_UINT32, 35473))*16))+8);
      i3 = !i3;
      if (!i3) goto l16;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35516))+20);
      i3 = _check_pointer(i3, 35529);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 35529))*16))+4);
      _assert((i3!=(OOC_INT32)0), 127, 35503);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35574))+20);
      i3 = _check_pointer(i3, 35587);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 35587))*16))+4);
      OOC_Make__ModuleClosure_Closure((OOC_Repository__Module)i3);
l16:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l13_loop;
l21:
      i0 = (OOC_INT32)list;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35641)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
l22:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  dict = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)ADT_ArrayList__New(16);
  list = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)module;
  OOC_Make__ModuleClosure_Closure((OOC_Repository__Module)i0);
  i0 = (OOC_INT32)list;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 35838))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ModuleList.baseTypes[0], i1);
  a = (OOC_Make__ModuleList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 35868))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 35886);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35897));
  i6 = _check_pointer(i6, 35903);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 35903))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 35886))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 35911)))), &_td_OOC_Repository__ModuleDesc, 35911));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return (OOC_Make__ModuleList)i1;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateExecutable(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_CHAR8 success;
  OOC_CHAR8 isUpToDate;
  OOC_INT32 i;
  ADT_Dictionary__Dictionary dict;
  ADT_ArrayList__ArrayList list;
  auto void OOC_Make__RulesDesc_UpdateExecutable_Closure(OOC_Repository__Module module);
    
    void OOC_Make__RulesDesc_UpdateExecutable_Closure(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)dict;
      i1 = (OOC_INT32)module;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36562)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)dict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36595)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36655))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36668)), (OOC_INT32)0);
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l13;
      i2=0;
l5_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36696))+20);
      i3 = _check_pointer(i3, 36709);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i2, i4, OOC_UINT32, 36709))*16))+8);
      i3 = !i3;
      if (!i3) goto l8;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36752))+20);
      i3 = _check_pointer(i3, 36765);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 36765))*16))+4);
      _assert((i3!=(OOC_INT32)0), 127, 36739);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36810))+20);
      i3 = _check_pointer(i3, 36823);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 36823))*16))+4);
      OOC_Make__RulesDesc_UpdateExecutable_Closure((OOC_Repository__Module)i3);
l8:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l5_loop;
l13:
      i0 = (OOC_INT32)list;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36877)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
l14:
      return;
      ;
    }


  success = OOC_FALSE;
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37007)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  if (i2) goto l3;
  i0=OOC_FALSE;
  goto l44;
l3:
  i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 37295))+20) = i2;
  isUpToDate = OOC_TRUE;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37393))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 37401)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l6;
  i2=OOC_TRUE;
  goto l32;
l6:
  i3=0;i4=OOC_TRUE;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37422))+20);
  i5 = _check_pointer(i5, 37430);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37430))*4);
  i5 = *(OOC_INT8*)((_check_pointer(i5, 37433))+16);
  i5 = i5==4;
  if (i5) goto l10;
  i5=OOC_FALSE;
  goto l12;
l10:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37484))+20);
  i5 = _check_pointer(i5, 37492);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37492))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 37495))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 37502))+48);
  i5 = i5!=(OOC_INT32)0;
  
l12:
  if (i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37680))+20);
  i5 = _check_pointer(i5, 37688);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37688))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 37691))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37680))+20);
  i6 = _check_pointer(i6, 37688);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 37688))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 37691))+12);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 37698)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i6);
  if (i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37811))+20);
  i5 = _check_pointer(i5, 37819);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37819))*4);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37802)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i5, 7);
  i5 = !i5;
  if (i5) goto l22;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37960))+20);
  i5 = _check_pointer(i5, 37968);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37968))*4);
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 18, (OOC_Repository__Module)i5, 7);
  if (!i5) goto l27;
  isUpToDate = OOC_FALSE;
  i4=OOC_FALSE;
  goto l27;
l22:
  return OOC_FALSE;
  
l27:
  i3 = i3+1;
  i5 = i3<=i2;
  i = i3;
  if (i5) goto l7_loop;
l31:
  i2=i4;
l32:
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38070)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 17);
  i3 = !i3;
  if (!i3) goto l36;
  return OOC_FALSE;
l36:
  if (i2) goto l38;
  i2=OOC_FALSE;
  goto l39;
l38:
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 18, 17);
  i2 = !i2;
  
l39:
  isUpToDate = i2;
  if (i2) goto l42;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38414))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38414))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 38422)), (OOC_INT32)0);
  i0 = OOC_Make_LinkProgramC__Run((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 38422)), i0, (Object__String)(OOC_INT32)0);
  
  goto l44;
l42:
  i0=OOC_TRUE;
l44:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateLibrary(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_CHAR8 success;
  OOC_Make__ModuleList closure;
  OOC_CHAR8 isUpToDate;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 39176));
  *(OOC_INT32*)((_check_pointer(i0, 39150))+16) = i2;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39384)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l32;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39480))+4);
  i3 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)i3);
  closure = (OOC_Make__ModuleList)i3;
  *(OOC_INT32*)((_check_pointer(i0, 39502))+20) = i3;
  i4 = OOC_Make__Exists((OOC_Repository__Module)i1, 19);
  isUpToDate = i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 39668)), (OOC_INT32)0);
  i5 = i5-1;
  i6 = 0<=i5;
  i = 0;
  if (!i6) goto l24;
  i6=i4;i4=0;
l7_loop:
  i7 = _check_pointer(i3, 39694);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 39694))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 39697))+12);
  i8 = _check_pointer(i3, 39694);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 39694))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 39697))+12);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 39704)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i8);
  if (i7) goto l19;
  i7 = _check_pointer(i3, 39777);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 39777))*4);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39762)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i7, 8);
  i7 = !i7;
  if (i7) goto l16;
  i7 = _check_pointer(i3, 39924);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 39924))*4);
  i7 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 19, (OOC_Repository__Module)i7, 8);
  if (!i7) goto l19;
  isUpToDate = OOC_FALSE;
  i6=OOC_FALSE;
  goto l19;
l16:
  return OOC_FALSE;
  
l19:
  i4 = i4+1;
  i7 = i4<=i5;
  i = i4;
  if (i7) goto l7_loop;
l23:
  i4=i6;
l24:
  i5 = !i4;
  if (i5) goto l27;
  i0=i2;
  goto l32;
l27:
  if (i4) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40430))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i3, 40426)), (OOC_INT32)0);
  i0 = OOC_Make_LinkProgramC__Run((OOC_Repository__Module)i1, (void*)(_check_pointer(i3, 40426)), i2, (Object__String)i0);
  
  goto l32;
l29:
  i0=OOC_TRUE;
l32:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_Update(OOC_Make__Rules r, OOC_Repository__Module module, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_Make__ModuleInfo mInfo;
  OOC_CHAR8 res;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40800)))), OOC_Make__RulesDesc_GetModuleInfo)),OOC_Make__RulesDesc_GetModuleInfo)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  mInfo = (OOC_Make__ModuleInfo)i2;
  i3 = fileId;
  i4 = *(OOC_UINT8*)((_check_pointer(i2, 40836))+(_check_index(i3, 21, OOC_UINT8, 40844)));
  if (i4) goto l26;
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 41011))+24);
  i4 = _in(i3,i4);
  if (i4) goto l24;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41193))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41193))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 41198)), (OOC_INT32)0);
  OOC_Logger__EnterMake((void*)(_check_pointer(i4, 41198)), i5, (void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 41212))*24)), 24);
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 41240))+24);
  *(OOC_UINT32*)((_check_pointer(i1, 41240))+24) = (_set_bit(i4,i3));
  switch (i3) {
  case 18:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41329)))), OOC_Make__RulesDesc_UpdateExecutable)),OOC_Make__RulesDesc_UpdateExecutable)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 19:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41396)))), OOC_Make__RulesDesc_UpdateLibrary)),OOC_Make__RulesDesc_UpdateLibrary)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 17:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41467)))), OOC_Make__RulesDesc_UpdateMainObjectFile)),OOC_Make__RulesDesc_UpdateMainObjectFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 15:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41540)))), OOC_Make__RulesDesc_UpdateMainFileC)),OOC_Make__RulesDesc_UpdateMainFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 16:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41616)))), OOC_Make__RulesDesc_UpdateMainFileAssembler)),OOC_Make__RulesDesc_UpdateMainFileAssembler)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 7:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41693)))), OOC_Make__RulesDesc_UpdateObjectFile)),OOC_Make__RulesDesc_UpdateObjectFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 8:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41766)))), OOC_Make__RulesDesc_UpdateObjectFileLib)),OOC_Make__RulesDesc_UpdateObjectFileLib)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 11:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41838)))), OOC_Make__RulesDesc_UpdateCodeFileC)),OOC_Make__RulesDesc_UpdateCodeFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 12:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41906)))), OOC_Make__RulesDesc_UpdateDeclFileC)),OOC_Make__RulesDesc_UpdateDeclFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 13:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41976)))), OOC_Make__RulesDesc_UpdateHeaderFileC)),OOC_Make__RulesDesc_UpdateHeaderFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 14:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42050)))), OOC_Make__RulesDesc_UpdateAssemblerFile)),OOC_Make__RulesDesc_UpdateAssemblerFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 4:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42127)))), OOC_Make__RulesDesc_UpdateInterfaceDescr)),OOC_Make__RulesDesc_UpdateInterfaceDescr)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 3:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42203)))), OOC_Make__RulesDesc_UpdateInterfaceXML)),OOC_Make__RulesDesc_UpdateInterfaceXML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 5:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42278)))), OOC_Make__RulesDesc_UpdateInterfaceHTML)),OOC_Make__RulesDesc_UpdateInterfaceHTML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 2:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42355)))), OOC_Make__RulesDesc_UpdateSymbolTableXML)),OOC_Make__RulesDesc_UpdateSymbolTableXML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 1:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42429)))), OOC_Make__RulesDesc_UpdateSymbolFile)),OOC_Make__RulesDesc_UpdateSymbolFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  default:
    _failed_case(i3, 41271);
    goto l23;
  }
l23:
  *(OOC_UINT8*)((_check_pointer(i2, 42478))+(_check_index(i3, 21, OOC_UINT8, 42486))) = OOC_TRUE;
  i0 = res;
  *(OOC_UINT8*)(((_check_pointer(i2, 42515))+21)+(_check_index(i3, 21, OOC_UINT8, 42528))) = i0;
  i2 = *(OOC_UINT32*)((_check_pointer(i1, 42562))+24);
  *(OOC_UINT32*)((_check_pointer(i1, 42562))+24) = (_clear_bit(i2,i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42622))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42622))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 42627)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake((void*)(_check_pointer(i2, 42627)), i1, (void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 42641))*24)), 24, i0);
  return i0;
  goto l27;
l24:
  Out__String("Error: Cyclic dependency in module ", 36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41112))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41112))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 41117)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i0, 41117)), i1);
  Out__Ln();
  return OOC_FALSE;
  goto l27;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40947))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40947))+4);
  i2 = *(OOC_UINT8*)(((_check_pointer(i2, 40960))+21)+(_check_index(i3, 21, OOC_UINT8, 40973)));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 40952)), (OOC_INT32)0);
  i0 = OOC_Logger__CachedMake((void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 40900))*24)), 24, (void*)(_check_pointer(i0, 40952)), i1, i2);
  return i0;
l27:
  _failed_function(40657); return 0;
  ;
}

void OOC_OOC_Make_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)StringSearch_NoMatch__matcher;
  OOC_Make__inspectProc = (StringSearch__Matcher)i0;
  OOC_Make__inspectStage = (StringSearch__Matcher)i0;
  OOC_Make__writeAST = OOC_FALSE;
  OOC_Make__writeIR = OOC_FALSE;
  OOC_Make__stylesheetSystemId = (URI__URI)(OOC_INT32)0;
  _copy_8((const void*)"Executable",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(18, 21, OOC_UINT8, 42842))*24)),24);
  _copy_8((const void*)"Library",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(19, 21, OOC_UINT8, 42892))*24)),24);
  _copy_8((const void*)"MainObjectFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(17, 21, OOC_UINT8, 42936))*24)),24);
  _copy_8((const void*)"MainFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(15, 21, OOC_UINT8, 42994))*24)),24);
  _copy_8((const void*)"ObjectFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(7, 21, OOC_UINT8, 43042))*24)),24);
  _copy_8((const void*)"ObjectFileLib",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(8, 21, OOC_UINT8, 43092))*24)),24);
  _copy_8((const void*)"CodeFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(11, 21, OOC_UINT8, 43148))*24)),24);
  _copy_8((const void*)"DeclFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(12, 21, OOC_UINT8, 43196))*24)),24);
  _copy_8((const void*)"HeaderFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(13, 21, OOC_UINT8, 43244))*24)),24);
  _copy_8((const void*)"InterfaceDescr",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(4, 21, OOC_UINT8, 43296))*24)),24);
  _copy_8((const void*)"InterfaceXML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(3, 21, OOC_UINT8, 43354))*24)),24);
  _copy_8((const void*)"InterfaceHTML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(5, 21, OOC_UINT8, 43408))*24)),24);
  _copy_8((const void*)"SymbolFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(1, 21, OOC_UINT8, 43464))*24)),24);
  _copy_8((const void*)"SymbolTableXML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(2, 21, OOC_UINT8, 43514))*24)),24);
  _copy_8((const void*)"AssemblerFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(14, 21, OOC_UINT8, 43572))*24)),24);
  _copy_8((const void*)"MainFileAssembler",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(16, 21, OOC_UINT8, 43628))*24)),24);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ErrorContext.baseTypes[0]);
  OOC_Make__makeContext = (OOC_Make__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Make", 9);
  return;
  ;
}

/* --- */
