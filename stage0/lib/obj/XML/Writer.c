#include <XML/Writer.d>
#include <__oo2c.h>
#include <setjmp.h>

void XML_Writer__Init(XML_Writer__Writer w, Channel__Writer writer, XML_UnicodeCodec__Factory codecFactory, OOC_CHAR8 writeBOM, OOC_INT32 indentLevel) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)writer;
  i1 = (OOC_INT32)codecFactory;
  i2 = writeBOM;
  i3 = (OOC_INT32)w;
  XML_UnicodeBuffer__InitOutput((XML_UnicodeBuffer__Output)i3, OOC_TRUE, (Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, i2);
  *(OOC_INT32*)((_check_pointer(i3, 2407))+56) = ((OOC_INT32)RT0__NewObject(_td_XML_Writer__Elements.baseTypes[0], 8));
  i0 = indentLevel;
  *(OOC_INT32*)((_check_pointer(i3, 2437))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i3, 2472))+36) = 0;
  *(OOC_UINT8*)((_check_pointer(i3, 2492))+48) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i3, 2526))+52) = (OOC_INT32)0;
  _copy_8((const void*)"\012",(void*)((_check_pointer(i3, 2549))+40),3);
  *(OOC_INT32*)((_check_pointer(i3, 2577))+44) = 1;
  *(OOC_INT32*)((_check_pointer(i3, 2606))+60) = 0;
  *(OOC_UINT8*)((_check_pointer(i3, 2635))+64) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i3, 2711))+65) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i3, 2741))+66) = OOC_FALSE;
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
  *(OOC_INT32*)((_check_pointer(i0, 3426))+52) = i1;
  return;
  ;
}

void XML_Writer__WriterDesc_SetEmptyElementHTML(XML_Writer__Writer w, OOC_CHAR8 html) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = html;
  *(OOC_UINT8*)((_check_pointer(i0, 3539))+48) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3721)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<?xml", 6);
  i1 = (
  _cmp8((const void*)(OOC_INT32)version,(const void*)""))!=(OOC_INT32)0;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3775)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " version=\047", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3807)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)version, version_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3834)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3863)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " encoding=\047", 12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3894));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3894));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3908)))), XML_UnicodeCodec__FactoryDesc_GetEncodingName)),XML_UnicodeCodec__FactoryDesc_GetEncodingName)((XML_UnicodeCodec__Factory)i2, (void*)(OOC_INT32)encoding, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3943)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)encoding, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3969)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  i1 = (
  _cmp8((const void*)(OOC_INT32)standalone,(const void*)""))!=(OOC_INT32)0;
  if (!i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4022)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " standalone=\047", 14);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4057)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)standalone, standalone_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4087)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4116)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "?>", 3);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4154))+32);
  *(OOC_UINT8*)((_check_pointer(i0, 4138))+64) = (i1>=0);
  return;
  ;
}

void XML_Writer__WriterDesc_NewLine(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4266))+64);
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4316))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4289)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)((_check_pointer(i0, 4301))+40), 3, 0, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4352))+36);
  i2 = 1<=i1;
  i = 1;
  if (!i2) goto l11;
  i2=1;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4373)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4482))+65);
  _assert(i1, 127, 4473);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4507))+66);
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4681)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
  goto l8;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4537))+48);
  if (i1) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4607)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "/>", 3);
  goto l7;
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4570)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " />", 4);
l7:
  *(OOC_UINT8*)((_check_pointer(i0, 4641))+66) = OOC_FALSE;
l8:
  *(OOC_UINT8*)((_check_pointer(i0, 4710))+65) = OOC_FALSE;
  return;
  ;
}

void XML_Writer__WriterDesc_WriteI(XML_Writer__Writer w, const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4874))+65);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4895)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
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
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 4992))*2);
  i3 = i3!=(OOC_CHAR8)'&';
  
l11:
  if (i3) goto l13;
  i3=OOC_FALSE;
  goto l15;
l13:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5009))*2);
  i3 = i3!=(OOC_CHAR8)'<';
  
l15:
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5026))*2);
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
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 4992))*2);
  i4 = i4!=(OOC_CHAR8)'&';
  
l25:
  if (i4) goto l27;
  i4=OOC_FALSE;
  goto l29;
l27:
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5009))*2);
  i4 = i4!=(OOC_CHAR8)'<';
  
l29:
  if (i4) goto l31;
  i3=OOC_FALSE;
  goto l33;
l31:
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5026))*2);
  i3 = i3!=(OOC_CHAR8)'>';
  
l33:
  if (i3) goto l20_loop;
l37:
  i3 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5074)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, i1, i3);
  i1 = i3!=i2;
  if (!i1) goto l46;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5139))*2);
  switch (i1) {
  case (OOC_CHAR8)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5162)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l45;
  case (OOC_CHAR8)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5197)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l45;
  case (OOC_CHAR8)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5231)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l45;
  default:
    _failed_case(i1, 5131);
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5471))+65);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5492)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
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
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5589)));
  i3 = i3!=(OOC_CHAR8)'&';
  
l11:
  if (i3) goto l13;
  i3=OOC_FALSE;
  goto l15;
l13:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5606)));
  i3 = i3!=(OOC_CHAR8)'<';
  
l15:
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 5623)));
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
  i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5589)));
  i4 = i4!=(OOC_CHAR8)'&';
  
l25:
  if (i4) goto l27;
  i4=OOC_FALSE;
  goto l29;
l27:
  i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5606)));
  i4 = i4!=(OOC_CHAR8)'<';
  
l29:
  if (i4) goto l31;
  i3=OOC_FALSE;
  goto l33;
l31:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5623)));
  i3 = i3!=(OOC_CHAR8)'>';
  
l33:
  if (i3) goto l20_loop;
l37:
  i3 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5671)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)str, str_0d, i1, i3);
  i1 = i3!=i2;
  if (!i1) goto l46;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 5735)));
  switch (i1) {
  case (OOC_CHAR8)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5758)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l45;
  case (OOC_CHAR8)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5793)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l45;
  case (OOC_CHAR8)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5827)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l45;
  default:
    _failed_case(i1, 5727);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5986)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLatin1(XML_Writer__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6123)))), XML_Writer__WriterDesc_WriteLatin1I)),XML_Writer__WriterDesc_WriteLatin1I)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, str_0d, 0, i1);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6354))+52);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6337)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i0, (URI__HierarchicalURI)i2);
  uri = (URI__URI)i0;
l4:
  i0 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6381)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6405)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)str, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_WriteLInt(XML_Writer__Writer w, OOC_INT32 value) {
  register OOC_INT32 i0;
  OOC_CHAR8 val[32];

  i0 = value;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 32);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6573)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 32);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6766)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

static XML_Writer__String XML_Writer__GetString(const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  XML_Writer__String s;

  i0 = LongStrings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__String.baseTypes[0], (i0+1));
  s = (XML_Writer__String)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6952)), (OOC_INT32)0);
  _copy_16((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 6952)),i1);
  return (XML_Writer__String)i0;
  ;
}

void XML_Writer__WriterDesc_StartTag(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_CHAR8 mixedContent) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  XML_Writer__Elements _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7164))+65);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7185)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7211)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7227)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7248)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7306))+56);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7280))+60);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7320)), (OOC_INT32)0);
  i1 = i2==i1;
  if (!i1) goto l14;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7346))+60);
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_Writer__Elements.baseTypes[0], (i1*2));
  _new = (XML_Writer__Elements)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7389))+60);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l13;
  i3=0;
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7431))+56);
  i4 = _check_pointer(i4, 7445);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i1, 7423);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  _copy_block((i4+(_check_index(i3, i5, OOC_UINT32, 7445))*8),(i6+(_check_index(i3, i7, OOC_UINT32, 7423))*8),8);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l8_loop;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 7467))+56) = i1;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7503))+56);
  i1 = _check_pointer(i1, 7517);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7519))+60);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)XML_Writer__GetString((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7517))*8) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7570))+56);
  i1 = _check_pointer(i1, 7584);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7586))+60);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = mixedContent;
  *(OOC_UINT8*)((i1+(_check_index(i2, i3, OOC_UINT32, 7584))*8)+4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7646))+60);
  *(OOC_INT32*)((_check_pointer(i0, 7646))+60) = (i1+1);
  *(OOC_UINT8*)((_check_pointer(i0, 7671))+65) = OOC_TRUE;
  i1 = _check_pointer(i0, 7705);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7721))+32);
  i2 = i2>=0;
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l18;
l17:
  i2 = !i4;
  
l18:
  *(OOC_UINT8*)(i1+64) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7766))+64);
  if (!i1) goto l21;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7794))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7805))+32);
  *(OOC_INT32*)((_check_pointer(i0, 7794))+36) = (i1+i2);
l21:
  return;
  ;
}

void XML_Writer__WriterDesc_StartTagLatin1(XML_Writer__Writer w, const OOC_CHAR8 name[], OOC_LEN name_0d, OOC_CHAR8 mixedContent) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 name16[1024];

  _copy_8to16((const void*)(OOC_INT32)name,(void*)(OOC_INT32)name16,1024);
  i0 = (OOC_INT32)w;
  i1 = mixedContent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8053)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name16, 1024, i1);
  return;
  ;
}

void XML_Writer__WriterDesc_EmptyTag(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8190))+65);
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8211)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8237)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8253)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8274)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  *(OOC_UINT8*)((_check_pointer(i0, 8420))+65) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i0, 8449))+66) = OOC_TRUE;
  return;
  ;
}

void XML_Writer__WriterDesc_EmptyTagLatin1(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;
  OOC_CHAR16 name16[1024];

  _copy_16((const void*)(OOC_INT32)name,(void*)(OOC_INT32)name16,1024);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8635)))), XML_Writer__WriterDesc_EmptyTag)),XML_Writer__WriterDesc_EmptyTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name16, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrString(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, const OOC_CHAR16 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8813))+65);
  _assert(i1, 127, 8804);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8835)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8856)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8879)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "=\047", 3);
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
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9012))*2);
  i3 = i3!=(OOC_CHAR8)'\047';
  
l8:
  if (i3) goto l10;
  i3=OOC_FALSE;
  goto l12;
l10:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9043))*2);
  i3 = i3!=(OOC_CHAR8)'&';
  
l12:
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9062))*2);
  i3 = i3!=(OOC_CHAR8)'<';
  
l16:
  if (i3) goto l18;
  i3=OOC_FALSE;
  goto l20;
l18:
  i3 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9081))*2);
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
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9012))*2);
  i4 = i4!=(OOC_CHAR8)'\047';
  
l28:
  if (i4) goto l30;
  i4=OOC_FALSE;
  goto l32;
l30:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9043))*2);
  i4 = i4!=(OOC_CHAR8)'&';
  
l32:
  if (i4) goto l34;
  i4=OOC_FALSE;
  goto l36;
l34:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9062))*2);
  i4 = i4!=(OOC_CHAR8)'<';
  
l36:
  if (i4) goto l38;
  i4=OOC_FALSE;
  goto l40;
l38:
  i4 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9081))*2);
  i4 = i4!=(OOC_CHAR8)'>';
  
l40:
  if (i4) goto l23_loop;
l44:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9129)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)value, value_0d, i2, i3);
  i2 = i3!=i1;
  if (i2) goto l47;
  i2=i3;
  goto l55;
l47:
  i2 = *(OOC_UINT16*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9198))*2);
  switch (i2) {
  case (OOC_CHAR8)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9221)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l54;
  case (OOC_CHAR8)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9256)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l54;
  case (OOC_CHAR8)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9290)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l54;
  case (OOC_CHAR8)'\047':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9324)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&apos;", 7);
    goto l54;
  default:
    _failed_case(i2, 9188);
    goto l54;
  }
l54:
  i2 = i3+1;
  s = i2;
  
l55:
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l60:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9402)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrStringLatin1(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, const OOC_CHAR8 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 s;
  OOC_INT32 e;
  OOC_INT32 last;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9632))+65);
  _assert(i1, 127, 9623);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9654)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9675)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)name, name_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9698)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "=\047", 3);
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
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9827)));
  i3 = i3!=(OOC_CHAR8)'\047';
  
l8:
  if (i3) goto l10;
  i3=OOC_FALSE;
  goto l12;
l10:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9858)));
  i3 = i3!=(OOC_CHAR8)'&';
  
l12:
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9877)));
  i3 = i3!=(OOC_CHAR8)'<';
  
l16:
  if (i3) goto l18;
  i3=OOC_FALSE;
  goto l20;
l18:
  i3 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i2, value_0d, OOC_UINT32, 9896)));
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
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9827)));
  i4 = i4!=(OOC_CHAR8)'\047';
  
l28:
  if (i4) goto l30;
  i4=OOC_FALSE;
  goto l32;
l30:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9858)));
  i4 = i4!=(OOC_CHAR8)'&';
  
l32:
  if (i4) goto l34;
  i4=OOC_FALSE;
  goto l36;
l34:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9877)));
  i4 = i4!=(OOC_CHAR8)'<';
  
l36:
  if (i4) goto l38;
  i4=OOC_FALSE;
  goto l40;
l38:
  i4 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 9896)));
  i4 = i4!=(OOC_CHAR8)'>';
  
l40:
  if (i4) goto l23_loop;
l44:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9944)))), XML_UnicodeBuffer__OutputDesc_Write8I)),XML_UnicodeBuffer__OutputDesc_Write8I)((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)value, value_0d, i2, i3);
  i2 = i3!=i1;
  if (i2) goto l47;
  i2=i3;
  goto l55;
l47:
  i2 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i3, value_0d, OOC_UINT32, 10012)));
  switch (i2) {
  case (OOC_CHAR8)'&':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10035)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&amp;", 6);
    goto l54;
  case (OOC_CHAR8)'<':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10070)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&lt;", 5);
    goto l54;
  case (OOC_CHAR8)'>':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10104)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&gt;", 5);
    goto l54;
  case (OOC_CHAR8)'\047':
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10138)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "&apos;", 7);
    goto l54;
  default:
    _failed_case(i2, 10002);
    goto l54;
  }
l54:
  i2 = i3+1;
  s = i2;
  
l55:
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l60:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10216)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047", 2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrStr(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, Object__String value) {
  register OOC_INT32 i0,i1,i2;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10498)))), &_td_Object__String8Desc, 10498)), 10506)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10498)))), &_td_Object__String8Desc, 10498)));
  chars = (Object__CharsLatin1)i0;
  i1 = (OOC_INT32)w;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10556)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10527)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, name_0d, (void*)(_check_pointer(i0, 10556)), i2);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrInt(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_INT32 value) {
  register OOC_INT32 i0;
  OOC_CHAR8 val[32];

  i0 = value;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 32);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10735)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(OOC_INT32)val, 32);
  return;
  ;
}

void XML_Writer__WriterDesc_AttrBool(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, OOC_CHAR8 value) {
  register OOC_INT32 i0;

  i0 = value;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10944)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, "no", 3);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10895)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, "yes", 4);
l4:
  return;
  ;
}

void XML_Writer__WriterDesc_AttrURI(XML_Writer__Writer w, const OOC_CHAR16 name[], OOC_LEN name_0d, URI__URI uri, OOC_CHAR8 absolute) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[1024];

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11185))+65);
  i2 = absolute;
  _assert(i1, 127, 11176);
  i1 = !i2;
  if (!i1) goto l4;
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11257))+52);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11240)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i1, (URI__HierarchicalURI)i2);
  uri = (URI__URI)i1;
l4:
  i1 = (OOC_INT32)uri;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11284)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i1, (void*)(OOC_INT32)str, 1024);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11308)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(OOC_INT32)str, 1024);
  return;
  ;
}

void XML_Writer__WriterDesc_EndTag(XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11404))+60);
  i1 = i1<=0;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11440)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
  _assert(OOC_FALSE, 127, 11449);
l3:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11486))+64);
  if (!i1) goto l6;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11514))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11525))+32);
  *(OOC_INT32*)((_check_pointer(i0, 11514))+36) = (i1-i2);
l6:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11559))+60);
  *(OOC_INT32*)((_check_pointer(i0, 11559))+60) = (i1-1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11592))+66);
  if (i1) goto l17;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11825))+65);
  if (i1) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12094)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12112)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "</", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12148))+56);
  i1 = _check_pointer(i1, 12162);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12164))+60);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 12162))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12148))+56);
  i2 = _check_pointer(i2, 12162);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12164))+60);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 12162))*8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12188)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12136)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i1, 12188)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12199)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
  goto l18;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11898))+48);
  if (i1) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11968)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "/>", 3);
  goto l15;
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11931)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, " />", 4);
l15:
  *(OOC_UINT8*)((_check_pointer(i0, 12002))+65) = OOC_FALSE;
  goto l18;
l17:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11670)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11694)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11712)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "</", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11748))+56);
  i1 = _check_pointer(i1, 11762);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11764))+60);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 11762))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11748))+56);
  i2 = _check_pointer(i2, 11762);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 11764))+60);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 11762))*8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11788)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11736)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i1, 11788)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11799)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, ">", 2);
l18:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12249))+32);
  *(OOC_UINT8*)((_check_pointer(i0, 12233))+64) = (i1>=0);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12279))+60);
  i1 = i1>0;
  if (!i1) goto l25;
  i1 = _check_pointer(i0, 12314);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 12329))+64);
  if (i2) goto l23;
  i0=OOC_FALSE;
  goto l24;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12366))+56);
  i2 = _check_pointer(i2, 12380);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12382))+60);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)((i2+(_check_index((i0-1), i3, OOC_UINT32, 12380))*8)+4);
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
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 12550))+65);
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12571)))), XML_Writer__WriterDesc_CloseStartTag)),XML_Writer__WriterDesc_CloseStartTag)((XML_Writer__Writer)i0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12597)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12613)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12635))+60);
  _assert((i0==0), 127, 12626);
  return;
  ;
}

void OOC_XML_Writer_init(void) {

  return;
  ;
}

/* --- */
