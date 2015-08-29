#include <oo2c.d>
#include <__oo2c.h>

static void oo2c__NewConfig() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Config_Value_Integer__New(0);
  i0 = (OOC_INT32)OOC_Config__AddOption("command", 8, (Config_Value__Value)i0);
  oo2c__command = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
  i0 = (OOC_INT32)OOC_Config__AddOption("useStderr", 10, (Config_Value__Value)i0);
  oo2c__useStderr = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("file:line:column", 17);
  i0 = (OOC_INT32)OOC_Config__AddOption("errorStyle", 11, (Config_Value__Value)i0);
  oo2c__errorStyle = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
  i0 = (OOC_INT32)OOC_Config__AddOption("showHelp", 9, (Config_Value__Value)i0);
  oo2c__showHelp = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
  i0 = (OOC_INT32)OOC_Config__AddOption("showVersion", 12, (Config_Value__Value)i0);
  oo2c__showVersion = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--repository,-r", 16, "<repositories><file-system>$1</file-system></repositories>", 59);
  OOC_Config__AddCmdLine("--make,-M", 10, "<options><set name=\047command\047>1</set></options>", 47);
  OOC_Config__AddCmdLine("--build-package", 16, "<options><set name=\047command\047>2</set></options>", 47);
  OOC_Config__AddCmdLine("--install-package", 18, "<options><set name=\047command\047>3</set></options>", 47);
  OOC_Config__AddCmdLine("--uninstall-package", 20, "<options><set name=\047command\047>4</set></options>", 47);
  OOC_Config__AddCmdLine("--update-repository", 20, "<options><set name=\047command\047>5</set></options>", 47);
  OOC_Config__AddCmdLine("--get-option", 13, "<options><set name=\047command\047>6</set></options>", 47);
  OOC_Config__AddCmdLine("--build-pkg-doc", 16, "<options><set name=\047command\047>7</set></options>", 47);
  OOC_Config__AddCmdLine("-h,--help", 10, "<options><set name=\047showHelp\047>TRUE</set></options>", 51);
  OOC_Config__AddCmdLine("--version", 10, "<options><set name=\047showVersion\047>TRUE</set></options>", 54);
  OOC_Config__AddCmdLine("--no-rtc", 9, "<pragmas>  <set name=\047Assertions\047>FALSE</set>  <set name=\047IndexCheck\047>FALSE</set>  <set name=\047DerefCheck\047>FALSE</set>  <set name=\047OverflowCheck\047>FALSE</set>  <set name=\047CaseSelectCheck\047>FALSE</set>  <set name=\047FunctResult\047>FALSE</set>  <set name=\047TypeGuard\047>FALSE</set></pragmas>", 280);
  OOC_Config__AddCmdLine("--verbose,-v", 13, "", 1);
  OOC_Config__AddCmdLine("--warnings,-w", 14, "", 1);
  OOC_Config__AddCmdLine("--error-style", 14, "<options><set name=\047errorStyle\047>$1</set></options>", 51);
  OOC_Config__AddCmdLine("--use-stderr", 13, "<options><set name=\047useStderr\047>TRUE</set></options>", 52);
  OOC_Config_CCompiler__RegisterConfig();
  return;
  ;
}

static OOC_Repository__Module oo2c__GetModule(Object__String moduleName) {
  register OOC_INT32 i0,i1,i2;
  Object__CharsLatin1 chars;
  OOC_Repository__Module m;

  i0 = (OOC_INT32)moduleName;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3670)))), &_td_Object__String8Desc, 3670)), 3678)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3670)))), &_td_Object__String8Desc, 3670)));
  chars = (Object__CharsLatin1)i0;
  i1 = (OOC_INT32)OOC_Config__repositories;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3738)), (OOC_INT32)0);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3722)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i1, (void*)(_check_pointer(i0, 3738)), i2);
  i2 = i1==(OOC_INT32)0;
  m = (OOC_Repository__Module)i1;
  if (!i2) goto l4;
  Err__String("Error: Cannot locate module ", 29);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3838)), (OOC_INT32)0);
  Err__String((void*)(_check_pointer(i0, 3838)), i2);
  Err__Ln();
  _halt(1);
l4:
  return (OOC_Repository__Module)i1;
  ;
}

static OOC_CHAR8 oo2c__BuildPackage(OOC_Package__Package pkg, OOC_Repository__Repository rep, OOC_CHAR8 install) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 installObjects;
  OOC_CHAR8 ok;
  OOC_INT32 i;
  OOC_Package__Library lib;
  OOC_Repository__Module module;
  OOC_Package__Executable exec;
  OOC_Package__FileSet normSet;
  Msg__Msg res;
  OOC_CHAR8 str[256];
  auto OOC_CHAR8 oo2c__BuildPackage_InstallDirectory(const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, const OOC_CHAR8 path__ref[], OOC_LEN path_0d);
  auto OOC_CHAR8 oo2c__BuildPackage_InstallLibrary(OOC_Repository__Module module, OOC_Make__Rules makeRules);
  auto OOC_CHAR8 oo2c__BuildPackage_InstallExecutable(OOC_Repository__Module module);
  auto OOC_CHAR8 oo2c__BuildPackage_InstallFiles(OOC_Package__FileData list);
  auto OOC_CHAR8 oo2c__BuildPackage_BuildDocs(OOC_Repository__Module module, OOC_Make__Rules makeRules, OOC_CHAR8 install);
    
    OOC_CHAR8 oo2c__BuildPackage_InstallDirectory(const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, const OOC_CHAR8 path__ref[], OOC_LEN path_0d) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(prefix,OOC_CHAR8 ,prefix_0d)
      OOC_ALLOCATE_VPAR(path,OOC_CHAR8 ,path_0d)
      OOC_Make__ShellCommand str;

      OOC_INITIALIZE_VPAR(prefix__ref,prefix,OOC_CHAR8 ,prefix_0d)
      OOC_INITIALIZE_VPAR(path__ref,path,OOC_CHAR8 ,path_0d)
      i0 = (
      _cmp8((const void*)(OOC_INT32)prefix,(const void*)""))==(OOC_INT32)0;
      if (i0) goto l3;
      _copy_8((const void*)(OOC_INT32)prefix,(void*)(OOC_INT32)str,4096);
      Strings__Append("/", 2, (void*)(OOC_INT32)str, 4096);
      Strings__Append((void*)(OOC_INT32)path, path_0d, (void*)(OOC_INT32)str, 4096);
      OOC_Config_CCompiler__InstallDirectoryCmd((void*)(OOC_INT32)str, 4096, (void*)(OOC_INT32)str, 4096);
      goto l4;
l3:
      OOC_Config_CCompiler__InstallDirectoryCmd((void*)(OOC_INT32)path, path_0d, (void*)(OOC_INT32)str, 4096);
l4:
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i0==0);
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallLibrary(OOC_Repository__Module module, OOC_Make__Rules makeRules) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_CHAR8 installObjects;
      OOC_INT32 i;
      OOC_Repository__Module m;
      OOC_Repository__URIBuffer path;
      OOC_Make__ShellCommand str;

      i0 = OOC_Config_CCompiler__HaveLibtool();
      installObjects = (!i0);
      i1 = (OOC_INT32)makeRules;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5562))+20);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5570)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l18;
      i3 = (OOC_INT32)module;
      i4=0;
l3_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5600))+20);
      i5 = _check_pointer(i5, 5608);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5608))*4);
      m = (OOC_Repository__Module)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5643));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5627));
      i6 = i7==i6;
      if (!i6) goto l12;
      if ((!i0)) goto l7;
      i6=OOC_FALSE;
      goto l9;
l7:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5689))+12);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5689))+12);
      i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5696)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i7);
      i6 = !i6;
      
l9:
      if (!i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5730));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5730));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5737)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 7, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5795))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5795))+24);
      i8 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((Object__String)i8, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 5803)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
l11:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5895));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5895));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5902)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 1, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5958))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5958))+24);
      i8 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((Object__String)i8, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 5966)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6032));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6032));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6039)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 13, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6096))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6096))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6104)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i5, (OOC_Package__FileData)i7);
l12:
      i4 = i4+1;
      i5 = i4<=i2;
      i = i4;
      if (i5) goto l3_loop;
l18:
      if ((!i0)) goto l24;
      i1 = (OOC_INT32)OOC_Config_CCompiler__libdir;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6283))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6302)))), &_td_Config_Value_String__ValueDesc, 6302)), 6308));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6283))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6302)))), &_td_Config_Value_String__ValueDesc, 6302)), 6308));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6315)), (OOC_INT32)0);
      i1 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i2, 6315)), i1);
      if (i1) goto l22;
      return OOC_FALSE;
      goto l25;
l22:
      i1 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6344)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 19, OOC_TRUE);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i1, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i1 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i1==0);
      goto l25;
l24:
      return OOC_TRUE;
l25:
      _failed_function(4738); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallExecutable(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6830))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6849)))), &_td_Config_Value_String__ValueDesc, 6849)), 6855));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6830))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6849)))), &_td_Config_Value_String__ValueDesc, 6849)), 6855));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6862)), (OOC_INT32)0);
      i0 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i1, 6862)), i0);
      if (i0) goto l3;
      return OOC_FALSE;
      goto l4;
l3:
      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6891)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 18, OOC_TRUE);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i0, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i0==0);
l4:
      _failed_function(6597); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallFiles(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      URI__URI baseURI;
      OOC_Repository__URIBuffer sourcePrefix;
      OOC_Package__FileData end;
      Object__String dir;
      Object__String string;
      Object__CharsLatin1 chars;
      ADT_StringBuffer__StringBuffer cmd;
      ADT_StringBuffer__CharsLatin1 charsCmd;
      auto OOC_CHAR8 oo2c__BuildPackage_InstallFiles_SameDirectory(OOC_Package__File a, OOC_Package__File b);
        
        OOC_CHAR8 oo2c__BuildPackage_InstallFiles_SameDirectory(OOC_Package__File a, OOC_Package__File b) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          Object__String sa;
          Object__String sb;
          OOC_INT32 i;
          OOC_INT32 j;

          i0 = (OOC_INT32)a;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7602))+8);
          sa = (Object__String)i0;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7620))+8);
          sb = (Object__String)i1;
          i = 0;
          i2 = *(OOC_INT32*)(_check_pointer(i0, 7668));
          i2 = 0!=i2;
          if (i2) goto l3;
          i2=OOC_FALSE;
          goto l5;
l3:
          i2 = *(OOC_INT32*)(_check_pointer(i1, 7686));
          i2 = 0!=i2;
          
l5:
          if (i2) goto l7;
          i2=OOC_FALSE;
          goto l9;
l7:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7714)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7729)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
          i2 = i2==i3;
          
l9:
          if (i2) goto l11;
          i2=0;
          goto l25;
l11:
          i2=0;
l12_loop:
          i2 = i2+1;
          i = i2;
          i3 = *(OOC_INT32*)(_check_pointer(i0, 7668));
          i3 = i2!=i3;
          if (i3) goto l15;
          i3=OOC_FALSE;
          goto l17;
l15:
          i3 = *(OOC_INT32*)(_check_pointer(i1, 7686));
          i3 = i2!=i3;
          
l17:
          if (i3) goto l19;
          i3=OOC_FALSE;
          goto l21;
l19:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7714)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i2);
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7729)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i2);
          i3 = i3==i4;
          
l21:
          if (i3) goto l12_loop;
l25:
          i3 = i2!=0;
          if (i3) goto l28;
          i3=OOC_FALSE;
          goto l30;
l28:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7802)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i2-1));
          i3 = i3!=(OOC_CHAR8)'/';
          
l30:
          if (!i3) goto l42;
l33_loop:
          i2 = i2-1;
          i = i2;
          i3 = i2!=0;
          if (i3) goto l36;
          i3=OOC_FALSE;
          goto l38;
l36:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7802)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i2-1));
          i3 = i3!=(OOC_CHAR8)'/';
          
l38:
          if (i3) goto l33_loop;
l42:
          i3 = i2==0;
          if (i3) goto l49;
          i3 = i2-1;
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7902)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
          i4 = i4==(OOC_CHAR8)'/';
          if (i4) goto l47;
          i3=OOC_FALSE;
          goto l51;
l47:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7939)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i3);
          i3 = i3==(OOC_CHAR8)'/';
          
          goto l51;
l49:
          i3=OOC_TRUE;
l51:
          if (!i3) goto l90;
          j = i2;
          i3 = *(OOC_INT32*)(_check_pointer(i0, 8139));
          i3 = i2!=i3;
          if (i3) goto l55;
          i3=OOC_FALSE;
          goto l57;
l55:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8153)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i2);
          i3 = i3!=(OOC_CHAR8)'/';
          
l57:
          if (i3) goto l59;
          i3=i2;
          goto l69;
l59:
          i3=i2;
l60_loop:
          i3 = i3+1;
          j = i3;
          i4 = *(OOC_INT32*)(_check_pointer(i0, 8139));
          i4 = i3!=i4;
          if (i4) goto l63;
          i4=OOC_FALSE;
          goto l65;
l63:
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8153)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
          i4 = i4!=(OOC_CHAR8)'/';
          
l65:
          if (i4) goto l60_loop;
l69:
          i0 = *(OOC_INT32*)(_check_pointer(i0, 8230));
          i0 = i3==i0;
          if (!i0) goto l90;
          j = i2;
          i0 = *(OOC_INT32*)(_check_pointer(i1, 8289));
          i0 = i2!=i0;
          if (i0) goto l74;
          i0=OOC_FALSE;
          goto l76;
l74:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8303)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i2);
          i0 = i0!=(OOC_CHAR8)'/';
          
l76:
          if (i0) goto l78;
          i0=i2;
          goto l88;
l78:
          i0=i2;
l79_loop:
          i0 = i0+1;
          j = i0;
          i2 = *(OOC_INT32*)(_check_pointer(i1, 8289));
          i2 = i0!=i2;
          if (i2) goto l82;
          i2=OOC_FALSE;
          goto l84;
l82:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8303)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
          i2 = i2!=(OOC_CHAR8)'/';
          
l84:
          if (i2) goto l79_loop;
l88:
          i1 = *(OOC_INT32*)(_check_pointer(i1, 8390));
          return (i0==i1);
l90:
          return OOC_FALSE;
          ;
        }


      i0 = (OOC_INT32)rep;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8521)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 8521)), 8532))+12);
      baseURI = (URI__URI)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8569)))), &_td_URI_Scheme_File__URIDesc, 8569)), 8573)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8569)))), &_td_URI_Scheme_File__URIDesc, 8569)), (void*)(OOC_INT32)sourcePrefix, 1024);
      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l55;
      i0 = (OOC_INT32)_c0;
      i1 = (OOC_INT32)_c1;
l3_loop:
      i2 = (OOC_INT32)list;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8651));
      end = (OOC_Package__FileData)i3;
      i4 = i3!=(OOC_INT32)0;
      if (i4) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8735)))), &_td_OOC_Package__FileDesc, 8735)), (OOC_Package__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8754)))), &_td_OOC_Package__FileDesc, 8754)));
      
l8:
      if (!i2) goto l18;
l9_loop:
      i2 = (OOC_INT32)end;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8784));
      end = (OOC_Package__FileData)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l12;
      i2=OOC_FALSE;
      goto l14;
l12:
      i3 = (OOC_INT32)list;
      i2 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8735)))), &_td_OOC_Package__FileDesc, 8735)), (OOC_Package__File)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8754)))), &_td_OOC_Package__FileDesc, 8754)));
      
l14:
      if (i2) goto l9_loop;
l18:
      i2 = (OOC_INT32)list;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8888)))), &_td_OOC_Package__FileDesc, 8888)), 8893))+8);
      dir = (Object__String)i3;
      i4 = *(OOC_INT32*)(_check_pointer(i3, 8920));
      i = i4;
      i5 = i4!=0;
      if (i5) goto l21;
      i4=OOC_FALSE;
      goto l23;
l21:
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8957)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i3, (i4-1));
      i4 = i4!=(OOC_CHAR8)'/';
      
l23:
      if (!i4) goto l33;
l24_loop:
      i4 = i;
      i4 = i4-1;
      i = i4;
      i5 = i4!=0;
      if (i5) goto l27;
      i4=OOC_FALSE;
      goto l29;
l27:
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8957)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i3, (i4-1));
      i4 = i4!=(OOC_CHAR8)'/';
      
l29:
      if (i4) goto l24_loop;
l33:
      i4 = i;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9032)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i3, 0, i4);
      string = (Object__String)i3;
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9079)))), &_td_Object__String8Desc, 9079);
      dir = (Object__String)i3;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9118)))), &_td_Object__String8Desc, 9118)), 9126)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9118)))), &_td_Object__String8Desc, 9118)));
      chars = (Object__CharsLatin1)i4;
      i5 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9186))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9205)))), &_td_Config_Value_String__ValueDesc, 9205)), 9211));
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9186))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9205)))), &_td_Config_Value_String__ValueDesc, 9205)), 9211));
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9254)), (OOC_INT32)0);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 9218)), (OOC_INT32)0);
      i4 = oo2c__BuildPackage_InstallDirectory((void*)(_check_pointer(i6, 9218)), i5, (void*)(_check_pointer(i4, 9254)), i7);
      if (i4) goto l36;
      return OOC_FALSE;
      goto l50;
l36:
      i4 = (OOC_INT32)OOC_Config_CCompiler__installData;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9323))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9342)))), &_td_Config_Value_String__ValueDesc, 9342)), 9348));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9323))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9342)))), &_td_Config_Value_String__ValueDesc, 9342)), 9348));
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9355)), (OOC_INT32)0);
      i4 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i5, 9355)), i4);
      i5 = (OOC_INT32)end;
      i2 = i2!=i5;
      cmd = (ADT_StringBuffer__StringBuffer)i4;
      if (!i2) goto l43;
l38_loop:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9406)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9435)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i4, (void*)(OOC_INT32)sourcePrefix, 1024);
      i2 = (OOC_INT32)list;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9500)))), &_td_OOC_Package__FileDesc, 9500)), 9505))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9479)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i6);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9537));
      i6 = i2!=i5;
      list = (OOC_Package__FileData)i2;
      if (i6) goto l38_loop;
l43:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9581)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i0);
      i2 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9625))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9644)))), &_td_Config_Value_String__ValueDesc, 9644)), 9650));
      i5 = (
      _cmp8((const void*)(_check_pointer(i5, 9657)),(const void*)""))!=(OOC_INT32)0;
      if (!i5) goto l46;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9715))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 9734)))), &_td_Config_Value_String__ValueDesc, 9734)), 9740));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9715))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9734)))), &_td_Config_Value_String__ValueDesc, 9734)), 9740));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9747)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9685)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i4, (void*)(_check_pointer(i5, 9747)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9766)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i1);
l46:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9808)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i3);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9848)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i4);
      charsCmd = (ADT_StringBuffer__CharsLatin1)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9902)), (OOC_INT32)0);
      OOC_Logger__ShellCommand((void*)(_check_pointer(i2, 9902)), i3);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9953)), (OOC_INT32)0);
      i2 = OS_ProcessManagement__system((void*)(_check_pointer(i2, 9953)), i3);
      i2 = i2!=0;
      if (!i2) goto l50;
      return OOC_FALSE;
l50:
      i2 = (OOC_INT32)list;
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l55:
      return OOC_TRUE;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_BuildDocs(OOC_Repository__Module module, OOC_Make__Rules makeRules, OOC_CHAR8 install) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_CHAR8 ok;
      OOC_INT32 i;
      OOC_Repository__Module m;
      OOC_Repository__URIBuffer path;

      ok = OOC_TRUE;
      i0 = OOC_Config__HaveXsltProc();
      if (i0) goto l3;
      i0=OOC_TRUE;
      goto l24;
l3:
      i = 0;
      i0 = (OOC_INT32)makeRules;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10436))+20);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10444)), (OOC_INT32)0);
      i1 = 0!=i1;
      if (i1) goto l6;
      i0=OOC_TRUE;
      goto l24;
l6:
      i1 = install;
      i2 = (OOC_INT32)module;
      i3=0;i4=OOC_TRUE;
l7_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10475))+20);
      i5 = _check_pointer(i5, 10483);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10483))*4);
      m = (OOC_Repository__Module)i5;
      if (i1) goto l10;
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10917)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i5, 5);
      ok = i4;
      
      goto l14;
l10:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10547));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10531));
      i6 = i7==i6;
      if (!i6) goto l14;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10576));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10576));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10583)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 4, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10647))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10647))+24);
      i8 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((Object__String)i8, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10655)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10725));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10725));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10732)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 5, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10795))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10795))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10803)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i5, (OOC_Package__FileData)i7);
l14:
      i3 = i3+1;
      i = i3;
      if (i4) goto l17;
      i5=OOC_FALSE;
      goto l19;
l17:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10436))+20);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10444)), (OOC_INT32)0);
      i5 = i3!=i5;
      
l19:
      if (i5) goto l7_loop;
l22:
      i0=i4;
l24:
      return i0;
      ;
    }


  i0 = OOC_Config_CCompiler__HaveLibtool();
  installObjects = (!i0);
  ok = OOC_TRUE;
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11155))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 11163))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=OOC_TRUE;
  goto l37;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11189))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11197));
  i1 = _check_pointer(i1, 11203);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 11203))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11215)))), &_td_OOC_Package__LibraryDesc, 11215);
  lib = (OOC_Package__Library)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11255))+4);
  i1 = (OOC_INT32)oo2c__GetModule((Object__String)i1);
  module = (OOC_Repository__Module)i1;
  i2 = installObjects;
  if (i2) goto l15;
  i2 = (OOC_INT32)oo2c__makeRules;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11526))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11466));
  i3 = (OOC_INT32)Object__NewLatin1((void*)((_check_pointer(i3, 11534))+12), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11447)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i2, (Object__String)i0, (Object__String)i3);
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11567)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 19);
  if (i0) goto l9;
  i0=OOC_FALSE;
  goto l14;
l9:
  i0 = install;
  i0 = !i0;
  if (i0) goto l12;
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = oo2c__BuildPackage_InstallLibrary((OOC_Repository__Module)i1, (OOC_Make__Rules)i0);
  
  goto l14;
l12:
  i0=OOC_TRUE;
l14:
  ok = i0;
  
  goto l25;
l15:
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11321)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 18);
  if (i0) goto l18;
  i0=OOC_FALSE;
  goto l23;
l18:
  i0 = install;
  i0 = !i0;
  if (i0) goto l21;
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = oo2c__BuildPackage_InstallLibrary((OOC_Repository__Module)i1, (OOC_Make__Rules)i0);
  
  goto l23;
l21:
  i0=OOC_TRUE;
l23:
  ok = i0;
  
l25:
  if (!i0) goto l28;
  i0 = install;
  i1 = (OOC_INT32)oo2c__makeRules;
  i2 = (OOC_INT32)module;
  i0 = oo2c__BuildPackage_BuildDocs((OOC_Repository__Module)i2, (OOC_Make__Rules)i1, i0);
  ok = i0;
  
l28:
  i1 = (OOC_INT32)oo2c__makeRules;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11839)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i1, (Object__String)(OOC_INT32)0, (Object__String)(OOC_INT32)0);
  i1 = i;
  i1 = i1+1;
  i = i1;
  if (i0) goto l31;
  i2=OOC_FALSE;
  goto l33;
l31:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11155))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 11163))+4);
  i2 = i1!=i2;
  
l33:
  if (!i2) goto l37;
  i0=i1;
  goto l4_loop;
l37:
  i = 0;
  if (i0) goto l40;
  i1=OOC_FALSE;
  goto l42;
l40:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11925))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 11936))+4);
  i1 = 0!=i1;
  
l42:
  if (!i1) goto l63;
  i0=0;
l45_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11963))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11974));
  i1 = _check_pointer(i1, 11980);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 11980))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11992)))), &_td_OOC_Package__ExecutableDesc, 11992);
  exec = (OOC_Package__Executable)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12035));
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  module = (OOC_Repository__Module)i0;
  i1 = (OOC_INT32)oo2c__makeRules;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12070)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, 18);
  if (i1) goto l48;
  i0=OOC_FALSE;
  goto l53;
l48:
  i1 = install;
  i1 = !i1;
  if (i1) goto l51;
  i0 = oo2c__BuildPackage_InstallExecutable((OOC_Repository__Module)i0);
  
  goto l53;
l51:
  i0=OOC_TRUE;
l53:
  i1 = i;
  i1 = i1+1;
  ok = i0;
  i = i1;
  if (i0) goto l56;
  i2=OOC_FALSE;
  goto l58;
l56:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11925))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 11936))+4);
  i2 = i1!=i2;
  
l58:
  if (!i2) goto l63;
  i0=i1;
  goto l45_loop;
l63:
  if (i0) goto l65;
  i1=OOC_FALSE;
  goto l67;
l65:
  i1 = install;
  
l67:
  if (!i1) goto l71;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12249))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12292))+12);
  i0 = oo2c__BuildPackage_InstallFiles((OOC_Package__FileData)i0);
  ok = i0;
  
l71:
  if (i0) goto l73;
  i1=OOC_FALSE;
  goto l75;
l73:
  i1 = install;
  
l75:
  if (!i1) goto l82;
  i1 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12410))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12429)))), &_td_Config_Value_String__ValueDesc, 12429)), 12435));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12410))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12429)))), &_td_Config_Value_String__ValueDesc, 12429)), 12435));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12442)), (OOC_INT32)0);
  i3 = (OOC_INT32)pkg;
  OOC_Package__WritePackage((OOC_Package__Package)i3, (void*)(_check_pointer(i2, 12442)), i1, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l82;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12515)))), Msg__MsgDesc_GetText)),Msg__MsgDesc_GetText)((Msg__Msg)i1, (void*)(OOC_INT32)str, 256);
  Out__String((void*)(OOC_INT32)str, 256);
  Out__Ln();
  i0=OOC_FALSE;
l82:
  return i0;
  ;
}

static void oo2c__UninstallPackage(OOC_Package__Package pkg) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;
  OOC_Package__FileSet normSet;
  auto void oo2c__UninstallPackage_UninstallLibrary(OOC_Package__Library library);
  auto void oo2c__UninstallPackage_UninstallExecutable(OOC_Package__Executable executable);
  auto void oo2c__UninstallPackage_UninstallFiles(OOC_Package__FileData list);
  auto void oo2c__UninstallPackage_UninstallPkgInfo(OOC_Package__Package pkg);
    
    void oo2c__UninstallPackage_UninstallLibrary(OOC_Package__Library library) {
      register OOC_INT32 i0,i1;
      ADT_StringBuffer__StringBuffer b;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__libdir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12961))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12980)))), &_td_Config_Value_String__ValueDesc, 12980)), 12986));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12961))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12980)))), &_td_Config_Value_String__ValueDesc, 12980)), 12986));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12993)), (OOC_INT32)0);
      i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i1, 12993)), i0);
      b = (ADT_StringBuffer__StringBuffer)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13004)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c2));
      i1 = (OOC_INT32)library;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13043));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13028)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13058)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c3));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13111)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
      OOC_Config_CCompiler__UninstallProgramCmd((Object__String)i0, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallExecutable(OOC_Package__Executable executable) {
      register OOC_INT32 i0,i1;
      ADT_StringBuffer__StringBuffer b;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13464))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13483)))), &_td_Config_Value_String__ValueDesc, 13483)), 13489));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13464))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13483)))), &_td_Config_Value_String__ValueDesc, 13483)), 13489));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13496)), (OOC_INT32)0);
      i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i1, 13496)), i0);
      b = (ADT_StringBuffer__StringBuffer)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13507)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c4));
      i1 = (OOC_INT32)executable;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13546));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13528)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13597)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
      OOC_Config_CCompiler__UninstallProgramCmd((Object__String)i0, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallFiles(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      ADT_StringBuffer__StringBuffer b;
      ADT_StringBuffer__CharsLatin1 cmd;
      OOC_CHAR8 ok;

      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l8;
      i0 = (OOC_INT32)_c5;
      i1 = (OOC_INT32)_c6;
l3_loop:
      i2 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13979))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13998)))), &_td_Config_Value_String__ValueDesc, 13998)), 14004));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13979))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13998)))), &_td_Config_Value_String__ValueDesc, 13998)), 14004));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14011)), (OOC_INT32)0);
      i2 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i3, 14011)), i2);
      b = (ADT_StringBuffer__StringBuffer)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14024)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i0);
      i3 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14077))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14096)))), &_td_Config_Value_String__ValueDesc, 14096)), 14102));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14077))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14096)))), &_td_Config_Value_String__ValueDesc, 14096)), 14102));
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14109)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14047)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i4, 14109)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14122)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i1);
      i3 = (OOC_INT32)list;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14166)))), &_td_OOC_Package__FileDesc, 14166)), 14171))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14145)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i4);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14200)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i2);
      cmd = (ADT_StringBuffer__CharsLatin1)i2;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14247)), (OOC_INT32)0);
      OOC_Logger__ShellCommand((void*)(_check_pointer(i2, 14247)), i4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14294)), (OOC_INT32)0);
      i2 = OS_ProcessManagement__system((void*)(_check_pointer(i2, 14294)), i4);
      ok = (i2==0);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 14323));
      list = (OOC_Package__FileData)i2;
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallPkgInfo(OOC_Package__Package pkg) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_Make__ShellCommand cmd;

      i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14567))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14586)))), &_td_Config_Value_String__ValueDesc, 14586)), 14592));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14567))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14586)))), &_td_Config_Value_String__ValueDesc, 14586)), 14592));
      i2 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14632))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14651)))), &_td_Config_Value_String__ValueDesc, 14651)), 14657));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14632))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14651)))), &_td_Config_Value_String__ValueDesc, 14651)), 14657));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14599)), (OOC_INT32)0);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14664)), (OOC_INT32)0);
      i4 = (OOC_INT32)pkg;
      OOC_Package__RemovePkgInfoCmd((OOC_Package__Package)i4, (void*)(_check_pointer(i1, 14599)), i0, (void*)(_check_pointer(i3, 14664)), i2, (void*)(OOC_INT32)cmd, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)cmd, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)cmd, 4096);
      return;
      ;
    }


  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14836))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 14844))+4);
  i0 = 0!=i0;
  if (!i0) goto l8;
  i0=0;
l3_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14880))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14888));
  i1 = _check_pointer(i1, 14894);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 14894))*4);
  oo2c__UninstallPackage_UninstallLibrary((OOC_Package__Library)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14906)))), &_td_OOC_Package__LibraryDesc, 14906)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14836))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 14844))+4);
  i1 = i0!=i1;
  if (i1) goto l3_loop;
l8:
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14971))+20);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 14982))+4);
  i0 = 0!=i0;
  if (!i0) goto l16;
  i0=0;
l11_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15021))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15032));
  i1 = _check_pointer(i1, 15038);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 15038))*4);
  oo2c__UninstallPackage_UninstallExecutable((OOC_Package__Executable)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15050)))), &_td_OOC_Package__ExecutableDesc, 15050)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14971))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 14982))+4);
  i1 = i0!=i1;
  if (i1) goto l11_loop;
l16:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15128))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15165))+12);
  oo2c__UninstallPackage_UninstallFiles((OOC_Package__FileData)i0);
  i0 = (OOC_INT32)pkg;
  oo2c__UninstallPackage_UninstallPkgInfo((OOC_Package__Package)i0);
  return;
  ;
}

static OOC_CHAR8 oo2c__BuildPackageDoc(OOC_Package__Package pkg) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 ok;
  OOC_INT32 i;
  OOC_Package__Library lib;
  OOC_Package__Executable exec;
  auto OOC_CHAR8 oo2c__BuildPackageDoc_BuildDocs(OOC_Repository__Module module);
    
    OOC_CHAR8 oo2c__BuildPackageDoc_BuildDocs(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_CHAR8 ok;
      OOC_Make__ModuleList list;
      OOC_INT32 i;

      i0 = (OOC_INT32)oo2c__makeRules;
      i1 = (OOC_INT32)module;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15537)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
      ok = i0;
      i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)(OOC_INT32)0);
      list = (OOC_Make__ModuleList)i2;
      i = 0;
      if (i0) goto l3;
      i3=OOC_FALSE;
      goto l5;
l3:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15672)), (OOC_INT32)0);
      i3 = 0!=i3;
      
l5:
      if (!i3) goto l21;
      i3=i0;i0=0;
l8_loop:
      i4 = _check_pointer(i2, 15695);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 15695))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15714));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 15698));
      i4 = i4==i5;
      if (!i4) goto l12;
      i3 = (OOC_INT32)oo2c__makeRules;
      i4 = _check_pointer(i2, 15765);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 15765))*4);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15753)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i3, (OOC_Repository__Module)i4, 5);
      ok = i3;
      
l12:
      i0 = i0+1;
      i = i0;
      if (i3) goto l15;
      i4=OOC_FALSE;
      goto l17;
l15:
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15672)), (OOC_INT32)0);
      i4 = i0!=i4;
      
l17:
      if (i4) goto l8_loop;
l20:
      i0=i3;
l21:
      return i0;
      ;
    }


  ok = OOC_TRUE;
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15932))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 15940))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=OOC_TRUE;
  goto l13;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15966))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15974));
  i1 = _check_pointer(i1, 15980);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 15980))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15992)))), &_td_OOC_Package__LibraryDesc, 15992);
  lib = (OOC_Package__Library)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16037))+4);
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  i0 = oo2c__BuildPackageDoc_BuildDocs((OOC_Repository__Module)i0);
  i1 = i;
  i1 = i1+1;
  ok = i0;
  i = i1;
  if (i0) goto l7;
  i2=OOC_FALSE;
  goto l9;
l7:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15932))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 15940))+4);
  i2 = i1!=i2;
  
l9:
  if (!i2) goto l13;
  i0=i1;
  goto l4_loop;
l13:
  i = 0;
  if (i0) goto l16;
  i1=OOC_FALSE;
  goto l18;
l16:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16111))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 16122))+4);
  i1 = 0!=i1;
  
l18:
  if (!i1) goto l30;
  i0=0;
l21_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16149))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16160));
  i1 = _check_pointer(i1, 16166);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 16166))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16178)))), &_td_OOC_Package__ExecutableDesc, 16178);
  exec = (OOC_Package__Executable)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16227));
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  i0 = oo2c__BuildPackageDoc_BuildDocs((OOC_Repository__Module)i0);
  i1 = i;
  i1 = i1+1;
  ok = i0;
  i = i1;
  if (i0) goto l24;
  i2=OOC_FALSE;
  goto l26;
l24:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16111))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16122))+4);
  i2 = i1!=i2;
  
l26:
  if (!i2) goto l30;
  i0=i1;
  goto l21_loop;
l30:
  return i0;
  ;
}

static void oo2c__WriteHelp() {

  Out__String("Usage:", 7);
  Out__Ln();
  Out__String("  oo2c [options] <module>...", 29);
  Out__Ln();
  Out__String("  oo2c (--make|-M) [options] <module>", 38);
  Out__Ln();
  Out__String("  oo2c --build-package [options] <package>", 43);
  Out__Ln();
  Out__String("  oo2c --install-package [options] <package>", 45);
  Out__Ln();
  Out__String("  oo2c --uninstall-package [options] <package>", 47);
  Out__Ln();
  Out__String("  oo2c --build-pkg-doc [options] <package>", 43);
  Out__Ln();
  Out__String("Options:", 9);
  Out__Ln();
  Out__String("  --config <file>", 18);
  Out__Ln();
  Out__String("  --repository <directory>, -r <directory>", 43);
  Out__Ln();
  Out__String("  --no-rtc", 11);
  Out__Ln();
  Out__String("  --error-style <string>", 25);
  Out__Ln();
  return;
  ;
}

void OOC_oo2c_init(void) {
  register OOC_INT32 i0,i1,i2,i3;
  _c0 = Object__NewLatin1Char((OOC_CHAR8)' ');
  _c1 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c2 = Object__NewLatin1Region("/lib", 5, (OOC_INT32)0, 4);
  _c3 = Object__NewLatin1Region(".la", 4, (OOC_INT32)0, 3);
  _c4 = Object__NewLatin1Char((OOC_CHAR8)'/');
  _c5 = Object__NewLatin1Char((OOC_CHAR8)' ');
  _c6 = Object__NewLatin1Char((OOC_CHAR8)'/');

  OOC_Error__minErrorDistance = 16;
  OOC_SymbolTable_Builder__doAutoImport = 2;
  i0 = (OOC_INT32)OOC_Error__NewList("", 1);
  oo2c__cfgErrList = (OOC_Error__List)i0;
  oo2c__NewConfig();
  i0 = (OOC_INT32)oo2c__cfgErrList;
  OOC_Config__Read((Msg__MsgList)i0);
  i0 = (OOC_INT32)OOC_Make__NewRules();
  oo2c__makeRules = (OOC_Make__Rules)i0;
  i1 = (OOC_INT32)oo2c__useStderr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17254))+8);
  i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17269)))), &_td_Config_Value_Boolean__ValueDesc, 17269)), 17275));
  if (!i1) goto l3;
  i1 = (OOC_INT32)StdChannels__stderr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17302)))), OOC_Make__RulesDesc_SetErrOut)),OOC_Make__RulesDesc_SetErrOut)((OOC_Make__Rules)i0, (Channel__Channel)i1);
l3:
  i0 = (OOC_INT32)oo2c__command;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17360))+8);
  i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17375)))), &_td_Config_Value_Integer__ValueDesc, 17375)), 17381));
  switch (i0) {
  case 0:
    oo2c__mode = 11;
    goto l14;
  case 1:
    oo2c__mode = 18;
    goto l14;
  case 2:
    oo2c__mode = -1;
    goto l14;
  case 3:
    oo2c__mode = -2;
    goto l14;
  case 4:
    oo2c__mode = -3;
    goto l14;
  case 5:
    oo2c__mode = -4;
    goto l14;
  case 6:
    oo2c__mode = -5;
    OOC_Logger__silence = OOC_TRUE;
    goto l14;
  case 7:
    oo2c__mode = -6;
    goto l14;
  default:
    _failed_case(i0, 17348);
    goto l14;
  }
l14:
  i0 = (OOC_INT32)oo2c__errorStyle;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17723))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17742)))), &_td_Config_Value_String__ValueDesc, 17742)), 17748));
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 17755)),(const void*)"file:line:column"))==(OOC_INT32)0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17849))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17868)))), &_td_Config_Value_String__ValueDesc, 17868)), 17874));
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 17881)),(const void*)"char-pos"))==(OOC_INT32)0;
  if (!i0) goto l21;
  OOC_Error__style = 1;
  goto l21;
l20:
  OOC_Error__style = 0;
l21:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 17967));
  i1 = i1!=0;
  if (!i1) goto l24;
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18002)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
l24:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18055)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  i0 = !i0;
  if (i0) goto l107;
  i0 = (OOC_INT32)oo2c__showVersion;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18104))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18119)))), &_td_Config_Value_Boolean__ValueDesc, 18119)), 18125));
  if (i0) goto l105;
  i0 = (OOC_INT32)oo2c__showHelp;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18260))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18275)))), &_td_Config_Value_Boolean__ValueDesc, 18275)), 18281));
  if (i0) goto l103;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = oo2c__mode;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18363)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i0);
  i0 = (i1==-4)!=(i0==0);
  if (i0) goto l101;
  i0 = oo2c__mode;
  i0 = i0==-4;
  oo2c__ok = OOC_TRUE;
  if (i0) goto l96;
  i0 = (OOC_INT32)OOC_Config__options;
  i1 = (OOC_INT32)OOC_Config__pragmas;
  i0 = OOC_Package__ParseMetaData((Config_Section_Options__Section)i0, (Config_Section_Options__Section)i1);
  i0 = !i0;
  if (!i0) goto l37;
  _halt(1);
l37:
  oo2c__forceUpdateRepository = OOC_FALSE;
  oo2c__i = 0;
  i0 = oo2c__ok;
  if (i0) goto l40;
  i0=OOC_FALSE;
  goto l42;
l40:
  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18769)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i0);
  i0 = 0!=i0;
  
l42:
  if (!i0) goto l88;
l44_loop:
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = oo2c__i;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18818)))), Config_Section_Arguments__SectionDesc_Get)),Config_Section_Arguments__SectionDesc_Get)((Config_Section_Arguments__Section)i0, i1);
  oo2c__arg = (Config_Value__StringPtr)i0;
  i1 = oo2c__mode;
  switch (i1) {
  case -1:
  case -2:
    oo2c__doInstall = (i1==-2);
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18977)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 18977)), i1, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = i0==(OOC_INT32)0;
    if (i0) goto l55;
    i0 = oo2c__doInstall;
    if (!i0) goto l54;
    i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19251))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19270)))), &_td_Config_Value_String__ValueDesc, 19270)), 19276));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19251))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19270)))), &_td_Config_Value_String__ValueDesc, 19270)), 19276));
    i2 = (OOC_INT32)oo2c__arg;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 19289)), (OOC_INT32)0);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19283)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i1, 19283)), i0, (void*)(_check_pointer(i2, 19289)), i3, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkgInfo = (OOC_Package__Package)i0;
    i1 = (OOC_INT32)oo2c__errList;
    i1 = *(OOC_INT32*)(_check_pointer(i1, 19327));
    i1 = i1==0;
    if (!i1) goto l54;
    oo2c__UninstallPackage((OOC_Package__Package)i0);
l54:
    i0 = (OOC_INT32)oo2c__pkg;
    i1 = (OOC_INT32)oo2c__rep;
    i2 = oo2c__doInstall;
    i0 = oo2c__BuildPackage((OOC_Package__Package)i0, (OOC_Repository__Repository)i1, i2);
    oo2c__ok = i0;
    i0 = oo2c__doInstall;
    oo2c__forceUpdateRepository = i0;
    goto l79;
l55:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19101)), (OOC_INT32)0);
    Err__String((void*)(_check_pointer(i0, 19101)), i1);
    Err__Ln();
    _halt(1);
    goto l79;
  case -3:
    i1 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19633))+8);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19652)))), &_td_Config_Value_String__ValueDesc, 19652)), 19658));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19633))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19652)))), &_td_Config_Value_String__ValueDesc, 19652)), 19658));
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19671)), (OOC_INT32)0);
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19665)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i2, 19665)), i1, (void*)(_check_pointer(i0, 19671)), i3, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = (OOC_INT32)oo2c__errList;
    i1 = *(OOC_INT32*)(_check_pointer(i0, 19705));
    i1 = i1!=0;
    if (!i1) goto l60;
    i1 = (OOC_INT32)StdChannels__stdout;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19744)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
l60:
    i0 = (OOC_INT32)oo2c__pkg;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l63;
    oo2c__UninstallPackage((OOC_Package__Package)i0);
    oo2c__forceUpdateRepository = OOC_TRUE;
    goto l79;
l63:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19902)), (OOC_INT32)0);
    Err__String((void*)(_check_pointer(i0, 19902)), i1);
    Err__Ln();
    _halt(1);
    goto l79;
  case -5:
    i1 = (OOC_INT32)OOC_Config__options;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20120)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20112)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i1, (void*)(_check_pointer(i0, 20120)), i2);
    oo2c__option = (Config_Section_Options__Option)i0;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l68;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20235))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20254)))), &_td_Config_Value_String__ValueDesc, 20254)), 20260));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20235))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20254)))), &_td_Config_Value_String__ValueDesc, 20254)), 20260));
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20267)), (OOC_INT32)0);
    Out__String((void*)(_check_pointer(i1, 20267)), i0);
    goto l69;
l68:
    Out__String("(none)", 7);
l69:
    Out__Ln();
    goto l79;
  case -6:
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20381)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 20381)), i1, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l73;
    i0 = oo2c__BuildPackageDoc((OOC_Package__Package)i0);
    oo2c__ok = i0;
    goto l79;
l73:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20505)), (OOC_INT32)0);
    Err__String((void*)(_check_pointer(i0, 20505)), i1);
    Err__Ln();
    _halt(1);
    goto l79;
  default:
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20694)), (OOC_INT32)0);
    i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i0, 20694)), i1);
    i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
    i1 = oo2c__mode;
    i1 = i1==11;
    oo2c__module = (OOC_Repository__Module)i0;
    if (!i1) goto l78;
    i1 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20764)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
l78:
    i0 = (OOC_INT32)oo2c__makeRules;
    i1 = (OOC_INT32)oo2c__module;
    i2 = oo2c__mode;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20834)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, i2);
    oo2c__ok = i0;
    i0 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20876)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i0, (OOC_Repository__Module)(OOC_INT32)0);
    goto l79;
  }
l79:
  i0 = oo2c__i;
  i0 = i0+1;
  oo2c__i = i0;
  i1 = oo2c__ok;
  if (i1) goto l82;
  i0=OOC_FALSE;
  goto l84;
l82:
  i1 = (OOC_INT32)OOC_Config__arguments;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18769)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i1);
  i0 = i0!=i1;
  
l84:
  if (i0) goto l44_loop;
l88:
  i0 = oo2c__ok;
  if (i0) goto l91;
  i0=OOC_FALSE;
  goto l93;
l91:
  i0 = oo2c__forceUpdateRepository;
  
l93:
  if (!i0) goto l97;
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21040))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21059)))), &_td_Config_Value_String__ValueDesc, 21059)), 21065));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21040))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21059)))), &_td_Config_Value_String__ValueDesc, 21059)), 21065));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21072)), (OOC_INT32)0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i1, 21072)), i0);
  oo2c__ok = i0;
  goto l97;
l96:
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18530))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18549)))), &_td_Config_Value_String__ValueDesc, 18549)), 18555));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18530))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18549)))), &_td_Config_Value_String__ValueDesc, 18549)), 18555));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18562)), (OOC_INT32)0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i1, 18562)), i0);
  oo2c__ok = i0;
l97:
  i0 = oo2c__ok;
  i0 = !i0;
  if (!i0) goto l108;
  _halt(1);
  goto l108;
l101:
  oo2c__WriteHelp();
  _halt(1);
  goto l108;
l103:
  oo2c__WriteHelp();
  goto l108;
l105:
  Out__String("oo2c/gcc ", 10);
  Out__String("2.0.2", 6);
  Out__Ln();
  _halt((OOC_INT32)0);
  goto l108;
l107:
  _halt(1);
l108:
  return;
  ;
}

/* --- */
