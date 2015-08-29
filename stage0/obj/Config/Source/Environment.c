#include <Config/Source/Environment.d>
#include <__oo2c.h>
#include <setjmp.h>

static void Config_Source_Environment__Init(Config_Source_Environment__Environment env) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)env;
  Config_Source__Init((Config_Source__Source)i0);
  return;
  ;
}

Config_Source_Environment__Environment Config_Source_Environment__New(void) {
  register OOC_INT32 i0;
  Config_Source_Environment__Environment env;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Source_Environment__Environment.baseTypes[0]);
  env = (Config_Source_Environment__Environment)i0;
  Config_Source_Environment__Init((Config_Source_Environment__Environment)i0);
  *(OOC_INT32*)(_check_pointer(i0, 1733)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 1768))+4) = 0;
  return (Config_Source_Environment__Environment)i0;
  ;
}

void Config_Source_Environment__CommandDesc_DoNotWrite(Config_Source_Environment__Command command) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)command;
  *(OOC_UINT8*)((_check_pointer(i0, 1970))+12) = 1u;
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
      Config_Source_Environment__EnvironmentDesc_AddVariableTemplate_Append((void*)(_check_pointer(i0, 2480)));
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
  *(OOC_INT32*)(_check_pointer(i0, 2545)) = 0;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2565))+4) = i1;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)transformation, transformation_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2607))+8) = i1;
  i0 = (OOC_INT32)env;
  Config_Source_Environment__EnvironmentDesc_AddVariableTemplate_Append((void*)(_check_pointer(i0, 2672)));
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
      Config_Source_Environment__EnvironmentDesc_Parse_Append((void*)(_check_pointer(i0, 3016)));
      goto l4;
l3:
      i0 = (OOC_INT32)cmd;
      *list = (Config_Source_Environment__Command)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)env;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3080));
  t = (Config_Source_Environment__VariableTemplate)i0;
  i1 = i0!=0;
  if (!i1) goto l11;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3152))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3152))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3158)), 0);
  i1 = RT0__GetEnv((void*)(_check_pointer(i1, 3158)), i2, (void*)(OOC_INT32)value, 1024);
  found = i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)RT0__NewObject(_td_Config_Source_Environment__Command.baseTypes[0]);
  cmd = (Config_Source_Environment__Command)i1;
  *(OOC_INT32*)(_check_pointer(i1, 3219)) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 3252))+4) = i0;
  i0 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)value, 1024);
  *(OOC_INT32*)((_check_pointer(i1, 3280))+8) = i0;
  *(OOC_UINT8*)((_check_pointer(i1, 3333))+12) = 0u;
  i0 = (OOC_INT32)env;
  Config_Source_Environment__EnvironmentDesc_Parse_Append((void*)((_check_pointer(i0, 3375))+4));
l6:
  i0 = (OOC_INT32)t;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3413));
  t = (Config_Source_Environment__VariableTemplate)i0;
  i1 = i0!=0;
  if (i1) goto l3_loop;
l11:
  return (Msg__Msg)0;
  ;
}

void Config_Source_Environment__EnvironmentDesc_Write(Config_Source_Environment__Environment env, IO__ByteChannel ch, const Config_Parser__String rootTag__ref, OOC_LEN rootTag_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(rootTag,OOC_CHAR16 ,rootTag_0d)
  IO_TextRider__Writer w;
  OOC_CHAR8 root8[1024];
  Config_Source_Environment__Command command;
  Config_Value__StringPtr pattern;
  OOC_INT32 i;
  OOC_INT32 j;
  auto void Config_Source_Environment__EnvironmentDesc_Write_WriteQuoted(IO_TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d);
    
    void Config_Source_Environment__EnvironmentDesc_Write_WriteQuoted(IO_TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 s;
      OOC_INT32 e;
      OOC_INT32 last;

      s = 0;
      i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
      e = i0;
      i1 = 0!=i0;
      if (!i1) goto l69;
      i2 = (OOC_INT32)w;
      i3=i1;i1=0;
l3_loop:
      last = i1;
      if (i3) goto l6;
      i3=0u;
      goto l8;
l6:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 3942)));
      i3 = i3!=38u;
      
l8:
      if (i3) goto l10;
      i3=0u;
      goto l12;
l10:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 3973)));
      i3 = i3!=60u;
      
l12:
      if (i3) goto l14;
      i3=0u;
      goto l16;
l14:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 3990)));
      i3 = i3!=62u;
      
l16:
      if (i3) goto l18;
      i3=0u;
      goto l20;
l18:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 4021)));
      i3 = i3!=39u;
      
l20:
      if (i3) goto l22;
      i3=0u;
      goto l24;
l22:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 4038)));
      i3 = i3!=34u;
      
l24:
      if (i3) goto l26;
      i3=i1;
      goto l52;
l26:
      i3=i1;
l27_loop:
      i3 = i3+1;
      s = i3;
      i4 = i3!=i0;
      if (i4) goto l30;
      i4=0u;
      goto l32;
l30:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 3942)));
      i4 = i4!=38u;
      
l32:
      if (i4) goto l34;
      i4=0u;
      goto l36;
l34:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 3973)));
      i4 = i4!=60u;
      
l36:
      if (i4) goto l38;
      i4=0u;
      goto l40;
l38:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 3990)));
      i4 = i4!=62u;
      
l40:
      if (i4) goto l42;
      i4=0u;
      goto l44;
l42:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4021)));
      i4 = i4!=39u;
      
l44:
      if (i4) goto l46;
      i4=0u;
      goto l48;
l46:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4038)));
      i4 = i4!=34u;
      
l48:
      if (i4) goto l27_loop;
l52:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4092)))), IO_TextRider__WriterDesc_WriteStringRegion)),IO_TextRider__WriterDesc_WriteStringRegion)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)str, str_0d, i1, i3);
      i1 = i3!=i0;
      if (i1) goto l55;
      i1=i3;
      goto l64;
l55:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4170)));
      switch (i1) {
      case 38u:
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4195)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&amp;", 6);
        goto l63;
      case 60u:
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4237)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&lt;", 5);
        goto l63;
      case 62u:
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4278)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&gt;", 5);
        goto l63;
      case 39u:
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4319)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&apos;", 7);
        goto l63;
      case 34u:
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4362)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&quot;", 7);
        goto l63;
      default:
        _failed_case(i1, 4162);
        goto l63;
      }
l63:
      i1 = i3+1;
      s = i1;
      
l64:
      i3 = i1!=i0;
      if (i3) goto l3_loop;
l69:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(rootTag__ref,rootTag,OOC_CHAR16 ,(rootTag_0d*2))
  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)IO_TextRider__ConnectWriter((IO__ByteChannel)i0);
  w = (IO_TextRider__Writer)i0;
  i1 = (
  _cmp16((const void*)(OOC_INT32)rootTag,(const void*)((OOC_CHAR16[]){0})))!=0;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4622)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "<?xml version=\0471.0\047 encoding=\047ISO-8859-1\047 standalone=\047yes\047?>", 61);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4709)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  LongStrings__Short((void*)(OOC_INT32)rootTag, rootTag_0d, 63u, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4774)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4802)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4832)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4860)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
l3:
  i0 = (OOC_INT32)env;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4902))+4);
  command = (Config_Source_Environment__Command)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l47;
l6_loop:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4963))+12);
  i1 = !i1;
  if (!i1) goto l42;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5007))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5017))+8);
  pattern = (Config_Value__StringPtr)i0;
  i = 0;
  i0 = _check_pointer(i0, 5066);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 5066)));
  i0 = i0!=0u;
  if (!i0) goto l41;
  i0=0;
l11_loop:
  j = i0;
  i1 = (OOC_INT32)pattern;
  i2 = _check_pointer(i1, 5121);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5121)));
  i2 = i2!=0u;
  if (i2) goto l14;
  i2=0u;
  goto l16;
l14:
  i2 = _check_pointer(i1, 5141);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5141)));
  i2 = i2!=36u;
  
l16:
  if (i2) goto l18;
  i2=i0;
  goto l28;
l18:
  i2=i0;
l19_loop:
  i2 = i2+1;
  i = i2;
  i3 = _check_pointer(i1, 5121);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5121)));
  i3 = i3!=0u;
  if (i3) goto l22;
  i3=0u;
  goto l24;
l22:
  i3 = _check_pointer(i1, 5141);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5141)));
  i3 = i3!=36u;
  
l24:
  if (i3) goto l19_loop;
l28:
  i3 = _check_pointer(i1, 5212);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 5212)));
  i3 = i3==36u;
  if (i3) goto l31;
  i3=0u;
  goto l33;
l31:
  i3 = _check_pointer(i1, 5233);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2+1), i4, OOC_UINT32, 5233)));
  i3 = i3==49u;
  
l33:
  if (i3) goto l35;
  i3 = (OOC_INT32)w;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5430)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5402)))), IO_TextRider__WriterDesc_WriteStringRegion)),IO_TextRider__WriterDesc_WriteStringRegion)((IO_TextRider__Writer)i3, (void*)(_check_pointer(i1, 5430)), i4, i0, i2);
  i0=i2;
  goto l36;
l35:
  i3 = (OOC_INT32)w;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5292)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5264)))), IO_TextRider__WriterDesc_WriteStringRegion)),IO_TextRider__WriterDesc_WriteStringRegion)((IO_TextRider__Writer)i3, (void*)(_check_pointer(i1, 5292)), i4, i0, i2);
  i0 = (OOC_INT32)command;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5337))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5337))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5347)), 0);
  Config_Source_Environment__EnvironmentDesc_Write_WriteQuoted((IO_TextRider__Writer)i3, (void*)(_check_pointer(i1, 5347)), i0);
  i0 = i;
  i0 = i0+2;
  i = i0;
  
l36:
  i1 = (OOC_INT32)pattern;
  i1 = _check_pointer(i1, 5066);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 5066)));
  i1 = i1!=0u;
  if (i1) goto l11_loop;
l41:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5475)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
l42:
  i0 = (OOC_INT32)command;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5520));
  command = (Config_Source_Environment__Command)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l47:
  i0 = (
  _cmp16((const void*)(OOC_INT32)rootTag,(const void*)((OOC_CHAR16[]){0})))!=0;
  if (!i0) goto l50;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5582)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "</", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5611)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5641)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5669)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
l50:
  return;
  ;
}

void OOC_Config_Source_Environment_init(void) {

  return;
  ;
}

/* --- */
