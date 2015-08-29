#include "OOC/Package.d"
#include "__oo2c.h"

void OOC_Package__ErrorContextDesc_GetTemplate(OOC_Package__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3082))+8);
  switch (i1) {
  case 0:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,99,111,110,116,101,110,116,32,102,111,114,32,101,108,101,109,101,110,116,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){78,97,109,101,32,111,102,32,114,111,111,116,32,101,108,101,109,101,110,116,32,109,117,115,116,32,98,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){79,110,108,121,32,119,104,105,116,101,115,112,97,99,101,32,99,104,97,114,97,99,116,101,114,32,100,97,116,97,32,97,108,108,111,119,101,100,32,104,101,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){65,116,116,114,105,98,117,116,101,32,96,36,123,110,97,109,101,125,39,32,105,115,32,110,111,116,32,100,101,102,105,110,101,100,32,102,111,114,32,116,104,105,115,32,101,108,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){74,117,110,107,32,97,116,32,101,110,100,32,111,102,32,101,108,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,110,97,109,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,99,104,105,108,100,32,101,108,101,109,101,110,116,32,96,118,101,114,115,105,111,110,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,99,117,114,114,101,110,116,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,114,101,118,105,115,105,111,110,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,109,97,105,110,45,109,111,100,117,108,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,115,111,117,114,99,101,45,100,105,114,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,116,121,112,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,99,104,105,108,100,32,101,108,101,109,101,110,116,32,96,102,105,108,101,39,32,111,114,32,96,102,105,108,101,45,115,101,116,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,99,104,105,108,100,32,101,108,101,109,101,110,116,32,96,100,101,102,105,110,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){65,116,116,114,105,98,117,116,101,32,96,36,123,110,97,109,101,125,39,32,109,117,115,116,32,98,101,32,97,110,32,117,110,115,105,103,110,101,100,32,105,110,116,101,103,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){79,110,108,121,32,99,104,97,114,97,99,116,101,114,32,100,97,116,97,32,97,108,108,111,119,101,100,32,104,101,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,96,36,123,116,121,112,101,125,39,32,105,115,32,110,111,116,32,115,117,112,112,111,114,116,101,100,32,102,111,114,32,116,104,105,115,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 17:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,118,97,108,117,101,58,32,36,123,114,101,97,115,111,110,125,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  default:
    _failed_case(i1, 3074);
    goto l21;
  }
l21:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4554)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static OOC_Package__Version OOC_Package__NewVersion() {
  register OOC_INT32 i0;
  OOC_Package__Version version;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Version.baseTypes[0]);
  version = (OOC_Package__Version)i0;
  *(OOC_INT32*)(_check_pointer(i0, 4704)) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 4731))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4753))+8) = -1;
  _copy_8((const void*)"",(void*)((_check_pointer(i0, 4781))+12),32);
  return (OOC_Package__Version)i0;
  ;
}

static OOC_Package__Executable OOC_Package__NewExecutable() {
  register OOC_INT32 i0;
  OOC_Package__Executable executable;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Executable.baseTypes[0]);
  executable = (OOC_Package__Executable)i0;
  *(OOC_INT32*)(_check_pointer(i0, 4950)) = (OOC_INT32)0;
  return (OOC_Package__Executable)i0;
  ;
}

static OOC_Package__Library OOC_Package__NewLibrary() {
  register OOC_INT32 i0;
  OOC_Package__Library library;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Library.baseTypes[0]);
  library = (OOC_Package__Library)i0;
  *(OOC_INT32*)((_check_pointer(i0, 5113))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5144))+8) = (OOC_INT32)0;
  return (OOC_Package__Library)i0;
  ;
}

static void OOC_Package__InitFileData(OOC_Package__FileData fdata) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)fdata;
  *(OOC_INT32*)(_check_pointer(i0, 5258)) = (OOC_INT32)0;
  return;
  ;
}

static OOC_Package__FileSet OOC_Package__NewFileSet() {
  register OOC_INT32 i0;
  OOC_Package__FileSet fileSet;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__FileSet.baseTypes[0]);
  fileSet = (OOC_Package__FileSet)i0;
  OOC_Package__InitFileData((OOC_Package__FileData)i0);
  *(OOC_INT32*)((_check_pointer(i0, 5426))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5456))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5484))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5509))+16) = (OOC_INT32)0;
  return (OOC_Package__FileSet)i0;
  ;
}

void OOC_Package__FileSetDesc_Append(OOC_Package__FileSet fileSet, OOC_Package__FileData fdata) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fileSet;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5640))+16);
  i1 = i1==(OOC_INT32)0;
  i2 = (OOC_INT32)fdata;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5709))+16);
  *(OOC_INT32*)(_check_pointer(i1, 5714)) = i2;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 5671))+12) = i2;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 5758))+16) = i2;
  return;
  ;
}

OOC_Package__File OOC_Package__NewFile(Object__String name, Object__String destName) {
  register OOC_INT32 i0,i1;
  OOC_Package__File file;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__File.baseTypes[0]);
  file = (OOC_Package__File)i0;
  OOC_Package__InitFileData((OOC_Package__FileData)i0);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 5916))+4) = i1;
  i1 = (OOC_INT32)destName;
  *(OOC_INT32*)((_check_pointer(i0, 5939))+8) = i1;
  return (OOC_Package__File)i0;
  ;
}

OOC_Package__KeyValue OOC_Package__NewKeyValue(Object__String key, Config_Value__Value value) {
  register OOC_INT32 i0,i1;
  OOC_Package__KeyValue kv;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__KeyValue.baseTypes[0]);
  kv = (OOC_Package__KeyValue)i0;
  i1 = (OOC_INT32)key;
  *(OOC_INT32*)(_check_pointer(i0, 6113)) = i1;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 6132))+4) = i1;
  return (OOC_Package__KeyValue)i0;
  ;
}

static void OOC_Package__MergeConfig(OOC_Repository__PkgInfo pkg, Config_Section_Options__Section options, Config_Section_Options__Section pragmas) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_Package__KeyValue kv;
  Object__CharsLatin1 chars;
  Config_Section_Options__Option o;

  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6383));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6391))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)options;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6417));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6425));
  i4 = _check_pointer(i4, 6431);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6431))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6435)))), &_td_OOC_Package__KeyValueDesc, 6435);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6463));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6463));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6475)))), &_td_Object__String8Desc, 6475)), 6483)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6475)))), &_td_Object__String8Desc, 6475)));
  chars = (Object__CharsLatin1)i5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6532))+4);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 6527)), (OOC_INT32)0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6517)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i2, (void*)(_check_pointer(i5, 6527)), i6, (Config_Value__Value)i4);
  o = (Config_Section_Options__Option)i4;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6571))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6579))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l16;
  i2 = (OOC_INT32)pragmas;
  i3=0;
l11_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6605))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6613));
  i4 = _check_pointer(i4, 6619);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6619))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6623)))), &_td_OOC_Package__KeyValueDesc, 6623);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6651));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6651));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6663)))), &_td_Object__String8Desc, 6663)), 6671)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6663)))), &_td_Object__String8Desc, 6663)));
  chars = (Object__CharsLatin1)i5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6720))+4);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 6715)), (OOC_INT32)0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6705)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i2, (void*)(_check_pointer(i5, 6715)), i6, (Config_Value__Value)i4);
  o = (Config_Section_Options__Option)i4;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l11_loop;
l16:
  return;
  ;
}

static OOC_Package__Package OOC_Package__NewPackage() {
  register OOC_INT32 i0,i1;
  OOC_Package__Package p;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Package.baseTypes[0]);
  p = (OOC_Package__Package)i0;
  OOC_Repository__InitPkgInfo((OOC_Repository__PkgInfo)i0);
  *(OOC_INT32*)((_check_pointer(i0, 6862))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6881))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 6903))+16) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 6938))+20) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 6976))+24) = (OOC_INT32)0;
  return (OOC_Package__Package)i0;
  ;
}

static OOC_Package__Repository OOC_Package__NewRepository() {
  register OOC_INT32 i0,i1;
  OOC_Package__Repository r;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Repository.baseTypes[0]);
  r = (OOC_Package__Repository)i0;
  OOC_Repository__InitPkgInfo((OOC_Repository__PkgInfo)i0);
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 7139))+8) = i1;
  return (OOC_Package__Repository)i0;
  ;
}

void OOC_Package__RepositoryDesc_MergePackage(OOC_Package__Repository r, OOC_Package__Package pkg) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_Package__KeyValue kv;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7318))+8);
  i2 = (OOC_INT32)pkg;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7343))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7318))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7332)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i4, (Object__Object)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7372));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 7380))+4);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7406));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7414));
  i4 = _check_pointer(i4, 7420);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7420))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7424)))), &_td_OOC_Package__KeyValueDesc, 7424);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7442));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7442));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7450)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i4);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7493))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 7501))+4);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l16;
  i3=0;
l11_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7527))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7535));
  i4 = _check_pointer(i4, 7541);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7541))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7545)))), &_td_OOC_Package__KeyValueDesc, 7545);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7563))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7563))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7571)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i4);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l11_loop;
l16:
  return;
  ;
}

OOC_Package__FileSet OOC_Package__Normalize(OOC_Package__FileSet fileSet) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 *buffer;
  OOC_Package__FileSet norm;
  auto void OOC_Package__Normalize_NormalizeFileSet(OOC_Package__FileSet fileSet, Object__String sourcePrefix, Object__String destPrefix);
  auto OOC_Package__FileData OOC_Package__Normalize_MergeSort(OOC_Package__FileData list);
    
    void OOC_Package__Normalize_NormalizeFileSet(OOC_Package__FileSet fileSet, Object__String sourcePrefix, Object__String destPrefix) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Package__FileData ptr;
      auto void OOC_Package__Normalize_NormalizeFileSet_NormalizeFile(OOC_Package__File file);
        
        void OOC_Package__Normalize_NormalizeFileSet_NormalizeFile(OOC_Package__File file) {
          register OOC_INT32 i0,i1;
          Object__String name;
          Object__String destName;
          OOC_Package__File nFile;
          auto Object__String OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath(Object__String path);
            
            Object__String OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath(Object__String path) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5;
              Object__CharsLatin1 chars;
              OOC_INT16 i;
              OOC_INT16 j;

              i0 = (OOC_INT32)buffer;
              i1 = i0==(OOC_INT32)0;
              i2 = (OOC_INT32)path;
              if (i1) goto l3;
              i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8962)), (OOC_INT32)0);
              i1 = *(OOC_INT32*)(_check_pointer(i2, 8941));
              i0 = i1>=i0;
              
              goto l5;
l3:
              i0=OOC_TRUE;
l5:
              if (!i0) goto l7;
              i0 = *(OOC_INT32*)(_check_pointer(i2, 8999));
              buffer = (void*)((OOC_INT32)RT0__NewObject(_td_OOC_Package__8487.baseTypes[0], (i0+1)));
l7:
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9057)))), &_td_Object__String8Desc, 9057)), 9065)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9057)))), &_td_Object__String8Desc, 9057)));
              chars = (Object__CharsLatin1)i0;
              i1 = (OOC_INT32)buffer;
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9110)), (OOC_INT32)0);
              _copy_8((const void*)(_check_pointer(i0, 9101)),(void*)(_check_pointer(i1, 9110)),i3);
              i = 0;
              i0 = _check_pointer(i1, 9156);
              i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
              i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT16, 9156)));
              i0 = i0!=(OOC_CHAR8)'\000';
              if (i0) goto l10;
              i0=0;
              goto l63;
l10:
              i0=0;
l11_loop:
              i1 = (OOC_INT32)buffer;
              i3 = _check_pointer(i1, 9191);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 9191)));
              i3 = i3==(OOC_CHAR8)'/';
              if (i3) goto l57;
              i3 = _check_pointer(i1, 9328);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 9328)));
              i3 = i3==(OOC_CHAR8)'.';
              if (i3) goto l16;
              i3=OOC_FALSE;
              goto l18;
l16:
              i3 = _check_pointer(i1, 9348);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT16, 9348)));
              i3 = i3==(OOC_CHAR8)'/';
              
l18:
              if (i3) goto l55;
              i3 = _check_pointer(i1, 9487);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 9487)));
              i3 = i3==(OOC_CHAR8)'.';
              if (i3) goto l22;
              i3=OOC_FALSE;
              goto l24;
l22:
              i3 = _check_pointer(i1, 9507);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT16, 9507)));
              i3 = i3==(OOC_CHAR8)'.';
              
l24:
              if (i3) goto l26;
              i3=OOC_FALSE;
              goto l28;
l26:
              i3 = _check_pointer(i1, 9547);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index((i0+2), i4, OOC_UINT16, 9547)));
              i3 = i3==(OOC_CHAR8)'/';
              
l28:
              if (i3) goto l40;
l30_loop:
              i3 = _check_pointer(i1, 10097);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 10097)));
              i3 = i3==(OOC_CHAR8)'\000';
              if (i3) goto l58;
              i3 = _check_pointer(i1, 10165);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 10165)));
              i3 = i3==(OOC_CHAR8)'/';
              if (i3) goto l36;
              i0 = i0+1;
              i = i0;
              
              goto l30_loop;
l36:
              i0 = i0+1;
              i = i0;
              
              goto l58;
l40:
              i3 = i0==0;
              if (i3) goto l52;
              i3=i0;
l43_loop:
              i3 = i3-1;
              j = i3;
              i4 = i3==0;
              if (i4) goto l46;
              i4 = _check_pointer(i1, 9897);
              i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
              i4 = *(OOC_UINT8*)(i4+(_check_index((i3-1), i5, OOC_UINT16, 9897)));
              i4 = i4==(OOC_CHAR8)'/';
              
              goto l48;
l46:
              i4=OOC_TRUE;
l48:
              if (!i4) goto l43_loop;
l51:
              i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9948)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9948)), i4, i3, ((i0-i3)+3));
              i = i3;
              i0=i3;
              goto l58;
l52:
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9691)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9691)), i3, i0, 3);
              
              goto l58;
l55:
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9452)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9452)), i3, i0, 2);
              
              goto l58;
l57:
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9293)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9293)), i3, i0, 1);
              
l58:
              i1 = (OOC_INT32)buffer;
              i1 = _check_pointer(i1, 9156);
              i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i3, OOC_UINT16, 9156)));
              i1 = i1!=(OOC_CHAR8)'\000';
              if (i1) goto l11_loop;
l63:
              i1 = i0!=0;
              i3 = (OOC_INT32)buffer;
              if (i1) goto l66;
              i1=OOC_FALSE;
              goto l68;
l66:
              i1 = _check_pointer(i3, 10423);
              i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i4, OOC_UINT16, 10423)));
              i1 = i1==(OOC_CHAR8)'/';
              
l68:
              if (!i1) goto l80;
l71_loop:
              i0 = i0-1;
              i = i0;
              i1 = i0!=0;
              if (i1) goto l74;
              i1=OOC_FALSE;
              goto l76;
l74:
              i1 = _check_pointer(i3, 10423);
              i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i4, OOC_UINT16, 10423)));
              i1 = i1==(OOC_CHAR8)'/';
              
l76:
              if (i1) goto l71_loop;
l80:
              i1 = _check_pointer(i3, 10490);
              i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              *(OOC_UINT8*)(i1+(_check_index(i0, i4, OOC_UINT16, 10490))) = (OOC_CHAR8)'\000';
              i1 = *(OOC_INT32*)(_check_pointer(i2, 10534));
              i1 = i0!=i1;
              if (i1) goto l83;
              return (Object__String)i2;
              goto l84;
l83:
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i3, 10596)), (OOC_INT32)0);
              i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i3, 10596)), i1, 0, i0);
              return (Object__String)i0;
l84:
              _failed_function(8780); return 0;
              ;
            }


          i0 = (OOC_INT32)sourcePrefix;
          i1 = (OOC_INT32)file;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10797))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10785)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i0, (Object__String)i1);
          i0 = (OOC_INT32)OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath((Object__String)i0);
          name = (Object__String)i0;
          i0 = (OOC_INT32)file;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10822))+8);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)destPrefix;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10986))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10974)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i0);
          i0 = (OOC_INT32)OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath((Object__String)i0);
          destName = (Object__String)i0;
          
          goto l4;
l3:
          i1 = (OOC_INT32)destPrefix;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10902))+8);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10890)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i0);
          i0 = (OOC_INT32)OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath((Object__String)i0);
          destName = (Object__String)i0;
          
l4:
          i1 = (OOC_INT32)name;
          i0 = (OOC_INT32)OOC_Package__NewFile((Object__String)i1, (Object__String)i0);
          nFile = (OOC_Package__File)i0;
          i1 = (OOC_INT32)norm;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11062)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i1, (OOC_Package__FileData)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)fileSet;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11160))+4);
      i2 = (OOC_INT32)sourcePrefix;
      i3 = (OOC_INT32)_c0;
      sourcePrefix = (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i2,(void*)i1)),(void*)i3));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11193))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11315))+4);
      i2 = (OOC_INT32)destPrefix;
      i1 = (OOC_INT32)Object__Concat2((void*)i2,(void*)i1);
      
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11254))+8);
      i2 = (OOC_INT32)destPrefix;
      i1 = (OOC_INT32)Object__Concat2((void*)i2,(void*)i1);
      
l4:
      destPrefix = (Object__String)((OOC_INT32)Object__Concat2((void*)i1,(void*)i3));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11401))+12);
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l20;
l7_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11451)))), &_td_OOC_Package__FileSetDesc);
      if (i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11536)))), &_td_OOC_Package__FileDesc);
      if (i1) goto l12;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11531)))), 11531);
      goto l15;
l12:
      OOC_Package__Normalize_NormalizeFileSet_NormalizeFile((OOC_Package__File)i0);
      goto l15;
l14:
      i1 = (OOC_INT32)destPrefix;
      i2 = (OOC_INT32)sourcePrefix;
      OOC_Package__Normalize_NormalizeFileSet((OOC_Package__FileSet)i0, (Object__String)i2, (Object__String)i1);
l15:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11607));
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l7_loop;
l20:
      return;
      ;
    }

    
    OOC_Package__FileData OOC_Package__Normalize_MergeSort(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Package__FileData a;
      OOC_Package__FileData b;
      OOC_Package__FileData ptr;
      OOC_Package__FileData next;
      OOC_Package__FileData tail;
      auto OOC_CHAR8 OOC_Package__Normalize_MergeSort_Less(OOC_Package__File a, OOC_Package__File b);
        
        OOC_CHAR8 OOC_Package__Normalize_MergeSort_Less(OOC_Package__File a, OOC_Package__File b) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_INT32 cmp;

          i0 = (OOC_INT32)a;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11860))+8);
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11879))+8);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11860))+8);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11869)))), Object__StringDesc_Compare)),Object__StringDesc_Compare)((Object__String)i4, (Object__Object)i3);
          i3 = i1==0;
          cmp = i1;
          if (i3) goto l3;
          i0=i1;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11935))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11950))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11935))+4);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11940)))), Object__StringDesc_Compare)),Object__StringDesc_Compare)((Object__String)i0, (Object__Object)i2);
          
l4:
          return (i0<0);
          ;
        }


      i0 = (OOC_INT32)list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12058));
      i1 = i1==(OOC_INT32)0;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l48;
      a = (OOC_Package__FileData)(OOC_INT32)0;
      b = (OOC_Package__FileData)(OOC_INT32)0;
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l9;
      i0=(OOC_INT32)0;i1=(OOC_INT32)0;
      goto l19;
l9:
      i1=(OOC_INT32)0;i2=(OOC_INT32)0;
l10_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12266));
      next = (OOC_Package__FileData)i3;
      *(OOC_INT32*)(_check_pointer(i0, 12294)) = i1;
      a = (OOC_Package__FileData)i0;
      ptr = (OOC_Package__FileData)i3;
      i1 = i3!=(OOC_INT32)0;
      if (i1) goto l13;
      i1=i3;
      goto l14;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 12411));
      next = (OOC_Package__FileData)i1;
      *(OOC_INT32*)(_check_pointer(i3, 12441)) = i2;
      b = (OOC_Package__FileData)i3;
      ptr = (OOC_Package__FileData)i1;
      i2=i3;
l14:
      i3 = i1!=(OOC_INT32)0;
      if (!i3) goto l18;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l10_loop;
l18:
      i1=i2;
l19:
      i0 = (OOC_INT32)OOC_Package__Normalize_MergeSort((OOC_Package__FileData)i0);
      a = (OOC_Package__FileData)i0;
      i1 = (OOC_INT32)OOC_Package__Normalize_MergeSort((OOC_Package__FileData)i1);
      b = (OOC_Package__FileData)i1;
      i2 = (OOC_INT32)OOC_Package__NewFile((Object__String)(OOC_INT32)0, (Object__String)(OOC_INT32)0);
      list = (OOC_Package__FileData)i2;
      tail = (OOC_Package__FileData)i2;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l22;
      i0 = i1!=(OOC_INT32)0;
      
      goto l24;
l22:
      i0=OOC_TRUE;
l24:
      if (!i0) goto l47;
      i0=i2;
l26_loop:
      i0 = (OOC_INT32)a;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l29;
      i0=OOC_FALSE;
      goto l35;
l29:
      i1 = (OOC_INT32)b;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l32;
      i0 = OOC_Package__Normalize_MergeSort_Less((OOC_Package__File)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12809)))), &_td_OOC_Package__FileDesc, 12809)), (OOC_Package__File)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12818)))), &_td_OOC_Package__FileDesc, 12818)));
      
      goto l35;
l32:
      i0=OOC_TRUE;
l35:
      if (i0) goto l37;
      i0 = (OOC_INT32)b;
      ptr = (OOC_Package__FileData)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12917));
      b = (OOC_Package__FileData)i1;
      
      goto l38;
l37:
      i0 = (OOC_INT32)a;
      ptr = (OOC_Package__FileData)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12859));
      a = (OOC_Package__FileData)i1;
      
l38:
      *(OOC_INT32*)(_check_pointer(i0, 12960)) = (OOC_INT32)0;
      i1 = (OOC_INT32)tail;
      *(OOC_INT32*)(_check_pointer(i1, 12996)) = i0;
      i1 = (OOC_INT32)a;
      i1 = i1!=(OOC_INT32)0;
      tail = (OOC_Package__FileData)i0;
      if (i1) goto l41;
      i1 = (OOC_INT32)b;
      i1 = i1!=(OOC_INT32)0;
      
      goto l43;
l41:
      i1=OOC_TRUE;
l43:
      if (i1) goto l26_loop;
l47:
      i0 = (OOC_INT32)list;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13073));
      return (OOC_Package__FileData)i0;
      goto l49;
l48:
      return (OOC_Package__FileData)i0;
l49:
      _failed_function(11674); return 0;
      ;
    }


  buffer = (void*)(OOC_INT32)0;
  i0 = (OOC_INT32)OOC_Package__NewFileSet();
  norm = (OOC_Package__FileSet)i0;
  *(OOC_INT32*)((_check_pointer(i0, 13182))+4) = ((OOC_INT32)_c1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13225))+4);
  *(OOC_INT32*)((_check_pointer(i0, 13209))+8) = i1;
  i0 = (OOC_INT32)fileSet;
  OOC_Package__Normalize_NormalizeFileSet((OOC_Package__FileSet)i0, (Object__String)((OOC_INT32)_c2), (Object__String)((OOC_INT32)_c3));
  i0 = (OOC_INT32)norm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13308))+12);
  i1 = (OOC_INT32)OOC_Package__Normalize_MergeSort((OOC_Package__FileData)i1);
  *(OOC_INT32*)((_check_pointer(i0, 13285))+12) = i1;
  i0 = (OOC_INT32)norm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13337))+12);
  *(OOC_INT32*)((_check_pointer(i0, 13324))+16) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13356))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13391))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13396));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
l5_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13445))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13450));
  *(OOC_INT32*)((_check_pointer(i0, 13432))+16) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13391))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13396));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l5_loop;
l11:
  return (OOC_Package__FileSet)i0;
  ;
}

static Object__String OOC_Package__StringAttr(XML_Builder__Attribute att) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_UnicodeBuffer__CharArray str;
  OOC_CHAR8 *buffer;

  i0 = (OOC_INT32)att;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13872))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13890))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13872))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13878)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)i2);
  str = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13925)), (OOC_INT32)0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__13824.baseTypes[0], i1);
  buffer = (void*)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13969)), (OOC_INT32)0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13955)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i0, 13955)), i3, (OOC_CHAR8)'?', (void*)(_check_pointer(i1, 13969)), i2);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14007)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 14007)), i0);
  return (Object__String)i0;
  ;
}

static OOC_CHAR8 OOC_Package__AtElement(Config_Parser__Node node, const OOC_CHAR16 elementName__ref[], OOC_LEN elementName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(elementName,OOC_CHAR16 ,elementName_0d)

  i0 = (OOC_INT32)node;
  OOC_INITIALIZE_VPAR(elementName__ref,elementName,OOC_CHAR16 ,(elementName_0d*2))
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14179)))), &_td_Config_Parser__ElementDesc);
  
l5:
  if (i1) goto l7;
  i0=OOC_FALSE;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14221)))), &_td_Config_Parser__ElementDesc, 14221)), 14229))+28);
  i0 = (
  _cmp16((const void*)(_check_pointer(i0, 14234)),(const void*)(OOC_INT32)elementName))==(OOC_INT32)0;
  
l8:
  return i0;
  ;
}

static void OOC_Package__ParseKeyValue(Config_Parser__Element elem, ADT_ArrayList__ArrayList list, Config_Section_Options__Section options, Object__String defaultType, XML_Locator__ErrorListener errorListener, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg lastError;
  Config_Parser__Node node;
  auto void OOC_Package__ParseKeyValue_Err(OOC_INT32 code, Config_Parser__Node xmlNode);
  auto void OOC_Package__ParseKeyValue_SkipWS(Config_Parser__Node *node);
  auto OOC_Package__KeyValue OOC_Package__ParseKeyValue_ParseDefine(Config_Parser__Element elem);
    
    void OOC_Package__ParseKeyValue_Err(OOC_INT32 code, Config_Parser__Node xmlNode) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)errorListener;
      i1 = (OOC_INT32)xmlNode;
      i2 = (OOC_INT32)OOC_Package__packageContext;
      i3 = code;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14774)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 14856))+4));
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14877)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
      return;
      ;
    }

    
    void OOC_Package__ParseKeyValue_SkipWS(Config_Parser__Node *node) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*node;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14997)))), &_td_Config_Parser__CharDataDesc);
      
l5:
      if (!i0) goto l19;
l7_loop:
      i0 = (OOC_INT32)*node;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15036)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
      i1 = !i1;
      if (!i1) goto l10;
      OOC_Package__ParseKeyValue_Err(2, (Config_Parser__Node)i0);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15128));
      *node = (Config_Parser__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14997)))), &_td_Config_Parser__CharDataDesc);
      
l15:
      if (i0) goto l7_loop;
l19:
      return;
      ;
    }

    
    OOC_Package__KeyValue OOC_Package__ParseKeyValue_ParseDefine(Config_Parser__Element elem) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      Object__String name;
      Object__String type;
      OOC_INT32 i;
      XML_Builder__Attribute att;
      Object__String stringBuffer;
      Config_Parser__Node node;
      OOC_CHAR8 str[1024];
      Object__CharsLatin1 chars;
      Config_Value__Value value;
      Msg__Msg errMsg;

      name = (Object__String)(OOC_INT32)0;
      i0 = (OOC_INT32)defaultType;
      type = (Object__String)i0;
      i1 = (OOC_INT32)elem;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15587))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 15596));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (i3) goto l3;
      i2=i0;i0=(OOC_INT32)0;
      goto l17;
l3:
      i4=i0;i0=0;i3=(OOC_INT32)0;
l4_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15625))+32);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15634))+4);
      i5 = _check_pointer(i5, 15639);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i0, i6, OOC_UINT32, 15639))*4);
      att = (XML_Builder__Attribute)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15659))+4);
      i6 = (
      _cmp16((const void*)(_check_pointer(i6, 15669)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
      if (i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15739))+4);
      i6 = (
      _cmp16((const void*)(_check_pointer(i6, 15749)),(const void*)((OOC_CHAR16[]){116,121,112,101,0})))==(OOC_INT32)0;
      if (i6) goto l9;
      OOC_Package__ParseKeyValue_Err(3, (Config_Parser__Node)i1);
      i6 = (OOC_INT32)lastError;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15919))+4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15919))+4);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15929)), (OOC_INT32)0);
      i5 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i7, 15929)), i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15872)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i5);
      
      goto l12;
l9:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i5);
      type = (Object__String)i4;
      
      goto l12;
l11:
      i3 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i5);
      name = (Object__String)i3;
      
l12:
      i0 = i0+1;
      i5 = i0<=i2;
      i = i0;
      if (i5) goto l4_loop;
l16:
      i0=i3;i2=i4;
l17:
      i3 = i0==(OOC_INT32)0;
      if (i3) goto l44;
      i3 = i2==(OOC_INT32)0;
      if (i3) goto l42;
      i3 = (OOC_INT32)_c4;
      stringBuffer = (Object__String)i3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16195))+36);
      node = (Config_Parser__Node)i1;
      i4 = i1!=(OOC_INT32)0;
      if (!i4) goto l34;
l25_loop:
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16254)))), &_td_Config_Parser__CharDataDesc);
      if (i4) goto l28;
      OOC_Package__ParseKeyValue_Err(15, (Config_Parser__Node)i1);
      
      goto l29;
l28:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16309))+28);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16309))+28);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16316)), (OOC_INT32)0);
      LongStrings__Short((void*)(_check_pointer(i4, 16316)), i5, (OOC_CHAR8)'?', (void*)(OOC_INT32)str, 1024);
      i4 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 1024);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16370)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i3, (Object__String)i4);
      stringBuffer = (Object__String)i3;
      
l29:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16499));
      node = (Config_Parser__Node)i1;
      i4 = i1!=(OOC_INT32)0;
      if (i4) goto l25_loop;
l34:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16553)))), &_td_Object__String8Desc, 16553)), 16561)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16553)))), &_td_Object__String8Desc, 16553)));
      chars = (Object__CharsLatin1)i2;
      i4 = (OOC_INT32)options;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16601))+8);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16625)), (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16601))+8);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16610)))), Config_Value__PrototypeListDesc_GetClone)),Config_Value__PrototypeListDesc_GetClone)((Config_Value__PrototypeList)i4, (void*)(_check_pointer(i2, 16625)), i6);
      value = (Config_Value__Value)i4;
      i5 = i4==(OOC_INT32)0;
      if (i5) goto l40;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16815)))), &_td_Object__String8Desc, 16815)), 16823)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16815)))), &_td_Object__String8Desc, 16815)));
      chars = (Object__CharsLatin1)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16874)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16854)))), Config_Value__ValueDesc_StringToValue)),Config_Value__ValueDesc_StringToValue)((Config_Value__Value)i4, (void*)(_check_pointer(i2, 16874)), i3, (void*)(OOC_INT32)&errMsg);
      i2 = (OOC_INT32)errMsg;
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l41;
      OOC_Package__ParseKeyValue_Err(17, (Config_Parser__Node)i1);
      i1 = (OOC_INT32)lastError;
      i2 = (OOC_INT32)errMsg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16976)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i1, "reason", 7, (Msg__Msg)i2);
      goto l41;
l40:
      OOC_Package__ParseKeyValue_Err(16, (Config_Parser__Node)i1);
      i1 = (OOC_INT32)lastError;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16759)), (OOC_INT32)0);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 16759)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16712)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "type", 5, (Msg__StringPtr)i2);
l41:
      i0 = (OOC_INT32)OOC_Package__NewKeyValue((Object__String)i0, (Config_Value__Value)i4);
      return (OOC_Package__KeyValue)i0;
      goto l45;
l42:
      OOC_Package__ParseKeyValue_Err(5, (Config_Parser__Node)i1);
      return (OOC_Package__KeyValue)(OOC_INT32)0;
      goto l45;
l44:
      OOC_Package__ParseKeyValue_Err(5, (Config_Parser__Node)i1);
      return (OOC_Package__KeyValue)(OOC_INT32)0;
l45:
      _failed_function(15179); return 0;
      ;
    }


  i0 = (OOC_INT32)elem;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17140))+32);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17149));
  i1 = i1!=0;
  if (!i1) goto l3;
  OOC_Package__ParseKeyValue_Err(3, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)elem;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17262))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17271))+4);
  i2 = _check_pointer(i2, 17276);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 17276))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17279))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17262))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17271))+4);
  i1 = _check_pointer(i1, 17276);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 17276))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17279))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17289)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 17289)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17214)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l3:
  i0 = (OOC_INT32)elem;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17324))+36);
  node = (Config_Parser__Node)i0;
  OOC_Package__ParseKeyValue_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l15;
l6_loop:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){100,101,102,105,110,101,0}), 7);
  if (i0) goto l9;
  i0 = (OOC_INT32)node;
  OOC_Package__ParseKeyValue_Err(13, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17570));
  node = (Config_Parser__Node)i0;
  goto l10;
l9:
  i0 = (OOC_INT32)list;
  i1 = (OOC_INT32)node;
  i1 = (OOC_INT32)OOC_Package__ParseKeyValue_ParseDefine((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17462)))), &_td_Config_Parser__ElementDesc, 17462)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17430)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17494));
  node = (Config_Parser__Node)i0;
l10:
  OOC_Package__ParseKeyValue_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l6_loop;
l15:
  return;
  ;
}

static OOC_Package__Package OOC_Package__ProcessPackage(Config_Parser__Element root, XML_Locator__ErrorListener errorListener, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg lastError;
  OOC_Package__Package pkg;
  OOC_INT32 i;
  XML_Builder__Attribute att;
  Config_Parser__Node node;
  auto void OOC_Package__ProcessPackage_Err(OOC_INT32 code, Config_Parser__Node xmlNode);
  auto void OOC_Package__ProcessPackage_SkipWS(Config_Parser__Node *node);
  auto OOC_Package__Version OOC_Package__ProcessPackage_ParseVersion(Config_Parser__Element elem);
  auto OOC_Package__Executable OOC_Package__ProcessPackage_ParseExecutable(Config_Parser__Element elem);
  auto OOC_Package__Library OOC_Package__ProcessPackage_ParseLibrary(Config_Parser__Element elem);
  auto OOC_Package__FileSet OOC_Package__ProcessPackage_ParseFileSet(Config_Parser__Element elem);
    
    void OOC_Package__ProcessPackage_Err(OOC_INT32 code, Config_Parser__Node xmlNode) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)errorListener;
      i1 = (OOC_INT32)xmlNode;
      i2 = (OOC_INT32)OOC_Package__packageContext;
      i3 = code;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18029)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 18111))+4));
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18132)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
      return;
      ;
    }

    
    void OOC_Package__ProcessPackage_SkipWS(Config_Parser__Node *node) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*node;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18252)))), &_td_Config_Parser__CharDataDesc);
      
l5:
      if (!i0) goto l19;
l7_loop:
      i0 = (OOC_INT32)*node;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18291)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
      i1 = !i1;
      if (!i1) goto l10;
      OOC_Package__ProcessPackage_Err(2, (Config_Parser__Node)i0);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18383));
      *node = (Config_Parser__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18252)))), &_td_Config_Parser__CharDataDesc);
      
l15:
      if (i0) goto l7_loop;
l19:
      return;
      ;
    }

    
    OOC_Package__Version OOC_Package__ProcessPackage_ParseVersion(Config_Parser__Element elem) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_Package__Version version;
      OOC_INT32 i;
      XML_Builder__Attribute att;
      OOC_CHAR8 str[32];
      auto OOC_INT32 OOC_Package__ProcessPackage_ParseVersion_Unsigned(XML_Builder__Attribute att);
        
        OOC_INT32 OOC_Package__ProcessPackage_ParseVersion_Unsigned(XML_Builder__Attribute att) {
          register OOC_INT32 i0,i1,i2,i3;
          XML_UnicodeBuffer__CharArray str;
          OOC_CHAR8 buffer[128];
          OOC_INT32 i;
          OOC_INT8 res;

          i0 = (OOC_INT32)att;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18887))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18905))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18887))+12);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18893)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i3, (XML_DTD__AttrDecl)i2);
          str = (XML_UnicodeBuffer__CharArray)i1;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18936)), (OOC_INT32)0);
          i2 = i2<128;
          if (!i2) goto l10;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18989)), (OOC_INT32)0);
          LongStrings__Short((void*)(_check_pointer(i1, 18989)), i2, (OOC_CHAR8)'?', (void*)(OOC_INT32)buffer, 128);
          IntStr__StrToInt((void*)(OOC_INT32)buffer, 128, (void*)(OOC_INT32)&i, (void*)(OOC_INT32)&res);
          i1 = res;
          i1 = i1==0;
          if (i1) goto l5;
          i1=OOC_FALSE;
          goto l7;
l5:
          i1 = i;
          i1 = i1>=0;
          
l7:
          if (!i1) goto l10;
          i1 = i;
          return i1;
l10:
          i1 = (OOC_INT32)elem;
          OOC_Package__ProcessPackage_Err(14, (Config_Parser__Node)i1);
          i1 = (OOC_INT32)lastError;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19258))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19258))+4);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19268)), (OOC_INT32)0);
          i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 19268)), i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19211)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i0);
          return 0;
          ;
        }


      i0 = (OOC_INT32)OOC_Package__NewVersion();
      version = (OOC_Package__Version)i0;
      i0 = (OOC_INT32)elem;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19381))+32);
      i0 = *(OOC_INT32*)(_check_pointer(i0, 19390));
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l20;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)elem;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19419))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19428))+4);
      i3 = _check_pointer(i3, 19433);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 19433))*4);
      att = (XML_Builder__Attribute)i1;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19453))+4);
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 19463)),(const void*)((OOC_CHAR16[]){99,117,114,114,101,110,116,0})))==(OOC_INT32)0;
      if (i3) goto l14;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19545))+4);
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 19555)),(const void*)((OOC_CHAR16[]){97,103,101,0})))==(OOC_INT32)0;
      if (i3) goto l12;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19629))+4);
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 19639)),(const void*)((OOC_CHAR16[]){114,101,118,105,115,105,111,110,0})))==(OOC_INT32)0;
      if (i3) goto l10;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i2);
      i2 = (OOC_INT32)lastError;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19823))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19823))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19833)), (OOC_INT32)0);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 19833)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19776)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i2, "name", 5, (Msg__LStringPtr)i1);
      goto l15;
l10:
      i2 = (OOC_INT32)version;
      i1 = OOC_Package__ProcessPackage_ParseVersion_Unsigned((XML_Builder__Attribute)i1);
      *(OOC_INT32*)((_check_pointer(i2, 19677))+8) = i1;
      goto l15;
l12:
      i2 = (OOC_INT32)version;
      i1 = OOC_Package__ProcessPackage_ParseVersion_Unsigned((XML_Builder__Attribute)i1);
      *(OOC_INT32*)((_check_pointer(i2, 19588))+4) = i1;
      goto l15;
l14:
      i2 = (OOC_INT32)version;
      i1 = OOC_Package__ProcessPackage_ParseVersion_Unsigned((XML_Builder__Attribute)i1);
      *(OOC_INT32*)(_check_pointer(i2, 19500)) = i1;
l15:
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l20:
      i0 = (OOC_INT32)version;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 19878));
      i1 = i1==-1;
      i2 = (OOC_INT32)elem;
      if (!i1) goto l23;
      OOC_Package__ProcessPackage_Err(7, (Config_Parser__Node)i2);
l23:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 19970))+8);
      i1 = i1==-1;
      if (!i1) goto l26;
      OOC_Package__ProcessPackage_Err(8, (Config_Parser__Node)i2);
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20061))+36);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l29;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20114))+36);
      OOC_Package__ProcessPackage_Err(0, (Config_Parser__Node)i1);
      i1 = (OOC_INT32)lastError;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20190))+28);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20190))+28);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20195)), (OOC_INT32)0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 20195)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20142)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
l29:
      _copy_8((const void*)"",(void*)((_check_pointer(i0, 20231))+12),32);
      i1 = *(OOC_INT32*)(_check_pointer(i0, 20274));
      IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
      Strings__Append((void*)(OOC_INT32)str, 32, (void*)((_check_pointer(i0, 20323))+12), 32);
      Strings__Append(":", 2, (void*)((_check_pointer(i0, 20365))+12), 32);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 20403))+4);
      IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
      Strings__Append((void*)(OOC_INT32)str, 32, (void*)((_check_pointer(i0, 20448))+12), 32);
      Strings__Append(":", 2, (void*)((_check_pointer(i0, 20490))+12), 32);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 20528))+8);
      IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
      Strings__Append((void*)(OOC_INT32)str, 32, (void*)((_check_pointer(i0, 20578))+12), 32);
      return (OOC_Package__Version)i0;
      ;
    }

    
    OOC_Package__Executable OOC_Package__ProcessPackage_ParseExecutable(Config_Parser__Element elem) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_Package__Executable executable;
      OOC_INT32 i;
      XML_Builder__Attribute att;

      i0 = (OOC_INT32)OOC_Package__NewExecutable();
      executable = (OOC_Package__Executable)i0;
      i1 = (OOC_INT32)elem;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20900))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 20909));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l12;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20938))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20947))+4);
      i4 = _check_pointer(i4, 20952);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 20952))*4);
      att = (XML_Builder__Attribute)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20972))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 20982)),(const void*)((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0})))==(OOC_INT32)0;
      if (i5) goto l6;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i1);
      i5 = (OOC_INT32)lastError;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21176))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21176))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 21186)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i6, 21186)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21129)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i5, "name", 5, (Msg__LStringPtr)i4);
      goto l7;
l6:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)(_check_pointer(i0, 21026)) = i4;
l7:
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l12:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21234));
      i2 = i2==(OOC_INT32)0;
      if (!i2) goto l15;
      OOC_Package__ProcessPackage_Err(9, (Config_Parser__Node)i1);
l15:
      return (OOC_Package__Executable)i0;
      ;
    }

    
    OOC_Package__Library OOC_Package__ProcessPackage_ParseLibrary(Config_Parser__Element elem) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_Package__Library library;
      OOC_INT32 i;
      XML_Builder__Attribute att;
      Config_Parser__Node node;

      i0 = (OOC_INT32)OOC_Package__NewLibrary();
      library = (OOC_Package__Library)i0;
      i1 = (OOC_INT32)elem;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21632))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 21641));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l16;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21670))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21679))+4);
      i4 = _check_pointer(i4, 21684);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 21684))*4);
      att = (XML_Builder__Attribute)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21704))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 21714)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
      if (i5) goto l10;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21792))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 21802)),(const void*)((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0})))==(OOC_INT32)0;
      if (i5) goto l8;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i1);
      i5 = (OOC_INT32)lastError;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21993))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21993))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 22003)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i6, 22003)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21946)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i5, "name", 5, (Msg__LStringPtr)i4);
      goto l11;
l8:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)((_check_pointer(i0, 21843))+4) = i4;
      goto l11;
l10:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)(_check_pointer(i0, 21748)) = i4;
l11:
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22048))+4);
      i2 = i2==(OOC_INT32)0;
      if (!i2) goto l19;
      OOC_Package__ProcessPackage_Err(9, (Config_Parser__Node)i1);
l19:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22149))+36);
      node = (Config_Parser__Node)i1;
      OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
      i1 = (OOC_INT32)node;
      i1 = OOC_Package__AtElement((Config_Parser__Node)i1, ((OOC_CHAR16[]){118,101,114,115,105,111,110,0}), 8);
      if (i1) goto l22;
      i1 = (OOC_INT32)node;
      OOC_Package__ProcessPackage_Err(6, (Config_Parser__Node)i1);
      goto l23;
l22:
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseVersion((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22272)))), &_td_Config_Parser__ElementDesc, 22272)));
      *(OOC_INT32*)((_check_pointer(i0, 22235))+8) = i1;
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22303));
      node = (Config_Parser__Node)i1;
      OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l23:
      i1 = (OOC_INT32)node;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l26;
      OOC_Package__ProcessPackage_Err(4, (Config_Parser__Node)i1);
l26:
      return (OOC_Package__Library)i0;
      ;
    }

    
    OOC_Package__FileSet OOC_Package__ProcessPackage_ParseFileSet(Config_Parser__Element elem) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_Package__FileSet fileSet;
      OOC_INT32 i;
      XML_Builder__Attribute att;
      Config_Parser__Node node;
      auto OOC_Package__File OOC_Package__ProcessPackage_ParseFileSet_ParseFile(Config_Parser__Element elem);
        
        OOC_Package__File OOC_Package__ProcessPackage_ParseFileSet_ParseFile(Config_Parser__Element elem) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          Object__String name;
          Object__String destName;
          OOC_INT32 i;
          XML_Builder__Attribute att;
          Config_Parser__Node node;

          name = (Object__String)(OOC_INT32)0;
          destName = (Object__String)(OOC_INT32)0;
          i0 = (OOC_INT32)elem;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23030))+32);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 23039));
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (i2) goto l3;
          i1=(OOC_INT32)0;i2=(OOC_INT32)0;
          goto l17;
l3:
          i2=0;i3=(OOC_INT32)0;i4=(OOC_INT32)0;
l4_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23070))+32);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23079))+4);
          i5 = _check_pointer(i5, 23084);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 23084))*4);
          att = (XML_Builder__Attribute)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23106))+4);
          i6 = (
          _cmp16((const void*)(_check_pointer(i6, 23116)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
          if (i6) goto l11;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23190))+4);
          i6 = (
          _cmp16((const void*)(_check_pointer(i6, 23200)),(const void*)((OOC_CHAR16[]){100,101,115,116,45,110,97,109,101,0})))==(OOC_INT32)0;
          if (i6) goto l9;
          OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i0);
          i6 = (OOC_INT32)lastError;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23387))+4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23387))+4);
          i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 23397)), (OOC_INT32)0);
          i5 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i7, 23397)), i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 23340)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i5);
          
          goto l12;
l9:
          i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i5);
          destName = (Object__String)i4;
          
          goto l12;
l11:
          i3 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i5);
          name = (Object__String)i3;
          
l12:
          i2 = i2+1;
          i5 = i2<=i1;
          i = i2;
          if (i5) goto l4_loop;
l16:
          i1=i3;i2=i4;
l17:
          i3 = i1==(OOC_INT32)0;
          if (!i3) goto l20;
          OOC_Package__ProcessPackage_Err(5, (Config_Parser__Node)i0);
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23543))+36);
          node = (Config_Parser__Node)i0;
          OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
          i0 = (OOC_INT32)node;
          i3 = i0!=(OOC_INT32)0;
          if (!i3) goto l23;
          OOC_Package__ProcessPackage_Err(4, (Config_Parser__Node)i0);
l23:
          i0 = (OOC_INT32)OOC_Package__NewFile((Object__String)i1, (Object__String)i2);
          return (OOC_Package__File)i0;
          ;
        }


      i0 = (OOC_INT32)OOC_Package__NewFileSet();
      fileSet = (OOC_Package__FileSet)i0;
      i1 = (OOC_INT32)elem;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23798))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 23807));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l16;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23836))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23845))+4);
      i4 = _check_pointer(i4, 23850);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 23850))*4);
      att = (XML_Builder__Attribute)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23870))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 23880)),(const void*)((OOC_CHAR16[]){115,111,117,114,99,101,45,100,105,114,0})))==(OOC_INT32)0;
      if (i5) goto l10;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23969))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 23979)),(const void*)((OOC_CHAR16[]){100,101,115,116,45,100,105,114,0})))==(OOC_INT32)0;
      if (i5) goto l8;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i1);
      i5 = (OOC_INT32)lastError;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24164))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24164))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 24174)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i6, 24174)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24117)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i5, "name", 5, (Msg__LStringPtr)i4);
      goto l11;
l8:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)((_check_pointer(i0, 24017))+8) = i4;
      goto l11;
l10:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)((_check_pointer(i0, 23920))+4) = i4;
l11:
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24219))+4);
      i0 = i0==(OOC_INT32)0;
      if (!i0) goto l19;
      OOC_Package__ProcessPackage_Err(10, (Config_Parser__Node)i1);
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24318))+36);
      node = (Config_Parser__Node)i0;
      OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
      i0 = (OOC_INT32)node;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l35;
l22_loop:
      i0 = (OOC_INT32)node;
      i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){102,105,108,101,45,115,101,116,0}), 9);
      if (i0) goto l29;
      i0 = (OOC_INT32)node;
      i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){102,105,108,101,0}), 5);
      if (i0) goto l27;
      i0 = (OOC_INT32)node;
      OOC_Package__ProcessPackage_Err(12, (Config_Parser__Node)i0);
      i0 = (OOC_INT32)node;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24728));
      node = (Config_Parser__Node)i0;
      goto l30;
l27:
      i0 = (OOC_INT32)fileSet;
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseFileSet_ParseFile((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24605)))), &_td_Config_Parser__ElementDesc, 24605)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24575)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i0, (OOC_Package__FileData)i1);
      i0 = (OOC_INT32)node;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24639));
      node = (Config_Parser__Node)i0;
      goto l30;
l29:
      i0 = (OOC_INT32)fileSet;
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseFileSet((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24470)))), &_td_Config_Parser__ElementDesc, 24470)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24437)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i0, (OOC_Package__FileData)i1);
      i0 = (OOC_INT32)node;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24504));
      node = (Config_Parser__Node)i0;
l30:
      OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
      i0 = (OOC_INT32)node;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l22_loop;
l35:
      i0 = (OOC_INT32)fileSet;
      return (OOC_Package__FileSet)i0;
      ;
    }


  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24850))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 24855)),(const void*)((OOC_CHAR16[]){112,97,99,107,97,103,101,0})))!=(OOC_INT32)0;
  if (!i1) goto l3;
  OOC_Package__ProcessPackage_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)Msg__GetLStringPtr(((OOC_CHAR16[]){112,97,99,107,97,103,101,0}), 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24927)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l3:
  i0 = (OOC_INT32)OOC_Package__NewPackage();
  pkg = (OOC_Package__Package)i0;
  i0 = (OOC_INT32)root;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25043))+32);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 25052));
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l15;
  i1=0;
l6_loop:
  i2 = (OOC_INT32)root;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25079))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 25088))+4);
  i3 = _check_pointer(i3, 25093);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 25093))*4);
  att = (XML_Builder__Attribute)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25111))+4);
  i3 = (
  _cmp16((const void*)(_check_pointer(i3, 25121)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
  if (i3) goto l9;
  OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i2);
  i1 = (OOC_INT32)lastError;
  i2 = (OOC_INT32)att;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25287))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25287))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25297)), (OOC_INT32)0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 25297)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25240)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
  goto l10;
l9:
  i2 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i1);
  *(OOC_INT32*)((_check_pointer(i2, 25149))+8) = i1;
l10:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l6_loop;
l15:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25332))+8);
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l18;
  i0 = (OOC_INT32)root;
  OOC_Package__ProcessPackage_Err(5, (Config_Parser__Node)i0);
l18:
  i0 = (OOC_INT32)root;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25419))+36);
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){118,101,114,115,105,111,110,0}), 8);
  if (i0) goto l21;
  i0 = (OOC_INT32)node;
  OOC_Package__ProcessPackage_Err(6, (Config_Parser__Node)i0);
  goto l22;
l21:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)node;
  i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseVersion((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25532)))), &_td_Config_Parser__ElementDesc, 25532)));
  *(OOC_INT32*)((_check_pointer(i0, 25495))+12) = i1;
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25561));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l22:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){114,101,113,117,105,114,101,115,0}), 9);
  if (!i0) goto l29;
l24_loop:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25714));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){114,101,113,117,105,114,101,115,0}), 9);
  if (i0) goto l24_loop;
l29:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){111,112,116,105,111,110,115,0}), 8);
  if (!i0) goto l32;
  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25843));
  i2 = (OOC_INT32)OOC_Config__options;
  i3 = (OOC_INT32)OOC_Package__stringType;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)errorListener;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25830)))), &_td_Config_Parser__ElementDesc, 25830)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i3, (XML_Locator__ErrorListener)i5, (OOC_Error__List)i4);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25944));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l32:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){112,114,97,103,109,97,115,0}), 8);
  if (!i0) goto l35;
  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26073))+4);
  i2 = (OOC_INT32)OOC_Config__pragmas;
  i3 = (OOC_INT32)OOC_Package__stringType;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)errorListener;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26060)))), &_td_Config_Parser__ElementDesc, 26060)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i3, (XML_Locator__ErrorListener)i5, (OOC_Error__List)i4);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26174));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l35:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){108,105,98,114,97,114,121,0}), 8);
  if (!i0) goto l43;
l38_loop:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26268))+16);
  i2 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26268))+16);
  i2 = (OOC_INT32)OOC_Package__ProcessPackage_ParseLibrary((Config_Parser__Element)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26309)))), &_td_Config_Parser__ElementDesc, 26309)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26276)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26339));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){108,105,98,114,97,114,121,0}), 8);
  if (i0) goto l38_loop;
l43:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){101,120,101,99,117,116,97,98,108,101,0}), 11);
  if (!i0) goto l51;
l46_loop:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26431))+20);
  i2 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26431))+20);
  i2 = (OOC_INT32)OOC_Package__ProcessPackage_ParseExecutable((Config_Parser__Element)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26478)))), &_td_Config_Parser__ElementDesc, 26478)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26442)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26508));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){101,120,101,99,117,116,97,98,108,101,0}), 11);
  if (i0) goto l46_loop;
l51:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)OOC_Package__NewFileSet();
  *(OOC_INT32*)((_check_pointer(i0, 26556))+24) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26589))+24);
  i2 = (OOC_INT32)_c5;
  *(OOC_INT32*)((_check_pointer(i1, 26597))+4) = i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26623))+24);
  *(OOC_INT32*)((_check_pointer(i0, 26631))+8) = i2;
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){102,105,108,101,45,115,101,116,0}), 9);
  if (!i0) goto l59;
l54_loop:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26698))+24);
  i2 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26698))+24);
  i2 = (OOC_INT32)OOC_Package__ProcessPackage_ParseFileSet((Config_Parser__Element)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26739)))), &_td_Config_Parser__ElementDesc, 26739)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26706)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i0, (OOC_Package__FileData)i2);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26769));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){102,105,108,101,45,115,101,116,0}), 9);
  if (i0) goto l54_loop;
l59:
  i0 = (OOC_INT32)node;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l62;
  OOC_Package__ProcessPackage_Err(4, (Config_Parser__Node)i0);
l62:
  i0 = (OOC_INT32)errList;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 26895));
  i0 = i0!=0;
  if (!i0) goto l65;
  pkg = (OOC_Package__Package)(OOC_INT32)0;
l65:
  i0 = (OOC_INT32)pkg;
  return (OOC_Package__Package)i0;
  ;
}

static OOC_Package__Repository OOC_Package__ProcessRepository(Config_Parser__Element root, XML_Locator__ErrorListener errorListener, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg lastError;
  OOC_Package__Repository rep;
  Config_Parser__Node node;
  auto void OOC_Package__ProcessRepository_Err(OOC_INT32 code, Config_Parser__Node xmlNode);
  auto void OOC_Package__ProcessRepository_SkipWS(Config_Parser__Node *node);
    
    void OOC_Package__ProcessRepository_Err(OOC_INT32 code, Config_Parser__Node xmlNode) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)errorListener;
      i1 = (OOC_INT32)xmlNode;
      i2 = (OOC_INT32)OOC_Package__packageContext;
      i3 = code;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27338)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 27420))+4));
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27441)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
      return;
      ;
    }

    
    void OOC_Package__ProcessRepository_SkipWS(Config_Parser__Node *node) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*node;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27561)))), &_td_Config_Parser__CharDataDesc);
      
l5:
      if (!i0) goto l19;
l7_loop:
      i0 = (OOC_INT32)*node;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27600)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
      i1 = !i1;
      if (!i1) goto l10;
      OOC_Package__ProcessRepository_Err(2, (Config_Parser__Node)i0);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27692));
      *node = (Config_Parser__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27561)))), &_td_Config_Parser__CharDataDesc);
      
l15:
      if (i0) goto l7_loop;
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27751))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 27756)),(const void*)((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0})))!=(OOC_INT32)0;
  if (!i1) goto l3;
  OOC_Package__ProcessRepository_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)Msg__GetLStringPtr(((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0}), 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27831)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l3:
  i0 = (OOC_INT32)OOC_Package__NewRepository();
  rep = (OOC_Package__Repository)i0;
  i0 = (OOC_INT32)root;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27947))+36);
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){105,110,115,116,97,108,108,101,100,0}), 10);
  if (!i0) goto l10;
l5_loop:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28035));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){105,110,115,116,97,108,108,101,100,0}), 10);
  if (i0) goto l5_loop;
l10:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){111,112,116,105,111,110,115,0}), 8);
  if (!i0) goto l13;
  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)rep;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28164));
  i2 = (OOC_INT32)OOC_Config__options;
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)errorListener;
  i5 = (OOC_INT32)OOC_Package__stringType;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28151)))), &_td_Config_Parser__ElementDesc, 28151)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i5, (XML_Locator__ErrorListener)i4, (OOC_Error__List)i3);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28265));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
l13:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){112,114,97,103,109,97,115,0}), 8);
  if (!i0) goto l16;
  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)rep;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28394))+4);
  i2 = (OOC_INT32)OOC_Config__pragmas;
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)errorListener;
  i5 = (OOC_INT32)OOC_Package__stringType;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28381)))), &_td_Config_Parser__ElementDesc, 28381)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i5, (XML_Locator__ErrorListener)i4, (OOC_Error__List)i3);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28495));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
l16:
  i0 = (OOC_INT32)node;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
  OOC_Package__ProcessRepository_Err(4, (Config_Parser__Node)i0);
l19:
  i0 = (OOC_INT32)errList;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 28626));
  i0 = i0!=0;
  if (!i0) goto l22;
  rep = (OOC_Package__Repository)(OOC_INT32)0;
l22:
  i0 = (OOC_INT32)rep;
  return (OOC_Package__Repository)i0;
  ;
}

static OOC_Repository__PkgInfo OOC_Package__ParseFile(const OOC_CHAR8 fileName__ref[], OOC_LEN fileName_0d, OOC_CHAR8 requirePackage, OOC_Error__List *errList) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(fileName,OOC_CHAR8 ,fileName_0d)
  Config_Parser__Parser p;
  Msg__Msg res;

  OOC_INITIALIZE_VPAR(fileName__ref,fileName,OOC_CHAR8 ,fileName_0d)
  OOC_Logger__ReadFileName((void*)(OOC_INT32)fileName, fileName_0d);
  i0 = (OOC_INT32)Config_Parser__NewFile((void*)(OOC_INT32)fileName, fileName_0d, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i2 = i1!=(OOC_INT32)0;
  p = (Config_Parser__Parser)i0;
  if (i2) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29041)))), Config_Parser__ParserDesc_ParseDocument)),Config_Parser__ParserDesc_ParseDocument)((Config_Parser__Parser)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29070))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 29078));
  i1 = i1==0;
  if (i1) goto l5;
  i1 = (OOC_INT32)*errList;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29366))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29353)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
  goto l16;
l5:
  i1 = requirePackage;
  i1 = !i1;
  if (i1) goto l8;
  i1=OOC_FALSE;
  goto l10;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29129))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29134))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 29139)),(const void*)((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0})))==(OOC_INT32)0;
  
l10:
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29288))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29280))+12);
  i2 = (OOC_INT32)*errList;
  i0 = (OOC_INT32)OOC_Package__ProcessPackage((Config_Parser__Element)i0, (XML_Locator__ErrorListener)i1, (OOC_Error__List)i2);
  return (OOC_Repository__PkgInfo)i0;
  goto l16;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29208))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29200))+12);
  i2 = (OOC_INT32)*errList;
  i0 = (OOC_INT32)OOC_Package__ProcessRepository((Config_Parser__Element)i0, (XML_Locator__ErrorListener)i1, (OOC_Error__List)i2);
  return (OOC_Repository__PkgInfo)i0;
  goto l16;
l15:
  i0 = (OOC_INT32)*errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29011)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
l16:
  return (OOC_Repository__PkgInfo)(OOC_INT32)0;
  ;
}

OOC_Package__Package OOC_Package__GetPackage(const OOC_CHAR8 pkgName__ref[], OOC_LEN pkgName_0d, OOC_Repository__Repository *rep) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(pkgName,OOC_CHAR8 ,pkgName_0d)

  OOC_INITIALIZE_VPAR(pkgName__ref,pkgName,OOC_CHAR8 ,pkgName_0d)
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29631))+4);
  i1 = i0!=(OOC_INT32)0;
  *rep = (OOC_Repository__Repository)i0;
  if (!i1) goto l19;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29683))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29718))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29731)))), &_td_OOC_Package__PackageDesc);
  
l8:
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29757))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29770)))), &_td_OOC_Package__PackageDesc, 29770)), 29778))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29757))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29770)))), &_td_OOC_Package__PackageDesc, 29770)), 29778))+8);
  i3 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)pkgName, pkgName_0d);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29783)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i2, (Object__Object)i3);
  
l12:
  if (!i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29841))+8);
  return (OOC_Package__Package)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29854)))), &_td_OOC_Package__PackageDesc, 29854));
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29891));
  *rep = (OOC_Repository__Repository)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  return (OOC_Package__Package)(OOC_INT32)0;
  ;
}

OOC_CHAR8 OOC_Package__ParseMetaData(Config_Section_Options__Section options, Config_Section_Options__Section pragmas) {
  register OOC_INT32 i0,i1;
  OOC_Error__List errList;
  OOC_CHAR8 dummy;
  auto OOC_CHAR8 OOC_Package__ParseMetaData_Parse(OOC_Repository__Repository rep);
    
    OOC_CHAR8 OOC_Package__ParseMetaData_Parse(OOC_Repository__Repository rep) {
      register OOC_INT32 i0,i1,i2;
      URI__URI uri;
      OOC_Repository__URIBuffer fileName;
      OOC_Repository__PkgInfo pkg;

      i0 = (OOC_INT32)rep;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30259));
      i1 = OOC_Package__ParseMetaData_Parse((OOC_Repository__Repository)i1);
      if (!i1) goto l15;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30294)))), OOC_Repository__RepositoryDesc_GetResource)),OOC_Repository__RepositoryDesc_GetResource)((OOC_Repository__Repository)i0, "", 1, "pkginfo.xml", 12);
      uri = (URI__URI)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l15;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30379)))), &_td_URI_Scheme_File__URIDesc, 30379)), 30383)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30379)))), &_td_URI_Scheme_File__URIDesc, 30379)), (void*)(OOC_INT32)fileName, 1024);
      i1 = (OOC_INT32)OOC_Package__ParseFile((void*)(OOC_INT32)fileName, 1024, OOC_FALSE, (void*)(OOC_INT32)&errList);
      pkg = (OOC_Repository__PkgInfo)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30474)))), OOC_Repository__RepositoryDesc_SetPackageInfo)),OOC_Repository__RepositoryDesc_SetPackageInfo)((OOC_Repository__Repository)i0, (OOC_Repository__PkgInfo)i1);
      i0 = i1!=(OOC_INT32)0;
      if (!i0) goto l9;
      i0 = (OOC_INT32)options;
      i2 = (OOC_INT32)pragmas;
      OOC_Package__MergeConfig((OOC_Repository__PkgInfo)i1, (Config_Section_Options__Section)i0, (Config_Section_Options__Section)i2);
l9:
      i0 = (OOC_INT32)errList;
      i0 = *(OOC_INT32*)(_check_pointer(i0, 30618));
      i0 = i0!=0;
      if (!i0) goto l15;
      return OOC_FALSE;
l15:
      return OOC_TRUE;
      ;
    }


  i0 = (OOC_INT32)OOC_Error__NewList("", 1);
  errList = (OOC_Error__List)i0;
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30839))+4);
  i0 = OOC_Package__ParseMetaData_Parse((OOC_Repository__Repository)i0);
  dummy = i0;
  i0 = (OOC_INT32)errList;
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30865)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30911)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  return i0;
  ;
}

static void OOC_Package__WriteKeyValue(XML_Writer__Writer w, const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, ADT_ArrayList__ArrayList list) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(tag,OOC_CHAR8 ,tag_0d)
  OOC_INT32 i;
  OOC_Package__KeyValue kv;
  Config_Value__Value v;
  OOC_CHAR8 type[32];
  OOC_CHAR8 str[1024];

  OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR8 ,tag_0d)
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31190)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
  i1 = (OOC_INT32)list;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 31241))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 31268));
  i4 = _check_pointer(i4, 31274);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 31274))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 31278)))), &_td_OOC_Package__KeyValueDesc, 31278);
  kv = (OOC_Package__KeyValue)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31296)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){100,101,102,105,110,101,0}), 7, OOC_TRUE);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 31349));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31330)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i5);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 31369))+4);
  v = (Config_Value__Value)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31389)))), &_td_Config_Value_String__ValueDesc);
  if (i6) goto l14;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31447)))), &_td_Config_Value_Boolean__ValueDesc);
  if (i6) goto l12;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31507)))), &_td_Config_Value_Integer__ValueDesc);
  if (i6) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31504)))), 31504);
  goto l15;
l10:
  _copy_8((const void*)"integer",(void*)(OOC_INT32)type,32);
  goto l15;
l12:
  _copy_8((const void*)"boolean",(void*)(OOC_INT32)type,32);
  goto l15;
l14:
  _copy_8((const void*)"string",(void*)(OOC_INT32)type,32);
l15:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31576)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){116,121,112,101,0}), 5, (void*)(OOC_INT32)type, 32);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 31617))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 31617))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31623)))), Config_Value__ValueDesc_ValueToString)),Config_Value__ValueDesc_ValueToString)((Config_Value__Value)i4, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31651)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31677)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31713)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_Package__WritePackage(OOC_Package__Package pkg, const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  ADT_StringBuffer__StringBuffer b;
  ADT_StringBuffer__CharsLatin1 fileName;
  Files__File f;
  XML_Writer__Writer w;
  OOC_INT32 i;
  auto void OOC_Package__WritePackage_WriteVersion(XML_Writer__Writer w, OOC_Package__Version version);
  auto void OOC_Package__WritePackage_WriteLibrary(XML_Writer__Writer w, OOC_Package__Library library);
  auto void OOC_Package__WritePackage_WriteExecutable(XML_Writer__Writer w, OOC_Package__Executable executable);
  auto void OOC_Package__WritePackage_WriteFileSet(XML_Writer__Writer w, OOC_Package__FileSet fileSet);
    
    void OOC_Package__WritePackage_WriteVersion(XML_Writer__Writer w, OOC_Package__Version version) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32074)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,101,114,115,105,111,110,0}), 8, OOC_FALSE);
      i1 = (OOC_INT32)version;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 32137));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32110)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,117,114,114,101,110,116,0}), 8, i2);
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32165))+4);
      i2 = i2>0;
      if (!i2) goto l3;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32212))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32189)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,103,101,0}), 4, i2);
l3:
      i1 = *(OOC_INT32*)((_check_pointer(i1, 32264))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32236)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,118,105,115,105,111,110,0}), 9, i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32283)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_Package__WritePackage_WriteLibrary(XML_Writer__Writer w, OOC_Package__Library library) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32411)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){108,105,98,114,97,114,121,0}), 8, OOC_FALSE);
      i1 = (OOC_INT32)library;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32471));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32447)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32517))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32486)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0}), 12, (Object__String)i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32560))+8);
      OOC_Package__WritePackage_WriteVersion((XML_Writer__Writer)i0, (OOC_Package__Version)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32578)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_Package__WritePackage_WriteExecutable(XML_Writer__Writer w, OOC_Package__Executable executable) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32715)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,101,99,117,116,97,98,108,101,0}), 11, OOC_FALSE);
      i1 = (OOC_INT32)executable;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32788));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32754)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0}), 12, (Object__String)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32809)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_Package__WritePackage_WriteFileSet(XML_Writer__Writer w, OOC_Package__FileSet fileSet) {
      register OOC_INT32 i0,i1,i2;
      OOC_Package__FileData ptr;
      auto void OOC_Package__WritePackage_WriteFileSet_WriteFile(XML_Writer__Writer w, OOC_Package__File file);
        
        void OOC_Package__WritePackage_WriteFileSet_WriteFile(XML_Writer__Writer w, OOC_Package__File file) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33032)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){102,105,108,101,0}), 5, OOC_FALSE);
          i1 = (OOC_INT32)file;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33088))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33067)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33112))+8);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l3;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33171))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33145)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){100,101,115,116,45,110,97,109,101,0}), 10, (Object__String)i1);
l3:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33205)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33271)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){102,105,108,101,45,115,101,116,0}), 9, OOC_FALSE);
      i1 = (OOC_INT32)fileSet;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33338))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33308)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,111,117,114,99,101,45,100,105,114,0}), 11, (Object__String)i2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33368))+8);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33426))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33398)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){100,101,115,116,45,100,105,114,0}), 9, (Object__String)i2);
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33468))+12);
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l6_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33518)))), &_td_OOC_Package__FileSetDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33576)))), &_td_OOC_Package__FileDesc);
      if (i1) goto l11;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33571)))), 33571);
      goto l14;
l11:
      i1 = (OOC_INT32)w;
      OOC_Package__WritePackage_WriteFileSet_WriteFile((XML_Writer__Writer)i1, (OOC_Package__File)i0);
      goto l14;
l13:
      i1 = (OOC_INT32)w;
      OOC_Package__WritePackage_WriteFileSet((XML_Writer__Writer)i1, (OOC_Package__FileSet)i0);
l14:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 33646));
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l6_loop;
l19:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33679)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(OOC_INT32)targetDir, targetDir_0d);
  b = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33786)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "/pkginfo", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33821)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c6));
  i1 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33851))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33840)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33864)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c7));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33898)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i0);
  fileName = (ADT_StringBuffer__CharsLatin1)i0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 33946)), (OOC_INT32)0);
  i0 = (OOC_INT32)Files__New((void*)(_check_pointer(i0, 33946)), i2, 2, (void*)(OOC_INT32)res);
  i2 = (OOC_INT32)*res;
  i2 = i2==(OOC_INT32)0;
  f = (Files__File)i0;
  if (!i2) goto l25;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34017)))), Files__FileDesc_NewWriter)),Files__FileDesc_NewWriter)((Files__File)i0);
  i2 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i2, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34071)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,97,99,107,97,103,101,0}), 8, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34127))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34107)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34160))+12);
  OOC_Package__WritePackage_WriteVersion((XML_Writer__Writer)i0, (OOC_Package__Version)i1);
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 34208));
  i2 = (OOC_INT32)w;
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "options", 8, (ADT_ArrayList__ArrayList)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34256))+4);
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "pragmas", 8, (ADT_ArrayList__ArrayList)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34290))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 34298))+4);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l10;
  i1=0;
l5_loop:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34336))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 34344));
  i2 = _check_pointer(i2, 34350);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 34350))*4);
  i2 = (OOC_INT32)w;
  OOC_Package__WritePackage_WriteLibrary((XML_Writer__Writer)i2, (OOC_Package__Library)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34354)))), &_td_OOC_Package__LibraryDesc, 34354)));
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l5_loop;
l10:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34399))+20);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 34410))+4);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l18;
  i1=0;
l13_loop:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34451))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 34462));
  i2 = _check_pointer(i2, 34468);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 34468))*4);
  i2 = (OOC_INT32)w;
  OOC_Package__WritePackage_WriteExecutable((XML_Writer__Writer)i2, (OOC_Package__Executable)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34472)))), &_td_OOC_Package__ExecutableDesc, 34472)));
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l13_loop;
l18:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34522))+24);
  i1 = (OOC_INT32)w;
  OOC_Package__WritePackage_WriteFileSet((XML_Writer__Writer)i1, (OOC_Package__FileSet)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34540)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34573)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34608))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34615))+4);
  *res = (Msg__Msg)i0;
  i0 = (OOC_INT32)f;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34628)))), Files__FileDesc_Close)),Files__FileDesc_Close)((Files__File)i0);
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l21;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 34680));
  *res = (Msg__Msg)i0;
l21:
  i0 = (OOC_INT32)*res;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l25;
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34732)))), ADT_StringBuffer__StringBufferDesc_Insert)),ADT_StringBuffer__StringBufferDesc_Insert)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c8), 0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34779)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i0);
  fileName = (ADT_StringBuffer__CharsLatin1)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 34831)), (OOC_INT32)0);
  OOC_Logger__ShellCommand((void*)(_check_pointer(i0, 34831)), i1);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 34881)), (OOC_INT32)0);
  i0 = OS_ProcessManagement__system((void*)(_check_pointer(i0, 34881)), i1);
l25:
  return;
  ;
}

void OOC_Package__WriteRepository(OOC_Package__Repository rep, const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_Package__URIBuffer fileName;
  Files__File f;
  XML_Writer__Writer w;
  OOC_INT32 i;
  auto void OOC_Package__WriteRepository_WriteInstalledPkg(XML_Writer__Writer w, Object__String pkgName);
    
    void OOC_Package__WriteRepository_WriteInstalledPkg(XML_Writer__Writer w, Object__String pkgName) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35214)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,110,115,116,97,108,108,101,100,0}), 10, OOC_FALSE);
      i1 = (OOC_INT32)pkgName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35252)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,97,99,107,97,103,101,0}), 8, (Object__String)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35289)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  _copy_8((const void*)(OOC_INT32)targetDir,(void*)(OOC_INT32)fileName,1024);
  Strings__Append("/pkginfo.xml", 13, (void*)(OOC_INT32)fileName, 1024);
  OOC_Logger__WriteFileName((void*)(OOC_INT32)fileName, 1024);
  i0 = (OOC_INT32)Files__New((void*)(OOC_INT32)fileName, 1024, 2, (void*)(OOC_INT32)res);
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  f = (Files__File)i0;
  if (!i1) goto l17;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35559)))), Files__FileDesc_NewWriter)),Files__FileDesc_NewWriter)((Files__File)i0);
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35613)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0}), 11, OOC_FALSE);
  i0 = (OOC_INT32)rep;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35668))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 35682))+4);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l10;
  i1=0;
l5_loop:
  i2 = (OOC_INT32)rep;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 35725))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 35739));
  i2 = _check_pointer(i2, 35745);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 35745))*4);
  i2 = (OOC_INT32)w;
  OOC_Package__WriteRepository_WriteInstalledPkg((XML_Writer__Writer)i2, (Object__String)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35749)))), &_td_Object__StringDesc, 35749)));
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l5_loop;
l10:
  i0 = (OOC_INT32)rep;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35807));
  i2 = (OOC_INT32)w;
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "options", 8, (ADT_ArrayList__ArrayList)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35855))+4);
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "pragmas", 8, (ADT_ArrayList__ArrayList)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35873)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35909)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 35944))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35951))+4);
  *res = (Msg__Msg)i0;
  i0 = (OOC_INT32)f;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35964)))), Files__FileDesc_Close)),Files__FileDesc_Close)((Files__File)i0);
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l13;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36016));
  *res = (Msg__Msg)i0;
l13:
  i0 = (OOC_INT32)*res;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l17;
  Strings__Insert("chmod 644 ", 11, 0, (void*)(OOC_INT32)fileName, 1024);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)fileName, 1024);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)fileName, 1024);
l17:
  return;
  ;
}

void OOC_Package__RemovePkgInfoCmd(OOC_Package__Package pkg, const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d, const OOC_CHAR8 uninstall__ref[], OOC_LEN uninstall_0d, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_ALLOCATE_VPAR(uninstall,OOC_CHAR8 ,uninstall_0d)
  ADT_StringBuffer__StringBuffer b;
  ADT_StringBuffer__CharsLatin1 chars;

  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_INITIALIZE_VPAR(uninstall__ref,uninstall,OOC_CHAR8 ,uninstall_0d)
  i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(OOC_INT32)uninstall, uninstall_0d);
  b = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36508)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c9));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36527)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)targetDir, targetDir_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36558)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c10));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36587)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c11));
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36617))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36606)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36630)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c12));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36661)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i0);
  chars = (ADT_StringBuffer__CharsLatin1)i0;
  _copy_8((const void*)(_check_pointer(i0, 36691)),(void*)(OOC_INT32)cmd,cmd_0d);
  return;
  ;
}

OOC_Package__Package OOC_Package__GetPkgInfo(const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d, const OOC_CHAR8 pkgName__ref[], OOC_LEN pkgName_0d, OOC_Error__List *errList) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_ALLOCATE_VPAR(pkgName,OOC_CHAR8 ,pkgName_0d)
  OOC_Package__URIBuffer fileName;
  OOC_Repository__PkgInfo pkgInfo;

  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_INITIALIZE_VPAR(pkgName__ref,pkgName,OOC_CHAR8 ,pkgName_0d)
  _copy_8((const void*)(OOC_INT32)targetDir,(void*)(OOC_INT32)fileName,1024);
  Strings__Append("/pkginfo", 9, (void*)(OOC_INT32)fileName, 1024);
  Strings__Append("/", 2, (void*)(OOC_INT32)fileName, 1024);
  Strings__Append((void*)(OOC_INT32)pkgName, pkgName_0d, (void*)(OOC_INT32)fileName, 1024);
  Strings__Append(".xml", 5, (void*)(OOC_INT32)fileName, 1024);
  i0 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)fileName, 1024);
  *errList = (OOC_Error__List)i0;
  i0 = (OOC_INT32)OOC_Package__ParseFile((void*)(OOC_INT32)fileName, 1024, OOC_TRUE, (void*)(OOC_INT32)errList);
  i1 = i0!=(OOC_INT32)0;
  pkgInfo = (OOC_Repository__PkgInfo)i0;
  if (i1) goto l3;
  return (OOC_Package__Package)(OOC_INT32)0;
  goto l4;
l3:
  return (OOC_Package__Package)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37237)))), &_td_OOC_Package__PackageDesc, 37237));
l4:
  _failed_function(36735); return 0;
  ;
}

OOC_CHAR8 OOC_Package__UpdateRepository(const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_Package__URIBuffer dirName;
  OS_Files__NameArray files;
  Msg__Msg res;
  OOC_Package__Repository repository;
  OOC_INT32 i;
  OOC_Package__URIBuffer fileName;
  OOC_Error__List errList;
  OOC_Repository__PkgInfo pkg;
  auto OOC_CHAR8 OOC_Package__UpdateRepository_IsPkgInfo(const OOC_CHAR8 name__ref[], OOC_LEN name_0d);
    
    OOC_CHAR8 OOC_Package__UpdateRepository_IsPkgInfo(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
      OOC_CHAR8 found;
      OOC_INT16 pos;

      OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
      Strings__FindPrev(".xml", 5, (void*)(OOC_INT32)name, name_0d, 32767, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
      i0 = found;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l4;
l3:
      i0 = pos;
      i1 = Strings__Length((void*)(OOC_INT32)name, name_0d);
      i0 = i0==(i1-4);
      
l4:
      return i0;
      ;
    }


  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  _copy_8((const void*)(OOC_INT32)targetDir,(void*)(OOC_INT32)dirName,1024);
  Strings__Append("/pkginfo", 9, (void*)(OOC_INT32)dirName, 1024);
  i0 = (OOC_INT32)OS_Files__listdir((void*)(OOC_INT32)dirName, 1024, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i1 = i1==(OOC_INT32)0;
  files = (OS_Files__NameArray)i0;
  if (i1) goto l3;
  Out__String("Error: No such directory ", 26);
  Out__String((void*)(OOC_INT32)dirName, 1024);
  Out__Ln();
  return OOC_FALSE;
  goto l22;
l3:
  i1 = (OOC_INT32)OOC_Package__NewRepository();
  repository = (OOC_Package__Repository)i1;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 38019)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l18;
  i1=0;
l6_loop:
  i2 = (OOC_INT32)files;
  i3 = _check_pointer(i2, 38053);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 38053))*4);
  i2 = _check_pointer(i2, 38053);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 38053))*4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 38056)), (OOC_INT32)0);
  i1 = OOC_Package__UpdateRepository_IsPkgInfo((void*)(_check_pointer(i3, 38056)), i1);
  i2 = i;
  if (!i1) goto l13;
  _copy_8((const void*)(OOC_INT32)dirName,(void*)(OOC_INT32)fileName,1024);
  Strings__Append("/", 2, (void*)(OOC_INT32)fileName, 1024);
  i1 = (OOC_INT32)files;
  i3 = _check_pointer(i1, 38170);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 38170))*4);
  i1 = _check_pointer(i1, 38170);
  i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i4, OOC_UINT32, 38170))*4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 38173)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i3, 38173)), i1, (void*)(OOC_INT32)fileName, 1024);
  i1 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)fileName, 1024);
  errList = (OOC_Error__List)i1;
  i1 = (OOC_INT32)OOC_Package__ParseFile((void*)(OOC_INT32)fileName, 1024, OOC_TRUE, (void*)(OOC_INT32)&errList);
  pkg = (OOC_Repository__PkgInfo)i1;
  i3 = (OOC_INT32)errList;
  i4 = *(OOC_INT32*)(_check_pointer(i3, 38318));
  i4 = i4!=0;
  if (i4) goto l11;
  i3 = (OOC_INT32)repository;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38448)))), OOC_Package__RepositoryDesc_MergePackage)),OOC_Package__RepositoryDesc_MergePackage)((OOC_Package__Repository)i3, (OOC_Package__Package)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38466)))), &_td_OOC_Package__PackageDesc, 38466)));
  goto l13;
l11:
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38357)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i3, (Channel__Channel)i1);
  return OOC_FALSE;
l13:
  i1 = i2+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l6_loop;
l18:
  i0 = (OOC_INT32)repository;
  OOC_Package__WriteRepository((OOC_Package__Repository)i0, (void*)(OOC_INT32)targetDir, targetDir_0d, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l21;
  Out__String("Error: Write error for ", 24);
  Out__String((void*)(OOC_INT32)fileName, 1024);
  Out__Ln();
  return OOC_FALSE;
l21:
  return OOC_TRUE;
l22:
  _failed_function(37312); return 0;
  ;
}

void OOC_OOC_Package_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c1 = Object__NewLatin1Char((OOC_CHAR8)'.');
  _c2 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c3 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c4 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c5 = Object__NewLatin1Char((OOC_CHAR8)'.');
  _c6 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c7 = Object__NewLatin1Region(".xml", 5, (OOC_INT32)0, 4);
  _c8 = Object__NewLatin1Region("chmod 644 ", 11, (OOC_INT32)0, 10);
  _c9 = Object__NewLatin1Char((OOC_CHAR8)' ');
  _c10 = Object__NewLatin1Region("/pkginfo", 9, (OOC_INT32)0, 8);
  _c11 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c12 = Object__NewLatin1Region(".xml", 5, (OOC_INT32)0, 4);

  OOC_Package__stringType = (Object__String)((OOC_INT32)_c13);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__ErrorContext.baseTypes[0]);
  OOC_Package__packageContext = (OOC_Package__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "OOC:Package", 12);
  return;
  ;
}

/* --- */
