#include <oo2c.d>
#include <__oo2c.h>
#include <setjmp.h>

static void oo2c__NewConfig(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Config_Value_Integer__New(0);
  i0 = (OOC_INT32)OOC_Config__AddOption("command", 8, (Config_Value__Value)i0);
  oo2c__command = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption("forceUpdate", 12, (Config_Value__Value)i0);
  oo2c__forceUpdate = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("", 1);
  i0 = (OOC_INT32)OOC_Config__AddOption("listUses", 9, (Config_Value__Value)i0);
  oo2c__listUses = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption("useStderr", 10, (Config_Value__Value)i0);
  oo2c__useStderr = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption("writeStats", 11, (Config_Value__Value)i0);
  oo2c__writeStats = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_String__New("file:line:column", 17);
  i0 = (OOC_INT32)OOC_Config__AddOption("errorStyle", 11, (Config_Value__Value)i0);
  oo2c__errorStyle = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption("showHelp", 9, (Config_Value__Value)i0);
  oo2c__showHelp = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config_Value_Boolean__New(0u);
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
  OOC_Config__AddCmdLine("-A,--all", 9, "<options><set name=\047forceUpdate\047>TRUE</set></options>", 54);
  OOC_Config__AddCmdLine("--uses", 7, "<options>  <set name=\047listUses\047>$1</set>  <set name=\047command\047>1</set></options>", 80);
  OOC_Config__AddCmdLine("--error-style", 14, "<options><set name=\047errorStyle\047>$1</set></options>", 51);
  OOC_Config__AddCmdLine("--use-stderr", 13, "<options><set name=\047useStderr\047>TRUE</set></options>", 52);
  OOC_Config__AddCmdLine("--stats", 8, "<options><set name=\047writeStats\047>TRUE</set></options>", 53);
  OOC_Config_CCompiler__RegisterConfig();
  return;
  ;
}

static OOC_Repository__Module oo2c__GetModule(Object__String moduleName) {
  register OOC_INT32 i0,i1,i2;
  Object__CharsLatin1 chars;
  OOC_Repository__Module m;

  i0 = (OOC_INT32)moduleName;
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5273)))), &_td_Object__String8Desc, 5273)));
  chars = (Object__CharsLatin1)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5341)), 0);
  i2 = (OOC_INT32)OOC_Config__repositories;
  i1 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i0, 5341)), i1);
  m = (OOC_Repository__Module)i1;
  i2 = i1==(OOC_INT32)0;
  if (!i2) goto l4;
  Err__String("Error: Cannot locate module ", 29);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5441)), 0);
  Err__String((void*)(_check_pointer(i0, 5441)), i2);
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
      _cmp8((const void*)(OOC_INT32)prefix,(const void*)""))==0;
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
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_CHAR8 installObjects;
      OOC_INT32 i;
      OOC_Repository__Module m;
      OOC_Repository__URIBuffer path;
      OOC_Make__ShellCommand str;

      i0 = OOC_Config_CCompiler__HaveLibtool();
      installObjects = (!i0);
      i1 = (OOC_INT32)makeRules;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7135))+20);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7143)), 0);
      i3 = 0<i2;
      if (!i3) goto l18;
      i3 = (OOC_INT32)module;
      i4=0;
l3_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7173))+20);
      i5 = _check_pointer(i5, 7181);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 7181))*4);
      m = (OOC_Repository__Module)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7216));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7200));
      i6 = i7==i6;
      if (!i6) goto l12;
      if ((!i0)) goto l7;
      i6=0u;
      goto l9;
l7:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7262))+12);
      i6 = OOC_SymbolTable__ModuleDesc_NoObjectFile((OOC_SymbolTable__Module)i6);
      i6 = !i6;
      
l9:
      if (!i6) goto l11;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7303));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7303));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7310)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 7, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7368))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)0);
      OOC_Package__FileSetDesc_Append((OOC_Package__FileSet)i6, (OOC_Package__FileData)i7);
l11:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7468));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7468));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7475)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 1, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7531))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)0);
      OOC_Package__FileSetDesc_Append((OOC_Package__FileSet)i6, (OOC_Package__FileData)i7);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7605));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7605));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7612)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 13, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7669))+24);
      i6 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)OOC_Package__NewFile((Object__String)i6, (Object__String)0);
      OOC_Package__FileSetDesc_Append((OOC_Package__FileSet)i5, (OOC_Package__FileData)i6);
l12:
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l3_loop;
l18:
      if ((!i0)) goto l24;
      i1 = (OOC_INT32)OOC_Config_CCompiler__libdir;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7856))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7875)))), &_td_Config_Value_String__ValueDesc, 7875)), 7881));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7856))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7875)))), &_td_Config_Value_String__ValueDesc, 7875)), 7881));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7888)), 0);
      i1 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i2, 7888)), i1);
      if (i1) goto l22;
      return 0u;
      goto l25;
l22:
      i1 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7917)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i1, 19, 1u);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i1, 1u, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i1 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i1==0);
      goto l25;
l24:
      return 1u;
l25:
      _failed_function(6311); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallExecutable(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1;
      OOC_Make__ShellCommand str;

      i0 = (OOC_INT32)OOC_Config_CCompiler__bindir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8403))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8422)))), &_td_Config_Value_String__ValueDesc, 8422)), 8428));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8403))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8422)))), &_td_Config_Value_String__ValueDesc, 8422)), 8428));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8435)), 0);
      i0 = oo2c__BuildPackage_InstallDirectory("", 1, (void*)(_check_pointer(i1, 8435)), i0);
      if (i0) goto l3;
      return 0u;
      goto l4;
l3:
      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8464)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 18, 1u);
      OOC_Config_CCompiler__InstallProgramCmd((URI__URI)i0, 0u, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return (i0==0);
l4:
      _failed_function(8170); return 0;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_InstallFiles(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9175))+8);
          sa = (Object__String)i0;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9193))+8);
          sb = (Object__String)i1;
          i = 0;
          i2 = *(OOC_INT32*)(_check_pointer(i0, 9241));
          i2 = 0!=i2;
          if (i2) goto l3;
          i2=0u;
          goto l5;
l3:
          i2 = *(OOC_INT32*)(_check_pointer(i1, 9259));
          i2 = 0!=i2;
          
l5:
          if (i2) goto l7;
          i2=0u;
          goto l9;
l7:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9287)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9302)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
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
          i3 = *(OOC_INT32*)(_check_pointer(i0, 9241));
          i3 = i2!=i3;
          if (i3) goto l15;
          i3=0u;
          goto l17;
l15:
          i3 = *(OOC_INT32*)(_check_pointer(i1, 9259));
          i3 = i2!=i3;
          
l17:
          if (i3) goto l19;
          i3=0u;
          goto l21;
l19:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9287)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i2);
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9302)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i2);
          i3 = i3==i4;
          
l21:
          if (i3) goto l12_loop;
l25:
          i3 = i2!=0;
          if (i3) goto l28;
          i3=0u;
          goto l30;
l28:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9375)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i2-1));
          i3 = i3!=47u;
          
l30:
          if (!i3) goto l42;
l33_loop:
          i2 = i2-1;
          i = i2;
          i3 = i2!=0;
          if (i3) goto l36;
          i3=0u;
          goto l38;
l36:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9375)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i2-1));
          i3 = i3!=47u;
          
l38:
          if (i3) goto l33_loop;
l42:
          i3 = i2==0;
          if (i3) goto l49;
          i3 = i2-1;
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9475)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
          i4 = i4==47u;
          if (i4) goto l47;
          i3=0u;
          goto l51;
l47:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9512)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i3);
          i3 = i3==47u;
          
          goto l51;
l49:
          i3=1u;
l51:
          if (!i3) goto l90;
          j = i2;
          i3 = *(OOC_INT32*)(_check_pointer(i0, 9712));
          i3 = i2!=i3;
          if (i3) goto l55;
          i3=0u;
          goto l57;
l55:
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9726)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i2);
          i3 = i3!=47u;
          
l57:
          if (i3) goto l59;
          i3=i2;
          goto l69;
l59:
          i3=i2;
l60_loop:
          i3 = i3+1;
          j = i3;
          i4 = *(OOC_INT32*)(_check_pointer(i0, 9712));
          i4 = i3!=i4;
          if (i4) goto l63;
          i4=0u;
          goto l65;
l63:
          i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9726)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
          i4 = i4!=47u;
          
l65:
          if (i4) goto l60_loop;
l69:
          i0 = *(OOC_INT32*)(_check_pointer(i0, 9803));
          i0 = i3==i0;
          if (!i0) goto l90;
          j = i2;
          i0 = *(OOC_INT32*)(_check_pointer(i1, 9862));
          i0 = i2!=i0;
          if (i0) goto l74;
          i0=0u;
          goto l76;
l74:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9876)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i2);
          i0 = i0!=47u;
          
l76:
          if (i0) goto l78;
          i0=i2;
          goto l88;
l78:
          i0=i2;
l79_loop:
          i0 = i0+1;
          j = i0;
          i2 = *(OOC_INT32*)(_check_pointer(i1, 9862));
          i2 = i0!=i2;
          if (i2) goto l82;
          i2=0u;
          goto l84;
l82:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9876)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
          i2 = i2!=47u;
          
l84:
          if (i2) goto l79_loop;
l88:
          i1 = *(OOC_INT32*)(_check_pointer(i1, 9963));
          return (i0==i1);
l90:
          return 0u;
          ;
        }


      i0 = (OOC_INT32)rep;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10094)))), &_td_OOC_Repository_FileSystem__RepositoryDesc, 10094)), 10105))+12);
      baseURI = (URI__URI)i0;
      URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10142)))), &_td_URI_Scheme_File__URIDesc, 10142)), (void*)(OOC_INT32)sourcePrefix, 1024);
      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l55;
      i0 = (OOC_INT32)_c0;
      i1 = (OOC_INT32)_c1;
      i2 = (OOC_INT32)_c2;
l3_loop:
      i3 = (OOC_INT32)list;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10224));
      end = (OOC_Package__FileData)i4;
      i5 = i4!=(OOC_INT32)0;
      if (i5) goto l6;
      i3=0u;
      goto l8;
l6:
      i3 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10308)))), &_td_OOC_Package__FileDesc, 10308)), (OOC_Package__File)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10327)))), &_td_OOC_Package__FileDesc, 10327)));
      
l8:
      if (!i3) goto l18;
l9_loop:
      i3 = (OOC_INT32)end;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10357));
      end = (OOC_Package__FileData)i3;
      i4 = i3!=(OOC_INT32)0;
      if (i4) goto l12;
      i3=0u;
      goto l14;
l12:
      i4 = (OOC_INT32)list;
      i3 = oo2c__BuildPackage_InstallFiles_SameDirectory((OOC_Package__File)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10308)))), &_td_OOC_Package__FileDesc, 10308)), (OOC_Package__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10327)))), &_td_OOC_Package__FileDesc, 10327)));
      
l14:
      if (i3) goto l9_loop;
l18:
      i3 = (OOC_INT32)list;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10461)))), &_td_OOC_Package__FileDesc, 10461)), 10466))+8);
      dir = (Object__String)i4;
      i5 = *(OOC_INT32*)(_check_pointer(i4, 10493));
      i = i5;
      i6 = i5!=0;
      if (i6) goto l21;
      i5=0u;
      goto l23;
l21:
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10530)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i4, (i5-1));
      i5 = i5!=47u;
      
l23:
      if (!i5) goto l33;
l24_loop:
      i5 = i;
      i5 = i5-1;
      i = i5;
      i6 = i5!=0;
      if (i6) goto l27;
      i5=0u;
      goto l29;
l27:
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10530)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i4, (i5-1));
      i5 = i5!=47u;
      
l29:
      if (i5) goto l24_loop;
l33:
      i5 = i;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10605)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i4, 0, i5);
      string = (Object__String)i4;
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10652)))), &_td_Object__String8Desc, 10652);
      dir = (Object__String)i4;
      i5 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10691)))), &_td_Object__String8Desc, 10691)));
      chars = (Object__CharsLatin1)i5;
      i6 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10759))+8);
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 10778)))), &_td_Config_Value_String__ValueDesc, 10778)), 10784));
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10759))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10778)))), &_td_Config_Value_String__ValueDesc, 10778)), 10784));
      i8 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10827)), 0);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 10791)), 0);
      i5 = oo2c__BuildPackage_InstallDirectory((void*)(_check_pointer(i7, 10791)), i6, (void*)(_check_pointer(i5, 10827)), i8);
      if (i5) goto l36;
      return 0u;
      goto l50;
l36:
      i5 = (OOC_INT32)OOC_Config_CCompiler__installData;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10896))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 10915)))), &_td_Config_Value_String__ValueDesc, 10915)), 10921));
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10896))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10915)))), &_td_Config_Value_String__ValueDesc, 10915)), 10921));
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 10928)), 0);
      i5 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i6, 10928)), i5);
      cmd = (ADT_StringBuffer__StringBuffer)i5;
      i6 = (OOC_INT32)end;
      i3 = i3!=i6;
      if (!i3) goto l43;
l38_loop:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10979)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i5, (Object__Object)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11008)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i5, (void*)(OOC_INT32)sourcePrefix, 1024);
      i3 = (OOC_INT32)list;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11073)))), &_td_OOC_Package__FileDesc, 11073)), 11078))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11052)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i5, (Object__Object)i7);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11110));
      list = (OOC_Package__FileData)i3;
      i3 = i3!=i6;
      if (i3) goto l38_loop;
l43:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11154)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i5, (Object__Object)i1);
      i3 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11198))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11217)))), &_td_Config_Value_String__ValueDesc, 11217)), 11223));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 11230)),(const void*)""))!=0;
      if (!i6) goto l46;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11288))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11307)))), &_td_Config_Value_String__ValueDesc, 11307)), 11313));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11288))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11307)))), &_td_Config_Value_String__ValueDesc, 11307)), 11313));
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11320)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11258)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i5, (void*)(_check_pointer(i6, 11320)), i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11339)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i5, (Object__Object)i2);
l46:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11381)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i5, (Object__Object)i4);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11421)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i5);
      charsCmd = (ADT_StringBuffer__CharsLatin1)i3;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11475)), 0);
      OOC_Logger__ShellCommand((void*)(_check_pointer(i3, 11475)), i4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11526)), 0);
      i3 = OS_ProcessManagement__system((void*)(_check_pointer(i3, 11526)), i4);
      i3 = i3!=0;
      if (!i3) goto l50;
      return 0u;
l50:
      i3 = (OOC_INT32)list;
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l3_loop;
l55:
      return 1u;
      ;
    }

    
    OOC_CHAR8 oo2c__BuildPackage_BuildDocs(OOC_Repository__Module module, OOC_Make__Rules makeRules, OOC_CHAR8 install) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_CHAR8 ok;
      OOC_INT32 i;
      OOC_Repository__Module m;
      OOC_Repository__URIBuffer path;

      ok = 1u;
      i0 = OOC_Config__HaveXsltProc();
      if (i0) goto l3;
      i0=1u;
      goto l24;
l3:
      i = 0;
      i0 = (OOC_INT32)makeRules;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12027))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12035)), 0);
      i0 = 0!=i0;
      if (i0) goto l6;
      i0=1u;
      goto l24;
l6:
      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)makeRules;
      i2 = install;
      i3=0;i4=1u;
l7_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12066))+20);
      i5 = _check_pointer(i5, 12074);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 12074))*4);
      m = (OOC_Repository__Module)i5;
      i3 = i3+1;
      if (i2) goto l10;
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12508)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i5, 5);
      ok = i4;
      
      goto l14;
l10:
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12138));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 12122));
      i6 = i7==i6;
      if (!i6) goto l14;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 12167));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 12167));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12174)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 4, (void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)pkg;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12238))+24);
      i7 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i7 = (OOC_INT32)OOC_Package__NewFile((Object__String)i7, (Object__String)0);
      OOC_Package__FileSetDesc_Append((OOC_Package__FileSet)i6, (OOC_Package__FileData)i7);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 12316));
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 12316));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12323)))), OOC_Repository__RepositoryDesc_GetLocalPath)),OOC_Repository__RepositoryDesc_GetLocalPath)((OOC_Repository__Repository)i7, (OOC_Repository__Module)i5, 5, (void*)(OOC_INT32)path, 1024);
      i5 = (OOC_INT32)pkg;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 12386))+24);
      i6 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)path, 1024);
      i6 = (OOC_INT32)OOC_Package__NewFile((Object__String)i6, (Object__String)0);
      OOC_Package__FileSetDesc_Append((OOC_Package__FileSet)i5, (OOC_Package__FileData)i6);
l14:
      i = i3;
      if (i4) goto l17;
      i5=0u;
      goto l19;
l17:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12027))+20);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 12035)), 0);
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
  ok = 1u;
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12746))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12754))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=1u;
  goto l37;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12780))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12788));
  i1 = _check_pointer(i1, 12794);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 12794))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12806)))), &_td_OOC_Package__LibraryDesc, 12806);
  lib = (OOC_Package__Library)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12846))+4);
  i1 = (OOC_INT32)oo2c__GetModule((Object__String)i1);
  module = (OOC_Repository__Module)i1;
  i2 = installObjects;
  if (i2) goto l15;
  i2 = (OOC_INT32)oo2c__makeRules;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13117))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13057));
  i3 = (OOC_INT32)Object__NewLatin1((void*)((_check_pointer(i3, 13125))+12), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13038)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i2, (Object__String)i0, (Object__String)i3);
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13158)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 19);
  if (i0) goto l9;
  i0=0u;
  goto l14;
l9:
  i0 = install;
  i0 = !i0;
  if (i0) goto l12;
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = oo2c__BuildPackage_InstallLibrary((OOC_Repository__Module)i1, (OOC_Make__Rules)i0);
  
  goto l14;
l12:
  i0=1u;
l14:
  ok = i0;
  
  goto l25;
l15:
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12912)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 18);
  if (i0) goto l18;
  i0=0u;
  goto l23;
l18:
  i0 = install;
  i0 = !i0;
  if (i0) goto l21;
  i0 = (OOC_INT32)oo2c__makeRules;
  i0 = oo2c__BuildPackage_InstallLibrary((OOC_Repository__Module)i1, (OOC_Make__Rules)i0);
  
  goto l23;
l21:
  i0=1u;
l23:
  ok = i0;
  
l25:
  if (!i0) goto l28;
  i0 = (OOC_INT32)oo2c__makeRules;
  i1 = install;
  i2 = (OOC_INT32)module;
  i0 = oo2c__BuildPackage_BuildDocs((OOC_Repository__Module)i2, (OOC_Make__Rules)i0, i1);
  ok = i0;
  
l28:
  i1 = (OOC_INT32)oo2c__makeRules;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13430)))), OOC_Make__RulesDesc_SetLibraryName)),OOC_Make__RulesDesc_SetLibraryName)((OOC_Make__Rules)i1, (Object__String)0, (Object__String)0);
  i1 = i;
  i1 = i1+1;
  i = i1;
  if (i0) goto l31;
  i2=0u;
  goto l33;
l31:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12746))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12754))+4);
  i2 = i1!=i2;
  
l33:
  if (!i2) goto l37;
  i0=i1;
  goto l4_loop;
l37:
  i = 0;
  if (i0) goto l40;
  i1=0u;
  goto l42;
l40:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13516))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13527))+4);
  i1 = 0!=i1;
  
l42:
  if (!i1) goto l63;
  i0=0;
l45_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13554))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13565));
  i1 = _check_pointer(i1, 13571);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 13571))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13583)))), &_td_OOC_Package__ExecutableDesc, 13583);
  exec = (OOC_Package__Executable)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13626));
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  module = (OOC_Repository__Module)i0;
  i1 = (OOC_INT32)oo2c__makeRules;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13661)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i1, (OOC_Repository__Module)i0, 18);
  if (i1) goto l48;
  i0=0u;
  goto l53;
l48:
  i1 = install;
  i1 = !i1;
  if (i1) goto l51;
  i0 = oo2c__BuildPackage_InstallExecutable((OOC_Repository__Module)i0);
  
  goto l53;
l51:
  i0=1u;
l53:
  i1 = i;
  ok = i0;
  i1 = i1+1;
  i = i1;
  if (i0) goto l56;
  i2=0u;
  goto l58;
l56:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13516))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 13527))+4);
  i2 = i1!=i2;
  
l58:
  if (!i2) goto l63;
  i0=i1;
  goto l45_loop;
l63:
  if (i0) goto l65;
  i1=0u;
  goto l67;
l65:
  i1 = install;
  
l67:
  if (!i1) goto l71;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13840))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13883))+12);
  i0 = oo2c__BuildPackage_InstallFiles((OOC_Package__FileData)i0);
  ok = i0;
  
l71:
  if (i0) goto l73;
  i1=0u;
  goto l75;
l73:
  i1 = install;
  
l75:
  if (!i1) goto l77;
  i1 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14001))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14020)))), &_td_Config_Value_String__ValueDesc, 14020)), 14026));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14001))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14020)))), &_td_Config_Value_String__ValueDesc, 14020)), 14026));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14033)), 0);
  i3 = (OOC_INT32)pkg;
  OOC_Package__WritePackage((OOC_Package__Package)i3, (void*)(_check_pointer(i2, 14033)), i1);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14403))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14422)))), &_td_Config_Value_String__ValueDesc, 14422)), 14428));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14403))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14422)))), &_td_Config_Value_String__ValueDesc, 14422)), 14428));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14435)), 0);
      i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i1, 14435)), i0);
      b = (ADT_StringBuffer__StringBuffer)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14446)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c3));
      i1 = (OOC_INT32)library;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14485));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14470)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14500)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c4));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14553)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
      OOC_Config_CCompiler__UninstallProgramCmd((Object__String)i0, 1u, (void*)(OOC_INT32)str, 4096);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14906))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14925)))), &_td_Config_Value_String__ValueDesc, 14925)), 14931));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14906))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14925)))), &_td_Config_Value_String__ValueDesc, 14925)), 14931));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14938)), 0);
      i0 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i1, 14938)), i0);
      b = (ADT_StringBuffer__StringBuffer)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14949)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c5));
      i1 = (OOC_INT32)executable;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14988));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14970)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15039)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
      OOC_Config_CCompiler__UninstallProgramCmd((Object__String)i0, 0u, (void*)(OOC_INT32)str, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)str, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 4096);
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallFiles(OOC_Package__FileData list) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      ADT_StringBuffer__StringBuffer b;
      ADT_StringBuffer__CharsLatin1 cmd;
      OOC_CHAR8 ok;

      i0 = (OOC_INT32)list;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l8;
      i1 = (OOC_INT32)_c6;
      i2 = (OOC_INT32)_c7;
      
l3_loop:
      i3 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15421))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15440)))), &_td_Config_Value_String__ValueDesc, 15440)), 15446));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15421))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15440)))), &_td_Config_Value_String__ValueDesc, 15440)), 15446));
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15453)), 0);
      i3 = (OOC_INT32)ADT_StringBuffer__NewLatin1((void*)(_check_pointer(i4, 15453)), i3);
      b = (ADT_StringBuffer__StringBuffer)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15466)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i3, (Object__Object)i1);
      i4 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15519))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15538)))), &_td_Config_Value_String__ValueDesc, 15538)), 15544));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15519))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15538)))), &_td_Config_Value_String__ValueDesc, 15538)), 15544));
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15551)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15489)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i3, (void*)(_check_pointer(i5, 15551)), i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15564)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i3, (Object__Object)i2);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15608)))), &_td_OOC_Package__FileDesc, 15608)), 15613))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15587)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i3, (Object__Object)i4);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15642)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i3);
      cmd = (ADT_StringBuffer__CharsLatin1)i3;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15689)), 0);
      OOC_Logger__ShellCommand((void*)(_check_pointer(i3, 15689)), i4);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15736)), 0);
      i3 = OS_ProcessManagement__system((void*)(_check_pointer(i3, 15736)), i4);
      ok = (i3==0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15765));
      list = (OOC_Package__FileData)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l3_loop;
l8:
      return;
      ;
    }

    
    void oo2c__UninstallPackage_UninstallPkgInfo(OOC_Package__Package pkg) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_Make__ShellCommand cmd;

      i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16009))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16028)))), &_td_Config_Value_String__ValueDesc, 16028)), 16034));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16009))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16028)))), &_td_Config_Value_String__ValueDesc, 16028)), 16034));
      i2 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16074))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16093)))), &_td_Config_Value_String__ValueDesc, 16093)), 16099));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16074))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16093)))), &_td_Config_Value_String__ValueDesc, 16093)), 16099));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16041)), 0);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16106)), 0);
      i4 = (OOC_INT32)pkg;
      OOC_Package__RemovePkgInfoCmd((OOC_Package__Package)i4, (void*)(_check_pointer(i1, 16041)), i0, (void*)(_check_pointer(i3, 16106)), i2, (void*)(OOC_INT32)cmd, 4096);
      OOC_Logger__ShellCommand((void*)(OOC_INT32)cmd, 4096);
      i0 = OS_ProcessManagement__system((void*)(OOC_INT32)cmd, 4096);
      return;
      ;
    }


  i = 0;
  i0 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16278))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 16286))+4);
  i1 = 0!=i1;
  if (!i1) goto l9;
  i1=0;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16322))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16330));
  i0 = _check_pointer(i0, 16336);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 16336))*4);
  oo2c__UninstallPackage_UninstallLibrary((OOC_Package__Library)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16348)))), &_td_OOC_Package__LibraryDesc, 16348)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16278))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16286))+4);
  i2 = i0!=i2;
  if (!i2) goto l8;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l4_loop;
l8:
  i0=i1;
l9:
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16413))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 16424))+4);
  i1 = 0!=i1;
  if (!i1) goto l18;
  i1=0;
l13_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16463))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16474));
  i0 = _check_pointer(i0, 16480);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 16480))*4);
  oo2c__UninstallPackage_UninstallExecutable((OOC_Package__Executable)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16492)))), &_td_OOC_Package__ExecutableDesc, 16492)));
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16413))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 16424))+4);
  i2 = i0!=i2;
  if (!i2) goto l17;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l13_loop;
l17:
  i0=i1;
l18:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16570))+24);
  i0 = (OOC_INT32)OOC_Package__Normalize((OOC_Package__FileSet)i0);
  normSet = (OOC_Package__FileSet)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16607))+12);
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
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_CHAR8 ok;
      OOC_Make__ModuleList list;
      OOC_INT32 i;

      i0 = (OOC_INT32)oo2c__makeRules;
      i1 = (OOC_INT32)module;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17013)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i1, 1);
      ok = i0;
      i2 = (OOC_INT32)OOC_Make__ModuleClosure((OOC_Repository__Module)i1, (Object__String)(OOC_INT32)0);
      list = (OOC_Make__ModuleList)i2;
      i = 0;
      if (i0) goto l3;
      i3=0u;
      goto l5;
l3:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17148)), 0);
      i3 = 0!=i3;
      
l5:
      if (!i3) goto l21;
      i3=i0;i0=0;
l8_loop:
      i4 = _check_pointer(i2, 17171);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 17171))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17190));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17174));
      i6 = i0+1;
      i4 = i4==i5;
      if (i4) goto l11;
      i0=i3;
      goto l12;
l11:
      i3 = (OOC_INT32)oo2c__makeRules;
      i4 = _check_pointer(i2, 17241);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 17241))*4);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17229)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i3, (OOC_Repository__Module)i0, 5);
      ok = i0;
      
l12:
      i = i6;
      if (i0) goto l15;
      i3=0u;
      goto l17;
l15:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 17148)), 0);
      i3 = i6!=i3;
      
l17:
      if (!i3) goto l21;
      i3=i0;i0=i6;
      goto l8_loop;
l21:
      return i0;
      ;
    }


  ok = 1u;
  i = 0;
  i0 = (OOC_INT32)pkg;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17408))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 17416))+4);
  i0 = 0!=i0;
  if (i0) goto l3;
  i0=1u;
  goto l13;
l3:
  i0=0;
l4_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17442))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17450));
  i1 = _check_pointer(i1, 17456);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 17456))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17468)))), &_td_OOC_Package__LibraryDesc, 17468);
  lib = (OOC_Package__Library)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17513))+4);
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  i0 = oo2c__BuildPackageDoc_BuildDocs((OOC_Repository__Module)i0);
  i1 = i;
  ok = i0;
  i1 = i1+1;
  i = i1;
  if (i0) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17408))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 17416))+4);
  i2 = i1!=i2;
  
l9:
  if (!i2) goto l13;
  i0=i1;
  goto l4_loop;
l13:
  i = 0;
  if (i0) goto l16;
  i1=0u;
  goto l18;
l16:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17587))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 17598))+4);
  i1 = 0!=i1;
  
l18:
  if (!i1) goto l30;
  i0=0;
l21_loop:
  i1 = (OOC_INT32)pkg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17625))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17636));
  i1 = _check_pointer(i1, 17642);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 17642))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17654)))), &_td_OOC_Package__ExecutableDesc, 17654);
  exec = (OOC_Package__Executable)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17703));
  i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
  i0 = oo2c__BuildPackageDoc_BuildDocs((OOC_Repository__Module)i0);
  i1 = i;
  ok = i0;
  i1 = i1+1;
  i = i1;
  if (i0) goto l24;
  i2=0u;
  goto l26;
l24:
  i2 = (OOC_INT32)pkg;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17587))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 17598))+4);
  i2 = i1!=i2;
  
l26:
  if (!i2) goto l30;
  i0=i1;
  goto l21_loop;
l30:
  return i0;
  ;
}

static void oo2c__WriteHelp(void) {

  Out__String("Usage:", 7);
  Out__Ln();
  Out__String("  oo2c [options] <module>...", 29);
  Out__Ln();
  Out__String("  oo2c (--make|-M) [options] <module>", 38);
  Out__Ln();
  Out__String("  oo2c --uses <ext-ident> [options] <module> ...", 49);
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
  Out__String("  (--all|-A)", 13);
  Out__Ln();
  Out__String("  --error-style (file:line:column|char-pos|attributes)", 55);
  Out__Ln();
  return;
  ;
}

void OOC_oo2c_init(void) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  _c0 = Object__NewLatin1Char(32u);
  _c1 = Object__NewLatin1Char(32u);
  _c2 = Object__NewLatin1Char(47u);
  _c3 = Object__NewLatin1Region("/lib", 5, 0, 4);
  _c4 = Object__NewLatin1Region(".la", 4, 0, 3);
  _c5 = Object__NewLatin1Char(47u);
  _c6 = Object__NewLatin1Char(32u);
  _c7 = Object__NewLatin1Char(47u);

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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18901))+8);
  i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18916)))), &_td_Config_Value_Boolean__ValueDesc, 18916)), 18922));
  if (!i1) goto l3;
  i1 = (OOC_INT32)StdChannels__stderr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18949)))), OOC_Make__RulesDesc_SetErrOut)),OOC_Make__RulesDesc_SetErrOut)((OOC_Make__Rules)i0, (Channel__Channel)i1);
l3:
  i0 = (OOC_INT32)oo2c__makeRules;
  i1 = (OOC_INT32)oo2c__forceUpdate;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19026))+8);
  i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19041)))), &_td_Config_Value_Boolean__ValueDesc, 19041)), 19047));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18999)))), OOC_Make__RulesDesc_SetForceUpdate)),OOC_Make__RulesDesc_SetForceUpdate)((OOC_Make__Rules)i0, i1);
  i0 = (OOC_INT32)oo2c__makeRules;
  i1 = (OOC_INT32)oo2c__listUses;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19098))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19117)))), &_td_Config_Value_String__ValueDesc, 19117)), 19123));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19098))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19117)))), &_td_Config_Value_String__ValueDesc, 19117)), 19123));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19130)), 0);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19075)))), OOC_Make__RulesDesc_UsageTracking)),OOC_Make__RulesDesc_UsageTracking)((OOC_Make__Rules)i0, (void*)(_check_pointer(i2, 19130)), i1);
  oo2c__ok = i0;
  i0 = !i0;
  if (!i0) goto l6;
  Err__String("Error: Invalid selector string for `--uses\047", 44);
  Err__Ln();
  _halt(1);
l6:
  i0 = (OOC_INT32)oo2c__writeStats;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19275))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19290)))), &_td_Config_Value_Boolean__ValueDesc, 19290)), 19296));
  OOC_Make__writeStats = i0;
  i0 = (OOC_INT32)oo2c__command;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19327))+8);
  i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19342)))), &_td_Config_Value_Integer__ValueDesc, 19342)), 19348));
  switch (i0) {
  case 0:
    oo2c__mode = 11;
    goto l17;
  case 1:
    oo2c__mode = 18;
    goto l17;
  case 2:
    oo2c__mode = (-1);
    goto l17;
  case 3:
    oo2c__mode = (-2);
    goto l17;
  case 4:
    oo2c__mode = (-3);
    goto l17;
  case 5:
    oo2c__mode = (-4);
    goto l17;
  case 6:
    oo2c__mode = (-5);
    OOC_Logger__silence = 1u;
    goto l17;
  case 7:
    oo2c__mode = (-6);
    goto l17;
  default:
    _failed_case(i0, 19315);
    goto l17;
  }
l17:
  i0 = (OOC_INT32)oo2c__errorStyle;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19690))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19709)))), &_td_Config_Value_String__ValueDesc, 19709)), 19715));
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 19722)),(const void*)"file:line:column"))==0;
  if (i1) goto l23;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19816))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19835)))), &_td_Config_Value_String__ValueDesc, 19835)), 19841));
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 19848)),(const void*)"char-pos"))==0;
  if (!i0) goto l24;
  OOC_Error__style = 1;
  goto l24;
l23:
  OOC_Error__style = 0;
l24:
  i0 = (OOC_INT32)oo2c__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 19934));
  i1 = i1!=0;
  if (i1) goto l115;
  i0 = (OOC_INT32)oo2c__showVersion;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20031))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20046)))), &_td_Config_Value_Boolean__ValueDesc, 20046)), 20052));
  if (i0) goto l113;
  i0 = (OOC_INT32)oo2c__showHelp;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20250))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20265)))), &_td_Config_Value_Boolean__ValueDesc, 20265)), 20271));
  if (i0) goto l111;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i1 = oo2c__mode;
  i0 = (i1==(-4))!=(i0==0);
  if (i0) goto l109;
  oo2c__ok = 1u;
  if ((i1==(-4))) goto l100;
  i0 = (OOC_INT32)OOC_Config__options;
  i2 = (OOC_INT32)OOC_Config__pragmas;
  i0 = OOC_Package__ParseMetaData((Config_Section_Options__Section)i0, (Config_Section_Options__Section)i2);
  i0 = !i0;
  if (!i0) goto l37;
  _halt(1);
l37:
  oo2c__forceUpdateRepository = 0u;
  oo2c__i = 0;
  i0 = oo2c__ok;
  if (i0) goto l40;
  i0=0u;
  goto l42;
l40:
  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i0 = 0!=i0;
  
l42:
  if (!i0) goto l92;
  i0=0;
l44_loop:
  i2 = (OOC_INT32)OOC_Config__arguments;
  i0 = (OOC_INT32)Config_Section_Arguments__SectionDesc_Get((Config_Section_Arguments__Section)i2, i0);
  oo2c__arg = (Config_Value__StringPtr)i0;
  i2 = oo2c__mode;
  switch (i2) {
  case (-1):
  case (-2):
    oo2c__doInstall = (i2==(-2));
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20967)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 20967)), i2, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = i0==0;
    if (i0) goto l59;
    i0 = oo2c__doInstall;
    if (!i0) goto l58;
    i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21241))+8);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21260)))), &_td_Config_Value_String__ValueDesc, 21260)), 21266));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21241))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21260)))), &_td_Config_Value_String__ValueDesc, 21260)), 21266));
    i3 = (OOC_INT32)oo2c__arg;
    i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 21279)), 0);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21273)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i2, 21273)), i0, (void*)(_check_pointer(i3, 21279)), i4, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkgInfo = (OOC_Package__Package)i0;
    i2 = i0!=0;
    if (i2) goto l53;
    i2=0u;
    goto l55;
l53:
    i2 = (OOC_INT32)oo2c__errList;
    i2 = *(OOC_INT32*)(_check_pointer(i2, 21335));
    i2 = i2==0;
    
l55:
    if (!i2) goto l58;
    oo2c__UninstallPackage((OOC_Package__Package)i0);
l58:
    i0 = (OOC_INT32)oo2c__pkg;
    i2 = (OOC_INT32)oo2c__rep;
    i3 = oo2c__doInstall;
    i0 = oo2c__BuildPackage((OOC_Package__Package)i0, (OOC_Repository__Repository)i2, i3);
    oo2c__ok = i0;
    i0 = oo2c__doInstall;
    oo2c__forceUpdateRepository = i0;
    goto l83;
l59:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21091)), 0);
    Err__String((void*)(_check_pointer(i0, 21091)), i2);
    Err__Ln();
    _halt(1);
    goto l83;
  case (-3):
    i2 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21641))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21660)))), &_td_Config_Value_String__ValueDesc, 21660)), 21666));
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21641))+8);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21660)))), &_td_Config_Value_String__ValueDesc, 21660)), 21666));
    i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21679)), 0);
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21673)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPkgInfo((void*)(_check_pointer(i3, 21673)), i2, (void*)(_check_pointer(i0, 21679)), i4, (void*)(OOC_INT32)&oo2c__errList);
    oo2c__pkg = (OOC_Package__Package)i0;
    i0 = (OOC_INT32)oo2c__errList;
    i2 = *(OOC_INT32*)(_check_pointer(i0, 21713));
    i2 = i2!=0;
    if (!i2) goto l64;
    i2 = (OOC_INT32)StdChannels__stdout;
    OOC_Error__ListDesc_Write((OOC_Error__List)i0, (Channel__Channel)i2);
l64:
    i0 = (OOC_INT32)oo2c__pkg;
    i2 = i0==0;
    if (i2) goto l67;
    oo2c__UninstallPackage((OOC_Package__Package)i0);
    oo2c__forceUpdateRepository = 1u;
    goto l83;
l67:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21910)), 0);
    Err__String((void*)(_check_pointer(i0, 21910)), i2);
    Err__Ln();
    _halt(1);
    goto l83;
  case (-5):
    i2 = (OOC_INT32)OOC_Config__options;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22128)), 0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22120)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i2, (void*)(_check_pointer(i0, 22128)), i3);
    oo2c__option = (Config_Section_Options__Option)i0;
    i2 = i0==0;
    if (i2) goto l72;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22243))+8);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22262)))), &_td_Config_Value_String__ValueDesc, 22262)), 22268));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22243))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22262)))), &_td_Config_Value_String__ValueDesc, 22262)), 22268));
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22275)), 0);
    Out__String((void*)(_check_pointer(i2, 22275)), i0);
    goto l73;
l72:
    Out__String("(none)", 7);
l73:
    Out__Ln();
    goto l83;
  case (-6):
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22389)), 0);
    i0 = (OOC_INT32)OOC_Package__GetPackage((void*)(_check_pointer(i0, 22389)), i2, (void*)(OOC_INT32)&oo2c__rep);
    oo2c__pkg = (OOC_Package__Package)i0;
    i2 = i0==0;
    if (i2) goto l77;
    i0 = oo2c__BuildPackageDoc((OOC_Package__Package)i0);
    oo2c__ok = i0;
    goto l83;
l77:
    Err__String("Error: Cannot locate package ", 30);
    i0 = (OOC_INT32)oo2c__arg;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22513)), 0);
    Err__String((void*)(_check_pointer(i0, 22513)), i2);
    Err__Ln();
    _halt(1);
    goto l83;
  default:
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22702)), 0);
    i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i0, 22702)), i2);
    i0 = (OOC_INT32)oo2c__GetModule((Object__String)i0);
    oo2c__module = (OOC_Repository__Module)i0;
    i2 = oo2c__mode;
    i2 = i2==11;
    if (!i2) goto l82;
    i2 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22772)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i2, (OOC_Repository__Module)i0);
l82:
    i0 = (OOC_INT32)oo2c__makeRules;
    i2 = (OOC_INT32)oo2c__module;
    i3 = oo2c__mode;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22842)))), OOC_Make__RulesDesc_Update)),OOC_Make__RulesDesc_Update)((OOC_Make__Rules)i0, (OOC_Repository__Module)i2, i3);
    oo2c__ok = i0;
    i0 = (OOC_INT32)oo2c__makeRules;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22884)))), OOC_Make__RulesDesc_SetAllImportsModule)),OOC_Make__RulesDesc_SetAllImportsModule)((OOC_Make__Rules)i0, (OOC_Repository__Module)0);
    goto l83;
  }
l83:
  i0 = oo2c__i;
  i0 = i0+1;
  oo2c__i = i0;
  i2 = oo2c__ok;
  if (i2) goto l86;
  i2=0u;
  goto l88;
l86:
  i2 = (OOC_INT32)OOC_Config__arguments;
  i2 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i2);
  i2 = i0!=i2;
  
l88:
  if (i2) goto l44_loop;
l92:
  i0 = oo2c__ok;
  if (i0) goto l95;
  i0=0u;
  goto l97;
l95:
  i0 = oo2c__forceUpdateRepository;
  
l97:
  if (!i0) goto l101;
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23048))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23067)))), &_td_Config_Value_String__ValueDesc, 23067)), 23073));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23048))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23067)))), &_td_Config_Value_String__ValueDesc, 23067)), 23073));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 23080)), 0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i2, 23080)), i0);
  oo2c__ok = i0;
  goto l101;
l100:
  i0 = (OOC_INT32)OOC_Config_CCompiler__oocdir;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20520))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20539)))), &_td_Config_Value_String__ValueDesc, 20539)), 20545));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20520))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20539)))), &_td_Config_Value_String__ValueDesc, 20539)), 20545));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20552)), 0);
  i0 = OOC_Package__UpdateRepository((void*)(_check_pointer(i2, 20552)), i0);
  oo2c__ok = i0;
l101:
  i0 = oo2c__ok;
  if (i0) goto l104;
  _halt(1);
  goto l116;
l104:
  i0 = OOC_Make__writeStats;
  if (!i0) goto l116;
  OOC_SSA_Stats__Write();
  goto l116;
l109:
  oo2c__WriteHelp();
  _halt(1);
  goto l116;
l111:
  oo2c__WriteHelp();
  goto l116;
l113:
  Out__String("oo2c/", 6);
  Out__String("gcc", 4);
  Out__String(" ", 2);
  Out__String("2.0.9", 6);
  Out__Ln();
  _halt(0);
  goto l116;
l115:
  i1 = (OOC_INT32)StdChannels__stderr;
  OOC_Error__ListDesc_Write((OOC_Error__List)i0, (Channel__Channel)i1);
  _halt(1);
l116:
  return;
  ;
}

/* --- */
