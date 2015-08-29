#include <OOC/Repository/FileSystem.d>
#include <__oo2c.h>
#include <setjmp.h>

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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1780)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i1);
  relative = (URI__URI)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1829));
  i3 = i3==0;
  if (i3) goto l3;
  i3=0u;
  goto l5;
l3:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1865)))), &_td_URI_Scheme_File__URIDesc);
  
l5:
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1908)))), &_td_URI_Scheme_File__URIDesc, 1908)), 1912))+12);
  i3 = i3!=0;
  
l9:
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1957)))), &_td_URI_Scheme_File__URIDesc, 1957)), 1961))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 1971))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 1979)),(const void*)".."))!=0;
  
l13:
  if (i3) goto l15;
  *(OOC_INT32*)((_check_pointer(i0, 2064))+12) = i2;
  goto l16;
l15:
  *(OOC_INT32*)((_check_pointer(i0, 2003))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2040)))), &_td_URI_Scheme_File__URIDesc, 2040));
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

  i0 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(0, name_0d, OOC_UINT32, 2735)));
  i0 = i0!=0u;
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, name_0d, OOC_UINT32, 2762)));
  i1 = i1==58u;
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, name_0d, OOC_UINT32, 2790))) = 47u;
l6:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, name_0d, OOC_UINT32, 2735)));
  i1 = i1!=0u;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3327)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)path, 1024);
      i0 = (
      _cmp8((const void*)(OOC_INT32)path,(const void*)""))!=0;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = Strings__Length((void*)(OOC_INT32)path, 1024);
      i0 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), 1024, OOC_UINT16, 3390)));
      i0 = i0!=47u;
      
l5:
      if (!i0) goto l7;
      Strings__Append("/", 2, (void*)(OOC_INT32)path, 1024);
l7:
      _copy_8((const void*)(OOC_INT32)moduleName,(void*)(OOC_INT32)str,1024);
      OOC_Repository_FileSystem__ModuleToFileName((void*)(OOC_INT32)str, 1024);
      Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)path, 1024);
      i0 = (OOC_INT32)rep;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3577)))), OOC_Repository__RepositoryDesc_GetDefaultSuffix)),OOC_Repository__RepositoryDesc_GetDefaultSuffix)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)str, 1024);
      Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)path, 1024);
      i0 = (OOC_INT32)rep;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3685))+4);
      i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)path, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)res);
      return (URI__URI)i0;
      ;
    }


  OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
  i0 = (OOC_INT32)OOC_Repository_FileSystem__RepositoryDesc_GetModule_GetURI(0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l19;
  i1 = (OOC_INT32)srcFileOverride;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l17;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4021)))), &_td_URI_Scheme_File__URIDesc, 4021)), (void*)(OOC_INT32)str, 1024);
  i0 = Files__Exists((void*)(OOC_INT32)str, 1024);
  if (i0) goto l15;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__RepositoryDesc_GetModule_GetURI(1, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l13;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4341)))), &_td_URI_Scheme_File__URIDesc, 4341)), (void*)(OOC_INT32)str, 1024);
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
  _failed_function(2887); return 0;
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
  _cmp8((const void*)(OOC_INT32)package,(const void*)""))==0;
  if (i0) goto l10;
  i0 = (OOC_INT32)rep;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4927)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i0, 20, (void*)(OOC_INT32)p, 1024);
  i0 = (
  _cmp8((const void*)(OOC_INT32)p,(const void*)""))!=0;
  if (i0) goto l5;
  i0=0u;
  goto l7;
l5:
  i0 = Strings__Length((void*)(OOC_INT32)p, 1024);
  i0 = *(OOC_UINT8*)((OOC_INT32)p+(_check_index((i0-1), 1024, OOC_UINT16, 4991)));
  i0 = i0!=47u;
  
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
  i0 = (OOC_INT32)rep;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5348))+4);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)p, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)res;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l18;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5438)))), &_td_URI_Scheme_File__URIDesc, 5438)), (void*)(OOC_INT32)str, 1024);
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
  _failed_function(4648); return 0;
  ;
}

void OOC_Repository_FileSystem__RepositoryDesc_DumpContent(OOC_Repository_FileSystem__Repository rep, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_Repository__URIBuffer str;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5688)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  <file-system>", 16);
  i1 = (OOC_INT32)rep;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5730))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5730))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5739)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i1, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5763)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5789)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</file-system>", 15);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5828)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6095)))), OOC_Repository__RepositoryDesc_GetDefaultSubdir)),OOC_Repository__RepositoryDesc_GetDefaultSubdir)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)subdir, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6139)))), OOC_Repository__RepositoryDesc_GetDefaultSuffix)),OOC_Repository__RepositoryDesc_GetDefaultSuffix)((OOC_Repository__Repository)i0, i1, (void*)(OOC_INT32)suffix, 1024);
  _copy_8((const void*)(OOC_INT32)subdir,(void*)(OOC_INT32)path,path_0d);
  i0 = (
  _cmp8((const void*)(OOC_INT32)path,(const void*)""))!=0;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = Strings__Length((void*)(OOC_INT32)path, path_0d);
  i0 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index((i0-1), path_0d, OOC_UINT16, 6232)));
  i0 = i0!=47u;
  
l5:
  if (!i0) goto l7;
  Strings__Append("/", 2, (void*)(OOC_INT32)path, path_0d);
l7:
  i0 = (OOC_INT32)m;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6323))+4);
  _copy_8((const void*)(_check_pointer(i2, 6329)),(void*)(OOC_INT32)str,1024);
  OOC_Repository_FileSystem__ModuleToFileName((void*)(OOC_INT32)str, 1024);
  i1 = i1==19;
  if (i1) goto l10;
  OOC_Repository_FileSystem__ModuleToFileName((void*)(OOC_INT32)str, 1024);
  goto l11;
l10:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 6423))+16);
  _assert((i1==4), 127, 6415);
  Strings__Append("lib", 4, (void*)(OOC_INT32)path, path_0d);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6511))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6518))+52);
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6538)))), &_td_Object__String8Desc, 6538)));
  chars = (Object__CharsLatin1)i0;
  _copy_8((const void*)(_check_pointer(i0, 6578)),(void*)(OOC_INT32)str,1024);
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
  huri = (URI__HierarchicalURI)i3;
  i4 = i3==(OOC_INT32)0;
  if (i4) goto l3;
  return (URI__HierarchicalURI)i3;
  goto l16;
l3:
  i3 = i1==0;
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7079))+8);
  i3 = i3!=(OOC_INT32)0;
  
l8:
  if (i3) goto l14;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7163));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7163));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7170)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i4, (OOC_Repository__Module)i0, i1, (void*)(OOC_INT32)path, 1024);
  if (i2) goto l12;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7374));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7382))+4);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)path, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
  goto l13;
l12:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7274));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7283)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 7283)), 7294))+12);
  i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)path, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
  uri = (URI__URI)i0;
  
l13:
  i1 = (OOC_INT32)res;
  _assert((i1==(OOC_INT32)0), 127, 7429);
  return (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7549)))), &_td_URI__HierarchicalURIDesc, 7549));
  goto l16;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7125))+8);
  return (URI__HierarchicalURI)i0;
l16:
  _failed_function(6750); return 0;
  ;
}

void OOC_Repository_FileSystem__ModuleDesc_GetTimeStamp(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId, struct Time__TimeStamp *ts, RT0__Struct ts__tag) {
  register OOC_INT32 i0,i1;
  URI__URI uri;
  OOC_Repository__URIBuffer path;
  Msg__Msg res;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__ModuleDesc_GetURI((OOC_Repository_FileSystem__Module)i0, i1, 0u);
  uri = (URI__URI)i0;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7839)))), &_td_URI_Scheme_File__URIDesc, 7839)), (void*)(OOC_INT32)path, 1024);
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
  i0 = (OOC_INT32)OOC_Repository_FileSystem__ModuleDesc_GetURI((OOC_Repository_FileSystem__Module)i0, i1, 0u);
  uri = (URI__URI)i0;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8176)))), &_td_URI_Scheme_File__URIDesc, 8176)), (void*)(OOC_INT32)path, 1024);
  i0 = Files__Exists((void*)(OOC_INT32)path, 1024);
  return i0;
  ;
}

OOC_Scanner_InputBuffer__Buffer OOC_Repository_FileSystem__ModuleDesc_GetInputBuffer(OOC_Repository_FileSystem__Module m) {
  register OOC_INT32 i0,i1,i2;
  URI__URI modURI;
  OOC_Repository__URIBuffer str;
  OOC_Error__List errList;

  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__ModuleDesc_GetURI((OOC_Repository_FileSystem__Module)i0, 0, 1u);
  modURI = (URI__URI)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8556)))), &_td_URI_Scheme_File__URIDesc);
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8638)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  goto l4;
l3:
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8598)))), &_td_URI_Scheme_File__URIDesc, 8598)), (void*)(OOC_INT32)str, 1024);
l4:
  i1 = (OOC_INT32)OOC_Error__NewList((void*)(OOC_INT32)str, 1024);
  errList = (OOC_Error__List)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8755)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 2);
  OOC_Logger__ReadFile((URI__URI)i0);
  i0 = (OOC_INT32)OOC_Scanner_InputBuffer__New((IO__ByteChannel)i2, (OOC_Error__List)i1);
  return (OOC_Scanner_InputBuffer__Buffer)i0;
  ;
}

void OOC_Repository_FileSystem__ModuleDesc_CreateOutputDir(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1;
  URI__URI uri;
  OOC_Repository__URIBuffer path;
  OOC_Repository__URIBuffer str;
  Msg__Msg res;
  IO__Error e;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  i0 = (OOC_INT32)OOC_Repository_FileSystem__ModuleDesc_GetURI((OOC_Repository_FileSystem__Module)i0, i1, 1u);
  uri = (URI__URI)i0;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9109)))), &_td_URI_Scheme_File__URIDesc, 9109)), (void*)(OOC_INT32)path, 1024);
  OS_Path__dirname((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 1024);
  OS_Files__makedirs((void*)(OOC_INT32)str, 1024, 511, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)res;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l4;
  i0 = (OOC_INT32)RT0__NewObject(_td_IO__Error.baseTypes[0]);
  e = (IO__Error)i0;
  IO__InitError((IO__Error)i0, (Object__String)((OOC_INT32)_c0));
  Exception__Raise((void*)i0);
l4:
  return;
  ;
}

IO__ByteChannel OOC_Repository_FileSystem__ModuleDesc_GetOutputChannel(OOC_Repository_FileSystem__Module m, OOC_INT8 fileId, OOC_CHAR8 makeTmp) {
  register OOC_INT32 i0,i1;
  URI__URI uri;

  i0 = (OOC_INT32)m;
  i1 = fileId;
  OOC_Repository_FileSystem__ModuleDesc_CreateOutputDir((OOC_Repository_FileSystem__Module)i0, i1);
  i0 = (OOC_INT32)OOC_Repository_FileSystem__ModuleDesc_GetURI((OOC_Repository_FileSystem__Module)i0, i1, 1u);
  uri = (URI__URI)i0;
  OOC_Logger__WriteFile((URI__URI)i0);
  i1 = makeTmp;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9727)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 0);
  return (IO__ByteChannel)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9672)))), URI__URIDesc_GetChannel)),URI__URIDesc_GetChannel)((URI__URI)i0, 1);
  return (IO__ByteChannel)i0;
l4:
  _failed_function(9376); return 0;
  ;
}

void OOC_OOC_Repository_FileSystem_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region("Failed to create directory", 27, 0, 26);

  i0 = (OOC_INT32)URI_Scheme_File__GetCwd();
  OOC_Repository_FileSystem__baseURI = (URI__HierarchicalURI)i0;
  return;
  ;
}

/* --- */
