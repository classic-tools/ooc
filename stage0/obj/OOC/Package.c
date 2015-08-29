#include <OOC/Package.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Package__ErrorContextDesc_GetTemplate(OOC_Package__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3093))+8);
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
    _failed_case(i1, 3085);
    goto l21;
  }
l21:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4563)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static OOC_Package__Version OOC_Package__NewVersion() {
  register OOC_INT32 i0;
  OOC_Package__Version version;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Version.baseTypes[0]);
  version = (OOC_Package__Version)i0;
  *(OOC_INT32*)(_check_pointer(i0, 4713)) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 4740))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4762))+8) = -1;
  _copy_8((const void*)"",(void*)((_check_pointer(i0, 4790))+12),32);
  return (OOC_Package__Version)i0;
  ;
}

static OOC_Package__Executable OOC_Package__NewExecutable() {
  register OOC_INT32 i0;
  OOC_Package__Executable executable;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Executable.baseTypes[0]);
  executable = (OOC_Package__Executable)i0;
  *(OOC_INT32*)(_check_pointer(i0, 4959)) = (OOC_INT32)0;
  return (OOC_Package__Executable)i0;
  ;
}

static OOC_Package__Library OOC_Package__NewLibrary() {
  register OOC_INT32 i0;
  OOC_Package__Library library;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__Library.baseTypes[0]);
  library = (OOC_Package__Library)i0;
  *(OOC_INT32*)((_check_pointer(i0, 5122))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5153))+8) = (OOC_INT32)0;
  return (OOC_Package__Library)i0;
  ;
}

static void OOC_Package__InitFileData(OOC_Package__FileData fdata) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)fdata;
  *(OOC_INT32*)(_check_pointer(i0, 5267)) = (OOC_INT32)0;
  return;
  ;
}

static OOC_Package__FileSet OOC_Package__NewFileSet() {
  register OOC_INT32 i0;
  OOC_Package__FileSet fileSet;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__FileSet.baseTypes[0]);
  fileSet = (OOC_Package__FileSet)i0;
  OOC_Package__InitFileData((OOC_Package__FileData)i0);
  *(OOC_INT32*)((_check_pointer(i0, 5435))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5465))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5493))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5518))+16) = (OOC_INT32)0;
  return (OOC_Package__FileSet)i0;
  ;
}

void OOC_Package__FileSetDesc_Append(OOC_Package__FileSet fileSet, OOC_Package__FileData fdata) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fileSet;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5649))+16);
  i1 = i1==(OOC_INT32)0;
  i2 = (OOC_INT32)fdata;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5718))+16);
  *(OOC_INT32*)(_check_pointer(i1, 5723)) = i2;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 5680))+12) = i2;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 5767))+16) = i2;
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
  *(OOC_INT32*)((_check_pointer(i0, 5925))+4) = i1;
  i1 = (OOC_INT32)destName;
  *(OOC_INT32*)((_check_pointer(i0, 5948))+8) = i1;
  return (OOC_Package__File)i0;
  ;
}

OOC_Package__KeyValue OOC_Package__NewKeyValue(Object__String key, Config_Value__Value value) {
  register OOC_INT32 i0,i1;
  OOC_Package__KeyValue kv;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__KeyValue.baseTypes[0]);
  kv = (OOC_Package__KeyValue)i0;
  i1 = (OOC_INT32)key;
  *(OOC_INT32*)(_check_pointer(i0, 6122)) = i1;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 6141))+4) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6392));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6400))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)options;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6426));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6434));
  i4 = _check_pointer(i4, 6440);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6440))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6444)))), &_td_OOC_Package__KeyValueDesc, 6444);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6472));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6472));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6484)))), &_td_Object__String8Desc, 6484)), 6492)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6484)))), &_td_Object__String8Desc, 6484)));
  chars = (Object__CharsLatin1)i5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6541))+4);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 6536)), (OOC_INT32)0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6526)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i2, (void*)(_check_pointer(i5, 6536)), i6, (Config_Value__Value)i4);
  o = (Config_Section_Options__Option)i4;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6580))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6588))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l16;
  i2 = (OOC_INT32)pragmas;
  i3=0;
l11_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6614))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6622));
  i4 = _check_pointer(i4, 6628);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6628))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6632)))), &_td_OOC_Package__KeyValueDesc, 6632);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6660));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6660));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6672)))), &_td_Object__String8Desc, 6672)), 6680)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6672)))), &_td_Object__String8Desc, 6672)));
  chars = (Object__CharsLatin1)i5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6729))+4);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i5, 6724)), (OOC_INT32)0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6714)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i2, (void*)(_check_pointer(i5, 6724)), i6, (Config_Value__Value)i4);
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
  *(OOC_INT32*)((_check_pointer(i0, 6871))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6890))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 6912))+16) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 6947))+20) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 6985))+24) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 7148))+8) = i1;
  return (OOC_Package__Repository)i0;
  ;
}

void OOC_Package__RepositoryDesc_MergePackage(OOC_Package__Repository r, OOC_Package__Package pkg) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_Package__KeyValue kv;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7327))+8);
  i2 = (OOC_INT32)pkg;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7352))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7327))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7341)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i4, (Object__Object)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7381));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 7389))+4);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7415));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7423));
  i4 = _check_pointer(i4, 7429);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7429))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7433)))), &_td_OOC_Package__KeyValueDesc, 7433);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7451));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7451));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7459)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i4);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7502))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 7510))+4);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l16;
  i3=0;
l11_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7536))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7544));
  i4 = _check_pointer(i4, 7550);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7550))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7554)))), &_td_OOC_Package__KeyValueDesc, 7554);
  kv = (OOC_Package__KeyValue)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7572))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7572))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7580)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i4);
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
              i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8971)), (OOC_INT32)0);
              i1 = *(OOC_INT32*)(_check_pointer(i2, 8950));
              i0 = i1>=i0;
              
              goto l5;
l3:
              i0=OOC_TRUE;
l5:
              if (!i0) goto l7;
              i0 = *(OOC_INT32*)(_check_pointer(i2, 9008));
              buffer = (void*)((OOC_INT32)RT0__NewObject(_td_OOC_Package__8496.baseTypes[0], (i0+1)));
l7:
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9066)))), &_td_Object__String8Desc, 9066)), 9074)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9066)))), &_td_Object__String8Desc, 9066)));
              chars = (Object__CharsLatin1)i0;
              i1 = (OOC_INT32)buffer;
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9119)), (OOC_INT32)0);
              _copy_8((const void*)(_check_pointer(i0, 9110)),(void*)(_check_pointer(i1, 9119)),i3);
              i = (OOC_INT32)0;
              i0 = _check_pointer(i1, 9165);
              i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
              i0 = *(OOC_UINT8*)(i0+(_check_index((OOC_INT32)0, i1, OOC_UINT16, 9165)));
              i0 = i0!=(OOC_CHAR8)'\000';
              if (i0) goto l10;
              i0=(OOC_INT32)0;
              goto l63;
l10:
              i0=(OOC_INT32)0;
l11_loop:
              i1 = (OOC_INT32)buffer;
              i3 = _check_pointer(i1, 9200);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 9200)));
              i3 = i3==(OOC_CHAR8)'/';
              if (i3) goto l57;
              i3 = _check_pointer(i1, 9337);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 9337)));
              i3 = i3==(OOC_CHAR8)'.';
              if (i3) goto l16;
              i3=OOC_FALSE;
              goto l18;
l16:
              i3 = _check_pointer(i1, 9357);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT16, 9357)));
              i3 = i3==(OOC_CHAR8)'/';
              
l18:
              if (i3) goto l55;
              i3 = _check_pointer(i1, 9496);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 9496)));
              i3 = i3==(OOC_CHAR8)'.';
              if (i3) goto l22;
              i3=OOC_FALSE;
              goto l24;
l22:
              i3 = _check_pointer(i1, 9516);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT16, 9516)));
              i3 = i3==(OOC_CHAR8)'.';
              
l24:
              if (i3) goto l26;
              i3=OOC_FALSE;
              goto l28;
l26:
              i3 = _check_pointer(i1, 9556);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index((i0+2), i4, OOC_UINT16, 9556)));
              i3 = i3==(OOC_CHAR8)'/';
              
l28:
              if (i3) goto l40;
l30_loop:
              i3 = _check_pointer(i1, 10106);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 10106)));
              i3 = i3==(OOC_CHAR8)'\000';
              if (i3) goto l58;
              i3 = _check_pointer(i1, 10174);
              i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
              i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 10174)));
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
              i3 = i0==(OOC_INT32)0;
              if (i3) goto l52;
              i3=i0;
l43_loop:
              i3 = i3-1;
              j = i3;
              i4 = i3==(OOC_INT32)0;
              if (i4) goto l46;
              i4 = _check_pointer(i1, 9906);
              i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
              i4 = *(OOC_UINT8*)(i4+(_check_index((i3-1), i5, OOC_UINT16, 9906)));
              i4 = i4==(OOC_CHAR8)'/';
              
              goto l48;
l46:
              i4=OOC_TRUE;
l48:
              if (!i4) goto l43_loop;
l51:
              i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9957)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9957)), i4, i3, ((i0-i3)+3));
              i = i3;
              i0=i3;
              goto l58;
l52:
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9700)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9700)), i3, i0, 3);
              
              goto l58;
l55:
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9461)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9461)), i3, i0, 2);
              
              goto l58;
l57:
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9302)), (OOC_INT32)0);
              Strings__Delete((void*)(_check_pointer(i1, 9302)), i3, i0, 1);
              
l58:
              i1 = (OOC_INT32)buffer;
              i1 = _check_pointer(i1, 9165);
              i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i3, OOC_UINT16, 9165)));
              i1 = i1!=(OOC_CHAR8)'\000';
              if (i1) goto l11_loop;
l63:
              i1 = i0!=(OOC_INT32)0;
              i3 = (OOC_INT32)buffer;
              if (i1) goto l66;
              i1=OOC_FALSE;
              goto l68;
l66:
              i1 = _check_pointer(i3, 10432);
              i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i4, OOC_UINT16, 10432)));
              i1 = i1==(OOC_CHAR8)'/';
              
l68:
              if (!i1) goto l80;
l71_loop:
              i0 = i0-1;
              i = i0;
              i1 = i0!=(OOC_INT32)0;
              if (i1) goto l74;
              i1=OOC_FALSE;
              goto l76;
l74:
              i1 = _check_pointer(i3, 10432);
              i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              i1 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i4, OOC_UINT16, 10432)));
              i1 = i1==(OOC_CHAR8)'/';
              
l76:
              if (i1) goto l71_loop;
l80:
              i1 = _check_pointer(i3, 10499);
              i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
              *(OOC_UINT8*)(i1+(_check_index(i0, i4, OOC_UINT16, 10499))) = (OOC_CHAR8)'\000';
              i1 = *(OOC_INT32*)(_check_pointer(i2, 10543));
              i1 = i0!=i1;
              if (i1) goto l83;
              return (Object__String)i2;
              goto l84;
l83:
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i3, 10605)), (OOC_INT32)0);
              i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i3, 10605)), i1, 0, i0);
              return (Object__String)i0;
l84:
              _failed_function(8789); return 0;
              ;
            }


          i0 = (OOC_INT32)sourcePrefix;
          i1 = (OOC_INT32)file;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10806))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10794)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i0, (Object__String)i1);
          i0 = (OOC_INT32)OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath((Object__String)i0);
          name = (Object__String)i0;
          i0 = (OOC_INT32)file;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10831))+8);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)destPrefix;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10995))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10983)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i0);
          i0 = (OOC_INT32)OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath((Object__String)i0);
          destName = (Object__String)i0;
          
          goto l4;
l3:
          i1 = (OOC_INT32)destPrefix;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10911))+8);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10899)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i0);
          i0 = (OOC_INT32)OOC_Package__Normalize_NormalizeFileSet_NormalizeFile_NormalizePath((Object__String)i0);
          destName = (Object__String)i0;
          
l4:
          i1 = (OOC_INT32)name;
          i0 = (OOC_INT32)OOC_Package__NewFile((Object__String)i1, (Object__String)i0);
          nFile = (OOC_Package__File)i0;
          i1 = (OOC_INT32)norm;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11071)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i1, (OOC_Package__FileData)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)fileSet;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11169))+4);
      i2 = (OOC_INT32)sourcePrefix;
      i3 = (OOC_INT32)_c0;
      sourcePrefix = (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i2,(void*)i1)),(void*)i3));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11202))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11324))+4);
      i2 = (OOC_INT32)destPrefix;
      i1 = (OOC_INT32)Object__Concat2((void*)i2,(void*)i1);
      
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11263))+8);
      i2 = (OOC_INT32)destPrefix;
      i1 = (OOC_INT32)Object__Concat2((void*)i2,(void*)i1);
      
l4:
      destPrefix = (Object__String)((OOC_INT32)Object__Concat2((void*)i1,(void*)i3));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11410))+12);
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l20;
l7_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11460)))), &_td_OOC_Package__FileSetDesc);
      if (i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11545)))), &_td_OOC_Package__FileDesc);
      if (i1) goto l12;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11540)))), 11540);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11616));
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11869))+8);
          i2 = (OOC_INT32)b;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11869))+8);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11888))+8);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11878)))), Object__StringDesc_Compare)),Object__StringDesc_Compare)((Object__String)i3, (Object__Object)i4);
          i3 = i1==0;
          cmp = i1;
          if (i3) goto l3;
          i0=i1;
          goto l4;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11944))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11944))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11959))+4);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11949)))), Object__StringDesc_Compare)),Object__StringDesc_Compare)((Object__String)i0, (Object__Object)i2);
          
l4:
          return (i0<0);
          ;
        }


      i0 = (OOC_INT32)list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12067));
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
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12275));
      next = (OOC_Package__FileData)i3;
      *(OOC_INT32*)(_check_pointer(i0, 12303)) = i1;
      a = (OOC_Package__FileData)i0;
      ptr = (OOC_Package__FileData)i3;
      i1 = i3!=(OOC_INT32)0;
      if (i1) goto l13;
      i1=i3;
      goto l14;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 12420));
      next = (OOC_Package__FileData)i1;
      *(OOC_INT32*)(_check_pointer(i3, 12450)) = i2;
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
      i0 = OOC_Package__Normalize_MergeSort_Less((OOC_Package__File)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12818)))), &_td_OOC_Package__FileDesc, 12818)), (OOC_Package__File)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12827)))), &_td_OOC_Package__FileDesc, 12827)));
      
      goto l35;
l32:
      i0=OOC_TRUE;
l35:
      if (i0) goto l37;
      i0 = (OOC_INT32)b;
      ptr = (OOC_Package__FileData)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12926));
      b = (OOC_Package__FileData)i1;
      
      goto l38;
l37:
      i0 = (OOC_INT32)a;
      ptr = (OOC_Package__FileData)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12868));
      a = (OOC_Package__FileData)i1;
      
l38:
      *(OOC_INT32*)(_check_pointer(i0, 12969)) = (OOC_INT32)0;
      i1 = (OOC_INT32)tail;
      *(OOC_INT32*)(_check_pointer(i1, 13005)) = i0;
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13082));
      return (OOC_Package__FileData)i0;
      goto l49;
l48:
      return (OOC_Package__FileData)i0;
l49:
      _failed_function(11683); return 0;
      ;
    }


  buffer = (void*)(OOC_INT32)0;
  i0 = (OOC_INT32)OOC_Package__NewFileSet();
  norm = (OOC_Package__FileSet)i0;
  *(OOC_INT32*)((_check_pointer(i0, 13191))+4) = ((OOC_INT32)_c1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13234))+4);
  *(OOC_INT32*)((_check_pointer(i0, 13218))+8) = i1;
  i0 = (OOC_INT32)fileSet;
  i1 = (OOC_INT32)_c2;
  OOC_Package__Normalize_NormalizeFileSet((OOC_Package__FileSet)i0, (Object__String)i1, (Object__String)i1);
  i0 = (OOC_INT32)norm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13317))+12);
  i1 = (OOC_INT32)OOC_Package__Normalize_MergeSort((OOC_Package__FileData)i1);
  *(OOC_INT32*)((_check_pointer(i0, 13294))+12) = i1;
  i0 = (OOC_INT32)norm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13346))+12);
  *(OOC_INT32*)((_check_pointer(i0, 13333))+16) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13365))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13400))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13405));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l10;
l4_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13454))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13459));
  *(OOC_INT32*)((_check_pointer(i0, 13441))+16) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13400))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13405));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l4_loop;
l10:
  return (OOC_Package__FileSet)i0;
  ;
}

static Object__String OOC_Package__StringAttr(XML_Builder__Attribute att) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_UnicodeBuffer__CharArray str;
  OOC_CHAR8 *buffer;

  i0 = (OOC_INT32)att;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13881))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13899))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13881))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13887)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)i2);
  str = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13934)), (OOC_INT32)0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__13833.baseTypes[0], i1);
  buffer = (void*)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13978)), (OOC_INT32)0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13964)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i0, 13964)), i3, (OOC_CHAR8)'?', (void*)(_check_pointer(i1, 13978)), i2);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14016)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 14016)), i0);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14188)))), &_td_Config_Parser__ElementDesc);
  
l5:
  if (i1) goto l7;
  i0=OOC_FALSE;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14230)))), &_td_Config_Parser__ElementDesc, 14230)), 14238))+28);
  i0 = (
  _cmp16((const void*)(_check_pointer(i0, 14243)),(const void*)(OOC_INT32)elementName))==(OOC_INT32)0;
  
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14783)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 14865))+4));
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14886)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
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
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15006)))), &_td_Config_Parser__CharDataDesc);
      
l5:
      if (!i0) goto l19;
l7_loop:
      i0 = (OOC_INT32)*node;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15045)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
      i1 = !i1;
      if (!i1) goto l10;
      OOC_Package__ParseKeyValue_Err(2, (Config_Parser__Node)i0);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15137));
      *node = (Config_Parser__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15006)))), &_td_Config_Parser__CharDataDesc);
      
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15596))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 15605));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (i3) goto l3;
      i2=i0;i0=(OOC_INT32)0;
      goto l17;
l3:
      i4=i0;i0=0;i3=(OOC_INT32)0;
l4_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15634))+32);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15643))+4);
      i5 = _check_pointer(i5, 15648);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i0, i6, OOC_UINT32, 15648))*4);
      att = (XML_Builder__Attribute)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15668))+4);
      i6 = (
      _cmp16((const void*)(_check_pointer(i6, 15678)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
      if (i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15748))+4);
      i6 = (
      _cmp16((const void*)(_check_pointer(i6, 15758)),(const void*)((OOC_CHAR16[]){116,121,112,101,0})))==(OOC_INT32)0;
      if (i6) goto l9;
      OOC_Package__ParseKeyValue_Err(3, (Config_Parser__Node)i1);
      i6 = (OOC_INT32)lastError;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15928))+4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15928))+4);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15938)), (OOC_INT32)0);
      i5 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i7, 15938)), i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15881)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i5);
      
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
      i3 = (OOC_INT32)_c3;
      stringBuffer = (Object__String)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16204))+36);
      node = (Config_Parser__Node)i4;
      i5 = i4!=(OOC_INT32)0;
      if (!i5) goto l34;
      {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l25_loop:
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16263)))), &_td_Config_Parser__CharDataDesc);
      if (i5) goto l28;
      OOC_Package__ParseKeyValue_Err(15, (Config_Parser__Node)i3);
      
      goto l29;
l28:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16318))+28);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16318))+28);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 16325)), (OOC_INT32)0);
      LongStrings__Short((void*)(_check_pointer(i5, 16325)), i6, (OOC_CHAR8)'?', (void*)(OOC_INT32)str, 1024);
      i5 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 1024);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16379)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i4, (Object__String)i5);
      stringBuffer = (Object__String)i4;
      
l29:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 16508));
      node = (Config_Parser__Node)i3;
      i5 = i3!=(OOC_INT32)0;
      if (i5) goto l25_loop;
l33:
      i3=i4;
l34:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16562)))), &_td_Object__String8Desc, 16562)), 16570)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16562)))), &_td_Object__String8Desc, 16562)));
      chars = (Object__CharsLatin1)i2;
      i4 = (OOC_INT32)options;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16610))+8);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16634)), (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16610))+8);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16619)))), Config_Value__PrototypeListDesc_GetClone)),Config_Value__PrototypeListDesc_GetClone)((Config_Value__PrototypeList)i4, (void*)(_check_pointer(i2, 16634)), i6);
      value = (Config_Value__Value)i4;
      i5 = i4==(OOC_INT32)0;
      if (i5) goto l40;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16824)))), &_td_Object__String8Desc, 16824)), 16832)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16824)))), &_td_Object__String8Desc, 16824)));
      chars = (Object__CharsLatin1)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16883)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16863)))), Config_Value__ValueDesc_StringToValue)),Config_Value__ValueDesc_StringToValue)((Config_Value__Value)i4, (void*)(_check_pointer(i2, 16883)), i3, (void*)(OOC_INT32)&errMsg);
      i2 = (OOC_INT32)errMsg;
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l41;
      OOC_Package__ParseKeyValue_Err(17, (Config_Parser__Node)i1);
      i1 = (OOC_INT32)lastError;
      i2 = (OOC_INT32)errMsg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16986)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i1, "reason", 7, (Msg__Msg)i2);
      goto l41;
l40:
      OOC_Package__ParseKeyValue_Err(16, (Config_Parser__Node)i1);
      i1 = (OOC_INT32)lastError;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16768)), (OOC_INT32)0);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 16768)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16721)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "type", 5, (Msg__StringPtr)i2);
l41:
      i0 = (OOC_INT32)OOC_Package__NewKeyValue((Object__String)i0, (Config_Value__Value)i4);
      return (OOC_Package__KeyValue)i0;
      goto l45;
l42:
      OOC_Package__ParseKeyValue_Err(11, (Config_Parser__Node)i1);
      return (OOC_Package__KeyValue)(OOC_INT32)0;
      goto l45;
l44:
      OOC_Package__ParseKeyValue_Err(5, (Config_Parser__Node)i1);
      return (OOC_Package__KeyValue)(OOC_INT32)0;
l45:
      _failed_function(15188); return 0;
      ;
    }


  i0 = (OOC_INT32)elem;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17150))+32);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17159));
  i1 = i1!=0;
  if (!i1) goto l3;
  OOC_Package__ParseKeyValue_Err(3, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)elem;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17272))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17281))+4);
  i2 = _check_pointer(i2, 17286);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 17286))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17289))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17272))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17281))+4);
  i1 = _check_pointer(i1, 17286);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 17286))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17289))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17299)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 17299)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17224)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l3:
  i0 = (OOC_INT32)elem;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17334))+36);
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
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17580));
  node = (Config_Parser__Node)i0;
  goto l10;
l9:
  i0 = (OOC_INT32)list;
  i1 = (OOC_INT32)node;
  i1 = (OOC_INT32)OOC_Package__ParseKeyValue_ParseDefine((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17472)))), &_td_Config_Parser__ElementDesc, 17472)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17440)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17504));
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18039)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 18121))+4));
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18142)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
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
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18262)))), &_td_Config_Parser__CharDataDesc);
      
l5:
      if (!i0) goto l19;
l7_loop:
      i0 = (OOC_INT32)*node;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18301)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
      i1 = !i1;
      if (!i1) goto l10;
      OOC_Package__ProcessPackage_Err(2, (Config_Parser__Node)i0);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18393));
      *node = (Config_Parser__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18262)))), &_td_Config_Parser__CharDataDesc);
      
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18897))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18915))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18897))+12);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18903)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i3, (XML_DTD__AttrDecl)i2);
          str = (XML_UnicodeBuffer__CharArray)i1;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18946)), (OOC_INT32)0);
          i2 = i2<128;
          if (!i2) goto l10;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18999)), (OOC_INT32)0);
          LongStrings__Short((void*)(_check_pointer(i1, 18999)), i2, (OOC_CHAR8)'?', (void*)(OOC_INT32)buffer, 128);
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
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19268))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19268))+4);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19278)), (OOC_INT32)0);
          i0 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 19278)), i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19221)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i0);
          return 0;
          ;
        }


      i0 = (OOC_INT32)OOC_Package__NewVersion();
      version = (OOC_Package__Version)i0;
      i0 = (OOC_INT32)elem;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19391))+32);
      i0 = *(OOC_INT32*)(_check_pointer(i0, 19400));
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l20;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)elem;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19429))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19438))+4);
      i3 = _check_pointer(i3, 19443);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 19443))*4);
      att = (XML_Builder__Attribute)i1;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19463))+4);
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 19473)),(const void*)((OOC_CHAR16[]){99,117,114,114,101,110,116,0})))==(OOC_INT32)0;
      if (i3) goto l14;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19555))+4);
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 19565)),(const void*)((OOC_CHAR16[]){97,103,101,0})))==(OOC_INT32)0;
      if (i3) goto l12;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19639))+4);
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 19649)),(const void*)((OOC_CHAR16[]){114,101,118,105,115,105,111,110,0})))==(OOC_INT32)0;
      if (i3) goto l10;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i2);
      i2 = (OOC_INT32)lastError;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19833))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19833))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19843)), (OOC_INT32)0);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 19843)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19786)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i2, "name", 5, (Msg__LStringPtr)i1);
      goto l15;
l10:
      i2 = (OOC_INT32)version;
      i1 = OOC_Package__ProcessPackage_ParseVersion_Unsigned((XML_Builder__Attribute)i1);
      *(OOC_INT32*)((_check_pointer(i2, 19687))+8) = i1;
      goto l15;
l12:
      i2 = (OOC_INT32)version;
      i1 = OOC_Package__ProcessPackage_ParseVersion_Unsigned((XML_Builder__Attribute)i1);
      *(OOC_INT32*)((_check_pointer(i2, 19598))+4) = i1;
      goto l15;
l14:
      i2 = (OOC_INT32)version;
      i1 = OOC_Package__ProcessPackage_ParseVersion_Unsigned((XML_Builder__Attribute)i1);
      *(OOC_INT32*)(_check_pointer(i2, 19510)) = i1;
l15:
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l20:
      i0 = (OOC_INT32)version;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 19888));
      i1 = i1==-1;
      i2 = (OOC_INT32)elem;
      if (!i1) goto l23;
      OOC_Package__ProcessPackage_Err(7, (Config_Parser__Node)i2);
l23:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 19980))+8);
      i1 = i1==-1;
      if (!i1) goto l26;
      OOC_Package__ProcessPackage_Err(8, (Config_Parser__Node)i2);
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20071))+36);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l29;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20124))+36);
      OOC_Package__ProcessPackage_Err(0, (Config_Parser__Node)i1);
      i1 = (OOC_INT32)lastError;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20200))+28);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20200))+28);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20205)), (OOC_INT32)0);
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 20205)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20152)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
l29:
      _copy_8((const void*)"",(void*)((_check_pointer(i0, 20241))+12),32);
      i1 = *(OOC_INT32*)(_check_pointer(i0, 20284));
      IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
      Strings__Append((void*)(OOC_INT32)str, 32, (void*)((_check_pointer(i0, 20333))+12), 32);
      Strings__Append(":", 2, (void*)((_check_pointer(i0, 20375))+12), 32);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 20413))+4);
      IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
      Strings__Append((void*)(OOC_INT32)str, 32, (void*)((_check_pointer(i0, 20458))+12), 32);
      Strings__Append(":", 2, (void*)((_check_pointer(i0, 20500))+12), 32);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 20538))+8);
      IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
      Strings__Append((void*)(OOC_INT32)str, 32, (void*)((_check_pointer(i0, 20588))+12), 32);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20910))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 20919));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l12;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20948))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20957))+4);
      i4 = _check_pointer(i4, 20962);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 20962))*4);
      att = (XML_Builder__Attribute)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20982))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 20992)),(const void*)((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0})))==(OOC_INT32)0;
      if (i5) goto l6;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i1);
      i5 = (OOC_INT32)lastError;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21186))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21186))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 21196)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i6, 21196)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21139)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i5, "name", 5, (Msg__LStringPtr)i4);
      goto l7;
l6:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)(_check_pointer(i0, 21036)) = i4;
l7:
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l12:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21244));
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21642))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 21651));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l16;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21680))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21689))+4);
      i4 = _check_pointer(i4, 21694);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 21694))*4);
      att = (XML_Builder__Attribute)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21714))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 21724)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
      if (i5) goto l10;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21802))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 21812)),(const void*)((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0})))==(OOC_INT32)0;
      if (i5) goto l8;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i1);
      i5 = (OOC_INT32)lastError;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22003))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22003))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 22013)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i6, 22013)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21956)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i5, "name", 5, (Msg__LStringPtr)i4);
      goto l11;
l8:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)((_check_pointer(i0, 21853))+4) = i4;
      goto l11;
l10:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)(_check_pointer(i0, 21758)) = i4;
l11:
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22058))+4);
      i2 = i2==(OOC_INT32)0;
      if (!i2) goto l19;
      OOC_Package__ProcessPackage_Err(9, (Config_Parser__Node)i1);
l19:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22159))+36);
      node = (Config_Parser__Node)i2;
      OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
      i2 = (OOC_INT32)node;
      i2 = OOC_Package__AtElement((Config_Parser__Node)i2, ((OOC_CHAR16[]){118,101,114,115,105,111,110,0}), 8);
      if (i2) goto l22;
      OOC_Package__ProcessPackage_Err(6, (Config_Parser__Node)i1);
      goto l23;
l22:
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseVersion((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22282)))), &_td_Config_Parser__ElementDesc, 22282)));
      *(OOC_INT32*)((_check_pointer(i0, 22245))+8) = i1;
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22313));
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23038))+32);
          i1 = *(OOC_INT32*)(_check_pointer(i1, 23047));
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (i2) goto l3;
          i1=(OOC_INT32)0;i2=(OOC_INT32)0;
          goto l17;
l3:
          i2=0;i3=(OOC_INT32)0;i4=(OOC_INT32)0;
l4_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23078))+32);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23087))+4);
          i5 = _check_pointer(i5, 23092);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 23092))*4);
          att = (XML_Builder__Attribute)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23114))+4);
          i6 = (
          _cmp16((const void*)(_check_pointer(i6, 23124)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
          if (i6) goto l11;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23198))+4);
          i6 = (
          _cmp16((const void*)(_check_pointer(i6, 23208)),(const void*)((OOC_CHAR16[]){100,101,115,116,45,110,97,109,101,0})))==(OOC_INT32)0;
          if (i6) goto l9;
          OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i0);
          i6 = (OOC_INT32)lastError;
          i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23395))+4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23395))+4);
          i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 23405)), (OOC_INT32)0);
          i5 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i7, 23405)), i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 23348)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, "name", 5, (Msg__LStringPtr)i5);
          
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23551))+36);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23806))+32);
      i2 = *(OOC_INT32*)(_check_pointer(i2, 23815));
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l16;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23844))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23853))+4);
      i4 = _check_pointer(i4, 23858);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 23858))*4);
      att = (XML_Builder__Attribute)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23878))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 23888)),(const void*)((OOC_CHAR16[]){115,111,117,114,99,101,45,100,105,114,0})))==(OOC_INT32)0;
      if (i5) goto l10;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23977))+4);
      i5 = (
      _cmp16((const void*)(_check_pointer(i5, 23987)),(const void*)((OOC_CHAR16[]){100,101,115,116,45,100,105,114,0})))==(OOC_INT32)0;
      if (i5) goto l8;
      OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i1);
      i5 = (OOC_INT32)lastError;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24172))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 24172))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 24182)), (OOC_INT32)0);
      i4 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i6, 24182)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24125)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i5, "name", 5, (Msg__LStringPtr)i4);
      goto l11;
l8:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)((_check_pointer(i0, 24025))+8) = i4;
      goto l11;
l10:
      i4 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i4);
      *(OOC_INT32*)((_check_pointer(i0, 23928))+4) = i4;
l11:
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24227))+4);
      i0 = i0==(OOC_INT32)0;
      if (!i0) goto l19;
      OOC_Package__ProcessPackage_Err(10, (Config_Parser__Node)i1);
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24326))+36);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24736));
      node = (Config_Parser__Node)i0;
      goto l30;
l27:
      i0 = (OOC_INT32)fileSet;
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseFileSet_ParseFile((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24613)))), &_td_Config_Parser__ElementDesc, 24613)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24583)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i0, (OOC_Package__FileData)i1);
      i0 = (OOC_INT32)node;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24647));
      node = (Config_Parser__Node)i0;
      goto l30;
l29:
      i0 = (OOC_INT32)fileSet;
      i1 = (OOC_INT32)node;
      i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseFileSet((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24478)))), &_td_Config_Parser__ElementDesc, 24478)));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24445)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i0, (OOC_Package__FileData)i1);
      i0 = (OOC_INT32)node;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24512));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24858))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 24863)),(const void*)((OOC_CHAR16[]){112,97,99,107,97,103,101,0})))!=(OOC_INT32)0;
  if (!i1) goto l3;
  OOC_Package__ProcessPackage_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)Msg__GetLStringPtr(((OOC_CHAR16[]){112,97,99,107,97,103,101,0}), 8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24935)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l3:
  i0 = (OOC_INT32)OOC_Package__NewPackage();
  pkg = (OOC_Package__Package)i0;
  i0 = (OOC_INT32)root;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25051))+32);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 25060));
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l15;
  i1=0;
l6_loop:
  i2 = (OOC_INT32)root;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25087))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 25096))+4);
  i3 = _check_pointer(i3, 25101);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 25101))*4);
  att = (XML_Builder__Attribute)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25119))+4);
  i3 = (
  _cmp16((const void*)(_check_pointer(i3, 25129)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
  if (i3) goto l9;
  OOC_Package__ProcessPackage_Err(3, (Config_Parser__Node)i2);
  i1 = (OOC_INT32)lastError;
  i2 = (OOC_INT32)att;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25295))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25295))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25305)), (OOC_INT32)0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 25305)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25248)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
  goto l10;
l9:
  i2 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)OOC_Package__StringAttr((XML_Builder__Attribute)i1);
  *(OOC_INT32*)((_check_pointer(i2, 25157))+8) = i1;
l10:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l6_loop;
l15:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25340))+8);
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l18;
  i0 = (OOC_INT32)root;
  OOC_Package__ProcessPackage_Err(5, (Config_Parser__Node)i0);
l18:
  i0 = (OOC_INT32)root;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25427))+36);
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){118,101,114,115,105,111,110,0}), 8);
  if (i0) goto l21;
  i0 = (OOC_INT32)root;
  OOC_Package__ProcessPackage_Err(6, (Config_Parser__Node)i0);
  goto l22;
l21:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)node;
  i1 = (OOC_INT32)OOC_Package__ProcessPackage_ParseVersion((Config_Parser__Element)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25540)))), &_td_Config_Parser__ElementDesc, 25540)));
  *(OOC_INT32*)((_check_pointer(i0, 25503))+12) = i1;
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25569));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l22:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){114,101,113,117,105,114,101,115,0}), 9);
  if (!i0) goto l29;
l24_loop:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25720));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25849));
  i2 = (OOC_INT32)OOC_Config__options;
  i3 = (OOC_INT32)OOC_Package__stringType;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)errorListener;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25836)))), &_td_Config_Parser__ElementDesc, 25836)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i3, (XML_Locator__ErrorListener)i5, (OOC_Error__List)i4);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25950));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l32:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){112,114,97,103,109,97,115,0}), 8);
  if (!i0) goto l35;
  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26079))+4);
  i2 = (OOC_INT32)OOC_Config__pragmas;
  i3 = (OOC_INT32)OOC_Package__stringType;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)errorListener;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26066)))), &_td_Config_Parser__ElementDesc, 26066)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i3, (XML_Locator__ErrorListener)i5, (OOC_Error__List)i4);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26180));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
l35:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){108,105,98,114,97,114,121,0}), 8);
  if (!i0) goto l43;
l38_loop:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26274))+16);
  i2 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26274))+16);
  i2 = (OOC_INT32)OOC_Package__ProcessPackage_ParseLibrary((Config_Parser__Element)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26315)))), &_td_Config_Parser__ElementDesc, 26315)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26282)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26345));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26437))+20);
  i2 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26437))+20);
  i2 = (OOC_INT32)OOC_Package__ProcessPackage_ParseExecutable((Config_Parser__Element)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26484)))), &_td_Config_Parser__ElementDesc, 26484)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26448)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26514));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessPackage_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){101,120,101,99,117,116,97,98,108,101,0}), 11);
  if (i0) goto l46_loop;
l51:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)OOC_Package__NewFileSet();
  *(OOC_INT32*)((_check_pointer(i0, 26562))+24) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26595))+24);
  i2 = (OOC_INT32)_c4;
  *(OOC_INT32*)((_check_pointer(i1, 26603))+4) = i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26629))+24);
  *(OOC_INT32*)((_check_pointer(i0, 26637))+8) = i2;
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){102,105,108,101,45,115,101,116,0}), 9);
  if (!i0) goto l59;
l54_loop:
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26704))+24);
  i2 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26704))+24);
  i2 = (OOC_INT32)OOC_Package__ProcessPackage_ParseFileSet((Config_Parser__Element)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26745)))), &_td_Config_Parser__ElementDesc, 26745)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26712)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i0, (OOC_Package__FileData)i2);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26775));
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
  i0 = *(OOC_INT32*)(_check_pointer(i0, 26901));
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27344)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 27426))+4));
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27447)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
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
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27567)))), &_td_Config_Parser__CharDataDesc);
      
l5:
      if (!i0) goto l19;
l7_loop:
      i0 = (OOC_INT32)*node;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27606)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
      i1 = !i1;
      if (!i1) goto l10;
      OOC_Package__ProcessRepository_Err(2, (Config_Parser__Node)i0);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27698));
      *node = (Config_Parser__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27567)))), &_td_Config_Parser__CharDataDesc);
      
l15:
      if (i0) goto l7_loop;
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27757))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 27762)),(const void*)((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0})))!=(OOC_INT32)0;
  if (!i1) goto l3;
  OOC_Package__ProcessRepository_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)Msg__GetLStringPtr(((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0}), 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27837)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
l3:
  i0 = (OOC_INT32)OOC_Package__NewRepository();
  rep = (OOC_Package__Repository)i0;
  i0 = (OOC_INT32)root;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27953))+36);
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){105,110,115,116,97,108,108,101,100,0}), 10);
  if (!i0) goto l10;
l5_loop:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28041));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28170));
  i2 = (OOC_INT32)OOC_Config__options;
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)errorListener;
  i5 = (OOC_INT32)OOC_Package__stringType;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28157)))), &_td_Config_Parser__ElementDesc, 28157)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i5, (XML_Locator__ErrorListener)i4, (OOC_Error__List)i3);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28271));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
l13:
  i0 = (OOC_INT32)node;
  i0 = OOC_Package__AtElement((Config_Parser__Node)i0, ((OOC_CHAR16[]){112,114,97,103,109,97,115,0}), 8);
  if (!i0) goto l16;
  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)rep;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28400))+4);
  i2 = (OOC_INT32)OOC_Config__pragmas;
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)errorListener;
  i5 = (OOC_INT32)OOC_Package__stringType;
  OOC_Package__ParseKeyValue((Config_Parser__Element)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28387)))), &_td_Config_Parser__ElementDesc, 28387)), (ADT_ArrayList__ArrayList)i1, (Config_Section_Options__Section)i2, (Object__String)i5, (XML_Locator__ErrorListener)i4, (OOC_Error__List)i3);
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28501));
  node = (Config_Parser__Node)i0;
  OOC_Package__ProcessRepository_SkipWS((void*)(OOC_INT32)&node);
l16:
  i0 = (OOC_INT32)node;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
  OOC_Package__ProcessRepository_Err(4, (Config_Parser__Node)i0);
l19:
  i0 = (OOC_INT32)errList;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 28632));
  i0 = i0!=0;
  if (!i0) goto l22;
  rep = (OOC_Package__Repository)(OOC_INT32)0;
l22:
  i0 = (OOC_INT32)rep;
  return (OOC_Package__Repository)i0;
  ;
}

static OOC_Repository__PkgInfo OOC_Package__ParseFile(const OOC_CHAR8 fileName__ref[], volatile OOC_LEN fileName_0d, volatile OOC_CHAR8 requirePackage, volatile OOC_Error__List *errList) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(fileName,OOC_CHAR8 ,fileName_0d)
  volatile Config_Parser__Parser p;
  jmp_buf _target0;
  Exception__Context _context0;

  OOC_INITIALIZE_VPAR(fileName__ref,fileName,OOC_CHAR8 ,fileName_0d)
  OOC_Logger__ReadFileName((void*)(OOC_INT32)fileName, fileName_0d);
  {
    if (!setjmp(_target0)) goto l7;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__FileNotFoundDesc);
    if (i0) goto l5;
    Exception__ActivateContext();
    goto l6;
l5:
    return (OOC_Repository__PkgInfo)(OOC_INT32)0;
l6:
    Exception__Clear();
    goto l20;
l7:
    Exception__PushContext(&_context0, &_target0);
    i0 = (OOC_INT32)Config_Parser__NewFile((void*)(OOC_INT32)fileName, fileName_0d);
    p = (Config_Parser__Parser)i0;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28990)))), Config_Parser__ParserDesc_ParseDocument)),Config_Parser__ParserDesc_ParseDocument)((Config_Parser__Parser)i0);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29019))+8);
    i1 = *(OOC_INT32*)(_check_pointer(i1, 29027));
    i1 = i1==0;
    if (i1) goto l10;
    i1 = (OOC_INT32)*errList;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29315))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29302)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
    Exception__PopContext(1);
    return (OOC_Repository__PkgInfo)(OOC_INT32)0;
    goto l19;
l10:
    i1 = requirePackage;
    i1 = !i1;
    if (i1) goto l13;
    i1=OOC_FALSE;
    goto l15;
l13:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29078))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29083))+28);
    i1 = (
    _cmp16((const void*)(_check_pointer(i1, 29088)),(const void*)((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0})))==(OOC_INT32)0;
    
l15:
    if (i1) goto l17;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29229))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29237))+16);
    i2 = (OOC_INT32)*errList;
    i0 = (OOC_INT32)OOC_Package__ProcessPackage((Config_Parser__Element)i1, (XML_Locator__ErrorListener)i0, (OOC_Error__List)i2);
    Exception__PopContext(1);
    return (OOC_Repository__PkgInfo)i0;
    goto l19;
l17:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29149))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29157))+16);
    i2 = (OOC_INT32)*errList;
    i0 = (OOC_INT32)OOC_Package__ProcessRepository((Config_Parser__Element)i1, (XML_Locator__ErrorListener)i0, (OOC_Error__List)i2);
    Exception__PopContext(1);
    return (OOC_Repository__PkgInfo)i0;
l19:
    Exception__PopContext(1);
l20:;
  }
  _failed_function(28731); return 0;
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30293));
      i1 = OOC_Package__ParseMetaData_Parse((OOC_Repository__Repository)i1);
      if (!i1) goto l15;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30328)))), OOC_Repository__RepositoryDesc_GetResource)),OOC_Repository__RepositoryDesc_GetResource)((OOC_Repository__Repository)i0, "", 1, "pkginfo.xml", 12);
      uri = (URI__URI)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l15;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30413)))), &_td_URI_Scheme_File__URIDesc, 30413)), 30417)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30413)))), &_td_URI_Scheme_File__URIDesc, 30413)), (void*)(OOC_INT32)fileName, 1024);
      i1 = (OOC_INT32)OOC_Package__ParseFile((void*)(OOC_INT32)fileName, 1024, OOC_FALSE, (void*)(OOC_INT32)&errList);
      pkg = (OOC_Repository__PkgInfo)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30508)))), OOC_Repository__RepositoryDesc_SetPackageInfo)),OOC_Repository__RepositoryDesc_SetPackageInfo)((OOC_Repository__Repository)i0, (OOC_Repository__PkgInfo)i1);
      i0 = i1!=(OOC_INT32)0;
      if (!i0) goto l9;
      i0 = (OOC_INT32)options;
      i2 = (OOC_INT32)pragmas;
      OOC_Package__MergeConfig((OOC_Repository__PkgInfo)i1, (Config_Section_Options__Section)i0, (Config_Section_Options__Section)i2);
l9:
      i0 = (OOC_INT32)errList;
      i0 = *(OOC_INT32*)(_check_pointer(i0, 30652));
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30873))+4);
  i0 = OOC_Package__ParseMetaData_Parse((OOC_Repository__Repository)i0);
  dummy = i0;
  i0 = (OOC_INT32)errList;
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30899)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30945)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31224)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
  i1 = (OOC_INT32)list;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 31275))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 31302));
  i4 = _check_pointer(i4, 31308);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 31308))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 31312)))), &_td_OOC_Package__KeyValueDesc, 31312);
  kv = (OOC_Package__KeyValue)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31330)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){100,101,102,105,110,101,0}), 7, OOC_TRUE);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 31383));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31364)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i5);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 31403))+4);
  v = (Config_Value__Value)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31423)))), &_td_Config_Value_String__ValueDesc);
  if (i6) goto l14;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31481)))), &_td_Config_Value_Boolean__ValueDesc);
  if (i6) goto l12;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31541)))), &_td_Config_Value_Integer__ValueDesc);
  if (i6) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31538)))), 31538);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31610)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){116,121,112,101,0}), 5, (void*)(OOC_INT32)type, 32);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 31651))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 31651))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 31657)))), Config_Value__ValueDesc_ValueToString)),Config_Value__ValueDesc_ValueToString)((Config_Value__Value)i4, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31685)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31711)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31747)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_Package__WritePackage(OOC_Package__Package pkg, const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  ADT_StringBuffer__StringBuffer b;
  Object__String fileName;
  IO__ByteChannel f;
  XML_Writer__Writer w;
  OOC_INT32 i;
  ADT_StringBuffer__CharsLatin1 str;
  auto void OOC_Package__WritePackage_WriteVersion(XML_Writer__Writer w, OOC_Package__Version version);
  auto void OOC_Package__WritePackage_WriteLibrary(XML_Writer__Writer w, OOC_Package__Library library);
  auto void OOC_Package__WritePackage_WriteExecutable(XML_Writer__Writer w, OOC_Package__Executable executable);
  auto void OOC_Package__WritePackage_WriteFileSet(XML_Writer__Writer w, OOC_Package__FileSet fileSet);
    
    void OOC_Package__WritePackage_WriteVersion(XML_Writer__Writer w, OOC_Package__Version version) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32103)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,101,114,115,105,111,110,0}), 8, OOC_FALSE);
      i1 = (OOC_INT32)version;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 32166));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32139)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,117,114,114,101,110,116,0}), 8, i2);
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32194))+4);
      i2 = i2>0;
      if (!i2) goto l3;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 32241))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32218)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,103,101,0}), 4, i2);
l3:
      i1 = *(OOC_INT32*)((_check_pointer(i1, 32293))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32265)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,118,105,115,105,111,110,0}), 9, i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32312)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_Package__WritePackage_WriteLibrary(XML_Writer__Writer w, OOC_Package__Library library) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32440)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){108,105,98,114,97,114,121,0}), 8, OOC_FALSE);
      i1 = (OOC_INT32)library;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32500));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32476)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32546))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32515)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0}), 12, (Object__String)i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32589))+8);
      OOC_Package__WritePackage_WriteVersion((XML_Writer__Writer)i0, (OOC_Package__Version)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32607)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_Package__WritePackage_WriteExecutable(XML_Writer__Writer w, OOC_Package__Executable executable) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32744)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,101,99,117,116,97,98,108,101,0}), 11, OOC_FALSE);
      i1 = (OOC_INT32)executable;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32817));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32783)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,97,105,110,45,109,111,100,117,108,101,0}), 12, (Object__String)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32838)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33061)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){102,105,108,101,0}), 5, OOC_FALSE);
          i1 = (OOC_INT32)file;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33117))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33096)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33141))+8);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l3;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33200))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33174)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){100,101,115,116,45,110,97,109,101,0}), 10, (Object__String)i1);
l3:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33234)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33300)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){102,105,108,101,45,115,101,116,0}), 9, OOC_FALSE);
      i1 = (OOC_INT32)fileSet;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33367))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33337)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,111,117,114,99,101,45,100,105,114,0}), 11, (Object__String)i2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33397))+8);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33455))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33427)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){100,101,115,116,45,100,105,114,0}), 9, (Object__String)i2);
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33497))+12);
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l6_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33547)))), &_td_OOC_Package__FileSetDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33605)))), &_td_OOC_Package__FileDesc);
      if (i1) goto l11;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33600)))), 33600);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 33675));
      ptr = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l6_loop;
l19:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33708)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(OOC_INT32)targetDir, targetDir_0d);
  b = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33815)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "/pkginfo", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33850)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c5));
  i1 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33880))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33869)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33893)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c6));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33927)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  fileName = (Object__String)i0;
  i0 = (OOC_INT32)IO_FileChannel__Open((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33987)))), &_td_Object__String8Desc, 33987)), 22);
  f = (IO__ByteChannel)i0;
  i2 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((IO__ByteChannel)i0, (XML_UnicodeCodec__Factory)i2, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34173)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,97,99,107,97,103,101,0}), 8, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34227))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34207)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34258))+12);
  OOC_Package__WritePackage_WriteVersion((XML_Writer__Writer)i0, (OOC_Package__Version)i1);
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 34304));
  i2 = (OOC_INT32)w;
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "options", 8, (ADT_ArrayList__ArrayList)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34350))+4);
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "pragmas", 8, (ADT_ArrayList__ArrayList)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34382))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 34390))+4);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34426))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 34434));
  i2 = _check_pointer(i2, 34440);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 34440))*4);
  i2 = (OOC_INT32)w;
  OOC_Package__WritePackage_WriteLibrary((XML_Writer__Writer)i2, (OOC_Package__Library)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34444)))), &_td_OOC_Package__LibraryDesc, 34444)));
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34485))+20);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 34496))+4);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l16;
  i1=0;
l11_loop:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34535))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 34546));
  i2 = _check_pointer(i2, 34552);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 34552))*4);
  i2 = (OOC_INT32)w;
  OOC_Package__WritePackage_WriteExecutable((XML_Writer__Writer)i2, (OOC_Package__Executable)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34556)))), &_td_OOC_Package__ExecutableDesc, 34556)));
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l11_loop;
l16:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34602))+24);
  i1 = (OOC_INT32)w;
  OOC_Package__WritePackage_WriteFileSet((XML_Writer__Writer)i1, (OOC_Package__FileSet)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34618)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34649)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  i0 = (OOC_INT32)f;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34673)))), IO__ChannelDesc_Close)),IO__ChannelDesc_Close)((IO__Channel)i0);
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34688)))), ADT_StringBuffer__StringBufferDesc_Insert)),ADT_StringBuffer__StringBufferDesc_Insert)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c7), 0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34726)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i0);
  str = (ADT_StringBuffer__CharsLatin1)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 34769)), (OOC_INT32)0);
  OOC_Logger__ShellCommand((void*)(_check_pointer(i0, 34769)), i1);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 34810)), (OOC_INT32)0);
  i0 = OS_ProcessManagement__system((void*)(_check_pointer(i0, 34810)), i1);
  return;
  ;
}

void OOC_Package__WriteRepository(OOC_Package__Repository rep, const OOC_CHAR8 targetDir__ref[], OOC_LEN targetDir_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(targetDir,OOC_CHAR8 ,targetDir_0d)
  OOC_Package__URIBuffer fileName;
  IO__ByteChannel f;
  XML_Writer__Writer w;
  OOC_INT32 i;
  OOC_Package__URIBuffer str;
  auto void OOC_Package__WriteRepository_WriteInstalledPkg(XML_Writer__Writer w, Object__String pkgName);
    
    void OOC_Package__WriteRepository_WriteInstalledPkg(XML_Writer__Writer w, Object__String pkgName) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35103)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,110,115,116,97,108,108,101,100,0}), 10, OOC_FALSE);
      i1 = (OOC_INT32)pkgName;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35141)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,97,99,107,97,103,101,0}), 8, (Object__String)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35178)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(targetDir__ref,targetDir,OOC_CHAR8 ,targetDir_0d)
  _copy_8((const void*)(OOC_INT32)targetDir,(void*)(OOC_INT32)fileName,1024);
  Strings__Append("/pkginfo.xml", 13, (void*)(OOC_INT32)fileName, 1024);
  OOC_Logger__WriteFileName((void*)(OOC_INT32)fileName, 1024);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)fileName, 1024);
  i0 = (OOC_INT32)IO_FileChannel__Open((Object__String8)i0, 22);
  f = (IO__ByteChannel)i0;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((IO__ByteChannel)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35581)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,0}), 11, OOC_FALSE);
  i0 = (OOC_INT32)rep;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35634))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 35648))+4);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)rep;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 35689))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 35703));
  i2 = _check_pointer(i2, 35709);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 35709))*4);
  i2 = (OOC_INT32)w;
  OOC_Package__WriteRepository_WriteInstalledPkg((XML_Writer__Writer)i2, (Object__String)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35713)))), &_td_Object__StringDesc, 35713)));
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT32)rep;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35767));
  i2 = (OOC_INT32)w;
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "options", 8, (ADT_ArrayList__ArrayList)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35813))+4);
  OOC_Package__WriteKeyValue((XML_Writer__Writer)i2, "pragmas", 8, (ADT_ArrayList__ArrayList)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35829)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35863)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i2);
  i0 = (OOC_INT32)f;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35882)))), IO__ChannelDesc_Close)),IO__ChannelDesc_Close)((IO__Channel)i0);
  _copy_8((const void*)(OOC_INT32)fileName,(void*)(OOC_INT32)str,1024);
  Strings__Insert("chmod 644 ", 11, (OOC_INT32)0, (void*)(OOC_INT32)str, 1024);
  OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 1024);
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 1024);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36324)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c8));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36343)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)targetDir, targetDir_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36374)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c9));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36403)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c10));
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36433))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36422)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36446)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c11));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36477)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i0);
  chars = (ADT_StringBuffer__CharsLatin1)i0;
  _copy_8((const void*)(_check_pointer(i0, 36507)),(void*)(OOC_INT32)cmd,cmd_0d);
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
  return (OOC_Package__Package)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37069)))), &_td_OOC_Package__PackageDesc, 37069));
l4:
  _failed_function(36551); return 0;
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
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 37867)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l18;
  i1=0;
l6_loop:
  i2 = (OOC_INT32)files;
  i3 = _check_pointer(i2, 37901);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 37901))*4);
  i2 = _check_pointer(i2, 37901);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 37901))*4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 37904)), (OOC_INT32)0);
  i1 = OOC_Package__UpdateRepository_IsPkgInfo((void*)(_check_pointer(i3, 37904)), i1);
  i2 = i;
  if (!i1) goto l13;
  _copy_8((const void*)(OOC_INT32)dirName,(void*)(OOC_INT32)fileName,1024);
  Strings__Append("/", 2, (void*)(OOC_INT32)fileName, 1024);
  i1 = (OOC_INT32)files;
  i3 = _check_pointer(i1, 38018);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 38018))*4);
  i1 = _check_pointer(i1, 38018);
  i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i4, OOC_UINT32, 38018))*4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 38021)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i3, 38021)), i1, (void*)(OOC_INT32)fileName, 1024);
  i1 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)fileName, 1024);
  errList = (OOC_Error__List)i1;
  i1 = (OOC_INT32)OOC_Package__ParseFile((void*)(OOC_INT32)fileName, 1024, OOC_TRUE, (void*)(OOC_INT32)&errList);
  pkg = (OOC_Repository__PkgInfo)i1;
  i3 = (OOC_INT32)errList;
  i4 = *(OOC_INT32*)(_check_pointer(i3, 38166));
  i4 = i4!=0;
  if (i4) goto l11;
  i3 = (OOC_INT32)repository;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38296)))), OOC_Package__RepositoryDesc_MergePackage)),OOC_Package__RepositoryDesc_MergePackage)((OOC_Package__Repository)i3, (OOC_Package__Package)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38314)))), &_td_OOC_Package__PackageDesc, 38314)));
  goto l13;
l11:
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38205)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i3, (Channel__Channel)i1);
  return OOC_FALSE;
l13:
  i1 = i2+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l6_loop;
l18:
  i0 = (OOC_INT32)repository;
  OOC_Package__WriteRepository((OOC_Package__Repository)i0, (void*)(OOC_INT32)targetDir, targetDir_0d);
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
  _failed_function(37144); return 0;
  ;
}

void OOC_OOC_Package_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c1 = Object__NewLatin1Char((OOC_CHAR8)'.');
  _c2 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c3 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c4 = Object__NewLatin1Char((OOC_CHAR8)'.');
  _c5 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c6 = Object__NewLatin1Region(".xml", 5, (OOC_INT32)0, 4);
  _c7 = Object__NewLatin1Region("chmod 644 ", 11, (OOC_INT32)0, 10);
  _c8 = Object__NewLatin1Char((OOC_CHAR8)' ');
  _c9 = Object__NewLatin1Region("/pkginfo", 9, (OOC_INT32)0, 8);
  _c10 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c11 = Object__NewLatin1Region(".xml", 5, (OOC_INT32)0, 4);
  _c12 = Object__NewLatin1Region("string", 7, (OOC_INT32)0, 6);

  OOC_Package__stringType = (Object__String)((OOC_INT32)_c12);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Package__ErrorContext.baseTypes[0]);
  OOC_Package__packageContext = (OOC_Package__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "OOC:Package", 12);
  return;
  ;
}

/* --- */
