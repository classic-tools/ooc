#include <Config/Section/Arguments.d>
#include <__oo2c.h>

void Config_Section_Arguments__ErrorContextDesc_GetTemplate(Config_Section_Arguments__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 809))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,99,111,110,116,101,110,116,32,102,111,114,32,101,108,101,109,101,110,116,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){65,116,116,114,105,98,117,116,101,32,96,36,123,110,97,109,101,125,39,32,105,115,32,110,111,116,32,100,101,102,105,110,101,100,32,102,111,114,32,116,104,105,115,32,101,108,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,108,101,109,101,110,116,32,109,117,115,116,32,99,111,110,116,97,105,110,32,99,104,97,114,97,99,116,101,114,32,100,97,116,97,32,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  default:
    _failed_case(i1, 801);
    goto l6;
  }
l6:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1090)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void Config_Section_Arguments__Init(Config_Section_Arguments__Section s, const Config_Parser__String id__ref, OOC_LEN id_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR16 ,id_0d)

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR16 ,(id_0d*2))
  i0 = (OOC_INT32)s;
  Config_Section__Init((Config_Section__Section)i0, (void*)(OOC_INT32)id, id_0d);
  *(OOC_INT32*)((_check_pointer(i0, 1226))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 1254))+4) = ((OOC_INT32)RT0__NewObject(_td_Config_Section_Arguments__ArgumentArray.baseTypes[0], 4));
  return;
  ;
}

Config_Section_Arguments__Section Config_Section_Arguments__New(const Config_Parser__String sectionName__ref, OOC_LEN sectionName_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(sectionName,OOC_CHAR16 ,sectionName_0d)

  OOC_INITIALIZE_VPAR(sectionName__ref,sectionName,OOC_CHAR16 ,(sectionName_0d*2))
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Arguments__Section.baseTypes[0]);
  Config_Section_Arguments__Init((Config_Section_Arguments__Section)i0, (void*)(OOC_INT32)sectionName, sectionName_0d);
  return (Config_Section_Arguments__Section)i0;
  ;
}

OOC_INT32 Config_Section_Arguments__SectionDesc_ArgNumber(Config_Section_Arguments__Section s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 1499))+8);
  return i0;
  ;
}

Config_Value__StringPtr Config_Section_Arguments__SectionDesc_Get(Config_Section_Arguments__Section s, OOC_INT32 position) {
  register OOC_INT32 i0,i1,i2;

  i0 = position;
  i1 = 0<=i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 1634))+8);
  i1 = i0<i1;
  
l5:
  if (i1) goto l7;
  return (Config_Value__StringPtr)(OOC_INT32)0;
  goto l8;
l7:
  i1 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1666))+4);
  i1 = _check_pointer(i1, 1672);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 1672))*4);
  return (Config_Value__StringPtr)i0;
l8:
  _failed_function(1552); return 0;
  ;
}

void Config_Section_Arguments__SectionDesc_ProcessElements(Config_Section_Arguments__Section s, Config_Parser__Element sectionRoot, XML_Locator__ErrorListener errorListener) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Config_Parser__Node node;
  OOC_INT32 i;
  XML_Builder__Attribute att;
  Msg__Msg lastError;
  Config_Section_Arguments__ArgumentArray newArgs;
  XML_UnicodeBuffer__CharArray parserString;
  OOC_CHAR8 valueString[1024];
  auto void Config_Section_Arguments__SectionDesc_ProcessElements_Err(OOC_INT32 code, Config_Parser__Node xmlNode);
    
    void Config_Section_Arguments__SectionDesc_ProcessElements_Err(OOC_INT32 code, Config_Parser__Node xmlNode) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)errorListener;
      i1 = (OOC_INT32)xmlNode;
      i2 = (OOC_INT32)Config_Section_Arguments__argumentsContext;
      i3 = code;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2184)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i2, i3, OOC_FALSE, (void*)((_check_pointer(i1, 2231))+4));
      lastError = (Msg__Msg)i0;
      return;
      ;
    }


  i0 = (OOC_INT32)sectionRoot;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2285))+36);
  i1 = i0!=(OOC_INT32)0;
  node = (Config_Parser__Node)i0;
  if (!i1) goto l46;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2337)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3428)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3422)))), 3422);
  goto l41;
l8:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3465)))), Config_Parser__NodeDesc_IsWhitespace)),Config_Parser__NodeDesc_IsWhitespace)((Config_Parser__Node)i0);
  i1 = !i1;
  if (!i1) goto l41;
  Config_Section_Arguments__SectionDesc_ProcessElements_Err(1, (Config_Parser__Node)i0);
  goto l41;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2373))+28);
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 2379)),(const void*)((OOC_CHAR16[]){97,114,103,0})))==(OOC_INT32)0;
  if (i1) goto l16;
  Config_Section_Arguments__SectionDesc_ProcessElements_Err(1, (Config_Parser__Node)i0);
  i0 = (OOC_INT32)lastError;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3385));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3385));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3391)), (OOC_INT32)0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 3391)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3337)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__LStringPtr)i1);
  goto l41;
l16:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2423))+32);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 2433));
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l24;
  i1=0;
l19_loop:
  i2 = (OOC_INT32)node;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2467))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2477))+4);
  i3 = _check_pointer(i3, 2483);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 2483))*4);
  att = (XML_Builder__Attribute)i1;
  Config_Section_Arguments__SectionDesc_ProcessElements_Err(2, (Config_Parser__Node)i2);
  i1 = (OOC_INT32)lastError;
  i2 = (OOC_INT32)att;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2601))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2601))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2612)), (OOC_INT32)0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i3, 2612)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2551)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__LStringPtr)i2);
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l19_loop;
l24:
  i0 = (OOC_INT32)node;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2660)))), Config_Parser__NodeDesc_HasNoElementContent)),Config_Parser__NodeDesc_HasNoElementContent)((Config_Parser__Node)i0);
  i1 = !i1;
  if (i1) goto l38;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2788))+4);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2768))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2794)), (OOC_INT32)0);
  i2 = i3==i2;
  if (!i2) goto l37;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2837))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2843)), (OOC_INT32)0);
  i2 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Arguments__ArgumentArray.baseTypes[0], (i2*2));
  newArgs = (Config_Section_Arguments__ArgumentArray)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2884))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2890)), (OOC_INT32)0);
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = _check_pointer(i2, 2921);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2929))+4);
  i7 = _check_pointer(i7, 2935);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 2935))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 2921))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l31_loop;
l36:
  *(OOC_INT32*)((_check_pointer(i1, 2973))+4) = i2;
l37:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3040)))), Config_Parser__NodeDesc_GetCharDataContent)),Config_Parser__NodeDesc_GetCharDataContent)((Config_Parser__Node)i0);
  parserString = (XML_UnicodeBuffer__CharArray)i0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3107)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i0, 3107)), i2, (OOC_CHAR8)'?', (void*)(OOC_INT32)valueString, 1024);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3153))+4);
  i0 = _check_pointer(i0, 3159);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3161))+8);
  i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i4 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)valueString, 1024);
  *(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 3159))*4) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 3229))+8);
  *(OOC_INT32*)((_check_pointer(i1, 3229))+8) = (i0+1);
  goto l41;
l38:
  Config_Section_Arguments__SectionDesc_ProcessElements_Err(5, (Config_Parser__Node)i0);
l41:
  i0 = (OOC_INT32)node;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3565));
  node = (Config_Parser__Node)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l46:
  return;
  ;
}

void Config_Section_Arguments__SectionDesc_DumpContent(Config_Section_Arguments__Section s, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  TextRider__Writer w;
  OOC_CHAR8 str8[2048];
  OOC_INT32 i;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  i1 = (OOC_INT32)s;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3815));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3815));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3821)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i2, 3821)), i3, (OOC_CHAR8)'?', (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3841)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3867)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3894)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3916)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3946))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3970)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  <arg>", 8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4103))+4);
  i4 = _check_pointer(i4, 4109);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 4109))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4103))+4);
  i5 = _check_pointer(i5, 4109);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4109))*4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 4112)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4087)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i4, 4112)), i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4123)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</arg>", 7);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4156)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4199));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4199));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4205)), (OOC_INT32)0);
  LongStrings__Short((void*)(_check_pointer(i2, 4205)), i1, (OOC_CHAR8)'?', (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4225)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4252)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str8, 2048);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4279)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4301)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_Config_Section_Arguments_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Section_Arguments__ErrorContext.baseTypes[0]);
  Config_Section_Arguments__argumentsContext = (Config_Section_Arguments__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "Config:Section:Arguments", 25);
  return;
  ;
}

/* --- */
