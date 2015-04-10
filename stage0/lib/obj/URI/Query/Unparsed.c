#include "URI/Query/Unparsed.d"
#include "__oo2c.h"

void URI_Query_Unparsed__Init(URI_Query_Unparsed__Query query, URI_String__StringPtr unparsed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)query;
  URI__InitQuery((URI__Query)i0);
  i1 = (OOC_INT32)unparsed;
  _assert((i1!=(OOC_INT32)0), 127, 1547);
  *(OOC_INT32*)(_check_pointer(i0, 1581)) = i1;
  return;
  ;
}

URI_Query_Unparsed__Query URI_Query_Unparsed__New(URI_String__StringPtr unparsed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Query_Unparsed__Query.baseTypes[0]);
  i1 = (OOC_INT32)unparsed;
  URI_Query_Unparsed__Init((URI_Query_Unparsed__Query)i0, (URI_String__StringPtr)i1);
  return (URI_Query_Unparsed__Query)i0;
  ;
}

URI_Query_Unparsed__Query URI_Query_Unparsed__QueryDesc_Clone(URI_Query_Unparsed__Query query) {
  register OOC_INT32 i0,i1;
  URI_Query_Unparsed__Query copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Query_Unparsed__Query.baseTypes[0]);
  copy = (URI_Query_Unparsed__Query)i0;
  i1 = (OOC_INT32)query;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1871)))), URI__QueryDesc_Copy)),URI__QueryDesc_Copy)((URI__Query)i1, (URI__Query)i0);
  return (URI_Query_Unparsed__Query)i0;
  ;
}

void URI_Query_Unparsed__QueryDesc_Copy(URI_Query_Unparsed__Query query, URI__Query dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)dest;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2054)))), &_td_URI_Query_Unparsed__QueryDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2045)))), 2045);
  goto l4;
l3:
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2107));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2107));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2117)), 0);
  i1 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 2117)), i1);
  *(OOC_INT32*)(_check_pointer(i0, 2075)) = i1;
l4:
  return;
  ;
}

Msg__Msg URI_Query_Unparsed__QueryDesc_ParseQuery(URI_Query_Unparsed__Query query, URI_String__StringPtr str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i = 0;
  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2309)), 0);
  i1 = URI_CharClass__SkipURIC((void*)(_check_pointer(i0, 2309)), i1, (void*)(OOC_INT32)&i);
  if (!i1) goto l7;
l2_loop:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2309)), 0);
  i1 = URI_CharClass__SkipURIC((void*)(_check_pointer(i0, 2309)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l2_loop;
l7:
  i1 = _check_pointer(i0, 2334);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 2334)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l10;
  i1 = (OOC_INT32)query;
  *(OOC_INT32*)(_check_pointer(i1, 2435)) = i0;
  return (Msg__Msg)(OOC_INT32)0;
  goto l11;
l10:
  i0 = offset;
  i1 = (OOC_INT32)URI_Query_Unparsed__queryContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i1, 1, (i3+i0));
  return (Msg__Msg)i0;
l11:
  _failed_function(2166); return 0;
  ;
}

void URI_Query_Unparsed__QueryDesc_WriteXML(URI_Query_Unparsed__Query query, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2569)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<query-unparsed>", 18);
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2637));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2637));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2647)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2617)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 2647)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2656)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</query-unparsed>", 18);
  return;
  ;
}

void URI_Query_Unparsed__QueryDesc_Append(URI_Query_Unparsed__Query query, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  Strings__Append("?", 2, (void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)query;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2833));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2833));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2843)), 0);
  Strings__Append((void*)(_check_pointer(i1, 2843)), i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_URI_Query_Unparsed_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Error__NewContext("URI:Query:Unparsed", 19);
  URI_Query_Unparsed__queryContext = (URI_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2945)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 1, "Illegal character in query component", 37);
  return;
  ;
}

/* --- */
