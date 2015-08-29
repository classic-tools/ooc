#include <URI/Parser.d>
#include <__oo2c.h>

URI__URI URI_Parser__NewURI(const URI_String__String str__ref, OOC_LEN str_0d, URI__HierarchicalURI baseURI, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  URI_String__StringPtr schemeId;
  URI__URI protoURI;
  OOC_INT16 i;
  OOC_INT16 endOfScheme;
  URI__URI uri;
  URI__HierarchicalURI hierURI;
  OOC_INT16 start;
  URI_String__StringPtr substr;
  auto void URI_Parser__NewURI_Err(OOC_INT32 code);
  auto void URI_Parser__NewURI_Path(OOC_CHAR8 absolute);
    
    void URI_Parser__NewURI_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)URI_Parser__uriContext;
      i1 = code;
      i2 = i;
      i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i0, i1, i2);
      *res = (Msg__Msg)i0;
      URI_Error__SetURIString((Msg__Msg)i0, (void*)(OOC_INT32)str, str_0d);
      return;
      ;
    }

    
    void URI_Parser__NewURI_Path(OOC_CHAR8 absolute) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT16 start;
      URI_String__StringPtr substr;

      i0 = absolute;
      if (!i0) goto l3;
      i1 = i;
      i = (i1+1);
l3:
      i1 = i;
      start = i1;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 2499)));
      i2 = i2!=(OOC_CHAR8)'?';
      if (i2) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 2516)));
      i2 = i2!=(OOC_CHAR8)'#';
      
l8:
      if (i2) goto l10;
      i2=OOC_FALSE;
      goto l12;
l10:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 2533)));
      i2 = i2!=(OOC_CHAR8)'\000';
      
l12:
      if (!i2) goto l26;
l13_loop:
      i2 = i;
      i2 = i2+1;
      i = i2;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 2499)));
      i3 = i3!=(OOC_CHAR8)'?';
      if (i3) goto l16;
      i3=OOC_FALSE;
      goto l18;
l16:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 2516)));
      i3 = i3!=(OOC_CHAR8)'#';
      
l18:
      if (i3) goto l20;
      i2=OOC_FALSE;
      goto l22;
l20:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 2533)));
      i2 = i2!=(OOC_CHAR8)'\000';
      
l22:
      if (i2) goto l13_loop;
l26:
      i2 = i;
      i2 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, i1, i2);
      substr = (URI_String__StringPtr)i2;
      i3 = (OOC_INT32)hierURI;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2638)))), URI__HierarchicalURIDesc_ParsePath)),URI__HierarchicalURIDesc_ParsePath)((URI__HierarchicalURI)i3, (URI_String__StringPtr)i2, i0, i1);
      *res = (Msg__Msg)i0;
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  *res = (Msg__Msg)(OOC_INT32)0;
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)""))==(OOC_INT32)0;
  if (!i0) goto l3;
  i0 = (OOC_INT32)URI_Scheme_CurrentDoc__New();
  return (URI__URI)i0;
l3:
  schemeId = (URI_String__StringPtr)(OOC_INT32)0;
  protoURI = (URI__URI)(OOC_INT32)0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 2890)));
  i0 = i0!=(OOC_CHAR8)':';
  if (i0) goto l6;
  i0=OOC_FALSE;
  goto l8;
l6:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 2907)));
  i0 = i0!=(OOC_CHAR8)'/';
  
l8:
  if (i0) goto l10;
  i0=OOC_FALSE;
  goto l12;
l10:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 2934)));
  i0 = i0!=(OOC_CHAR8)'?';
  
l12:
  if (i0) goto l14;
  i0=OOC_FALSE;
  goto l16;
l14:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 2951)));
  i0 = i0!=(OOC_CHAR8)'#';
  
l16:
  if (i0) goto l18;
  i0=OOC_FALSE;
  goto l20;
l18:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 2968)));
  i0 = i0!=(OOC_CHAR8)'\000';
  
l20:
  if (i0) goto l22;
  i0=(OOC_INT32)0;
  goto l44;
l22:
  i0=(OOC_INT32)0;
l23_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2890)));
  i1 = i1!=(OOC_CHAR8)':';
  if (i1) goto l26;
  i1=OOC_FALSE;
  goto l28;
l26:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2907)));
  i1 = i1!=(OOC_CHAR8)'/';
  
l28:
  if (i1) goto l30;
  i1=OOC_FALSE;
  goto l32;
l30:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2934)));
  i1 = i1!=(OOC_CHAR8)'?';
  
l32:
  if (i1) goto l34;
  i1=OOC_FALSE;
  goto l36;
l34:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2951)));
  i1 = i1!=(OOC_CHAR8)'#';
  
l36:
  if (i1) goto l38;
  i1=OOC_FALSE;
  goto l40;
l38:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2968)));
  i1 = i1!=(OOC_CHAR8)'\000';
  
l40:
  if (i1) goto l23_loop;
l44:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 3015)));
  i1 = i1==(OOC_CHAR8)':';
  if (i1) goto l47;
  i1=OOC_FALSE;
  goto l49;
l47:
  i1 = i0!=(OOC_INT32)0;
  
l49:
  if (i1) goto l51;
  i = (OOC_INT32)0;
  goto l74;
l51:
  endOfScheme = i0;
  i = (OOC_INT32)0;
  i1 = URI_CharClass__SkipAlpha((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i);
  if (!i1) goto l69;
  i1 = URI_CharClass__SkipAlphaNum((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i);
  if (i1) goto l56;
  i1 = URI_CharClass__SkipMember((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i, "+-.", 4);
  
  goto l58;
l56:
  i1=OOC_TRUE;
l58:
  if (!i1) goto l69;
l59_loop:
  i1 = URI_CharClass__SkipAlphaNum((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i);
  if (i1) goto l62;
  i1 = URI_CharClass__SkipMember((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i, "+-.", 4);
  
  goto l64;
l62:
  i1=OOC_TRUE;
l64:
  if (i1) goto l59_loop;
l69:
  i1 = i;
  i0 = i1==i0;
  if (i0) goto l72;
  URI_Parser__NewURI_Err(1);
  return (URI__URI)(OOC_INT32)0;
  goto l74;
l72:
  i0 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, (OOC_INT32)0, i1);
  i1 = i;
  schemeId = (URI_String__StringPtr)i0;
  i = (i1+1);
  i0 = (OOC_INT32)URI__GetScheme((URI_String__StringPtr)i0);
  protoURI = (URI__URI)i0;
l74:
  i0 = (OOC_INT32)schemeId;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l81;
  i0 = (OOC_INT32)baseURI;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l79;
  protoURI = (URI__URI)i0;
  goto l81;
l79:
  URI_Parser__NewURI_Err(9);
  return (URI__URI)(OOC_INT32)0;
l81:
  uri = (URI__URI)(OOC_INT32)0;
  hierURI = (URI__HierarchicalURI)(OOC_INT32)0;
  i0 = (OOC_INT32)schemeId;
  i0 = i0==(OOC_INT32)0;
  *res = (Msg__Msg)(OOC_INT32)0;
  if (i0) goto l84;
  i0 = i;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 4001)));
  i0 = i0==(OOC_CHAR8)'/';
  
  goto l86;
l84:
  i0=OOC_TRUE;
l86:
  if (i0) goto l92;
  i0 = (OOC_INT32)protoURI;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l90;
  i0=OOC_FALSE;
  goto l94;
l90:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4051)))), &_td_URI__HierarchicalURIDesc);
  
  goto l94;
l92:
  i0=OOC_TRUE;
l94:
  if (i0) goto l106;
  i0 = i;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 6261)));
  i0 = i0==(OOC_CHAR8)'\000';
  if (!i0) goto l98;
  URI_Parser__NewURI_Err(8);
  return (URI__URI)(OOC_INT32)0;
l98:
  i0 = (OOC_INT32)protoURI;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l104;
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6418)))), &_td_URI__OpaqueURIDesc));
  if (!i0) goto l105;
  URI_Parser__NewURI_Err(3);
  return (URI__URI)(OOC_INT32)0;
  goto l105;
l104:
  i0 = (OOC_INT32)URI_Parser__defaultOpaque;
  protoURI = (URI__URI)i0;
l105:
  i0 = (OOC_INT32)protoURI;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6525)))), URI__URIDesc_Clone)),URI__URIDesc_Clone)((URI__URI)i0);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)schemeId;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6545)))), URI__URIDesc_SetSchemeId)),URI__URIDesc_SetSchemeId)((URI__URI)i0, (URI_String__StringPtr)i1);
  i1 = i;
  i2 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, i1, i2);
  substr = (URI_String__StringPtr)i1;
  i2 = i;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6652)))), &_td_URI__OpaqueURIDesc, 6652)), 6662)))), URI__OpaqueURIDesc_ParseOpaquePart)),URI__OpaqueURIDesc_ParseOpaquePart)((URI__OpaqueURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6652)))), &_td_URI__OpaqueURIDesc, 6652)), (URI_String__StringPtr)i1, i2);
  *res = (Msg__Msg)i0;
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i = i0;
  goto l207;
l106:
  i0 = (OOC_INT32)protoURI;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l112;
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4235)))), &_td_URI__HierarchicalURIDesc));
  if (!i0) goto l113;
  URI_Parser__NewURI_Err(2);
  return (URI__URI)(OOC_INT32)0;
  goto l113;
l112:
  i0 = (OOC_INT32)URI_Parser__defaultHierarchical;
  protoURI = (URI__URI)i0;
l113:
  i0 = (OOC_INT32)protoURI;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4348)))), URI__URIDesc_Clone)),URI__URIDesc_Clone)((URI__URI)i0);
  uri = (URI__URI)i0;
  i1 = (OOC_INT32)schemeId;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4368)))), URI__URIDesc_SetSchemeId)),URI__URIDesc_SetSchemeId)((URI__URI)i0, (URI_String__StringPtr)i1);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4419)))), &_td_URI__HierarchicalURIDesc, 4419);
  hierURI = (URI__HierarchicalURI)i0;
  i2 = i;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 4450)));
  i3 = i3==(OOC_CHAR8)'/';
  if (i3) goto l116;
  i2=OOC_FALSE;
  goto l118;
l116:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i2+1), str_0d, OOC_UINT16, 4467)));
  i2 = i2==(OOC_CHAR8)'/';
  
l118:
  if (i2) goto l128;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5278)))), URI__HierarchicalURIDesc_SetAuthority)),URI__HierarchicalURIDesc_SetAuthority)((URI__HierarchicalURI)i0, (URI__Authority)(OOC_INT32)0);
  i0 = i;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 5315)));
  i0 = i0==(OOC_CHAR8)'/';
  if (i0) goto l126;
  i0 = i1!=(OOC_INT32)0;
  if (i0) goto l124;
  URI_Parser__NewURI_Path(OOC_FALSE);
  goto l174;
l124:
  URI_Parser__NewURI_Err(7);
  goto l174;
l126:
  URI_Parser__NewURI_Path(OOC_TRUE);
  goto l174;
l128:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4523)))), URI__HierarchicalURIDesc_NewAuthority)),URI__HierarchicalURIDesc_NewAuthority)((URI__HierarchicalURI)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4500)))), URI__HierarchicalURIDesc_SetAuthority)),URI__HierarchicalURIDesc_SetAuthority)((URI__HierarchicalURI)i0, (URI__Authority)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4561))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l172;
  i1 = i;
  i1 = i1+2;
  i = i1;
  start = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 4865)));
  i2 = i2!=(OOC_CHAR8)'/';
  if (i2) goto l133;
  i2=OOC_FALSE;
  goto l135;
l133:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 4882)));
  i2 = i2!=(OOC_CHAR8)'?';
  
l135:
  if (i2) goto l137;
  i2=OOC_FALSE;
  goto l139;
l137:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 4915)));
  i2 = i2!=(OOC_CHAR8)'#';
  
l139:
  if (i2) goto l141;
  i2=OOC_FALSE;
  goto l143;
l141:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 4932)));
  i2 = i2!=(OOC_CHAR8)'\000';
  
l143:
  if (i2) goto l145;
  i2=i1;
  goto l163;
l145:
  i2=i1;
l146_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 4865)));
  i3 = i3!=(OOC_CHAR8)'/';
  if (i3) goto l149;
  i3=OOC_FALSE;
  goto l151;
l149:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 4882)));
  i3 = i3!=(OOC_CHAR8)'?';
  
l151:
  if (i3) goto l153;
  i3=OOC_FALSE;
  goto l155;
l153:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 4915)));
  i3 = i3!=(OOC_CHAR8)'#';
  
l155:
  if (i3) goto l157;
  i3=OOC_FALSE;
  goto l159;
l157:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 4932)));
  i3 = i3!=(OOC_CHAR8)'\000';
  
l159:
  if (i3) goto l146_loop;
l163:
  i2 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, i1, i2);
  substr = (URI_String__StringPtr)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5053))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5053))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5064)))), URI__AuthorityDesc_ParseAuthority)),URI__AuthorityDesc_ParseAuthority)((URI__Authority)i4, (URI_String__StringPtr)i2, i1);
  *res = (Msg__Msg)i1;
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l166;
  i1=OOC_FALSE;
  goto l168;
l166:
  i1 = i;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 5140)));
  i1 = i1==(OOC_CHAR8)'/';
  
l168:
  if (i1) goto l170;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5214)))), URI__HierarchicalURIDesc_ClearPath)),URI__HierarchicalURIDesc_ClearPath)((URI__HierarchicalURI)i0);
  goto l174;
l170:
  URI_Parser__NewURI_Path(OOC_TRUE);
  goto l174;
l172:
  URI_Parser__NewURI_Err(4);
l174:
  i0 = (OOC_INT32)*res;
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l177;
  i0=OOC_FALSE;
  goto l179;
l177:
  i0 = i;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 5603)));
  i0 = i0==(OOC_CHAR8)'?';
  
l179:
  if (i0) goto l181;
  i0 = (OOC_INT32)hierURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6027)))), URI__HierarchicalURIDesc_SetQuery)),URI__HierarchicalURIDesc_SetQuery)((URI__HierarchicalURI)i0, (URI__Query)(OOC_INT32)0);
  goto l203;
l181:
  i0 = (OOC_INT32)hierURI;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5653)))), URI__HierarchicalURIDesc_NewQuery)),URI__HierarchicalURIDesc_NewQuery)((URI__HierarchicalURI)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5634)))), URI__HierarchicalURIDesc_SetQuery)),URI__HierarchicalURIDesc_SetQuery)((URI__HierarchicalURI)i0, (URI__Query)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5687))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l201;
  i1 = i;
  i1 = i1+1;
  i = i1;
  start = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 5815)));
  i2 = i2!=(OOC_CHAR8)'#';
  if (i2) goto l186;
  i2=OOC_FALSE;
  goto l188;
l186:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 5832)));
  i2 = i2!=(OOC_CHAR8)'\000';
  
l188:
  if (i2) goto l190;
  i2=i1;
  goto l200;
l190:
  i2=i1;
l191_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 5815)));
  i3 = i3!=(OOC_CHAR8)'#';
  if (i3) goto l194;
  i3=OOC_FALSE;
  goto l196;
l194:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 5832)));
  i3 = i3!=(OOC_CHAR8)'\000';
  
l196:
  if (i3) goto l191_loop;
l200:
  i2 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, i1, i2);
  substr = (URI_String__StringPtr)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5953))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5953))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5960)))), URI__QueryDesc_ParseQuery)),URI__QueryDesc_ParseQuery)((URI__Query)i0, (URI_String__StringPtr)i2, i1);
  *res = (Msg__Msg)i0;
  goto l203;
l201:
  URI_Parser__NewURI_Err(5);
l203:
  i0 = (OOC_INT32)schemeId;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l207;
  i0 = (OOC_INT32)hierURI;
  i1 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6108)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i0, (URI__HierarchicalURI)i1);
l207:
  i0 = (OOC_INT32)*res;
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l210;
  i0=OOC_FALSE;
  goto l212;
l210:
  i0 = i;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 6764)));
  i0 = i0!=(OOC_CHAR8)'\000';
  
l212:
  if (!i0) goto l214;
  URI_Parser__NewURI_Err(6);
l214:
  i0 = (OOC_INT32)*res;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l217;
  URI_Error__SetURIString((Msg__Msg)i0, (void*)(OOC_INT32)str, str_0d);
  return (URI__URI)(OOC_INT32)0;
  goto l218;
l217:
  i0 = (OOC_INT32)uri;
  return (URI__URI)i0;
l218:
  _failed_function(1442); return 0;
  ;
}

URI__Reference URI_Parser__NewReference(const URI_String__String str__ref, OOC_LEN str_0d, URI__HierarchicalURI baseURI, URI__Fragment fragmentPrototype, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT16 i;
  OOC_CHAR8 ch;
  URI__URI uri;
  URI__Fragment fragment;
  URI_String__StringPtr substr;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i = (OOC_INT32)0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 7694)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 7710)));
  i0 = i0!=(OOC_CHAR8)'#';
  
l5:
  if (i0) goto l7;
  i0=(OOC_INT32)0;
  goto l17;
l7:
  i0=(OOC_INT32)0;
l8_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7694)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7710)));
  i1 = i1!=(OOC_CHAR8)'#';
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7765)));
  ch = i1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7777))) = (OOC_CHAR8)'\000';
  i2 = (OOC_INT32)baseURI;
  i2 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)str, str_0d, (URI__HierarchicalURI)i2, (void*)(OOC_INT32)res);
  uri = (URI__URI)i2;
  i3 = (OOC_INT32)*res;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7834))) = i1;
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l20;
  return (URI__Reference)(OOC_INT32)0;
  goto l29;
l20:
  i1 = i1==(OOC_CHAR8)'\000';
  if (i1) goto l27;
  i1 = (OOC_INT32)fragmentPrototype;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8085)))), URI__FragmentDesc_Clone)),URI__FragmentDesc_Clone)((URI__Fragment)i1);
  fragment = (URI__Fragment)i1;
  i3 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = i0+1;
  i3 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, i0, i3);
  substr = (URI_String__StringPtr)i3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8183)))), URI__FragmentDesc_ParseFragment)),URI__FragmentDesc_ParseFragment)((URI__Fragment)i1, (URI_String__StringPtr)i3, i0);
  *res = (Msg__Msg)i0;
  i3 = i0==(OOC_INT32)0;
  if (i3) goto l25;
  URI_Error__SetURIString((Msg__Msg)i0, (void*)(OOC_INT32)str, str_0d);
  return (URI__Reference)(OOC_INT32)0;
  goto l29;
l25:
  i0 = (OOC_INT32)URI__NewReference((URI__URI)i2, (URI__Fragment)i1);
  return (URI__Reference)i0;
  goto l29;
l27:
  i0 = (OOC_INT32)URI__NewReference((URI__URI)i2, (URI__Fragment)(OOC_INT32)0);
  return (URI__Reference)i0;
l29:
  _failed_function(6955); return 0;
  ;
}

void OOC_URI_Parser_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Scheme_Hierarchical__New((URI_String__StringPtr)(OOC_INT32)0, (URI__Authority)(OOC_INT32)0, (URI__Query)(OOC_INT32)0);
  URI_Parser__defaultHierarchical = (URI__HierarchicalURI)i0;
  i0 = (OOC_INT32)URI_String__Copy("", 1);
  i0 = (OOC_INT32)URI_Scheme_Opaque__New((URI_String__StringPtr)(OOC_INT32)0, (URI_String__StringPtr)i0);
  URI_Parser__defaultOpaque = (URI__OpaqueURI)i0;
  i0 = (OOC_INT32)URI_Error__NewContext("URI:Parser", 11);
  URI_Parser__uriContext = (URI_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8626)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 1, "Illegal character in scheme component", 38);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8716)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 2, "Expected absolute or net path beginning with a slash `/\047", 57);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8832)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 3, "Expected opaque URI component, not a slash `/\047", 47);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8932)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 4, "This URI scheme does not support an authority component", 56);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9044)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 5, "This URI scheme does not support a query component", 51);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9147)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 6, "Junk after URI", 15);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9209)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 7, "The URI scheme name must be followed by a slash `/\047", 52);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9315)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 8, "The opaque part of an URI must not be empty", 44);
  i0 = (OOC_INT32)URI_Parser__uriContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9409)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 9, "Cannot resolve relative URI reference without known base URI", 61);
  return;
  ;
}

/* --- */
