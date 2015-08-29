#include <URI.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI__ErrorContextDesc_GetTemplate(URI__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0;
  OOC_CHAR8 t[128];

  i0 = (OOC_INT32)msg;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5987))+8);
  switch (i0) {
  case 1:
    _copy_8((const void*)"The URI `${uri}\047 does not support channel access",(void*)(OOC_INT32)t,128);
    goto l4;
  default:
    _failed_case(i0, 5979);
    goto l4;
  }
l4:
  _copy_8to16((const void*)(OOC_INT32)t,(void*)(OOC_INT32)templ,templ_0d);
  return;
  ;
}

void URI__InitURI(URI__URI uri, URI_String__StringPtr schemeId) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)schemeId;
  *(OOC_INT32*)(_check_pointer(i0, 6289)) = i1;
  return;
  ;
}

URI__URI URI__URIDesc_Clone(URI__URI uri) {

  _failed_function(6360); return 0;
  ;
}

void URI__URIDesc_Copy(URI__URI uri, URI__URI dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6797));
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)dest;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6894));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6894));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6904)), 0);
  i0 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 6904)), i0);
  *(OOC_INT32*)(_check_pointer(i1, 6867)) = i0;
  goto l4;
l3:
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)(_check_pointer(i0, 6830)) = 0;
l4:
  return;
  ;
}

void URI__URIDesc_SetSchemeId(URI__URI uri, URI_String__StringPtr schemeId) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)schemeId;
  *(OOC_INT32*)(_check_pointer(i0, 7128)) = i1;
  return;
  ;
}

void URI__URIDesc_WriteXML(URI__URI uri, TextRider__Writer w) {

  return;
  ;
}

void URI__URIDesc_GetString(URI__URI uri, OOC_CHAR8 str[], OOC_LEN str_0d) {

  return;
  ;
}

void URI__URIDesc_AppendScheme(URI__URI uri, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7872));
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7920));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7920));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7930)), 0);
  Strings__Append((void*)(_check_pointer(i1, 7930)), i0, (void*)(OOC_INT32)str, str_0d);
  Strings__Append(":", 2, (void*)(OOC_INT32)str, str_0d);
l4:
  return;
  ;
}

URI__URI URI__URIDesc_MakeRelative(URI__URI uri, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)uri;
  return (URI__URI)i0;
  ;
}

IO__ByteChannel URI__URIDesc_GetChannel(URI__URI uri, OOC_INT8 mode) {
  register OOC_INT32 i0;
  IO__NotImplemented e;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO__NotImplemented.baseTypes[0]);
  e = (IO__NotImplemented)i0;
  IO__InitError((IO__Error)i0, (Object__String)(OOC_INT32)0);
  Exception__Raise((void*)i0);
  _failed_function(8748); return 0;
  ;
}

void URI__InitOpaqueURI(URI__OpaqueURI uri, URI_String__StringPtr schemeId) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)schemeId;
  URI__InitURI((URI__URI)i0, (URI_String__StringPtr)i1);
  return;
  ;
}

Msg__Msg URI__OpaqueURIDesc_ParseOpaquePart(URI__OpaqueURI uri, URI_String__StringPtr str, OOC_INT16 offset) {

  _failed_function(10273); return 0;
  ;
}

void URI__InitAuthority(URI__Authority auth) {

  return;
  ;
}

URI__Authority URI__AuthorityDesc_Clone(URI__Authority auth) {

  _failed_function(11010); return 0;
  ;
}

void URI__AuthorityDesc_Copy(URI__Authority auth, URI__Authority dest) {

  return;
  ;
}

Msg__Msg URI__AuthorityDesc_ParseAuthority(URI__Authority auth, URI_String__StringPtr str, OOC_INT16 offset) {

  _failed_function(11443); return 0;
  ;
}

void URI__AuthorityDesc_WriteXML(URI__Authority auth, TextRider__Writer w) {

  return;
  ;
}

void URI__AuthorityDesc_Append(URI__Authority auth, OOC_CHAR8 str[], OOC_LEN str_0d) {

  return;
  ;
}

void URI__InitQuery(URI__Query query) {

  return;
  ;
}

URI__Query URI__QueryDesc_Clone(URI__Query query) {

  _failed_function(12497); return 0;
  ;
}

void URI__QueryDesc_Copy(URI__Query query, URI__Query dest) {

  return;
  ;
}

Msg__Msg URI__QueryDesc_ParseQuery(URI__Query query, URI_String__StringPtr str, OOC_INT16 offset) {

  _failed_function(12920); return 0;
  ;
}

void URI__QueryDesc_WriteXML(URI__Query query, TextRider__Writer w) {

  return;
  ;
}

void URI__QueryDesc_Append(URI__Query query, OOC_CHAR8 str[], OOC_LEN str_0d) {

  return;
  ;
}

void URI__InitHierarchicalURI(URI__HierarchicalURI uri, URI_String__StringPtr schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)schemeId;
  URI__InitURI((URI__URI)i0, (URI_String__StringPtr)i1);
  i1 = (OOC_INT32)authority;
  *(OOC_INT32*)((_check_pointer(i0, 14046))+4) = i1;
  i1 = (OOC_INT32)query;
  *(OOC_INT32*)((_check_pointer(i0, 14079))+8) = i1;
  return;
  ;
}

void URI__HierarchicalURIDesc_Copy(URI__HierarchicalURI uri, URI__URI dest) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)dest;
  URI__URIDesc_Copy((URI__URI)i0, (URI__URI)i1);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14220)))), &_td_URI__HierarchicalURIDesc);
  if (i2) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14211)))), 14211);
  goto l12;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14254))+4);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6;
  *(OOC_INT32*)((_check_pointer(i1, 14352))+4) = (OOC_INT32)0;
  goto l7;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14308))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14308))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14319)))), URI__AuthorityDesc_Clone)),URI__AuthorityDesc_Clone)((URI__Authority)i3);
  *(OOC_INT32*)((_check_pointer(i1, 14290))+4) = i2;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14395))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l10;
  *(OOC_INT32*)((_check_pointer(i1, 14481))+8) = (OOC_INT32)0;
  goto l12;
l10:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14441))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14441))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14448)))), URI__QueryDesc_Clone)),URI__QueryDesc_Clone)((URI__Query)i0);
  *(OOC_INT32*)((_check_pointer(i1, 14427))+8) = i0;
l12:
  return;
  ;
}

URI__Authority URI__HierarchicalURIDesc_NewAuthority(URI__HierarchicalURI uri) {

  _failed_function(14571); return 0;
  ;
}

void URI__HierarchicalURIDesc_SetAuthority(URI__HierarchicalURI uri, URI__Authority auth) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)auth;
  *(OOC_INT32*)((_check_pointer(i0, 15050))+4) = i1;
  return;
  ;
}

URI__Query URI__HierarchicalURIDesc_NewQuery(URI__HierarchicalURI uri) {

  _failed_function(15135); return 0;
  ;
}

void URI__HierarchicalURIDesc_SetQuery(URI__HierarchicalURI uri, URI__Query query) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)query;
  *(OOC_INT32*)((_check_pointer(i0, 15571))+8) = i1;
  return;
  ;
}

void URI__HierarchicalURIDesc_ResolveRelative(URI__HierarchicalURI uri, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15907));
  i1 = i1==0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)baseURI;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15960));
  *(OOC_INT32*)(_check_pointer(i0, 15939)) = i1;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15991))+4);
  i1 = i1==0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)baseURI;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16046))+4);
  *(OOC_INT32*)((_check_pointer(i0, 16024))+4) = i1;
l6:
  return;
  ;
}

void URI__HierarchicalURIDesc_ClearPath(URI__HierarchicalURI uri) {

  return;
  ;
}

Msg__Msg URI__HierarchicalURIDesc_ParsePath(URI__HierarchicalURI uri, URI_String__StringPtr str, OOC_CHAR8 absolute, OOC_INT16 offset) {

  _failed_function(16360); return 0;
  ;
}

URI__URI URI__HierarchicalURIDesc_MakeRelative(URI__HierarchicalURI uri, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 a1[1024];
  OOC_CHAR8 a2[1024];
  URI__URI copy;

  i0 = (OOC_INT32)baseURI;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l17;
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17170));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17191));
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 17180)),(const void*)(_check_pointer(i3, 17201))))!=0;
  if (i2) goto l15;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17309))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17338))+4);
  i2 = (i2==(OOC_INT32)0)!=(i3==(OOC_INT32)0);
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17676))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l16;
  _copy_8((const void*)"",(void*)(OOC_INT32)a1,1024);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17719))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17719))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17730)))), URI__AuthorityDesc_Append)),URI__AuthorityDesc_Append)((URI__Authority)i3, (void*)(OOC_INT32)a1, 1024);
  _copy_8((const void*)"",(void*)(OOC_INT32)a2,1024);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17768))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17768))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17779)))), URI__AuthorityDesc_Append)),URI__AuthorityDesc_Append)((URI__Authority)i0, (void*)(OOC_INT32)a2, 1024);
  i0 = (
  _cmp8((const void*)(OOC_INT32)a1,(const void*)(OOC_INT32)a2))!=0;
  if (!i0) goto l16;
  return (URI__URI)i1;
  goto l16;
l13:
  return (URI__URI)i1;
  goto l16;
l15:
  return (URI__URI)i1;
l16:
  i0=i1;
  goto l18;
l17:
  i0 = (OOC_INT32)uri;
  return (URI__URI)i0;
  
l18:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17982)))), URI__URIDesc_Clone)),URI__URIDesc_Clone)((URI__URI)i0);
  copy = (URI__URI)i0;
  *(OOC_INT32*)(_check_pointer(i0, 18001)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18029)))), &_td_URI__HierarchicalURIDesc, 18029)), 18045))+4) = (OOC_INT32)0;
  return (URI__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18081)))), &_td_URI__HierarchicalURIDesc, 18081));
  ;
}

void URI__HierarchicalURIDesc_AppendPath(URI__HierarchicalURI uri, OOC_CHAR8 str[], OOC_LEN str_0d) {

  return;
  ;
}

void URI__InitFragment(URI__Fragment frag) {

  return;
  ;
}

URI__Fragment URI__FragmentDesc_Clone(URI__Fragment frag) {

  _failed_function(18533); return 0;
  ;
}

void URI__FragmentDesc_Copy(URI__Fragment frag, URI__Fragment dest) {

  return;
  ;
}

Msg__Msg URI__FragmentDesc_ParseFragment(URI__Fragment frag, URI_String__StringPtr str, OOC_INT16 offset) {

  _failed_function(18961); return 0;
  ;
}

void URI__FragmentDesc_WriteXML(URI__Fragment frag, TextRider__Writer w) {

  return;
  ;
}

void URI__FragmentDesc_Append(URI__Fragment frag, OOC_CHAR8 str[], OOC_LEN str_0d) {

  return;
  ;
}

URI__Reference URI__NewReference(URI__URI uri, URI__Fragment fragment) {
  register OOC_INT32 i0,i1;
  URI__Reference ref;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI__Reference.baseTypes[0]);
  ref = (URI__Reference)i0;
  i1 = (OOC_INT32)uri;
  *(OOC_INT32*)(_check_pointer(i0, 20028)) = i1;
  i1 = (OOC_INT32)fragment;
  *(OOC_INT32*)((_check_pointer(i0, 20049))+4) = i1;
  return (URI__Reference)i0;
  ;
}

void URI__ReferenceDesc_WriteXML(URI__Reference ref, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20283)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<uri-reference>", 17);
  i1 = (OOC_INT32)ref;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20339));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20339));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20344)))), URI__URIDesc_WriteXML)),URI__URIDesc_WriteXML)((URI__URI)i3, (TextRider__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20371))+4);
  i2 = i2!=0;
  if (!i2) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20403))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20403))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20413)))), URI__FragmentDesc_WriteXML)),URI__FragmentDesc_WriteXML)((URI__Fragment)i1, (TextRider__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20442)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012</uri-reference>", 18);
  return;
  ;
}

void URI__ReferenceDesc_GetString(URI__Reference ref, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20857));
  i1 = i1!=0;
  if (i1) goto l3;
  _copy_8((const void*)"",(void*)(OOC_INT32)str,str_0d);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20884));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20884));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20889)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i2, (void*)(OOC_INT32)str, str_0d);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20957))+4);
  i1 = i1!=0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20989))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20989))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20999)))), URI__FragmentDesc_Append)),URI__FragmentDesc_Append)((URI__Fragment)i0, (void*)(OOC_INT32)str, str_0d);
l7:
  return;
  ;
}

static OOC_CHAR8 URI__Equal(URI_String__String a, OOC_LEN a_0d, URI_String__String b, OOC_LEN b_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = *(OOC_UINT8*)((OOC_INT32)a+(_check_index(0, a_0d, OOC_UINT32, 21220)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l13;
l3:
  i0=0;
l4_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 21249)));
  i2 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i0, b_0d, OOC_UINT32, 21262)));
  i1 = (_cap(i1))==(_cap(i2));
  if (i1) goto l7;
  return 0u;
  
  goto l8;
l7:
  i0 = i0+1;
  
l8:
  i1 = *(OOC_UINT8*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 21220)));
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l13:
  i0 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i0, b_0d, OOC_UINT32, 21353)));
  return (i0==0u);
  ;
}

void URI__RegisterScheme(URI__URI scheme) {
  auto void URI__RegisterScheme_Append(URI__List *list);
    
    void URI__RegisterScheme_Append(URI__List *list) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21900))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21908));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21900))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21908));
      i3 = (OOC_INT32)scheme;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 21927));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 21927));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21918)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 21937)), 0);
      i1 = URI__Equal((void*)(_check_pointer(i1, 21918)), i2, (void*)(_check_pointer(i4, 21937)), i3);
      if (i1) goto l5;
      URI__RegisterScheme_Append((void*)(_check_pointer(i0, 22007)));
      goto l8;
l5:
      i1 = (OOC_INT32)scheme;
      *(OOC_INT32*)((_check_pointer(i0, 21957))+4) = i1;
      goto l8;
l7:
      i0 = (OOC_INT32)RT0__NewObject(_td_URI__List.baseTypes[0]);
      *list = (URI__List)i0;
      *(OOC_INT32*)(_check_pointer(i0, 21831)) = (OOC_INT32)0;
      i0 = (OOC_INT32)*list;
      i1 = (OOC_INT32)scheme;
      *(OOC_INT32*)((_check_pointer(i0, 21858))+4) = i1;
l8:
      return;
      ;
    }


  URI__RegisterScheme_Append((void*)(OOC_INT32)&URI__schemeList);
  return;
  ;
}

URI__URI URI__GetScheme(URI_String__StringPtr name) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  URI__List scheme;

  i0 = (OOC_INT32)URI__schemeList;
  scheme = (URI__List)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22422))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22430));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22422))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 22430));
  i3 = (OOC_INT32)name;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 22447)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22440)), 0);
  i1 = URI__Equal((void*)(_check_pointer(i1, 22440)), i2, (void*)(_check_pointer(i3, 22447)), i4);
  i1 = !i1;
  
l5:
  if (!i1) goto l17;
  i1 = (OOC_INT32)name;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22475));
  scheme = (URI__List)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22422))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 22430));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22422))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 22430));
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22447)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 22440)), 0);
  i2 = URI__Equal((void*)(_check_pointer(i2, 22440)), i3, (void*)(_check_pointer(i1, 22447)), i4);
  i2 = !i2;
  
l13:
  if (i2) goto l8_loop;
l17:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22563))+4);
  return (URI__URI)i0;
  goto l21;
l20:
  return (URI__URI)(OOC_INT32)0;
l21:
  _failed_function(22109); return 0;
  ;
}

URI__URIAttribute URI__NewURIAttribute(const Msg__String name__ref, OOC_LEN name_0d, URI__URI value) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  URI__URIAttribute attr;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_URI__URIAttribute.baseTypes[0]);
  attr = (URI__URIAttribute)i0;
  Msg__InitAttribute((Msg__Attribute)i0, (void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 22849))+8) = i1;
  return (URI__URIAttribute)i0;
  ;
}

void URI__URIAttributeDesc_ReplacementText(URI__URIAttribute attr, Msg__LString text, OOC_LEN text_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[2048];

  i0 = (OOC_INT32)attr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23035))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23097))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23097))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23102)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 2048);
  _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)text,text_0d);
  goto l4;
l3:
  _copy_16((const void*)((OOC_CHAR16[]){78,73,76,0}),(void*)(OOC_INT32)text,text_0d);
l4:
  return;
  ;
}

void OOC_URI_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI__ErrorContext.baseTypes[0]);
  URI__uriContext = (URI__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "URI", 4);
  URI__schemeList = (URI__List)(OOC_INT32)0;
  return;
  ;
}

/* --- */
