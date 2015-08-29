#include <Config/Source/CmdLine.d>
#include <__oo2c.h>

void Config_Source_CmdLine__ErrorContextDesc_GetTemplate(Config_Source_CmdLine__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 4216))+8);
  switch (i0) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){70,97,105,108,101,100,32,116,111,32,99,111,110,110,101,99,116,32,114,101,97,100,101,114,32,116,111,32,112,114,111,103,114,97,109,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){74,117,110,107,32,97,102,116,101,114,32,108,97,115,116,32,99,111,109,109,97,110,100,32,108,105,110,101,32,97,114,103,117,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,114,114,111,114,32,119,104,105,108,101,32,114,101,97,100,105,110,103,32,99,111,109,109,97,110,100,32,108,105,110,101,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    LongStrings__Append(((OOC_CHAR16[]){10,0}), 2, (void*)(OOC_INT32)t, 128);
    LongStrings__Append(((OOC_CHAR16[]){32,32,82,101,97,115,111,110,58,32,36,123,114,101,97,115,111,110,125,0}), 20, (void*)(OOC_INT32)t, 128);
    goto l9;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,107,110,111,119,110,32,99,111,109,109,97,110,100,32,108,105,110,101,32,111,112,116,105,111,110,32,96,36,123,115,116,114,105,110,103,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,116,105,111,110,32,96,36,123,115,116,114,105,110,103,125,39,32,110,101,101,100,115,32,36,123,110,117,109,98,101,114,125,32,97,114,103,117,109,101,110,116,40,115,41,32,97,110,100,32,109,117,115,116,32,115,116,97,110,100,32,102,111,114,32,105,116,115,32,111,119,110,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,116,105,111,110,32,96,36,123,115,116,114,105,110,103,125,39,32,114,101,113,117,105,114,101,115,32,36,123,110,117,109,98,101,114,125,32,112,97,114,97,109,101,116,101,114,40,115,41,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  default:
    _failed_case(i0, 4208);
    goto l9;
  }
l9:
  _copy_16((const void*)(OOC_INT32)t,(void*)(OOC_INT32)templ,templ_0d);
  return;
  ;
}

static Msg__Msg Config_Source_CmdLine__Error(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Config_Source_CmdLine__cmdLineContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

static Msg__Msg Config_Source_CmdLine__ErrorReason(OOC_INT32 code, Msg__Msg reason) {
  register OOC_INT32 i0,i1;
  Msg__Msg err;

  i0 = (OOC_INT32)Config_Source_CmdLine__cmdLineContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  err = (Msg__Msg)i0;
  i1 = (OOC_INT32)reason;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5166)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "reason", 7, (Msg__Msg)i1);
  return (Msg__Msg)i0;
  ;
}

static Msg__Msg Config_Source_CmdLine__ErrorString(OOC_INT32 code, const Config_Value__String string__ref, OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(string,OOC_CHAR8 ,string_0d)
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(string__ref,string,OOC_CHAR8 ,string_0d)
  i0 = (OOC_INT32)Config_Source_CmdLine__cmdLineContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  err = (Msg__Msg)i0;
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)string, string_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5389)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "string", 7, (Msg__StringPtr)i1);
  return (Msg__Msg)i0;
  ;
}

static Msg__Msg Config_Source_CmdLine__ErrorStringNum(OOC_INT32 code, const Config_Value__String string__ref, OOC_LEN string_0d, OOC_INT32 number) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(string,OOC_CHAR8 ,string_0d)
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(string__ref,string,OOC_CHAR8 ,string_0d)
  i0 = (OOC_INT32)Config_Source_CmdLine__cmdLineContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  err = (Msg__Msg)i0;
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)string, string_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5680)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "string", 7, (Msg__StringPtr)i1);
  i1 = number;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5744)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "number", 7, i1);
  return (Msg__Msg)i0;
  ;
}

void Config_Source_CmdLine__CommandDesc_DoNotWrite(Config_Source_CmdLine__Command command) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)command;
  *(OOC_UINT8*)((_check_pointer(i0, 5967))+12) = OOC_TRUE;
  return;
  ;
}

static void Config_Source_CmdLine__Init(Config_Source_CmdLine__CmdLine cmdLine) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)cmdLine;
  Config_Source__Init((Config_Source__Source)i0);
  *(OOC_INT32*)(_check_pointer(i0, 6089)) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 6126))+4) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 6163))+5) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 6204))+6) = OOC_TRUE;
  *(OOC_INT32*)((_check_pointer(i0, 6252))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6285))+12) = (OOC_INT32)0;
  return;
  ;
}

Config_Source_CmdLine__CmdLine Config_Source_CmdLine__New() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__CmdLine.baseTypes[0]);
  Config_Source_CmdLine__Init((Config_Source_CmdLine__CmdLine)i0);
  return (Config_Source_CmdLine__CmdLine)i0;
  ;
}

Config_Source_CmdLine__OptionTemplate Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate(Config_Source_CmdLine__CmdLine cmdLine, const OOC_CHAR8 names__ref[], OOC_LEN names_0d, const Config_Value__String transformation__ref, OOC_LEN transformation_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(names,OOC_CHAR8 ,names_0d)
  OOC_ALLOCATE_VPAR(transformation,OOC_CHAR8 ,transformation_0d)
  Config_Source_CmdLine__OptionTemplate opt;
  OOC_INT16 i;
  OOC_INT32 num;
  Config_Source_CmdLine__NameArray nameArray;
  auto void Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate_Append(Config_Source_CmdLine__OptionTemplate *list);
    
    void Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate_Append(Config_Source_CmdLine__OptionTemplate *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate_Append((void*)(_check_pointer(i0, 8741)));
      goto l4;
l3:
      i0 = (OOC_INT32)opt;
      *list = (Config_Source_CmdLine__OptionTemplate)i0;
l4:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(names__ref,names,OOC_CHAR8 ,names_0d)
  OOC_INITIALIZE_VPAR(transformation__ref,transformation,OOC_CHAR8 ,transformation_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__OptionTemplate.baseTypes[0]);
  opt = (Config_Source_CmdLine__OptionTemplate)i0;
  *(OOC_INT32*)(_check_pointer(i0, 8806)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 8828))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 8851))+8) = 0;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)transformation, transformation_0d);
  *(OOC_INT32*)((_check_pointer(i0, 8876))+12) = i1;
  i = (OOC_INT32)0;
  i1 = *(OOC_UINT8*)((OOC_INT32)transformation+(_check_index((OOC_INT32)0, transformation_0d, OOC_UINT16, 9046)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l27;
  i1=(OOC_INT32)0;
l3_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)transformation+(_check_index(i1, transformation_0d, OOC_UINT16, 9083)));
  i2 = i2==(OOC_CHAR8)'$';
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = *(OOC_UINT8*)((OOC_INT32)transformation+(_check_index((i1+1), transformation_0d, OOC_UINT16, 9128)));
  i2 = (OOC_CHAR8)'1'<=i2;
  
l8:
  if (i2) goto l10;
  i2=OOC_FALSE;
  goto l12;
l10:
  i2 = *(OOC_UINT8*)((OOC_INT32)transformation+(_check_index((i1+1), transformation_0d, OOC_UINT16, 9152)));
  i2 = i2<=(OOC_CHAR8)'9';
  
l12:
  if (i2) goto l14;
  i1 = i1+1;
  i = i1;
  
  goto l22;
l14:
  i2 = *(OOC_UINT8*)((OOC_INT32)transformation+(_check_index((i1+1), transformation_0d, OOC_UINT16, 9205)));
  i2 = i2-48;
  num = i2;
  i3 = i2>0;
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = *(OOC_INT32*)((_check_pointer(i0, 9256))+8);
  i3 = i2>i3;
  
l19:
  if (!i3) goto l21;
  *(OOC_INT32*)((_check_pointer(i0, 9287))+8) = i2;
l21:
  i1 = i1+2;
  i = i1;
  
l22:
  i2 = *(OOC_UINT8*)((OOC_INT32)transformation+(_check_index(i1, transformation_0d, OOC_UINT16, 9046)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3_loop;
l27:
  i = (OOC_INT32)0;
  i1 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index((OOC_INT32)0, names_0d, OOC_UINT16, 9549)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l30;
  i1=1;
  goto l40;
l30:
  i1=(OOC_INT32)0;i2=1;
l31_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i1, names_0d, OOC_UINT16, 9577)));
  i3 = i3==(OOC_CHAR8)',';
  if (!i3) goto l35;
  i2 = i2+1;
  
l35:
  i1 = i1+1;
  i = i1;
  i3 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i1, names_0d, OOC_UINT16, 9549)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l31_loop;
l39:
  i1=i2;
l40:
  i1 = (OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__NameArray.baseTypes[0], i1);
  nameArray = (Config_Source_CmdLine__NameArray)i1;
  num = 0;
  i2 = (
  _cmp8((const void*)(OOC_INT32)names,(const void*)""))!=(OOC_INT32)0;
  if (!i2) goto l69;
  i2=0;
l43_loop:
  i = (OOC_INT32)0;
  i3 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index((OOC_INT32)0, names_0d, OOC_UINT16, 9748)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l46;
  i3=OOC_FALSE;
  goto l48;
l46:
  i3 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index((OOC_INT32)0, names_0d, OOC_UINT16, 9766)));
  i3 = i3!=(OOC_CHAR8)',';
  
l48:
  if (i3) goto l50;
  i3=(OOC_INT32)0;
  goto l60;
l50:
  i3=(OOC_INT32)0;
l51_loop:
  i3 = i3+1;
  i = i3;
  i4 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i3, names_0d, OOC_UINT16, 9748)));
  i4 = i4!=(OOC_CHAR8)'\000';
  if (i4) goto l54;
  i4=OOC_FALSE;
  goto l56;
l54:
  i4 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i3, names_0d, OOC_UINT16, 9766)));
  i4 = i4!=(OOC_CHAR8)',';
  
l56:
  if (i4) goto l51_loop;
l60:
  i4 = *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i3, names_0d, OOC_UINT16, 9822)));
  i4 = i4==(OOC_CHAR8)'\000';
  if (i4) goto l63;
  *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i3, names_0d, OOC_UINT16, 9938))) = (OOC_CHAR8)'\000';
  i4 = _check_pointer(i1, 9966);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)names, names_0d);
  *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 9966))*4) = i6;
  *(OOC_UINT8*)((OOC_INT32)names+(_check_index(i3, names_0d, OOC_UINT16, 10016))) = (OOC_CHAR8)',';
  Strings__Delete((void*)(OOC_INT32)names, names_0d, (OOC_INT32)0, (i3+1));
  goto l64;
l63:
  i3 = _check_pointer(i1, 9854);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)names, names_0d);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9854))*4) = i5;
  *(OOC_UINT8*)((OOC_INT32)names+(_check_index(0, names_0d, OOC_UINT8, 9904))) = (OOC_CHAR8)'\000';
l64:
  i2 = i2+1;
  num = i2;
  i3 = (
  _cmp8((const void*)(OOC_INT32)names,(const void*)""))!=(OOC_INT32)0;
  if (i3) goto l43_loop;
l69:
  *(OOC_INT32*)((_check_pointer(i0, 10110))+4) = i1;
  i0 = (OOC_INT32)cmdLine;
  Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate_Append((void*)(_check_pointer(i0, 10151)));
  i0 = (OOC_INT32)opt;
  return (Config_Source_CmdLine__OptionTemplate)i0;
  ;
}

void Config_Source_CmdLine__CmdLineDesc_EnableDashDash(Config_Source_CmdLine__CmdLine cmdLine, OOC_CHAR8 enable) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cmdLine;
  i1 = enable;
  *(OOC_UINT8*)((_check_pointer(i0, 10624))+4) = i1;
  return;
  ;
}

void Config_Source_CmdLine__CmdLineDesc_EnableExpandToSingleChar(Config_Source_CmdLine__CmdLine cmdLine, OOC_CHAR8 enable) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cmdLine;
  i1 = enable;
  *(OOC_UINT8*)((_check_pointer(i0, 11037))+5) = i1;
  return;
  ;
}

void Config_Source_CmdLine__CmdLineDesc_OptionsStartWithDash(Config_Source_CmdLine__CmdLine cmdLine, OOC_CHAR8 enable) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cmdLine;
  i1 = enable;
  *(OOC_UINT8*)((_check_pointer(i0, 11537))+6) = i1;
  return;
  ;
}

Msg__Msg Config_Source_CmdLine__CmdLineDesc_Parse(Config_Source_CmdLine__CmdLine cmdLine, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 numArgs;
  Config_Source_CmdLine__ArgList argList;
  TextRider__Reader r;
  OOC_CHAR8 argString[2048];
  OOC_INT32 restArg;
  OOC_INT32 i;
  Config_Value__StringPtr arg;
  Config_Source_CmdLine__OptionTemplate cmd;
  Msg__Msg msg;
  OOC_CHAR8 singleCharCmd[3];
  OOC_INT32 j;
  auto void Config_Source_CmdLine__CmdLineDesc_Parse_Append(OOC_CHAR8 arg[], OOC_LEN arg_0d);
  auto Config_Source_CmdLine__OptionTemplate Config_Source_CmdLine__CmdLineDesc_Parse_FindOptionTemplate(Config_Value__String name, OOC_LEN name_0d);
  auto Msg__Msg Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption(const Config_Value__String argString__ref, OOC_LEN argString_0d, Config_Source_CmdLine__OptionTemplate cmd, OOC_INT32 *optIndex);
    
    void Config_Source_CmdLine__CmdLineDesc_Parse_Append(OOC_CHAR8 arg[], OOC_LEN arg_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      Config_Source_CmdLine__ArgList newList;
      OOC_INT32 i;

      i0 = (OOC_INT32)argList;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13653)), (OOC_INT32)0);
      i2 = numArgs;
      i1 = i2==i1;
      if (!i1) goto l19;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13696)), (OOC_INT32)0);
      i1 = (OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__ArgList.baseTypes[0], (i1*2));
      newList = (Config_Source_CmdLine__ArgList)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13737)), (OOC_INT32)0);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l10;
      i4=0;
l5_loop:
      i5 = _check_pointer(i1, 13762);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = _check_pointer(i0, 13776);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 13776))*4);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13762))*4) = i7;
      i4 = i4+1;
      i5 = i4<=i3;
      i = i4;
      if (i5) goto l5_loop;
l10:
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13840)), (OOC_INT32)0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13822)), (OOC_INT32)0);
      i3 = (i3*2)-1;
      i4 = i0<=i3;
      i = i0;
      if (!i4) goto l18;
l13_loop:
      i4 = _check_pointer(i1, 13867);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      *(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 13867))*4) = (OOC_INT32)0;
      i0 = i0+1;
      i4 = i0<=i3;
      i = i0;
      if (i4) goto l13_loop;
l18:
      argList = (Config_Source_CmdLine__ArgList)i1;
l19:
      i0 = (OOC_INT32)argList;
      i0 = _check_pointer(i0, 13954);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i3 = Strings__Length((void*)(OOC_INT32)arg, arg_0d);
      *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 13954))*4) = ((OOC_INT32)RT0__NewObject(_td_Config_Value__StringPtr.baseTypes[0], (i3+1)));
      i0 = (OOC_INT32)argList;
      i1 = _check_pointer(i0, 14014);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = numArgs;
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 14014))*4);
      i0 = _check_pointer(i0, 14014);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i3, i2, OOC_UINT32, 14014))*4);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14023)), (OOC_INT32)0);
      _copy_8((const void*)(OOC_INT32)arg,(void*)(_check_pointer(i1, 14023)),i0);
      numArgs = (i3+1);
      return;
      ;
    }

    
    Config_Source_CmdLine__OptionTemplate Config_Source_CmdLine__CmdLineDesc_Parse_FindOptionTemplate(Config_Value__String name, OOC_LEN name_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      Config_Source_CmdLine__OptionTemplate o;
      OOC_INT32 i;

      i0 = (OOC_INT32)cmdLine;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14218));
      i1 = i0!=(OOC_INT32)0;
      o = (Config_Source_CmdLine__OptionTemplate)i0;
      if (!i1) goto l19;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14290))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14297)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l14;
      i2=0;
l6_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14320))+4);
      i3 = _check_pointer(i3, 14327);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 14327))*4);
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 14330)),(const void*)(OOC_INT32)name))==(OOC_INT32)0;
      if (!i3) goto l9;
      return (Config_Source_CmdLine__OptionTemplate)i0;
l9:
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l6_loop;
l14:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14407));
      o = (Config_Source_CmdLine__OptionTemplate)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l19:
      return (Config_Source_CmdLine__OptionTemplate)(OOC_INT32)0;
      ;
    }

    
    Msg__Msg Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption(const Config_Value__String argString__ref, OOC_LEN argString_0d, Config_Source_CmdLine__OptionTemplate cmd, OOC_INT32 *optIndex) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
      OOC_ALLOCATE_VPAR(argString,OOC_CHAR8 ,argString_0d)
      Config_Source_CmdLine__Command command;
      OOC_INT32 i;
      auto void Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption_Append(Config_Source_CmdLine__Command *list);
        
        void Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption_Append(Config_Source_CmdLine__Command *list) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)*list;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l3;
          Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption_Append((void*)(_check_pointer(i0, 14799)));
          goto l4;
l3:
          i0 = (OOC_INT32)command;
          *list = (Config_Source_CmdLine__Command)i0;
l4:
          return;
          ;
        }


      OOC_INITIALIZE_VPAR(argString__ref,argString,OOC_CHAR8 ,argString_0d)
      i0 = (OOC_INT32)cmd;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 14881))+8);
      i2 = *optIndex;
      i3 = numArgs;
      i1 = (i2+i1)>=i3;
      if (i1) goto l11;
      i1 = (OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__Command.baseTypes[0]);
      command = (Config_Source_CmdLine__Command)i1;
      *(OOC_INT32*)(_check_pointer(i1, 15034)) = (OOC_INT32)0;
      *(OOC_INT32*)((_check_pointer(i1, 15071))+4) = i0;
      *(OOC_UINT8*)((_check_pointer(i1, 15105))+12) = OOC_FALSE;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 15162))+8);
      *(OOC_INT32*)((_check_pointer(i1, 15148))+8) = ((OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__ArgList.baseTypes[0], i3));
      i3 = *(OOC_INT32*)((_check_pointer(i0, 15201))+8);
      i3 = i3-1;
      i4 = 0<=i3;
      i = 0;
      if (!i4) goto l10;
      i4 = i2+1;
      i5 = (OOC_INT32)argList;
      i6=0;
l5_loop:
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15235))+8);
      i7 = _check_pointer(i7, 15244);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i9 = _check_pointer(i5, 15258);
      i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
      i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index((i4+i6), i10, OOC_UINT32, 15258))*4);
      *(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 15244))*4) = i9;
      i6 = i6+1;
      i7 = i6<=i3;
      i = i6;
      if (i7) goto l5_loop;
l10:
      i0 = *(OOC_INT32*)((_check_pointer(i0, 15312))+8);
      *optIndex = (i2+i0);
      i0 = (OOC_INT32)cmdLine;
      Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption_Append((void*)((_check_pointer(i0, 15349))+8));
      return (Msg__Msg)(OOC_INT32)0;
      goto l12;
l11:
      i0 = *(OOC_INT32*)((_check_pointer(i0, 14972))+8);
      i0 = (OOC_INT32)Config_Source_CmdLine__ErrorStringNum(6, (void*)(OOC_INT32)argString, argString_0d, i0);
      return (Msg__Msg)i0;
l12:
      _failed_function(14485); return 0;
      ;
    }


  numArgs = 0;
  argList = (Config_Source_CmdLine__ArgList)((OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__ArgList.baseTypes[0], 8));
  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectReader((Channel__Channel)i0);
  i1 = i0==(OOC_INT32)0;
  r = (TextRider__Reader)i0;
  if (i1) goto l25;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15652));
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l13;
l5_loop:
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15686)))), TextRider__ReaderDesc_ReadLine)),TextRider__ReaderDesc_ReadLine)((TextRider__Reader)i0, (void*)(OOC_INT32)argString, 2048);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15723));
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l8;
  Config_Source_CmdLine__CmdLineDesc_Parse_Append((void*)(OOC_INT32)argString, 2048);
l8:
  i0 = (OOC_INT32)r;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15652));
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l5_loop;
l13:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15813));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 15818))+8);
  i1 = i1==5;
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l18;
l16:
  i1 = *(OOC_UINT8*)((OOC_INT32)argString+(_check_index(0, 2048, OOC_UINT8, 15861)));
  i1 = i1!=(OOC_CHAR8)'\000';
  
l18:
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15926));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 15931))+8);
  i1 = i1!=5;
  if (!i1) goto l26;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16007));
  i0 = (OOC_INT32)Config_Source_CmdLine__ErrorReason(3, (Msg__Msg)i0);
  return (Msg__Msg)i0;
  goto l26;
l23:
  i0 = (OOC_INT32)Config_Source_CmdLine__Error(2);
  return (Msg__Msg)i0;
  goto l26;
l25:
  i0 = (OOC_INT32)Config_Source_CmdLine__Error(1);
  return (Msg__Msg)i0;
l26:
  restArg = -1;
  i0 = numArgs;
  i0 = 1<i0;
  i = 1;
  if (i0) goto l29;
  i0=OOC_FALSE;
  goto l31;
l29:
  i0=OOC_TRUE;
l31:
  if (!i0) goto l96;
  i0=1;
l33_loop:
  i1 = (OOC_INT32)argList;
  i1 = _check_pointer(i1, 16231);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 16231))*4);
  arg = (Config_Value__StringPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16354)), (OOC_INT32)0);
  i0 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_Parse_FindOptionTemplate((void*)(_check_pointer(i0, 16354)), i1);
  cmd = (Config_Source_CmdLine__OptionTemplate)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l83;
  i0 = (OOC_INT32)cmdLine;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 16506))+4);
  if (i1) goto l38;
  i1=OOC_FALSE;
  goto l40;
l38:
  i1 = (OOC_INT32)arg;
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 16529)),(const void*)"--"))==(OOC_INT32)0;
  
l40:
  if (i1) goto l81;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 16608))+5);
  if (i1) goto l44;
  i1=OOC_FALSE;
  goto l46;
l44:
  i1 = (OOC_INT32)arg;
  i1 = _check_pointer(i1, 16635);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 16635)));
  i1 = i1==(OOC_CHAR8)'-';
  
l46:
  if (i1) goto l48;
  i1=OOC_FALSE;
  goto l50;
l48:
  i1 = (OOC_INT32)arg;
  i1 = _check_pointer(i1, 16652);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(1, i2, OOC_UINT8, 16652)));
  i1 = i1!=(OOC_CHAR8)'-';
  
l50:
  if (i1) goto l60;
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 17414))+6);
  if (i0) goto l54;
  i0=OOC_FALSE;
  goto l56;
l54:
  i0 = (OOC_INT32)arg;
  i0 = _check_pointer(i0, 17443);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 17443)));
  i0 = i0==(OOC_CHAR8)'-';
  
l56:
  if (i0) goto l58;
  i0 = i;
  restArg = i0;
  goto l87;
l58:
  i0 = (OOC_INT32)arg;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17505)), (OOC_INT32)0);
  i0 = (OOC_INT32)Config_Source_CmdLine__ErrorString(4, (void*)(_check_pointer(i0, 17505)), i1);
  return (Msg__Msg)i0;
  goto l87;
l60:
  _copy_8((const void*)"-?",(void*)(OOC_INT32)singleCharCmd,3);
  j = 1;
  i0 = (OOC_INT32)arg;
  i0 = _check_pointer(i0, 16848);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(1, i1, OOC_UINT32, 16848)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l87;
  i0=1;
l63_loop:
  i1 = (OOC_INT32)arg;
  i1 = _check_pointer(i1, 16894);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 16894)));
  *(OOC_UINT8*)((OOC_INT32)singleCharCmd+(_check_index(1, 3, OOC_UINT8, 16884))) = i0;
  i0 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_Parse_FindOptionTemplate((void*)(OOC_INT32)singleCharCmd, 3);
  cmd = (Config_Source_CmdLine__OptionTemplate)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l73;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 17064))+8);
  i1 = i1!=0;
  if (i1) goto l71;
  i0 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption((void*)(OOC_INT32)singleCharCmd, 3, (Config_Source_CmdLine__OptionTemplate)i0, (void*)(OOC_INT32)&i);
  msg = (Msg__Msg)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l74;
  return (Msg__Msg)i0;
  goto l74;
l71:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 17194))+8);
  i0 = (OOC_INT32)Config_Source_CmdLine__ErrorStringNum(5, (void*)(OOC_INT32)singleCharCmd, 3, i0);
  return (Msg__Msg)i0;
  goto l74;
l73:
  i0 = (OOC_INT32)Config_Source_CmdLine__ErrorString(4, (void*)(OOC_INT32)singleCharCmd, 3);
  return (Msg__Msg)i0;
l74:
  i0 = j;
  i0 = i0+1;
  j = i0;
  i1 = (OOC_INT32)arg;
  i1 = _check_pointer(i1, 16848);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 16848)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l63_loop;
  goto l87;
l81:
  i0 = i;
  restArg = (i0+1);
  goto l87;
l83:
  i1 = (OOC_INT32)arg;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16414)), (OOC_INT32)0);
  i0 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_Parse_EvalOption((void*)(_check_pointer(i1, 16414)), i2, (Config_Source_CmdLine__OptionTemplate)i0, (void*)(OOC_INT32)&i);
  msg = (Msg__Msg)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l87;
  return (Msg__Msg)i0;
l87:
  i0 = i;
  i0 = i0+1;
  i1 = numArgs;
  i1 = i0<i1;
  i = i0;
  if (i1) goto l90;
  i1=OOC_FALSE;
  goto l92;
l90:
  i1 = restArg;
  i1 = i1<0;
  
l92:
  if (i1) goto l33_loop;
l96:
  i0 = restArg;
  i0 = i0<0;
  i1 = numArgs;
  if (!i0) goto l99;
  restArg = i1;
l99:
  i0 = restArg;
  i2 = (OOC_INT32)cmdLine;
  *(OOC_INT32*)((_check_pointer(i2, 17772))+12) = ((OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__ArgList.baseTypes[0], (i1-i0)));
  i1 = i1-1;
  i3 = i0<=i1;
  i = i0;
  if (!i3) goto l107;
  i3 = (OOC_INT32)argList;
  i4=i0;
l102_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17856))+12);
  i5 = _check_pointer(i5, 17870);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i3, 17892);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 17892))*4);
  *(OOC_INT32*)(i5+(_check_index((i4-i0), i6, OOC_UINT32, 17870))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i1;
  i = i4;
  if (i5) goto l102_loop;
l107:
  return (Msg__Msg)(OOC_INT32)0;
  ;
}

void Config_Source_CmdLine__CmdLineDesc_Write(Config_Source_CmdLine__CmdLine cmdLine, Channel__Channel ch, const Config_Parser__String rootTag__ref, OOC_LEN rootTag_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(rootTag,OOC_CHAR16 ,rootTag_0d)
  TextRider__Writer w;
  OOC_CHAR8 root8[1024];
  Config_Source_CmdLine__Command command;
  Config_Value__StringPtr pattern;
  OOC_INT32 i;
  OOC_INT32 j;
  auto void Config_Source_CmdLine__CmdLineDesc_Write_WriteQuoted(TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d);
    
    void Config_Source_CmdLine__CmdLineDesc_Write_WriteQuoted(TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d) {
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
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 19920)));
      i3 = i3!=(OOC_CHAR8)'&';
      
l8:
      if (i3) goto l10;
      i3=OOC_FALSE;
      goto l12;
l10:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 19951)));
      i3 = i3!=(OOC_CHAR8)'<';
      
l12:
      if (i3) goto l14;
      i3=OOC_FALSE;
      goto l16;
l14:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 19968)));
      i3 = i3!=(OOC_CHAR8)'>';
      
l16:
      if (i3) goto l18;
      i3=OOC_FALSE;
      goto l20;
l18:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 19999)));
      i3 = i3!=(OOC_CHAR8)'\047';
      
l20:
      if (i3) goto l22;
      i3=OOC_FALSE;
      goto l24;
l22:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 20016)));
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
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 19920)));
      i4 = i4!=(OOC_CHAR8)'&';
      
l32:
      if (i4) goto l34;
      i4=OOC_FALSE;
      goto l36;
l34:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 19951)));
      i4 = i4!=(OOC_CHAR8)'<';
      
l36:
      if (i4) goto l38;
      i4=OOC_FALSE;
      goto l40;
l38:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 19968)));
      i4 = i4!=(OOC_CHAR8)'>';
      
l40:
      if (i4) goto l42;
      i4=OOC_FALSE;
      goto l44;
l42:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 19999)));
      i4 = i4!=(OOC_CHAR8)'\047';
      
l44:
      if (i4) goto l46;
      i4=OOC_FALSE;
      goto l48;
l46:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 20016)));
      i4 = i4!=(OOC_CHAR8)'"';
      
l48:
      if (i4) goto l27_loop;
l52:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20070))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20070))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 20082)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i5, (void*)(OOC_INT32)str, -1, i2, (i3-i2));
      i2 = i3!=i0;
      if (i2) goto l55;
      i2=i3;
      goto l64;
l55:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 20158)));
      switch (i2) {
      case (OOC_CHAR8)'&':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20183)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&amp;", 6);
        goto l63;
      case (OOC_CHAR8)'<':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20225)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&lt;", 5);
        goto l63;
      case (OOC_CHAR8)'>':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20266)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&gt;", 5);
        goto l63;
      case (OOC_CHAR8)'\047':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20307)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&apos;", 7);
        goto l63;
      case (OOC_CHAR8)'"':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20350)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&quot;", 7);
        goto l63;
      default:
        _failed_case(i2, 20150);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20535));
  *res = (Msg__Msg)i1;
  return;
l3:
  i1 = (
  _cmp16((const void*)(OOC_INT32)rootTag,(const void*)((OOC_CHAR16[]){0})))!=(OOC_INT32)0;
  if (!i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20678)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<?xml version=\0471.0\047 encoding=\047ISO-8859-1\047 standalone=\047yes\047?>", 61);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20765)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  LongStrings__Short((void*)(OOC_INT32)rootTag, rootTag_0d, (OOC_CHAR8)'?', (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20830)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20858)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20888)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20916)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l6:
  i0 = (OOC_INT32)cmdLine;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20962))+8);
  command = (Config_Source_CmdLine__Command)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l54;
l9_loop:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 21023))+12);
  i1 = !i1;
  if (!i1) goto l49;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21067))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21077))+12);
  pattern = (Config_Value__StringPtr)i0;
  i = 0;
  i0 = _check_pointer(i0, 21126);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 21126)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l48;
  i0=0;
l14_loop:
  j = i0;
  i1 = (OOC_INT32)pattern;
  i2 = _check_pointer(i1, 21181);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 21181)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l19;
l17:
  i2 = _check_pointer(i1, 21201);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 21201)));
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
  i3 = _check_pointer(i1, 21181);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 21181)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l25;
  i3=OOC_FALSE;
  goto l27;
l25:
  i3 = _check_pointer(i1, 21201);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 21201)));
  i3 = i3!=(OOC_CHAR8)'$';
  
l27:
  if (i3) goto l22_loop;
l31:
  i3 = _check_pointer(i1, 21272);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 21272)));
  i3 = i3==(OOC_CHAR8)'$';
  if (i3) goto l34;
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21661))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21661))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 21673)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i3, (void*)(_check_pointer(i1, 21694)), -1, i0, (i2-i0));
  i0=i2;
  goto l43;
l34:
  i3 = _check_pointer(i1, 21318);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = i2+1;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 21318)));
  i3 = (OOC_CHAR8)'1'<=i3;
  if (i3) goto l37;
  i3=OOC_FALSE;
  goto l39;
l37:
  i3 = _check_pointer(i1, 21335);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 21335)));
  i3 = i3<=(OOC_CHAR8)'9';
  
l39:
  if (i3) goto l41;
  i = i5;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21573))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21573))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21585)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(_check_pointer(i1, 21606)), -1, i0, (i5-i0));
  i0=i5;
  goto l43;
l41:
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21369))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21369))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 21381)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i6, (void*)(_check_pointer(i1, 21402)), -1, i0, (i2-i0));
  i0 = (OOC_INT32)command;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21451))+8);
  i2 = _check_pointer(i2, 21460);
  i4 = _check_pointer(i1, 21473);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i5, i6, OOC_UINT32, 21473)));
  i6 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i4-49), i6, OOC_UINT16, 21460))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21451))+8);
  i0 = _check_pointer(i0, 21460);
  i1 = _check_pointer(i1, 21473);
  i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i5, i4, OOC_UINT32, 21473)));
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index((i1-49), i4, OOC_UINT16, 21460))*4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21489)), (OOC_INT32)0);
  Config_Source_CmdLine__CmdLineDesc_Write_WriteQuoted((TextRider__Writer)i3, (void*)(_check_pointer(i2, 21489)), i0);
  i0 = i;
  i0 = i0+2;
  i = i0;
  
l43:
  i1 = (OOC_INT32)pattern;
  i1 = _check_pointer(i1, 21126);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 21126)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l14_loop;
l48:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21741)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l49:
  i0 = (OOC_INT32)command;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21786));
  command = (Config_Source_CmdLine__Command)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l9_loop;
l54:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21819)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<arguments>", 12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21855)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)cmdLine;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21881))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l65;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21940))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21954)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l65;
  i1=0;
l59_loop:
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21971)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "  <arg>", 8);
  i3 = (OOC_INT32)cmdLine;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22029))+12);
  i4 = _check_pointer(i4, 22043);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 22043))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22029))+12);
  i3 = _check_pointer(i3, 22043);
  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i5, OOC_UINT32, 22043))*4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22046)), (OOC_INT32)0);
  Config_Source_CmdLine__CmdLineDesc_Write_WriteQuoted((TextRider__Writer)i2, (void*)(_check_pointer(i4, 22046)), i1);
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22059)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "</arg>", 7);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22094)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i1);
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l59_loop;
l65:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22128)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</arguments>", 13);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22165)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i1 = (
  _cmp16((const void*)(OOC_INT32)rootTag,(const void*)((OOC_CHAR16[]){0})))!=(OOC_INT32)0;
  if (!i1) goto l68;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22215)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22244)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)root8, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22274)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22302)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l68:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22333));
  *res = (Msg__Msg)i0;
  return;
  ;
}

void OOC_Config_Source_CmdLine_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Source_CmdLine__ErrorContext.baseTypes[0]);
  Config_Source_CmdLine__cmdLineContext = (Config_Source_CmdLine__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "Config:Source:CmdLine", 22);
  return;
  ;
}

/* --- */
