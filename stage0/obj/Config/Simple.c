#include <Config/Simple.d>
#include <__oo2c.h>
#include <setjmp.h>

void Config_Simple__Init(Config_Simple__Config config, const OOC_CHAR8 defaultConfigFile__ref[], OOC_LEN defaultConfigFile_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)

  OOC_INITIALIZE_VPAR(defaultConfigFile__ref,defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)
  i0 = (OOC_INT32)config;
  Config__InitConfig((Config__Config)i0);
  i1 = (
  _cmp8((const void*)(OOC_INT32)defaultConfigFile,(const void*)""))==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)defaultConfigFile, defaultConfigFile_0d);
  *(OOC_INT32*)(_check_pointer(i0, 1104)) = i1;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 1066)) = 0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 1175))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 1209))+8) = 0;
  i1 = (OOC_INT32)Config_Source_Environment__New();
  *(OOC_INT32*)((_check_pointer(i0, 1255))+12) = i1;
  i1 = (OOC_INT32)Config_Source_CmdLine__New();
  *(OOC_INT32*)((_check_pointer(i0, 1297))+16) = i1;
  i1 = (OOC_INT32)Config_Value__NewPrototypeList();
  *(OOC_INT32*)((_check_pointer(i0, 1340))+20) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1390))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1390))+20);
  i3 = (OOC_INT32)Config_Value_String__New("", 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1400)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i2, "string", 7, (Config_Value__Value)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1464))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1464))+20);
  i3 = (OOC_INT32)Config_Value_Integer__New(0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1474)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i2, "integer", 8, (Config_Value__Value)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1539))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1539))+20);
  i3 = (OOC_INT32)Config_Value_Boolean__New(0u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1549)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i2, "boolean", 8, (Config_Value__Value)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1666))+20);
  i1 = (OOC_INT32)Config_Section_Options__New(((OOC_CHAR16[]){111,112,116,105,111,110,115,0}), 8, (Config_Value__PrototypeList)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1623))+24) = i1;
  i1 = (OOC_INT32)Config_Section_Arguments__New(((OOC_CHAR16[]){97,114,103,117,109,101,110,116,115,0}), 10);
  *(OOC_INT32*)((_check_pointer(i0, 1689))+28) = i1;
  i1 = (OOC_INT32)Config_Section__NewSectionList();
  *(OOC_INT32*)((_check_pointer(i0, 1743))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1796))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1796))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1822))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1809)))), Config_Section__SectionListDesc_Add)),Config_Section__SectionListDesc_Add)((Config_Section__SectionList)i2, (Config_Section__Section)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1844))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1844))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1870))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1857)))), Config_Section__SectionListDesc_Add)),Config_Section__SectionListDesc_Add)((Config_Section__SectionList)i2, (Config_Section__Section)i3);
  *(OOC_INT32*)((_check_pointer(i0, 1899))+36) = 0;
  return;
  ;
}

Config_Simple__Config Config_Simple__New(const OOC_CHAR8 defaultConfigFile__ref[], OOC_LEN defaultConfigFile_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)

  OOC_INITIALIZE_VPAR(defaultConfigFile__ref,defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Simple__Config.baseTypes[0]);
  Config_Simple__Init((Config_Simple__Config)i0, (void*)(OOC_INT32)defaultConfigFile, defaultConfigFile_0d);
  return (Config_Simple__Config)i0;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileEnvVar(Config_Simple__Config config, Config_Source_Environment__VariableTemplate envTemplate) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)envTemplate;
  *(OOC_INT32*)((_check_pointer(i0, 2224))+4) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileCmdLineOption(Config_Simple__Config config, Config_Source_CmdLine__OptionTemplate optionTemplate) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)optionTemplate;
  *(OOC_INT32*)((_check_pointer(i0, 2392))+8) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_Read(Config_Simple__Config config, Msg__MsgList errList) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg errMsg;
  Config_Source_Environment__Command cmdEnv;
  Config_Source_CmdLine__Command cmdCmdLine;
  auto void Config_Simple__ConfigDesc_Read_EvaluateFile(Config_Value__StringPtr fileName);
  auto void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source);
    
    void Config_Simple__ConfigDesc_Read_EvaluateFile(Config_Value__StringPtr fileName) {
      register OOC_INT32 i0,i1,i2,i3;
      Config_Parser__Parser p;

      i0 = (OOC_INT32)fileName;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2825)), 0);
      i0 = (OOC_INT32)Config_Parser__NewFile((void*)(_check_pointer(i0, 2825)), i1);
      p = (Config_Parser__Parser)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3040)))), Config_Parser__ParserDesc_ParseDocument)),Config_Parser__ParserDesc_ParseDocument)((Config_Parser__Parser)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3070))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 3079));
      i1 = i1==0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)config;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3114))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3147))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3114))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3127)))), Config_Section__SectionListDesc_ProcessElements)),Config_Section__SectionListDesc_ProcessElements)((Config_Section__SectionList)i1, (Config_Parser__Element)i3, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l4:
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3208))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3193)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      return;
      ;
    }

    
    void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source) {
      register OOC_INT32 i0,i1,i2,i3;
      IO_Memory__Channel buffer;
      Config_Parser__Parser p;

      i0 = (OOC_INT32)IO_Memory__Open();
      buffer = (IO_Memory__Channel)i0;
      i1 = (OOC_INT32)source;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3428)))), Config_Source__SourceDesc_Write)),Config_Source__SourceDesc_Write)((Config_Source__Source)i1, (IO__ByteChannel)i0, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3468)))), IO_Memory__ChannelDesc_SetPos)),IO_Memory__ChannelDesc_SetPos)((IO_Memory__Channel)i0, 0);
      i0 = (OOC_INT32)Config_Parser__NewChannel((IO__ByteChannel)i0);
      p = (Config_Parser__Parser)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3783)))), Config_Parser__ParserDesc_ParseDocument)),Config_Parser__ParserDesc_ParseDocument)((Config_Parser__Parser)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3813))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 3822));
      i1 = i1==0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)config;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3857))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3890))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3857))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3870)))), Config_Section__SectionListDesc_ProcessElements)),Config_Section__SectionListDesc_ProcessElements)((Config_Section__SectionList)i1, (Config_Parser__Element)i3, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l4:
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3951))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3936)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4018))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4018))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4027)))), Config_Source_Environment__EnvironmentDesc_Parse)),Config_Source_Environment__EnvironmentDesc_Parse)((Config_Source_Environment__Environment)i2);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4072)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4120))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4120))+16);
  i3 = (OOC_INT32)ProgramArgs__args;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4129)))), Config_Source_CmdLine__CmdLineDesc_Parse)),Config_Source_CmdLine__CmdLineDesc_Parse)((Config_Source_CmdLine__CmdLine)i2, (Channel__Channel)i3);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l6;
  i2 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4191)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4238))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4497))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4506))+4);
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4557))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4576))+4);
  i2 = i2!=i3;
  
l13:
  if (!i2) goto l25;
l16_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4620));
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4557))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4576))+4);
  i2 = i2!=i3;
  
l21:
  if (i2) goto l16_loop;
l25:
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l33;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4695)))), Config_Source_Environment__CommandDesc_DoNotWrite)),Config_Source_Environment__CommandDesc_DoNotWrite)((Config_Source_Environment__Command)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4727))+8);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 4737)),(const void*)""))==0;
  if (i2) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4868))+8);
  *(OOC_INT32*)(_check_pointer(i0, 4849)) = i1;
  goto l33;
l30:
  *(OOC_INT32*)(_check_pointer(i0, 4803)) = (OOC_INT32)0;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4929))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5274))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5283))+8);
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
l38_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5354))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5373))+8);
  i2 = i2==i3;
  if (!i2) goto l48;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5422)))), Config_Source_CmdLine__CommandDesc_DoNotWrite)),Config_Source_CmdLine__CommandDesc_DoNotWrite)((Config_Source_CmdLine__Command)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5465))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5474)), 0);
  i2 = i2>=1;
  if (!i2) goto l48;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5514))+8);
  i2 = _check_pointer(i2, 5523);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 5523))*4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 5526)),(const void*)""))==0;
  if (i2) goto l45;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5677))+8);
  i2 = _check_pointer(i2, 5686);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 5686))*4);
  *(OOC_INT32*)(_check_pointer(i0, 5654)) = i2;
  goto l48;
l45:
  *(OOC_INT32*)(_check_pointer(i0, 5559)) = (OOC_INT32)0;
l48:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5765));
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l38_loop;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6187));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l57;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6235));
  Config_Simple__ConfigDesc_Read_EvaluateFile((Config_Value__StringPtr)i0);
l57:
  i0 = (OOC_INT32)config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6281))+12);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  i0 = (OOC_INT32)config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6319))+16);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  return;
  ;
}

void OOC_Config_Simple_init(void) {

  return;
  ;
}

/* --- */
