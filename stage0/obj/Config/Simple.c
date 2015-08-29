#include <Config/Simple.d>
#include <__oo2c.h>
#include <setjmp.h>

void Config_Simple__Init(Config_Simple__Config config, Object__String8 defaultConfigFile) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)config;
  Config__InitConfig((Config__Config)i0);
  i1 = (OOC_INT32)defaultConfigFile;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 907));
  i2 = i2==0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 975)) = i1;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i0, 937)) = 0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 1025))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 1059))+8) = 0;
  i1 = (OOC_INT32)Config_Source_Environment__New();
  *(OOC_INT32*)((_check_pointer(i0, 1105))+12) = i1;
  i1 = (OOC_INT32)Config_Source_CmdLine__New();
  *(OOC_INT32*)((_check_pointer(i0, 1147))+16) = i1;
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1190))+20) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1249))+20);
  i2 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c0));
  Config__SetPrototype((ADT_Dictionary__Dictionary)i1, (Object__String)((OOC_INT32)_c1), (Config__Variable)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1315))+20);
  i2 = (OOC_INT32)Config__NewIntegerVar(0);
  Config__SetPrototype((ADT_Dictionary__Dictionary)i1, (Object__String)((OOC_INT32)_c2), (Config__Variable)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1382))+20);
  i2 = (OOC_INT32)Config__NewBooleanVar(0u);
  Config__SetPrototype((ADT_Dictionary__Dictionary)i1, (Object__String)((OOC_INT32)_c3), (Config__Variable)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1485))+20);
  i1 = (OOC_INT32)Config_Section_Options__New(((OOC_CHAR16[]){111,112,116,105,111,110,115,0}), 8, (ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1443))+24) = i1;
  i1 = (OOC_INT32)Config_Section_Arguments__New(((OOC_CHAR16[]){97,114,103,117,109,101,110,116,115,0}), 10);
  *(OOC_INT32*)((_check_pointer(i0, 1506))+28) = i1;
  i1 = (OOC_INT32)Config_Section__NewSectionList();
  *(OOC_INT32*)((_check_pointer(i0, 1560))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1613))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1639))+24);
  Config_Section__SectionListDesc_Add((Config_Section__SectionList)i1, (Config_Section__Section)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1661))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1687))+28);
  Config_Section__SectionListDesc_Add((Config_Section__SectionList)i1, (Config_Section__Section)i2);
  *(OOC_INT32*)((_check_pointer(i0, 1716))+36) = 0;
  return;
  ;
}

Config_Simple__Config Config_Simple__New(Object__String8 defaultConfigFile) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Simple__Config.baseTypes[0]);
  i1 = (OOC_INT32)defaultConfigFile;
  Config_Simple__Init((Config_Simple__Config)i0, (Object__String8)i1);
  return (Config_Simple__Config)i0;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileEnvVar(Config_Simple__Config config, Config_Source_Environment__VariableTemplate envTemplate) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)envTemplate;
  *(OOC_INT32*)((_check_pointer(i0, 2042))+4) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileCmdLineOption(Config_Simple__Config config, Config_Source_CmdLine__OptionTemplate optionTemplate) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)optionTemplate;
  *(OOC_INT32*)((_check_pointer(i0, 2210))+8) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_Read(Config_Simple__Config config, Msg__MsgList errList) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg errMsg;
  Config_Source_Environment__Command cmdEnv;
  Config_Source_CmdLine__Command cmdCmdLine;
  auto void Config_Simple__ConfigDesc_Read_EvaluateFile(Object__String8 fileName);
  auto void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source);
    
    void Config_Simple__ConfigDesc_Read_EvaluateFile(Object__String8 fileName) {
      register OOC_INT32 i0,i1,i2;
      Config_Parser__Parser p;

      i0 = (OOC_INT32)fileName;
      i0 = (OOC_INT32)Config_Parser__NewFile((Object__String)i0);
      p = (Config_Parser__Parser)i0;
      Config_Parser__ParserDesc_ParseDocument((Config_Parser__Parser)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2886))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 2895));
      i1 = i1==0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)config;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2930))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2963))+12);
      Config_Section__SectionListDesc_ProcessElements((Config_Section__SectionList)i1, (Config_Parser__Element)i2, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l4:
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3024))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3009)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      return;
      ;
    }

    
    void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source) {
      register OOC_INT32 i0,i1,i2;
      IO_Memory__Channel buffer;
      Config_Parser__Parser p;

      i0 = (OOC_INT32)IO_Memory__Open();
      buffer = (IO_Memory__Channel)i0;
      i1 = (OOC_INT32)source;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3244)))), Config_Source__SourceDesc_Write)),Config_Source__SourceDesc_Write)((Config_Source__Source)i1, (IO__ByteChannel)i0, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14);
      IO_Memory__ChannelDesc_SetPos((IO_Memory__Channel)i0, 0);
      i0 = (OOC_INT32)Config_Parser__NewChannel((IO__ByteChannel)i0);
      p = (Config_Parser__Parser)i0;
      Config_Parser__ParserDesc_ParseDocument((Config_Parser__Parser)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3629))+8);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 3638));
      i1 = i1==0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)config;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3673))+32);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3706))+12);
      Config_Section__SectionListDesc_ProcessElements((Config_Section__SectionList)i1, (Config_Parser__Element)i2, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l4:
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3767))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3752)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)config;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3834))+12);
  i1 = (OOC_INT32)Config_Source_Environment__EnvironmentDesc_Parse((Config_Source_Environment__Environment)i1);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3888)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3936))+16);
  i2 = (OOC_INT32)ProgramArgs__args;
  i1 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_Parse((Config_Source_CmdLine__CmdLine)i1, (Channel__Channel)i2);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l6;
  i2 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4007)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4054))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4313))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4322))+4);
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4373))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4392))+4);
  i2 = i2!=i3;
  
l13:
  if (!i2) goto l25;
l16_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4436));
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4373))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4392))+4);
  i2 = i2!=i3;
  
l21:
  if (i2) goto l16_loop;
l25:
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l33;
  Config_Source_Environment__CommandDesc_DoNotWrite((Config_Source_Environment__Command)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4543))+8);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 4552));
  i2 = i2==0;
  if (i2) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4688))+8);
  *(OOC_INT32*)(_check_pointer(i0, 4669)) = i1;
  goto l33;
l30:
  *(OOC_INT32*)(_check_pointer(i0, 4623)) = (OOC_INT32)0;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4749))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5094))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5103))+8);
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l54;
l38_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5174))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5193))+8);
  i2 = i2==i3;
  if (!i2) goto l48;
  Config_Source_CmdLine__CommandDesc_DoNotWrite((Config_Source_CmdLine__Command)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5285))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5294)), 0);
  i2 = i2>=1;
  if (!i2) goto l48;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5334))+8);
  i2 = _check_pointer(i2, 5342);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 5342))*4);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 5345));
  i2 = i2==0;
  if (i2) goto l45;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5501))+8);
  i2 = _check_pointer(i2, 5510);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 5510))*4);
  *(OOC_INT32*)(_check_pointer(i0, 5478)) = i2;
  goto l48;
l45:
  *(OOC_INT32*)(_check_pointer(i0, 5383)) = (OOC_INT32)0;
l48:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5589));
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l38_loop;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6011));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l57;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6059));
  Config_Simple__ConfigDesc_Read_EvaluateFile((Object__String8)i0);
l57:
  i0 = (OOC_INT32)config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6105))+12);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  i0 = (OOC_INT32)config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6143))+16);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  return;
  ;
}

void OOC_Config_Simple_init(void) {
  _c0 = Object__NewLatin1Region("", 1, 0, 0);
  _c1 = Object__NewLatin1Region("string", 7, 0, 6);
  _c2 = Object__NewLatin1Region("integer", 8, 0, 7);
  _c3 = Object__NewLatin1Region("boolean", 8, 0, 7);

  return;
  ;
}

/* --- */
