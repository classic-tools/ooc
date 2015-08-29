#include <OOC/Config.d>
#include <__oo2c.h>
#include <setjmp.h>

Config_Section_Options__Option OOC_Config__AddOption(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Config_Value__Value init) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)OOC_Config__options;
  i1 = (OOC_INT32)init;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 949)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name, name_0d, (Config_Value__Value)i1);
  return (Config_Section_Options__Option)i0;
  ;
}

void OOC_Config__AddCmdLine(const OOC_CHAR8 options__ref[], OOC_LEN options_0d, const OOC_CHAR8 _template__ref[], OOC_LEN _template_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(options,OOC_CHAR8 ,options_0d)
  OOC_ALLOCATE_VPAR(_template,OOC_CHAR8 ,_template_0d)

  OOC_INITIALIZE_VPAR(options__ref,options,OOC_CHAR8 ,options_0d)
  OOC_INITIALIZE_VPAR(_template__ref,_template,OOC_CHAR8 ,_template_0d)
  i0 = (OOC_INT32)OOC_Config__cmdLine;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1293)))), Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate)),Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate)((Config_Source_CmdLine__CmdLine)i0, (void*)(OOC_INT32)options, options_0d, (void*)(OOC_INT32)_template, _template_0d);
  return;
  ;
}

static void OOC_Config__InitConfig(const OOC_CHAR8 defaultConfigFile__ref[], OOC_LEN defaultConfigFile_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)
  Config_Section_Options__Option configFile;

  OOC_INITIALIZE_VPAR(defaultConfigFile__ref,defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)
  i0 = (OOC_INT32)Config_Simple__New((void*)(OOC_INT32)defaultConfigFile, defaultConfigFile_0d);
  OOC_Config__config = (Config_Simple__Config)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1523))+16);
  OOC_Config__cmdLine = (Config_Source_CmdLine__CmdLine)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1557))+28);
  OOC_Config__arguments = (Config_Section_Arguments__Section)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1591))+24);
  OOC_Config__options = (Config_Section_Options__Section)i0;
  i1 = (OOC_INT32)Config_Value_String__New((void*)(OOC_INT32)defaultConfigFile, defaultConfigFile_0d);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1628)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, "config-file", 12, (Config_Value__Value)i1);
  configFile = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)OOC_Config__config;
  i1 = (OOC_INT32)OOC_Config__cmdLine;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1759)))), Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate)),Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate)((Config_Source_CmdLine__CmdLine)i1, "--config", 9, "<option><set name=\047config-file\047>$1</set></option>", 50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1725)))), Config_Simple__ConfigDesc_ConfigFileCmdLineOption)),Config_Simple__ConfigDesc_ConfigFileCmdLineOption)((Config_Simple__Config)i0, (Config_Source_CmdLine__OptionTemplate)i1);
  i0 = (OOC_INT32)OOC_Config__config;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1890))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1890))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1899)))), Config_Source_Environment__EnvironmentDesc_AddVariableTemplate)),Config_Source_Environment__EnvironmentDesc_AddVariableTemplate)((Config_Source_Environment__Environment)i2, "OO2CRC", 7, "<option><set name=\047config-file\047>$1</set></option>", 50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1865)))), Config_Simple__ConfigDesc_ConfigFileEnvVar)),Config_Simple__ConfigDesc_ConfigFileEnvVar)((Config_Simple__Config)i0, (Config_Source_Environment__VariableTemplate)i1);
  i0 = (OOC_INT32)OOC_Config_Pragmas__New();
  OOC_Config__pragmas = (OOC_Config_Pragmas__Section)i0;
  i1 = (OOC_INT32)OOC_Config__config;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2044))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2044))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2057)))), Config_Section__SectionListDesc_Add)),Config_Section__SectionListDesc_Add)((Config_Section__SectionList)i1, (Config_Section__Section)i0);
  i0 = (OOC_INT32)OOC_Config__pragmas;
  OOC_Config_Pragmas_StdPragmas__CreateVariables((OOC_Config_Pragmas__Section)i0);
  i0 = (OOC_INT32)OOC_Config_Repositories__New();
  OOC_Config__repositories = (OOC_Config_Repositories__Section)i0;
  i1 = (OOC_INT32)OOC_Config__config;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2166))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2166))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2179)))), Config_Section__SectionListDesc_Add)),Config_Section__SectionListDesc_Add)((Config_Section__SectionList)i1, (Config_Section__Section)i0);
  i0 = (OOC_INT32)Config_Value_String__New("xsltproc", 9);
  i0 = (OOC_INT32)OOC_Config__AddOption("xsltproc", 9, (Config_Value__Value)i0);
  OOC_Config__xsltproc = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--xsltproc", 11, "<options><set name=\047xsltproc\047>$1</set></options>", 49);
  return;
  ;
}

void OOC_Config__Read(Msg__MsgList errList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_Config__config;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2442)))), Config_Simple__ConfigDesc_Read)),Config_Simple__ConfigDesc_Read)((Config_Simple__Config)i0, (Msg__MsgList)i1);
  return;
  ;
}

OOC_CHAR8 OOC_Config__HaveXsltProc() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_Config__xsltproc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2537))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2551)))), &_td_Config_Value_String__ValueDesc, 2551)), 2557));
  return ((
  _cmp8((const void*)(_check_pointer(i0, 2564)),(const void*)"no"))!=(OOC_INT32)0);
  ;
}

void OOC_OOC_Config_init(void) {

  OOC_Config__InitConfig("/usr/home/ooc-devel/local-ooc2/lib/oo2c/oo2crc.xml", 51);
  RT0__poisonHeap = 85;
  return;
  ;
}

/* --- */
