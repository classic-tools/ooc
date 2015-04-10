#include "URI/Scheme/Opaque.d"
#include "__oo2c.h"

void URI_Scheme_Opaque__Init(URI_Scheme_Opaque__Generic uri, URI_String__StringPtr schemeId, URI_String__StringPtr opaque) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)schemeId;
  i1 = (OOC_INT32)uri;
  URI__InitOpaqueURI((URI__OpaqueURI)i1, (URI_String__StringPtr)i0);
  i0 = (OOC_INT32)opaque;
  _assert((i0!=(OOC_INT32)0), 127, 1355);
  *(OOC_INT32*)((_check_pointer(i1, 1385))+4) = i0;
  return;
  ;
}

URI_Scheme_Opaque__Generic URI_Scheme_Opaque__New(URI_String__StringPtr schemeId, URI_String__StringPtr opaque) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Opaque__Generic.baseTypes[0]);
  i1 = (OOC_INT32)schemeId;
  i2 = (OOC_INT32)opaque;
  URI_Scheme_Opaque__Init((URI_Scheme_Opaque__Generic)i0, (URI_String__StringPtr)i1, (URI_String__StringPtr)i2);
  return (URI_Scheme_Opaque__Generic)i0;
  ;
}

URI_Scheme_Opaque__Generic URI_Scheme_Opaque__GenericDesc_Clone(URI_Scheme_Opaque__Generic uri) {
  register OOC_INT32 i0,i1;
  URI_Scheme_Opaque__Generic copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Opaque__Generic.baseTypes[0]);
  copy = (URI_Scheme_Opaque__Generic)i0;
  i1 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1685)))), URI__URIDesc_Copy)),URI__URIDesc_Copy)((URI__URI)i1, (URI__URI)i0);
  return (URI_Scheme_Opaque__Generic)i0;
  ;
}

void URI_Scheme_Opaque__GenericDesc_Copy(URI_Scheme_Opaque__Generic uri, URI__URI dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)dest;
  URI__URIDesc_Copy((URI__URI)i0, (URI__URI)i1);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1822)))), &_td_URI_Scheme_Opaque__GenericDesc);
  if (i2) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1813)))), 1813);
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1873))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1873))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1881)), 0);
  i0 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 1881)), i0);
  *(OOC_INT32*)((_check_pointer(i1, 1845))+4) = i0;
l4:
  return;
  ;
}

static OOC_INT16 URI_Scheme_Opaque__IsValidOpaqueStr(const URI_String__String str__ref, OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT16 i;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 2007)));
  i0 = i0==(OOC_CHAR8)'/';
  if (i0) goto l14;
  i = 0;
  i0 = URI_CharClass__SkipURIC((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i);
  if (!i0) goto l9;
l4_loop:
  i0 = URI_CharClass__SkipURIC((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i);
  if (i0) goto l4_loop;
l9:
  i0 = i;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2122)));
  i1 = i1==(OOC_CHAR8)'\000';
  if (i1) goto l12;
  return i0;
  goto l15;
l12:
  return -1;
  goto l15;
l14:
  return 0;
l15:
  _failed_function(1915); return 0;
  ;
}

Msg__Msg URI_Scheme_Opaque__GenericDesc_ParseOpaquePart(URI_Scheme_Opaque__Generic uri, URI_String__StringPtr str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT16 pos;

  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2388)), 0);
  i1 = URI_Scheme_Opaque__IsValidOpaqueStr((void*)(_check_pointer(i0, 2388)), i1);
  pos = i1;
  i2 = i1<0;
  if (i2) goto l3;
  i0 = offset;
  i2 = (OOC_INT32)URI_Scheme_Opaque__opaqueContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i2, 1, (i1+i0));
  return (Msg__Msg)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)uri;
  i0 = (OOC_INT32)URI_String__Unescape((URI_String__StringPtr)i0);
  *(OOC_INT32*)((_check_pointer(i1, 2423))+4) = i0;
  return (Msg__Msg)(OOC_INT32)0;
l4:
  _failed_function(2251); return 0;
  ;
}

void URI_Scheme_Opaque__GenericDesc_WriteXML(URI_Scheme_Opaque__Generic uri, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2657)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<opaque-uri>", 14);
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2707));
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2737)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<scheme>", 10);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2797));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2797));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2807)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2779)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 2807)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2818)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</scheme>", 10);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2860)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<opaque-part>", 15);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2923))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2923))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2931)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2905)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 2931)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2940)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</opaque-part>", 15);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2979)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012</opaque-uri>", 15);
  return;
  ;
}

void URI_Scheme_Opaque__GenericDesc_GetString(URI_Scheme_Opaque__Generic uri, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  _copy_8("",(OOC_INT32)str,str_0d);
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3132)))), URI__URIDesc_AppendScheme)),URI__URIDesc_AppendScheme)((URI__URI)i0, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3183))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3183))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3191)), 0);
  URI_String__AppendEscaped((void*)(_check_pointer(i1, 3191)), i0, ";/?:@&=+$,[]", 13, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_URI_Scheme_Opaque_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Error__NewContext("URI:Scheme:Opaque", 18);
  URI_Scheme_Opaque__opaqueContext = (URI_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3317)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 1, "Illegal character for opaque component of an URI", 49);
  return;
  ;
}

/* --- */
