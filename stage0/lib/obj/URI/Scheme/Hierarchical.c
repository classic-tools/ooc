#include <URI/Scheme/Hierarchical.d>
#include <__oo2c.h>

void URI_Scheme_Hierarchical__InitParameter(URI_Scheme_Hierarchical__Parameter param, URI_String__StringPtr string) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)param;
  *(OOC_INT32*)(_check_pointer(i0, 2658)) = (OOC_INT32)0;
  i1 = (OOC_INT32)string;
  *(OOC_INT32*)((_check_pointer(i0, 2682))+4) = i1;
  return;
  ;
}

URI_Scheme_Hierarchical__Parameter URI_Scheme_Hierarchical__NewParameter(URI_String__StringPtr string) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Hierarchical__Parameter.baseTypes[0]);
  i1 = (OOC_INT32)string;
  URI_Scheme_Hierarchical__InitParameter((URI_Scheme_Hierarchical__Parameter)i0, (URI_String__StringPtr)i1);
  return (URI_Scheme_Hierarchical__Parameter)i0;
  ;
}

void URI_Scheme_Hierarchical__ParameterDesc_Copy(URI_Scheme_Hierarchical__Parameter param, URI_Scheme_Hierarchical__Parameter dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)(_check_pointer(i0, 2979)) = (OOC_INT32)0;
  i1 = (OOC_INT32)param;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3029))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3029))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3037)), (OOC_INT32)0);
  i1 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 3037)), i1);
  *(OOC_INT32*)((_check_pointer(i0, 3002))+4) = i1;
  return;
  ;
}

URI_Scheme_Hierarchical__Parameter URI_Scheme_Hierarchical__ParameterDesc_Clone(URI_Scheme_Hierarchical__Parameter param) {
  register OOC_INT32 i0,i1;
  URI_Scheme_Hierarchical__Parameter copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Hierarchical__Parameter.baseTypes[0]);
  copy = (URI_Scheme_Hierarchical__Parameter)i0;
  i1 = (OOC_INT32)param;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3164)))), URI_Scheme_Hierarchical__ParameterDesc_Copy)),URI_Scheme_Hierarchical__ParameterDesc_Copy)((URI_Scheme_Hierarchical__Parameter)i1, (URI_Scheme_Hierarchical__Parameter)i0);
  return (URI_Scheme_Hierarchical__Parameter)i0;
  ;
}

void URI_Scheme_Hierarchical__ParameterDesc_WriteXML(URI_Scheme_Hierarchical__Parameter param, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3284)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<parameter>", 13);
  i1 = (OOC_INT32)param;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3347))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3347))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3355)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3327)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 3355)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3364)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</parameter>", 13);
  return;
  ;
}

void URI_Scheme_Hierarchical__ParameterDesc_Append(URI_Scheme_Hierarchical__Parameter param, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)param;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3512))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3512))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3520)), (OOC_INT32)0);
  URI_String__AppendEscaped((void*)(_check_pointer(i1, 3520)), i0, ":@&=+$,", 8, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void URI_Scheme_Hierarchical__InitSegment(URI_Scheme_Hierarchical__Segment segm, URI_String__StringPtr string) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)segm;
  *(OOC_INT32*)(_check_pointer(i0, 3749)) = (OOC_INT32)0;
  i1 = (OOC_INT32)string;
  *(OOC_INT32*)((_check_pointer(i0, 3772))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3800))+12) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 3828))+8) = OOC_FALSE;
  return;
  ;
}

URI_Scheme_Hierarchical__Segment URI_Scheme_Hierarchical__NewSegment(URI_String__StringPtr string) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Hierarchical__Segment.baseTypes[0]);
  i1 = (OOC_INT32)string;
  URI_Scheme_Hierarchical__InitSegment((URI_Scheme_Hierarchical__Segment)i0, (URI_String__StringPtr)i1);
  return (URI_Scheme_Hierarchical__Segment)i0;
  ;
}

void URI_Scheme_Hierarchical__SegmentDesc_AppendParameter(URI_Scheme_Hierarchical__Segment segm, URI_Scheme_Hierarchical__Parameter param) {
  register OOC_INT32 i0;
  auto void URI_Scheme_Hierarchical__SegmentDesc_AppendParameter_Append(URI_Scheme_Hierarchical__Parameter *list);
    
    void URI_Scheme_Hierarchical__SegmentDesc_AppendParameter_Append(URI_Scheme_Hierarchical__Parameter *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      URI_Scheme_Hierarchical__SegmentDesc_AppendParameter_Append((void*)(_check_pointer(i0, 4237)));
      goto l4;
l3:
      i0 = (OOC_INT32)param;
      *list = (URI_Scheme_Hierarchical__Parameter)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)param;
  *(OOC_INT32*)(_check_pointer(i0, 4291)) = (OOC_INT32)0;
  i0 = (OOC_INT32)segm;
  URI_Scheme_Hierarchical__SegmentDesc_AppendParameter_Append((void*)((_check_pointer(i0, 4322))+12));
  return;
  ;
}

void URI_Scheme_Hierarchical__SegmentDesc_Copy(URI_Scheme_Hierarchical__Segment segm, URI_Scheme_Hierarchical__Segment dest) {
  register OOC_INT32 i0,i1,i2,i3;
  URI_Scheme_Hierarchical__Parameter param;

  i0 = (OOC_INT32)dest;
  i1 = (OOC_INT32)segm;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4466));
  *(OOC_INT32*)(_check_pointer(i0, 4452)) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4508))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4508))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4516)), (OOC_INT32)0);
  i2 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 4516)), i3);
  *(OOC_INT32*)((_check_pointer(i0, 4482))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 4528))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4565))+12);
  param = (URI_Scheme_Hierarchical__Parameter)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4639)))), URI_Scheme_Hierarchical__ParameterDesc_Clone)),URI_Scheme_Hierarchical__ParameterDesc_Clone)((URI_Scheme_Hierarchical__Parameter)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4615)))), URI_Scheme_Hierarchical__SegmentDesc_AppendParameter)),URI_Scheme_Hierarchical__SegmentDesc_AppendParameter)((URI_Scheme_Hierarchical__Segment)i0, (URI_Scheme_Hierarchical__Parameter)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4671));
  param = (URI_Scheme_Hierarchical__Parameter)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

URI_Scheme_Hierarchical__Segment URI_Scheme_Hierarchical__SegmentDesc_Clone(URI_Scheme_Hierarchical__Segment segm) {
  register OOC_INT32 i0,i1;
  URI_Scheme_Hierarchical__Segment copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Hierarchical__Segment.baseTypes[0]);
  copy = (URI_Scheme_Hierarchical__Segment)i0;
  i1 = (OOC_INT32)segm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4802)))), URI_Scheme_Hierarchical__SegmentDesc_Copy)),URI_Scheme_Hierarchical__SegmentDesc_Copy)((URI_Scheme_Hierarchical__Segment)i1, (URI_Scheme_Hierarchical__Segment)i0);
  return (URI_Scheme_Hierarchical__Segment)i0;
  ;
}

void URI_Scheme_Hierarchical__SegmentDesc_WriteXML(URI_Scheme_Hierarchical__Segment segm, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  URI_Scheme_Hierarchical__Parameter param;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4947)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<segment>", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4988)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<value>", 9);
  i1 = (OOC_INT32)segm;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5046))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5046))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5054)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5027)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 5054)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5063)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</value>", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5108))+12);
  i2 = i1!=(OOC_INT32)0;
  param = (URI_Scheme_Hierarchical__Parameter)i1;
  if (!i2) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5159)))), URI_Scheme_Hierarchical__ParameterDesc_WriteXML)),URI_Scheme_Hierarchical__ParameterDesc_WriteXML)((URI_Scheme_Hierarchical__Parameter)i1, (TextRider__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5195));
  param = (URI_Scheme_Hierarchical__Parameter)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5216)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012</segment>", 12);
  return;
  ;
}

void URI_Scheme_Hierarchical__SegmentDesc_Append(URI_Scheme_Hierarchical__Segment segm, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  URI_Scheme_Hierarchical__Parameter param;

  i0 = (OOC_INT32)segm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5393))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5393))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5401)), (OOC_INT32)0);
  URI_String__AppendEscaped((void*)(_check_pointer(i1, 5401)), i2, ":@&=+$,", 8, (void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5454))+12);
  i1 = i0!=(OOC_INT32)0;
  param = (URI_Scheme_Hierarchical__Parameter)i0;
  if (!i1) goto l8;
l3_loop:
  Strings__Append(";", 2, (void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5538)))), URI_Scheme_Hierarchical__ParameterDesc_Append)),URI_Scheme_Hierarchical__ParameterDesc_Append)((URI_Scheme_Hierarchical__Parameter)i0, (void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5574));
  param = (URI_Scheme_Hierarchical__Parameter)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  return;
  ;
}

void URI_Scheme_Hierarchical__Init(URI_Scheme_Hierarchical__Generic uri, URI_String__StringPtr schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)schemeId;
  i1 = (OOC_INT32)authority;
  i2 = (OOC_INT32)query;
  i3 = (OOC_INT32)uri;
  URI__InitHierarchicalURI((URI__HierarchicalURI)i3, (URI_String__StringPtr)i0, (URI__Authority)i1, (URI__Query)i2);
  *(OOC_INT32*)((_check_pointer(i3, 5938))+12) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i3, 5964))+16) = OOC_TRUE;
  return;
  ;
}

URI_Scheme_Hierarchical__Generic URI_Scheme_Hierarchical__New(URI_String__StringPtr schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Hierarchical__Generic.baseTypes[0]);
  i1 = (OOC_INT32)schemeId;
  i2 = (OOC_INT32)authority;
  i3 = (OOC_INT32)query;
  URI_Scheme_Hierarchical__Init((URI_Scheme_Hierarchical__Generic)i0, (URI_String__StringPtr)i1, (URI__Authority)i2, (URI__Query)i3);
  return (URI_Scheme_Hierarchical__Generic)i0;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_AppendSegment(URI_Scheme_Hierarchical__Generic uri, URI_Scheme_Hierarchical__Segment segm) {
  register OOC_INT32 i0;
  auto void URI_Scheme_Hierarchical__GenericDesc_AppendSegment_Append(URI_Scheme_Hierarchical__Segment *list);
    
    void URI_Scheme_Hierarchical__GenericDesc_AppendSegment_Append(URI_Scheme_Hierarchical__Segment *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      URI_Scheme_Hierarchical__GenericDesc_AppendSegment_Append((void*)(_check_pointer(i0, 6627)));
      goto l4;
l3:
      i0 = (OOC_INT32)segm;
      *list = (URI_Scheme_Hierarchical__Segment)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)segm;
  *(OOC_INT32*)(_check_pointer(i0, 6680)) = (OOC_INT32)0;
  i0 = (OOC_INT32)uri;
  URI_Scheme_Hierarchical__GenericDesc_AppendSegment_Append((void*)((_check_pointer(i0, 6710))+12));
  return;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_RemoveSegment(URI_Scheme_Hierarchical__Generic uri, URI_Scheme_Hierarchical__Segment segm) {
  register OOC_INT32 i0,i1,i2;
  URI_Scheme_Hierarchical__Segment ptr;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7006))+12);
  i2 = (OOC_INT32)segm;
  i1 = i1==i2;
  if (i1) goto l12;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7089))+12);
  ptr = (URI_Scheme_Hierarchical__Segment)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7117));
  i1 = i1!=i2;
  if (!i1) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7153));
  ptr = (URI_Scheme_Hierarchical__Segment)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7117));
  i1 = i1!=i2;
  if (i1) goto l6_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7194));
  *(OOC_INT32*)(_check_pointer(i0, 7180)) = i1;
  goto l13;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7057));
  *(OOC_INT32*)((_check_pointer(i0, 7039))+12) = i1;
l13:
  return;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_StripSegments(URI_Scheme_Hierarchical__Generic uri, OOC_INT32 n) {
  register OOC_INT32 i0,i1;
  auto OOC_INT32 URI_Scheme_Hierarchical__GenericDesc_StripSegments_Strip(URI_Scheme_Hierarchical__Segment *list, OOC_INT32 n);
    
    OOC_INT32 URI_Scheme_Hierarchical__GenericDesc_StripSegments_Strip(URI_Scheme_Hierarchical__Segment *list, OOC_INT32 n) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l6;
      i1 = n;
      i0 = URI_Scheme_Hierarchical__GenericDesc_StripSegments_Strip((void*)(_check_pointer(i0, 7622)), i1);
      i1 = i0>0;
      if (!i1) goto l5;
      *list = (URI_Scheme_Hierarchical__Segment)(OOC_INT32)0;
l5:
      return (i0-1);
      goto l7;
l6:
      i0 = n;
      return i0;
l7:
      _failed_function(7459); return 0;
      ;
    }


  i0 = (OOC_INT32)uri;
  i1 = n;
  i0 = URI_Scheme_Hierarchical__GenericDesc_StripSegments_Strip((void*)((_check_pointer(i0, 7771))+12), i1);
  return;
  ;
}

URI_Scheme_Hierarchical__Generic URI_Scheme_Hierarchical__GenericDesc_Clone(URI_Scheme_Hierarchical__Generic uri) {
  register OOC_INT32 i0,i1;
  URI_Scheme_Hierarchical__Generic copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_Hierarchical__Generic.baseTypes[0]);
  copy = (URI_Scheme_Hierarchical__Generic)i0;
  i1 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7909)))), URI__HierarchicalURIDesc_Copy)),URI__HierarchicalURIDesc_Copy)((URI__HierarchicalURI)i1, (URI__URI)i0);
  return (URI_Scheme_Hierarchical__Generic)i0;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_Copy(URI_Scheme_Hierarchical__Generic uri, URI__URI dest) {
  register OOC_INT32 i0,i1,i2;
  URI_Scheme_Hierarchical__Segment segm;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)dest;
  URI__HierarchicalURIDesc_Copy((URI__HierarchicalURI)i0, (URI__URI)i1);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8071)))), &_td_URI_Scheme_Hierarchical__GenericDesc);
  if (i2) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8062)))), 8062);
  goto l12;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 8094))+12) = (OOC_INT32)0;
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 8144))+16);
  *(OOC_UINT8*)((_check_pointer(i1, 8123))+16) = i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8177))+12);
  segm = (URI_Scheme_Hierarchical__Segment)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l12;
l6_loop:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8250)))), URI_Scheme_Hierarchical__SegmentDesc_Clone)),URI_Scheme_Hierarchical__SegmentDesc_Clone)((URI_Scheme_Hierarchical__Segment)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8229)))), URI_Scheme_Hierarchical__GenericDesc_AppendSegment)),URI_Scheme_Hierarchical__GenericDesc_AppendSegment)((URI_Scheme_Hierarchical__Generic)i1, (URI_Scheme_Hierarchical__Segment)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8282));
  segm = (URI_Scheme_Hierarchical__Segment)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l12:
  return;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_ClearPath(URI_Scheme_Hierarchical__Generic uri) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)uri;
  *(OOC_INT32*)((_check_pointer(i0, 8372))+12) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 8398))+16) = OOC_TRUE;
  return;
  ;
}

URI__Authority URI_Scheme_Hierarchical__GenericDesc_NewAuthority(URI_Scheme_Hierarchical__Generic uri) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_String__Copy("", 1);
  i0 = (OOC_INT32)URI_Authority_Unparsed__New((URI_String__StringPtr)i0);
  return (URI__Authority)i0;
  ;
}

URI__Query URI_Scheme_Hierarchical__GenericDesc_NewQuery(URI_Scheme_Hierarchical__Generic uri) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_String__Copy("", 1);
  i0 = (OOC_INT32)URI_Query_Unparsed__New((URI_String__StringPtr)i0);
  return (URI__Query)i0;
  ;
}

Msg__Msg URI_Scheme_Hierarchical__GenericDesc_ParsePath(URI_Scheme_Hierarchical__Generic uri, URI_String__StringPtr str, OOC_CHAR8 absolute, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  URI_Scheme_Hierarchical__Segment oldPathList;
  OOC_CHAR8 absToggle;
  OOC_INT16 i;
  OOC_INT16 start;
  URI_String__StringPtr substr;
  URI_Scheme_Hierarchical__Segment segment;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8946))+12);
  oldPathList = (URI_Scheme_Hierarchical__Segment)i1;
  i2 = absolute;
  absToggle = i2;
  *(OOC_INT32*)((_check_pointer(i0, 8992))+12) = (OOC_INT32)0;
  i = 0;
  i3 = (OOC_INT32)str;
  i4=i2;
l1_loop:
  i5 = i;
  start = i5;
  if (i4) goto l4;
  i6 = _check_pointer(i3, 9080);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT16, 9080)));
  i6 = i6!=(OOC_CHAR8)':';
  
  goto l6;
l4:
  i6=OOC_TRUE;
l6:
  if (i6) goto l8;
  i6=OOC_FALSE;
  goto l10;
l8:
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9118)), 0);
  i6 = URI_CharClass__SkipPChar((void*)(_check_pointer(i3, 9118)), i6, (void*)(OOC_INT32)&i);
  
l10:
  if (!i6) goto l24;
l11_loop:
  if (i4) goto l14;
  i6 = _check_pointer(i3, 9080);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = i;
  i6 = *(OOC_UINT8*)(i6+(_check_index(i8, i7, OOC_UINT16, 9080)));
  i6 = i6!=(OOC_CHAR8)':';
  
  goto l16;
l14:
  i6=OOC_TRUE;
l16:
  if (i6) goto l18;
  i6=OOC_FALSE;
  goto l20;
l18:
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9118)), 0);
  i6 = URI_CharClass__SkipPChar((void*)(_check_pointer(i3, 9118)), i6, (void*)(OOC_INT32)&i);
  
l20:
  if (i6) goto l11_loop;
l24:
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9170)), 0);
  i7 = i;
  i5 = (OOC_INT32)URI_String__Extract((void*)(_check_pointer(i3, 9170)), i6, i5, i7);
  substr = (URI_String__StringPtr)i5;
  i6 = (OOC_INT32)URI_String__Unescape((URI_String__StringPtr)i5);
  i6 = (OOC_INT32)URI_Scheme_Hierarchical__NewSegment((URI_String__StringPtr)i6);
  segment = (URI_Scheme_Hierarchical__Segment)i6;
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i5, 9297)), 0);
  i5 = URI_CharClass__IsMember((OOC_CHAR8)'%', (void*)(_check_pointer(i5, 9297)), i7);
  *(OOC_UINT8*)((_check_pointer(i6, 9250))+8) = i5;
  i5 = _check_pointer(i3, 9318);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = i;
  i5 = *(OOC_UINT8*)(i5+(_check_index(i8, i7, OOC_UINT16, 9318)));
  i5 = i5==(OOC_CHAR8)';';
  if (!i5) goto l54;
l26_loop:
  i5 = i;
  i5 = i5+1;
  i = i5;
  start = i5;
  if (i4) goto l29;
  i7 = _check_pointer(i3, 9401);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i5, i8, OOC_UINT16, 9401)));
  i7 = i7!=(OOC_CHAR8)':';
  
  goto l31;
l29:
  i7=OOC_TRUE;
l31:
  if (i7) goto l33;
  i7=OOC_FALSE;
  goto l35;
l33:
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9439)), 0);
  i7 = URI_CharClass__SkipPChar((void*)(_check_pointer(i3, 9439)), i7, (void*)(OOC_INT32)&i);
  
l35:
  if (!i7) goto l49;
l36_loop:
  if (i4) goto l39;
  i7 = _check_pointer(i3, 9401);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = i;
  i7 = *(OOC_UINT8*)(i7+(_check_index(i9, i8, OOC_UINT16, 9401)));
  i7 = i7!=(OOC_CHAR8)':';
  
  goto l41;
l39:
  i7=OOC_TRUE;
l41:
  if (i7) goto l43;
  i7=OOC_FALSE;
  goto l45;
l43:
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9439)), 0);
  i7 = URI_CharClass__SkipPChar((void*)(_check_pointer(i3, 9439)), i7, (void*)(OOC_INT32)&i);
  
l45:
  if (i7) goto l36_loop;
l49:
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9550)), 0);
  i8 = i;
  i5 = (OOC_INT32)URI_String__Extract((void*)(_check_pointer(i3, 9550)), i7, i5, i8);
  i5 = (OOC_INT32)URI_String__Unescape((URI_String__StringPtr)i5);
  i5 = (OOC_INT32)URI_Scheme_Hierarchical__NewParameter((URI_String__StringPtr)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9476)))), URI_Scheme_Hierarchical__SegmentDesc_AppendParameter)),URI_Scheme_Hierarchical__SegmentDesc_AppendParameter)((URI_Scheme_Hierarchical__Segment)i6, (URI_Scheme_Hierarchical__Parameter)i5);
  i5 = _check_pointer(i3, 9318);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = i;
  i5 = *(OOC_UINT8*)(i5+(_check_index(i8, i7, OOC_UINT16, 9318)));
  i5 = i5==(OOC_CHAR8)';';
  if (i5) goto l26_loop;
l54:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9587)))), URI_Scheme_Hierarchical__GenericDesc_AppendSegment)),URI_Scheme_Hierarchical__GenericDesc_AppendSegment)((URI_Scheme_Hierarchical__Generic)i0, (URI_Scheme_Hierarchical__Segment)i6);
  absToggle = OOC_TRUE;
  i4 = _check_pointer(i3, 9652);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = i;
  i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT16, 9652)));
  i4 = i4==(OOC_CHAR8)'/';
  if (!i4) goto l59;
  i = (i6+1);
  i4=OOC_TRUE;
  goto l1_loop;
l59:
  i3 = _check_pointer(i3, 9738);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i6, i4, OOC_UINT16, 9738)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l62;
  *(OOC_UINT8*)((_check_pointer(i0, 9871))+16) = i2;
  return (Msg__Msg)(OOC_INT32)0;
  goto l63;
l62:
  i2 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 9762))+12) = i1;
  i0 = (OOC_INT32)URI_Scheme_Hierarchical__pathContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i0, 1, (i6+i2));
  return (Msg__Msg)i0;
l63:
  _failed_function(8715); return 0;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_ResolveRelative(URI_Scheme_Hierarchical__Generic uri, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2,i3;
  URI__URI copy;
  URI_Scheme_Hierarchical__Segment ptr;
  URI_Scheme_Hierarchical__Segment next;
  auto void URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDot(URI_Scheme_Hierarchical__Segment *segm);
  auto OOC_CHAR8 URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDotDot(URI_Scheme_Hierarchical__Segment *segm);
    
    void URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDot(URI_Scheme_Hierarchical__Segment *segm) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*segm;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10153))+4);
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 10161)),(const void*)"."))==(OOC_INT32)0;
      
l5:
      if (i1) goto l7;
      i0=OOC_FALSE;
      goto l9;
l7:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 10177))+8);
      i0 = !i0;
      
l9:
      if (!i0) goto l28;
l11_loop:
      i0 = (OOC_INT32)*segm;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10209));
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10303));
      *segm = (URI_Scheme_Hierarchical__Segment)i0;
      goto l15;
l14:
      i1 = (OOC_INT32)URI_String__Copy("", 1);
      *(OOC_INT32*)((_check_pointer(i0, 10242))+4) = i1;
l15:
      i0 = (OOC_INT32)*segm;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l18;
      i1=OOC_FALSE;
      goto l20;
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10153))+4);
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 10161)),(const void*)"."))==(OOC_INT32)0;
      
l20:
      if (i1) goto l22;
      i0=OOC_FALSE;
      goto l24;
l22:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 10177))+8);
      i0 = !i0;
      
l24:
      if (i0) goto l11_loop;
l28:
      i0 = (OOC_INT32)*segm;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l31;
      URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDot((void*)(_check_pointer(i0, 10383)));
l31:
      return;
      ;
    }

    
    OOC_CHAR8 URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDotDot(URI_Scheme_Hierarchical__Segment *segm) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*segm;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l4;
      return OOC_FALSE;
      goto l32;
l4:
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l12;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10558))+4);
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 10566)),(const void*)".."))!=(OOC_INT32)0;
      if (i1) goto l9;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 10583))+8);
      
      goto l12;
l9:
      i1=OOC_TRUE;
l12:
      if (i1) goto l14;
      i1=OOC_FALSE;
      goto l16;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10615));
      i1 = i1!=(OOC_INT32)0;
      
l16:
      if (i1) goto l18;
      i1=OOC_FALSE;
      goto l20;
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10647));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10653))+4);
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 10661)),(const void*)".."))==(OOC_INT32)0;
      
l20:
      if (i1) goto l22;
      i1=OOC_FALSE;
      goto l24;
l22:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10689));
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 10695))+8);
      i1 = !i1;
      
l24:
      if (i1) goto l26;
      i0 = URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDotDot((void*)(_check_pointer(i0, 10966)));
      return i0;
      goto l32;
l26:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10731));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10737));
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l29;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10868));
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10874));
      *segm = (URI_Scheme_Hierarchical__Segment)i0;
      goto l30;
l29:
      i1 = (OOC_INT32)URI_String__Copy("", 1);
      *(OOC_INT32*)((_check_pointer(i0, 10772))+4) = i1;
      i0 = (OOC_INT32)*segm;
      *(OOC_INT32*)(_check_pointer(i0, 10815)) = (OOC_INT32)0;
l30:
      return OOC_TRUE;
l32:
      _failed_function(10435); return 0;
      ;
    }


  i0 = (OOC_INT32)baseURI;
  i1 = (OOC_INT32)uri;
  URI__HierarchicalURIDesc_ResolveRelative((URI__HierarchicalURI)i1, (URI__HierarchicalURI)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 11109))+16);
  i2 = !i2;
  if (!i2) goto l34;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11150)))), URI__URIDesc_Clone)),URI__URIDesc_Clone)((URI__URI)i0);
  copy = (URI__URI)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11225)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11225)), 11233))+12);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l18;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11273)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11273)), 11281))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11291));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11386)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11386)), 11394))+12);
  ptr = (URI_Scheme_Hierarchical__Segment)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11426));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11432));
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l15;
l10_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11471));
  ptr = (URI_Scheme_Hierarchical__Segment)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11426));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11432));
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l10_loop;
l15:
  *(OOC_INT32*)(_check_pointer(i2, 11506)) = (OOC_INT32)0;
  goto l18;
l16:
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11325)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11325)), 11333))+12) = (OOC_INT32)0;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11606))+12);
  ptr = (URI_Scheme_Hierarchical__Segment)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l26;
l21_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11664));
  next = (URI_Scheme_Hierarchical__Segment)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11685)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11685)), 11693)))), URI_Scheme_Hierarchical__GenericDesc_AppendSegment)),URI_Scheme_Hierarchical__GenericDesc_AppendSegment)((URI_Scheme_Hierarchical__Generic)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11685)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11685)), (URI_Scheme_Hierarchical__Segment)i2);
  ptr = (URI_Scheme_Hierarchical__Segment)i3;
  i2 = i3!=(OOC_INT32)0;
  if (!i2) goto l26;
  i2=i3;
  goto l21_loop;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11775)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11775)), 11783))+12);
  *(OOC_INT32*)((_check_pointer(i1, 11756))+12) = i0;
  URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDot((void*)((_check_pointer(i1, 11822))+12));
  i0 = (OOC_INT32)uri;
  i0 = URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDotDot((void*)((_check_pointer(i0, 11864))+12));
  if (!i0) goto l33;
l28_loop:
  i0 = (OOC_INT32)uri;
  i0 = URI_Scheme_Hierarchical__GenericDesc_ResolveRelative_RemoveDotDot((void*)((_check_pointer(i0, 11864))+12));
  if (i0) goto l28_loop;
l33:
  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)copy;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11916)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 11916)), 11924))+16);
  *(OOC_UINT8*)((_check_pointer(i0, 11893))+16) = i1;
l34:
  return;
  ;
}

URI_Scheme_Hierarchical__Generic URI_Scheme_Hierarchical__GenericDesc_MakeRelative(URI_Scheme_Hierarchical__Generic uri, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  URI__URI super;
  URI_Scheme_Hierarchical__Generic relURI;
  URI_Scheme_Hierarchical__Segment suffixBase;
  URI_Scheme_Hierarchical__Segment suffixRel;
  URI_Scheme_Hierarchical__Segment ptr;

  i0 = (OOC_INT32)baseURI;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l59;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12224)))), &_td_URI_Scheme_Hierarchical__GenericDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)uri;
  return (URI_Scheme_Hierarchical__Generic)i0;
  goto l60;
l5:
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)URI__HierarchicalURIDesc_MakeRelative((URI__HierarchicalURI)i1, (URI__HierarchicalURI)i0);
  i3 = i2!=i1;
  super = (URI__URI)i2;
  if (i3) goto l8;
  return (URI_Scheme_Hierarchical__Generic)i1;
  goto l60;
l8:
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12340)))), &_td_URI_Scheme_Hierarchical__GenericDesc, 12340);
  relURI = (URI_Scheme_Hierarchical__Generic)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12543))+12);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l56;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12585))+12);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l38;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12983))+12);
  suffixBase = (URI_Scheme_Hierarchical__Segment)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13025))+12);
  suffixRel = (URI_Scheme_Hierarchical__Segment)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13068));
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l15;
  i3=OOC_FALSE;
  goto l17;
l15:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13094));
  i3 = i3!=(OOC_INT32)0;
  
l17:
  if (i3) goto l19;
  i3=OOC_FALSE;
  goto l21;
l19:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13141))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13162))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 13149)),(const void*)(_check_pointer(i4, 13170))))==(OOC_INT32)0;
  
l21:
  if (!i3) goto l39;
l24_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13216));
  suffixBase = (URI_Scheme_Hierarchical__Segment)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13262));
  suffixRel = (URI_Scheme_Hierarchical__Segment)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13068));
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l27;
  i3=OOC_FALSE;
  goto l29;
l27:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13094));
  i3 = i3!=(OOC_INT32)0;
  
l29:
  if (i3) goto l31;
  i3=OOC_FALSE;
  goto l33;
l31:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13141))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13162))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 13149)),(const void*)(_check_pointer(i4, 13170))))==(OOC_INT32)0;
  
l33:
  if (i3) goto l24_loop;
  goto l39;
l38:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12781))+12);
  suffixBase = (URI_Scheme_Hierarchical__Segment)i0;
  suffixRel = (URI_Scheme_Hierarchical__Segment)(OOC_INT32)0;
  i1=(OOC_INT32)0;
l39:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13449)))), URI_Scheme_Hierarchical__GenericDesc_ClearPath)),URI_Scheme_Hierarchical__GenericDesc_ClearPath)((URI_Scheme_Hierarchical__Generic)i2);
  ptr = (URI_Scheme_Hierarchical__Segment)i0;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13515));
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l47;
l42_loop:
  i3 = (OOC_INT32)URI_String__Copy("..", 3);
  i3 = (OOC_INT32)URI_Scheme_Hierarchical__NewSegment((URI_String__StringPtr)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13552)))), URI_Scheme_Hierarchical__GenericDesc_AppendSegment)),URI_Scheme_Hierarchical__GenericDesc_AppendSegment)((URI_Scheme_Hierarchical__Generic)i2, (URI_Scheme_Hierarchical__Segment)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13624));
  ptr = (URI_Scheme_Hierarchical__Segment)i0;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13515));
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l42_loop;
l47:
  ptr = (URI_Scheme_Hierarchical__Segment)i1;
  i0 = i1!=(OOC_INT32)0;
  if (!i0) goto l56;
  i0=i1;
l50_loop:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13751)))), URI_Scheme_Hierarchical__SegmentDesc_Clone)),URI_Scheme_Hierarchical__SegmentDesc_Clone)((URI_Scheme_Hierarchical__Segment)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13731)))), URI_Scheme_Hierarchical__GenericDesc_AppendSegment)),URI_Scheme_Hierarchical__GenericDesc_AppendSegment)((URI_Scheme_Hierarchical__Generic)i2, (URI_Scheme_Hierarchical__Segment)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13787));
  ptr = (URI_Scheme_Hierarchical__Segment)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l50_loop;
l56:
  *(OOC_UINT8*)((_check_pointer(i2, 13841))+16) = OOC_FALSE;
  return (URI_Scheme_Hierarchical__Generic)i2;
  goto l60;
l59:
  i0 = (OOC_INT32)uri;
  return (URI_Scheme_Hierarchical__Generic)i0;
l60:
  _failed_function(12001); return 0;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_WriteXML(URI_Scheme_Hierarchical__Generic uri, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 pathTag[32];
  URI_Scheme_Hierarchical__Segment segm;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14134)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<hierarchical-uri>", 20);
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14190));
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14220)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<scheme>", 10);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14280));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14280));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14290)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14262)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 14290)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14301)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</scheme>", 10);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14350))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14383))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14383))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14394)))), URI__AuthorityDesc_WriteXML)),URI__AuthorityDesc_WriteXML)((URI__Authority)i3, (TextRider__Writer)i0);
l6:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 14428))+16);
  if (i2) goto l9;
  _copy_8((const void*)"\012<relative-path>",(void*)(OOC_INT32)pathTag,32);
  goto l10;
l9:
  _copy_8((const void*)"\012<absolute-path>",(void*)(OOC_INT32)pathTag,32);
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14555)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)pathTag, 32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14595))+12);
  segm = (URI_Scheme_Hierarchical__Segment)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l18;
l13_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14643)))), URI_Scheme_Hierarchical__SegmentDesc_WriteXML)),URI_Scheme_Hierarchical__SegmentDesc_WriteXML)((URI_Scheme_Hierarchical__Segment)i2, (TextRider__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14677));
  segm = (URI_Scheme_Hierarchical__Segment)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l13_loop;
l18:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 14703))+16);
  if (i2) goto l21;
  _copy_8((const void*)"\012</relative-path>",(void*)(OOC_INT32)pathTag,32);
  goto l22;
l21:
  _copy_8((const void*)"\012</absolute-path>",(void*)(OOC_INT32)pathTag,32);
l22:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14832)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)pathTag, 32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14868))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l25;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14897))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14897))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14904)))), URI__QueryDesc_WriteXML)),URI__QueryDesc_WriteXML)((URI__Query)i1, (TextRider__Writer)i0);
l25:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14933)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012</hierarchical-uri>", 21);
  return;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_AppendPath(URI_Scheme_Hierarchical__Generic uri, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  URI_Scheme_Hierarchical__Segment segm;

  i0 = (OOC_INT32)uri;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15103))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l17;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 15138))+16);
  if (!i1) goto l5;
  Strings__Append("/", 2, (void*)(OOC_INT32)str, str_0d);
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15220))+12);
  segm = (URI_Scheme_Hierarchical__Segment)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l17;
l8_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15282))+12);
  i2 = i1!=i2;
  if (!i2) goto l11;
  Strings__Append("/", 2, (void*)(OOC_INT32)str, str_0d);
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15360)))), URI_Scheme_Hierarchical__SegmentDesc_Append)),URI_Scheme_Hierarchical__SegmentDesc_Append)((URI_Scheme_Hierarchical__Segment)i1, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15396));
  segm = (URI_Scheme_Hierarchical__Segment)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l8_loop;
l17:
  return;
  ;
}

void URI_Scheme_Hierarchical__GenericDesc_GetString(URI_Scheme_Hierarchical__Generic uri, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;

  _copy_8((const void*)"",(void*)(OOC_INT32)str,str_0d);
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15537)))), URI__URIDesc_AppendScheme)),URI__URIDesc_AppendScheme)((URI__URI)i0, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15570))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15603))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15603))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15614)))), URI__AuthorityDesc_Append)),URI__AuthorityDesc_Append)((URI__Authority)i2, (void*)(OOC_INT32)str, str_0d);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15645)))), URI_Scheme_Hierarchical__GenericDesc_AppendPath)),URI_Scheme_Hierarchical__GenericDesc_AppendPath)((URI_Scheme_Hierarchical__Generic)i0, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15676))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15705))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15705))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15712)))), URI__QueryDesc_Append)),URI__QueryDesc_Append)((URI__Query)i0, (void*)(OOC_INT32)str, str_0d);
l6:
  return;
  ;
}

void OOC_URI_Scheme_Hierarchical_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Error__NewContext("URI:Scheme:Hierarchical", 24);
  URI_Scheme_Hierarchical__pathContext = (URI_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15835)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 1, "Illegal character in path component of the URI", 47);
  return;
  ;
}

/* --- */
