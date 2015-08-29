#include <oo2c.d>
#include <__oo2c.h>
#include <setjmp.h>

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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4551)))), &_td_Object__String8Desc, 4551)), 4559)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4551)))), &_td_Object__String8Desc, 4551)));
  chars = (Object__CharsLatin1)i0;
  i1 = (OOC_INT32)OOC_Config__repositories;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4619)), (OOC_INT32)0);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4603)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i1, (void*)(_check_pointer(i0, 4619)), i2);
  i2 = i1==(OOC_INT32)0;
  m = (OOC_Repository__Module)i1;
  if (!i2) goto l4;
  Err__String("Error: Cannot locate module ", 29);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4719)), (OOC_INT32)0);
  Err__String((void*)(_check_pointer(i0, 4719)), i2);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6413))+20);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6421)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l18;
      i3 = (OOC_INT32)module;
      i4=0;
l3_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6451))+20);
      i5 = _check_pointer(i5, 6459);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6459))*4);
      m = (OOC_Repository__Module)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6494));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6478));
      i6 = i7==i6;
      if (!i6) goto l12;
      if ((!i0)) goto l7;
      i6=OOC_FALSE;
      goto l9;
l7:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6540))+12);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6540))+12);
      i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6547)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i7);
      i6 = !i6;
      
l9:
      if (!i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6581));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6581));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6588)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 7, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6646))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6646))+24);
      i8 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((Object__String)i8, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6654)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
l11:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6746));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6746));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6753)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 1, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6809))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 6809))+24);
      i8 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((Object__String)i8, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6817)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6883));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 6883));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6890)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 13, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6947))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6947))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6955)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i5, (OOC_Package__FileData)i7);
l12:
      i4 = i4+1;
      i5 = i4<=i2;
      i = i4;
      if (i5) goto l3_loop;
l18:
      if ((!i0)) goto l24;
      i1 = (OOC_INT32)OOC_Config_CCompiler__libdir;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7134))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7153)))), &_td_Config_Value_String__ValueDesc, 7153)), 7159));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7134))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7153)))), &_td_Config_Value_String__ValueDesc, 7153)), 7159));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7166)), (OOC_INT32)0);
      i1 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i2, 7166)), i1);
      if (i1) goto l22;
      return OOC_FALSE;
      goto l25;
l22:
      i1 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7195)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 19, OOC_TRUE);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i1, OOC_TRUE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i1 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i1==0);
      goto l25;
l24:
      return OOC_TRUE;
l25:
      _failed_function(5589); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallExecutable(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7681))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7700)))), &_td_Config_Value_String__ValueDesc, 7700)), 7706));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7681))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7700)))), &_td_Config_Value_String__ValueDesc, 7700)), 7706));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7713)), (OOC_INT32)0);
      i0 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i1, 7713)), i0);
      if (i0) goto l3;
      return OOC_FALSE;
      goto l4;
l3:
      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7742)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 18, OOC_TRUE);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i0, OOC_FALSE, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i0==0);
l4:
      _failed_function(7448); return 0;
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8453))+8);
          sa = (Object__String)i0;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8471))+8);
          sb = (Object__String)i1;
          i = 0;
          i2 = *(OOC_INT32*)(_check_pointer(i0, 8519));
          i2 = 0!=i2;
          if (i2) goto l3;
          i2=OOC_FALSE;
          goto l5;
l3:
          i2 = *(OOC_INT32*)(_check_pointer(i1, 8537));
          i2 = 0!=i2;
          
l5:
          if (i2) goto l7;
          i2=OOC_FALSE;
          goto l9;
l7:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8565)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8580)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
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
          i3 = *(OOC_INT32*)(_check_pointer(i0, 8519));
          i3 = i2!=i3;
          if (i3) goto l15;
          i3=OOC_FALSE;
          goto l17;
l15:
          i3 = *(OOC_INT32*)(_check_pointer(i1, 8537));
          i3 = i2!=i3;
          
l17:
          if (i3) goto l19;
          i3=OOC_FALSE;
          goto l21;
l19:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8565)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i2);
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8580)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i2);
          i3 = i3==i4;
          
l21:
          if (i3) goto l12_loop;
l25:
          i3 = i2!=0;
          if (i3) goto l28;
          i3=OOC_FALSE;
          goto l30;
l28:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8653)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i2-1));
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
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8653)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i2-1));
          i3 = i3!=(OOC_CHAR8)'/';
          
l38:
          if (i3) goto l33_loop;
l42:
          i3 = i2==0;
          if (i3) goto l49;
          i3 = i2-1;
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8753)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
          i4 = i4==(OOC_CHAR8)'/';
          if (i4) goto l47;
          i3=OOC_FALSE;
          goto l51;
l47:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8790)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i3);
          i3 = i3==(OOC_CHAR8)'/';
          
          goto l51;
l49:
          i3=OOC_TRUE;
l51:
          if (!i3) goto l90;
          j = i2;
          i3 = *(OOC_INT32*)(_check_pointer(i0, 8990));
          i3 = i2!=i3;
          if (i3) goto l55;
          i3=OOC_FALSE;
          goto l57;
l55:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9004)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i2);
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
          i4 = *(OOC_INT32*)(_check_pointer(i0, 8990));
          i4 = i3!=i4;
          if (i4) goto l63;
          i4=OOC_FALSE;
          goto l65;
l63:
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9004)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
          i4 = i4!=(OOC_CHAR8)'/';
          
l65:
          if (i4) goto l60_loop;
l69:
          i0 = *(OOC_INT32*)(_check_pointer(i0, 9081));
          i0 = i3==i0;
          if (!i0) goto l90;
          j = i2;
          i0 = *(OOC_INT32*)(_check_pointer(i1, 9140));
          i0 = i2!=i0;
          if (i0) goto l74;
          i0=OOC_FALSE;
          goto l76;
l74:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9154)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i2);
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
          i2 = *(OOC_INT32*)(_check_pointer(i1, 9140));
          i2 = i0!=i2;
          if (i2) goto l82;
          i2=OOC_FALSE;
          goto l84;
l82:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9154)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
          i2 = i2!=(OOC_CHAR8)'/';
          
l84:
          if (i2) goto l79_loop;
l88:
          i1 = *(OOC_INT32*)(_check_pointer(i1, 9241));
          return (i0==i1);
l90:
          return OOC_FALSE;
          ;
        }


      i0 = (OOC_INT32)rep;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9372)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 9372)), 9383))+12);
      baseURI = (URI__URI)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9420)))), &_td_URI_Scheme_File__URIDesc, 9420)), 9424)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9420)))), &_td_URI_Scheme_File__URIDesc, 9420)), (void*)(OOC_INT32)sourcePrefix, 1024);
      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l55;
      i0 = (OOC_INT32)_c0;
      i1 = (OOC_INT32)_c1;
l3_loop:
      i2 = (OOC_INT32)list;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9502));
      end = (OOC_Package__FileData)i3;
      i4 = i3!=(OOC_INT32)0;
      if (i4) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9586)))), &_td_OOC_Package__FileDesc, 9586)), (OOC_Package__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9605)))), &_td_OOC_Package__FileDesc, 9605)));
      
l8:
      if (!i2) goto l18;
l9_loop:
      i2 = (OOC_INT32)end;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9635));
      end = (OOC_Package__FileData)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l12;
      i2=OOC_FALSE;
      goto l14;
l12:
      i3 = (OOC_INT32)list;
      i2 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9586)))), &_td_OOC_Package__FileDesc, 9586)), (OOC_Package__File)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9605)))), &_td_OOC_Package__FileDesc, 9605)));
      
l14:
      if (i2) goto l9_loop;
l18:
      i2 = (OOC_INT32)list;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9739)))), &_td_OOC_Package__FileDesc, 9739)), 9744))+8);
      dir = (Object__String)i3;
      i4 = *(OOC_INT32*)(_check_pointer(i3, 9771));
      i = i4;
      i5 = i4!=0;
      if (i5) goto l21;
      i4=OOC_FALSE;
      goto l23;
l21:
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9808)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i3, (i4-1));
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
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9808)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i3, (i4-1));
      i4 = i4!=(OOC_CHAR8)'/';
      
l29:
      if (i4) goto l24_loop;
l33:
      i4 = i;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9883)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i3, 0, i4);
      string = (Object__String)i3;
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9930)))), &_td_Object__String8Desc, 9930);
      dir = (Object__String)i3;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9969)))), &_td_Object__String8Desc, 9969)), 9977)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9969)))), &_td_Object__String8Desc, 9969)));
      chars = (Object__CharsLatin1)i4;
      i5 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10037))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10056)))), &_td_Config_Value_String__ValueDesc, 10056)), 10062));
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10037))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10056)))), &_td_Config_Value_String__ValueDesc, 10056)), 10062));
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i4, 10105)), (OOC_INT32)0);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10069)), (OOC_INT32)0);
      i4 = oo2c__BuildPackage_InstallDirectory((void*)(_check_pointer(i6, 10069)), i5, (void*)(_check_pointer(i4, 10105)), i7);
      if (i4) goto l36;
      return OOC_FALSE;
      goto l50;
l36:
      i4 = (OOC_INT32)OOC_Config_CCompiler__installData;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10174))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10193)))), &_td_Config_Value_String__ValueDesc, 10193)), 10199));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10174))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10193)))), &_td_Config_Value_String__ValueDesc, 10193)), 10199));
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 10206)), (OOC_INT32)0);
      i4 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i5, 10206)), i4);
      i5 = (OOC_INT32)end;
      i2 = i2!=i5;
      cmd = (ADT_StringBuffer__StringBuffer)i4;
      if (!i2) goto l43;
l38_loop:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10257)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10286)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i4, (void*)(OOC_INT32)sourcePrefix, 1024);
      i2 = (OOC_INT32)list;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10351)))), &_td_OOC_Package__FileDesc, 10351)), 10356))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10330)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i6);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10388));
      i6 = i2!=i5;
      list = (OOC_Package__FileData)i2;
      if (i6) goto l38_loop;
l43:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10432)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i0);
      i2 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10476))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10495)))), &_td_Config_Value_String__ValueDesc, 10495)), 10501));
      i5 = (
      _cmp8((const void*)(_check_pointer(i5, 10508)),(const void*)""))!=(OOC_INT32)0;
      if (!i5) goto l46;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10566))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10585)))), &_td_Config_Value_String__ValueDesc, 10585)), 10591));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10566))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10585)))), &_td_Config_Value_String__ValueDesc, 10585)), 10591));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10598)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10536)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i4, (void*)(_check_pointer(i5, 10598)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10617)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i1);
l46:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10659)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i4, (Object__Object)i3);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10699)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i4);
      charsCmd = (ADT_StringBuffer__CharsLatin1)i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10753)), (OOC_INT32)0);
      OOC_Logger__ShellCommand((void*)(_check_pointer(i2, 10753)), i3);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10804)), (OOC_INT32)0);
      i2 = OS_ProcessManagement__system((void*)(_check_pointer(i2, 10804)), i3);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11305))+20);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11313)), (OOC_INT32)0);
      i1 = 0!=i1;
      if (i1) goto l6;
      i0=OOC_TRUE;
      goto l24;
l6:
      i1 = install;
      i2 = (OOC_INT32)module;
      i3=0;i4=OOC_TRUE;
l7_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11344))+20);
      i5 = _check_pointer(i5, 11352);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 11352))*4);
      m = (OOC_Repository__Module)i5;
      if (i1) goto l10;
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11786)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i5, 5);
      ok = i4;
      
      goto l14;
l10:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11416));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 11400));
      i6 = i7==i6;
      if (!i6) goto l14;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 11445));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 11445));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11452)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 4, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11516))+24);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11516))+24);
      i8 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i8 = (OOC_INT32)OOC_Package__NewFile((Object__String)i8, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 11524)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i6, (OOC_Package__FileData)i8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 11594));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 11594));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11601)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 5, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11664))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11664))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)(OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11672)))), OOC_Package__FileSetDesc_Append)),OOC_Package__FileSetDesc_Append)((OOC_Package__FileSet)i5, (OOC_Package__FileData)i7);
l14:
      i3 = i3+1;
      i = i3;
      if (i4) goto l17;
      i5=OOC_FALSE;
      goto l19;
l17:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11305))+20);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 11313)), (OOC_INT32)0);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12024))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12032))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=OOC_TRUE;
  goto l37;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12058))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12066));
  i1 = _check_pointer(i1, 12072);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 12072))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12084)))), &_td_OOC_Package__LibraryDesc, 12084);
  lib = (OOC_Package__Library)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12124))+4);
  i1 = (OOC_INT32)oo2c__GetModule((Object__String)i1);
  module = (OOC_Repository__Module)i1;
  i2 = installObjects;
  if (i2) goto l15;
  i2 = (OOC_INT32)oo2c__makeRules;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12395))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12335));
  i3 = (OOC_INT32)Object__NewLatin1((void*)((_check_pointer(i3, 12403))+12), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12316)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i2, (Object__String)i0, (Object__String)i3);
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12436)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 19);
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
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12190)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 18);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12708)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i1, (Object__String)(OOC_INT32)0, (Object__String)(OOC_INT32)0);
  i1 = i;
  i1 = i1+1;
  i = i1;
  if (i0) goto l31;
  i2=OOC_FALSE;
  goto l33;
l31:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12024))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12032))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12794))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 12805))+4);
  i1 = 0!=i1;
  
l42:
  if (!i1) goto l63;
  i0=0;
l45_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12832))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12843));
  i1 = _check_pointer(i1, 12849);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 12849))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12861)))), &_td_OOC_Package__ExecutableDesc, 12861);
  exec = (OOC_Package__Executable)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12904));
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  module = (OOC_Repository__Module)i0;
  i1 = (OOC_INT32)oo2c__makeRules;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12939)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, 18);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12794))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12805))+4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13118))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13161))+12);
  i0 = oo2c__BuildPackage_InstallFiles((OOC_Package__FileData)i0);
  ok = i0;
  
l71:
  if (i0) goto l73;
  i1=OOC_FALSE;
  goto l75;
l73:
  i1 = install;
  
l75:
  if (!i1) goto l77;
  i1 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13279))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13298)))), &_td_Config_Value_String__ValueDesc, 13298)), 13304));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13279))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13298)))), &_td_Config_Value_String__ValueDesc, 13298)), 13304));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13311)), (OOC_INT32)0);
  i3 = (OOC_INT32)pkg;
  OOC_Package__WritePackage((OOC_Package__Package)i3, (void*)(_check_pointer(i2, 13311)), i1);
l77:
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13681))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13700)))), &_td_Config_Value_String__ValueDesc, 13700)), 13706));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13681))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13700)))), &_td_Config_Value_String__ValueDesc, 13700)), 13706));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13713)), (OOC_INT32)0);
      i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i1, 13713)), i0);
      b = (ADT_StringBuffer__StringBuffer)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13724)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c2));
      i1 = (OOC_INT32)library;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13763));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13748)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13778)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c3));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13831)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14184))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14203)))), &_td_Config_Value_String__ValueDesc, 14203)), 14209));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14184))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14203)))), &_td_Config_Value_String__ValueDesc, 14203)), 14209));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14216)), (OOC_INT32)0);
      i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i1, 14216)), i0);
      b = (ADT_StringBuffer__StringBuffer)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14227)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c4));
      i1 = (OOC_INT32)executable;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14266));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14248)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14317)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14699))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14718)))), &_td_Config_Value_String__ValueDesc, 14718)), 14724));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14699))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14718)))), &_td_Config_Value_String__ValueDesc, 14718)), 14724));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14731)), (OOC_INT32)0);
      i2 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i3, 14731)), i2);
      b = (ADT_StringBuffer__StringBuffer)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14744)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i0);
      i3 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14797))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14816)))), &_td_Config_Value_String__ValueDesc, 14816)), 14822));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14797))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14816)))), &_td_Config_Value_String__ValueDesc, 14816)), 14822));
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14829)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14767)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i4, 14829)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14842)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i1);
      i3 = (OOC_INT32)list;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14886)))), &_td_OOC_Package__FileDesc, 14886)), 14891))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14865)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i4);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14920)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i2);
      cmd = (ADT_StringBuffer__CharsLatin1)i2;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 14967)), (OOC_INT32)0);
      OOC_Logger__ShellCommand((void*)(_check_pointer(i2, 14967)), i4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15014)), (OOC_INT32)0);
      i2 = OS_ProcessManagement__system((void*)(_check_pointer(i2, 15014)), i4);
      ok = (i2==0);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 15043));
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15287))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15306)))), &_td_Config_Value_String__ValueDesc, 15306)), 15312));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15287))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15306)))), &_td_Config_Value_String__ValueDesc, 15306)), 15312));
      i2 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15352))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15371)))), &_td_Config_Value_String__ValueDesc, 15371)), 15377));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15352))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15371)))), &_td_Config_Value_String__ValueDesc, 15371)), 15377));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15319)), (OOC_INT32)0);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15384)), (OOC_INT32)0);
      i4 = (OOC_INT32)pkg;
      OOC_Package__RemovePkgInfoCmd((OOC_Package__Package)i4, (void*)(_check_pointer(i1, 15319)), i0, (void*)(_check_pointer(i3, 15384)), i2, (void*)(OOC_INT32)cmd, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)cmd, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)cmd, 4096);
      return;
      ;
    }


  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15556))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 15564))+4);
  i0 = 0!=i0;
  if (!i0) goto l8;
  i0=0;
l3_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15600))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15608));
  i1 = _check_pointer(i1, 15614);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 15614))*4);
  oo2c__UninstallPackage_UninstallLibrary((OOC_Package__Library)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15626)))), &_td_OOC_Package__LibraryDesc, 15626)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15556))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 15564))+4);
  i1 = i0!=i1;
  if (i1) goto l3_loop;
l8:
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15691))+20);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 15702))+4);
  i0 = 0!=i0;
  if (!i0) goto l16;
  i0=0;
l11_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15741))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15752));
  i1 = _check_pointer(i1, 15758);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 15758))*4);
  oo2c__UninstallPackage_UninstallExecutable((OOC_Package__Executable)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15770)))), &_td_OOC_Package__ExecutableDesc, 15770)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15691))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 15702))+4);
  i1 = i0!=i1;
  if (i1) goto l11_loop;
l16:
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15848))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15885))+12);
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16291)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
      ok = i0;
      i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)(OOC_INT32)0);
      list = (OOC_Make__ModuleList)i2;
      i = 0;
      if (i0) goto l3;
      i3=OOC_FALSE;
      goto l5;
l3:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16426)), (OOC_INT32)0);
      i3 = 0!=i3;
      
l5:
      if (!i3) goto l21;
      i3=i0;i0=0;
l8_loop:
      i4 = _check_pointer(i2, 16449);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 16449))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16468));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 16452));
      i4 = i4==i5;
      if (!i4) goto l12;
      i3 = (OOC_INT32)oo2c__makeRules;
      i4 = _check_pointer(i2, 16519);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 16519))*4);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16507)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i3, (OOC_Repository__Module)i4, 5);
      ok = i3;
      
l12:
      i0 = i0+1;
      i = i0;
      if (i3) goto l15;
      i4=OOC_FALSE;
      goto l17;
l15:
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16426)), (OOC_INT32)0);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16686))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 16694))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=OOC_TRUE;
  goto l13;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16720))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16728));
  i1 = _check_pointer(i1, 16734);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 16734))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16746)))), &_td_OOC_Package__LibraryDesc, 16746);
  lib = (OOC_Package__Library)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16791))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16686))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16694))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16865))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 16876))+4);
  i1 = 0!=i1;
  
l18:
  if (!i1) goto l30;
  i0=0;
l21_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16903))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16914));
  i1 = _check_pointer(i1, 16920);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 16920))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16932)))), &_td_OOC_Package__ExecutableDesc, 16932);
  exec = (OOC_Package__Executable)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16981));
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16865))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16876))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18029))+8);
  i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18044)))), &_td_Config_Value_Boolean__ValueDesc, 18044)), 18050));
  if (!i1) goto l3;
  i1 = (OOC_INT32)StdChannels__stderr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18077)))), OOC_Make__RulesDesc_SetErrOut)),OOC_Make__RulesDesc_SetErrOut)((OOC_Make__Rules)i0, (Channel__Channel)i1);
l3:
  i0 = (OOC_INT32)oo2c__command;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18135))+8);
  i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18150)))), &_td_Config_Value_Integer__ValueDesc, 18150)), 18156));
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
    _failed_case(i0, 18123);
    goto l14;
  }
l14:
  i0 = (OOC_INT32)oo2c__errorStyle;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18498))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18517)))), &_td_Config_Value_String__ValueDesc, 18517)), 18523));
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 18530)),(const void*)"file:line:column"))==(OOC_INT32)0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18624))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18643)))), &_td_Config_Value_String__ValueDesc, 18643)), 18649));
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 18656)),(const void*)"char-pos"))==(OOC_INT32)0;
  if (!i0) goto l21;
  OOC_Error__style = 1;
  goto l21;
l20:
  OOC_Error__style = 0;
l21:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 18742));
  i1 = i1!=0;
  if (!i1) goto l24;
  i1 = (OOC_INT32)StdChannels__stdout;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18777)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
l24:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18830)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  i0 = !i0;
  if (i0) goto l111;
  i0 = (OOC_INT32)oo2c__showVersion;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18879))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18894)))), &_td_Config_Value_Boolean__ValueDesc, 18894)), 18900));
  if (i0) goto l109;
  i0 = (OOC_INT32)oo2c__showHelp;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19035))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19050)))), &_td_Config_Value_Boolean__ValueDesc, 19050)), 19056));
  if (i0) goto l107;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = oo2c__mode;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19138)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i0);
  i0 = (i1==-4)!=(i0==0);
  if (i0) goto l105;
  i0 = oo2c__mode;
  i0 = i0==-4;
  oo2c__ok = OOC_TRUE;
  if (i0) goto l100;
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
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19544)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i0);
  i0 = 0!=i0;
  
l42:
  if (!i0) goto l92;
l44_loop:
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = oo2c__i;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19593)))), Config_Section_Arguments__SectionDesc_Get)),Config_Section_Arguments__SectionDesc_Get)((Config_Section_Arguments__Section)i0, i1);
  oo2c__arg = (Config_Value__StringPtr)i0;
  i1 = oo2c__mode;
  switch (i1) {
  case -1:
  case -2:
    oo2c__doInstall = (i1==-2);
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19752)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 19752)), i1, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = i0==(OOC_INT32)0;
    if (i0) goto l59;
    i0 = oo2c__doInstall;
    if (!i0) goto l58;
    i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20026))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20045)))), &_td_Config_Value_String__ValueDesc, 20045)), 20051));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20026))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20045)))), &_td_Config_Value_String__ValueDesc, 20045)), 20051));
    i2 = (OOC_INT32)oo2c__arg;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20064)), (OOC_INT32)0);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20058)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i1, 20058)), i0, (void*)(_check_pointer(i2, 20064)), i3, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkgInfo = (OOC_Package__Package)i0;
    i1 = i0!=(OOC_INT32)0;
    if (i1) goto l53;
    i1=OOC_FALSE;
    goto l55;
l53:
    i1 = (OOC_INT32)oo2c__errList;
    i1 = *(OOC_INT32*)(_check_pointer(i1, 20120));
    i1 = i1==0;
    
l55:
    if (!i1) goto l58;
    oo2c__UninstallPackage((OOC_Package__Package)i0);
l58:
    i0 = (OOC_INT32)oo2c__pkg;
    i1 = (OOC_INT32)oo2c__rep;
    i2 = oo2c__doInstall;
    i0 = oo2c__BuildPackage((OOC_Package__Package)i0, (OOC_Repository__Repository)i1, i2);
    oo2c__ok = i0;
    i0 = oo2c__doInstall;
    oo2c__forceUpdateRepository = i0;
    goto l83;
l59:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19876)), (OOC_INT32)0);
    Err__String((void*)(_check_pointer(i0, 19876)), i1);
    Err__Ln();
    _halt(1);
    goto l83;
  case -3:
    i1 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20426))+8);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20445)))), &_td_Config_Value_String__ValueDesc, 20445)), 20451));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20426))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20445)))), &_td_Config_Value_String__ValueDesc, 20445)), 20451));
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20464)), (OOC_INT32)0);
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20458)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i2, 20458)), i1, (void*)(_check_pointer(i0, 20464)), i3, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = (OOC_INT32)oo2c__errList;
    i1 = *(OOC_INT32*)(_check_pointer(i0, 20498));
    i1 = i1!=0;
    if (!i1) goto l64;
    i1 = (OOC_INT32)StdChannels__stdout;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20537)))), OOC_Error__ListDesc_Write)),OOC_Error__ListDesc_Write)((OOC_Error__List)i0, (Channel__Channel)i1);
l64:
    i0 = (OOC_INT32)oo2c__pkg;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l67;
    oo2c__UninstallPackage((OOC_Package__Package)i0);
    oo2c__forceUpdateRepository = OOC_TRUE;
    goto l83;
l67:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20695)), (OOC_INT32)0);
    Err__String((void*)(_check_pointer(i0, 20695)), i1);
    Err__Ln();
    _halt(1);
    goto l83;
  case -5:
    i1 = (OOC_INT32)OOC_Config__options;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20913)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20905)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i1, (void*)(_check_pointer(i0, 20913)), i2);
    oo2c__option = (Config_Section_Options__Option)i0;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l72;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21028))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21047)))), &_td_Config_Value_String__ValueDesc, 21047)), 21053));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21028))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21047)))), &_td_Config_Value_String__ValueDesc, 21047)), 21053));
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21060)), (OOC_INT32)0);
    Out__String((void*)(_check_pointer(i1, 21060)), i0);
    goto l73;
l72:
    Out__String("(none)", 7);
l73:
    Out__Ln();
    goto l83;
  case -6:
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21174)), (OOC_INT32)0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 21174)), i1, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i1 = i0==(OOC_INT32)0;
    if (i1) goto l77;
    i0 = oo2c__BuildPackageDoc((OOC_Package__Package)i0);
    oo2c__ok = i0;
    goto l83;
l77:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21298)), (OOC_INT32)0);
    Err__String((void*)(_check_pointer(i0, 21298)), i1);
    Err__Ln();
    _halt(1);
    goto l83;
  default:
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21487)), (OOC_INT32)0);
    i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i0, 21487)), i1);
    i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
    i1 = oo2c__mode;
    i1 = i1==11;
    oo2c__module = (OOC_Repository__Module)i0;
    if (!i1) goto l82;
    i1 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21557)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0);
l82:
    i0 = (OOC_INT32)oo2c__makeRules;
    i1 = (OOC_INT32)oo2c__module;
    i2 = oo2c__mode;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21627)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, i2);
    oo2c__ok = i0;
    i0 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21669)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i0, (OOC_Repository__Module)(OOC_INT32)0);
    goto l83;
  }
l83:
  i0 = oo2c__i;
  i0 = i0+1;
  oo2c__i = i0;
  i1 = oo2c__ok;
  if (i1) goto l86;
  i0=OOC_FALSE;
  goto l88;
l86:
  i1 = (OOC_INT32)OOC_Config__arguments;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19544)))), Config_Section_Arguments__SectionDesc_ArgNumber)),Config_Section_Arguments__SectionDesc_ArgNumber)((Config_Section_Arguments__Section)i1);
  i0 = i0!=i1;
  
l88:
  if (i0) goto l44_loop;
l92:
  i0 = oo2c__ok;
  if (i0) goto l95;
  i0=OOC_FALSE;
  goto l97;
l95:
  i0 = oo2c__forceUpdateRepository;
  
l97:
  if (!i0) goto l101;
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21833))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21852)))), &_td_Config_Value_String__ValueDesc, 21852)), 21858));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21833))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21852)))), &_td_Config_Value_String__ValueDesc, 21852)), 21858));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21865)), (OOC_INT32)0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i1, 21865)), i0);
  oo2c__ok = i0;
  goto l101;
l100:
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19305))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19324)))), &_td_Config_Value_String__ValueDesc, 19324)), 19330));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19305))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19324)))), &_td_Config_Value_String__ValueDesc, 19324)), 19330));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19337)), (OOC_INT32)0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i1, 19337)), i0);
  oo2c__ok = i0;
l101:
  i0 = oo2c__ok;
  i0 = !i0;
  if (!i0) goto l112;
  _halt(1);
  goto l112;
l105:
  oo2c__WriteHelp();
  _halt(1);
  goto l112;
l107:
  oo2c__WriteHelp();
  goto l112;
l109:
  Out__String("oo2c/gcc ", 10);
  Out__String("2.0.5", 6);
  Out__Ln();
  _halt((OOC_INT32)0);
  goto l112;
l111:
  _halt(1);
l112:
  return;
  ;
}

/* --- */
