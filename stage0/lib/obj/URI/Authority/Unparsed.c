#include "URI/Authority/Unparsed.d"
#include "__oo2c.h"

void URI_Authority_Unparsed__Init(URI_Authority_Unparsed__Authority auth, URI_String__StringPtr unparsed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)auth;
  URI__InitAuthority((URI__Authority)i0);
  i1 = (OOC_INT32)unparsed;
  _assert((i1!=(OOC_INT32)0), 127, 1549);
  *(OOC_INT32*)(_check_pointer(i0, 1582)) = i1;
  return;
  ;
}

URI_Authority_Unparsed__Authority URI_Authority_Unparsed__New(URI_String__StringPtr unparsed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Authority_Unparsed__Authority.baseTypes[0]);
  i1 = (OOC_INT32)unparsed;
  URI_Authority_Unparsed__Init((URI_Authority_Unparsed__Authority)i0, (URI_String__StringPtr)i1);
  return (URI_Authority_Unparsed__Authority)i0;
  ;
}

URI_Authority_Unparsed__Authority URI_Authority_Unparsed__AuthorityDesc_Clone(URI_Authority_Unparsed__Authority auth) {
  register OOC_INT32 i0,i1;
  URI_Authority_Unparsed__Authority copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Authority_Unparsed__Authority.baseTypes[0]);
  copy = (URI_Authority_Unparsed__Authority)i0;
  i1 = (OOC_INT32)auth;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1886)))), URI__AuthorityDesc_Copy)),URI__AuthorityDesc_Copy)((URI__Authority)i1, (URI__Authority)i0);
  return (URI_Authority_Unparsed__Authority)i0;
  ;
}

void URI_Authority_Unparsed__AuthorityDesc_Copy(URI_Authority_Unparsed__Authority auth, URI__Authority dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)dest;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2075)))), &_td_URI_Authority_Unparsed__AuthorityDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2066)))), 2066);
  goto l4;
l3:
  i1 = (OOC_INT32)auth;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2131));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2131));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2141)), 0);
  i1 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 2141)), i1);
  *(OOC_INT32*)(_check_pointer(i0, 2100)) = i1;
l4:
  return;
  ;
}

Msg__Msg URI_Authority_Unparsed__AuthorityDesc_ParseAuthority(URI_Authority_Unparsed__Authority auth, URI_String__StringPtr str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i = 0;
  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2344)), 0);
  i1 = URI_CharClass__SkipAuthChar((void*)(_check_pointer(i0, 2344)), i1, (void*)(OOC_INT32)&i);
  if (!i1) goto l7;
l2_loop:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2344)), 0);
  i1 = URI_CharClass__SkipAuthChar((void*)(_check_pointer(i0, 2344)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l2_loop;
l7:
  i1 = _check_pointer(i0, 2369);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 2369)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l10;
  i1 = (OOC_INT32)auth;
  *(OOC_INT32*)(_check_pointer(i1, 2467)) = i0;
  return (Msg__Msg)(OOC_INT32)0;
  goto l11;
l10:
  i0 = offset;
  i1 = (OOC_INT32)URI_Authority_Unparsed__authContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i1, 1, (i3+i0));
  return (Msg__Msg)i0;
l11:
  _failed_function(2193); return 0;
  ;
}

void URI_Authority_Unparsed__AuthorityDesc_WriteXML(URI_Authority_Unparsed__Authority auth, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2608)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<authority-unparsed>", 22);
  i1 = (OOC_INT32)auth;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2679));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2679));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2689)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2660)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 2689)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2698)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</authority-unparsed>", 22);
  return;
  ;
}

void URI_Authority_Unparsed__AuthorityDesc_Append(URI_Authority_Unparsed__Authority auth, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  Strings__Append("//", 3, (void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)auth;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2881));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2881));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2891)), 0);
  Strings__Append((void*)(_check_pointer(i1, 2891)), i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_URI_Authority_Unparsed_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Error__NewContext("URI:Authority:Unparsed", 23);
  URI_Authority_Unparsed__authContext = (URI_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2995)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 1, "Illegal character in authority component", 41);
  return;
  ;
}

/* --- */
