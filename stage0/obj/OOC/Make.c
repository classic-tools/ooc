#include <OOC/Make.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Make__ErrorContextDesc_GetTemplate(OOC_Make__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4723))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,108,111,99,97,116,101,32,109,111,100,117,108,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){77,111,100,117,108,101,32,105,115,32,97,108,114,101,97,100,121,32,112,97,114,116,32,111,102,32,108,105,98,114,97,114,121,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  default:
    _failed_case(i1, 4715);
    goto l5;
  }
l5:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4902)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Make__InitRules(OOC_Make__Rules r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 5000)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 5032))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5058))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5087))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5128))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5158))+20) = 0;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 5180))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 5213))+28) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 5241))+32) = 1u;
  i1 = (OOC_INT32)StdChannels__stdout;
  *(OOC_INT32*)((_check_pointer(i0, 5275))+36) = i1;
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
  *(OOC_INT32*)(_check_pointer(i0, 5509)) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetLibraryName(OOC_Make__Rules r, Object__String name, Object__String version) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 5739))+4) = i1;
  i1 = (OOC_INT32)version;
  *(OOC_INT32*)((_check_pointer(i0, 5766))+8) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetAllImportsModule(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 5893))+12) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetErrOut(OOC_Make__Rules r, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)((_check_pointer(i0, 6023))+36) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetExtensionDict(OOC_Make__Rules r, ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)dict;
  *(OOC_INT32*)((_check_pointer(i0, 6138))+28) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_CheckAllImports(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6473))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6516))+12);
  i1 = (OOC_INT32)module;
  i0 = i0==i1;
  
  goto l4;
l3:
  i0=1u;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6729))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6729))+24);
  i3 = (OOC_INT32)module;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6735)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l8;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ModuleInfo.baseTypes[0]);
  mInfo = (OOC_Make__ModuleInfo)i1;
  i = 0;
  i2=0;
l3_loop:
  *(OOC_UINT8*)((_check_pointer(i1, 6899))+(_check_index(i2, 21, OOC_UINT32, 6907))) = 0u;
  *(OOC_UINT8*)(((_check_pointer(i1, 6934))+21)+(_check_index(i2, 21, OOC_UINT32, 6947))) = 0u;
  i2 = i2+1;
  i = i2;
  i4 = i2<=20;
  if (i4) goto l3_loop;
l7:
  *(OOC_UINT8*)((_check_pointer(i1, 6983))+42) = 0u;
  *(OOC_UINT8*)((_check_pointer(i1, 7014))+43) = 0u;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7046))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7046))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7052)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  i0=i1;
  goto l9;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6770))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6770))+24);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6776)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6809)))), &_td_OOC_Make__ModuleInfoDesc, 6809);
  
l9:
  return (OOC_Make__ModuleInfo)i0;
  ;
}

static OOC_CHAR8 OOC_Make__Exists(OOC_Repository__Module module, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)module;
  i1 = fileId;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7211)))), OOC_Repository__ModuleDesc_FileExists)),OOC_Repository__ModuleDesc_FileExists)((OOC_Repository__Module)i0, i1);
  if (i2) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7387)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, 1u);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " does not exist", 16);
  return 0u;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7280)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, 1u);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " exists", 8);
  return 1u;
l4:
  _failed_function(7132); return 0;
  ;
}

static OOC_CHAR8 OOC_Make__DerivedIsOlder2(OOC_Repository__Module descendentModule, OOC_INT8 descendent, OOC_Repository__Module ancestorModule, OOC_INT8 ancestor) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  struct Time__TimeStamp tsDesc;
  struct Time__TimeStamp tsAncest;

  i0 = (OOC_INT32)descendentModule;
  i1 = descendent;
  i2 = (OOC_INT32)&_td_Time__TimeStamp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8035)))), OOC_Repository__ModuleDesc_GetTimeStamp)),OOC_Repository__ModuleDesc_GetTimeStamp)((OOC_Repository__Module)i0, i1, (void*)(OOC_INT32)&tsDesc, (RT0__Struct)i2);
  i3 = *(OOC_INT32*)(OOC_INT32)&tsDesc;
  i3 = i3==2147483647;
  if (i3) goto l7;
  i3 = (OOC_INT32)ancestorModule;
  i4 = ancestor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8289)))), OOC_Repository__ModuleDesc_GetTimeStamp)),OOC_Repository__ModuleDesc_GetTimeStamp)((OOC_Repository__Module)i3, i4, (void*)(OOC_INT32)&tsAncest, (RT0__Struct)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(i2, Time__TimeStamp_Cmp)),Time__TimeStamp_Cmp)((void*)(OOC_INT32)&tsDesc, (RT0__Struct)i2, (void*)(OOC_INT32)&tsAncest);
  i2 = i2>=0;
  if (i2) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8625)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8709)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i3, i4, 1u);
  OOC_Logger__ExplainFilesMake("ts(", 4, (URI__URI)i0, ") < ts(", 8, (URI__URI)i1, ")", 2);
  return 1u;
  goto l8;
l5:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8421)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8506)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i3, i4, 1u);
  OOC_Logger__ExplainFilesMake("ts(", 4, (URI__URI)i0, ") >= ts(", 9, (URI__URI)i1, ")", 2);
  return 0u;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8165)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, 1u);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " does not exist", 16);
  return 1u;
l8:
  _failed_function(7484); return 0;
  ;
}

static OOC_CHAR8 OOC_Make__DerivedIsOlder(OOC_Repository__Module module, OOC_INT8 descendent, OOC_INT8 ancestor) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)module;
  i1 = descendent;
  i2 = ancestor;
  i0 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i0, i1, (OOC_Repository__Module)i0, i2);
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9540)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, 1u);
  i1 = (OOC_INT32)ancestorModule;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9629)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 1, 1u);
  OOC_Logger__ExplainFilesMake("fp(", 4, (URI__URI)i0, ") # fp(", 8, (URI__URI)i1, ")", 2);
  return 1u;
  goto l4;
l3:
  i0 = (OOC_INT32)descendentModule;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9329)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, 1u);
  i1 = (OOC_INT32)ancestorModule;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9418)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 1, 1u);
  OOC_Logger__ExplainFilesMake("fp(", 4, (URI__URI)i0, ") = fp(", 8, (URI__URI)i1, ")", 2);
  return 0u;
l4:
  _failed_function(9002); return 0;
  ;
}

static OOC_Error__List OOC_Make__CreateErrList(OOC_Repository__Module module) {
  register OOC_INT32 i0;
  URI__URI uri;
  OOC_Repository__URIBuffer uriStr;

  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9858)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, 1u);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9901)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)uriStr, 1024);
  i0 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)uriStr, 1024);
  return (OOC_Error__List)i0;
  ;
}

void OOC_Make__RulesDesc_WriteErrList(OOC_Make__Rules r, OOC_Error__List errList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)errList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10060));
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10101))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10093)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10296)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10315)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i0);
  return;
  ;
}

static void OOC_Make__WriteImports(OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_Repository__Module import;

  i0 = (OOC_INT32)module;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10500))+16);
  _assert((i1>=2), 127, 10487);
  Out__String("> IMPORT of ", 13);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10581))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10581))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10586)), 0);
  Out__String((void*)(_check_pointer(i1, 10586)), i2);
  Out__Ln();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10626))+20);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10639)), 0);
  i2 = 0<i1;
  if (!i2) goto l12;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)OOC_Config__repositories;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10699))+20);
  i4 = _check_pointer(i4, 10712);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 10712))*16));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10720))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10699))+20);
  i5 = _check_pointer(i5, 10712);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i2, i6, OOC_UINT32, 10712))*16));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10720))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10724)), 0);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10682)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i4, 10724)), i5);
  import = (OOC_Repository__Module)i3;
  i4 = i3==0;
  if (i4) goto l6;
  Out__String("> ", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10931))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10931))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 10936)), 0);
  Out__String((void*)(_check_pointer(i4, 10936)), i3);
  Out__Ln();
  goto l7;
l6:
  Out__String("> no such module: ", 19);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10824))+20);
  i3 = _check_pointer(i3, 10837);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 10837))*16));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10845))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10824))+20);
  i4 = _check_pointer(i4, 10837);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 10837))*16));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10845))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 10849)), 0);
  Out__String((void*)(_check_pointer(i3, 10849)), i4);
  Out__Ln();
l7:
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
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
          i2 = *(OOC_INT32*)(_check_pointer(i1, 11875));
          pos = i2;
          i3 = i2<0;
          if (!i3) goto l4;
          pos = 0;
          i2=0;
l4:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11957)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
          i2 = *(OOC_INT32*)((_check_pointer(i1, 12030))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12003)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
          i2 = *(OOC_INT32*)((_check_pointer(i1, 12085))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12056)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12160))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12160))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12165)), 0);
          i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 12165)), i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12113)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
          i1 = (OOC_INT32)errList;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12185)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12266))+20);
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12279)), 0);
      i1 = 0<i0;
      if (!i1) goto l15;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)module;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12305))+20);
      i3 = _check_pointer(i3, 12318);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i1, i4, OOC_UINT32, 12318))*16))+8);
      i3 = !i3;
      if (!i3) goto l10;
      i3 = (OOC_INT32)OOC_Config__repositories;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12392))+20);
      i4 = _check_pointer(i4, 12405);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i1, i5, OOC_UINT32, 12405))*16));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 12413))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12392))+20);
      i2 = _check_pointer(i2, 12405);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i5, OOC_UINT32, 12405))*16));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12413))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12417)), 0);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12375)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i4, 12417)), i2);
      import = (OOC_Repository__Module)i2;
      i3 = i2==0;
      if (i3) goto l8;
      i3 = (OOC_INT32)module;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12548))+20);
      i3 = _check_pointer(i3, 12561);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_INT32*)((i3+((_check_index(i1, i4, OOC_UINT32, 12561))*16))+4) = i2;
      goto l10;
l8:
      i2 = (OOC_INT32)module;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12491))+20);
      i2 = _check_pointer(i2, 12504);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 12504))*16));
      OOC_Make__RulesDesc_GetImports_ResolveNames_Err(1, (OOC_SymbolTable__Name)i1);
l10:
      i1 = i;
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l3_loop;
l15:
      return;
      ;
    }


  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12696))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12696))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12701)), 0);
  OOC_Logger__EnterMake("GetImports", 11, (void*)(_check_pointer(i1, 12701)), i2);
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12719))+16);
  i1 = i1!=1;
  if (i1) goto l14;
  i1 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i0, 1, 0);
  
l7:
  if (i1) goto l9;
  i1 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13696)))), OOC_Repository__ModuleDesc_ReadSymbolFile)),OOC_Repository__ModuleDesc_ReadSymbolFile)((OOC_Repository__Module)i0);
  symTab = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13819)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i2, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13734)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i1, 3, i2);
  i1 = (OOC_INT32)symTab;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13880))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13858)))), OOC_Repository__ModuleDesc_SetFingerprint)),OOC_Repository__ModuleDesc_SetFingerprint)((OOC_Repository__Module)i0, i1);
  goto l15;
l9:
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13245))+4);
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, 0u, 0u, 0u, 1u, (Object__String)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13343)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l15;
  i2 = (OOC_INT32)symTab;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13450)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13374)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i2, 2, i1);
  goto l15;
l14:
  OOC_Logger__ExplainMake("using cached value", 19);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12855))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12855))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12860)), 0);
  i0 = OOC_Logger__ExitMake("GetImports", 11, (void*)(_check_pointer(i1, 12860)), i0, 1u);
  return i0;
l15:
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13919)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l18;
  OOC_Make__RulesDesc_GetImports_ResolveNames();
l18:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13977)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14048))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14048))+4);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14063)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14053)), 0);
  i0 = OOC_Logger__ExitMake("GetImports", 11, (void*)(_check_pointer(i1, 14053)), i0, i2);
  return i0;
  ;
}

OOC_INT32 OOC_Make__RulesDesc_SelectBackend(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 b;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 14331));
  b = i1;
  i2 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14349)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i2);
  if (i0) goto l3;
  i0=i1;
  goto l16;
l3:
  i0 = i1==3;
  if (i0) goto l6;
  i0=0u;
  goto l12;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14425))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 14432))+44);
  i0 = i0==2;
  if (i0) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14476))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 14483))+44);
  i0 = i0==3;
  
  goto l12;
l9:
  i0=1u;
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
      OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, 0u, 1u, 1u, 0u, (Object__String)i1, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
      i0 = (OOC_INT32)errList;
      return (OOC_Error__List)i0;
      ;
    }

    
    OOC_Error__List OOC_Make__RulesDesc_CompileModule_DoSSAtoC(Object__String libraryName) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = OOC_Make__writeStats;
      i1 = (OOC_INT32)OOC_Make__inspectProc;
      i2 = (OOC_INT32)OOC_Make__inspectStage;
      i0 = (OOC_INT32)OOC_SSA_WriteC__NewTranslator(i0, (StringSearch__Matcher)i1, (StringSearch__Matcher)i2);
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16061)))), OOC_Make__RulesDesc_GetModuleInfo)),OOC_Make__RulesDesc_GetModuleInfo)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  mInfo = (OOC_Make__ModuleInfo)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 16097))+42);
  if (i3) goto l29;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16259))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16259))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16264)), 0);
  OOC_Logger__EnterMake("CompileModule", 14, (void*)(_check_pointer(i2, 16264)), i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16291))+4);
  libraryName = (Object__String)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l5;
  i3=0u;
  goto l7;
l5:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16343));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16354))+16);
  i3 = i3!=i4;
  
l7:
  if (!i3) goto l10;
  libraryName = (Object__String)(OOC_INT32)0;
  i2=(OOC_INT32)0;
l10:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16701)))), OOC_Make__RulesDesc_SelectBackend)),OOC_Make__RulesDesc_SelectBackend)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
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
    _failed_case(i0, 16695);
    goto l17;
  }
l17:
  i0 = (OOC_INT32)errList;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17050)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
  goto l21;
l20:
  i1=1u;
l21:
  success = i1;
  i2 = (OOC_INT32)r;
  i3 = (OOC_INT32)module;
  if (!i1) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17156)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i3, (OOC_SymbolTable__Module)(OOC_INT32)0, 1, 1u);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17227)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i2, (OOC_Repository__Module)i3);
  success = i1;
  if (!i1) goto l28;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17312))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17288)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i4, 4, 1u);
l28:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17382)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i2, (OOC_Error__List)i0);
  i0 = (OOC_INT32)mInfo;
  *(OOC_UINT8*)((_check_pointer(i0, 17424))+42) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 17454))+43) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17533))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17533))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17538)), 0);
  i0 = OOC_Logger__ExitMake("CompileModule", 14, (void*)(_check_pointer(i0, 17538)), i2, i1);
  return i0;
  goto l30;
l29:
  OOC_Logger__ExplainMake("cached result: CompileModule", 29);
  i0 = *(OOC_UINT8*)((_check_pointer(i2, 16188))+43);
  return i0;
l30:
  _failed_function(14620); return 0;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 17811))+16);
  i1 = i1==4;
  if (i1) goto l57;
  i1 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17921)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  if (!i2) goto l58;
  i2 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  i2 = !i2;
  if (i2) goto l7;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i0, 1, 0);
  i2 = !i2;
  
  goto l8;
l7:
  i2=1u;
l8:
  isUpToDate = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18242))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18271));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18282))+16);
  i3 = i3==i4;
  
l13:
  if (!i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18323))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18330))+48);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l21;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18627))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18634))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18627))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18634))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18655))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18646)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i4, (Object__Object)i5);
  i3 = !i3;
  if (!i3) goto l23;
  i3 = (OOC_INT32)OOC_Make__makeContext;
  i3 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i3, 2);
  err = (Msg__Msg)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18946))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18953))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18946))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18953))+48);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18973)))), &_td_Object__String8Desc, 18973)), 18981)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18973)))), &_td_Object__String8Desc, 18973)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19059)), 0);
  i4 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 19059)), i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19010)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i3, "name", 5, (Msg__StringPtr)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19075)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, (Msg__Msg)i3);
  return 0u;
  goto l23;
l21:
  OOC_Logger__ExplainMake("module is not part of a library", 32);
  isUpToDate = 0u;
  i2=0u;
l23:
  i = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19345))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19358)), 0);
  i3 = 0!=i3;
  if (!i3) goto l44;
  i3=i2;i2=0;
l27_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19383))+20);
  i4 = _check_pointer(i4, 19396);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)((i4+((_check_index(i2, i5, OOC_UINT32, 19396))*16))+8);
  i4 = !i4;
  if (!i4) goto l38;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19442))+20);
  i4 = _check_pointer(i4, 19455);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 19455))*16))+4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19428)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i4, 1);
  if (i4) goto l33;
  return 0u;
  
  goto l38;
l33:
  if (i3) goto l35;
  i3=0u;
  goto l36;
l35:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19882))+20);
  i3 = _check_pointer(i3, 19895);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19955))+20);
  i5 = _check_pointer(i5, 19968);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20023))+20);
  i7 = _check_pointer(i7, 20036);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i2, i8, OOC_UINT32, 20036))*16))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 20046))+12);
  i3 = *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 19895))*16))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 19968))*16))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i7, 20053))+60);
  i3 = OOC_Make__FingerprintMismatch((OOC_Repository__Module)i0, i3, (OOC_Repository__Module)i4, i5);
  i3 = !i3;
  
l36:
  isUpToDate = i3;
  
l38:
  i2 = i2+1;
  i = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19345))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19358)), 0);
  i4 = i2!=i4;
  if (i4) goto l27_loop;
l42:
  i2=i3;
l44:
  if (i2) goto l46;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20523)))), OOC_Make__RulesDesc_CompileModule)),OOC_Make__RulesDesc_CompileModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  isUpToDate = i2;
  
  goto l48;
l46:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20342))+12);
  _assert((i3!=(OOC_INT32)0), 127, 20329);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20396))+12);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20462)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20372)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i3, 4, i4);
  
l48:
  if (i2) goto l50;
  i0=i2;
  goto l55;
l50:
  i3 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20672))+12);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i0, (OOC_Error__List)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20700)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i3);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20743)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i3);
  i0 = !i0;
  if (i0) goto l53;
  i0=i2;
  goto l55;
l53:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20771)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i3);
  i0=0u;
l55:
  return i0;
  goto l58;
l57:
  return 1u;
l58:
  return 0u;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateSymbolTableXML(OOC_Make__Rules r, OOC_Repository__Module module) {

  _assert(0u, 127, 21086);
  return 0u;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateInterfaceDescr(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 success;
  OOC_Error__List errList;
  IO__ByteChannel outputChannel;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21345)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22084))+12);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i3, (OOC_Error__List)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22136))+12);
  OOC_Doc_ResolveRef__Resolve((OOC_SymbolTable__Module)i3, (OOC_Error__List)i2);
  i3 = *(OOC_INT32*)(_check_pointer(i2, 22178));
  _assert((i3==0), 127, 22163);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22234)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i1, 4, 1u);
  outputChannel = (IO__ByteChannel)i3;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22363)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 4, 0u);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22500))+28);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22439))+12);
  i6 = (OOC_INT32)OOC_Config__repositories;
  OOC_SymbolTable_InterfaceDescr__Write((IO__ByteChannel)i3, (URI__HierarchicalURI)i4, (OOC_SymbolTable__Module)i1, (OOC_Config_Repositories__Section)i6, (ADT_Dictionary__Dictionary)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22538)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22577)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i2);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22627)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22987)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23548))+4);
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i1, 0u, 1u, 0u, 0u, (Object__String)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23650)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l9;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23700)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i1, 3, 1u);
  outputChannel = (IO__ByteChannel)i2;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23825)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 3, 0u);
  i3 = (OOC_INT32)symTab;
  i4 = (OOC_INT32)OOC_Config__repositories;
  OOC_SymbolTable_InterfaceXML__Write((IO__ByteChannel)i2, (URI__HierarchicalURI)i1, (OOC_SymbolTable__Module)i3, (OOC_Config_Repositories__Section)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23944)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i2);
l9:
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23988)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24038)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24526)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.xsl", 30);
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
      _failed_function(24374); return 0;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25015)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 4);
  success = i0;
  if (!i0) goto l18;
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 5, 4);
  if (!i1) goto l18;
  exit = 0;
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)OOC_Make__RulesDesc_UpdateInterfaceHTML_GetSystemId((OOC_Config_Repositories__Section)i0);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25243)))), &_td_URI_Scheme_File__URIDesc, 25243)), 25247)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25243)))), &_td_URI_Scheme_File__URIDesc, 25243)), (void*)(OOC_INT32)str, 4096);
  Strings__Insert(" ", 2, 0, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)OOC_Config__xsltproc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25339))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25358)))), &_td_Config_Value_String__ValueDesc, 25358)), 25364));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25339))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25358)))), &_td_Config_Value_String__ValueDesc, 25358)), 25364));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 25371)), 0);
  Strings__Insert((void*)(_check_pointer(i1, 25371)), i0, 0, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25436)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 4, 1u);
  uri = (URI__URI)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25493)))), &_td_URI_Scheme_File__URIDesc, 25493)), 25497)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25493)))), &_td_URI_Scheme_File__URIDesc, 25493)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 4096);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 4096);
  Strings__Append(" >", 3, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25652)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, 1u);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25708)))), &_td_URI_Scheme_File__URIDesc, 25708)), 25712)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25708)))), &_td_URI_Scheme_File__URIDesc, 25708)), (void*)(OOC_INT32)path, 1024);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 4096);
  OS_Path__dirname((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)path, 1024);
  OS_Files__makedirs((void*)(OOC_INT32)path, 1024, 511, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0==0;
  if (!i0) goto l9;
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  exit = i0;
l9:
  i0 = (OOC_INT32)res;
  i0 = i0!=0;
  if (!i0) goto l12;
  i0 = (OOC_INT32)OOC_Error__NewList("", 1);
  errList = (OOC_Error__List)i0;
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26113)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
l12:
  i0 = (OOC_INT32)res;
  i0 = i0==0;
  if (i0) goto l15;
  i0=0u;
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
  return 1u;
  goto l8;
l6:
  i1 = (OOC_INT32)r;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26541)))), OOC_Make__RulesDesc_CompileModule)),OOC_Make__RulesDesc_CompileModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  return i0;
l8:
  _failed_function(26274); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateHeaderFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27107)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  if (i2) goto l3;
  return 0u;
  goto l19;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27162))+20);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27175)), 0);
  i3 = 0<i2;
  if (!i3) goto l18;
  i3=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27201))+20);
  i4 = _check_pointer(i4, 27214);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)((i4+((_check_index(i3, i5, OOC_UINT32, 27214))*16))+8);
  i4 = !i4;
  if (i4) goto l9;
  i4=0u;
  goto l11;
l9:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27256))+20);
  i4 = _check_pointer(i4, 27269);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 27269))*16))+4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27242)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i4, 13);
  i4 = !i4;
  
l11:
  if (!i4) goto l13;
  return 0u;
l13:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l6_loop;
l18:
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 13);
  return i0;
l19:
  _failed_function(26713); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateDeclFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27595)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 13);
  if (i2) goto l3;
  i0=0u;
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27815)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 12);
  if (i2) goto l3;
  return 0u;
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27870))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 27877))+44);
  i2 = i2==2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27920))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 27927))+44);
  i2 = i2==3;
  
  goto l8;
l6:
  i2=1u;
l8:
  if (i2) goto l10;
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  return i0;
  goto l12;
l10:
  OOC_Logger__ExplainMake("module\047s C code provided by user", 33);
  return 1u;
l12:
  _failed_function(27737); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateAssemblerFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28296)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  if (i2) goto l3;
  return 0u;
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28337))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28344))+44);
  i2 = i2==2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28387))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28394))+44);
  i2 = i2==3;
  
  goto l8;
l6:
  i2=1u;
l8:
  if (i2) goto l10;
  i0 = OOC_Make__UpdateCompilerOutput((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 14);
  return i0;
  goto l12;
l10:
  OOC_Logger__ExplainMake("module\047s C code provided by user", 33);
  return 1u;
l12:
  _failed_function(28214); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateObjectFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 success;
  OOC_Make__ShellCommand str;

  i0 = OOC_Config_CCompiler__HaveLibtool();
  i0 = !i0;
  if (i0) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)module;
  i0 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  i0 = !i0;
  
l4:
  i1 = (OOC_INT32)module;
  if (i0) goto l7;
  i0=0u;
  goto l9;
l7:
  i0 = OOC_Make__Exists((OOC_Repository__Module)i1, 7);
  
l9:
  if (!i0) goto l11;
  OOC_Logger__ExplainMake("no source code available, and object file exists", 49);
  return 1u;
l11:
  i0 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29741)))), OOC_Make__RulesDesc_SelectBackend)),OOC_Make__RulesDesc_SelectBackend)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  i2 = i2==3;
  if (i2) goto l22;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30269)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  success = i0;
  if (i0) goto l16;
  i2=0u;
  goto l18;
l16:
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 7, 11);
  
l18:
  if (!i2) goto l27;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30411)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30488)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 11, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30560)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 7, 1u);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, 0u, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
  goto l27;
l22:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29807)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 14);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 7, 14);
  if (!i2) goto l27;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29938)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30016)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 14, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30093)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 7, 1u);
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
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31175)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 8, 11);
  if (!i2) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31297)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31361)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 8, 1u);
  outputFile = (URI__URI)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31435)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 11, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31505)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 8, 1u);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, 1u, (void*)(OOC_INT32)str, 4096);
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32257)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l29;
l3:
  i3 = OOC_Make__Exists((OOC_Repository__Module)i1, 15);
  isUpToDate = i3;
  i = 0;
  if (i3) goto l6;
  i4=0u;
  goto l8;
l6:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32447))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 32455)), 0);
  i4 = 0!=i4;
  
l8:
  if (!i4) goto l24;
  i4=i3;i3=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32543))+20);
  i5 = _check_pointer(i5, 32551);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 32551))*4);
  i3 = i3+1;
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 15, (OOC_Repository__Module)i5, 1);
  if (!i5) goto l15;
  isUpToDate = 0u;
  i4=0u;
l15:
  i = i3;
  if (i4) goto l18;
  i5=0u;
  goto l20;
l18:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32447))+20);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 32455)), 0);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32726))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32726))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32734)), 0);
  OOC_Make_WriteMainFileC__WriteFile((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 32734)), i0);
  i0=1u;
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33057)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (!i2) goto l27;
  i3 = OOC_Make__Exists((OOC_Repository__Module)i1, 16);
  isUpToDate = i3;
  i = 0;
  if (i3) goto l5;
  i4=0u;
  goto l7;
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33255))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 33263)), 0);
  i4 = 0!=i4;
  
l7:
  if (!i4) goto l23;
  i4=i3;i3=0;
l10_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33359))+20);
  i5 = _check_pointer(i5, 33367);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 33367))*4);
  i3 = i3+1;
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 16, (OOC_Repository__Module)i5, 1);
  if (!i5) goto l14;
  isUpToDate = 0u;
  i4=0u;
l14:
  i = i3;
  if (i4) goto l17;
  i5=0u;
  goto l19;
l17:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33255))+20);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 33263)), 0);
  i5 = i3!=i5;
  
l19:
  if (i5) goto l10_loop;
l22:
  i3=i4;
l23:
  i3 = !i3;
  if (!i3) goto l27;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33550))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33550))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 33558)), 0);
  OOC_Make_WriteMainFileAssembler__WriteFile((OOC_Repository__Module)i1, (void*)(_check_pointer(i3, 33558)), i0);
l27:
  return i2;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainObjectFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 success;
  OOC_Make__ShellCommand str;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 34008));
  i1 = i1==3;
  if (i1) goto l7;
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34570)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 15);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 17, 15);
  if (!i2) goto l12;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34697)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 17);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34778)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 15, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34850)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 17, 1u);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, 0u, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
  goto l12;
l7:
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34060)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 16);
  success = i0;
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 17, 16);
  if (!i2) goto l12;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34227)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 17);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34309)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 16, 1u);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34390)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 17, 1u);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35448))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35455))+48);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35434)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
      
      goto l5;
l3:
      i0=1u;
l5:
      if (i0) goto l7;
      i0=0u;
      goto l9;
l7:
      i0 = (OOC_INT32)dict;
      i1 = (OOC_INT32)module;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35487)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      
l9:
      if (!i0) goto l22;
      i0 = (OOC_INT32)dict;
      i1 = (OOC_INT32)module;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35520)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35580))+20);
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 35593)), 0);
      i2 = 0<i0;
      if (!i2) goto l21;
      i2=0;
l13_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35621))+20);
      i3 = _check_pointer(i3, 35634);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i2, i4, OOC_UINT32, 35634))*16))+8);
      i3 = !i3;
      if (!i3) goto l16;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35677))+20);
      i3 = _check_pointer(i3, 35690);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 35690))*16))+4);
      _assert((i3!=(OOC_INT32)0), 127, 35664);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35735))+20);
      i3 = _check_pointer(i3, 35748);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 35748))*16))+4);
      OOC_Make__ModuleClosure_Closure((OOC_Repository__Module)i3);
l16:
      i2 = i2+1;
      i = i2;
      i3 = i2<i0;
      if (i3) goto l13_loop;
l21:
      i0 = (OOC_INT32)list;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35802)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 35999))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ModuleList.baseTypes[0], i1);
  a = (OOC_Make__ModuleList)i1;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 36029))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 36047);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36058));
  i6 = _check_pointer(i6, 36064);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 36064))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 36047))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 36072)))), &_td_OOC_Repository__ModuleDesc, 36072));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36723)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)dict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36756)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36816))+20);
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36829)), 0);
      i2 = 0<i0;
      if (!i2) goto l13;
      i2=0;
l5_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36857))+20);
      i3 = _check_pointer(i3, 36870);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i2, i4, OOC_UINT32, 36870))*16))+8);
      i3 = !i3;
      if (!i3) goto l8;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36913))+20);
      i3 = _check_pointer(i3, 36926);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 36926))*16))+4);
      _assert((i3!=(OOC_INT32)0), 127, 36900);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36971))+20);
      i3 = _check_pointer(i3, 36984);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 36984))*16))+4);
      OOC_Make__RulesDesc_UpdateExecutable_Closure((OOC_Repository__Module)i3);
l8:
      i2 = i2+1;
      i = i2;
      i3 = i2<i0;
      if (i3) goto l5_loop;
l13:
      i0 = (OOC_INT32)list;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37038)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
l14:
      return;
      ;
    }


  success = 0u;
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37168)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  if (i2) goto l3;
  i0=0u;
  goto l44;
l3:
  i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 37456))+20) = i2;
  isUpToDate = 1u;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37554))+20);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 37562)), 0);
  i3 = 0<i2;
  if (i3) goto l6;
  i2=1u;
  goto l32;
l6:
  i3=0;i4=1u;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37583))+20);
  i5 = _check_pointer(i5, 37591);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37591))*4);
  i5 = *(OOC_INT8*)((_check_pointer(i5, 37594))+16);
  i5 = i5==4;
  if (i5) goto l10;
  i5=0u;
  goto l12;
l10:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37645))+20);
  i5 = _check_pointer(i5, 37653);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37653))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 37656))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 37663))+48);
  i5 = i5!=(OOC_INT32)0;
  
l12:
  if (i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37841))+20);
  i5 = _check_pointer(i5, 37849);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37849))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 37852))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37841))+20);
  i6 = _check_pointer(i6, 37849);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 37849))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 37852))+12);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 37859)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i6);
  if (i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37972))+20);
  i5 = _check_pointer(i5, 37980);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 37980))*4);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37963)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i5, 7);
  i5 = !i5;
  if (i5) goto l22;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38121))+20);
  i5 = _check_pointer(i5, 38129);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 38129))*4);
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 18, (OOC_Repository__Module)i5, 7);
  if (!i5) goto l27;
  isUpToDate = 0u;
  i4=0u;
  goto l27;
l22:
  return 0u;
  
l27:
  i3 = i3+1;
  i = i3;
  i5 = i3<i2;
  if (i5) goto l7_loop;
l31:
  i2=i4;
l32:
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38231)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 17);
  i3 = !i3;
  if (!i3) goto l36;
  return 0u;
l36:
  if (i2) goto l38;
  i2=0u;
  goto l39;
l38:
  i2 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 18, 17);
  i2 = !i2;
  
l39:
  isUpToDate = i2;
  if (i2) goto l42;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38575))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38575))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 38583)), 0);
  i0 = OOC_Make_LinkProgramC__Run((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 38583)), i0, (Object__String)(OOC_INT32)0);
  
  goto l44;
l42:
  i0=1u;
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 39337));
  *(OOC_INT32*)((_check_pointer(i0, 39311))+16) = i2;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39545)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l32;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39641))+4);
  i3 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)i3);
  closure = (OOC_Make__ModuleList)i3;
  *(OOC_INT32*)((_check_pointer(i0, 39663))+20) = i3;
  i4 = OOC_Make__Exists((OOC_Repository__Module)i1, 19);
  isUpToDate = i4;
  i = 0;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 39829)), 0);
  i6 = 0<i5;
  if (!i6) goto l24;
  i6=i4;i4=0;
l7_loop:
  i7 = _check_pointer(i3, 39855);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 39855))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 39858))+12);
  i8 = _check_pointer(i3, 39855);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 39855))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 39858))+12);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 39865)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i8);
  if (i7) goto l19;
  i7 = _check_pointer(i3, 39938);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 39938))*4);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39923)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i7, 8);
  i7 = !i7;
  if (i7) goto l16;
  i7 = _check_pointer(i3, 40085);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 40085))*4);
  i7 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 19, (OOC_Repository__Module)i7, 8);
  if (!i7) goto l19;
  isUpToDate = 0u;
  i6=0u;
  goto l19;
l16:
  return 0u;
  
l19:
  i4 = i4+1;
  i = i4;
  i7 = i4<i5;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40591))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i3, 40587)), 0);
  i0 = OOC_Make_LinkProgramC__Run((OOC_Repository__Module)i1, (void*)(_check_pointer(i3, 40587)), i2, (Object__String)i0);
  
  goto l32;
l29:
  i0=1u;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40961)))), OOC_Make__RulesDesc_GetModuleInfo)),OOC_Make__RulesDesc_GetModuleInfo)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  mInfo = (OOC_Make__ModuleInfo)i2;
  i3 = fileId;
  i4 = *(OOC_UINT8*)((_check_pointer(i2, 40997))+(_check_index(i3, 21, OOC_UINT8, 41005)));
  if (i4) goto l26;
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 41172))+24);
  i4 = _in(i3,i4);
  if (i4) goto l24;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41354))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41354))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 41359)), 0);
  OOC_Logger__EnterMake((void*)(_check_pointer(i4, 41359)), i5, (void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 41373))*24)), 24);
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 41401))+24);
  *(OOC_UINT32*)((_check_pointer(i1, 41401))+24) = (_set_bit(i4,i3));
  switch (i3) {
  case 18:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41490)))), OOC_Make__RulesDesc_UpdateExecutable)),OOC_Make__RulesDesc_UpdateExecutable)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 19:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41557)))), OOC_Make__RulesDesc_UpdateLibrary)),OOC_Make__RulesDesc_UpdateLibrary)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 17:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41628)))), OOC_Make__RulesDesc_UpdateMainObjectFile)),OOC_Make__RulesDesc_UpdateMainObjectFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 15:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41701)))), OOC_Make__RulesDesc_UpdateMainFileC)),OOC_Make__RulesDesc_UpdateMainFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 16:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41777)))), OOC_Make__RulesDesc_UpdateMainFileAssembler)),OOC_Make__RulesDesc_UpdateMainFileAssembler)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 7:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41854)))), OOC_Make__RulesDesc_UpdateObjectFile)),OOC_Make__RulesDesc_UpdateObjectFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 8:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41927)))), OOC_Make__RulesDesc_UpdateObjectFileLib)),OOC_Make__RulesDesc_UpdateObjectFileLib)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 11:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41999)))), OOC_Make__RulesDesc_UpdateCodeFileC)),OOC_Make__RulesDesc_UpdateCodeFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 12:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42067)))), OOC_Make__RulesDesc_UpdateDeclFileC)),OOC_Make__RulesDesc_UpdateDeclFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 13:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42137)))), OOC_Make__RulesDesc_UpdateHeaderFileC)),OOC_Make__RulesDesc_UpdateHeaderFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 14:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42211)))), OOC_Make__RulesDesc_UpdateAssemblerFile)),OOC_Make__RulesDesc_UpdateAssemblerFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 4:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42288)))), OOC_Make__RulesDesc_UpdateInterfaceDescr)),OOC_Make__RulesDesc_UpdateInterfaceDescr)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 3:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42364)))), OOC_Make__RulesDesc_UpdateInterfaceXML)),OOC_Make__RulesDesc_UpdateInterfaceXML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 5:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42439)))), OOC_Make__RulesDesc_UpdateInterfaceHTML)),OOC_Make__RulesDesc_UpdateInterfaceHTML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 2:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42516)))), OOC_Make__RulesDesc_UpdateSymbolTableXML)),OOC_Make__RulesDesc_UpdateSymbolTableXML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 1:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42590)))), OOC_Make__RulesDesc_UpdateSymbolFile)),OOC_Make__RulesDesc_UpdateSymbolFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  default:
    _failed_case(i3, 41432);
    goto l23;
  }
l23:
  *(OOC_UINT8*)((_check_pointer(i2, 42639))+(_check_index(i3, 21, OOC_UINT8, 42647))) = 1u;
  i0 = res;
  *(OOC_UINT8*)(((_check_pointer(i2, 42676))+21)+(_check_index(i3, 21, OOC_UINT8, 42689))) = i0;
  i2 = *(OOC_UINT32*)((_check_pointer(i1, 42723))+24);
  *(OOC_UINT32*)((_check_pointer(i1, 42723))+24) = (_clear_bit(i2,i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42783))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42783))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 42788)), 0);
  i0 = OOC_Logger__ExitMake((void*)(_check_pointer(i2, 42788)), i1, (void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 42802))*24)), 24, i0);
  return i0;
  goto l27;
l24:
  Out__String("Error: Cyclic dependency in module ", 36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41273))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41273))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 41278)), 0);
  Out__String((void*)(_check_pointer(i0, 41278)), i1);
  Out__Ln();
  return 0u;
  goto l27;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41108))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41108))+4);
  i2 = *(OOC_UINT8*)(((_check_pointer(i2, 41121))+21)+(_check_index(i3, 21, OOC_UINT8, 41134)));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 41113)), 0);
  i0 = OOC_Logger__CachedMake((void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 41061))*24)), 24, (void*)(_check_pointer(i0, 41113)), i1, i2);
  return i0;
l27:
  _failed_function(40818); return 0;
  ;
}

void OOC_OOC_Make_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)StringSearch_NoMatch__matcher;
  OOC_Make__inspectProc = (StringSearch__Matcher)i0;
  OOC_Make__inspectStage = (StringSearch__Matcher)i0;
  OOC_Make__writeAST = 0u;
  OOC_Make__writeIR = 0u;
  OOC_Make__writeStats = 0u;
  OOC_Make__stylesheetSystemId = (URI__URI)(OOC_INT32)0;
  _copy_8((const void*)"Executable",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(18, 21, OOC_UINT8, 43026))*24)),24);
  _copy_8((const void*)"Library",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(19, 21, OOC_UINT8, 43076))*24)),24);
  _copy_8((const void*)"MainObjectFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(17, 21, OOC_UINT8, 43120))*24)),24);
  _copy_8((const void*)"MainFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(15, 21, OOC_UINT8, 43178))*24)),24);
  _copy_8((const void*)"ObjectFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(7, 21, OOC_UINT8, 43226))*24)),24);
  _copy_8((const void*)"ObjectFileLib",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(8, 21, OOC_UINT8, 43276))*24)),24);
  _copy_8((const void*)"CodeFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(11, 21, OOC_UINT8, 43332))*24)),24);
  _copy_8((const void*)"DeclFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(12, 21, OOC_UINT8, 43380))*24)),24);
  _copy_8((const void*)"HeaderFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(13, 21, OOC_UINT8, 43428))*24)),24);
  _copy_8((const void*)"InterfaceDescr",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(4, 21, OOC_UINT8, 43480))*24)),24);
  _copy_8((const void*)"InterfaceXML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(3, 21, OOC_UINT8, 43538))*24)),24);
  _copy_8((const void*)"InterfaceHTML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(5, 21, OOC_UINT8, 43592))*24)),24);
  _copy_8((const void*)"SymbolFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(1, 21, OOC_UINT8, 43648))*24)),24);
  _copy_8((const void*)"SymbolTableXML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(2, 21, OOC_UINT8, 43698))*24)),24);
  _copy_8((const void*)"AssemblerFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(14, 21, OOC_UINT8, 43756))*24)),24);
  _copy_8((const void*)"MainFileAssembler",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(16, 21, OOC_UINT8, 43812))*24)),24);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ErrorContext.baseTypes[0]);
  OOC_Make__makeContext = (OOC_Make__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Make", 9);
  return;
  ;
}

/* --- */
