#include "Config/Simple.d"
#include "__oo2c.h"

void Config_Simple__Init(Config_Simple__Config config, const OOC_CHAR8 defaultConfigFile__ref[], OOC_LEN defaultConfigFile_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)

  OOC_INITIALIZE_VPAR(defaultConfigFile__ref,defaultConfigFile,OOC_CHAR8 ,defaultConfigFile_0d)
  i0 = (OOC_INT32)config;
  Config__InitConfig((Config__Config)i0);
  i1 = (
  _cmp8((const void*)(OOC_INT32)defaultConfigFile,(const void*)""))==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)defaultConfigFile, defaultConfigFile_0d);
  *(OOC_INT32*)(_check_pointer(i0, 1135)) = i1;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 1097)) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 1206))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1240))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)Config_Source_Environment__New();
  *(OOC_INT32*)((_check_pointer(i0, 1286))+12) = i1;
  i1 = (OOC_INT32)Config_Source_CmdLine__New();
  *(OOC_INT32*)((_check_pointer(i0, 1328))+16) = i1;
  i1 = (OOC_INT32)Config_Value__NewPrototypeList();
  *(OOC_INT32*)((_check_pointer(i0, 1371))+20) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1421))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1421))+20);
  i3 = (OOC_INT32)Config_Value_String__New("", 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1431)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i2, "string", 7, (Config_Value__Value)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1495))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1495))+20);
  i3 = (OOC_INT32)Config_Value_Integer__New(0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1505)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i2, "integer", 8, (Config_Value__Value)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1570))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1570))+20);
  i3 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1580)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i2, "boolean", 8, (Config_Value__Value)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1697))+20);
  i1 = (OOC_INT32)Config_Section_Options__New(((OOC_CHAR16[]){111,112,116,105,111,110,115,0}), 8, (Config_Value__PrototypeList)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1654))+24) = i1;
  i1 = (OOC_INT32)Config_Section_Arguments__New(((OOC_CHAR16[]){97,114,103,117,109,101,110,116,115,0}), 10);
  *(OOC_INT32*)((_check_pointer(i0, 1720))+28) = i1;
  i1 = (OOC_INT32)Config_Section__NewSectionList();
  *(OOC_INT32*)((_check_pointer(i0, 1774))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1827))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1853))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1827))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1840)))), Config_Section__SectionListDesc_Add)),Config_Section__SectionListDesc_Add)((Config_Section__SectionList)i3, (Config_Section__Section)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1875))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1901))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1875))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1888)))), Config_Section__SectionListDesc_Add)),Config_Section__SectionListDesc_Add)((Config_Section__SectionList)i3, (Config_Section__Section)i2);
  *(OOC_INT32*)((_check_pointer(i0, 1930))+36) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 2255))+4) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileCmdLineOption(Config_Simple__Config config, Config_Source_CmdLine__OptionTemplate optionTemplate) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)optionTemplate;
  *(OOC_INT32*)((_check_pointer(i0, 2423))+8) = i1;
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
      Msg__Msg res;

      i0 = (OOC_INT32)fileName;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2844)), (OOC_INT32)0);
      i0 = (OOC_INT32)Config_Parser__NewFile((void*)(_check_pointer(i0, 2844)), i1, (void*)(OOC_INT32)&res);
      i1 = (OOC_INT32)res;
      i2 = i1!=(OOC_INT32)0;
      p = (Config_Parser__Parser)i0;
      if (i2) goto l7;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3139)))), Config_Parser__ParserDesc_ParseDocument)),Config_Parser__ParserDesc_ParseDocument)((Config_Parser__Parser)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3171))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 3180));
      i1 = i1==0;
      if (i1) goto l5;
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3317))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3302)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      goto l8;
l5:
      i1 = (OOC_INT32)config;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3217))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3250))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3217))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3230)))), Config_Section__SectionListDesc_ProcessElements)),Config_Section__SectionListDesc_ProcessElements)((Config_Section__SectionList)i1, (Config_Parser__Element)i3, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
      goto l8;
l7:
      i0 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2894)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i0, (Msg__Msg)i1);
l8:
      return;
      ;
    }

    
    void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source) {
      register OOC_INT32 i0,i1,i2,i3;
      IO_Memory__Channel buffer;
      Msg__Msg errMsg;
      Config_Parser__Parser p;

      i0 = (OOC_INT32)IO_Memory__New("/#Config_Simple#", 17, 3, (void*)(OOC_INT32)&errMsg);
      i1 = (OOC_INT32)errMsg;
      i2 = i1==(OOC_INT32)0;
      buffer = (IO_Memory__Channel)i0;
      if (i2) goto l3;
      i0 = (OOC_INT32)errList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4284)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i0, (Msg__Msg)i1);
      goto l11;
l3:
      i1 = (OOC_INT32)source;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3644)))), Config_Source__SourceDesc_Write)),Config_Source__SourceDesc_Write)((Config_Source__Source)i1, (Channel__Channel)i0, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (void*)(OOC_INT32)&errMsg);
      i1 = (OOC_INT32)errMsg;
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l11;
      i0 = (OOC_INT32)Config_Parser__NewChannel((Channel__Channel)i0);
      p = (Config_Parser__Parser)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4035)))), Config_Parser__ParserDesc_ParseDocument)),Config_Parser__ParserDesc_ParseDocument)((Config_Parser__Parser)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4069))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 4078));
      i1 = i1==0;
      if (i1) goto l8;
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4221))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4206)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      goto l11;
l8:
      i1 = (OOC_INT32)config;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4117))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4150))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4117))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4130)))), Config_Section__SectionListDesc_ProcessElements)),Config_Section__SectionListDesc_ProcessElements)((Config_Section__SectionList)i1, (Config_Parser__Element)i3, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4367))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4367))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4376)))), Config_Source_Environment__EnvironmentDesc_Parse)),Config_Source_Environment__EnvironmentDesc_Parse)((Config_Source_Environment__Environment)i2);
  i2 = i1!=(OOC_INT32)0;
  errMsg = (Msg__Msg)i1;
  if (!i2) goto l3;
  i2 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4421)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4469))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4469))+16);
  i3 = (OOC_INT32)ProgramArgs__args;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4478)))), Config_Source_CmdLine__CmdLineDesc_Parse)),Config_Source_CmdLine__CmdLineDesc_Parse)((Config_Source_CmdLine__CmdLine)i2, (Channel__Channel)i3);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l6;
  i2 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4540)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4587))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4846))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4855))+4);
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4925))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4906))+4);
  i2 = i3!=i2;
  
l13:
  if (!i2) goto l25;
l16_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4969));
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l19;
  i2=OOC_FALSE;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4906))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4925))+4);
  i2 = i2!=i3;
  
l21:
  if (i2) goto l16_loop;
l25:
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l33;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5044)))), Config_Source_Environment__CommandDesc_DoNotWrite)),Config_Source_Environment__CommandDesc_DoNotWrite)((Config_Source_Environment__Command)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5076))+8);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 5086)),(const void*)""))==(OOC_INT32)0;
  if (i2) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5217))+8);
  *(OOC_INT32*)(_check_pointer(i0, 5198)) = i1;
  goto l33;
l30:
  *(OOC_INT32*)(_check_pointer(i0, 5152)) = (OOC_INT32)0;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5278))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5623))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5632))+8);
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
l38_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5703))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5722))+8);
  i2 = i2==i3;
  if (!i2) goto l48;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5771)))), Config_Source_CmdLine__CommandDesc_DoNotWrite)),Config_Source_CmdLine__CommandDesc_DoNotWrite)((Config_Source_CmdLine__Command)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5814))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5823)), (OOC_INT32)0);
  i2 = i2>=1;
  if (!i2) goto l48;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5863))+8);
  i2 = _check_pointer(i2, 5872);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 5872))*4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 5875)),(const void*)""))==(OOC_INT32)0;
  if (i2) goto l45;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6026))+8);
  i2 = _check_pointer(i2, 6035);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 6035))*4);
  *(OOC_INT32*)(_check_pointer(i0, 6003)) = i2;
  goto l48;
l45:
  *(OOC_INT32*)(_check_pointer(i0, 5908)) = (OOC_INT32)0;
l48:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6114));
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l38_loop;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6536));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l57;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6584));
  Config_Simple__ConfigDesc_Read_EvaluateFile((Config_Value__StringPtr)i0);
l57:
  i0 = (OOC_INT32)config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6630))+12);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  i0 = (OOC_INT32)config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6668))+16);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  return;
  ;
}

void OOC_Config_Simple_init(void) {

  return;
  ;
}

/* --- */
