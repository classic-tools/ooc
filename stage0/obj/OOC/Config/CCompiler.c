#include "OOC/Config/CCompiler.d"
#include "__oo2c.h"

OOC_CHAR8 OOC_Config_CCompiler__HaveLibtool() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1319))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1338)))), &_td_Config_Value_String__ValueDesc, 1338)), 1344));
  return ((
  _cmp8((const void*)(_check_pointer(i0, 1351)),(const void*)"no"))!=0);
  ;
}

static void OOC_Config_CCompiler__SetCommand(const OOC_CHAR8 mode__ref[], OOC_LEN mode_0d, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(mode,OOC_CHAR8 ,mode_0d)

  OOC_INITIALIZE_VPAR(mode__ref,mode,OOC_CHAR8 ,mode_0d)
  i0 = (
  _cmp8((const void*)(OOC_INT32)mode,(const void*)""))!=0;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = OOC_Config_CCompiler__HaveLibtool();
  
l4:
  if (i0) goto l7;
  _copy_8("",(OOC_INT32)cmd,cmd_0d);
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1516))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1536)))), &_td_Config_Value_String__ValueDesc, 1536)), 1542));
  _copy_8((_check_pointer(i0, 1550)),(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" --mode=", 9, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append((void*)(OOC_INT32)mode, mode_0d, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
l8:
  i0 = (OOC_INT32)OOC_Config_CCompiler__cc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1727))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1747)))), &_td_Config_Value_String__ValueDesc, 1747)), 1753));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1727))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1747)))), &_td_Config_Value_String__ValueDesc, 1747)), 1753));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1761)), 0);
  Strings__Append((void*)(_check_pointer(i1, 1761)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__CompileFileCmd(URI__URI in, URI__URI out, OOC_CHAR8 forLibrary, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  URI_Scheme_File__URI f;
  OOC_CHAR8 str[2048];
  ADT_String__StringArrayPtr include;
  OOC_INT32 i;
  auto URI_Scheme_File__URI OOC_Config_CCompiler__CompileFileCmd_GetURIofRT();
    
    URI_Scheme_File__URI OOC_Config_CCompiler__CompileFileCmd_GetURIofRT() {
      register OOC_INT32 i0;
      OOC_Repository__Module m;
      URI__HierarchicalURI uri;
      URI_Scheme_File__URI f;

      i0 = (OOC_INT32)OOC_Config__repositories;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2212)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, "RT0", 4);
      m = (OOC_Repository__Module)i0;
      _assert((i0!=(OOC_INT32)0), 127, 2254);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2337)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, OOC_TRUE);
      uri = (URI__HierarchicalURI)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2402)))), &_td_URI_Scheme_File__URIDesc, 2402);
      f = (URI_Scheme_File__URI)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2415)))), URI_Scheme_Hierarchical__GenericDesc_StripSegments)),URI_Scheme_Hierarchical__GenericDesc_StripSegments)((URI_Scheme_Hierarchical__Generic)i0, 1);
      return (URI_Scheme_File__URI)i0;
      ;
    }


  i0 = forLibrary;
  if (i0) goto l3;
  OOC_Config_CCompiler__SetCommand("", 1, (void*)(OOC_INT32)cmd, cmd_0d);
  goto l4;
l3:
  OOC_Config_CCompiler__SetCommand("compile", 8, (void*)(OOC_INT32)cmd, cmd_0d);
l4:
  i0 = (OOC_INT32)OOC_Config_CCompiler__cflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2611))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2631)))), &_td_Config_Value_String__ValueDesc, 2631)), 2637));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2611))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2631)))), &_td_Config_Value_String__ValueDesc, 2631)), 2637));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2645)), 0);
  Strings__Append((void*)(_check_pointer(i1, 2645)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__cppflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2713))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2733)))), &_td_Config_Value_String__ValueDesc, 2733)), 2739));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2713))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2733)))), &_td_Config_Value_String__ValueDesc, 2733)), 2739));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2747)), 0);
  Strings__Append((void*)(_check_pointer(i1, 2747)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__CompileFileCmd_GetURIofRT();
  f = (URI_Scheme_File__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3162)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)i0, (void*)(OOC_INT32)str, 2048);
  Strings__Append(" -I", 4, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3282)))), OOC_Config_Repositories__SectionDesc_GetIncludePaths)),OOC_Config_Repositories__SectionDesc_GetIncludePaths)((OOC_Config_Repositories__Section)i0);
  include = (ADT_String__StringArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3333)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l12;
  i2=0;
l7_loop:
  Strings__Append(" -I", 4, (void*)(OOC_INT32)cmd, cmd_0d);
  i3 = _check_pointer(i0, 3405);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3405))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3408))+4);
  i4 = _check_pointer(i0, 3405);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 3405))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3408))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 3415)), 0);
  Strings__Append((void*)(_check_pointer(i3, 3415)), i4, (void*)(OOC_INT32)cmd, cmd_0d);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l7_loop;
l12:
  Strings__Append(" -c ", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)in;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3483)))), &_td_URI_Scheme_File__URIDesc, 3483)), 3487)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3483)))), &_td_URI_Scheme_File__URIDesc, 3483)), (void*)(OOC_INT32)str, 2048);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" -o ", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)out;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3582)))), &_td_URI_Scheme_File__URIDesc, 3582)), 3586)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3582)))), &_td_URI_Scheme_File__URIDesc, 3582)), (void*)(OOC_INT32)str, 2048);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__LinkProgramCmd(URI__URI execFile, OOC_CHAR8 forLibrary, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[1024];

  OOC_Config_CCompiler__SetCommand("link", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append("-o ", 4, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)execFile;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3899)))), &_td_URI_Scheme_File__URIDesc, 3899)), 3903)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3899)))), &_td_URI_Scheme_File__URIDesc, 3899)), (void*)(OOC_INT32)str, 1024);
  Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = forLibrary;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = OOC_Config_CCompiler__HaveLibtool();
  
l5:
  if (!i0) goto l7;
  Strings__Append(" -rpath ", 9, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__libdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4058))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4078)))), &_td_Config_Value_String__ValueDesc, 4078)), 4084));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4058))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4078)))), &_td_Config_Value_String__ValueDesc, 4078)), 4084));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4092)), 0);
  Strings__Append((void*)(_check_pointer(i1, 4092)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
l7:
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__ldflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4168))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4188)))), &_td_Config_Value_String__ValueDesc, 4188)), 4194));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4168))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4188)))), &_td_Config_Value_String__ValueDesc, 4188)), 4194));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4202)), 0);
  Strings__Append((void*)(_check_pointer(i1, 4202)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__InstallDirectoryCmd(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = (OOC_INT32)OOC_Config_CCompiler__install;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4335))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4354)))), &_td_Config_Value_String__ValueDesc, 4354)), 4360));
  _copy_8((_check_pointer(i0, 4367)),(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" -d ", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append((void*)(OOC_INT32)path, path_0d, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__InstallProgramCmd(URI__URI file, OOC_CHAR8 asLibrary, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[1024];

  i0 = OOC_Config_CCompiler__HaveLibtool();
  if (i0) goto l3;
  _copy_8("",(OOC_INT32)cmd,cmd_0d);
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4674))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4693)))), &_td_Config_Value_String__ValueDesc, 4693)), 4699));
  _copy_8((_check_pointer(i0, 4706)),(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" --mode=install ", 17, (void*)(OOC_INT32)cmd, cmd_0d);
l4:
  i0 = (OOC_INT32)OOC_Config_CCompiler__installProgram;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4839))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4858)))), &_td_Config_Value_String__ValueDesc, 4858)), 4864));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4839))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4858)))), &_td_Config_Value_String__ValueDesc, 4858)), 4864));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4871)), 0);
  Strings__Append((void*)(_check_pointer(i1, 4871)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)file;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4924)))), &_td_URI_Scheme_File__URIDesc, 4924)), 4928)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4924)))), &_td_URI_Scheme_File__URIDesc, 4924)), (void*)(OOC_INT32)str, 1024);
  Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = asLibrary;
  if (i0) goto l7;
  i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5131))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5150)))), &_td_Config_Value_String__ValueDesc, 5150)), 5156));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5131))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5150)))), &_td_Config_Value_String__ValueDesc, 5150)), 5156));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5163)), 0);
  Strings__Append((void*)(_check_pointer(i1, 5163)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5053))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5072)))), &_td_Config_Value_String__ValueDesc, 5072)), 5078));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5053))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5072)))), &_td_Config_Value_String__ValueDesc, 5072)), 5078));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5085)), 0);
  Strings__Append((void*)(_check_pointer(i1, 5085)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
l8:
  return;
  ;
}

void OOC_Config_CCompiler__UninstallProgramCmd(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 asLibrary, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = OOC_Config_CCompiler__HaveLibtool();
  if (i0) goto l3;
  _copy_8("",(OOC_INT32)cmd,cmd_0d);
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5388))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5407)))), &_td_Config_Value_String__ValueDesc, 5407)), 5413));
  _copy_8((_check_pointer(i0, 5420)),(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" --mode=uninstall ", 19, (void*)(OOC_INT32)cmd, cmd_0d);
l4:
  i0 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5550))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5569)))), &_td_Config_Value_String__ValueDesc, 5569)), 5575));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5550))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5569)))), &_td_Config_Value_String__ValueDesc, 5569)), 5575));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5582)), 0);
  Strings__Append((void*)(_check_pointer(i1, 5582)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append((void*)(OOC_INT32)path, path_0d, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__RegisterConfig() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Config_Value_String__New("gcc", 4);
  i0 = (OOC_INT32)OOC_Config__AddOption("cc", 3, (Config_Value__Value)i0);
  OOC_Config_CCompiler__cc = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("", 1);
  i0 = (OOC_INT32)OOC_Config__AddOption("cppflags", 9, (Config_Value__Value)i0);
  OOC_Config_CCompiler__cppflags = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("-O2 -g", 7);
  i0 = (OOC_INT32)OOC_Config__AddOption("cflags", 7, (Config_Value__Value)i0);
  OOC_Config_CCompiler__cflags = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("", 1);
  i0 = (OOC_INT32)OOC_Config__AddOption("ldflags", 8, (Config_Value__Value)i0);
  OOC_Config_CCompiler__ldflags = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("-lgc", 5);
  i0 = (OOC_INT32)OOC_Config__AddOption("libs", 5, (Config_Value__Value)i0);
  OOC_Config_CCompiler__libs = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--cc", 5, "<options><set name=\047cc\047>$1</set></options>", 43);
  OOC_Config__AddCmdLine("--cppflags", 11, "<options><set name=\047cppflags\047>$1</set></options>", 49);
  OOC_Config__AddCmdLine("--cflags", 9, "<options><set name=\047cflags\047>$1</set></options>", 47);
  OOC_Config__AddCmdLine("--ldflags", 10, "<options><set name=\047ldflags\047>$1</set></options>", 48);
  OOC_Config__AddCmdLine("--libs", 7, "<options><set name=\047libs\047>$1</set></options>", 45);
  i0 = (OOC_INT32)Config_Value_String__New("libtool", 8);
  i0 = (OOC_INT32)OOC_Config__AddOption("libtool", 8, (Config_Value__Value)i0);
  OOC_Config_CCompiler__libtool = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("libdir", 7);
  i0 = (OOC_INT32)OOC_Config__AddOption("libdir", 7, (Config_Value__Value)i0);
  OOC_Config_CCompiler__libdir = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--libtool", 10, "<options><set name=\047libtool\047>$1</set></options>", 48);
  OOC_Config__AddCmdLine("--libdir", 9, "<options><set name=\047libdir\047>$1</set></options>", 47);
  i0 = (OOC_INT32)Config_Value_String__New("install -c", 11);
  i0 = (OOC_INT32)OOC_Config__AddOption("install", 8, (Config_Value__Value)i0);
  OOC_Config_CCompiler__install = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("install -c", 11);
  i0 = (OOC_INT32)OOC_Config__AddOption("installProgram", 15, (Config_Value__Value)i0);
  OOC_Config_CCompiler__installProgram = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("install -c -m 644", 18);
  i0 = (OOC_INT32)OOC_Config__AddOption("installData", 12, (Config_Value__Value)i0);
  OOC_Config_CCompiler__installData = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("rm -f", 6);
  i0 = (OOC_INT32)OOC_Config__AddOption("uninstall", 10, (Config_Value__Value)i0);
  OOC_Config_CCompiler__uninstall = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("bindir", 7);
  i0 = (OOC_INT32)OOC_Config__AddOption("bindir", 7, (Config_Value__Value)i0);
  OOC_Config_CCompiler__bindir = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("oocdir", 7);
  i0 = (OOC_INT32)OOC_Config__AddOption("oocdir", 7, (Config_Value__Value)i0);
  OOC_Config_CCompiler__oocdir = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--install", 10, "<options><set name=\047install\047>$1</set></options>", 48);
  OOC_Config__AddCmdLine("--install-program", 18, "<options><set name=\047installProgram\047>$1</set></options>", 55);
  OOC_Config__AddCmdLine("--install-data", 15, "<options><set name=\047installData\047>$1</set></options>", 52);
  OOC_Config__AddCmdLine("--uninstall", 12, "<options><set name=\047uninstall\047>$1</set></options>", 50);
  OOC_Config__AddCmdLine("--bindir", 9, "<options><set name=\047bindir\047>$1</set></options>", 47);
  OOC_Config__AddCmdLine("--oocdir", 9, "<options><set name=\047oocdir\047>$1</set></options>", 47);
  return;
  ;
}

void OOC_OOC_Config_CCompiler_init(void) {

  return;
  ;
}

/* --- */
