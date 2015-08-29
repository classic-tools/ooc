#include "URI/Scheme/CurrentDoc.d"
#include "__oo2c.h"

void URI_Scheme_CurrentDoc__Init(URI_Scheme_CurrentDoc__CurrentDoc uri) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)uri;
  URI__InitURI((URI__URI)i0, (URI_String__StringPtr)(OOC_INT32)0);
  return;
  ;
}

URI_Scheme_CurrentDoc__CurrentDoc URI_Scheme_CurrentDoc__New() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_CurrentDoc__CurrentDoc.baseTypes[0]);
  URI_Scheme_CurrentDoc__Init((URI_Scheme_CurrentDoc__CurrentDoc)i0);
  return (URI_Scheme_CurrentDoc__CurrentDoc)i0;
  ;
}

URI__URI URI_Scheme_CurrentDoc__CurrentDocDesc_Clone(URI_Scheme_CurrentDoc__CurrentDoc uri) {
  register OOC_INT32 i0,i1;
  URI_Scheme_CurrentDoc__CurrentDoc copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_CurrentDoc__CurrentDoc.baseTypes[0]);
  copy = (URI_Scheme_CurrentDoc__CurrentDoc)i0;
  i1 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1530)))), URI__URIDesc_Copy)),URI__URIDesc_Copy)((URI__URI)i1, (URI__URI)i0);
  return (URI__URI)i0;
  ;
}

void URI_Scheme_CurrentDoc__CurrentDocDesc_Copy(URI_Scheme_CurrentDoc__CurrentDoc uri, URI__URI dest) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)dest;
  URI__URIDesc_Copy((URI__URI)i0, (URI__URI)i1);
  return;
  ;
}

void URI_Scheme_CurrentDoc__CurrentDocDesc_WriteXML(URI_Scheme_CurrentDoc__CurrentDoc uri, TextRider__Writer w) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1743)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<current-document/>", 21);
  return;
  ;
}

void URI_Scheme_CurrentDoc__CurrentDocDesc_GetString(URI_Scheme_CurrentDoc__CurrentDoc uri, OOC_CHAR8 str[], OOC_LEN str_0d) {

  _copy_8((const void*)"",(void*)(OOC_INT32)str,str_0d);
  return;
  ;
}

void OOC_URI_Scheme_CurrentDoc_init(void) {

  return;
  ;
}

/* --- */
