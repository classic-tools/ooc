#include "OOC/Repository.d"
#include "__oo2c.h"

void OOC_Repository__Init(OOC_Repository__Repository rep, OOC_Repository__Repository baseRep, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2;
  OOC_Repository__URIBuffer str;

  i0 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10602)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  i1 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)""))!=0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = Strings__Length((void*)(OOC_INT32)str, 1024);
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1-1), 1024, OOC_UINT16, 10650)));
  i1 = i1==(OOC_CHAR8)'/';
  
l4:
  _assert(i1, 127, 10625);
  i1 = (OOC_INT32)rep;
  i2 = (OOC_INT32)baseRep;
  *(OOC_INT32*)(_check_pointer(i1, 10691)) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 10720))+4) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 10749))+8) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Repository__InitModule(OOC_Repository__Module m, OOC_Repository__Repository origin, const Msg__String name__ref, OOC_LEN name_0d, URI__HierarchicalURI srcFileOverride) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)m;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = (OOC_INT32)origin;
  *(OOC_INT32*)(_check_pointer(i0, 10952)) = i1;
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 10977))+4) = i1;
  i1 = (OOC_INT32)srcFileOverride;
  *(OOC_INT32*)((_check_pointer(i0, 11017))+8) = i1;
  *(OOC_INT8*)((_check_pointer(i0, 11065))+16) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 11102))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11124))+20) = (OOC_INT32)0;
  *(OOC_UINT32*)((_check_pointer(i0, 11152))+24) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 11185))+28) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 11218))+32) = 0;
  return;
  ;
}

void OOC_Repository__InitPkgInfo(OOC_Repository__PkgInfo pkgInfo) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pkgInfo;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)(_check_pointer(i0, 11319)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 11360))+4) = i1;
  return;
  ;
}

void OOC_Repository__RepositoryDesc_SetPackageInfo(OOC_Repository__Repository rep, OOC_Repository__PkgInfo packageInfo) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)rep;
  i1 = (OOC_INT32)packageInfo;
  *(OOC_INT32*)((_check_pointer(i0, 11493))+8) = i1;
  return;
  ;
}

OOC_Repository__Module OOC_Repository__RepositoryDesc_GetModule(OOC_Repository__Repository rep, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d, URI__HierarchicalURI srcFileOverride) {
  OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)

  OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
  _failed_function(11584); return 0;
  ;
}

URI__URI OOC_Repository__RepositoryDesc_GetResource(OOC_Repository__Repository rep, const OOC_CHAR8 package__ref[], OOC_LEN package_0d, const OOC_CHAR8 path__ref[], OOC_LEN path_0d) {
  OOC_ALLOCATE_VPAR(package,OOC_CHAR8 ,package_0d)
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(package__ref,package,OOC_CHAR8 ,package_0d)
  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  _failed_function(12464); return 0;
  ;
}

void OOC_Repository__RepositoryDesc_DumpContent(OOC_Repository__Repository rep, TextRider__Writer w) {

  return;
  ;
}

void OOC_Repository__ModuleDesc_SetInterfaceData(OOC_Repository__Module m, OOC_SymbolTable__Module ifData, OOC_INT8 ifQuality, OOC_CHAR8 allImports) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable__Module oldIfData;
  OOC_INT32 count;
  OOC_SymbolTable__Item item;
  OOC_INT32 i;
  OOC_SymbolTable__ModuleRef mr;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13380))+12);
  oldIfData = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)ifData;
  *(OOC_INT32*)((_check_pointer(i0, 13394))+12) = i2;
  i3 = ifQuality;
  *(OOC_INT8*)((_check_pointer(i0, 13418))+16) = i3;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l55;
  i1 = i1!=i2;
  if (!i1) goto l56;
  count = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13574))+8);
  item = (OOC_SymbolTable__Item)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l7;
  i1=0;
  goto l17;
l7:
  i3=0;
l8_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13633)))), &_td_OOC_SymbolTable__ImportDesc);
  if (!i4) goto l12;
  i3 = i3+1;
  count = i3;
  
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13717));
  item = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l8_loop;
l16:
  i1=i3;
l17:
  i3 = allImports;
  if (i3) goto l20;
  i4=OOC_FALSE;
  goto l22;
l20:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13770))+64);
  i4 = i4!=(OOC_INT32)0;
  
l22:
  if (!i4) goto l25;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13826))+64);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 13840)), 0);
  i1 = i1+i4;
  count = i1;
  
l25:
  *(OOC_INT32*)((_check_pointer(i0, 13874))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_Repository__3257.baseTypes[0], i1));
  count = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13935))+8);
  item = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l28;
  i1=0;
  goto l39;
l28:
  i4=0;
l29_loop:
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13994)))), &_td_OOC_SymbolTable__ImportDesc);
  if (!i5) goto l33;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14021))+20);
  i5 = _check_pointer(i5, 14034);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14054))+40);
  *(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 14034))*16)) = i7;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14078))+20);
  i5 = _check_pointer(i5, 14091);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 14091))*16))+4) = (OOC_INT32)0;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14125))+20);
  i5 = _check_pointer(i5, 14138);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14163))+40);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 14174))+12);
  *(OOC_UINT8*)((i5+((_check_index(i4, i6, OOC_UINT32, 14138))*16))+8) = ((
  _cmp8((const void*)(_check_pointer(i7, 14178)),(const void*)"SYSTEM"))==0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14204))+20);
  i5 = _check_pointer(i5, 14217);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_INT32*)((_check_pointer(i1, 14244))+48);
  *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 14217))*16))+12) = i7;
  i4 = i4+1;
  count = i4;
  
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14326));
  item = (OOC_SymbolTable__Item)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l29_loop;
l37:
  i1=i4;
l39:
  if (i3) goto l41;
  i3=OOC_FALSE;
  goto l43;
l41:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14380))+64);
  i3 = i3!=(OOC_INT32)0;
  
l43:
  if (!i3) goto l56;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14439))+64);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14453)), 0);
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l56;
  i4=i1;i1=0;
l47_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14483))+64);
  i5 = _check_pointer(i5, 14497);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 14497))*4);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 14554));
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i6, (OOC_Scanner_InputBuffer__CharArray)i7, 0, 0, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14582))+20);
  i7 = _check_pointer(i7, 14595);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)(i7+((_check_index(i4, i8, OOC_UINT32, 14595))*16)) = i6;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14628))+20);
  i6 = _check_pointer(i6, 14641);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_INT32*)((i6+((_check_index(i4, i7, OOC_UINT32, 14641))*16))+4) = (OOC_INT32)0;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14675))+20);
  i6 = _check_pointer(i6, 14688);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT8*)((i6+((_check_index(i4, i7, OOC_UINT32, 14688))*16))+8) = OOC_FALSE;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14726))+20);
  i6 = _check_pointer(i6, 14739);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i5 = *(OOC_INT32*)((_check_pointer(i5, 14764))+4);
  *(OOC_INT32*)((i6+((_check_index(i4, i7, OOC_UINT32, 14739))*16))+12) = i5;
  i4 = i4+1;
  count = i4;
  i1 = i1+1;
  i5 = i1<=i3;
  i = i1;
  if (i5) goto l47_loop;
  goto l56;
l55:
  *(OOC_INT32*)((_check_pointer(i0, 13478))+20) = (OOC_INT32)0;
l56:
  return;
  ;
}

void OOC_Repository__ModuleDesc_SetFingerprint(OOC_Repository__Module m, OOC_INT32 fp) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)m;
  *(OOC_UINT8*)((_check_pointer(i0, 14924))+28) = OOC_TRUE;
  i1 = fp;
  *(OOC_INT32*)((_check_pointer(i0, 14955))+32) = i1;
  return;
  ;
}

OOC_Repository__Module OOC_Repository__ModuleDesc_GetImportedModule(OOC_Repository__Module m, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_INT32 i;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i = 0;
  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15131))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15144)), 0);
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15162))+20);
  i1 = _check_pointer(i1, 15175);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+((_check_index(0, i2, OOC_UINT32, 15175))*16));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15183))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 15187)),(const void*)(OOC_INT32)name))!=0;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15131))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15144)), 0);
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15162))+20);
  i2 = _check_pointer(i2, 15175);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 15175))*16));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15183))+12);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 15187)),(const void*)(OOC_INT32)name))!=0;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15240))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15253)), 0);
  i2 = i1==i2;
  if (i2) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15303))+20);
  i0 = _check_pointer(i0, 15316);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 15316))*16))+4);
  return (OOC_Repository__Module)i0;
  goto l21;
l20:
  return (OOC_Repository__Module)(OOC_INT32)0;
l21:
  _failed_function(15020); return 0;
  ;
}

void OOC_Repository__RepositoryDesc_GetLocalPath(OOC_Repository__Repository rep, OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 path[], OOC_LEN path_0d) {

  return;
  ;
}

OOC_Scanner_InputBuffer__Buffer OOC_Repository__ModuleDesc_GetInputBuffer(OOC_Repository__Module m, Msg__Msg *msg) {

  _failed_function(15671); return 0;
  ;
}

URI__HierarchicalURI OOC_Repository__ModuleDesc_GetURI(OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 allowRelative) {
  register OOC_INT32 i0,i1,i2;

  i0 = fileId;
  i0 = i0==11;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16338))+12);
  i0 = i0!=(OOC_INT32)0;
  
l5:
  if (i0) goto l7;
  i0=OOC_FALSE;
  goto l9;
l7:
  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16365))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 16373))+44);
  i0 = i0!=0;
  
l9:
  if (i0) goto l11;
  return (URI__HierarchicalURI)(OOC_INT32)0;
  goto l12;
l11:
  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16418))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16448));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16456))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16418))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16426)))), OOC_SymbolTable__ModuleDesc_GetExternalSource)),OOC_SymbolTable__ModuleDesc_GetExternalSource)((OOC_SymbolTable__Module)i0, (URI__HierarchicalURI)i2);
  return (URI__HierarchicalURI)i0;
l12:
  _failed_function(15845); return 0;
  ;
}

OOC_CHAR8 OOC_Repository__ModuleDesc_MatchesURI(OOC_Repository__Module m, OOC_INT8 fileId, URI__URI uri) {
  register OOC_INT32 i0,i1;
  URI__HierarchicalURI muri;
  OOC_Repository__URIBuffer a;
  OOC_Repository__URIBuffer b;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16767)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, OOC_FALSE);
  muri = (URI__HierarchicalURI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16801)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)a, 1024);
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16825)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)b, 1024);
  return ((
  _cmp8((const void*)(OOC_INT32)a,(const void*)(OOC_INT32)b))==0);
  ;
}

void OOC_Repository__ModuleDesc_GetTimeStamp(OOC_Repository__Module m, OOC_INT8 fileId, struct Time__TimeStamp *ts, RT0__Struct ts__tag) {

  return;
  ;
}

OOC_CHAR8 OOC_Repository__ModuleDesc_FileExists(OOC_Repository__Module m, OOC_INT8 fileId) {

  _failed_function(17163); return 0;
  ;
}

void OOC_Repository__ModuleDesc_CreateOutputDir(OOC_Repository__Module m, OOC_INT8 fileId, Msg__Msg *res) {

  return;
  ;
}

Channel__Channel OOC_Repository__ModuleDesc_GetOutputChannel(OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 makeTmp, Msg__Msg *res) {

  _failed_function(17364); return 0;
  ;
}

void OOC_Repository__RepositoryDesc_GetDefaultSubdir(OOC_Repository__Repository rep, OOC_INT8 id, OOC_CHAR8 subdir[], OOC_LEN subdir_0d) {
  register OOC_INT32 i0;

  i0 = id;
  switch (i0) {
  case 0:
    _copy_8("src",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 1:
    _copy_8("sym",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 2:
  case 3:
  case 4:
  case 6:
    _copy_8("oocdoc/xml",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 5:
    _copy_8("oocdoc/html",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 7:
  case 11:
  case 12:
  case 13:
  case 14:
  case 10:
  case 15:
  case 16:
  case 17:
    _copy_8("obj",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 8:
    _copy_8("obj",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 18:
    _copy_8("bin",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 19:
    _copy_8("obj",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 20:
    _copy_8("rsrc",(OOC_INT32)subdir,subdir_0d);
    goto l12;
  default:
    _failed_case(i0, 17577);
    goto l12;
  }
l12:
  return;
  ;
}

void OOC_Repository__RepositoryDesc_GetDefaultSuffix(OOC_Repository__Repository rep, OOC_INT8 id, OOC_CHAR8 suffix[], OOC_LEN suffix_0d) {
  register OOC_INT32 i0;

  i0 = id;
  switch (i0) {
  case 0:
    _copy_8(".Mod",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 1:
    _copy_8(".Sym",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 2:
    _copy_8("_symtab.xml",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 3:
    _copy_8("_sym.xml",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 4:
    _copy_8(".xml",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 5:
    _copy_8(".html",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 6:
    _copy_8("_op.xml",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 7:
  case 10:
    _copy_8(".o",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 8:
    _copy_8(".lo",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 11:
    _copy_8(".c",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 12:
    _copy_8(".d",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 13:
    _copy_8(".oh",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 14:
    _copy_8(".s",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 15:
    _copy_8("_.c",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 16:
    _copy_8("_.s",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 17:
    _copy_8("_.o",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 18:
    _copy_8("",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 19:
    _copy_8(".la",(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 20:
    _assert(OOC_FALSE, 127, 19357);
    goto l22;
  default:
    _failed_case(i0, 18381);
    goto l22;
  }
l22:
  return;
  ;
}

OOC_CHAR8 OOC_Repository__ValidModuleName(const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)

  OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(0, moduleName_0d, OOC_UINT32, 19600)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l43;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19646)));
  i1 = (OOC_CHAR8)'A'<=(_cap(i1));
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19670)));
  i1 = (_cap(i1))<=(OOC_CHAR8)'Z';
  
l8:
  if (i1) goto l11_loop;
  return OOC_FALSE;
  
  goto l38;
l11_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19761)));
  i1 = (OOC_CHAR8)'A'<=(_cap(i1));
  if (i1) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19785)));
  i1 = (_cap(i1))<=(OOC_CHAR8)'Z';
  
l16:
  if (i1) goto l22;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19835)));
  i1 = (OOC_CHAR8)'0'<=i1;
  if (i1) goto l20;
  i1=OOC_FALSE;
  goto l23;
l20:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19853)));
  i1 = i1<=(OOC_CHAR8)'9';
  
  goto l23;
l22:
  i1=OOC_TRUE;
l23:
  i1 = !i1;
  if (!i1) goto l11_loop;
l27:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19889)));
  i1 = i1==(OOC_CHAR8)':';
  if (i1) goto l33;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 20054)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l38;
  return OOC_FALSE;
  goto l38;
l33:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19948)));
  i1 = i1==(OOC_CHAR8)'\000';
  if (!i1) goto l38;
  return OOC_FALSE;
l38:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19600)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3_loop;
l43:
  return OOC_TRUE;
  ;
}

OOC_Repository__Module OOC_Repository__RepositoryDesc_GetModuleByURI(OOC_Repository__Repository rep, URI__HierarchicalURI uri, OOC_CHAR8 force) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Repository__Module m;
  OOC_Repository__URIBuffer str;
  OOC_Repository__URIBuffer ext;
  URI__URI relURI;
  OOC_Repository__URIBuffer subdir;
  OOC_INT16 i;

  m = (OOC_Repository__Module)(OOC_INT32)0;
  i0 = force;
  if (i0) goto l68;
  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)rep;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20795))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20776)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)i0, (URI__HierarchicalURI)i2);
  relURI = (URI__URI)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20823));
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l5;
  i0=(OOC_INT32)0;
  goto l73;
l5:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20894)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i2, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20924)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i1, 0, (void*)(OOC_INT32)subdir, 1024);
  _assert(((
  _cmp8((const void*)(OOC_INT32)subdir,(const void*)""))!=0), 127, 21183);
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21239)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l8;
  i2=OOC_FALSE;
  goto l10;
l8:
  i2 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(0, 1024, OOC_UINT16, 21258)));
  i2 = i2!=(OOC_CHAR8)'\000';
  
l10:
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21274)));
  i3 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(0, 1024, OOC_UINT16, 21286)));
  i2 = i2==i3;
  
l14:
  if (i2) goto l16;
  i2=0;
  goto l30;
l16:
  i2=0;
l17_loop:
  i2 = i2+1;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21239)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l20;
  i3=OOC_FALSE;
  goto l22;
l20:
  i3 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(i2, 1024, OOC_UINT16, 21258)));
  i3 = i3!=(OOC_CHAR8)'\000';
  
l22:
  if (i3) goto l24;
  i3=OOC_FALSE;
  goto l26;
l24:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21274)));
  i4 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(i2, 1024, OOC_UINT16, 21286)));
  i3 = i3==i4;
  
l26:
  if (i3) goto l17_loop;
l30:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21340)));
  i3 = i3==(OOC_CHAR8)'/';
  if (i3) goto l33;
  i3=OOC_FALSE;
  goto l35;
l33:
  i3 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(i2, 1024, OOC_UINT16, 21360)));
  i3 = i3==(OOC_CHAR8)'\000';
  
l35:
  if (i3) goto l37;
  i0=(OOC_INT32)0;
  goto l73;
l37:
  Strings__Delete((void*)(OOC_INT32)str, 1024, 0, (i2+1));
  i = 0;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21605)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l40;
  i2=OOC_FALSE;
  goto l42;
l40:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21621)));
  i2 = i2!=(OOC_CHAR8)'.';
  
l42:
  if (i2) goto l44;
  i2=0;
  goto l57;
l44:
  i2=0;
l45_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21654)));
  i3 = i3==(OOC_CHAR8)'/';
  if (!i3) goto l48;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21687))) = (OOC_CHAR8)':';
l48:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21605)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l51;
  i3=OOC_FALSE;
  goto l53;
l51:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21621)));
  i3 = i3!=(OOC_CHAR8)'.';
  
l53:
  if (i3) goto l45_loop;
l57:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21763))) = (OOC_CHAR8)'\000';
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21793)))), OOC_Repository__RepositoryDesc_GetModule)),OOC_Repository__RepositoryDesc_GetModule)((OOC_Repository__Repository)i1, (void*)(OOC_INT32)str, 1024, (URI__HierarchicalURI)(OOC_INT32)0);
  m = (OOC_Repository__Module)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l60;
  i0=OOC_FALSE;
  goto l62;
l60:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21844)))), OOC_Repository__ModuleDesc_MatchesURI)),OOC_Repository__ModuleDesc_MatchesURI)((OOC_Repository__Module)i1, 0, (URI__URI)i0);
  i0 = !i0;
  
l62:
  if (i0) goto l64;
  i0=i1;
  goto l73;
l64:
  i0=(OOC_INT32)0;
  goto l73;
l68:
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20576)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  OS_Path__basename((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)str, 1024);
  OS_Path__splitext((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)ext, 1024);
  i1 = OOC_Repository__ValidModuleName((void*)(OOC_INT32)str, 1024);
  if (i1) goto l71;
  i0=(OOC_INT32)0;
  goto l73;
l71:
  i1 = (OOC_INT32)rep;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20714)))), OOC_Repository__RepositoryDesc_GetModule)),OOC_Repository__RepositoryDesc_GetModule)((OOC_Repository__Repository)i1, (void*)(OOC_INT32)str, 1024, (URI__HierarchicalURI)i0);
  
l73:
  return (OOC_Repository__Module)i0;
  ;
}

OOC_SymbolTable__Module OOC_Repository__ModuleDesc_ReadSymbolFile(OOC_Repository__Module m, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2;
  URI__URI uri;
  Channel__Channel ch;
  OOC_SymbolTable_Builder__Builder stb;
  OOC_SymbolTable__Module symTab;

  i0 = (OOC_INT32)m;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 22907))+16);
  i1 = i1==4;
  if (i1) goto l9;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23008)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, OOC_TRUE);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23055)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2, (void*)(OOC_INT32)res);
  i2 = (OOC_INT32)*res;
  i2 = i2==(OOC_INT32)0;
  ch = (Channel__Channel)i1;
  if (!i2) goto l8;
  OOC_Logger__ReadFile((URI__URI)i0);
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__New();
  stb = (OOC_SymbolTable_Builder__Builder)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23198)))), OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable)),OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable)((OOC_SymbolTable_Builder__Builder)i0, (Channel__Channel)i1, (void*)(OOC_INT32)res);
  symTab = (OOC_SymbolTable__Module)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23237)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i1);
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l8;
  return (OOC_SymbolTable__Module)i0;
l8:
  return (OOC_SymbolTable__Module)(OOC_INT32)0;
  goto l10;
l9:
  *res = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22976))+12);
  return (OOC_SymbolTable__Module)i0;
l10:
  _failed_function(22138); return 0;
  ;
}

void OOC_OOC_Repository_init(void) {

  return;
  ;
}

/* --- */
