#include "OOC/Repository/FileSystem.d"
#include "__oo2c.h"

OOC_Repository_FileSystem__Repository OOC_Repository_FileSystem__New(OOC_Repository__Repository baseRep, URI__HierarchicalURI baseDir) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Repository_FileSystem__Repository rep;
  URI__URI relative;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Repository_FileSystem__Repository.baseTypes[0]);
  rep = (OOC_Repository_FileSystem__Repository)i0;
  i1 = (OOC_INT32)baseRep;
  i2 = (OOC_INT32)baseDir;
  OOC_Repository__Init((OOC_Repository__Repository)i0, (OOC_Repository__Repository)i1, (URI__HierarchicalURI)i2);
  i1 = (OOC_INT32)URI_Scheme_File__GetCwd();
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1779)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i1);
  relative = (URI__URI)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1828));
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l5;
l3:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1864)))), &_td_URI_Scheme_File__URIDesc);
  
l5:
  if (i3) goto l7;
  i3=OOC_FALSE;
  goto l9;
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1907)))), &_td_URI_Scheme_File__URIDesc, 1907)), 1911))+12);
  i3 = i3!=(OOC_INT32)0;
  
l9:
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1956)))), &_td_URI_Scheme_File__URIDesc, 1956)), 1960))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 1970))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 1978)),(const void*)".."))!=(OOC_INT32)0;
  
l13:
  if (i3) goto l15;
  *(OOC_INT32*)((_check_pointer(i0, 2063))+12) = i2;
  goto l16;
l15:
  *(OOC_INT32*)((_check_pointer(i0, 2002))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2039)))), &_td_URI_Scheme_File__URIDesc, 2039));
l16:
  return (OOC_Repository_FileSystem__Repository)i0;
  ;
}

static void OOC_Repository_FileSystem__InitModule(OOC_Repository_FileSystem__Module m, OOC_Repository_FileSystem__Repository origin, const Msg__String name__ref, OOC_LEN name_0d, URI__HierarchicalURI srcFileOverride) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)origin;
  i2 = (OOC_INT32)srcFileOverride;
  OOC_Repository__InitModule((OOC_Repository__Module)i0, (OOC_Repository__Repository)i1, (void*)(OOC_INT32)name, name_0d, (URI__HierarchicalURI)i2);
  return;
  ;
}

static OOC_Repository_FileSystem__Module OOC_Repository_FileSystem__NewModule(OOC_Repository_FileSystem__Repository origin, const Msg__String name__ref, OOC_LEN name_0d, URI__HierarchicalURI srcFileOverride) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)origin;
  i1 = (OOC_INT32)srcFileOverride;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Repository_FileSystem__Module.baseTypes[0]);
  OOC_Repository_FileSystem__InitModule((OOC_Repository_FileSystem__Module)i2, (OOC_Repository_FileSystem__Repository)i0, (void*)(OOC_INT32)name, name_0d, (URI__HierarchicalURI)i1);
  return (OOC_Repository_FileSystem__Module)i2;
  ;
}

static void OOC_Repository_FileSystem__ModuleToFileName(OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(0, name_0d, OOC_UINT32, 2734)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, name_0d, OOC_UINT32, 2761)));
  i1 = i1==(OOC_CHAR8)':';
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, name_0d, OOC_UINT32, 2789))) = (OOC_CHAR8)'/';
l6:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, name_0d, OOC_UINT32, 2734)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3_loop;
l11:
  return;
  ;
}

OOC_Repository_FileSystem__Module OOC_Repository_FileSystem__RepositoryDesc_GetModule(OOC_Repository_FileSystem__Repository rep, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d, URI__HierarchicalURI srcFileOverride) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)
  URI__URI uri;
  Msg__Msg res;
  OOC_Repository__URIBuffer str;
  auto URI__URI OOC_Repository_FileSystem__RepositoryDesc_GetModule_GetURI(OOC_INT8 fileId, Msg__Msg *res);
    
    URI__URI OOC_Repository_FileSystem__RepositoryDesc_GetModule_GetURI(OOC_INT8 fileId, Msg__Msg *res) {
      register OOC_INT32 i0,i1;
      OOC_Repository__URIBuffer path;
      OOC_Repository__URIBuffer str;

      i0 = (OOC_INT32)rep;
      i1 = fileId;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3326)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)path, 1024);
      i0 = (
      _cmp8((const void*)(OOC_INT32)path,(const void*)""))!=(OOC_INT32)0;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = Strings__Length((void*)(OOC_INT32)path, 1024);
      i0 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), 1024, OOC_UINT16, 3389)));
      i0 = i0!=(OOC_CHAR8)'/';
      
l5:
      if (!i0) goto l7;
      Strings__Append("/", 2, (void*)(OOC_INT32)path, 1024);
l7:
      _copy_8((const void*)(OOC_INT32)moduleName,(void*)(OOC_INT32)str,1024);
      OOC_Repository_FileSystem__ModuleToFileName((void*)(OOC_INT32)str, 1024);
      Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)path, 1024);
      i0 = (OOC_INT32)rep;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3576)))), OOC_Repository__RepositoryDesc_GetDefaultSuffix)),OOC_Repository__RepositoryDesc_GetDefaultSuffix)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)str, 1024);
      Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)path, 1024);
      i0 = (OOC_INT32)rep;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3684))+4);
      i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)path, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)res);
      return (URI__URI)i0;
      ;
    }


  OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
  i0 = (OOC_INT32)OOC_Repository_FileSystem__RepositoryDesc_GetModule_GetURI(0, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  uri = (URI__URI)i0;
  if (i1) goto l19;
  i1 = (OOC_INT32)srcFileOverride;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l17;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4020)))), &_td_URI_Scheme_File__URIDesc, 4020)), 4024)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4020)))), &_td_URI_Scheme_File__URIDesc, 4020)), (void*)(OOC_INT32)str, 1024);
  i0 = Files__Exists((void*)(OOC_INT32)str, 1024);
  if (i0) goto l15;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__RepositoryDesc_GetModule_GetURI(1, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  uri = (URI__URI)i0;
  if (i1) goto l13;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4340)))), &_td_URI_Scheme_File__URIDesc, 4340)), 4344)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4340)))), &_td_URI_Scheme_File__URIDesc, 4340)), (void*)(OOC_INT32)str, 1024);
  i0 = Files__Exists((void*)(OOC_INT32)str, 1024);
  if (i0) goto l11;
  return (OOC_Repository_FileSystem__Module)(OOC_INT32)0;
  goto l20;
l11:
  i0 = (OOC_INT32)srcFileOverride;
  i1 = (OOC_INT32)rep;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__NewModule((OOC_Repository_FileSystem__Repository)i1, (void*)(OOC_INT32)moduleName, moduleName_0d, (URI__HierarchicalURI)i0);
  return (OOC_Repository_FileSystem__Module)i0;
  goto l20;
l13:
  return (OOC_Repository_FileSystem__Module)(OOC_INT32)0;
  goto l20;
l15:
  i0 = (OOC_INT32)rep;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__NewModule((OOC_Repository_FileSystem__Repository)i0, (void*)(OOC_INT32)moduleName, moduleName_0d, (URI__HierarchicalURI)i1);
  return (OOC_Repository_FileSystem__Module)i0;
  goto l20;
l17:
  i0 = (OOC_INT32)rep;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__NewModule((OOC_Repository_FileSystem__Repository)i0, (void*)(OOC_INT32)moduleName, moduleName_0d, (URI__HierarchicalURI)i1);
  return (OOC_Repository_FileSystem__Module)i0;
  goto l20;
l19:
  return (OOC_Repository_FileSystem__Module)(OOC_INT32)0;
l20:
  _failed_function(2886); return 0;
  ;
}

URI__URI OOC_Repository_FileSystem__RepositoryDesc_GetResource(OOC_Repository_FileSystem__Repository rep, const OOC_CHAR8 package__ref[], OOC_LEN package_0d, const OOC_CHAR8 path__ref[], OOC_LEN path_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(package,OOC_CHAR8 ,package_0d)
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)
  OOC_Repository__URIBuffer p;
  URI__URI uri;
  Msg__Msg res;
  OOC_Repository__URIBuffer str;

  OOC_INITIALIZE_VPAR(package__ref,package,OOC_CHAR8 ,package_0d)
  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = (
  _cmp8((const void*)(OOC_INT32)package,(const void*)""))==(OOC_INT32)0;
  i1 = (OOC_INT32)rep;
  if (i0) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4926)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i1, 20, (void*)(OOC_INT32)p, 1024);
  i0 = (
  _cmp8((const void*)(OOC_INT32)p,(const void*)""))!=(OOC_INT32)0;
  if (i0) goto l5;
  i0=OOC_FALSE;
  goto l7;
l5:
  i0 = Strings__Length((void*)(OOC_INT32)p, 1024);
  i0 = *(OOC_UINT8*)((OOC_INT32)p+(_check_index((i0-1), 1024, OOC_UINT16, 4990)));
  i0 = i0!=(OOC_CHAR8)'/';
  
l7:
  if (!i0) goto l9;
  Strings__Append("/", 2, (void*)(OOC_INT32)p, 1024);
l9:
  Strings__Append((void*)(OOC_INT32)package, package_0d, (void*)(OOC_INT32)p, 1024);
  Strings__Append("/", 2, (void*)(OOC_INT32)p, 1024);
  Strings__Append((void*)(OOC_INT32)path, path_0d, (void*)(OOC_INT32)p, 1024);
  goto l11;
l10:
  _copy_8((const void*)(OOC_INT32)path,(void*)(OOC_INT32)p,1024);
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5347))+4);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)p, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  uri = (URI__URI)i0;
  if (i1) goto l18;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5437)))), &_td_URI_Scheme_File__URIDesc, 5437)), 5441)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5437)))), &_td_URI_Scheme_File__URIDesc, 5437)), (void*)(OOC_INT32)str, 1024);
  i1 = Files__Exists((void*)(OOC_INT32)str, 1024);
  if (i1) goto l16;
  return (URI__URI)(OOC_INT32)0;
  goto l19;
l16:
  return (URI__URI)i0;
  goto l19;
l18:
  return (URI__URI)(OOC_INT32)0;
l19:
  _failed_function(4647); return 0;
  ;
}

void OOC_Repository_FileSystem__RepositoryDesc_DumpContent(OOC_Repository_FileSystem__Repository rep, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_Repository__URIBuffer str;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5687)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  <file-system>", 16);
  i1 = (OOC_INT32)rep;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5729))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5729))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5738)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i1, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5762)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5788)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</file-system>", 15);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5827)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_Repository_FileSystem__RepositoryDesc_GetLocalPath(OOC_Repository_FileSystem__Repository rep, OOC_Repository__Module m, OOC_INT8 fileId, OOC_CHAR8 path[], OOC_LEN path_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_Repository__URIBuffer subdir;
  OOC_Repository__URIBuffer suffix;
  OOC_Repository__URIBuffer str;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)rep;
  i1 = fileId;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6094)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)subdir, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6138)))), OOC_Repository__RepositoryDesc_GetDefaultSuffix)),OOC_Repository__RepositoryDesc_GetDefaultSuffix)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)suffix, 1024);
  _copy_8((const void*)(OOC_INT32)subdir,(void*)(OOC_INT32)path,path_0d);
  i0 = (
  _cmp8((const void*)(OOC_INT32)path,(const void*)""))!=(OOC_INT32)0;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = Strings__Length((void*)(OOC_INT32)path, path_0d);
  i0 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 6231)));
  i0 = i0!=(OOC_CHAR8)'/';
  
l5:
  if (!i0) goto l7;
  Strings__Append("/", 2, (void*)(OOC_INT32)path, path_0d);
l7:
  i0 = (OOC_INT32)m;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6322))+4);
  _copy_8((const void*)(_check_pointer(i2, 6328)),(void*)(OOC_INT32)str,1024);
  OOC_Repository_FileSystem__ModuleToFileName((void*)(OOC_INT32)str, 1024);
  i1 = i1==19;
  if (i1) goto l10;
  OOC_Repository_FileSystem__ModuleToFileName((void*)(OOC_INT32)str, 1024);
  goto l11;
l10:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 6422))+16);
  _assert((i1==4), 127, 6414);
  Strings__Append("lib", 4, (void*)(OOC_INT32)path, path_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6510))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6517))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6510))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6517))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6537)))), &_td_Object__String8Desc, 6537)), 6545)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6537)))), &_td_Object__String8Desc, 6537)));
  chars = (Object__CharsLatin1)i0;
  _copy_8((const void*)(_check_pointer(i0, 6577)),(void*)(OOC_INT32)str,1024);
l11:
  Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)path, path_0d);
  Strings__Append((void*)(OOC_INT32)suffix, 1024, (void*)(OOC_INT32)path, path_0d);
  return;
  ;
}

URI__HierarchicalURI OOC_Repository_FileSystem__ModuleDesc_GetURI(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId, OOC_CHAR8 allowRelative) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  URI__HierarchicalURI huri;
  OOC_Repository__URIBuffer path;
  URI__URI uri;
  Msg__Msg res;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i2 = allowRelative;
  i3 = (OOC_INT32)OOC_Repository__ModuleDesc_GetURI((OOC_Repository__Module)i0, i1, i2);
  i4 = i3==(OOC_INT32)0;
  huri = (URI__HierarchicalURI)i3;
  if (i4) goto l3;
  return (URI__HierarchicalURI)i3;
  goto l16;
l3:
  i3 = i1==0;
  if (i3) goto l6;
  i3=OOC_FALSE;
  goto l8;
l6:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7078))+8);
  i3 = i3!=(OOC_INT32)0;
  
l8:
  if (i3) goto l14;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7162));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7162));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7169)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i4, (OOC_Repository__Module)i0, i1, (void*)(OOC_INT32)path, 1024);
  if (i2) goto l12;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7373));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7381))+4);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)path, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
  goto l13;
l12:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7273));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7282)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 7282)), 7293))+12);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)path, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
l13:
  i1 = (OOC_INT32)res;
  _assert((i1==(OOC_INT32)0), 127, 7428);
  return (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7548)))), &_td_URI__HierarchicalURIDesc, 7548));
  goto l16;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7124))+8);
  return (URI__HierarchicalURI)i0;
l16:
  _failed_function(6749); return 0;
  ;
}

void OOC_Repository_FileSystem__ModuleDesc_GetTimeStamp(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId, struct Time__TimeStamp *ts, RT0__Struct ts__tag) {
  register OOC_INT32 i0,i1;
  URI__URI uri;
  OOC_Repository__URIBuffer path;
  Msg__Msg res;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7796)))), OOC_Repository_FileSystem__ModuleDesc_GetURI)),OOC_Repository_FileSystem__ModuleDesc_GetURI)((OOC_Repository_FileSystem__Module)i0, i1, OOC_FALSE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7838)))), &_td_URI_Scheme_File__URIDesc, 7838)), 7842)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7838)))), &_td_URI_Scheme_File__URIDesc, 7838)), (void*)(OOC_INT32)path, 1024);
  i0 = (OOC_INT32)ts__tag;
  Files__GetModTime((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)ts, (RT0__Struct)i0, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l3;
  Time__InitTimeStamp((void*)(OOC_INT32)ts, (RT0__Struct)i0, 2147483647, 0);
l3:
  return;
  ;
}

OOC_CHAR8 OOC_Repository_FileSystem__ModuleDesc_FileExists(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1;
  URI__URI uri;
  OOC_Repository__URIBuffer path;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8133)))), OOC_Repository_FileSystem__ModuleDesc_GetURI)),OOC_Repository_FileSystem__ModuleDesc_GetURI)((OOC_Repository_FileSystem__Module)i0, i1, OOC_FALSE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8175)))), &_td_URI_Scheme_File__URIDesc, 8175)), 8179)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8175)))), &_td_URI_Scheme_File__URIDesc, 8175)), (void*)(OOC_INT32)path, 1024);
  i0 = Files__Exists((void*)(OOC_INT32)path, 1024);
  return i0;
  ;
}

OOC_Scanner_InputBuffer__Buffer OOC_Repository_FileSystem__ModuleDesc_GetInputBuffer(OOC_Repository_FileSystem__Module m, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;
  URI__URI modURI;
  OOC_Repository__URIBuffer str;
  OOC_Error__List errList;

  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8503)))), OOC_Repository_FileSystem__ModuleDesc_GetURI)),OOC_Repository_FileSystem__ModuleDesc_GetURI)((OOC_Repository_FileSystem__Module)i0, 0, OOC_TRUE);
  modURI = (URI__URI)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8556)))), &_td_URI_Scheme_File__URIDesc);
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8638)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8598)))), &_td_URI_Scheme_File__URIDesc, 8598)), 8602)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8598)))), &_td_URI_Scheme_File__URIDesc, 8598)), (void*)(OOC_INT32)str, 1024);
l4:
  i1 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)str, 1024);
  errList = (OOC_Error__List)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8755)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2, (void*)(OOC_INT32)res);
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  OOC_Logger__ReadFile((URI__URI)i0);
  i0 = (OOC_INT32)OOC_Scanner_InputBuffer__New((Channel__Channel)i2, (OOC_Error__List)i1);
  return (OOC_Scanner_InputBuffer__Buffer)i0;
  goto l8;
l7:
  return (OOC_Scanner_InputBuffer__Buffer)(OOC_INT32)0;
l8:
  _failed_function(8269); return 0;
  ;
}

void OOC_Repository_FileSystem__ModuleDesc_CreateOutputDir(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId, Msg__Msg *res) {
  register OOC_INT32 i0,i1;
  URI__URI uri;
  OOC_Repository__URIBuffer path;
  OOC_Repository__URIBuffer str;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9102)))), OOC_Repository_FileSystem__ModuleDesc_GetURI)),OOC_Repository_FileSystem__ModuleDesc_GetURI)((OOC_Repository_FileSystem__Module)i0, i1, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9143)))), &_td_URI_Scheme_File__URIDesc, 9143)), 9147)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9143)))), &_td_URI_Scheme_File__URIDesc, 9143)), (void*)(OOC_INT32)path, 1024);
  OS_Path__dirname((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 1024);
  OS_Files__makedirs((void*)(OOC_INT32)str, 1024, 511, (void*)(OOC_INT32)res);
  return;
  ;
}

Channel__Channel OOC_Repository_FileSystem__ModuleDesc_GetOutputChannel(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId, OOC_CHAR8 makeTmp, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2;
  URI__URI uri;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9423)))), OOC_Repository_FileSystem__ModuleDesc_CreateOutputDir)),OOC_Repository_FileSystem__ModuleDesc_CreateOutputDir)((OOC_Repository_FileSystem__Module)i0, i1, (void*)(OOC_INT32)res);
  i2 = (OOC_INT32)*res;
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  return (Channel__Channel)(OOC_INT32)0;
  goto l8;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9503)))), OOC_Repository_FileSystem__ModuleDesc_GetURI)),OOC_Repository_FileSystem__ModuleDesc_GetURI)((OOC_Repository_FileSystem__Module)i0, i1, OOC_TRUE);
  uri = (URI__URI)i0;
  OOC_Logger__WriteFile((URI__URI)i0);
  i1 = makeTmp;
  if (i1) goto l6;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9661)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 0, (void*)(OOC_INT32)res);
  return (Channel__Channel)i0;
  goto l8;
l6:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9597)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 1, (void*)(OOC_INT32)res);
  return (Channel__Channel)i0;
l8:
  _failed_function(9293); return 0;
  ;
}

void OOC_OOC_Repository_FileSystem_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Scheme_File__GetCwd();
  OOC_Repository_FileSystem__baseURI = (URI__HierarchicalURI)i0;
  return;
  ;
}

/* --- */
