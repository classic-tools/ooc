#include <Config/Source/Environment.d>
#include <__oo2c.h>

static void Config_Source_Environment__Init(Config_Source_Environment__Environment env) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)env;
  Config_Source__Init((Config_Source__Source)i0);
  return;
  ;
}

Config_Source_Environment__Environment Config_Source_Environment__New() {
  register OOC_INT32 i0;
  Config_Source_Environment__Environment env;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Source_Environment__Environment.baseTypes[0]);
  env = (Config_Source_Environment__Environment)i0;
  Config_Source_Environment__Init((Config_Source_Environment__Environment)i0);
  *(OOC_INT32*)(_check_pointer(i0, 1725)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1760))+4) = (OOC_INT32)0;
  return (Config_Source_Environment__Environment)i0;
  ;
}

void Config_Source_Environment__CommandDesc_DoNotWrite(Config_Source_Environment__Command command) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)command;
  *(OOC_UINT8*)((_check_pointer(i0, 1962))+12) = OOC_TRUE;
  return;
  ;
}

Config_Source_Environment__VariableTemplate Config_Source_Environment__EnvironmentDesc_AddVariableTemplate(Config_Source_Environment__Environment env, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, const Config_Value__String transformation__ref, OOC_LEN transformation_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_ALLOCATE_VPAR(transformation,OOC_CHAR8 ,transformation_0d)
  Config_Source_Environment__VariableTemplate t;
  auto void Config_Source_Environment__EnvironmentDesc_AddVariableTemplate_Append(Config_Source_Environment__VariableTemplate *list);
    
    void Config_Source_Environment__EnvironmentDesc_AddVariableTemplate_Append(Config_Source_Environment__VariableTemplate *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      Config_Source_Environment__EnvironmentDesc_AddVariableTemplate_Append((void*)(_check_pointer(i0, 2472)));
      goto l4;
l3:
      i0 = (OOC_INT32)t;
      *list = (Config_Source_Environment__VariableTemplate)i0;
l4:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  OOC_INITIALIZE_VPAR(transformation__ref,transformation,OOC_CHAR8 ,transformation_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Source_Environment__VariableTemplate.baseTypes[0]);
  t = (Config_Source_Environment__VariableTemplate)i0;
  *(OOC_INT32*)(_check_pointer(i0, 2537)) = (OOC_INT32)0;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2557))+4) = i1;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)transformation, transformation_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2599))+8) = i1;
  i0 = (OOC_INT32)env;
  Config_Source_Environment__EnvironmentDesc_AddVariableTemplate_Append((void*)(_check_pointer(i0, 2664)));
  i0 = (OOC_INT32)t;
  return (Config_Source_Environment__VariableTemplate)i0;
  ;
}

Msg__Msg Config_Source_Environment__EnvironmentDesc_Parse(Config_Source_Environment__Environment env) {
  register OOC_INT32 i0,i1,i2;
  Config_Source_Environment__VariableTemplate t;
  OOC_CHAR8 found;
  OOC_CHAR8 value[1024];
  Config_Source_Environment__Command cmd;
  auto void Config_Source_Environment__EnvironmentDesc_Parse_Append(Config_Source_Environment__Command *list);
    
    void Config_Source_Environment__EnvironmentDesc_Parse_Append(Config_Source_Environment__Command *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      Config_Source_Environment__EnvironmentDesc_Parse_Append((void*)(_check_pointer(i0, 3008)));
      goto l4;
l3:
      i0 = (OOC_INT32)cmd;
      *list = (Config_Source_Environment__Command)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)env;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3072));
  i1 = i0!=(OOC_INT32)0;
  t = (Config_Source_Environment__VariableTemplate)i0;
  if (!i1) goto l11;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3144))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3144))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3150)), (OOC_INT32)0);
  i1 = RT0__GetEnv((void*)(_check_pointer(i1, 3150)), i2, (void*)(OOC_INT32)value, 1024);
  found = i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)RT0__NewObject(_td_Config_Source_Environment__Command.baseTypes[0]);
  cmd = (Config_Source_Environment__Command)i1;
  *(OOC_INT32*)(_check_pointer(i1, 3211)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 3244))+4) = i0;
  i0 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)value, 1024);
  *(OOC_INT32*)((_check_pointer(i1, 3272))+8) = i0;
  *(OOC_UINT8*)((_check_pointer(i1, 3325))+12) = OOC_FALSE;
  i0 = (OOC_INT32)env;
  Config_Source_Environment__EnvironmentDesc_Parse_Append((void*)((_check_pointer(i0, 3367))+4));
l6:
  i0 = (OOC_INT32)t;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3405));
  t = (Config_Source_Environment__VariableTemplate)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l11:
  return (Msg__Msg)(OOC_INT32)0;
  ;
}

void Config_Source_Environment__EnvironmentDesc_Write(Config_Source_Environment__Environment env, Channel__Channel ch, const Config_Parser__String rootTag__ref, OOC_LEN rootTag_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(rootTag,OOC_CHAR16 ,rootTag_0d)
  TextRider__Writer w;
  OOC_CHAR8 root8[1024];
  Config_Source_Environment__Command command;
  Config_Value__StringPtr pattern;
  OOC_INT32 i;
  OOC_INT32 j;
  auto void Config_Source_Environment__EnvironmentDesc_Write_WriteQuoted(TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d);
    
    void Config_Source_Environment__EnvironmentDesc_Write_WriteQuoted(TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 s;
      OOC_INT32 e;
      OOC_INT32 last;

      s = 0;
      i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
      e = i0;
      i1 = 0!=i0;
      if (!i1) goto l69;
      i1 = (OOC_INT32)w;
      i2=0;
l3_loop:
      i3 = i2!=i0;
      last = i2;
      if (i3) goto l6;
      i3=OOC_FALSE;
      goto l8;
l6:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 3996)));
      i3 = i3!=(OOC_CHAR8)'&';
      
l8:
      if (i3) goto l10;
      i3=OOC_FALSE;
      goto l12;
l10:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 4027)));
      i3 = i3!=(OOC_CHAR8)'<';
      
l12:
      if (i3) goto l14;
      i3=OOC_FALSE;
      goto l16;
l14:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 4044)));
      i3 = i3!=(OOC_CHAR8)'>';
      
l16:
      if (i3) goto l18;
      i3=OOC_FALSE;
      goto l20;
l18:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 4075)));
      i3 = i3!=(OOC_CHAR8)'\047';
      
l20:
      if (i3) goto l22;
      i3=OOC_FALSE;
      goto l24;
l22:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 4092)));
      i3 = i3!=(OOC_CHAR8)'"';
      
l24:
      if (i3) goto l26;
      i3=i2;
      goto l52;
l26:
      i3=i2;
l27_loop:
      i3 = i3+1;
      i4 = i3!=i0;
      s = i3;
      if (i4) goto l30;
      i4=OOC_FALSE;
      goto l32;
l30:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 3996)));
      i4 = i4!=(OOC_CHAR8)'&';
      
l32:
      if (i4) goto l34;
      i4=OOC_FALSE;
      goto l36;
l34:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4027)));
      i4 = i4!=(OOC_CHAR8)'<';
      
l36:
      if (i4) goto l38;
      i4=OOC_FALSE;
      goto l40;
l38:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4044)));
      i4 = i4!=(OOC_CHAR8)'>';
      
l40:
      if (i4) goto l42;
      i4=OOC_FALSE;
      goto l44;
l42:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4075)));
      i4 = i4!=(OOC_CHAR8)'\047';
      
l44:
      if (i4) goto l46;
      i4=OOC_FALSE;
      goto l48;
l46:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4092)));
      i4 = i4!=(OOC_CHAR8)'"';
      
l48:
      if (i4) goto l27_loop;
l52:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4146))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4146))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4158)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i5, (void*)(OOC_INT32)str, -1, i2, (i3-i2));
      i2 = i3!=i0;
      if (i2) goto l55;
      i2=i3;
      goto l64;
l55:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4234)));
      switch (i2) {
      case (OOC_CHAR8)'&':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4259)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&amp;", 6);
        goto l63;
      case (OOC_CHAR8)'<':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4301)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&lt;", 5);
        goto l63;
      case (OOC_CHAR8)'>':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4342)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&gt;", 5);
        goto l63;
      case (OOC_CHAR8)'\047':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4383)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&apos;", 7);
        goto l63;
      case (OOC_CHAR8)'"':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4426)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&quot;", 7);
        goto l63;
      default:
        _failed_case(i2, 4226);
        goto l63;
      }
l63:
      i2 = i3+1;
      s = i2;
      
l64:
      i3 = i2!=i0;
      if (i3) goto l3_loop;
l69:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(rootTag__ref,rootTag,OOC_CHAR16 ,(rootTag_0d*2))
  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  i1 = i0==(OOC_INT32)0;
  w = (TextRider__Writer)i0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4611));
  *res = (Msg__Msg)i1;
  return;
l3:
  i1 = (
  _cmp16((const void*)(OOC_INT32)rootTag,(const void*)((OOC_CHAR16[]){0})))!=(OOC_INT32)0;
  if (!i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4754)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<?xml version=\0471.0\047 encoding=\047ISO-8859-1\047 standalone=\047yes\047?>", 61);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4841)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  LongStrings__Short((void*)(OOC_INT32)rootTag, rootTag_0d, (OOC_CHAR8)'?', (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4906)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4934)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4964)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4992)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l6:
  i0 = (OOC_INT32)env;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5034))+4);
  command = (Config_Source_Environment__Command)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l50;
l9_loop:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5095))+12);
  i1 = !i1;
  if (!i1) goto l45;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5139))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5149))+8);
  pattern = (Config_Value__StringPtr)i0;
  i = 0;
  i0 = _check_pointer(i0, 5198);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 5198)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l44;
  i0=0;
l14_loop:
  j = i0;
  i1 = (OOC_INT32)pattern;
  i2 = _check_pointer(i1, 5253);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5253)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l19;
l17:
  i2 = _check_pointer(i1, 5273);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5273)));
  i2 = i2!=(OOC_CHAR8)'$';
  
l19:
  if (i2) goto l21;
  i2=i0;
  goto l31;
l21:
  i2=i0;
l22_loop:
  i2 = i2+1;
  i = i2;
  i3 = _check_pointer(i1, 5253);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5253)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l25;
  i3=OOC_FALSE;
  goto l27;
l25:
  i3 = _check_pointer(i1, 5273);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5273)));
  i3 = i3!=(OOC_CHAR8)'$';
  
l27:
  if (i3) goto l22_loop;
l31:
  i3 = _check_pointer(i1, 5344);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5344)));
  i3 = i3==(OOC_CHAR8)'$';
  if (i3) goto l34;
  i3=OOC_FALSE;
  goto l36;
l34:
  i3 = _check_pointer(i1, 5365);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2+1), i4, OOC_UINT32, 5365)));
  i3 = i3==(OOC_CHAR8)'1';
  
l36:
  if (i3) goto l38;
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5541))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5541))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5553)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i3, (void*)(_check_pointer(i1, 5574)), -1, i0, (i2-i0));
  i0=i2;
  goto l39;
l38:
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5396))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5396))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5408)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i5, (void*)(_check_pointer(i1, 5429)), -1, i0, (i2-i0));
  i0 = (OOC_INT32)command;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5476))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5476))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5486)), (OOC_INT32)0);
  Config_Source_Environment__EnvironmentDesc_Write_WriteQuoted((TextRider__Writer)i3, (void*)(_check_pointer(i1, 5486)), i0);
  i0 = i;
  i0 = i0+2;
  i = i0;
  
l39:
  i1 = (OOC_INT32)pattern;
  i1 = _check_pointer(i1, 5198);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 5198)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l14_loop;
l44:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5621)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l45:
  i0 = (OOC_INT32)command;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5666));
  command = (Config_Source_Environment__Command)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l9_loop;
l50:
  i0 = (
  _cmp16((const void*)(OOC_INT32)rootTag,(const void*)((OOC_CHAR16[]){0})))!=(OOC_INT32)0;
  i1 = (OOC_INT32)w;
  if (!i0) goto l53;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5728)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "</", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5757)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5787)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5815)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i1);
l53:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5846));
  *res = (Msg__Msg)i0;
  return;
  ;
}

void OOC_Config_Source_Environment_init(void) {

  return;
  ;
}

/* --- */
