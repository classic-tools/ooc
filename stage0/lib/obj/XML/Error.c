#include <XML/Error.d>
#include <__oo2c.h>

void XML_Error__InitContext(XML_Error__Context c, const Msg__String id__ref, OOC_LEN id_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR8 ,id_0d)

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR8 ,id_0d)
  i0 = (OOC_INT32)c;
  Msg__InitContext((Msg__Context)i0, (void*)(OOC_INT32)id, id_0d);
  *(OOC_INT32*)((_check_pointer(i0, 2232))+4) = (OOC_INT32)0;
  return;
  ;
}

XML_Error__Context XML_Error__NewContext(const Msg__String id__ref, OOC_LEN id_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR8 ,id_0d)

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR8 ,id_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Error__Context.baseTypes[0]);
  XML_Error__InitContext((XML_Error__Context)i0, (void*)(OOC_INT32)id, id_0d);
  return (XML_Error__Context)i0;
  ;
}

void XML_Error__ContextDesc_WriteTemplate(XML_Error__Context context, Msg__Msg msg, const Msg__LString msgText__ref, OOC_LEN msgText_0d, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(msgText,OOC_CHAR16 ,msgText_0d)
  Msg__Attribute entityName;

  OOC_INITIALIZE_VPAR(msgText__ref,msgText,OOC_CHAR16 ,(msgText_0d*2))
  i0 = (OOC_INT32)msg;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2711)))), Msg__MsgDesc_GetAttribute)),Msg__MsgDesc_GetAttribute)((Msg__Msg)i0, "entity_name", 12);
  i1 = i0==(OOC_INT32)0;
  entityName = (Msg__Attribute)i0;
  if (i1) goto l3;
  _copy_16((const void*)((OOC_CHAR16[]){87,104,105,108,101,32,101,120,112,97,110,100,105,110,103,32,101,110,116,105,116,121,32,96,0}),(void*)(OOC_INT32)templ,templ_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2893)))), &_td_Msg__LStringAttributeDesc, 2893)), 2910))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2893)))), &_td_Msg__LStringAttributeDesc, 2893)), 2910))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2918)), (OOC_INT32)0);
  LongStrings__Append((void*)(_check_pointer(i1, 2918)), i0, (void*)(OOC_INT32)templ, templ_0d);
  LongStrings__Append(((OOC_CHAR16[]){39,58,32,0}), 4, (void*)(OOC_INT32)templ, templ_0d);
  goto l4;
l3:
  _copy_16((const void*)((OOC_CHAR16[]){0}),(void*)(OOC_INT32)templ,templ_0d);
l4:
  LongStrings__Append((void*)(OOC_INT32)msgText, msgText_0d, (void*)(OOC_INT32)templ, templ_0d);
  LongStrings__Insert(((OOC_CHAR16[]){108,105,110,101,61,36,123,108,105,110,101,125,44,32,99,111,108,117,109,110,61,36,123,99,111,108,117,109,110,125,10,36,123,99,104,97,114,125,58,32,0}), 41, (OOC_INT32)0, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void XML_Error__ContextDesc_GetTemplate(XML_Error__Context context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_Error__Mapping m;

  i0 = (OOC_INT32)context;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3276))+4);
  i2 = i1!=(OOC_INT32)0;
  m = (XML_Error__Mapping)i1;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)msg;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3311))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 3323))+8);
  i2 = i3!=i2;
  
l5:
  if (!i2) goto l17;
  i2 = (OOC_INT32)msg;
  
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3346));
  m = (XML_Error__Mapping)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3311))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 3323))+8);
  i3 = i3!=i4;
  
l13:
  if (i3) goto l8_loop;
l17:
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l20;
  i1 = (OOC_INT32)msg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3458)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i0, (Msg__Msg)i1, ((OOC_CHAR16[]){45,45,117,110,107,110,111,119,110,32,101,114,114,111,114,32,99,111,100,101,59,32,109,115,103,95,99,111,110,116,101,120,116,61,36,123,77,83,71,95,67,79,78,84,69,88,84,125,59,32,109,115,103,95,99,111,100,101,61,36,123,77,83,71,95,67,79,68,69,125,45,45,0}), 73, (void*)(OOC_INT32)templ, templ_0d);
  goto l21;
l20:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3420))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3420))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3426)), (OOC_INT32)0);
  i3 = (OOC_INT32)msg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3397)))), XML_Error__ContextDesc_WriteTemplate)),XML_Error__ContextDesc_WriteTemplate)((XML_Error__Context)i0, (Msg__Msg)i3, (void*)(_check_pointer(i2, 3426)), i1, (void*)(OOC_INT32)templ, templ_0d);
l21:
  return;
  ;
}

void XML_Error__ContextDesc_SetString(XML_Error__Context context, OOC_INT32 code, const Msg__String str__ref, OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  auto void XML_Error__ContextDesc_SetString_Append(XML_Error__Mapping *mlist);
    
    void XML_Error__ContextDesc_SetString_Append(XML_Error__Mapping *mlist) {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR16 str16[1024];

      i0 = (OOC_INT32)*mlist;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l7;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 4102))+4);
      i2 = code;
      i1 = i1==i2;
      if (i1) goto l5;
      XML_Error__ContextDesc_SetString_Append((void*)(_check_pointer(i0, 4228)));
      goto l8;
l5:
      _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)str16,1024);
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(OOC_INT32)str16, 1024);
      *(OOC_INT32*)((_check_pointer(i0, 4162))+8) = i1;
      goto l8;
l7:
      i0 = (OOC_INT32)RT0__NewObject(_td_XML_Error__Mapping.baseTypes[0]);
      *mlist = (XML_Error__Mapping)i0;
      *(OOC_INT32*)(_check_pointer(i0, 3966)) = (OOC_INT32)0;
      i0 = (OOC_INT32)*mlist;
      i1 = code;
      *(OOC_INT32*)((_check_pointer(i0, 3994))+4) = i1;
      _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)str16,1024);
      i0 = (OOC_INT32)*mlist;
      i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(OOC_INT32)str16, 1024);
      *(OOC_INT32*)((_check_pointer(i0, 4050))+8) = i1;
l8:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)context;
  XML_Error__ContextDesc_SetString_Append((void*)((_check_pointer(i0, 4292))+4));
  return;
  ;
}

Msg__Msg XML_Error__New(XML_Error__Context context, OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)context;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

XML_Error__List XML_Error__NewList() {
  register OOC_INT32 i0,i1;
  XML_Error__List list;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Error__List.baseTypes[0]);
  list = (XML_Error__List)i0;
  Msg__InitMsgList((Msg__MsgList)i0);
  i1 = (OOC_INT32)URI_Scheme_File__GetCwd();
  *(OOC_INT32*)((_check_pointer(i0, 4565))+12) = i1;
  return (XML_Error__List)i0;
  ;
}

void XML_Error__ListDesc_Write(XML_Error__List errList, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  TextRider__Writer writer;
  OOC_CHAR8 repl1[1024];
  OOC_CHAR8 repl2[1024];
  Msg__Msg prev;
  URI__URI prevURI;
  Msg__Msg msg;
  Msg__Attribute uriAttr;
  URI__URI uri;
  OOC_CHAR8 text[8192];
  OOC_INT32 i;
  auto void XML_Error__ListDesc_Write_Replace(OOC_CHAR8 text[], OOC_LEN text_0d, const OOC_CHAR8 pattern__ref[], OOC_LEN pattern_0d, const OOC_CHAR8 repl__ref[], OOC_LEN repl_0d);
  auto OOC_CHAR8 XML_Error__ListDesc_Write_DistanceOk(Msg__Msg m0, Msg__Msg m1);
    
    void XML_Error__ListDesc_Write_Replace(OOC_CHAR8 text[], OOC_LEN text_0d, const OOC_CHAR8 pattern__ref[], OOC_LEN pattern_0d, const OOC_CHAR8 repl__ref[], OOC_LEN repl_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(pattern,OOC_CHAR8 ,pattern_0d)
      OOC_ALLOCATE_VPAR(repl,OOC_CHAR8 ,repl_0d)
      OOC_CHAR8 found;
      OOC_INT16 pos;

      OOC_INITIALIZE_VPAR(pattern__ref,pattern,OOC_CHAR8 ,pattern_0d)
      OOC_INITIALIZE_VPAR(repl__ref,repl,OOC_CHAR8 ,repl_0d)
      Strings__FindNext((void*)(OOC_INT32)pattern, pattern_0d, (void*)(OOC_INT32)text, text_0d, (OOC_INT32)0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
      i0 = found;
      if (!i0) goto l8;
l3_loop:
      i0 = pos;
      i1 = Strings__Length((void*)(OOC_INT32)pattern, pattern_0d);
      Strings__Delete((void*)(OOC_INT32)text, text_0d, i0, i1);
      i0 = pos;
      Strings__Insert((void*)(OOC_INT32)repl, repl_0d, i0, (void*)(OOC_INT32)text, text_0d);
      i0 = pos;
      i1 = Strings__Length((void*)(OOC_INT32)repl, repl_0d);
      i0 = i0+i1;
      pos = i0;
      Strings__FindNext((void*)(OOC_INT32)pattern, pattern_0d, (void*)(OOC_INT32)text, text_0d, i0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
      i0 = found;
      if (i0) goto l3_loop;
l8:
      return;
      ;
    }

    
    OOC_CHAR8 XML_Error__ListDesc_Write_DistanceOk(Msg__Msg m0, Msg__Msg m1) {
      register OOC_INT32 i0,i1,i2;
      Msg__Attribute p0;
      Msg__Attribute p1;

      i0 = (OOC_INT32)m0;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l23;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5818)))), Msg__MsgDesc_GetAttribute)),Msg__MsgDesc_GetAttribute)((Msg__Msg)i0, "char", 5);
      p0 = (Msg__Attribute)i0;
      i1 = (OOC_INT32)m1;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5859)))), Msg__MsgDesc_GetAttribute)),Msg__MsgDesc_GetAttribute)((Msg__Msg)i1, "char", 5);
      p1 = (Msg__Attribute)i1;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l5;
      i2=OOC_FALSE;
      goto l7;
l5:
      i2 = i1!=(OOC_INT32)0;
      
l7:
      if (i2) goto l9;
      i2=OOC_FALSE;
      goto l11;
l9:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5936)))), &_td_Msg__IntAttributeDesc);
      
l11:
      if (i2) goto l13;
      i2=OOC_FALSE;
      goto l15;
l13:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5972)))), &_td_Msg__IntAttributeDesc);
      
l15:
      if (i2) goto l17;
      i0=OOC_FALSE;
      goto l19;
l17:
      i0 = *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6015)))), &_td_Msg__IntAttributeDesc, 6015)), 6028))+8);
      i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6041)))), &_td_Msg__IntAttributeDesc, 6041)), 6054))+8);
      i0 = (_abs((i0-i1)))<16;
      
l19:
      if (i0) goto l21;
      return OOC_TRUE;
      goto l24;
l21:
      return OOC_FALSE;
      goto l24;
l23:
      return OOC_TRUE;
l24:
      _failed_function(5664); return 0;
      ;
    }


  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  writer = (TextRider__Writer)i0;
  _assert((i0!=(OOC_INT32)0), 127, 6231);
  i0 = (OOC_INT32)errList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6270))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6270))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6278)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i2, (void*)(OOC_INT32)repl1, 1024);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6310))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6310))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6324)))), &_td_URI_Scheme_File__URIDesc, 6324)), 6328)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6324)))), &_td_URI_Scheme_File__URIDesc, 6324)), (void*)(OOC_INT32)repl2, 1024);
  Strings__Insert("file_name=", 11, 0, (void*)(OOC_INT32)repl2, 1024);
  prev = (Msg__Msg)(OOC_INT32)0;
  prevURI = (URI__URI)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6448))+4);
  msg = (Msg__Msg)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l37;
l3_loop:
  i1 = (OOC_INT32)prev;
  i0 = XML_Error__ListDesc_Write_DistanceOk((Msg__Msg)i1, (Msg__Msg)i0);
  if (!i0) goto l32;
  i0 = (OOC_INT32)msg;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6543)))), Msg__MsgDesc_GetAttribute)),Msg__MsgDesc_GetAttribute)((Msg__Msg)i0, "baseURI", 8);
  uriAttr = (Msg__Attribute)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6595)))), &_td_URI__URIAttributeDesc, 6595)), 6608))+8);
  i3 = (OOC_INT32)prevURI;
  i2 = i2!=i3;
  if (!i2) goto l31;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6659)))), &_td_URI__URIAttributeDesc, 6659)), 6672))+8);
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6659)))), &_td_URI__URIAttributeDesc, 6659)), 6672))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6700))+12);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6677)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i4, (URI__HierarchicalURI)i3);
  uri = (URI__URI)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6724)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i2, (void*)(OOC_INT32)text, 8192);
  i = 0;
  i3 = *(OOC_UINT8*)((OOC_INT32)text+(_check_index(0, 8192, OOC_UINT32, 6794)));
  i3 = i3==(OOC_CHAR8)'.';
  if (i3) goto l10;
  i3 = *(OOC_UINT8*)((OOC_INT32)text+(_check_index(0, 8192, OOC_UINT32, 6813)));
  i3 = i3==(OOC_CHAR8)'/';
  
  goto l12;
l10:
  i3=OOC_TRUE;
l12:
  if (i3) goto l14;
  i3=0;
  goto l24;
l14:
  i3=0;
l15_loop:
  i3 = i3+1;
  i = i3;
  i4 = *(OOC_UINT8*)((OOC_INT32)text+(_check_index(i3, 8192, OOC_UINT32, 6794)));
  i4 = i4==(OOC_CHAR8)'.';
  if (i4) goto l18;
  i4 = *(OOC_UINT8*)((OOC_INT32)text+(_check_index(i3, 8192, OOC_UINT32, 6813)));
  i4 = i4==(OOC_CHAR8)'/';
  
  goto l20;
l18:
  i4=OOC_TRUE;
l20:
  if (i4) goto l15_loop;
l24:
  i3 = i3>6;
  if (!i3) goto l30;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7109)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i2, (void*)(OOC_INT32)text, 8192);
  Strings__Extract((void*)(OOC_INT32)text, 8192, 0, 5, (void*)(OOC_INT32)repl1, 1024);
  Strings__Capitalize((void*)(OOC_INT32)repl1, 1024);
  i2 = (
  _cmp8((const void*)(OOC_INT32)repl1,(const void*)"FILE:"))==0;
  if (!i2) goto l30;
  Strings__Delete((void*)(OOC_INT32)text, 8192, 0, 5);
l30:
  i2 = (OOC_INT32)writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7357)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "In file ", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7401)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)text, 8192);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7439)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ": ", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7477)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i2);
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7531)))), &_td_URI__URIAttributeDesc, 7531)), 7544))+8);
  prevURI = (URI__URI)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7571)))), Msg__MsgDesc_GetText)),Msg__MsgDesc_GetText)((Msg__Msg)i0, (void*)(OOC_INT32)text, 8192);
  XML_Error__ListDesc_Write_Replace((void*)(OOC_INT32)text, 8192, (void*)(OOC_INT32)repl1, 1024, "file:", 6);
  XML_Error__ListDesc_Write_Replace((void*)(OOC_INT32)text, 8192, (void*)(OOC_INT32)repl2, 1024, "file_name=", 11);
  i0 = (OOC_INT32)writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7688)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)text, 8192);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7724)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)msg;
  prev = (Msg__Msg)i0;
l32:
  i0 = (OOC_INT32)msg;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7782));
  msg = (Msg__Msg)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l37:
  return;
  ;
}

void OOC_XML_Error_init(void) {

  XML_Error__errMsgLineBase = 0;
  XML_Error__errMsgColumnBase = 0;
  XML_Error__errMsgCharPosBase = 0;
  return;
  ;
}

/* --- */
