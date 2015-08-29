#include <Config/Section/Options.d>
#include <__oo2c.h>

void Config_Section_Options__ErrorContextDesc_GetTemplate(Config_Section_Options__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1029))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,99,111,110,116,101,110,116,32,102,111,114,32,101,108,101,109,101,110,116,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){65,116,116,114,105,98,117,116,101,32,96,36,123,110,97,109,101,125,39,32,105,115,32,110,111,116,32,100,101,102,105,110,101,100,32,102,111,114,32,116,104,105,115,32,101,108,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,110,97,109,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,114,101,113,117,105,114,101,115,32,97,110,32,97,116,116,114,105,98,117,116,101,32,96,116,121,112,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,109,117,115,116,32,99,111,110,116,97,105,110,32,99,104,97,114,97,99,116,101,114,32,100,97,116,97,32,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,116,105,111,110,32,96,36,123,110,97,109,101,125,39,32,105,115,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,116,105,111,110,32,96,36,123,110,97,109,101,125,39,32,105,115,32,110,111,116,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,96,36,123,116,121,112,101,125,39,32,105,115,32,110,111,116,32,115,117,112,112,111,114,116,101,100,32,102,111,114,32,111,112,116,105,111,110,32,118,97,114,105,97,98,108,101,115,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,118,97,108,117,101,58,32,36,123,114,101,97,115,111,110,125,0}),(void*)(OOC_INT32)t,128);
    goto l12;
  default:
    _failed_case(i1, 1021);
    goto l12;
  }
l12:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1765)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void Config_Section_Options__Init(Config_Section_Options__Section s, const Config_Parser__String id__ref, OOC_LEN id_0d, Config_Value__PrototypeList typeList) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR16 ,id_0d)

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR16 ,(id_0d*2))
  i0 = (OOC_INT32)s;
  Config_Section__Init((Config_Section__Section)i0, (void*)(OOC_INT32)id, id_0d);
  *(OOC_INT32*)((_check_pointer(i0, 1932))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)typeList;
  *(OOC_INT32*)((_check_pointer(i0, 1958))+8) = i1;
  return;
  ;
}

Config_Section_Options__Section Config_Section_Options__New(const Config_Parser__String sectionName__ref, OOC_LEN sectionName_0d, Config_Value__PrototypeList typeList) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(sectionName,OOC_CHAR16 ,sectionName_0d)

  OOC_INITIALIZE_VPAR(sectionName__ref,sectionName,OOC_CHAR16 ,(sectionName_0d*2))
  i0 = (OOC_INT32)typeList;
  i1 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Options__Section.baseTypes[0]);
  Config_Section_Options__Init((Config_Section_Options__Section)i1, (void*)(OOC_INT32)sectionName, sectionName_0d, (Config_Value__PrototypeList)i0);
  return (Config_Section_Options__Section)i1;
  ;
}

static void Config_Section_Options__InitOption(Config_Section_Options__Option opt, Config_Value__String name, OOC_LEN name_0d, Config_Value__Value value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)opt;
  *(OOC_INT32*)(_check_pointer(i0, 2279)) = (OOC_INT32)0;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2301))+4) = i1;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 2345))+8) = i1;
  return;
  ;
}

static Config_Section_Options__Option Config_Section_Options__NewOption(Config_Value__String name, OOC_LEN name_0d, Config_Value__Value value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Options__Option.baseTypes[0]);
  i1 = (OOC_INT32)value;
  Config_Section_Options__InitOption((Config_Section_Options__Option)i0, (void*)(OOC_INT32)name, name_0d, (Config_Value__Value)i1);
  return (Config_Section_Options__Option)i0;
  ;
}

static void Config_Section_Options__Insert(Config_Section_Options__Option *list, Config_Section_Options__Option opt) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2761))+4);
  i2 = (OOC_INT32)opt;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2774))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 2767)),(const void*)(_check_pointer(i3, 2780))))<(OOC_INT32)0;
  if (i1) goto l5;
  *(OOC_INT32*)(_check_pointer(i2, 2837)) = i0;
  *list = (Config_Section_Options__Option)i2;
  goto l8;
l5:
  Config_Section_Options__Insert((void*)(_check_pointer(i0, 2806)), (Config_Section_Options__Option)i2);
  goto l8;
l7:
  i0 = (OOC_INT32)opt;
  *(OOC_INT32*)(_check_pointer(i0, 2713)) = (OOC_INT32)0;
  *list = (Config_Section_Options__Option)i0;
l8:
  return;
  ;
}

void Config_Section_Options__OptionDesc_Set(Config_Section_Options__Option opt, Config_Value__Value value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)opt;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 2961))+8) = i1;
  return;
  ;
}

Config_Section_Options__Option Config_Section_Options__SectionDesc_Get(Config_Section_Options__Section s, const Config_Value__String name__ref, OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  Config_Section_Options__Option opt;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3091))+4);
  i1 = i0!=(OOC_INT32)0;
  opt = (Config_Section_Options__Option)i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3133))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3139)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3168));
  opt = (Config_Section_Options__Option)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3133))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3139)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (Config_Section_Options__Option)i0;
  ;
}

Config_Section_Options__Option Config_Section_Options__SectionDesc_Set(Config_Section_Options__Section s, const Config_Value__String name__ref, OOC_LEN name_0d, Config_Value__Value value) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  Config_Section_Options__Option opt;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3332)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name, name_0d);
  i2 = i1==(OOC_INT32)0;
  opt = (Config_Section_Options__Option)i1;
  if (i2) goto l3;
  i0 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3460)))), Config_Section_Options__OptionDesc_Set)),Config_Section_Options__OptionDesc_Set)((Config_Section_Options__Option)i1, (Config_Value__Value)i0);
  i0=i1;
  goto l4;
l3:
  i1 = (OOC_INT32)value;
  i1 = (OOC_INT32)Config_Section_Options__NewOption((void*)(OOC_INT32)name, name_0d, (Config_Value__Value)i1);
  opt = (Config_Section_Options__Option)i1;
  Config_Section_Options__Insert((void*)((_check_pointer(i0, 3423))+4), (Config_Section_Options__Option)i1);
  i0=i1;
l4:
  return (Config_Section_Options__Option)i0;
  ;
}

Config_Value__Value Config_Section_Options__SectionDesc_GetValue(Config_Section_Options__Section s, const Config_Value__String name__ref, OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  Config_Section_Options__Option opt;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3621)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name, name_0d);
  i1 = i0==(OOC_INT32)0;
  opt = (Config_Section_Options__Option)i0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3701))+8);
  return (Config_Value__Value)i0;
  goto l4;
l3:
  return (Config_Value__Value)(OOC_INT32)0;
l4:
  _failed_function(3533); return 0;
  ;
}

void Config_Section_Options__SectionDesc_Copy(Config_Section_Options__Section s, Config_Section_Options__Section dest) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Config_Section_Options__Option opt;
  Config_Section_Options__Option newOpt;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3836));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3836));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3842)), (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3846))+8);
  i4 = (OOC_INT32)dest;
  Config_Section_Options__Init((Config_Section_Options__Section)i4, (void*)(_check_pointer(i1, 3842)), i2, (Config_Value__PrototypeList)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3871))+4);
  i1 = i0!=(OOC_INT32)0;
  opt = (Config_Section_Options__Option)i0;
  if (!i1) goto l8;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3940))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3940))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3952))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3952))+8);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3959)))), Config_Value__ValueDesc_Clone)),Config_Value__ValueDesc_Clone)((Config_Value__Value)i5);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3946)), (OOC_INT32)0);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 3930)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i4, (void*)(_check_pointer(i1, 3946)), i2, (Config_Value__Value)i3);
  newOpt = (Config_Section_Options__Option)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3987));
  opt = (Config_Section_Options__Option)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  return;
  ;
}

Config_Section_Options__Section Config_Section_Options__SectionDesc_Clone(Config_Section_Options__Section s) {
  register OOC_INT32 i0,i1;
  Config_Section_Options__Section _new;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Options__Section.baseTypes[0]);
  _new = (Config_Section_Options__Section)i0;
  i1 = (OOC_INT32)s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4110)))), Config_Section_Options__SectionDesc_Copy)),Config_Section_Options__SectionDesc_Copy)((Config_Section_Options__Section)i1, (Config_Section_Options__Section)i0);
  return (Config_Section_Options__Section)i0;
  ;
}

void Config_Section_Options__SectionDesc_ProcessElements(Config_Section_Options__Section s, Config_Parser__Element sectionRoot, XML_Locator__ErrorListener errorListener) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Parser__Node node;
  XML_UnicodeBuffer__CharArray name;
  OOC_INT32 i;
  XML_Builder__Attribute att;
  Msg__Msg lastError;
  OOC_CHAR8 name8[1024];
  Config_Section_Options__Option option;
  XML_UnicodeBuffer__CharArray parserString;
  OOC_CHAR8 valueString[1024];
  Msg__Msg errMsg;
  XML_UnicodeBuffer__CharArray type;
  OOC_CHAR8 type8[1024];
  Config_Value__Value newValue;
  auto void Config_Section_Options__SectionDesc_ProcessElements_Err(OOC_INT32 code, Config_Parser__Node xmlNode);
    
    void Config_Section_Options__SectionDesc_ProcessElements_Err(OOC_INT32 code, Config_Parser__Node xmlNode) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)errorListener;
      i1 = (OOC_INT32)xmlNode;
      i2 = (OOC_INT32)Config_Section_Options__optionsContext;
      i3 = code;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4677)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 4722))+4));
      lastError = (Msg__Msg)i0;
      return;
      ;
    }


  i0 = (OOC_INT32)sectionRoot;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4776))+36);
  i1 = i0!=(OOC_INT32)0;
  node = (Config_Parser__Node)i0;
  if (!i1) goto l94;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4828)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8469)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8463)))), 8463);
  goto l89;
l8:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8506)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
  i1 = !i1;
  if (!i1) goto l89;
  Config_Section_Options__SectionDesc_ProcessElements_Err(1, (Config_Parser__Node)i0);
  goto l89;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4864))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 4870)),(const void*)((OOC_CHAR16[]){115,101,116,0})))==(OOC_INT32)0;
  if (i1) goto l60;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6353))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 6359)),(const void*)((OOC_CHAR16[]){100,101,102,105,110,101,0})))==(OOC_INT32)0;
  if (i1) goto l18;
  Config_Section_Options__SectionDesc_ProcessElements_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8426));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8426));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8432)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 8432)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8378)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
  goto l89;
l18:
  name = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  type = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6442))+32);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6452));
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l34;
  i1=0;
l21_loop:
  i2 = (OOC_INT32)node;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6486))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6496))+4);
  i3 = _check_pointer(i3, 6502);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 6502))*4);
  att = (XML_Builder__Attribute)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6526))+4);
  i3 = (
  _cmp16((const void*)(_check_pointer(i3, 6537)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
  if (i3) goto l28;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6634))+4);
  i3 = (
  _cmp16((const void*)(_check_pointer(i3, 6645)),(const void*)((OOC_CHAR16[]){116,121,112,101,0})))==(OOC_INT32)0;
  if (i3) goto l26;
  Config_Section_Options__SectionDesc_ProcessElements_Err(2, (Config_Parser__Node)i2);
  i1 = (OOC_INT32)lastError;
  i2 = (OOC_INT32)att;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6854))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6854))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6865)), (OOC_INT32)0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 6865)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6804)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
  goto l29;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6687))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6687))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6708))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6694)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i3, (XML_DTD__AttrDecl)i1);
  type = (XML_UnicodeBuffer__CharArray)i1;
  goto l29;
l28:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6579))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6579))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6600))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6586)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i3, (XML_DTD__AttrDecl)i1);
  name = (XML_UnicodeBuffer__CharArray)i1;
l29:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l21_loop;
l34:
  i0 = (OOC_INT32)name;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l57;
  i1 = (OOC_INT32)type;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l55;
  i2 = (OOC_INT32)node;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7087)))), Config_Parser__NodeDesc_HasNoElementContent)),Config_Parser__NodeDesc_HasNoElementContent)((Config_Parser__Node)i2);
  i3 = !i3;
  if (i3) goto l53;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7213)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i0, 7213)), i3, (OOC_CHAR8)'?', (void*)(OOC_INT32)name8, 1024);
  i0 = (OOC_INT32)s;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7246)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name8, 1024);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l51;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7452)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i1, 7452)), i3, (OOC_CHAR8)'?', (void*)(OOC_INT32)type8, 1024);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7495))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7495))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7505)))), Config_Value__PrototypeListDesc_GetClone)),Config_Value__PrototypeListDesc_GetClone)((Config_Value__PrototypeList)i3, (void*)(OOC_INT32)type8, 1024);
  newValue = (Config_Value__Value)i1;
  i3 = i1==(OOC_INT32)0;
  if (i3) goto l49;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7740)))), Config_Parser__NodeDesc_GetCharDataContent)),Config_Parser__NodeDesc_GetCharDataContent)((Config_Parser__Node)i2);
  parserString = (XML_UnicodeBuffer__CharArray)i3;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7926)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i3, 7926)), i4, (OOC_CHAR8)'?', (void*)(OOC_INT32)valueString, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7972)))), Config_Value__ValueDesc_StringToValue)),Config_Value__ValueDesc_StringToValue)((Config_Value__Value)i1, (void*)(OOC_INT32)valueString, 1024, (void*)(OOC_INT32)&errMsg);
  i3 = (OOC_INT32)errMsg;
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l47;
  Config_Section_Options__SectionDesc_ProcessElements_Err(9, (Config_Parser__Node)i2);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)errMsg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8195)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "reason", 7, (Msg__Msg)i1);
  goto l89;
l47:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8079)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name8, 1024, (Config_Value__Value)i1);
  option = (Config_Section_Options__Option)i0;
  goto l89;
l49:
  Config_Section_Options__SectionDesc_ProcessElements_Err(8, (Config_Parser__Node)i2);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)type;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7681)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 7681)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7630)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "type", 5, (Msg__LStringPtr)i1);
  goto l89;
l51:
  Config_Section_Options__SectionDesc_ProcessElements_Err(6, (Config_Parser__Node)i2);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)name;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7394)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 7394)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7343)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
  goto l89;
l53:
  Config_Section_Options__SectionDesc_ProcessElements_Err(5, (Config_Parser__Node)i2);
  goto l89;
l55:
  i0 = (OOC_INT32)node;
  Config_Section_Options__SectionDesc_ProcessElements_Err(4, (Config_Parser__Node)i0);
  goto l89;
l57:
  i0 = (OOC_INT32)node;
  Config_Section_Options__SectionDesc_ProcessElements_Err(3, (Config_Parser__Node)i0);
  goto l89;
l60:
  name = (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4937))+32);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 4947));
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l72;
  i1=0;
l63_loop:
  i2 = (OOC_INT32)node;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4981))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4991))+4);
  i3 = _check_pointer(i3, 4997);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 4997))*4);
  att = (XML_Builder__Attribute)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5021))+4);
  i3 = (
  _cmp16((const void*)(_check_pointer(i3, 5032)),(const void*)((OOC_CHAR16[]){110,97,109,101,0})))==(OOC_INT32)0;
  if (i3) goto l66;
  Config_Section_Options__SectionDesc_ProcessElements_Err(2, (Config_Parser__Node)i2);
  i1 = (OOC_INT32)lastError;
  i2 = (OOC_INT32)att;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5241))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5241))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5252)), (OOC_INT32)0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 5252)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5191)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
  goto l67;
l66:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5074))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5074))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5095))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5081)))), XML_DTD__AttValueDesc_Flatten)),XML_DTD__AttValueDesc_Flatten)((XML_DTD__AttValue)i3, (XML_DTD__AttrDecl)i1);
  name = (XML_UnicodeBuffer__CharArray)i1;
l67:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l63_loop;
l72:
  i0 = (OOC_INT32)name;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l86;
  i1 = (OOC_INT32)node;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5395)))), Config_Parser__NodeDesc_HasNoElementContent)),Config_Parser__NodeDesc_HasNoElementContent)((Config_Parser__Node)i1);
  i2 = !i2;
  if (i2) goto l84;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5521)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i0, 5521)), i2, (OOC_CHAR8)'?', (void*)(OOC_INT32)name8, 1024);
  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5560)))), Config_Section_Options__SectionDesc_Get)),Config_Section_Options__SectionDesc_Get)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name8, 1024);
  option = (Config_Section_Options__Option)i0;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l82;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5783)))), Config_Parser__NodeDesc_GetCharDataContent)),Config_Parser__NodeDesc_GetCharDataContent)((Config_Parser__Node)i1);
  parserString = (XML_UnicodeBuffer__CharArray)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5963)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i2, 5963)), i3, (OOC_CHAR8)'?', (void*)(OOC_INT32)valueString, 1024);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6005))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6005))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6012)))), Config_Value__ValueDesc_StringToValue)),Config_Value__ValueDesc_StringToValue)((Config_Value__Value)i0, (void*)(OOC_INT32)valueString, 1024, (void*)(OOC_INT32)&errMsg);
  i0 = (OOC_INT32)errMsg;
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l89;
  Config_Section_Options__SectionDesc_ProcessElements_Err(9, (Config_Parser__Node)i1);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)errMsg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6241)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i0, "reason", 7, (Msg__Msg)i1);
  goto l89;
l82:
  Config_Section_Options__SectionDesc_ProcessElements_Err(7, (Config_Parser__Node)i1);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)name;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5728)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 5728)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5677)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
  goto l89;
l84:
  Config_Section_Options__SectionDesc_ProcessElements_Err(5, (Config_Parser__Node)i1);
  goto l89;
l86:
  i0 = (OOC_INT32)node;
  Config_Section_Options__SectionDesc_ProcessElements_Err(3, (Config_Parser__Node)i0);
l89:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8606));
  node = (Config_Parser__Node)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l94:
  return;
  ;
}

void Config_Section_Options__SectionDesc_DumpContent(Config_Section_Options__Section s, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  TextRider__Writer w;
  OOC_CHAR8 str8[2048];
  Config_Section_Options__Option opt;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8857));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8857));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8863)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i2, 8863)), i3, (OOC_CHAR8)'?', (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8883)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8909)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8936)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8958)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8981))+4);
  i3 = i2!=(OOC_INT32)0;
  opt = (Config_Section_Options__Option)i2;
  if (!i3) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9027)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  <value name=\047", 16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9087))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9087))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9093)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9069)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i3, 9093)), i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9104)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047 defining_module=\047", 20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9152))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9152))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9159)))), Config_Value__ValueDesc_DefiningModule)),Config_Value__ValueDesc_DefiningModule)((Config_Value__Value)i4, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9191)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9220)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047>", 3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9258))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9258))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9265)))), Config_Value__ValueDesc_ValueToString)),Config_Value__ValueDesc_ValueToString)((Config_Value__Value)i4, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9296)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9332)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</value>", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9367)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9394));
  opt = (Config_Section_Options__Option)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l3_loop;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9434));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9434));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9440)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i2, 9440)), i1, (OOC_CHAR8)'?', (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9460)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9487)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9514)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9536)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_Config_Section_Options_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Options__ErrorContext.baseTypes[0]);
  Config_Section_Options__optionsContext = (Config_Section_Options__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "Config:Section:Options", 23);
  return;
  ;
}

/* --- */
