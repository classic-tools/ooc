#include "XML/Writer.d"
#include "__oo2c.h"

void XML_Writer__Init(XML_Writer__Writer w, Channel__Writer writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 writeBOM, OOC_INT32 indentLevel) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)writer;
  i1 = (OOC_INT32)codecFactory;
  i2 = writeBOM;
  i3 = (OOC_INT32)w;
  XML_UnicodeBuffer__InitOutput((XML_UnicodeBuffer__Output)i3, OOC_TRUE, (Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, i2);
  *(OOC_INT32*)((_check_pointer(i3, 2399))+56) = ((OOC_INT32)RT0__NewObject(_td_XML_Writer__Elements.baseTypes[0], 8));
  i0 = indentLevel;
  *(OOC_INT32*)((_check_pointer(i3, 2429))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i3, 2464))+36) = 0;
  *(OOC_UINT8*)((_check_pointer(i3, 2484))+48) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i3, 2518))+52) = (OOC_INT32)0;
  _copy_8("\012",((_check_pointer(i3, 2541))+40),3);
  *(OOC_INT32*)((_check_pointer(i3, 2569))+44) = 1;
  *(OOC_INT32*)((_check_pointer(i3, 2598))+60) = 0;
  *(OOC_UINT8*)((_check_pointer(i3, 2627))+64) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i3, 2703))+65) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i3, 2733))+66) = OOC_FALSE;
  return;
  ;
}

XML_Writer__Writer XML_Writer__New(Channel__Writer writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 writeBOM, OOC_INT32 indentLevel) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__Writer.baseTypes[0]);
  i1 = (OOC_INT32)writer;
  i2 = (OOC_INT32)codecFactory;
  i3 = writeBOM;
  i4 = indentLevel;
  XML_Writer__Init((XML_Writer__Writer)i0, (Channel__Writer)i1, (XML_UnicodeCodec__Factory)i2, i3, i4);
  return (XML_Writer__Writer)i0;
  ;
}

void XML_Writer__WriterDesc_SetBaseURI(XML_Writer__Writer w, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 3418))+52) = i1;
  return;
  ;
}

void XML_Writer__WriterDesc_SetEmptyElementHTML(XML_Writer__Writer w, OOC_CHAR8 html) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = html;
  *(OOC_UINT8*)((_check_pointer(i0, 3531))+48) = i1;
  return;
  ;
}

void XML_Writer__WriterDesc_WriteTextDecl(XML_Writer__Writer w, const OOC_CHAR8 version__ref[], OOC_LEN version_0d, const OOC_CHAR8 standalone__ref[], OOC_LEN standalone_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(version,OOC_CHAR8 ,version_0d)
  OOC_ALLOCATE_VPAR(standalone,OOC_CHAR8 ,standalone_0d)
  OOC_CHAR8 encoding[256];

  OOC_INITIALIZE_VPAR(version__ref,version,OOC_CHAR8 ,version_0d)
  OOC_INITIALIZE_VPAR(standalone__ref,standalone,OOC_CHAR8 ,standalone_0d)
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3713)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<?xml", 6);
  i1 = (
  _cmp8((const void*)(OOC_INT32)version,(const void*)""))!=0;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3767)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " version=\047", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3799)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)version, version_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3826)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3855)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " encoding=\047", 12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3886));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3886));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3900)))), XML_UnicodeCodec__FactoryDesc_GetEncodingName)),XML_UnicodeCodec__FactoryDesc_GetEncodingName)((XML_UnicodeCodec__Factory)i2, (void*)(OOC_INT32)encoding, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3935)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)encoding, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3961)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  i1 = (
  _cmp8((const void*)(OOC_INT32)standalone,(const void*)""))!=0;
  if (!i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4014)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " standalone=\047", 14);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4049)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)standalone, standalone_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4079)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4108)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "?>", 3);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4146))+32);
  *(OOC_UINT8*)((_check_pointer(i0, 4130))+64) = (i1>=0);
  return;
  ;
}

void XML_Writer__WriterDesc_NewLine(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4258))+64);
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4308))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4281)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)((_check_pointer(i0, 4293))+40), 3, 0, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4344))+36);
  i2 = 1<=i1;
  i = 1;
  if (!i2) goto l11;
  i2=1;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4365)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l11:
  return;
  ;
}

void XML_Writer__WriterDesc_CloseStartTag(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4474))+65);
  _assert(i1, 127, 4465);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4499))+66);
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4673)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
  goto l8;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4529))+48);
  if (i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4599)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "/>", 3);
  goto l7;
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4562)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " />", 4);
l7:
  *(OOC_UINT8*)((_check_pointer(i0, 4633))+66) = OOC_FALSE;
l8:
  *(OOC_UINT8*)((_check_pointer(i0, 4702))+65) = OOC_FALSE;
  return;
  ;
}

void XML_Writer__WriterDesc_WriteI(XML_Writer__Writer w, const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4866))+65);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4887)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  i1 = s;
  i2 = e;
  i1 = i1!=i2;
  if (!i1) goto l51;
l6_loop:
  i1 = s;
  i3 = i1!=i2;
  last = i1;
  if (i3) goto l9;
  i3=OOC_FALSE;
  goto l11;
l9:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 4984))*2);
  i3 = i3!=(OOC_CHAR16)'&';
  
l11:
  if (i3) goto l13;
  i3=OOC_FALSE;
  goto l15;
l13:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5001))*2);
  i3 = i3!=(OOC_CHAR16)'<';
  
l15:
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5018))*2);
  i3 = i3!=(OOC_CHAR16)'>';
  
l19:
  if (!i3) goto l37;
l20_loop:
  i3 = s;
  i3 = i3+1;
  i4 = i3!=i2;
  s = i3;
  if (i4) goto l23;
  i4=OOC_FALSE;
  goto l25;
l23:
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4984))*2);
  i4 = i4!=(OOC_CHAR16)'&';
  
l25:
  if (i4) goto l27;
  i4=OOC_FALSE;
  goto l29;
l27:
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5001))*2);
  i4 = i4!=(OOC_CHAR16)'<';
  
l29:
  if (i4) goto l31;
  i3=OOC_FALSE;
  goto l33;
l31:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5018))*2);
  i3 = i3!=(OOC_CHAR16)'>';
  
l33:
  if (i3) goto l20_loop;
l37:
  i3 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5066)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, i1, i3);
  i1 = i3!=i2;
  if (!i1) goto l46;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5131))*2);
  switch (i1) {
  case (OOC_CHAR16)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5154)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l45;
  case (OOC_CHAR16)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5189)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l45;
  case (OOC_CHAR16)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5223)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l45;
  default:
    _failed_case(i1, 5123);
    goto l45;
  }
l45:
  s = (i3+1);
l46:
  i1 = s;
  i1 = i1!=i2;
  if (i1) goto l6_loop;
l51:
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLatin1I(XML_Writer__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5463))+65);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5484)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  i1 = s;
  i2 = e;
  i1 = i1!=i2;
  if (!i1) goto l51;
l6_loop:
  i1 = s;
  i3 = i1!=i2;
  last = i1;
  if (i3) goto l9;
  i3=OOC_FALSE;
  goto l11;
l9:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5581)));
  i3 = i3!=(OOC_CHAR8)'&';
  
l11:
  if (i3) goto l13;
  i3=OOC_FALSE;
  goto l15;
l13:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5598)));
  i3 = i3!=(OOC_CHAR8)'<';
  
l15:
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5615)));
  i3 = i3!=(OOC_CHAR8)'>';
  
l19:
  if (!i3) goto l37;
l20_loop:
  i3 = s;
  i3 = i3+1;
  i4 = i3!=i2;
  s = i3;
  if (i4) goto l23;
  i4=OOC_FALSE;
  goto l25;
l23:
  i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5581)));
  i4 = i4!=(OOC_CHAR8)'&';
  
l25:
  if (i4) goto l27;
  i4=OOC_FALSE;
  goto l29;
l27:
  i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5598)));
  i4 = i4!=(OOC_CHAR8)'<';
  
l29:
  if (i4) goto l31;
  i3=OOC_FALSE;
  goto l33;
l31:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5615)));
  i3 = i3!=(OOC_CHAR8)'>';
  
l33:
  if (i3) goto l20_loop;
l37:
  i3 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5663)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, i1, i3);
  i1 = i3!=i2;
  if (!i1) goto l46;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5727)));
  switch (i1) {
  case (OOC_CHAR8)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5750)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l45;
  case (OOC_CHAR8)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5785)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l45;
  case (OOC_CHAR8)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5819)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l45;
  default:
    _failed_case(i1, 5719);
    goto l45;
  }
l45:
  s = (i3+1);
l46:
  i1 = s;
  i1 = i1!=i2;
  if (i1) goto l6_loop;
l51:
  return;
  ;
}

void XML_Writer__WriterDesc_Write(XML_Writer__Writer w, const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = LongStrings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5978)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLatin1(XML_Writer__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6115)))), XML_Writer__WriterDesc_WriteLatin1I)),XML_Writer__WriterDesc_WriteLatin1I)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteURI(XML_Writer__Writer w, URI__URI uri, OOC_CHAR8 absolute) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[1024];

  i0 = absolute;
  i0 = !i0;
  i1 = (OOC_INT32)w;
  if (!i0) goto l4;
  i0 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6346))+52);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6329)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i0, (URI__HierarchicalURI)i2);
  uri = (URI__URI)i0;
l4:
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6373)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6397)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)str, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLInt(XML_Writer__Writer w, OOC_INT32 value) {
  register OOC_INT32 i0;
  OOC_CHAR8 val[32];

  i0 = value;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 32);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6565)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 32);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteRealFix(XML_Writer__Writer w, OOC_REAL32 real, OOC_INT32 k) {
  register OOC_INT32 i0;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToFixed(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6758)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

static XML_Writer__String XML_Writer__GetString(OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  XML_Writer__String s;

  i0 = LongStrings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__String.baseTypes[0], (i0+1));
  s = (XML_Writer__String)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6939)), 0);
  _copy_16((OOC_INT32)str,(_check_pointer(i0, 6939)),i1);
  return (XML_Writer__String)i0;
  ;
}

void XML_Writer__WriterDesc_StartTag(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_CHAR8 mixedContent) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  XML_Writer__Elements _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7151))+65);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7172)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7198)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7214)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7235)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7293))+56);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7267))+60);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7307)), 0);
  i1 = i2==i1;
  if (!i1) goto l14;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7333))+60);
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__Elements.baseTypes[0], (i1*2));
  _new = (XML_Writer__Elements)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7376))+60);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l13;
  i3=0;
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7418))+56);
  i4 = _check_pointer(i4, 7432);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i1, 7410);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  _copy_block((i4+(_check_index(i3, i5, OOC_UINT32, 7432))*8),(i6+(_check_index(i3, i7, OOC_UINT32, 7410))*8),8);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l8_loop;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 7454))+56) = i1;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7490))+56);
  i1 = _check_pointer(i1, 7504);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7506))+60);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)XML_Writer__GetString((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7504))*8) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7557))+56);
  i1 = _check_pointer(i1, 7571);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7573))+60);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = mixedContent;
  *(OOC_UINT8*)((i1+(_check_index(i2, i3, OOC_UINT32, 7571))*8)+4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7633))+60);
  *(OOC_INT32*)((_check_pointer(i0, 7633))+60) = (i1+1);
  *(OOC_UINT8*)((_check_pointer(i0, 7658))+65) = OOC_TRUE;
  i1 = _check_pointer(i0, 7692);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7708))+32);
  i2 = i2>=0;
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l18;
l17:
  i2 = !i4;
  
l18:
  *(OOC_UINT8*)(i1+64) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7753))+64);
  if (!i1) goto l21;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7781))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7792))+32);
  *(OOC_INT32*)((_check_pointer(i0, 7781))+36) = (i1+i2);
l21:
  return;
  ;
}

void XML_Writer__WriterDesc_StartTagLatin1(XML_Writer__Writer w, const OOC_CHAR8 name[], OOC_LEN name_0d, OOC_CHAR8 mixedContent) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 name16[1024];

  _copy_8to16((OOC_INT32)name,(OOC_INT32)name16,1024);
  i0 = (OOC_INT32)w;
  i1 = mixedContent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8040)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name16, 1024, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_EmptyTag(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8177))+65);
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8198)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8224)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8240)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8261)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  *(OOC_UINT8*)((_check_pointer(i0, 8407))+65) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 8436))+66) = OOC_TRUE;
  return;
  ;
}

void XML_Writer__WriterDesc_EmptyTagLatin1(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;
  OOC_CHAR16 name16[1024];

  _copy_16((OOC_INT32)name,(OOC_INT32)name16,1024);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8622)))), XML_Writer__WriterDesc_EmptyTag)),XML_Writer__WriterDesc_EmptyTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name16, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrString(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, const OOC_CHAR16 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8800))+65);
  _assert(i1, 127, 8791);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8822)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8843)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8866)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "=\047", 3);
  s = 0;
  i1 = LongStrings__Length((void*)(OOC_INT32)value, value_0d);
  e = i1;
  i2 = 0!=i1;
  if (!i2) goto l60;
  i2=0;
l3_loop:
  i3 = i2!=i1;
  last = i2;
  if (i3) goto l6;
  i3=OOC_FALSE;
  goto l8;
l6:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 8999))*2);
  i3 = i3!=(OOC_CHAR16)39;
  
l8:
  if (i3) goto l10;
  i3=OOC_FALSE;
  goto l12;
l10:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9030))*2);
  i3 = i3!=(OOC_CHAR16)'&';
  
l12:
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9049))*2);
  i3 = i3!=(OOC_CHAR16)'<';
  
l16:
  if (i3) goto l18;
  i3=OOC_FALSE;
  goto l20;
l18:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9068))*2);
  i3 = i3!=(OOC_CHAR16)'>';
  
l20:
  if (i3) goto l22;
  i3=i2;
  goto l44;
l22:
  i3=i2;
l23_loop:
  i3 = i3+1;
  i4 = i3!=i1;
  s = i3;
  if (i4) goto l26;
  i4=OOC_FALSE;
  goto l28;
l26:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 8999))*2);
  i4 = i4!=(OOC_CHAR16)39;
  
l28:
  if (i4) goto l30;
  i4=OOC_FALSE;
  goto l32;
l30:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9030))*2);
  i4 = i4!=(OOC_CHAR16)'&';
  
l32:
  if (i4) goto l34;
  i4=OOC_FALSE;
  goto l36;
l34:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9049))*2);
  i4 = i4!=(OOC_CHAR16)'<';
  
l36:
  if (i4) goto l38;
  i4=OOC_FALSE;
  goto l40;
l38:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9068))*2);
  i4 = i4!=(OOC_CHAR16)'>';
  
l40:
  if (i4) goto l23_loop;
l44:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9116)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)value, value_0d, i2, i3);
  i2 = i3!=i1;
  if (i2) goto l47;
  i2=i3;
  goto l55;
l47:
  i2 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9185))*2);
  switch (i2) {
  case (OOC_CHAR16)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9208)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l54;
  case (OOC_CHAR16)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9243)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l54;
  case (OOC_CHAR16)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9277)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l54;
  case (OOC_CHAR16)39:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9311)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&apos;", 7);
    goto l54;
  default:
    _failed_case(i2, 9175);
    goto l54;
  }
l54:
  i2 = i3+1;
  s = i2;
  
l55:
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l60:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9389)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrStringLatin1(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, const OOC_CHAR8 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9619))+65);
  _assert(i1, 127, 9610);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9641)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9662)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9685)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "=\047", 3);
  s = 0;
  i1 = Strings__Length((void*)(OOC_INT32)value, value_0d);
  e = i1;
  i2 = 0!=i1;
  if (!i2) goto l60;
  i2=0;
l3_loop:
  i3 = i2!=i1;
  last = i2;
  if (i3) goto l6;
  i3=OOC_FALSE;
  goto l8;
l6:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9814)));
  i3 = i3!=(OOC_CHAR8)'\047';
  
l8:
  if (i3) goto l10;
  i3=OOC_FALSE;
  goto l12;
l10:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9845)));
  i3 = i3!=(OOC_CHAR8)'&';
  
l12:
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9864)));
  i3 = i3!=(OOC_CHAR8)'<';
  
l16:
  if (i3) goto l18;
  i3=OOC_FALSE;
  goto l20;
l18:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9883)));
  i3 = i3!=(OOC_CHAR8)'>';
  
l20:
  if (i3) goto l22;
  i3=i2;
  goto l44;
l22:
  i3=i2;
l23_loop:
  i3 = i3+1;
  i4 = i3!=i1;
  s = i3;
  if (i4) goto l26;
  i4=OOC_FALSE;
  goto l28;
l26:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9814)));
  i4 = i4!=(OOC_CHAR8)'\047';
  
l28:
  if (i4) goto l30;
  i4=OOC_FALSE;
  goto l32;
l30:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9845)));
  i4 = i4!=(OOC_CHAR8)'&';
  
l32:
  if (i4) goto l34;
  i4=OOC_FALSE;
  goto l36;
l34:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9864)));
  i4 = i4!=(OOC_CHAR8)'<';
  
l36:
  if (i4) goto l38;
  i4=OOC_FALSE;
  goto l40;
l38:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9883)));
  i4 = i4!=(OOC_CHAR8)'>';
  
l40:
  if (i4) goto l23_loop;
l44:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9931)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)value, value_0d, i2, i3);
  i2 = i3!=i1;
  if (i2) goto l47;
  i2=i3;
  goto l55;
l47:
  i2 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9999)));
  switch (i2) {
  case (OOC_CHAR8)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10022)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l54;
  case (OOC_CHAR8)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10057)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l54;
  case (OOC_CHAR8)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10091)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l54;
  case (OOC_CHAR8)'\047':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10125)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&apos;", 7);
    goto l54;
  default:
    _failed_case(i2, 9989);
    goto l54;
  }
l54:
  i2 = i3+1;
  s = i2;
  
l55:
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l60:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10203)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrInt(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_INT32 value) {
  register OOC_INT32 i0;
  OOC_CHAR8 val[32];

  i0 = value;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 32);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10402)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(OOC_INT32)val, 32);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrBool(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_CHAR8 value) {
  register OOC_INT32 i0;

  i0 = value;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10611)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, "no", 3);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10562)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, "yes", 4);
l4:
  return;
  ;
}

void XML_Writer__WriterDesc_AttrURI(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, URI__URI uri, OOC_CHAR8 absolute) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[1024];

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10852))+65);
  i2 = absolute;
  _assert(i1, 127, 10843);
  i1 = !i2;
  if (!i1) goto l4;
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10924))+52);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10907)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i1, (URI__HierarchicalURI)i2);
  uri = (URI__URI)i1;
l4:
  i1 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10951)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i1, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10975)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(OOC_INT32)str, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_EndTag(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11071))+60);
  i1 = i1<=0;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11107)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
  _assert(OOC_FALSE, 127, 11116);
l3:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11153))+64);
  if (!i1) goto l6;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11181))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11192))+32);
  *(OOC_INT32*)((_check_pointer(i0, 11181))+36) = (i1-i2);
l6:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11226))+60);
  *(OOC_INT32*)((_check_pointer(i0, 11226))+60) = (i1-1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11259))+66);
  if (i1) goto l17;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11492))+65);
  if (i1) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11761)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11779)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "</", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11815))+56);
  i1 = _check_pointer(i1, 11829);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11831))+60);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 11829))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11815))+56);
  i2 = _check_pointer(i2, 11829);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 11831))+60);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 11829))*8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11855)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11803)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i1, 11855)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11866)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
  goto l18;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11565))+48);
  if (i1) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11635)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "/>", 3);
  goto l15;
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11598)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " />", 4);
l15:
  *(OOC_UINT8*)((_check_pointer(i0, 11669))+65) = OOC_FALSE;
  goto l18;
l17:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11337)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11361)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11379)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "</", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11415))+56);
  i1 = _check_pointer(i1, 11429);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11431))+60);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 11429))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11415))+56);
  i2 = _check_pointer(i2, 11429);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 11431))+60);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 11429))*8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11455)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11403)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i1, 11455)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11466)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
l18:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11916))+32);
  *(OOC_UINT8*)((_check_pointer(i0, 11900))+64) = (i1>=0);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11946))+60);
  i1 = i1>0;
  if (!i1) goto l25;
  i1 = _check_pointer(i0, 11981);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 11996))+64);
  if (i2) goto l23;
  i0=OOC_FALSE;
  goto l24;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12033))+56);
  i2 = _check_pointer(i2, 12047);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12049))+60);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)((i2+(_check_index((i0-1), i3, OOC_UINT32, 12047))*8)+4);
  i0 = !i0;
  
l24:
  *(OOC_UINT8*)(i1+64) = i0;
l25:
  return;
  ;
}

void XML_Writer__WriterDesc_EndOfText(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 12217))+65);
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12238)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12264)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12280)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12302))+60);
  _assert((i0==0), 127, 12293);
  return;
  ;
}

void OOC_XML_Writer_init(void) {

  return;
  ;
}

/* --- */
