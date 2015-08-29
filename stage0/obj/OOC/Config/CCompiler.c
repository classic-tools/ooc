#include <OOC/Config/CCompiler.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_CHAR8 OOC_Config_CCompiler__HaveLibtool() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1315))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1334)))), &_td_Config_Value_String__ValueDesc, 1334)), 1340));
  return ((
  _cmp8((const void*)(_check_pointer(i0, 1347)),(const void*)"no"))!=0);
  ;
}

static void OOC_Config_CCompiler__SetCommand(const OOC_CHAR8 mode__ref[], OOC_LEN mode_0d, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(mode,OOC_CHAR8 ,mode_0d)

  OOC_INITIALIZE_VPAR(mode__ref,mode,OOC_CHAR8 ,mode_0d)
  i0 = (
  _cmp8((const void*)(OOC_INT32)mode,(const void*)""))!=0;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = OOC_Config_CCompiler__HaveLibtool();
  
l5:
  if (i0) goto l7;
  _copy_8((const void*)"",(void*)(OOC_INT32)cmd,cmd_0d);
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1512))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1532)))), &_td_Config_Value_String__ValueDesc, 1532)), 1538));
  _copy_8((const void*)(_check_pointer(i0, 1546)),(void*)(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" --mode=", 9, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append((void*)(OOC_INT32)mode, mode_0d, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
l8:
  i0 = (OOC_INT32)OOC_Config_CCompiler__cc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1723))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1743)))), &_td_Config_Value_String__ValueDesc, 1743)), 1749));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1723))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1743)))), &_td_Config_Value_String__ValueDesc, 1743)), 1749));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1757)), 0);
  Strings__Append((void*)(_check_pointer(i1, 1757)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__CompileFileCmd(URI__URI in, URI__URI out, OOC_CHAR8 forLibrary, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  URI_Scheme_File__URI f;
  OOC_CHAR8 str[2048];
  Object__StringArrayPtr include;
  OOC_INT32 i;
  Object__CharsLatin1 chars;
  auto URI_Scheme_File__URI OOC_Config_CCompiler__CompileFileCmd_GetURIofRT();
    
    URI_Scheme_File__URI OOC_Config_CCompiler__CompileFileCmd_GetURIofRT() {
      register OOC_INT32 i0;
      OOC_Repository__Module m;
      URI__HierarchicalURI uri;
      URI_Scheme_File__URI f;

      i0 = (OOC_INT32)OOC_Config__repositories;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2239)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, "RT0", 4);
      m = (OOC_Repository__Module)i0;
      _assert((i0!=(OOC_INT32)0), 127, 2281);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2364)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, 1u);
      uri = (URI__HierarchicalURI)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2429)))), &_td_URI_Scheme_File__URIDesc, 2429);
      f = (URI_Scheme_File__URI)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2442)))), URI_Scheme_Hierarchical__GenericDesc_StripSegments)),URI_Scheme_Hierarchical__GenericDesc_StripSegments)((URI_Scheme_Hierarchical__Generic)i0, 1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2638))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2658)))), &_td_Config_Value_String__ValueDesc, 2658)), 2664));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2638))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2658)))), &_td_Config_Value_String__ValueDesc, 2658)), 2664));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2672)), 0);
  Strings__Append((void*)(_check_pointer(i1, 2672)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__cppflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2740))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2760)))), &_td_Config_Value_String__ValueDesc, 2760)), 2766));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2740))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2760)))), &_td_Config_Value_String__ValueDesc, 2760)), 2766));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2774)), 0);
  Strings__Append((void*)(_check_pointer(i1, 2774)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__CompileFileCmd_GetURIofRT();
  f = (URI_Scheme_File__URI)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3189)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)i0, (void*)(OOC_INT32)str, 2048);
  Strings__Append(" -I", 4, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3309)))), OOC_Config_Repositories__SectionDesc_GetIncludePaths)),OOC_Config_Repositories__SectionDesc_GetIncludePaths)((OOC_Config_Repositories__Section)i0);
  include = (Object__StringArrayPtr)i0;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3360)), 0);
  i2 = 0<i1;
  if (!i2) goto l12;
  i2=0;
l7_loop:
  Strings__Append(" -I", 4, (void*)(OOC_INT32)cmd, cmd_0d);
  i3 = _check_pointer(i0, 3425);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3425))*4);
  i4 = _check_pointer(i0, 3425);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 3425))*4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3436)))), &_td_Object__String8Desc, 3436)), 3444)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 3436)))), &_td_Object__String8Desc, 3436)));
  chars = (Object__CharsLatin1)i3;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3487)), 0);
  Strings__Append((void*)(_check_pointer(i3, 3487)), i4, (void*)(OOC_INT32)cmd, cmd_0d);
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l7_loop;
l12:
  Strings__Append(" -c ", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)in;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3555)))), &_td_URI_Scheme_File__URIDesc, 3555)), 3559)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3555)))), &_td_URI_Scheme_File__URIDesc, 3555)), (void*)(OOC_INT32)str, 2048);
  Strings__Append((void*)(OOC_INT32)str, 2048, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" -o ", 5, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)out;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3654)))), &_td_URI_Scheme_File__URIDesc, 3654)), 3658)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3654)))), &_td_URI_Scheme_File__URIDesc, 3654)), (void*)(OOC_INT32)str, 2048);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3971)))), &_td_URI_Scheme_File__URIDesc, 3971)), 3975)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3971)))), &_td_URI_Scheme_File__URIDesc, 3971)), (void*)(OOC_INT32)str, 1024);
  Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = forLibrary;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = OOC_Config_CCompiler__HaveLibtool();
  
l5:
  if (!i0) goto l7;
  Strings__Append(" -rpath ", 9, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__libdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4130))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4150)))), &_td_Config_Value_String__ValueDesc, 4150)), 4156));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4130))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4150)))), &_td_Config_Value_String__ValueDesc, 4150)), 4156));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4164)), 0);
  Strings__Append((void*)(_check_pointer(i1, 4164)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
l7:
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)OOC_Config_CCompiler__ldflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4240))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4260)))), &_td_Config_Value_String__ValueDesc, 4260)), 4266));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4240))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4260)))), &_td_Config_Value_String__ValueDesc, 4260)), 4266));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4274)), 0);
  Strings__Append((void*)(_check_pointer(i1, 4274)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  return;
  ;
}

void OOC_Config_CCompiler__InstallDirectoryCmd(const OOC_CHAR8 path__ref[], OOC_LEN path_0d, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)

  OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
  i0 = (OOC_INT32)OOC_Config_CCompiler__install;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4407))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4426)))), &_td_Config_Value_String__ValueDesc, 4426)), 4432));
  _copy_8((const void*)(_check_pointer(i0, 4439)),(void*)(OOC_INT32)cmd,cmd_0d);
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
  _copy_8((const void*)"",(void*)(OOC_INT32)cmd,cmd_0d);
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4746))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4765)))), &_td_Config_Value_String__ValueDesc, 4765)), 4771));
  _copy_8((const void*)(_check_pointer(i0, 4778)),(void*)(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" --mode=install ", 17, (void*)(OOC_INT32)cmd, cmd_0d);
l4:
  i0 = (OOC_INT32)OOC_Config_CCompiler__installProgram;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4911))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4930)))), &_td_Config_Value_String__ValueDesc, 4930)), 4936));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4911))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4930)))), &_td_Config_Value_String__ValueDesc, 4930)), 4936));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4943)), 0);
  Strings__Append((void*)(_check_pointer(i1, 4943)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)file;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4996)))), &_td_URI_Scheme_File__URIDesc, 4996)), 5000)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4996)))), &_td_URI_Scheme_File__URIDesc, 4996)), (void*)(OOC_INT32)str, 1024);
  Strings__Append((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = asLibrary;
  if (i0) goto l7;
  i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5203))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5222)))), &_td_Config_Value_String__ValueDesc, 5222)), 5228));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5203))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5222)))), &_td_Config_Value_String__ValueDesc, 5222)), 5228));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5235)), 0);
  Strings__Append((void*)(_check_pointer(i1, 5235)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5125))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5144)))), &_td_Config_Value_String__ValueDesc, 5144)), 5150));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5125))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5144)))), &_td_Config_Value_String__ValueDesc, 5144)), 5150));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5157)), 0);
  Strings__Append((void*)(_check_pointer(i1, 5157)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
l8:
  return;
  ;
}

void OOC_Config_CCompiler__UninstallProgramCmd(Object__String path, OOC_CHAR8 asLibrary, OOC_CHAR8 cmd[], OOC_LEN cmd_0d) {
  register OOC_INT32 i0,i1;
  Object__CharsLatin1 chars;

  i0 = OOC_Config_CCompiler__HaveLibtool();
  if (i0) goto l3;
  _copy_8((const void*)"",(void*)(OOC_INT32)cmd,cmd_0d);
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5490))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5509)))), &_td_Config_Value_String__ValueDesc, 5509)), 5515));
  _copy_8((const void*)(_check_pointer(i0, 5522)),(void*)(OOC_INT32)cmd,cmd_0d);
  Strings__Append(" --mode=uninstall ", 19, (void*)(OOC_INT32)cmd, cmd_0d);
l4:
  i0 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5652))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5671)))), &_td_Config_Value_String__ValueDesc, 5671)), 5677));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5652))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5671)))), &_td_Config_Value_String__ValueDesc, 5671)), 5677));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5684)), 0);
  Strings__Append((void*)(_check_pointer(i1, 5684)), i0, (void*)(OOC_INT32)cmd, cmd_0d);
  Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, cmd_0d);
  i0 = (OOC_INT32)path;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5748)))), &_td_Object__String8Desc, 5748)), 5756)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5748)))), &_td_Object__String8Desc, 5748)));
  chars = (Object__CharsLatin1)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5796)), 0);
  Strings__Append((void*)(_check_pointer(i0, 5796)), i1, (void*)(OOC_INT32)cmd, cmd_0d);
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
