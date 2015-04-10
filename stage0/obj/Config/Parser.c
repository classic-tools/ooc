#include "Config/Parser.d"
#include "__oo2c.h"

static void Config_Parser__InitBuilder(Config_Parser__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)(_check_pointer(i0, 1543)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1560))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1581))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1606))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 1633))+40) = (OOC_INT32)0;
  return;
  ;
}

static Config_Parser__Builder Config_Parser__NewBuilder() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Parser__Builder.baseTypes[0]);
  Config_Parser__InitBuilder((Config_Parser__Builder)i0);
  return (Config_Parser__Builder)i0;
  ;
}

static void Config_Parser__InitNode(Config_Parser__Node node, Config_Parser__Element parent, XML_Locator__Locator l, struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)node;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 1939))+24) = i1;
  i1 = (OOC_INT32)l;
  i2 = i1==(OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 1967)) = (OOC_INT32)0;
  if (i2) goto l3;
  _copy_block((_check_pointer(i1, 2060)),((_check_pointer(i0, 2050))+4),20);
  goto l4;
l3:
  _copy_block((OOC_INT32)pos,((_check_pointer(i0, 2018))+4),20);
l4:
  return;
  ;
}

static void Config_Parser__InitElement(Config_Parser__Element e, Config_Parser__Element parent, struct XML_Locator__Position *pos, RT0__Struct pos__tag, XML_UnicodeBuffer__CharArray name, XML_Builder__AttributeList attrList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)e;
  Config_Parser__InitNode((Config_Parser__Node)i1, (Config_Parser__Element)i0, (XML_Locator__Locator)(OOC_INT32)0, (void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag));
  i0 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i1, 2315))+28) = i0;
  i0 = (OOC_INT32)attrList;
  *(OOC_INT32*)((_check_pointer(i1, 2336))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 2365))+36) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 2388))+40) = (OOC_INT32)0;
  return;
  ;
}

static Config_Parser__Element Config_Parser__NewElement(Config_Parser__Element parent, struct XML_Locator__Position *pos, RT0__Struct pos__tag, XML_UnicodeBuffer__CharArray name, XML_Builder__AttributeList attrList) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Parser__Element.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)attrList;
  Config_Parser__InitElement((Config_Parser__Element)i0, (Config_Parser__Element)i1, (void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag), (XML_UnicodeBuffer__CharArray)i2, (XML_Builder__AttributeList)i3);
  return (Config_Parser__Element)i0;
  ;
}

static void Config_Parser__InitCharData(Config_Parser__CharData charData, Config_Parser__Element parent, XML_Locator__Locator l, XML_UnicodeBuffer__CharArray str) {
  register OOC_INT32 i0,i1,i2;
  struct XML_Locator__Position pos;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)charData;
  Config_Parser__InitNode((Config_Parser__Node)i2, (Config_Parser__Element)i0, (XML_Locator__Locator)i1, (void*)(OOC_INT32)&pos, (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position));
  i0 = (OOC_INT32)str;
  *(OOC_INT32*)((_check_pointer(i2, 2945))+28) = i0;
  return;
  ;
}

static Config_Parser__CharData Config_Parser__NewCharData(Config_Parser__Element parent, XML_Locator__Locator l, XML_UnicodeBuffer__CharArray str) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Parser__CharData.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)l;
  i3 = (OOC_INT32)str;
  Config_Parser__InitCharData((Config_Parser__CharData)i0, (Config_Parser__Element)i1, (XML_Locator__Locator)i2, (XML_UnicodeBuffer__CharArray)i3);
  return (Config_Parser__CharData)i0;
  ;
}

void Config_Parser__BuilderDesc_SetLocator(Config_Parser__Builder b, XML_Locator__Locator l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 3307)) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_SetErrorListener(Config_Parser__Builder b, XML_Locator__ErrorListener errorListener) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)errorListener;
  *(OOC_INT32*)((_check_pointer(i0, 3429))+4) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_StartElement(Config_Parser__Builder b, XML_DTD__NamespaceDeclaration namespaceURI, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)localName;
  *(OOC_INT32*)((_check_pointer(i0, 3641))+16) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3688));
  _copy_block((_check_pointer(i1, 3691)),((_check_pointer(i0, 3674))+20),20);
  i1 = (OOC_INT32)XML_Builder__NewAttributeList();
  *(OOC_INT32*)((_check_pointer(i0, 3699))+40) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_Attribute(Config_Parser__Builder b, XML_DTD__NamespaceDeclaration namespaceURI, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4086))+40);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4227));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4086))+40);
  i3 = (OOC_INT32)namespaceURI;
  i4 = (OOC_INT32)localName;
  i5 = (OOC_INT32)attrDecl;
  i6 = (OOC_INT32)value;
  i7 = specified;
  i2 = (OOC_INT32)XML_Builder__NewAttribute((XML_DTD__NamespaceDeclaration)i3, (XML_UnicodeBuffer__CharArray)i4, (XML_DTD__AttrDecl)i5, (XML_DTD__AttValue)i6, i7, (XML_Locator__Locator)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4100)))), XML_Builder__AttributeListDesc_Append)),XML_Builder__AttributeListDesc_Append)((XML_Builder__AttributeList)i0, (XML_Builder__Attribute)i2);
  return;
  ;
}

void Config_Parser__BuilderDesc_AttributesDone(Config_Parser__Builder b) {
  register OOC_INT32 i0,i1,i2,i3;
  Config_Parser__Element element;

  i0 = (OOC_INT32)b;
  i1 = _check_pointer(i0, 4365);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4355))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4377))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4420))+40);
  i1 = (OOC_INT32)Config_Parser__NewElement((Config_Parser__Element)i1, (void*)((_check_pointer(i0, 4365))+20), (RT0__Struct)((OOC_INT32)&_td_XML_Locator__Position), (XML_UnicodeBuffer__CharArray)i2, (XML_Builder__AttributeList)i3);
  element = (Config_Parser__Element)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4446))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4582))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4589))+36);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4668))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4675))+40);
  *(OOC_INT32*)(_check_pointer(i2, 4688)) = i1;
  goto l6;
l5:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4620))+12);
  *(OOC_INT32*)((_check_pointer(i2, 4627))+36) = i1;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4728))+12);
  *(OOC_INT32*)((_check_pointer(i2, 4735))+40) = i1;
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 4473))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 4499))+12) = i1;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 4774))+12) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_EndElement(Config_Parser__Builder b, XML_DTD__NamespaceDeclaration namespaceURI, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4971))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4990))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4997))+28);
  i2 = (OOC_INT32)localName;
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 5003)),(const void*)(_check_pointer(i2, 5016))))==0;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5043))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5050))+24);
  *(OOC_INT32*)((_check_pointer(i0, 5031))+12) = i1;
l7:
  return;
  ;
}

void Config_Parser__BuilderDesc_Characters(Config_Parser__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 len;
  XML_UnicodeBuffer__CharArray ptr;
  OOC_INT32 i;
  Config_Parser__CharData charData;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5391))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = charsEnd;
  i2 = charsStart;
  i1 = i1-i2;
  len = i1;
  i3 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i1+1));
  ptr = (XML_UnicodeBuffer__CharArray)i3;
  i4 = i1-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l10;
  i5=0;
l5_loop:
  i6 = _check_pointer(i3, 5509);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT16*)((OOC_INT32)chars+(_check_index((i5+i2), chars_0d, OOC_UINT32, 5521))*2);
  *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 5509))*2) = i8;
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l5_loop;
l10:
  i2 = _check_pointer(i3, 5556);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT16*)(i2+(_check_index(i1, i4, OOC_UINT32, 5556))*2) = (OOC_CHAR16)0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5618));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5608))+12);
  i1 = (OOC_INT32)Config_Parser__NewCharData((Config_Parser__Element)i2, (XML_Locator__Locator)i1, (XML_UnicodeBuffer__CharArray)i3);
  charData = (Config_Parser__CharData)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5640))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5647))+36);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5727))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5734))+40);
  *(OOC_INT32*)(_check_pointer(i2, 5747)) = i1;
  goto l14;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5678))+12);
  *(OOC_INT32*)((_check_pointer(i2, 5685))+36) = i1;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5788))+12);
  *(OOC_INT32*)((_check_pointer(i0, 5795))+40) = i1;
l15:
  return;
  ;
}

Config_Parser__Parser Config_Parser__NewFile(const OOC_CHAR8 filePath__ref[], OOC_LEN filePath_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(filePath,OOC_CHAR8 ,filePath_0d)
  Config_Parser__Parser p;

  OOC_INITIALIZE_VPAR(filePath__ref,filePath,OOC_CHAR8 ,filePath_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Parser__Parser.baseTypes[0]);
  p = (Config_Parser__Parser)i0;
  i1 = (OOC_INT32)Config_Parser__NewBuilder();
  *(OOC_INT32*)((_check_pointer(i0, 5968))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6099))+4);
  i1 = (OOC_INT32)XML_Parser__NewFile((void*)(OOC_INT32)filePath, filePath_0d, (URI__URI)(OOC_INT32)0, (XML_UnicodeCodec__Factory)(OOC_INT32)0, (XML_EntityResolver__Resolver)(OOC_INT32)0, (XML_Builder__Builder)i1, (void*)(OOC_INT32)res);
  *(OOC_INT32*)(_check_pointer(i0, 6000)) = i1;
  return (Config_Parser__Parser)i0;
  ;
}

Config_Parser__Parser Config_Parser__NewChannel(Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2;
  Config_Parser__Parser p;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Parser__Parser.baseTypes[0]);
  p = (Config_Parser__Parser)i0;
  i1 = (OOC_INT32)Config_Parser__NewBuilder();
  *(OOC_INT32*)((_check_pointer(i0, 6245))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6334))+4);
  i2 = (OOC_INT32)ch;
  i1 = (OOC_INT32)XML_Parser__NewChannel((Channel__Channel)i2, (URI__URI)(OOC_INT32)0, (XML_UnicodeCodec__Factory)(OOC_INT32)0, (XML_EntityResolver__Resolver)(OOC_INT32)0, (XML_Builder__Builder)i1);
  *(OOC_INT32*)(_check_pointer(i0, 6277)) = i1;
  return (Config_Parser__Parser)i0;
  ;
}

void Config_Parser__ParserDesc_ParseDocument(Config_Parser__Parser p) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6429));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6429));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6440)))), XML_Parser__ParserDesc_ParseDocument)),XML_Parser__ParserDesc_ParseDocument)((XML_Parser__Parser)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6475))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6484))+8);
  *(OOC_INT32*)((_check_pointer(i0, 6464))+12) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6517))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6526))+4);
  *(OOC_INT32*)((_check_pointer(i0, 6497))+16) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6562));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6573));
  *(OOC_INT32*)((_check_pointer(i0, 6548))+8) = i1;
  return;
  ;
}

OOC_CHAR8 Config_Parser__NodeDesc_IsWhitespace(Config_Parser__Node node) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_UnicodeBuffer__CharArray str;
  OOC_INT32 i;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6719)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l24;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6761)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6755)))), 6755);
  goto l25;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6792))+28);
  str = (XML_UnicodeBuffer__CharArray)i0;
  i = 0;
  i1 = _check_pointer(i0, 6832);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 6832))*2);
  i1 = i1!=(OOC_CHAR16)0;
  if (i1) goto l8;
  i1=OOC_FALSE;
  goto l10;
l8:
  i1 = _check_pointer(i0, 6848);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 6848))*2);
  i1 = i1<=(OOC_CHAR16)' ';
  
l10:
  if (i1) goto l12;
  i1=0;
  goto l22;
l12:
  i1=0;
l13_loop:
  i1 = i1+1;
  i = i1;
  i2 = _check_pointer(i0, 6832);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 6832))*2);
  i2 = i2!=(OOC_CHAR16)0;
  if (i2) goto l16;
  i2=OOC_FALSE;
  goto l18;
l16:
  i2 = _check_pointer(i0, 6848);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 6848))*2);
  i2 = i2<=(OOC_CHAR16)' ';
  
l18:
  if (i2) goto l13_loop;
l22:
  i0 = _check_pointer(i0, 6907);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 6907))*2);
  return (i0==(OOC_CHAR16)0);
  goto l25;
l24:
  return OOC_FALSE;
l25:
  _failed_function(6630); return 0;
  ;
}

OOC_CHAR8 Config_Parser__NodeDesc_HasNoElementContent(Config_Parser__Node node) {
  register OOC_INT32 i0,i1;
  Config_Parser__Node ptr;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7047)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7252)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7246)))), 7246);
  goto l19;
l5:
  return OOC_TRUE;
  goto l19;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7077))+36);
  i1 = i0!=(OOC_INT32)0;
  ptr = (Config_Parser__Node)i0;
  if (!i1) goto l18;
l10_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7131)))), &_td_Config_Parser__ElementDesc);
  if (!i1) goto l13;
  return OOC_FALSE;
l13:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7202));
  ptr = (Config_Parser__Node)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10_loop;
l18:
  return OOC_TRUE;
l19:
  _failed_function(6971); return 0;
  ;
}

OOC_CHAR8 Config_Parser__NodeDesc_IsEmpty(Config_Parser__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7386)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7444)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7438)))), 7438);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7476))+28);
  return ((
  _cmp16((const void*)(_check_pointer(i0, 7484)),(const void*)((OOC_CHAR16[]){0})))==0);
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7417))+36);
  return (i0==(OOC_INT32)0);
l8:
  _failed_function(7343); return 0;
  ;
}

XML_UnicodeBuffer__CharArray Config_Parser__NodeDesc_GetCharDataContent(Config_Parser__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;
  Config_Parser__Node ptr;
  XML_UnicodeBuffer__CharArray str;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7655)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8153)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8147)))), 8147);
  goto l29;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8184))+28);
  return (XML_UnicodeBuffer__CharArray)i0;
  goto l29;
l7:
  len = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7701))+36);
  i2 = i1!=(OOC_INT32)0;
  ptr = (Config_Parser__Node)i1;
  if (i2) goto l10;
  i1=0;
  goto l20;
l10:
  i2=0;
l11_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7755)))), &_td_Config_Parser__CharDataDesc);
  if (i3) goto l14;
  return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  
  goto l15;
l14:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7812))+28);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7812))+28);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 7820)), 0);
  i3 = LongStrings__Length((void*)(_check_pointer(i3, 7820)), i4);
  i2 = i2+i3;
  len = i2;
  
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7889));
  ptr = (Config_Parser__Node)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l11_loop;
l19:
  i1=i2;
l20:
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i1+1));
  str = (XML_UnicodeBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7961)), 0);
  _copy_16(((OOC_CHAR16[]){0}),(_check_pointer(i1, 7961)),i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7982))+36);
  ptr = (Config_Parser__Node)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l28;
l23_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8052)))), &_td_Config_Parser__CharDataDesc, 8052)), 8061))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8052)))), &_td_Config_Parser__CharDataDesc, 8052)), 8061))+28);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8075)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8069)), 0);
  LongStrings__Append((void*)(_check_pointer(i2, 8069)), i3, (void*)(_check_pointer(i1, 8075)), i4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8097));
  ptr = (Config_Parser__Node)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l23_loop;
l28:
  return (XML_UnicodeBuffer__CharArray)i1;
l29:
  _failed_function(7540); return 0;
  ;
}

void OOC_Config_Parser_init(void) {

  return;
  ;
}

/* --- */
