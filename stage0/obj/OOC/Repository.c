#include <OOC/Repository.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Repository__Init(OOC_Repository__Repository rep, OOC_Repository__Repository baseRep, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2;
  OOC_Repository__URIBuffer str;

  i0 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10601)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  i1 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)""))!=0;
  if (i1) goto l3;
  i1=0u;
  goto l4;
l3:
  i1 = Strings__Length((void*)(OOC_INT32)str, 1024);
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1-1), 1024, OOC_UINT16, 10649)));
  i1 = i1==47u;
  
l4:
  _assert(i1, 127, 10624);
  i1 = (OOC_INT32)rep;
  i2 = (OOC_INT32)baseRep;
  *(OOC_INT32*)(_check_pointer(i1, 10690)) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 10719))+4) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 10748))+8) = 0;
  return;
  ;
}

void OOC_Repository__InitModule(OOC_Repository__Module m, OOC_Repository__Repository origin, const Msg__String name__ref, OOC_LEN name_0d, URI__HierarchicalURI srcFileOverride) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)origin;
  *(OOC_INT32*)(_check_pointer(i0, 10930)) = i1;
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 10955))+4) = i1;
  i1 = (OOC_INT32)srcFileOverride;
  *(OOC_INT32*)((_check_pointer(i0, 10995))+8) = i1;
  *(OOC_INT8*)((_check_pointer(i0, 11043))+16) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 11080))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11102))+20) = 0;
  *(OOC_UINT32*)((_check_pointer(i0, 11130))+24) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 11163))+28) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 11196))+32) = 0;
  return;
  ;
}

void OOC_Repository__InitPkgInfo(OOC_Repository__PkgInfo pkgInfo) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pkgInfo;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)(_check_pointer(i0, 11297)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 11338))+4) = i1;
  return;
  ;
}

void OOC_Repository__RepositoryDesc_SetPackageInfo(OOC_Repository__Repository rep, OOC_Repository__PkgInfo packageInfo) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)rep;
  i1 = (OOC_INT32)packageInfo;
  *(OOC_INT32*)((_check_pointer(i0, 11471))+8) = i1;
  return;
  ;
}

OOC_Repository__Module OOC_Repository__RepositoryDesc_GetModule(OOC_Repository__Repository rep, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d, URI__HierarchicalURI srcFileOverride) {
  OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)

  OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
  _failed_function(11562); return 0;
  ;
}

URI__URI OOC_Repository__RepositoryDesc_GetResource(OOC_Repository__Repository rep, const OOC_CHAR8 package__ref[], OOC_LEN package_0d, const OOC_CHAR8 path__ref[], OOC_LEN path_0d) {
  OOC_ALLOCATE_VPAR(package,OOC_CHAR8 ,package_0d)
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(package__ref,package,OOC_CHAR8 ,package_0d)
  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  _failed_function(12442); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13358))+12);
  oldIfData = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)ifData;
  *(OOC_INT32*)((_check_pointer(i0, 13372))+12) = i2;
  i3 = ifQuality;
  *(OOC_INT8*)((_check_pointer(i0, 13396))+16) = i3;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l55;
  i1 = i1!=i2;
  if (!i1) goto l56;
  count = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13552))+8);
  item = (OOC_SymbolTable__Item)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l7;
  i1=0;
  goto l17;
l7:
  i3=0;
l8_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13611)))), &_td_OOC_SymbolTable__ImportDesc);
  if (!i4) goto l12;
  i3 = i3+1;
  count = i3;
  
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13695));
  item = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l8_loop;
l16:
  i1=i3;
l17:
  i3 = allImports;
  if (i3) goto l20;
  i4=0u;
  goto l22;
l20:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13748))+64);
  i4 = i4!=(OOC_INT32)0;
  
l22:
  if (!i4) goto l25;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13804))+64);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 13818)), 0);
  i1 = i1+i4;
  count = i1;
  
l25:
  *(OOC_INT32*)((_check_pointer(i0, 13852))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_Repository__3256.baseTypes[0], i1));
  count = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13913))+8);
  item = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l28;
  i1=0;
  goto l39;
l28:
  i4=0;
l29_loop:
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13972)))), &_td_OOC_SymbolTable__ImportDesc);
  if (!i5) goto l33;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13999))+20);
  i5 = _check_pointer(i5, 14012);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14032))+40);
  *(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 14012))*16)) = i7;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14056))+20);
  i5 = _check_pointer(i5, 14069);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 14069))*16))+4) = (OOC_INT32)0;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14103))+20);
  i5 = _check_pointer(i5, 14116);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14141))+40);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 14152))+12);
  *(OOC_UINT8*)((i5+((_check_index(i4, i6, OOC_UINT32, 14116))*16))+8) = ((
  _cmp8((const void*)(_check_pointer(i7, 14156)),(const void*)"SYSTEM"))==0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14182))+20);
  i5 = _check_pointer(i5, 14195);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_INT32*)((_check_pointer(i1, 14222))+48);
  *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 14195))*16))+12) = i7;
  i4 = i4+1;
  count = i4;
  
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14304));
  item = (OOC_SymbolTable__Item)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l29_loop;
l37:
  i1=i4;
l39:
  if (i3) goto l41;
  i3=0u;
  goto l43;
l41:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14358))+64);
  i3 = i3!=(OOC_INT32)0;
  
l43:
  if (!i3) goto l56;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14417))+64);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14431)), 0);
  i4 = 0<i3;
  if (!i4) goto l56;
  i4=i1;i1=0;
l47_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14461))+64);
  i5 = _check_pointer(i5, 14475);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 14475))*4);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 14532));
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i6, (OOC_Scanner_InputBuffer__CharArray)i7, 0, 0, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14560))+20);
  i7 = _check_pointer(i7, 14573);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)(i7+((_check_index(i4, i8, OOC_UINT32, 14573))*16)) = i6;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14606))+20);
  i6 = _check_pointer(i6, 14619);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_INT32*)((i6+((_check_index(i4, i7, OOC_UINT32, 14619))*16))+4) = (OOC_INT32)0;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14653))+20);
  i6 = _check_pointer(i6, 14666);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT8*)((i6+((_check_index(i4, i7, OOC_UINT32, 14666))*16))+8) = 0u;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14704))+20);
  i6 = _check_pointer(i6, 14717);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i5 = *(OOC_INT32*)((_check_pointer(i5, 14742))+4);
  *(OOC_INT32*)((i6+((_check_index(i4, i7, OOC_UINT32, 14717))*16))+12) = i5;
  i4 = i4+1;
  count = i4;
  i1 = i1+1;
  i = i1;
  i5 = i1<i3;
  if (i5) goto l47_loop;
  goto l56;
l55:
  *(OOC_INT32*)((_check_pointer(i0, 13456))+20) = (OOC_INT32)0;
l56:
  return;
  ;
}

void OOC_Repository__ModuleDesc_SetFingerprint(OOC_Repository__Module m, OOC_INT32 fp) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)m;
  *(OOC_UINT8*)((_check_pointer(i0, 14902))+28) = 1u;
  i1 = fp;
  *(OOC_INT32*)((_check_pointer(i0, 14933))+32) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15109))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15122)), 0);
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15140))+20);
  i1 = _check_pointer(i1, 15153);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+((_check_index(0, i2, OOC_UINT32, 15153))*16));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15161))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 15165)),(const void*)(OOC_INT32)name))!=0;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15109))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15122)), 0);
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15140))+20);
  i2 = _check_pointer(i2, 15153);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 15153))*16));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15161))+12);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 15165)),(const void*)(OOC_INT32)name))!=0;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15218))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15231)), 0);
  i2 = i1==i2;
  if (i2) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15281))+20);
  i0 = _check_pointer(i0, 15294);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 15294))*16))+4);
  return (OOC_Repository__Module)i0;
  goto l21;
l20:
  return (OOC_Repository__Module)0;
l21:
  _failed_function(14998); return 0;
  ;
}

void OOC_Repository__RepositoryDesc_GetLocalPath(OOC_Repository__Repository rep, OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 path[], OOC_LEN path_0d) {

  return;
  ;
}

OOC_Scanner_InputBuffer__Buffer OOC_Repository__ModuleDesc_GetInputBuffer(OOC_Repository__Module m) {

  _failed_function(15649); return 0;
  ;
}

URI__HierarchicalURI OOC_Repository__ModuleDesc_GetURI(OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 allowRelative) {
  register OOC_INT32 i0,i1,i2;

  i0 = fileId;
  i0 = i0==11;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16316))+12);
  i0 = i0!=(OOC_INT32)0;
  
l5:
  if (i0) goto l7;
  i0=0u;
  goto l9;
l7:
  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16343))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 16351))+44);
  i0 = i0!=0;
  
l9:
  if (i0) goto l11;
  return (URI__HierarchicalURI)(OOC_INT32)0;
  goto l12;
l11:
  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16396))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16426));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16434))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16396))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16404)))), OOC_SymbolTable__ModuleDesc_GetExternalSource)),OOC_SymbolTable__ModuleDesc_GetExternalSource)((OOC_SymbolTable__Module)i0, (URI__HierarchicalURI)i2);
  return (URI__HierarchicalURI)i0;
l12:
  _failed_function(15823); return 0;
  ;
}

OOC_CHAR8 OOC_Repository__ModuleDesc_MatchesURI(OOC_Repository__Module m, OOC_INT8 fileId, URI__URI uri) {
  register OOC_INT32 i0,i1;
  URI__HierarchicalURI muri;
  OOC_Repository__URIBuffer a;
  OOC_Repository__URIBuffer b;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16745)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, i1, 0u);
  muri = (URI__HierarchicalURI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16779)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)a, 1024);
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16803)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)b, 1024);
  return ((
  _cmp8((const void*)(OOC_INT32)a,(const void*)(OOC_INT32)b))==0);
  ;
}

void OOC_Repository__ModuleDesc_GetTimeStamp(OOC_Repository__Module m, OOC_INT8 fileId, struct Time__TimeStamp *ts, RT0__Struct ts__tag) {

  return;
  ;
}

OOC_CHAR8 OOC_Repository__ModuleDesc_FileExists(OOC_Repository__Module m, OOC_INT8 fileId) {

  _failed_function(17141); return 0;
  ;
}

void OOC_Repository__ModuleDesc_CreateOutputDir(OOC_Repository__Module m, OOC_INT8 fileId) {

  return;
  ;
}

IO__ByteChannel OOC_Repository__ModuleDesc_GetOutputChannel(OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 makeTmp) {

  _failed_function(17340); return 0;
  ;
}

void OOC_Repository__RepositoryDesc_GetDefaultSubdir(OOC_Repository__Repository rep, OOC_INT8 id, OOC_CHAR8 subdir[], OOC_LEN subdir_0d) {
  register OOC_INT32 i0;

  i0 = id;
  switch (i0) {
  case 0:
    _copy_8((const void*)"src",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 1:
    _copy_8((const void*)"sym",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 2:
  case 3:
  case 4:
  case 6:
    _copy_8((const void*)"oocdoc/xml",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 5:
    _copy_8((const void*)"oocdoc/html",(void*)(OOC_INT32)subdir,subdir_0d);
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
    _copy_8((const void*)"obj",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 8:
    _copy_8((const void*)"obj",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 18:
    _copy_8((const void*)"bin",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 19:
    _copy_8((const void*)"obj",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  case 20:
    _copy_8((const void*)"rsrc",(void*)(OOC_INT32)subdir,subdir_0d);
    goto l12;
  default:
    _failed_case(i0, 17602);
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
    _copy_8((const void*)".Mod",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 1:
    _copy_8((const void*)".Sym",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 2:
    _copy_8((const void*)"_symtab.xml",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 3:
    _copy_8((const void*)"_sym.xml",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 4:
    _copy_8((const void*)".xml",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 5:
    _copy_8((const void*)".html",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 6:
    _copy_8((const void*)"_op.xml",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 7:
  case 10:
    _copy_8((const void*)".o",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 8:
    _copy_8((const void*)".lo",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 11:
    _copy_8((const void*)".c",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 12:
    _copy_8((const void*)".d",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 13:
    _copy_8((const void*)".oh",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 14:
    _copy_8((const void*)".s",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 15:
    _copy_8((const void*)"_.c",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 16:
    _copy_8((const void*)"_.s",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 17:
    _copy_8((const void*)"_.o",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 18:
    _copy_8((const void*)"",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 19:
    _copy_8((const void*)".la",(void*)(OOC_INT32)suffix,suffix_0d);
    goto l22;
  case 20:
    _assert(0u, 127, 19382);
    goto l22;
  default:
    _failed_case(i0, 18406);
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
  i0 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(0, moduleName_0d, OOC_UINT32, 19625)));
  i0 = i0!=0u;
  if (!i0) goto l43;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19671)));
  i1 = (OOC_UINT8)65u<=(OOC_UINT8)(_cap(i1));
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19695)));
  i1 = (OOC_UINT8)(_cap(i1))<=(OOC_UINT8)90u;
  
l8:
  if (i1) goto l11_loop;
  return 0u;
  
  goto l38;
l11_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19786)));
  i1 = (OOC_UINT8)65u<=(OOC_UINT8)(_cap(i1));
  if (i1) goto l14;
  i1=0u;
  goto l16;
l14:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19810)));
  i1 = (OOC_UINT8)(_cap(i1))<=(OOC_UINT8)90u;
  
l16:
  if (i1) goto l22;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19860)));
  i1 = (OOC_UINT8)48u<=(OOC_UINT8)i1;
  if (i1) goto l20;
  i1=0u;
  goto l23;
l20:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19878)));
  i1 = (OOC_UINT8)i1<=(OOC_UINT8)57u;
  
  goto l23;
l22:
  i1=1u;
l23:
  i1 = !i1;
  if (!i1) goto l11_loop;
l27:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19914)));
  i1 = i1==58u;
  if (i1) goto l33;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 20079)));
  i1 = i1!=0u;
  if (!i1) goto l38;
  return 0u;
  goto l38;
l33:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19973)));
  i1 = i1==0u;
  if (!i1) goto l38;
  return 0u;
l38:
  i1 = *(OOC_UINT8*)((OOC_INT32)moduleName+(_check_index(i0, moduleName_0d, OOC_UINT32, 19625)));
  i1 = i1!=0u;
  if (i1) goto l3_loop;
l43:
  return 1u;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20820))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20801)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)i0, (URI__HierarchicalURI)i2);
  relURI = (URI__URI)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20848));
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l5;
  i0=(OOC_INT32)0;
  goto l73;
l5:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20919)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i2, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20949)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i1, 0, (void*)(OOC_INT32)subdir, 1024);
  _assert(((
  _cmp8((const void*)(OOC_INT32)subdir,(const void*)""))!=0), 127, 21208);
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21264)));
  i2 = i2!=0u;
  if (i2) goto l8;
  i2=0u;
  goto l10;
l8:
  i2 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(0, 1024, OOC_UINT16, 21283)));
  i2 = i2!=0u;
  
l10:
  if (i2) goto l12;
  i2=0u;
  goto l14;
l12:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21299)));
  i3 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(0, 1024, OOC_UINT16, 21311)));
  i2 = i2==i3;
  
l14:
  if (i2) goto l16;
  i2=0;
  goto l30;
l16:
  i2=0;
l17_loop:
  i2 = i2+1;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21264)));
  i3 = i3!=0u;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(i2, 1024, OOC_UINT16, 21283)));
  i3 = i3!=0u;
  
l22:
  if (i3) goto l24;
  i3=0u;
  goto l26;
l24:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21299)));
  i4 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(i2, 1024, OOC_UINT16, 21311)));
  i3 = i3==i4;
  
l26:
  if (i3) goto l17_loop;
l30:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21365)));
  i3 = i3==47u;
  if (i3) goto l33;
  i3=0u;
  goto l35;
l33:
  i3 = *(OOC_UINT8*)((OOC_INT32)subdir+(_check_index(i2, 1024, OOC_UINT16, 21385)));
  i3 = i3==0u;
  
l35:
  if (i3) goto l37;
  i0=(OOC_INT32)0;
  goto l73;
l37:
  Strings__Delete((void*)(OOC_INT32)str, 1024, 0, (i2+1));
  i = 0;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21630)));
  i2 = i2!=0u;
  if (i2) goto l40;
  i2=0u;
  goto l42;
l40:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 21646)));
  i2 = i2!=46u;
  
l42:
  if (i2) goto l44;
  i2=0;
  goto l57;
l44:
  i2=0;
l45_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21679)));
  i3 = i3==47u;
  if (!i3) goto l48;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21712))) = 58u;
l48:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21630)));
  i3 = i3!=0u;
  if (i3) goto l51;
  i3=0u;
  goto l53;
l51:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21646)));
  i3 = i3!=46u;
  
l53:
  if (i3) goto l45_loop;
l57:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 1024, OOC_UINT16, 21788))) = 0u;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21818)))), OOC_Repository__RepositoryDesc_GetModule)),OOC_Repository__RepositoryDesc_GetModule)((OOC_Repository__Repository)i1, (void*)(OOC_INT32)str, 1024, (URI__HierarchicalURI)(OOC_INT32)0);
  m = (OOC_Repository__Module)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l60;
  i0=0u;
  goto l62;
l60:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21869)))), OOC_Repository__ModuleDesc_MatchesURI)),OOC_Repository__ModuleDesc_MatchesURI)((OOC_Repository__Module)i1, 0, (URI__URI)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20601)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  OS_Path__basename((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)str, 1024);
  OS_Path__splitext((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)ext, 1024);
  i1 = OOC_Repository__ValidModuleName((void*)(OOC_INT32)str, 1024);
  if (i1) goto l71;
  i0=(OOC_INT32)0;
  goto l73;
l71:
  i1 = (OOC_INT32)rep;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20739)))), OOC_Repository__RepositoryDesc_GetModule)),OOC_Repository__RepositoryDesc_GetModule)((OOC_Repository__Repository)i1, (void*)(OOC_INT32)str, 1024, (URI__HierarchicalURI)i0);
  
l73:
  return (OOC_Repository__Module)i0;
  ;
}

OOC_SymbolTable__Module OOC_Repository__ModuleDesc_ReadSymbolFile(OOC_Repository__Module m) {
  register OOC_INT32 i0,i1;
  URI__URI uri;
  IO__ByteChannel ch;
  OOC_SymbolTable_Builder__Builder stb;
  OOC_SymbolTable__Module symTab;

  i0 = (OOC_INT32)m;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 22931))+16);
  i1 = i1==4;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23014)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 1, 1u);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23061)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2);
  ch = (IO__ByteChannel)i1;
  OOC_Logger__ReadFile((URI__URI)i0);
  i0 = (OOC_INT32)OOC_SymbolTable_Builder__New();
  stb = (OOC_SymbolTable_Builder__Builder)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23167)))), OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable)),OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable)((OOC_SymbolTable_Builder__Builder)i0, (IO__ByteChannel)i1);
  symTab = (OOC_SymbolTable__Module)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23199)))), IO__ChannelDesc_Close)),IO__ChannelDesc_Close)((IO__Channel)i1);
  return (OOC_SymbolTable__Module)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22982))+12);
  return (OOC_SymbolTable__Module)i0;
l4:
  _failed_function(22163); return 0;
  ;
}

void OOC_OOC_Repository_init(void) {

  return;
  ;
}

/* --- */
