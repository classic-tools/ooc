#include <OOC/Make.d>
#include <__oo2c.h>

void OOC_Make__ErrorContextDesc_GetTemplate(OOC_Make__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4571))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,108,111,99,97,116,101,32,109,111,100,117,108,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){77,111,100,117,108,101,32,105,115,32,97,108,114,101,97,100,121,32,112,97,114,116,32,111,102,32,108,105,98,114,97,114,121,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  default:
    _failed_case(i1, 4563);
    goto l5;
  }
l5:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4750)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Make__InitRules(OOC_Make__Rules r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 4848)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 4880))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4906))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4935))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 4976))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5006))+20) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 5028))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 5061))+28) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 5089))+32) = OOC_TRUE;
  i1 = (OOC_INT32)StdChannels__stdout;
  *(OOC_INT32*)((_check_pointer(i0, 5123))+36) = i1;
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
  *(OOC_INT32*)(_check_pointer(i0, 5357)) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetLibraryName(OOC_Make__Rules r, Object__String name, Object__String version) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 5587))+4) = i1;
  i1 = (OOC_INT32)version;
  *(OOC_INT32*)((_check_pointer(i0, 5614))+8) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetAllImportsModule(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 5741))+12) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetErrOut(OOC_Make__Rules r, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)((_check_pointer(i0, 5871))+36) = i1;
  return;
  ;
}

void OOC_Make__RulesDesc_SetExtensionDict(OOC_Make__Rules r, ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)dict;
  *(OOC_INT32*)((_check_pointer(i0, 5986))+28) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_CheckAllImports(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6321))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6364))+12);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6577))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6577))+24);
  i3 = (OOC_INT32)module;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6583)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l8;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ModuleInfo.baseTypes[0]);
  mInfo = (OOC_Make__ModuleInfo)i1;
  i = 0;
  i2=0;
l3_loop:
  *(OOC_UINT8*)((_check_pointer(i1, 6747))+(_check_index(i2, 21, OOC_UINT32, 6755))) = OOC_FALSE;
  *(OOC_UINT8*)(((_check_pointer(i1, 6782))+21)+(_check_index(i2, 21, OOC_UINT32, 6795))) = OOC_FALSE;
  i2 = i2+1;
  i = i2;
  i4 = i2<=20;
  if (i4) goto l3_loop;
l7:
  *(OOC_UINT8*)((_check_pointer(i1, 6831))+42) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i1, 6862))+43) = OOC_FALSE;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6894))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6894))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6900)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  i0=i1;
  goto l9;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6618))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6618))+24);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6624)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6657)))), &_td_OOC_Make__ModuleInfoDesc, 6657);
  
l9:
  return (OOC_Make__ModuleInfo)i0;
  ;
}

static OOC_CHAR8 OOC_Make__Exists(OOC_Repository__Module module, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)module;
  i1 = fileId;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7059)))), OOC_Repository__ModuleDesc_FileExists)),OOC_Repository__ModuleDesc_FileExists)((OOC_Repository__Module)i0, i1);
  if (i2) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7234)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " does not exist", 16);
  return OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7127)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " exists", 8);
  return OOC_TRUE;
l4:
  _failed_function(6980); return 0;
  ;
}

static OOC_CHAR8 OOC_Make__DerivedIsOlder2(OOC_Repository__Module descendentModule, OOC_INT8 descendent, OOC_Repository__Module ancestorModule, OOC_INT8 ancestor) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  struct Time__TimeStamp tsDesc;
  struct Time__TimeStamp tsAncest;

  i0 = (OOC_INT32)descendentModule;
  i1 = descendent;
  i2 = (OOC_INT32)&_td_Time__TimeStamp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7882)))), OOC_Repository__ModuleDesc_GetTimeStamp)),OOC_Repository__ModuleDesc_GetTimeStamp)((OOC_Repository__Module)i0, i1, (void*)(OOC_INT32)&tsDesc, (RT0__Struct)i2);
  i3 = *(OOC_INT32*)(OOC_INT32)&tsDesc;
  i3 = i3==2147483647;
  if (i3) goto l7;
  i3 = (OOC_INT32)ancestorModule;
  i4 = ancestor;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8136)))), OOC_Repository__ModuleDesc_GetTimeStamp)),OOC_Repository__ModuleDesc_GetTimeStamp)((OOC_Repository__Module)i3, i4, (void*)(OOC_INT32)&tsAncest, (RT0__Struct)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(i2, Time__TimeStamp_Cmp)),Time__TimeStamp_Cmp)((void*)(OOC_INT32)&tsDesc, (RT0__Struct)i2, (void*)(OOC_INT32)&tsAncest);
  i2 = i2>=0;
  if (i2) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8472)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8556)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i3, i4, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("ts(", 4, (URI__URI)i0, ") < ts(", 8, (URI__URI)i1, ")", 2);
  return OOC_TRUE;
  goto l8;
l5:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8268)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8353)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i3, i4, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("ts(", 4, (URI__URI)i0, ") >= ts(", 9, (URI__URI)i1, ")", 2);
  return OOC_FALSE;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8012)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_TRUE);
  OOC_Logger__ExplainFileMake("file ", 6, (URI__URI)i0, " does not exist", 16);
  return OOC_TRUE;
l8:
  _failed_function(7331); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9387)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, OOC_TRUE);
  i1 = (OOC_INT32)ancestorModule;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9476)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 1, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("fp(", 4, (URI__URI)i0, ") # fp(", 8, (URI__URI)i1, ")", 2);
  return OOC_TRUE;
  goto l4;
l3:
  i0 = (OOC_INT32)descendentModule;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9176)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, OOC_TRUE);
  i1 = (OOC_INT32)ancestorModule;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9265)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 1, OOC_TRUE);
  OOC_Logger__ExplainFilesMake("fp(", 4, (URI__URI)i0, ") = fp(", 8, (URI__URI)i1, ")", 2);
  return OOC_FALSE;
l4:
  _failed_function(8849); return 0;
  ;
}

static OOC_Error__List OOC_Make__CreateErrList(OOC_Repository__Module module) {
  register OOC_INT32 i0;
  URI__URI uri;
  OOC_Repository__URIBuffer uriStr;

  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9705)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9748)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)uriStr, 1024);
  i0 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)uriStr, 1024);
  return (OOC_Error__List)i0;
  ;
}

void OOC_Make__RulesDesc_WriteErrList(OOC_Make__Rules r, OOC_Error__List errList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)errList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9907));
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9948))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9940)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10143)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10162)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i0);
  return;
  ;
}

static void OOC_Make__WriteImports(OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_Repository__Module import;

  i0 = (OOC_INT32)module;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10347))+16);
  _assert((i1>=2), 127, 10334);
  Out__String("> IMPORT of ", 13);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10428))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10428))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10433)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i1, 10433)), i2);
  Out__Ln();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10473))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10486)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l12;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)OOC_Config__repositories;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10546))+20);
  i4 = _check_pointer(i4, 10559);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 10559))*16));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10567))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10546))+20);
  i5 = _check_pointer(i5, 10559);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i2, i6, OOC_UINT32, 10559))*16));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10567))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10571)), (OOC_INT32)0);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10529)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i4, 10571)), i5);
  import = (OOC_Repository__Module)i3;
  i4 = i3==(OOC_INT32)0;
  if (i4) goto l6;
  Out__String("> ", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10778))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10778))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 10783)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i4, 10783)), i3);
  Out__Ln();
  goto l7;
l6:
  Out__String("> no such module: ", 19);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10671))+20);
  i3 = _check_pointer(i3, 10684);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 10684))*16));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10692))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10671))+20);
  i4 = _check_pointer(i4, 10684);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 10684))*16));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10692))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 10696)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i3, 10696)), i4);
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
  register OOC_INT32 i0,i1,i2,i3;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  OOC_Error__List errList;
  Msg__Msg res;
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
  if (i1) goto l18;
  i1 = OOC_Make__Exists((OOC_Repository__Module)i0, 0);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i0, 1, 0);
  
l7:
  if (i1) goto l13;
  i1 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13547)))), OOC_Repository__ModuleDesc_ReadSymbolFile)),OOC_Repository__ModuleDesc_ReadSymbolFile)((OOC_Repository__Module)i0, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2!=(OOC_INT32)0;
  symTab = (OOC_SymbolTable__Module)i1;
  if (i3) goto l11;
  i2 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13736)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i2, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13649)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i1, 3, i2);
  i1 = (OOC_INT32)symTab;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13799))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13777)))), OOC_Repository__ModuleDesc_SetFingerprint)),OOC_Repository__ModuleDesc_SetFingerprint)((OOC_Repository__Module)i0, i1);
  goto l19;
l11:
  i0 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13610)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
  goto l19;
l13:
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13096))+4);
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i0, OOC_FALSE, OOC_FALSE, OOC_FALSE, OOC_TRUE, (Object__String)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13194)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l19;
  i2 = (OOC_INT32)symTab;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13301)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13225)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i2, 2, i1);
  goto l19;
l18:
  OOC_Logger__ExplainMake("using cached value", 19);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12706))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12706))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12711)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake("GetImports", 11, (void*)(_check_pointer(i1, 12711)), i0, OOC_TRUE);
  return i0;
l19:
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13849)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l22;
  OOC_Make__RulesDesc_GetImports_ResolveNames();
l22:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13907)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13978))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13978))+4);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13993)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13983)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake("GetImports", 11, (void*)(_check_pointer(i1, 13983)), i0, i2);
  return i0;
  ;
}

OOC_INT32 OOC_Make__RulesDesc_SelectBackend(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 b;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 14245));
  b = i1;
  i2 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14263)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i2);
  if (i0) goto l3;
  i0=i1;
  goto l16;
l3:
  i0 = i1==3;
  if (i0) goto l6;
  i0=OOC_FALSE;
  goto l12;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14339))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 14346))+44);
  i0 = i0==2;
  if (i0) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14390))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 14397))+44);
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15875)))), OOC_Make__RulesDesc_GetModuleInfo)),OOC_Make__RulesDesc_GetModuleInfo)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  mInfo = (OOC_Make__ModuleInfo)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 15911))+42);
  if (i3) goto l29;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16073))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16073))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16078)), (OOC_INT32)0);
  OOC_Logger__EnterMake("CompileModule", 14, (void*)(_check_pointer(i2, 16078)), i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16105))+4);
  i3 = i2!=(OOC_INT32)0;
  libraryName = (Object__String)i2;
  if (i3) goto l5;
  i3=OOC_FALSE;
  goto l7;
l5:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16157));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16168))+16);
  i3 = i3!=i4;
  
l7:
  if (!i3) goto l10;
  libraryName = (Object__String)(OOC_INT32)0;
  i2=(OOC_INT32)0;
l10:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16515)))), OOC_Make__RulesDesc_SelectBackend)),OOC_Make__RulesDesc_SelectBackend)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
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
    _failed_case(i0, 16509);
    goto l17;
  }
l17:
  i0 = (OOC_INT32)errList;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16864)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
  goto l21;
l20:
  i1=OOC_TRUE;
l21:
  success = i1;
  i2 = (OOC_INT32)r;
  i3 = (OOC_INT32)module;
  if (!i1) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16970)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i3, (OOC_SymbolTable__Module)(OOC_INT32)0, 1, OOC_TRUE);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17041)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i2, (OOC_Repository__Module)i3);
  success = i1;
  if (!i1) goto l28;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17126))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17102)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i3, (OOC_SymbolTable__Module)i4, 4, OOC_TRUE);
l28:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17196)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i2, (OOC_Error__List)i0);
  i0 = (OOC_INT32)mInfo;
  *(OOC_UINT8*)((_check_pointer(i0, 17238))+42) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 17268))+43) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17347))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17347))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17352)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake("CompileModule", 14, (void*)(_check_pointer(i0, 17352)), i2, i1);
  return i0;
  goto l30;
l29:
  OOC_Logger__ExplainMake("cached result: CompileModule", 29);
  i0 = *(OOC_UINT8*)((_check_pointer(i2, 16002))+43);
  return i0;
l30:
  _failed_function(14534); return 0;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 17609))+16);
  i1 = i1==4;
  if (i1) goto l57;
  i1 = (OOC_INT32)r;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17719)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18040))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18069));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18080))+16);
  i3 = i3==i4;
  
l13:
  if (!i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18121))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18128))+48);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l21;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18425))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18432))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18425))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18432))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18453))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18444)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i4, (Object__Object)i5);
  i3 = !i3;
  if (!i3) goto l23;
  i3 = (OOC_INT32)OOC_Make__makeContext;
  i3 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i3, 2);
  err = (Msg__Msg)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18744))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18751))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18744))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18751))+48);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18771)))), &_td_Object__String8Desc, 18771)), 18779)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18771)))), &_td_Object__String8Desc, 18771)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18857)), (OOC_INT32)0);
  i4 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 18857)), i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18808)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i3, "name", 5, (Msg__StringPtr)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18873)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, (Msg__Msg)i3);
  return OOC_FALSE;
  goto l23;
l21:
  OOC_Logger__ExplainMake("module is not part of a library", 32);
  isUpToDate = OOC_FALSE;
  i2=OOC_FALSE;
l23:
  i = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19143))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19156)), (OOC_INT32)0);
  i3 = 0!=i3;
  if (!i3) goto l44;
  i3=i2;i2=0;
l27_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19181))+20);
  i4 = _check_pointer(i4, 19194);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)((i4+((_check_index(i2, i5, OOC_UINT32, 19194))*16))+8);
  i4 = !i4;
  if (!i4) goto l38;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19240))+20);
  i4 = _check_pointer(i4, 19253);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 19253))*16))+4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19226)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i4, 1);
  if (i4) goto l33;
  return OOC_FALSE;
  
  goto l38;
l33:
  if (i3) goto l35;
  i3=OOC_FALSE;
  goto l36;
l35:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19680))+20);
  i3 = _check_pointer(i3, 19693);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19753))+20);
  i5 = _check_pointer(i5, 19766);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19821))+20);
  i7 = _check_pointer(i7, 19834);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i2, i8, OOC_UINT32, 19834))*16))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 19844))+12);
  i3 = *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 19693))*16))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 19766))*16))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i7, 19851))+60);
  i3 = OOC_Make__FingerprintMismatch((OOC_Repository__Module)i0, i3, (OOC_Repository__Module)i4, i5);
  i3 = !i3;
  
l36:
  isUpToDate = i3;
  
l38:
  i2 = i2+1;
  i = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19143))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19156)), (OOC_INT32)0);
  i4 = i2!=i4;
  if (i4) goto l27_loop;
l42:
  i2=i3;
l44:
  if (i2) goto l46;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20321)))), OOC_Make__RulesDesc_CompileModule)),OOC_Make__RulesDesc_CompileModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  isUpToDate = i2;
  
  goto l48;
l46:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20140))+12);
  _assert((i3!=(OOC_INT32)0), 127, 20127);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20194))+12);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20260)))), OOC_Make__RulesDesc_CheckAllImports)),OOC_Make__RulesDesc_CheckAllImports)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20170)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i0, (OOC_SymbolTable__Module)i3, 4, i4);
  
l48:
  if (i2) goto l50;
  i0=i2;
  goto l55;
l50:
  i3 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i0);
  errList = (OOC_Error__List)i3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20470))+12);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i0, (OOC_Error__List)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20498)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i3);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20541)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i3);
  i0 = !i0;
  if (i0) goto l53;
  i0=i2;
  goto l55;
l53:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20569)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i1, (OOC_Error__List)i3);
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

  _assert(OOC_FALSE, 127, 20868);
  return OOC_FALSE;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateInterfaceDescr(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_CHAR8 success;
  OOC_Error__List errList;
  Channel__Channel outputChannel;
  Msg__Msg res;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21130)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l15;
l3:
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 4, 1);
  if (i3) goto l6;
  i0=i2;
  goto l15;
l6:
  i2 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i1);
  errList = (OOC_Error__List)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21869))+12);
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i3, (OOC_Error__List)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21921))+12);
  OOC_Doc_ResolveRef__Resolve((OOC_SymbolTable__Module)i3, (OOC_Error__List)i2);
  i3 = *(OOC_INT32*)(_check_pointer(i2, 21963));
  _assert((i3==0), 127, 21948);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22019)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i1, 4, OOC_TRUE, (void*)(OOC_INT32)&res);
  i4 = i3==(OOC_INT32)0;
  outputChannel = (Channel__Channel)i3;
  if (i4) goto l12;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22199)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i3);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22251)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 4, OOC_FALSE);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22392))+28);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22329))+12);
  i7 = (OOC_INT32)OOC_Config__repositories;
  OOC_SymbolTable_InterfaceDescr__Write((Channel__Writer)i4, (URI__HierarchicalURI)i5, (OOC_SymbolTable__Module)i1, (OOC_Config_Repositories__Section)i7, (ADT_Dictionary__Dictionary)i6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22439)))), &_td_Files__FileDesc, 22439)), 22444)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22439)))), &_td_Files__FileDesc, 22439)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22478)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 22513));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 22580));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22558)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i2, (Msg__Msg)i1);
  goto l13;
l12:
  i1 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22127)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i2, (Msg__Msg)i1);
l13:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22623)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i2);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22673)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  
l15:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateInterfaceXML(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_CHAR8 success;
  OOC_Error__List errList;
  OOC_AST__Node ast;
  OOC_SymbolTable__Module symTab;
  OOC_Config_Pragmas__History pragmaHistory;
  Channel__Channel outputChannel;
  Msg__Msg res;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23036)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l18;
l3:
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 3, 1);
  if (i3) goto l6;
  i0=i2;
  goto l18;
l6:
  i2 = (OOC_INT32)OOC_Make__CreateErrList((OOC_Repository__Module)i1);
  errList = (OOC_Error__List)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23597))+4);
  OOC_Auxiliary_ParseModule__ParseModule((OOC_Repository__Module)i1, OOC_FALSE, OOC_TRUE, OOC_FALSE, OOC_FALSE, (Object__String)i2, (void*)(OOC_INT32)&ast, (void*)(OOC_INT32)&symTab, (void*)(OOC_INT32)&pragmaHistory, (void*)(OOC_INT32)&errList);
  i2 = (OOC_INT32)errList;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23699)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i2);
  if (!i2) goto l16;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23749)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i1, 3, OOC_TRUE, (void*)(OOC_INT32)&res);
  i3 = i2==(OOC_INT32)0;
  outputChannel = (Channel__Channel)i2;
  if (i3) goto l14;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23931)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23982)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 3, OOC_FALSE);
  i4 = (OOC_INT32)symTab;
  i5 = (OOC_INT32)OOC_Config__repositories;
  OOC_SymbolTable_InterfaceXML__Write((Channel__Writer)i3, (URI__HierarchicalURI)i1, (OOC_SymbolTable__Module)i4, (OOC_Config_Repositories__Section)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24112)))), &_td_Files__FileDesc, 24112)), 24117)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24112)))), &_td_Files__FileDesc, 24112)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24153)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 24190));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l16;
  i1 = (OOC_INT32)errList;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 24258));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24237)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i2);
  goto l16;
l14:
  i1 = (OOC_INT32)errList;
  i2 = (OOC_INT32)res;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23859)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i2);
l16:
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24317)))), OOC_Make__RulesDesc_WriteErrList)),OOC_Make__RulesDesc_WriteErrList)((OOC_Make__Rules)i0, (OOC_Error__List)i1);
  i0 = (OOC_INT32)errList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24367)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  
l18:
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24839)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.xsl", 30);
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
      _failed_function(24687); return 0;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25328)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 4);
  success = i0;
  if (!i0) goto l18;
  i1 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 5, 4);
  if (!i1) goto l18;
  i0 = (OOC_INT32)OOC_Config__repositories;
  exit = 0;
  i0 = (OOC_INT32)OOC_Make__RulesDesc_UpdateInterfaceHTML_GetSystemId((OOC_Config_Repositories__Section)i0);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25556)))), &_td_URI_Scheme_File__URIDesc, 25556)), 25560)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25556)))), &_td_URI_Scheme_File__URIDesc, 25556)), (void*)(OOC_INT32)str, 4096);
  Strings__Insert(" ", 2, 0, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)OOC_Config__xsltproc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25652))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25671)))), &_td_Config_Value_String__ValueDesc, 25671)), 25677));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25652))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25671)))), &_td_Config_Value_String__ValueDesc, 25671)), 25677));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 25684)), 0);
  Strings__Insert((void*)(_check_pointer(i1, 25684)), i0, 0, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25749)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 4, OOC_TRUE);
  uri = (URI__URI)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25806)))), &_td_URI_Scheme_File__URIDesc, 25806)), 25810)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25806)))), &_td_URI_Scheme_File__URIDesc, 25806)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 4096);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 4096);
  Strings__Append(" >", 3, (void*)(OOC_INT32)str, 4096);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25965)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26021)))), &_td_URI_Scheme_File__URIDesc, 26021)), 26025)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26021)))), &_td_URI_Scheme_File__URIDesc, 26021)), (void*)(OOC_INT32)path, 1024);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26426)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
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
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26838)))), OOC_Make__RulesDesc_CompileModule)),OOC_Make__RulesDesc_CompileModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
  return i0;
l8:
  _failed_function(26587); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateHeaderFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27388)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  if (i2) goto l3;
  return OOC_FALSE;
  goto l19;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27443))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27456)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l18;
  i3=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27482))+20);
  i4 = _check_pointer(i4, 27495);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)((i4+((_check_index(i3, i5, OOC_UINT32, 27495))*16))+8);
  i4 = !i4;
  if (i4) goto l9;
  i4=OOC_FALSE;
  goto l11;
l9:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27537))+20);
  i4 = _check_pointer(i4, 27550);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 27550))*16))+4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27523)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i4, 13);
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
  _failed_function(27010); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateDeclFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27860)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 13);
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28064)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 12);
  if (i2) goto l3;
  return OOC_FALSE;
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28119))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28126))+44);
  i2 = i2==2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28169))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28176))+44);
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
  _failed_function(28002); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateAssemblerFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28529)))), OOC_Make__RulesDesc_GetImports)),OOC_Make__RulesDesc_GetImports)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  if (i2) goto l3;
  return OOC_FALSE;
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28570))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28577))+44);
  i2 = i2==2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28620))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 28627))+44);
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
  _failed_function(28463); return 0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateObjectFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 success;
  Msg__Msg res;
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29976)))), OOC_Make__RulesDesc_SelectBackend)),OOC_Make__RulesDesc_SelectBackend)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  i2 = i2==3;
  if (i2) goto l26;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30636)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  success = i2;
  if (i2) goto l16;
  i3=OOC_FALSE;
  goto l18;
l16:
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 7, 11);
  
l18:
  if (i3) goto l20;
  i0=i2;
  goto l35;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30778)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l23;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31165)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
  i0=OOC_FALSE;
  goto l35;
l23:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30890)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 11, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30964)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 7, OOC_TRUE);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
  goto l35;
l26:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30042)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 14);
  success = i2;
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 7, 14);
  if (i3) goto l29;
  i0=i2;
  goto l35;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30173)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l32;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30524)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
  i0=OOC_FALSE;
  goto l35;
l32:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30286)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 14, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30365)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 7, OOC_TRUE);
  OOC_Config_Assembler__AssembleFileCmd((URI__URI)i0, (URI__URI)i1, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
l35:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateObjectFileLib(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 success;
  Msg__Msg res;
  URI__URI outputFile;
  OOC_Make__ShellCommand str;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31678)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 11);
  success = i2;
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 8, 11);
  if (i3) goto l3;
  i0=i2;
  goto l8;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31800)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 7, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32238)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
  i0=OOC_FALSE;
  goto l8;
l6:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31897)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 8, OOC_TRUE);
  outputFile = (URI__URI)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31973)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 11, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32045)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 8, OOC_TRUE);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainFileC(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 success;
  OOC_CHAR8 isUpToDate;
  OOC_INT32 i;
  Msg__Msg res;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32888)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l32;
l3:
  i3 = OOC_Make__Exists((OOC_Repository__Module)i1, 15);
  isUpToDate = i3;
  i = 0;
  if (i3) goto l6;
  i4=OOC_FALSE;
  goto l8;
l6:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33078))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 33086)), (OOC_INT32)0);
  i4 = 0!=i4;
  
l8:
  if (!i4) goto l24;
  i4=i3;i3=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33174))+20);
  i5 = _check_pointer(i5, 33182);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 33182))*4);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33078))+20);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 33086)), (OOC_INT32)0);
  i5 = i3!=i5;
  
l20:
  if (i5) goto l11_loop;
l23:
  i3=i4;
l24:
  i3 = !i3;
  if (i3) goto l27;
  i0=i2;
  goto l32;
l27:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33357))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33357))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 33365)), (OOC_INT32)0);
  OOC_Make_WriteMainFileC__WriteFile((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 33365)), i3, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  success = i3;
  i4 = i2!=(OOC_INT32)0;
  if (!i4) goto l30;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33445)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
l30:
  i0=i3;
l32:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainFileAssembler(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 success;
  OOC_CHAR8 isUpToDate;
  OOC_INT32 i;
  Msg__Msg res;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33780)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l32;
l3:
  i3 = OOC_Make__Exists((OOC_Repository__Module)i1, 16);
  isUpToDate = i3;
  i = 0;
  if (i3) goto l6;
  i4=OOC_FALSE;
  goto l8;
l6:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33978))+20);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 33986)), (OOC_INT32)0);
  i4 = 0!=i4;
  
l8:
  if (!i4) goto l24;
  i4=i3;i3=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34082))+20);
  i5 = _check_pointer(i5, 34090);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 34090))*4);
  i5 = OOC_Make__DerivedIsOlder2((OOC_Repository__Module)i1, 16, (OOC_Repository__Module)i5, 1);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33978))+20);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 33986)), (OOC_INT32)0);
  i5 = i3!=i5;
  
l20:
  if (i5) goto l11_loop;
l23:
  i3=i4;
l24:
  i3 = !i3;
  if (i3) goto l27;
  i0=i2;
  goto l32;
l27:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34273))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34273))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 34281)), (OOC_INT32)0);
  OOC_Make_WriteMainFileAssembler__WriteFile((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 34281)), i3, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  success = i3;
  i4 = i2!=(OOC_INT32)0;
  if (!i4) goto l30;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34361)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
l30:
  i0=i3;
l32:
  return i0;
  ;
}

OOC_CHAR8 OOC_Make__RulesDesc_UpdateMainObjectFile(OOC_Make__Rules r, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 success;
  Msg__Msg res;
  OOC_Make__ShellCommand str;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 34848));
  i1 = i1==3;
  if (i1) goto l11;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35542)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 15);
  success = i2;
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 17, 15);
  if (i3) goto l5;
  i0=i2;
  goto l20;
l5:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35669)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 17, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l8;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36064)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
  i0=OOC_FALSE;
  goto l20;
l8:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35785)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 15, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35859)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 17, OOC_TRUE);
  OOC_Config_CCompiler__CompileFileCmd((URI__URI)i0, (URI__URI)i1, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
  goto l20;
l11:
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34900)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 16);
  success = i2;
  i3 = OOC_Make__DerivedIsOlder((OOC_Repository__Module)i1, 17, 16);
  if (i3) goto l14;
  i0=i2;
  goto l20;
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35067)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i1, 17, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)res;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l17;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35430)))), OOC_Make__RulesDesc_WriteError)),OOC_Make__RulesDesc_WriteError)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, (Msg__Msg)i2);
  i0=OOC_FALSE;
  goto l20;
l17:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35184)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 16, OOC_TRUE);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35267)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 17, OOC_TRUE);
  OOC_Config_Assembler__AssembleFileCmd((URI__URI)i0, (URI__URI)i1, (void*)(OOC_INT32)str, 4096);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
  i0 = i0==0;
  
l20:
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36554))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36561))+48);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36540)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
      
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36593)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      
l9:
      if (!i0) goto l22;
      i0 = (OOC_INT32)dict;
      i1 = (OOC_INT32)module;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36626)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36686))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36699)), (OOC_INT32)0);
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l21;
      i2=0;
l13_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36727))+20);
      i3 = _check_pointer(i3, 36740);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i2, i4, OOC_UINT32, 36740))*16))+8);
      i3 = !i3;
      if (!i3) goto l16;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36783))+20);
      i3 = _check_pointer(i3, 36796);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 36796))*16))+4);
      _assert((i3!=(OOC_INT32)0), 127, 36770);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36841))+20);
      i3 = _check_pointer(i3, 36854);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 36854))*16))+4);
      OOC_Make__ModuleClosure_Closure((OOC_Repository__Module)i3);
l16:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l13_loop;
l21:
      i0 = (OOC_INT32)list;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36908)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 37105))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ModuleList.baseTypes[0], i1);
  a = (OOC_Make__ModuleList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 37135))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 37153);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37164));
  i6 = _check_pointer(i6, 37170);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 37170))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 37153))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 37178)))), &_td_OOC_Repository__ModuleDesc, 37178));
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37813)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)dict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37846)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37906))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 37919)), (OOC_INT32)0);
      i0 = i0-1;
      i2 = 0<=i0;
      i = 0;
      if (!i2) goto l13;
      i2=0;
l5_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37947))+20);
      i3 = _check_pointer(i3, 37960);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)((i3+((_check_index(i2, i4, OOC_UINT32, 37960))*16))+8);
      i3 = !i3;
      if (!i3) goto l8;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38003))+20);
      i3 = _check_pointer(i3, 38016);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 38016))*16))+4);
      _assert((i3!=(OOC_INT32)0), 127, 37990);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38061))+20);
      i3 = _check_pointer(i3, 38074);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 38074))*16))+4);
      OOC_Make__RulesDesc_UpdateExecutable_Closure((OOC_Repository__Module)i3);
l8:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l5_loop;
l13:
      i0 = (OOC_INT32)list;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38128)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
l14:
      return;
      ;
    }


  success = OOC_FALSE;
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)module;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38258)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  if (i2) goto l3;
  i0=OOC_FALSE;
  goto l44;
l3:
  i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 38546))+20) = i2;
  isUpToDate = OOC_TRUE;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38644))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 38652)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l6;
  i2=OOC_TRUE;
  goto l32;
l6:
  i3=0;i4=OOC_TRUE;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38673))+20);
  i5 = _check_pointer(i5, 38681);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 38681))*4);
  i5 = *(OOC_INT8*)((_check_pointer(i5, 38684))+16);
  i5 = i5==4;
  if (i5) goto l10;
  i5=OOC_FALSE;
  goto l12;
l10:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38735))+20);
  i5 = _check_pointer(i5, 38743);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 38743))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38746))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38753))+48);
  i5 = i5!=(OOC_INT32)0;
  
l12:
  if (i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38931))+20);
  i5 = _check_pointer(i5, 38939);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 38939))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 38942))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38931))+20);
  i6 = _check_pointer(i6, 38939);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 38939))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 38942))+12);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 38949)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i6);
  if (i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39062))+20);
  i5 = _check_pointer(i5, 39070);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 39070))*4);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39053)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i5, 7);
  i5 = !i5;
  if (i5) goto l22;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39211))+20);
  i5 = _check_pointer(i5, 39219);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 39219))*4);
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
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39321)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 17);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39665))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39665))+20);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 39673)), (OOC_INT32)0);
  i0 = OOC_Make_LinkProgramC__Run((OOC_Repository__Module)i1, (void*)(_check_pointer(i2, 39673)), i0, (Object__String)(OOC_INT32)0);
  
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40411));
  *(OOC_INT32*)((_check_pointer(i0, 40385))+16) = i2;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40619)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
  success = i2;
  if (i2) goto l3;
  i0=i2;
  goto l32;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40715))+4);
  i3 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)i3);
  closure = (OOC_Make__ModuleList)i3;
  *(OOC_INT32*)((_check_pointer(i0, 40737))+20) = i3;
  i4 = OOC_Make__Exists((OOC_Repository__Module)i1, 19);
  isUpToDate = i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 40903)), (OOC_INT32)0);
  i5 = i5-1;
  i6 = 0<=i5;
  i = 0;
  if (!i6) goto l24;
  i6=i4;i4=0;
l7_loop:
  i7 = _check_pointer(i3, 40929);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 40929))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 40932))+12);
  i8 = _check_pointer(i3, 40929);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 40929))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 40932))+12);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 40939)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i8);
  if (i7) goto l19;
  i7 = _check_pointer(i3, 41012);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 41012))*4);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40997)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i7, 8);
  i7 = !i7;
  if (i7) goto l16;
  i7 = _check_pointer(i3, 41159);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 41159))*4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41665))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i3, 41661)), (OOC_INT32)0);
  i0 = OOC_Make_LinkProgramC__Run((OOC_Repository__Module)i1, (void*)(_check_pointer(i3, 41661)), i2, (Object__String)i0);
  
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42019)))), OOC_Make__RulesDesc_GetModuleInfo)),OOC_Make__RulesDesc_GetModuleInfo)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
  mInfo = (OOC_Make__ModuleInfo)i2;
  i3 = fileId;
  i4 = *(OOC_UINT8*)((_check_pointer(i2, 42055))+(_check_index(i3, 21, OOC_UINT8, 42063)));
  if (i4) goto l26;
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 42230))+24);
  i4 = _in(i3,i4);
  if (i4) goto l24;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42412))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42412))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 42417)), (OOC_INT32)0);
  OOC_Logger__EnterMake((void*)(_check_pointer(i4, 42417)), i5, (void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 42431))*24)), 24);
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 42459))+24);
  *(OOC_UINT32*)((_check_pointer(i1, 42459))+24) = (_set_bit(i4,i3));
  switch (i3) {
  case 18:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42548)))), OOC_Make__RulesDesc_UpdateExecutable)),OOC_Make__RulesDesc_UpdateExecutable)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 19:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42615)))), OOC_Make__RulesDesc_UpdateLibrary)),OOC_Make__RulesDesc_UpdateLibrary)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 17:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42686)))), OOC_Make__RulesDesc_UpdateMainObjectFile)),OOC_Make__RulesDesc_UpdateMainObjectFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 15:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42759)))), OOC_Make__RulesDesc_UpdateMainFileC)),OOC_Make__RulesDesc_UpdateMainFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 16:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42835)))), OOC_Make__RulesDesc_UpdateMainFileAssembler)),OOC_Make__RulesDesc_UpdateMainFileAssembler)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 7:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42912)))), OOC_Make__RulesDesc_UpdateObjectFile)),OOC_Make__RulesDesc_UpdateObjectFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 8:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42985)))), OOC_Make__RulesDesc_UpdateObjectFileLib)),OOC_Make__RulesDesc_UpdateObjectFileLib)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 11:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43057)))), OOC_Make__RulesDesc_UpdateCodeFileC)),OOC_Make__RulesDesc_UpdateCodeFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 12:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43125)))), OOC_Make__RulesDesc_UpdateDeclFileC)),OOC_Make__RulesDesc_UpdateDeclFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 13:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43195)))), OOC_Make__RulesDesc_UpdateHeaderFileC)),OOC_Make__RulesDesc_UpdateHeaderFileC)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 14:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43269)))), OOC_Make__RulesDesc_UpdateAssemblerFile)),OOC_Make__RulesDesc_UpdateAssemblerFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 4:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43346)))), OOC_Make__RulesDesc_UpdateInterfaceDescr)),OOC_Make__RulesDesc_UpdateInterfaceDescr)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 3:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43422)))), OOC_Make__RulesDesc_UpdateInterfaceXML)),OOC_Make__RulesDesc_UpdateInterfaceXML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 5:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43497)))), OOC_Make__RulesDesc_UpdateInterfaceHTML)),OOC_Make__RulesDesc_UpdateInterfaceHTML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 2:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43574)))), OOC_Make__RulesDesc_UpdateSymbolTableXML)),OOC_Make__RulesDesc_UpdateSymbolTableXML)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  case 1:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43648)))), OOC_Make__RulesDesc_UpdateSymbolFile)),OOC_Make__RulesDesc_UpdateSymbolFile)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1);
    res = i0;
    goto l23;
  default:
    _failed_case(i3, 42490);
    goto l23;
  }
l23:
  *(OOC_UINT8*)((_check_pointer(i2, 43697))+(_check_index(i3, 21, OOC_UINT8, 43705))) = OOC_TRUE;
  i0 = res;
  *(OOC_UINT8*)(((_check_pointer(i2, 43734))+21)+(_check_index(i3, 21, OOC_UINT8, 43747))) = i0;
  i2 = *(OOC_UINT32*)((_check_pointer(i1, 43781))+24);
  *(OOC_UINT32*)((_check_pointer(i1, 43781))+24) = (_clear_bit(i2,i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43841))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43841))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 43846)), (OOC_INT32)0);
  i0 = OOC_Logger__ExitMake((void*)(_check_pointer(i2, 43846)), i1, (void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 43860))*24)), 24, i0);
  return i0;
  goto l27;
l24:
  Out__String("Error: Cyclic dependency in module ", 36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42331))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42331))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 42336)), (OOC_INT32)0);
  Out__String((void*)(_check_pointer(i0, 42336)), i1);
  Out__Ln();
  return OOC_FALSE;
  goto l27;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42166))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42166))+4);
  i2 = *(OOC_UINT8*)(((_check_pointer(i2, 42179))+21)+(_check_index(i3, 21, OOC_UINT8, 42192)));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 42171)), (OOC_INT32)0);
  i0 = OOC_Logger__CachedMake((void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(i3, 21, OOC_UINT8, 42119))*24)), 24, (void*)(_check_pointer(i0, 42171)), i1, i2);
  return i0;
l27:
  _failed_function(41892); return 0;
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
  _copy_8((const void*)"Executable",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(18, 21, OOC_UINT8, 44061))*24)),24);
  _copy_8((const void*)"Library",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(19, 21, OOC_UINT8, 44111))*24)),24);
  _copy_8((const void*)"MainObjectFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(17, 21, OOC_UINT8, 44155))*24)),24);
  _copy_8((const void*)"MainFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(15, 21, OOC_UINT8, 44213))*24)),24);
  _copy_8((const void*)"ObjectFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(7, 21, OOC_UINT8, 44261))*24)),24);
  _copy_8((const void*)"ObjectFileLib",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(8, 21, OOC_UINT8, 44311))*24)),24);
  _copy_8((const void*)"CodeFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(11, 21, OOC_UINT8, 44367))*24)),24);
  _copy_8((const void*)"DeclFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(12, 21, OOC_UINT8, 44415))*24)),24);
  _copy_8((const void*)"HeaderFileC",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(13, 21, OOC_UINT8, 44463))*24)),24);
  _copy_8((const void*)"InterfaceDescr",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(4, 21, OOC_UINT8, 44515))*24)),24);
  _copy_8((const void*)"InterfaceXML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(3, 21, OOC_UINT8, 44573))*24)),24);
  _copy_8((const void*)"InterfaceHTML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(5, 21, OOC_UINT8, 44627))*24)),24);
  _copy_8((const void*)"SymbolFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(1, 21, OOC_UINT8, 44683))*24)),24);
  _copy_8((const void*)"SymbolTableXML",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(2, 21, OOC_UINT8, 44733))*24)),24);
  _copy_8((const void*)"AssemblerFile",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(14, 21, OOC_UINT8, 44791))*24)),24);
  _copy_8((const void*)"MainFileAssembler",(void*)((OOC_INT32)OOC_Make__fileIdNames+((_check_index(16, 21, OOC_UINT8, 44847))*24)),24);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Make__ErrorContext.baseTypes[0]);
  OOC_Make__makeContext = (OOC_Make__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Make", 9);
  return;
  ;
}

/* --- */
