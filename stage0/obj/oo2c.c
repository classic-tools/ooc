#include "oo2c.d"
#include "__oo2c.h"

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

static OOC_Repository__Module oo2c__GetModule(const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)
  OOC_Repository__Module m;

  OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3627)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(OOC_INT32)moduleName, moduleName_0d);
  i1 = i0==(OOC_INT32)0;
  m = (OOC_Repository__Module)i0;
  if (!i1) goto l4;
  Err__String("Error: Cannot locate module ", 29);
  Err__String((void*)(OOC_INT32)moduleName, moduleName_0d);
  Err__Ln();
  _halt(1);
l4:
  return (OOC_Repository__Module)i0;
  ;
}

static OOC_CHAR8 oo2c__BuildPackage(OOC_Package__Package pkg, OOC_Repository__Repository rep, OOC_CHAR8 install) {
  register OOC_INT32 i0,i1,i2,i3,i4;
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
      _cmp8((const void*)(OOC_INT32)prefix,(const void*)""))==0;
      if (i0) goto l3;
      _copy_8((OOC_INT32)prefix,(OOC_INT32)str,4096);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5475))+20);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5483)), 0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l18;
      i3 = (OOC_INT32)module;
      i4=0;
l3_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5513))+20);
      i5 = _check_pointer(i5, 5521);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5521))*4);
      m = (OOC_Repository__Module)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5556));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5540));
      i6 = i7==i6;
      if (!i6) goto l12;
      if ((!i0)) goto l7;
      i6=OOC_FALSE;
      goto l9;
l7:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5602))+12);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5602))+12);
      i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5609)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i7);
      i6 = !i6;
      
l9:
      if (!i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5643));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5643));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5650)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 7, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5708))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5708))+24);
      i8 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((ADT_String__String)i8, (ADT_String__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 5716)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
l11:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5802));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5802));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5809)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 1, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5865))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 5865))+24);
      i8 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((ADT_String__String)i8, (ADT_String__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 5873)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5933));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 5933));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5940)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 13, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5997))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5997))+24);
      i7 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((ADT_String__String)i7, (ADT_String__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6005)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i5, (OOC_Package__FileData)i7);
l12:
      i4 = i4+1;
      i5 = i4<=i2;
      i = i4;
      if (i5) goto l3_loop;
l18:
      if ((!i0)) goto l24;
      i1 = (OOC_INT32)OOC_Config_CCompiler__libdir;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6178))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6197)))), &_td_Config_Value_String__ValueDesc, 6197)), 6203));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6178))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6197)))), &_td_Config_Value_String__ValueDesc, 6197)), 6203));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6210)), 0);
      i1 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i2, 6210)), i1);
      if (i1) goto l22;
      return OOC_FALSE;
      goto l25;
l22:
      i1 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6239)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 19, OOC_TRUE);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i1, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i1 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i1==0);
      goto l25;
l24:
      return OOC_TRUE;
l25:
      _failed_function(4651); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallExecutable(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6725))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6744)))), &_td_Config_Value_String__ValueDesc, 6744)), 6750));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6725))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6744)))), &_td_Config_Value_String__ValueDesc, 6744)), 6750));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6757)), 0);
      i0 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i1, 6757)), i0);
      if (i0) goto l3;
      return OOC_FALSE;
      goto l4;
l3:
      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6786)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 18, OOC_TRUE);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i0, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i0==0);
l4:
      _failed_function(6492); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallFiles(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      URI__URI baseURI;
      OOC_Repository__URIBuffer sourcePrefix;
      OOC_Package__FileData end;
      ADT_String__String dir;
      OOC_Make__ShellCommand cmd;
      auto OOC_CHAR8 oo2c__BuildPackage_InstallFiles_SameDirectory(OOC_Package__File a, OOC_Package__File b);
        
        OOC_CHAR8 oo2c__BuildPackage_InstallFiles_SameDirectory(OOC_Package__File a, OOC_Package__File b) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          ADT_String__String sa;
          ADT_String__String sb;
          OOC_INT32 i;
          OOC_INT32 j;

          i0 = (OOC_INT32)a;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7399))+8);
          sa = (ADT_String__String)i0;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7417))+8);
          sb = (ADT_String__String)i1;
          i = 0;
          i2 = *(OOC_INT32*)(_check_pointer(i0, 7465));
          i2 = 0!=i2;
          if (i2) goto l3;
          i2=OOC_FALSE;
          goto l5;
l3:
          i2 = *(OOC_INT32*)(_check_pointer(i1, 7483));
          i2 = 0!=i2;
          
l5:
          if (i2) goto l7;
          i2=OOC_FALSE;
          goto l9;
l7:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7511))+4);
          i2 = _check_pointer(i2, 7517);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7525))+4);
          i4 = _check_pointer(i4, 7531);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 7517)));
          i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 7531)));
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
          i3 = *(OOC_INT32*)(_check_pointer(i0, 7465));
          i3 = i2!=i3;
          if (i3) goto l15;
          i3=OOC_FALSE;
          goto l17;
l15:
          i3 = *(OOC_INT32*)(_check_pointer(i1, 7483));
          i3 = i2!=i3;
          
l17:
          if (i3) goto l19;
          i3=OOC_FALSE;
          goto l21;
l19:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7511))+4);
          i3 = _check_pointer(i3, 7517);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7525))+4);
          i5 = _check_pointer(i5, 7531);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 7517)));
          i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 7531)));
          i3 = i3==i4;
          
l21:
          if (i3) goto l12_loop;
l25:
          i3 = i2!=0;
          if (i3) goto l28;
          i3=OOC_FALSE;
          goto l30;
l28:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7597))+4);
          i3 = _check_pointer(i3, 7603);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 7603)));
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
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7597))+4);
          i3 = _check_pointer(i3, 7603);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 7603)));
          i3 = i3!=(OOC_CHAR8)'/';
          
l38:
          if (i3) goto l33_loop;
l42:
          i3 = i2==0;
          if (i3) goto l49;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7684))+4);
          i3 = _check_pointer(i3, 7690);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = i2-1;
          i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 7690)));
          i3 = i3==(OOC_CHAR8)'/';
          if (i3) goto l47;
          i3=OOC_FALSE;
          goto l51;
l47:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7708))+4);
          i3 = _check_pointer(i3, 7714);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 7714)));
          i3 = i3==(OOC_CHAR8)'/';
          
          goto l51;
l49:
          i3=OOC_TRUE;
l51:
          if (!i3) goto l90;
          j = i2;
          i3 = *(OOC_INT32*)(_check_pointer(i0, 7906));
          i3 = i2!=i3;
          if (i3) goto l55;
          i3=OOC_FALSE;
          goto l57;
l55:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7920))+4);
          i3 = _check_pointer(i3, 7926);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 7926)));
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
          i4 = *(OOC_INT32*)(_check_pointer(i0, 7906));
          i4 = i3!=i4;
          if (i4) goto l63;
          i4=OOC_FALSE;
          goto l65;
l63:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7920))+4);
          i4 = _check_pointer(i4, 7926);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 7926)));
          i4 = i4!=(OOC_CHAR8)'/';
          
l65:
          if (i4) goto l60_loop;
l69:
          i0 = *(OOC_INT32*)(_check_pointer(i0, 7996));
          i0 = i3==i0;
          if (!i0) goto l90;
          j = i2;
          i0 = *(OOC_INT32*)(_check_pointer(i1, 8055));
          i0 = i2!=i0;
          if (i0) goto l74;
          i0=OOC_FALSE;
          goto l76;
l74:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8069))+4);
          i0 = _check_pointer(i0, 8075);
          i3 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i3, OOC_UINT32, 8075)));
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
          i2 = *(OOC_INT32*)(_check_pointer(i1, 8055));
          i2 = i0!=i2;
          if (i2) goto l82;
          i2=OOC_FALSE;
          goto l84;
l82:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8069))+4);
          i2 = _check_pointer(i2, 8075);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 8075)));
          i2 = i2!=(OOC_CHAR8)'/';
          
l84:
          if (i2) goto l79_loop;
l88:
          i1 = *(OOC_INT32*)(_check_pointer(i1, 8155));
          return (i0==i1);
l90:
          return OOC_FALSE;
          ;
        }


      i0 = (OOC_INT32)rep;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8286)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 8286)), 8297))+12);
      baseURI = (URI__URI)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8334)))), &_td_URI_Scheme_File__URIDesc, 8334)), 8338)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8334)))), &_td_URI_Scheme_File__URIDesc, 8334)), (void*)(OOC_INT32)sourcePrefix, 1024);
      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l57;
l3_loop:
      i0 = (OOC_INT32)list;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8416));
      end = (OOC_Package__FileData)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l6;
      i0=OOC_FALSE;
      goto l8;
l6:
      i0 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8500)))), &_td_OOC_Package__FileDesc, 8500)), (OOC_Package__File)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8519)))), &_td_OOC_Package__FileDesc, 8519)));
      
l8:
      if (!i0) goto l18;
l9_loop:
      i0 = (OOC_INT32)end;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8549));
      end = (OOC_Package__FileData)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l12;
      i0=OOC_FALSE;
      goto l14;
l12:
      i1 = (OOC_INT32)list;
      i0 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8500)))), &_td_OOC_Package__FileDesc, 8500)), (OOC_Package__File)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8519)))), &_td_OOC_Package__FileDesc, 8519)));
      
l14:
      if (i0) goto l9_loop;
l18:
      i0 = (OOC_INT32)list;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8653)))), &_td_OOC_Package__FileDesc, 8653)), 8658))+8);
      dir = (ADT_String__String)i1;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 8685));
      i = i2;
      i3 = i2!=0;
      if (i3) goto l21;
      i3=OOC_FALSE;
      goto l23;
l21:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8722))+4);
      i3 = _check_pointer(i3, 8728);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 8728)));
      i3 = i3!=(OOC_CHAR8)'/';
      
l23:
      if (!i3) goto l35;
l26_loop:
      i2 = i2-1;
      i = i2;
      i3 = i2!=0;
      if (i3) goto l29;
      i3=OOC_FALSE;
      goto l31;
l29:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8722))+4);
      i3 = _check_pointer(i3, 8728);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 8728)));
      i3 = i3!=(OOC_CHAR8)'/';
      
l31:
      if (i3) goto l26_loop;
l35:
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8793)))), ADT_String__StringDesc_Extract)),ADT_String__StringDesc_Extract)((ADT_String__String)i1, 0, i2);
      dir = (ADT_String__String)i1;
      i2 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8862))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8881)))), &_td_Config_Value_String__ValueDesc, 8881)), 8887));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8862))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8881)))), &_td_Config_Value_String__ValueDesc, 8881)), 8887));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8928))+4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8928))+4);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 8934)), 0);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8894)), 0);
      i2 = oo2c__BuildPackage_InstallDirectory((void*)(_check_pointer(i3, 8894)), i2, (void*)(_check_pointer(i4, 8934)), i5);
      if (i2) goto l38;
      return OOC_FALSE;
      goto l52;
l38:
      i2 = (OOC_INT32)OOC_Config_CCompiler__installData;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8978))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8997)))), &_td_Config_Value_String__ValueDesc, 8997)), 9003));
      i3 = (OOC_INT32)end;
      i0 = i0!=i3;
      _copy_8((_check_pointer(i2, 9010)),(OOC_INT32)cmd,4096);
      if (!i0) goto l45;
l40_loop:
      Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, 4096);
      Strings__Append((void*)(OOC_INT32)sourcePrefix, 1024, (void*)(OOC_INT32)cmd, 4096);
      i0 = (OOC_INT32)list;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9176)))), &_td_OOC_Package__FileDesc, 9176)), 9181))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9186))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9176)))), &_td_OOC_Package__FileDesc, 9176)), 9181))+4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9186))+4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9192)), 0);
      Strings__Append((void*)(_check_pointer(i2, 9192)), i4, (void*)(OOC_INT32)cmd, 4096);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9225));
      i2 = i0!=i3;
      list = (OOC_Package__FileData)i0;
      if (i2) goto l40_loop;
l45:
      Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, 4096);
      i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9322))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9341)))), &_td_Config_Value_String__ValueDesc, 9341)), 9347));
      i2 = (
      _cmp8((const void*)(_check_pointer(i2, 9354)),(const void*)""))!=0;
      if (!i2) goto l48;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9410))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9429)))), &_td_Config_Value_String__ValueDesc, 9429)), 9435));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9410))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9429)))), &_td_Config_Value_String__ValueDesc, 9429)), 9435));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9442)), 0);
      Strings__Append((void*)(_check_pointer(i2, 9442)), i0, (void*)(OOC_INT32)cmd, 4096);
      Strings__Append("/", 2, (void*)(OOC_INT32)cmd, 4096);
l48:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9559))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9559))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9565)), 0);
      Strings__Append((void*)(_check_pointer(i0, 9565)), i1, (void*)(OOC_INT32)cmd, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)cmd, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)cmd, 4096);
      i0 = i0!=0;
      if (!i0) goto l52;
      return OOC_FALSE;
l52:
      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l57:
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10135))+20);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10143)), 0);
      i1 = 0!=i1;
      if (i1) goto l6;
      i0=OOC_TRUE;
      goto l24;
l6:
      i1 = install;
      i2 = (OOC_INT32)module;
      i3=0;i4=OOC_TRUE;
l7_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10174))+20);
      i5 = _check_pointer(i5, 10182);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10182))*4);
      m = (OOC_Repository__Module)i5;
      if (i1) goto l10;
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10604)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i5, 5);
      ok = i4;
      
      goto l14;
l10:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10246));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10230));
      i6 = i7==i6;
      if (!i6) goto l14;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10275));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10275));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10282)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 4, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10346))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10346))+24);
      i8 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((ADT_String__String)i8, (ADT_String__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10354)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10418));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 10418));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10425)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 5, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10488))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10488))+24);
      i7 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((ADT_String__String)i7, (ADT_String__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10496)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i5, (OOC_Package__FileData)i7);
l14:
      i3 = i3+1;
      i = i3;
      if (i4) goto l17;
      i5=OOC_FALSE;
      goto l19;
l17:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10135))+20);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10143)), 0);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10842))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10850))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=OOC_TRUE;
  goto l37;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10876))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10884));
  i1 = _check_pointer(i1, 10890);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 10890))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10902)))), &_td_OOC_Package__LibraryDesc, 10902);
  lib = (OOC_Package__Library)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10942))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10953))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10942))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10953))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10959)), 0);
  i1 = (OOC_INT32)oo2c__GetModule((void*)(_check_pointer(i1, 10959)), i2);
  module = (OOC_Repository__Module)i1;
  i2 = installObjects;
  if (i2) goto l15;
  i2 = (OOC_INT32)oo2c__makeRules;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11160));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11165))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11160));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11165))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11177))+8);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 11171)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11141)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i2, (void*)(_check_pointer(i3, 11171)), i4, (void*)((_check_pointer(i0, 11185))+12), 32);
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11217)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 19);
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
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11015)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 18);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11489)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i1, "", 1, "", 1);
  i1 = i;
  i1 = i1+1;
  i = i1;
  if (i0) goto l31;
  i2=OOC_FALSE;
  goto l33;
l31:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10842))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 10850))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11573))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 11584))+4);
  i1 = 0!=i1;
  
l42:
  if (!i1) goto l63;
  i0=0;
l45_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11611))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11622));
  i1 = _check_pointer(i1, 11628);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 11628))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11640)))), &_td_OOC_Package__ExecutableDesc, 11640);
  exec = (OOC_Package__Executable)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11683));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11694))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11683));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11694))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11700)), 0);
  i0 = (OOC_INT32)oo2c__GetModule((void*)(_check_pointer(i1, 11700)), i0);
  module = (OOC_Repository__Module)i0;
  i1 = (OOC_INT32)oo2c__makeRules;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11725)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, 18);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11573))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 11584))+4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11904))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11947))+12);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12065))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12084)))), &_td_Config_Value_String__ValueDesc, 12084)), 12090));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12065))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12084)))), &_td_Config_Value_String__ValueDesc, 12084)), 12090));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12097)), 0);
  i3 = (OOC_INT32)pkg;
  OOC_Package__WritePackage((OOC_Package__Package)i3, (void*)(_check_pointer(i2, 12097)), i1, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l82;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12170)))), Msg__MsgDesc_GetText)),Msg__MsgDesc_GetText)((Msg__Msg)i1, (void*)(OOC_INT32)str, 256);
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
      OOC_Repository__URIBuffer path;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__libdir;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12584))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12603)))), &_td_Config_Value_String__ValueDesc, 12603)), 12609));
      _copy_8((_check_pointer(i0, 12616)),(OOC_INT32)path,1024);
      Strings__Append("/lib", 5, (void*)(OOC_INT32)path, 1024);
      i0 = (OOC_INT32)library;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12690));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12695))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12690));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12695))+4);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12701)), 0);
      Strings__Append((void*)(_check_pointer(i1, 12701)), i0, (void*)(OOC_INT32)path, 1024);
      Strings__Append(".la", 4, (void*)(OOC_INT32)path, 1024);
      OOC_Config_CCompiler__UninstallProgramCmd((void*)(OOC_INT32)path, 1024, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallExecutable(OOC_Package__Executable executable) {
      register OOC_INT32 i0,i1;
      OOC_Repository__URIBuffer path;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13096))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13115)))), &_td_Config_Value_String__ValueDesc, 13115)), 13121));
      _copy_8((_check_pointer(i0, 13128)),(OOC_INT32)path,1024);
      Strings__Append("/", 2, (void*)(OOC_INT32)path, 1024);
      i0 = (OOC_INT32)executable;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13202));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13213))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13202));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13213))+4);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13219)), 0);
      Strings__Append((void*)(_check_pointer(i1, 13219)), i0, (void*)(OOC_INT32)path, 1024);
      OOC_Config_CCompiler__UninstallProgramCmd((void*)(OOC_INT32)path, 1024, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallFiles(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2;
      OOC_Make__ShellCommand cmd;
      OOC_CHAR8 ok;

      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l8;
l3_loop:
      i0 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13574))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13593)))), &_td_Config_Value_String__ValueDesc, 13593)), 13599));
      _copy_8((_check_pointer(i0, 13606)),(OOC_INT32)cmd,4096);
      Strings__Append(" ", 2, (void*)(OOC_INT32)cmd, 4096);
      i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13688))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13707)))), &_td_Config_Value_String__ValueDesc, 13707)), 13713));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13688))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13707)))), &_td_Config_Value_String__ValueDesc, 13707)), 13713));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13720)), 0);
      Strings__Append((void*)(_check_pointer(i1, 13720)), i0, (void*)(OOC_INT32)cmd, 4096);
      Strings__Append("/", 2, (void*)(OOC_INT32)cmd, 4096);
      i0 = (OOC_INT32)list;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13822)))), &_td_OOC_Package__FileDesc, 13822)), 13827))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13836))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13822)))), &_td_OOC_Package__FileDesc, 13822)), 13827))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13836))+4);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 13842)), 0);
      Strings__Append((void*)(_check_pointer(i1, 13842)), i2, (void*)(OOC_INT32)cmd, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)cmd, 4096);
      i1 = OS_ProcessManagement__system((void*)(OOC_INT32)cmd, 4096);
      ok = (i1==0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13965));
      list = (OOC_Package__FileData)i0;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l8:
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallPkgInfo(OOC_Package__Package pkg) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_Make__ShellCommand cmd;

      i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14209))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14228)))), &_td_Config_Value_String__ValueDesc, 14228)), 14234));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14209))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14228)))), &_td_Config_Value_String__ValueDesc, 14228)), 14234));
      i2 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14274))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14293)))), &_td_Config_Value_String__ValueDesc, 14293)), 14299));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14274))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14293)))), &_td_Config_Value_String__ValueDesc, 14293)), 14299));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14241)), 0);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14306)), 0);
      i4 = (OOC_INT32)pkg;
      OOC_Package__RemovePkgInfoCmd((OOC_Package__Package)i4, (void*)(_check_pointer(i1, 14241)), i0, (void*)(_check_pointer(i3, 14306)), i2, (void*)(OOC_INT32)cmd, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)cmd, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)cmd, 4096);
      return;
      ;
    }


  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14478))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 14486))+4);
  i0 = 0!=i0;
  if (!i0) goto l8;
  i0=0;
l3_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14522))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14530));
  i1 = _check_pointer(i1, 14536);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 14536))*4);
  oo2c__UninstallPackage_UninstallLibrary((OOC_Package__Library)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14548)))), &_td_OOC_Package__LibraryDesc, 14548)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14478))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 14486))+4);
  i1 = i0!=i1;
  if (i1) goto l3_loop;
l8:
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14613))+20);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 14624))+4);
  i0 = 0!=i0;
  if (!i0) goto l16;
  i0=0;
l11_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14663))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14674));
  i1 = _check_pointer(i1, 14680);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 14680))*4);
  oo2c__UninstallPackage_UninstallExecutable((OOC_Package__Executable)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14692)))), &_td_OOC_Package__ExecutableDesc, 14692)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14613))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 14624))+4);
  i1 = i0!=i1;
  if (i1) goto l11_loop;
l16:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14770))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14807))+12);
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15179)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
      ok = i0;
      i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (ADT_String__String)(OOC_INT32)0);
      list = (OOC_Make__ModuleList)i2;
      i = 0;
      if (i0) goto l3;
      i3=OOC_FALSE;
      goto l5;
l3:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15314)), 0);
      i3 = 0!=i3;
      
l5:
      if (!i3) goto l21;
      i3=i0;i0=0;
l8_loop:
      i4 = _check_pointer(i2, 15337);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 15337))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15356));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 15340));
      i4 = i4==i5;
      if (!i4) goto l12;
      i3 = (OOC_INT32)oo2c__makeRules;
      i4 = _check_pointer(i2, 15407);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 15407))*4);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15395)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i3, (OOC_Repository__Module)i4, 5);
      ok = i3;
      
l12:
      i0 = i0+1;
      i = i0;
      if (i3) goto l15;
      i4=OOC_FALSE;
      goto l17;
l15:
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15314)), 0);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15574))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 15582))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=OOC_TRUE;
  goto l13;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15608))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15616));
  i1 = _check_pointer(i1, 15622);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 15622))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15634)))), &_td_OOC_Package__LibraryDesc, 15634);
  lib = (OOC_Package__Library)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15679))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15690))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15679))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15690))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15696)), 0);
  i0 = (OOC_INT32)oo2c__GetModule((void*)(_check_pointer(i1, 15696)), i0);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15574))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 15582))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15760))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 15771))+4);
  i1 = 0!=i1;
  
l18:
  if (!i1) goto l30;
  i0=0;
l21_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15798))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15809));
  i1 = _check_pointer(i1, 15815);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 15815))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15827)))), &_td_OOC_Package__ExecutableDesc, 15827);
  exec = (OOC_Package__Executable)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15876));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15887))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15876));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15887))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15893)), 0);
  i0 = (OOC_INT32)oo2c__GetModule((void*)(_check_pointer(i1, 15893)), i0);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15760))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 15771))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16910))+8);
  i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16925)))), &_td_Config_Value_Boolean__ValueDesc, 16925)), 16931));
  if (!i1) goto l3;
  i1 = (OOC_INT32)StdChannels__stderr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16958)))), OOC_Make__RulesDesc_SetErrOut)),OOC_Make__RulesDesc_SetErrOut)((OOC_Make__Rules)i0, (Channel__Channel)i1);
l3:
  i0 = (OOC_INT32)oo2c__command;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17016))+8);
  i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17031)))), &_td_Config_Value_Integer__ValueDesc, 17031)), 17037));
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
    _failed_case(i0, 17004);
    goto l14;
  }
l14:
  i0 = (OOC_INT32)oo2c__errorStyle;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17379))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17398)))), &_td_Config_Value_String__ValueDesc, 17398)), 17404));
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 17411)),(const void*)"file:line:column"))==0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17505))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17524)))), &_td_Config_Value_String__ValueDesc, 17524)), 17530));
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 17537)),(const void*)"char-pos"))==0;
  if (!i0) goto l21;
  OOC_Error__style = 1;
  goto l21;
l20:
  OOC_Error__style = 0;
l21:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 17623));
  i1 = i1!=0;
  if (!i1) goto l24;
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17658)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
l24:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17711)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  i0 = !i0;
  if (i0) goto l107;
  i0 = (OOC_INT32)oo2c__showVersion;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17760))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17775)))), &_td_Config_Value_Boolean__ValueDesc, 17775)), 17781));
  if (i0) goto l105;
  i0 = (OOC_INT32)oo2c__showHelp;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17916))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17931)))), &_td_Config_Value_Boolean__ValueDesc, 17931)), 17937));
  if (i0) goto l103;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = oo2c__mode;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18019)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i0);
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
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18425)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i0);
  i0 = 0!=i0;
  
l42:
  if (!i0) goto l88;
l44_loop:
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = oo2c__i;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18474)))), Config_Section_Arguments__SectionDesc_Get)),Config_Section_Arguments__SectionDesc_Get)((Config_Section_Arguments__Section)i0, i1);
  oo2c__arg = (Config_Value__StringPtr)i0;
  i1 = oo2c__mode;
  switch (i1) {
  case -1:
  case -2:
    oo2c__doInstall = (i1==-2);
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18633)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 18633)), i1, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = i0==(OOC_INT32)0;
    if (i0) goto l55;
    i0 = oo2c__doInstall;
    if (!i0) goto l54;
    i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18907))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18926)))), &_td_Config_Value_String__ValueDesc, 18926)), 18932));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18907))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18926)))), &_td_Config_Value_String__ValueDesc, 18926)), 18932));
    i2 = (OOC_INT32)oo2c__arg;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18945)), 0);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18939)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i1, 18939)), i0, (void*)(_check_pointer(i2, 18945)), i3, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkgInfo = (OOC_Package__Package)i0;
    i1 = (OOC_INT32)oo2c__errList;
    i1 = *(OOC_INT32*)(_check_pointer(i1, 18983));
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
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18757)), 0);
    Err__String((void*)(_check_pointer(i0, 18757)), i1);
    Err__Ln();
    _halt(1);
    goto l79;
  case -3:
    i1 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19289))+8);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19308)))), &_td_Config_Value_String__ValueDesc, 19308)), 19314));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19289))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19308)))), &_td_Config_Value_String__ValueDesc, 19308)), 19314));
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19327)), 0);
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19321)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i2, 19321)), i1, (void*)(_check_pointer(i0, 19327)), i3, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = (OOC_INT32)oo2c__errList;
    i1 = *(OOC_INT32*)(_check_pointer(i0, 19361));
    i1 = i1!=0;
    if (!i1) goto l60;
    i1 = (OOC_INT32)StdChannels__stdout;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19400)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
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
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19558)), 0);
    Err__String((void*)(_check_pointer(i0, 19558)), i1);
    Err__Ln();
    _halt(1);
    goto l79;
  case -5:
    i1 = (OOC_INT32)OOC_Config__options;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19776)), 0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19768)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i1, (void*)(_check_pointer(i0, 19776)), i2);
    oo2c__option = (Config_Section_Options__Option)i0;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l68;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19891))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19910)))), &_td_Config_Value_String__ValueDesc, 19910)), 19916));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19891))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19910)))), &_td_Config_Value_String__ValueDesc, 19910)), 19916));
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19923)), 0);
    Out__String((void*)(_check_pointer(i1, 19923)), i0);
    goto l69;
l68:
    Out__String("(none)", 7);
l69:
    Out__Ln();
    goto l79;
  case -6:
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20037)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 20037)), i1, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l73;
    i0 = oo2c__BuildPackageDoc((OOC_Package__Package)i0);
    oo2c__ok = i0;
    goto l79;
l73:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20161)), 0);
    Err__String((void*)(_check_pointer(i0, 20161)), i1);
    Err__Ln();
    _halt(1);
    goto l79;
  default:
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20333)), 0);
    i0 = (OOC_INT32)oo2c__GetModule((void*)(_check_pointer(i0, 20333)), i1);
    i1 = oo2c__mode;
    i1 = i1==11;
    oo2c__module = (OOC_Repository__Module)i0;
    if (!i1) goto l78;
    i1 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20402)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
l78:
    i0 = (OOC_INT32)oo2c__makeRules;
    i1 = (OOC_INT32)oo2c__module;
    i2 = oo2c__mode;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20472)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, i2);
    oo2c__ok = i0;
    i0 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20514)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i0, (OOC_Repository__Module)(OOC_INT32)0);
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
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18425)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20678))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20697)))), &_td_Config_Value_String__ValueDesc, 20697)), 20703));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20678))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20697)))), &_td_Config_Value_String__ValueDesc, 20697)), 20703));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20710)), 0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i1, 20710)), i0);
  oo2c__ok = i0;
  goto l97;
l96:
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18186))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18205)))), &_td_Config_Value_String__ValueDesc, 18205)), 18211));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18186))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18205)))), &_td_Config_Value_String__ValueDesc, 18205)), 18211));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18218)), 0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i1, 18218)), i0);
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
  Out__String("2.0.0", 6);
  Out__Ln();
  _halt(0);
  goto l108;
l107:
  _halt(1);
l108:
  return;
  ;
}

/* --- */
