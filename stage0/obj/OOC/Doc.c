#include <OOC/Doc.d>
#include <__oo2c.h>

void OOC_Doc__SetPosition(struct OOC_Doc__Position *pos, RT0__Struct pos__tag, OOC_INT32 _char, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0;

  i0 = _char;
  *(OOC_INT32*)(OOC_INT32)pos = i0;
  i0 = line;
  *(OOC_INT32*)((OOC_INT32)pos+4) = i0;
  i0 = column;
  *(OOC_INT32*)((OOC_INT32)pos+8) = i0;
  return;
  ;
}

static void OOC_Doc__InitElement(OOC_Doc__Element e) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)e;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 6493)) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6517))+4) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6541))+8) = -1;
  return;
  ;
}

void OOC_Doc__ElementDesc_NodeName(OOC_Doc__Element e, OOC_CHAR8 name[], OOC_LEN name_0d) {

  return;
  ;
}

void OOC_Doc__ElementDesc_Normalize(OOC_Doc__Element e) {

  return;
  ;
}

void OOC_Doc__ElementDesc_Store(OOC_Doc__Element e, ADT_Storable__Writer w) {

  return;
  ;
}

void OOC_Doc__ElementDesc_Load(OOC_Doc__Element e, ADT_Storable__Reader r) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  return;
  ;
}

void OOC_Doc__MergeInline(OOC_Doc__InlineElement *dest, OOC_Doc__InlineElement src) {
  register OOC_INT32 i0,i1;
  OOC_Doc__InlineElement i;

  i0 = (OOC_INT32)*dest;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l12;
  i = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7221))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7258))+12);
  i = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7221))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l11:
  i1 = (OOC_INT32)src;
  *(OOC_INT32*)((_check_pointer(i0, 7289))+12) = i1;
  goto l13;
l12:
  i0 = (OOC_INT32)src;
  *dest = (OOC_Doc__InlineElement)i0;
l13:
  return;
  ;
}

static void OOC_Doc__InitInlineElement(OOC_Doc__InlineElement e) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  *(OOC_INT32*)((_check_pointer(i0, 7419))+12) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Doc__InlineElementDesc_StripHeadWS(OOC_Doc__InlineElement e) {

  return;
  ;
}

void OOC_Doc__InlineElementDesc_StripTailWS(OOC_Doc__InlineElement e) {

  return;
  ;
}

void OOC_Doc__InlineElementDesc_Store(OOC_Doc__InlineElement e, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7695))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7679)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__InlineElementDesc_Load(OOC_Doc__InlineElement e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7843)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7930))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7950)))), &_td_OOC_Doc__InlineElementDesc, 7950));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 7894))+12) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitBlockElement(OOC_Doc__BlockElement e, OOC_CHAR8 padAfter) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  *(OOC_INT32*)((_check_pointer(i0, 8087))+12) = (OOC_INT32)0;
  i1 = padAfter;
  *(OOC_UINT8*)((_check_pointer(i0, 8112))+16) = i1;
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Store(OOC_Doc__BlockElement e, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8265))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8249)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8298))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8284)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Load(OOC_Doc__BlockElement e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8443)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 8529))+12) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8548)))), &_td_OOC_Doc__BlockElementDesc, 8548));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 8494))+12) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8576)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 8589))+16));
  return;
  ;
}

static void OOC_Doc__NormalizeBlockList(OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;
  OOC_Doc__BlockElement block;

  i0 = (OOC_INT32)blockList;
  block = (OOC_Doc__BlockElement)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8895)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8928))+12);
  block = (OOC_Doc__BlockElement)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  return;
  ;
}

static void OOC_Doc__NoPadLastElement(OOC_Doc__BlockElement list) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)list;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9074))+12);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l9;
l4_loop:
  i0 = (OOC_INT32)list;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9116))+12);
  list = (OOC_Doc__BlockElement)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9074))+12);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l4_loop;
l9:
  i0 = (OOC_INT32)list;
  *(OOC_UINT8*)((_check_pointer(i0, 9149))+16) = OOC_FALSE;
l10:
  return;
  ;
}

OOC_Doc__InlineList OOC_Doc__NewInlineList() {
  register OOC_INT32 i0;
  OOC_Doc__InlineList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__InlineList.baseTypes[0]);
  il = (OOC_Doc__InlineList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 9301)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 9322))+4) = (OOC_INT32)0;
  return (OOC_Doc__InlineList)i0;
  ;
}

void OOC_Doc__InlineListDesc_Append(OOC_Doc__InlineList il, OOC_Doc__InlineElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 9465))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)il;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9496));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9564))+4);
  *(OOC_INT32*)((_check_pointer(i2, 9570))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 9523)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 9615))+4) = i0;
  return;
  ;
}

OOC_Doc__BlockList OOC_Doc__NewBlockList() {
  register OOC_INT32 i0;
  OOC_Doc__BlockList bl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__BlockList.baseTypes[0]);
  bl = (OOC_Doc__BlockList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 9746)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 9767))+4) = (OOC_INT32)0;
  return (OOC_Doc__BlockList)i0;
  ;
}

void OOC_Doc__BlockListDesc_Append(OOC_Doc__BlockList bl, OOC_Doc__BlockElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 9907))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)bl;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9937));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10005))+4);
  *(OOC_INT32*)((_check_pointer(i2, 10011))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 9964)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 10055))+4) = i0;
  return;
  ;
}

static void OOC_Doc__NormalizeInlineList(OOC_Doc__InlineElement *blockList) {
  register OOC_INT32 i0,i1,i2;
  OOC_Doc__InlineElement prev;
  OOC_Doc__InlineElement i;

  prev = (OOC_Doc__InlineElement)(OOC_INT32)0;
  i0 = (OOC_INT32)*blockList;
  i = (OOC_Doc__InlineElement)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l20;
  i1=(OOC_INT32)0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10266)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10291)))), &_td_OOC_Doc__TextDesc);
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10305)))), &_td_OOC_Doc__TextDesc, 10305)), 10310))+16);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 10318)),(const void*)""))==(OOC_INT32)0;
  
l8:
  if (i2) goto l10;
  prev = (OOC_Doc__InlineElement)i0;
  i1=i0;
  goto l15;
l10:
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10648))+12);
  *(OOC_INT32*)((_check_pointer(i1, 10631))+12) = i2;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10591))+12);
  *blockList = (OOC_Doc__InlineElement)i2;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10725))+12);
  i = (OOC_Doc__InlineElement)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l20:
  return;
  ;
}

static OOC_Doc__InlineElement OOC_Doc__LastInlineElement(OOC_Doc__InlineElement inlineList) {
  register OOC_INT32 i0,i1;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)inlineList;
  last = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10924))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10965))+12);
  last = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10924))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l4_loop;
l9:
  return (OOC_Doc__InlineElement)i0;
  ;
}

static OOC_Doc__BlockElement OOC_Doc__LastBlockElement(OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;
  OOC_Doc__BlockElement last;

  i0 = (OOC_INT32)blockList;
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11173))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11213))+12);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11173))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l4_loop;
l9:
  return (OOC_Doc__BlockElement)i0;
  ;
}

static void OOC_Doc__NormalizeArg(OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)inlineText;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11413)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)inlineText;
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11484)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
  OOC_Doc__NormalizeInlineList((void*)(OOC_INT32)&inlineText);
l4:
  return;
  ;
}

static void OOC_Doc__StripInlineListWS(OOC_Doc__InlineElement inlineList) {
  register OOC_INT32 i0,i1;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)inlineList;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11710)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11781)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
l4:
  return;
  ;
}

static void OOC_Doc__InitGlyph(OOC_Doc__Glyph glyph, OOC_INT32 glyphCode) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)glyph;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = glyphCode;
  *(OOC_INT32*)((_check_pointer(i0, 12013))+16) = i1;
  return;
  ;
}

OOC_Doc__Glyph OOC_Doc__NewGlyph(OOC_INT32 glyphCode) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Glyph.baseTypes[0]);
  i1 = glyphCode;
  OOC_Doc__InitGlyph((OOC_Doc__Glyph)i0, i1);
  return (OOC_Doc__Glyph)i0;
  ;
}

void OOC_Doc__GlyphDesc_NodeName(OOC_Doc__Glyph glyph, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)glyph;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12301))+16);
  switch (i0) {
  case 0:
    _copy_8((const void*)"bullet",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  case 1:
    _copy_8((const void*)"dots",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  case 2:
    _copy_8((const void*)"minus",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  case 3:
    _copy_8((const void*)"em-dash",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  case 4:
    _copy_8((const void*)"result",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  case 5:
    _copy_8((const void*)"left-quote",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  case 6:
    _copy_8((const void*)"right-quote",(void*)(OOC_INT32)name,name_0d);
    goto l10;
  default:
    _failed_case(i0, 12291);
    goto l10;
  }
l10:
  return;
  ;
}

void OOC_Doc__GlyphDesc_Normalize(OOC_Doc__Glyph glyph) {

  return;
  ;
}

void OOC_Doc__GlyphDesc_Store(OOC_Doc__Glyph glyph, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)glyph;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 12794))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12777)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__GlyphDesc_Load(OOC_Doc__Glyph glyph, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)glyph;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12904)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 12920))+16));
  return;
  ;
}

static void OOC_Doc__InitText(OOC_Doc__Text text, struct OOC_Doc__Position *pos, RT0__Struct pos__tag, OOC_CHAR8 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)text;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  _copy_block((OOC_INT32)pos,(_check_pointer(i0, 13067)),12);
  i1 = Strings__Length((void*)(OOC_INT32)string, string_0d);
  *(OOC_INT32*)((_check_pointer(i0, 13094))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13154))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13154))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13162)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)string,(void*)(_check_pointer(i1, 13162)),i0);
  return;
  ;
}

OOC_Doc__Text OOC_Doc__NewText(OOC_CHAR8 string[], OOC_LEN string_0d, struct OOC_Doc__Position *pos, RT0__Struct pos__tag) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Text.baseTypes[0]);
  OOC_Doc__InitText((OOC_Doc__Text)i0, (void*)(OOC_INT32)pos, (RT0__Struct)((OOC_INT32)pos__tag), (void*)(OOC_INT32)string, string_0d);
  return (OOC_Doc__Text)i0;
  ;
}

void OOC_Doc__TextDesc_NodeName(OOC_Doc__Text text, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"text",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__TextDesc_Normalize(OOC_Doc__Text text) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_Scanner_InputBuffer__CharArray s;
  OOC_INT32 i;
  OOC_INT32 delta;
  OOC_INT32 dotExt;
  OOC_Scanner_InputBuffer__CharArray ns;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13758))+16);
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i = 0;
  delta = 0;
  dotExt = 0;
  i2 = _check_pointer(i1, 13813);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 13813)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3;
  i2=0;i3=0;i4=0;
  goto l54;
l3:
  i2=0;i3=0;i4=0;
l4_loop:
  i5 = _check_pointer(i1, 13837);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13837)));
  i5 = i5<=(OOC_CHAR8)' ';
  if (i5) goto l31;
  i5 = _check_pointer(i1, 13992);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13992)));
  i5 = i5==(OOC_CHAR8)'.';
  if (i5) goto l9;
  i5 = _check_pointer(i1, 14487);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i1, 14501);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14501)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14487))) = i7;
  i2 = i2+1;
  i = i2;
  
  goto l49;
l9:
  i5 = _check_pointer(i1, 14017);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i1, 14031);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14031)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14017))) = i7;
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 14058);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14058)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l12;
  i5=OOC_FALSE;
  goto l14;
l12:
  i5 = _check_pointer(i1, 14072);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14072)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l14:
  if (i5) goto l16;
  i5=OOC_FALSE;
  goto l18;
l16:
  i5 = _check_pointer(i1, 14100);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14100)));
  i5 = i5!=(OOC_CHAR8)'\000';
  
l18:
  if (i5) goto l20;
  i5=OOC_FALSE;
  goto l22;
l20:
  i5 = _check_pointer(i1, 14116);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14116)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l22:
  if (i5) goto l28;
  i5 = _check_pointer(i1, 14210);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14210)));
  i5 = i5==(OOC_CHAR8)'\012';
  if (!i5) goto l49;
  i5 = _check_pointer(i1, 14416);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14416))) = (OOC_CHAR8)'\001';
  i2 = i2+1;
  i = i2;
  i4 = i4+1;
  dotExt = i4;
  
  goto l49;
l28:
  i5 = _check_pointer(i1, 14146);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14146))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i = i2;
  
  goto l49;
l31:
  i5 = _check_pointer(i1, 13863);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 13863))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 13906);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13906)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l34;
  i5=OOC_FALSE;
  goto l36;
l34:
  i5 = _check_pointer(i1, 13920);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13920)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l36:
  if (!i5) goto l49;
l39_loop:
  i2 = i2+1;
  i = i2;
  i3 = i3+1;
  delta = i3;
  i5 = _check_pointer(i1, 13906);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13906)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l42;
  i5=OOC_FALSE;
  goto l44;
l42:
  i5 = _check_pointer(i1, 13920);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13920)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l44:
  if (i5) goto l39_loop;
l49:
  i5 = _check_pointer(i1, 13813);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13813)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l4_loop;
l54:
  i5 = _check_pointer(i1, 14538);
  i2 = i2-i3;
  i3 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index(i2, i3, OOC_UINT32, 14538))) = (OOC_CHAR8)'\000';
  i = i2;
  i3 = i2+i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14602)), (OOC_INT32)0);
  i5 = i3>=i5;
  if (i5) goto l57;
  ns = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0=i1;
  goto l58;
l57:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i3+1));
  ns = (OOC_Scanner_InputBuffer__CharArray)i3;
  *(OOC_INT32*)((_check_pointer(i0, 14649))+16) = i3;
  i0=i3;
l58:
  i3 = i2>=0;
  if (!i3) goto l70;
  i3=i4;
l61_loop:
  i4 = _check_pointer(i1, 14729);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 14729)));
  i4 = i4==(OOC_CHAR8)'\001';
  if (i4) goto l64;
  i4 = _check_pointer(i0, 14861);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i1, 14876);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 14876)));
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 14861))) = i6;
  i2 = i2-1;
  i = i2;
  
  goto l65;
l64:
  i4 = _check_pointer(i0, 14754);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 14754))) = (OOC_CHAR8)' ';
  i3 = i3-1;
  dotExt = i3;
  i4 = _check_pointer(i0, 14805);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 14805))) = (OOC_CHAR8)' ';
  i2 = i2-1;
  i = i2;
  
l65:
  i4 = i2>=0;
  if (i4) goto l61_loop;
l70:
  return;
  ;
}

void OOC_Doc__TextDesc_StripHeadWS(OOC_Doc__Text text) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i = 0;
  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15026))+16);
  i1 = _check_pointer(i1, 15034);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15034)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15051))+16);
  i1 = _check_pointer(i1, 15059);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15059)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15026))+16);
  i2 = _check_pointer(i2, 15034);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15034)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15051))+16);
  i2 = _check_pointer(i2, 15059);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15059)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15121))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15121))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15129)), (OOC_INT32)0);
  Strings__Delete((void*)(_check_pointer(i2, 15129)), i0, (OOC_INT32)0, i1);
  return;
  ;
}

void OOC_Doc__TextDesc_StripTailWS(OOC_Doc__Text text) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15261))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15261))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15269)), (OOC_INT32)0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 15269)), i2);
  i2 = i1!=0;
  i = i1;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15298))+16);
  i2 = _check_pointer(i2, 15306);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15306)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l5:
  if (!i2) goto l17;
l8_loop:
  i1 = i1-1;
  i = i1;
  i2 = i1!=0;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15298))+16);
  i2 = _check_pointer(i2, 15306);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15306)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l13:
  if (i2) goto l8_loop;
l17:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15354))+16);
  i0 = _check_pointer(i0, 15362);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 15362))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void OOC_Doc__TextDesc_Store(OOC_Doc__Text text, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)text;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15523))+16);
  i2 = _check_pointer(i2, 15531);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 15531)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3;
  i2=0;
  goto l9;
l3:
  i2=0;
l4_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15523))+16);
  i3 = _check_pointer(i3, 15531);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 15531)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l4_loop;
l9:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15572)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15612))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15612))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15620)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15593)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i0, (void*)(_check_pointer(i2, 15620)), i1);
  return;
  ;
}

void OOC_Doc__TextDesc_Load(OOC_Doc__Text text, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)text;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15746)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 15776))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15817))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15817))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15825)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15799)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 15825)), i1);
  return;
  ;
}

static void OOC_Doc__InitMarkedInline(OOC_Doc__MarkedInline mi, OOC_INT32 mark, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = mark;
  *(OOC_INT32*)((_check_pointer(i0, 16001))+16) = i1;
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 16023))+20) = i1;
  return;
  ;
}

OOC_Doc__MarkedInline OOC_Doc__NewMarkedInline(OOC_INT32 mark, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__MarkedInline.baseTypes[0]);
  i1 = mark;
  i2 = (OOC_INT32)inlineText;
  OOC_Doc__InitMarkedInline((OOC_Doc__MarkedInline)i0, i1, (OOC_Doc__InlineElement)i2);
  return (OOC_Doc__MarkedInline)i0;
  ;
}

void OOC_Doc__MarkedInlineDesc_NodeName(OOC_Doc__MarkedInline mi, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mi;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 16378))+16);
  switch (i0) {
  case 0:
    _copy_8((const void*)"asis",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 1:
    _copy_8((const void*)"cite",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 2:
    _copy_8((const void*)"code",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 3:
    _copy_8((const void*)"dfn",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 4:
    _copy_8((const void*)"emph",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 5:
    _copy_8((const void*)"file",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 6:
    _copy_8((const void*)"kbd",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 7:
    _copy_8((const void*)"samp",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 8:
    _copy_8((const void*)"strong",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 9:
    _copy_8((const void*)"var",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 10:
    _copy_8((const void*)"url",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 11:
    _copy_8((const void*)"oberon-module",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 12:
    _copy_8((const void*)"oberon-const",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 13:
    _copy_8((const void*)"oberon-field",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 14:
    _copy_8((const void*)"oberon-param",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 15:
    _copy_8((const void*)"oberon-proc",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 16:
    _copy_8((const void*)"oberon-type",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  case 17:
    _copy_8((const void*)"oberon-var",(void*)(OOC_INT32)name,name_0d);
    goto l21;
  default:
    _failed_case(i0, 16371);
    goto l21;
  }
l21:
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Normalize(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mi;
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 17232))+20));
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripHeadWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17320))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17320))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17332)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripTailWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)mi;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17480))+20);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17503)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Store(OOC_Doc__MarkedInline mi, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)mi;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 17642))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17628)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17673))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17656)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Load(OOC_Doc__MarkedInline mi, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17822)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 17835))+16));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17849)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 17938))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17958)))), &_td_OOC_Doc__InlineElementDesc, 17958));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 17901))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitOberonRef(OOC_Doc__OberonRef or, OOC_INT32 mark, OOC_Doc__InlineElement inlineText, ADT_Storable__Object target) {
  register OOC_INT32 i0,i1,i2;

  i0 = mark;
  i1 = (OOC_INT32)inlineText;
  i2 = (OOC_INT32)or;
  OOC_Doc__InitMarkedInline((OOC_Doc__MarkedInline)i2, i0, (OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)target;
  *(OOC_INT32*)((_check_pointer(i2, 18212))+24) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 18238))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 18269))+32) = (OOC_INT32)0;
  return;
  ;
}

OOC_Doc__MarkedInline OOC_Doc__NewOberonRef(OOC_INT32 mark, OOC_Doc__InlineElement inlineText, ADT_Storable__Object target) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__OberonRef.baseTypes[0]);
  i1 = mark;
  i2 = (OOC_INT32)inlineText;
  i3 = (OOC_INT32)target;
  OOC_Doc__InitOberonRef((OOC_Doc__OberonRef)i0, i1, (OOC_Doc__InlineElement)i2, (ADT_Storable__Object)i3);
  return (OOC_Doc__MarkedInline)i0;
  ;
}

void OOC_Doc__OberonRefDesc_SetTarget(OOC_Doc__OberonRef or, ADT_Storable__Object targetDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)targetDecl;
  *(OOC_INT32*)((_check_pointer(i0, 18658))+24) = i1;
  return;
  ;
}

void OOC_Doc__OberonRefDesc_SetExternalTarget(OOC_Doc__OberonRef or, OOC_Scanner_InputBuffer__CharArray module, OOC_Scanner_InputBuffer__CharArray id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 18795))+28) = i1;
  i1 = (OOC_INT32)id;
  *(OOC_INT32*)((_check_pointer(i0, 18829))+32) = i1;
  return;
  ;
}

void OOC_Doc__OberonRefDesc_Store(OOC_Doc__OberonRef or, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)w;
  OOC_Doc__MarkedInlineDesc_Store((OOC_Doc__MarkedInline)i0, (ADT_Storable__Writer)i1);
  return;
  ;
}

void OOC_Doc__OberonRefDesc_Load(OOC_Doc__OberonRef or, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)or;
  OOC_Doc__MarkedInlineDesc_Load((OOC_Doc__MarkedInline)i1, (ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 19118))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 19141))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 19172))+32) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_Doc__InitEmail(OOC_Doc__Email email, OOC_Doc__InlineElement address, OOC_Doc__InlineElement displayed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)email;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)address;
  *(OOC_INT32*)((_check_pointer(i0, 19325))+16) = i1;
  i1 = (OOC_INT32)displayed;
  *(OOC_INT32*)((_check_pointer(i0, 19356))+20) = i1;
  return;
  ;
}

OOC_Doc__Email OOC_Doc__NewEmail(OOC_Doc__InlineElement address, OOC_Doc__InlineElement displayed) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Email.baseTypes[0]);
  i1 = (OOC_INT32)address;
  i2 = (OOC_INT32)displayed;
  OOC_Doc__InitEmail((OOC_Doc__Email)i0, (OOC_Doc__InlineElement)i1, (OOC_Doc__InlineElement)i2);
  return (OOC_Doc__Email)i0;
  ;
}

void OOC_Doc__EmailDesc_NodeName(OOC_Doc__Email email, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"email",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__EmailDesc_Normalize(OOC_Doc__Email email) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19769))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19804))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__EmailDesc_Store(OOC_Doc__Email email, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)email;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19945))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19925)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19982))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19962)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__EmailDesc_Load(OOC_Doc__Email email, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20129)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20221))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20238)))), &_td_OOC_Doc__InlineElementDesc, 20238));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20184))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20267)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 20361))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20380)))), &_td_OOC_Doc__InlineElementDesc, 20380));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 20322))+20) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitUref(OOC_Doc__Uref uref, OOC_Doc__InlineElement url, OOC_Doc__InlineElement text, OOC_Doc__InlineElement replacement) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uref;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)url;
  *(OOC_INT32*)((_check_pointer(i0, 20535))+16) = i1;
  i1 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i0, 20557))+20) = i1;
  i1 = (OOC_INT32)replacement;
  *(OOC_INT32*)((_check_pointer(i0, 20581))+24) = i1;
  return;
  ;
}

OOC_Doc__Uref OOC_Doc__NewUref(OOC_Doc__InlineElement url, OOC_Doc__InlineElement text, OOC_Doc__InlineElement replacement) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Uref.baseTypes[0]);
  i1 = (OOC_INT32)url;
  i2 = (OOC_INT32)text;
  i3 = (OOC_INT32)replacement;
  OOC_Doc__InitUref((OOC_Doc__Uref)i0, (OOC_Doc__InlineElement)i1, (OOC_Doc__InlineElement)i2, (OOC_Doc__InlineElement)i3);
  return (OOC_Doc__Uref)i0;
  ;
}

void OOC_Doc__UrefDesc_NodeName(OOC_Doc__Uref uref, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"uref",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__UrefDesc_Normalize(OOC_Doc__Uref uref) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20990))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21020))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21051))+24);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__UrefDesc_Store(OOC_Doc__Uref uref, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)uref;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21190))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21171)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21222))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21203)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21255))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21236)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__UrefDesc_Load(OOC_Doc__Uref uref, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21402)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 21488))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21501)))), &_td_OOC_Doc__InlineElementDesc, 21501));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 21456))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21530)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 21617))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21631)))), &_td_OOC_Doc__InlineElementDesc, 21631));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 21584))+20) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21660)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 21754))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21775)))), &_td_OOC_Doc__InlineElementDesc, 21775));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 21714))+24) = (OOC_INT32)0;
l12:
  return;
  ;
}

static void OOC_Doc__InitParagraph(OOC_Doc__Paragraph p, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText, OOC_CHAR8 noIndent) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)p;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i1, 21967))+20) = i0;
  i0 = noIndent;
  *(OOC_UINT8*)((_check_pointer(i1, 22000))+24) = i0;
  return;
  ;
}

OOC_Doc__Paragraph OOC_Doc__NewParagraph(OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText, OOC_CHAR8 noIndent) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Paragraph.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)inlineText;
  i3 = noIndent;
  OOC_Doc__InitParagraph((OOC_Doc__Paragraph)i0, i1, (OOC_Doc__InlineElement)i2, i3);
  return (OOC_Doc__Paragraph)i0;
  ;
}

void OOC_Doc__ParagraphDesc_NodeName(OOC_Doc__Paragraph p, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"p",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Normalize(OOC_Doc__Paragraph p) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22458))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 22499))+20));
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Store(OOC_Doc__Paragraph p, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)p;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22633))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22617)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 22667))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22653)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Load(OOC_Doc__Paragraph p, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)p;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22809)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 22896))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22916)))), &_td_OOC_Doc__InlineElementDesc, 22916));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 22860))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22945)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 22958))+24));
  return;
  ;
}

static void OOC_Doc__InitExample(OOC_Doc__Example ex, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)ex;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i1, 23118))+20) = i0;
  return;
  ;
}

OOC_Doc__Example OOC_Doc__NewExample(OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Example.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)inlineText;
  OOC_Doc__InitExample((OOC_Doc__Example)i0, i1, (OOC_Doc__InlineElement)i2);
  return (OOC_Doc__Example)i0;
  ;
}

void OOC_Doc__ExampleDesc_NodeName(OOC_Doc__Example ex, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"example",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ExampleDesc_Normalize(OOC_Doc__Example ex) {

  return;
  ;
}

void OOC_Doc__ExampleDesc_Store(OOC_Doc__Example ex, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ex;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23636))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23619)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__ExampleDesc_Load(OOC_Doc__Example ex, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)ex;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23780)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 23869))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23889)))), &_td_OOC_Doc__InlineElementDesc, 23889));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 23832))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitPreCond(OOC_Doc__PreCond pc, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)pc;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)blockList;
  *(OOC_INT32*)((_check_pointer(i1, 24058))+20) = i0;
  return;
  ;
}

OOC_Doc__PreCond OOC_Doc__NewPreCond(OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__PreCond.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)blockList;
  OOC_Doc__InitPreCond((OOC_Doc__PreCond)i0, i1, (OOC_Doc__BlockElement)i2);
  return (OOC_Doc__PreCond)i0;
  ;
}

void OOC_Doc__PreCondDesc_NodeName(OOC_Doc__PreCond pc, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"pre-cond",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Normalize(OOC_Doc__PreCond pc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)pc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24485))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Store(OOC_Doc__PreCond pc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24619))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24602)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Load(OOC_Doc__PreCond pc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24762)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24850))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24869)))), &_td_OOC_Doc__BlockElementDesc, 24869));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24814))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitPostCond(OOC_Doc__PostCond pc, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)pc;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)blockList;
  *(OOC_INT32*)((_check_pointer(i1, 25039))+20) = i0;
  return;
  ;
}

OOC_Doc__PostCond OOC_Doc__NewPostCond(OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__PostCond.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)blockList;
  OOC_Doc__InitPostCond((OOC_Doc__PostCond)i0, i1, (OOC_Doc__BlockElement)i2);
  return (OOC_Doc__PostCond)i0;
  ;
}

void OOC_Doc__PostCondDesc_NodeName(OOC_Doc__PostCond pc, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"post-cond",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Normalize(OOC_Doc__PostCond pc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)pc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25475))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Store(OOC_Doc__PostCond pc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25610))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25593)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Load(OOC_Doc__PostCond pc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25754)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 25842))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25861)))), &_td_OOC_Doc__BlockElementDesc, 25861));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 25806))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitItem(OOC_Doc__Item item, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)item;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)blockList;
  *(OOC_INT32*)((_check_pointer(i1, 26029))+20) = i0;
  return;
  ;
}

OOC_Doc__Item OOC_Doc__NewItem(OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Item.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)blockList;
  OOC_Doc__InitItem((OOC_Doc__Item)i0, i1, (OOC_Doc__BlockElement)i2);
  return (OOC_Doc__Item)i0;
  ;
}

void OOC_Doc__ItemDesc_NodeName(OOC_Doc__Item item, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"item",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ItemDesc_Normalize(OOC_Doc__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26443))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26483))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 26505))+16) = OOC_TRUE;
  return;
  ;
}

void OOC_Doc__ItemDesc_Store(OOC_Doc__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)item;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26648))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26629)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__ItemDesc_Load(OOC_Doc__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26792)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26884))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26903)))), &_td_OOC_Doc__BlockElementDesc, 26903));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26846))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitItemize(OOC_Doc__Itemize i, OOC_CHAR8 padAfter, OOC_Doc__InlineElement mark, OOC_Doc__Item text, OOC_Doc__BlockElement itemList) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)i;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)mark;
  *(OOC_INT32*)((_check_pointer(i1, 27123))+20) = i0;
  i0 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i1, 27144))+24) = i0;
  i0 = (OOC_INT32)itemList;
  *(OOC_INT32*)((_check_pointer(i1, 27165))+28) = i0;
  return;
  ;
}

OOC_Doc__Itemize OOC_Doc__NewItemize(OOC_CHAR8 padAfter, OOC_Doc__InlineElement mark, OOC_Doc__Item text, OOC_Doc__BlockElement itemList) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Itemize.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)mark;
  i3 = (OOC_INT32)text;
  i4 = (OOC_INT32)itemList;
  OOC_Doc__InitItemize((OOC_Doc__Itemize)i0, i1, (OOC_Doc__InlineElement)i2, (OOC_Doc__Item)i3, (OOC_Doc__BlockElement)i4);
  return (OOC_Doc__Itemize)i0;
  ;
}

void OOC_Doc__ItemizeDesc_NodeName(OOC_Doc__Itemize i, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"itemize",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Normalize(OOC_Doc__Itemize i) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27648))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 27683))+20));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27701))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27727))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27727))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27733)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27779))+28);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27815))+28);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Store(OOC_Doc__Itemize i, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)i;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27945))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27929)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27975))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27959)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28005))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27989)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Load(OOC_Doc__Itemize i, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28145)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28226))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28240)))), &_td_OOC_Doc__InlineElementDesc, 28240));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28196))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28269)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 28350))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28364)))), &_td_OOC_Doc__ItemDesc, 28364));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 28320))+24) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28384)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 28469))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28487)))), &_td_OOC_Doc__BlockElementDesc, 28487));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 28435))+28) = (OOC_INT32)0;
l12:
  return;
  ;
}

static void OOC_Doc__InitFirstColumn(OOC_Doc__FirstColumn fc, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)fc;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i1, 28666))+20) = i0;
  return;
  ;
}

OOC_Doc__FirstColumn OOC_Doc__NewFirstColumn(OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__FirstColumn.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)inlineText;
  OOC_Doc__InitFirstColumn((OOC_Doc__FirstColumn)i0, i1, (OOC_Doc__InlineElement)i2);
  return (OOC_Doc__FirstColumn)i0;
  ;
}

void OOC_Doc__FirstColumnDesc_NodeName(OOC_Doc__FirstColumn fc, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"table-first-column",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Normalize(OOC_Doc__FirstColumn fc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29139))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 29181))+20));
  *(OOC_UINT8*)((_check_pointer(i0, 29202))+16) = OOC_FALSE;
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Store(OOC_Doc__FirstColumn fc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29347))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29330)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Load(OOC_Doc__FirstColumn fc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29495)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 29584))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29604)))), &_td_OOC_Doc__InlineElementDesc, 29604));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 29547))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitTableRow(OOC_Doc__TableRow tr, OOC_CHAR8 padAfter, OOC_Doc__BlockElement firstColumnList, OOC_Doc__Item item) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)tr;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)firstColumnList;
  *(OOC_INT32*)((_check_pointer(i1, 29817))+20) = i0;
  i0 = (OOC_INT32)item;
  *(OOC_INT32*)((_check_pointer(i1, 29861))+24) = i0;
  return;
  ;
}

OOC_Doc__TableRow OOC_Doc__NewTableRow(OOC_CHAR8 padAfter, OOC_Doc__BlockElement firstColumnList, OOC_Doc__Item item) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__TableRow.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)firstColumnList;
  i3 = (OOC_INT32)item;
  OOC_Doc__InitTableRow((OOC_Doc__TableRow)i0, i1, (OOC_Doc__BlockElement)i2, (OOC_Doc__Item)i3);
  return (OOC_Doc__TableRow)i0;
  ;
}

void OOC_Doc__TableRowDesc_NodeName(OOC_Doc__TableRow tr, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"table-row",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__TableRowDesc_Normalize(OOC_Doc__TableRow tr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30343))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30369))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30369))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30375)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30394))+24);
  *(OOC_UINT8*)((_check_pointer(i1, 30400))+16) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 30427))+16) = OOC_TRUE;
  return;
  ;
}

void OOC_Doc__TableRowDesc_Store(OOC_Doc__TableRow tr, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)tr;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30568))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30551)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30610))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30593)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__TableRowDesc_Load(OOC_Doc__TableRow tr, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30750)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 30844))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30869)))), &_td_OOC_Doc__BlockElementDesc, 30869));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 30802))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30897)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 30980))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30994)))), &_td_OOC_Doc__ItemDesc, 30994));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 30949))+24) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitTable(OOC_Doc__Table t, OOC_CHAR8 padAfter, OOC_Doc__BlockElement rowList) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)t;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)rowList;
  *(OOC_INT32*)((_check_pointer(i1, 31146))+20) = i0;
  return;
  ;
}

OOC_Doc__Table OOC_Doc__NewTable(OOC_CHAR8 padAfter, OOC_Doc__BlockElement rowList) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Table.baseTypes[0]);
  i1 = padAfter;
  i2 = (OOC_INT32)rowList;
  OOC_Doc__InitTable((OOC_Doc__Table)i0, i1, (OOC_Doc__BlockElement)i2);
  return (OOC_Doc__Table)i0;
  ;
}

void OOC_Doc__TableDesc_NodeName(OOC_Doc__Table t, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"table",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__TableDesc_Normalize(OOC_Doc__Table t) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31539))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31574))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__TableDesc_Store(OOC_Doc__Table t, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)t;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31701))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31685)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__TableDesc_Load(OOC_Doc__Table t, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31838)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 31922))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31939)))), &_td_OOC_Doc__BlockElementDesc, 31939));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 31889))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static OOC_Doc__InlineElement OOC_Doc__ExtractSummary(OOC_Doc__BlockElement block) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 done;
  auto OOC_Doc__InlineElement OOC_Doc__ExtractSummary_Extract(OOC_Doc__InlineElement inlineList);
    
    OOC_Doc__InlineElement OOC_Doc__ExtractSummary_Extract(OOC_Doc__InlineElement inlineList) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_Doc__InlineList resultList;
      OOC_Doc__InlineElement _inline;
      OOC_Doc__Text newText;
      OOC_INT32 i;
      auto OOC_INT32 OOC_Doc__ExtractSummary_Extract_EndOfSummary(OOC_CHAR8 str[], OOC_LEN str_0d);
        
        OOC_INT32 OOC_Doc__ExtractSummary_Extract_EndOfSummary(OOC_CHAR8 str[], OOC_LEN str_0d) {
          register OOC_INT32 i0,i1;

          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 32349)));
          i0 = i0!=(OOC_CHAR8)'\000';
          if (!i0) goto l15;
          i0=0;
l3_loop:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 32379)));
          i1 = i1==(OOC_CHAR8)'.';
          i0 = i0+1;
          if (i1) goto l6;
          i1=OOC_FALSE;
          goto l8;
l6:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 32396)));
          i1 = i1==(OOC_CHAR8)' ';
          
l8:
          if (!i1) goto l10;
          return i0;
l10:
          i = i0;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 32349)));
          i1 = i1!=(OOC_CHAR8)'\000';
          if (i1) goto l3_loop;
l15:
          return -1;
          ;
        }


      i0 = (OOC_INT32)OOC_Doc__NewInlineList();
      resultList = (OOC_Doc__InlineList)i0;
      i0 = (OOC_INT32)inlineList;
      _inline = (OOC_Doc__InlineElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = done;
      i1 = !i1;
      
l5:
      if (!i1) goto l43;
      i1 = (OOC_INT32)&_td_OOC_Doc__Position;
      
l7_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32662)))), &_td_OOC_Doc__GlyphDesc);
      if (i2) goto l33;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32744)))), &_td_OOC_Doc__TextDesc);
      if (i2) goto l28;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33023)))), &_td_OOC_Doc__OberonRefDesc);
      if (i2) goto l26;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33306)))), &_td_OOC_Doc__MarkedInlineDesc);
      if (i2) goto l24;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33479)))), &_td_OOC_Doc__EmailDesc);
      if (i2) goto l22;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33583)))), &_td_OOC_Doc__UrefDesc);
      if (i2) goto l20;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33575)))), 33575);
      goto l34;
l20:
      i2 = (OOC_INT32)resultList;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33638))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33651))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33704))+24);
      i0 = (OOC_INT32)OOC_Doc__NewUref((OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i4, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33613)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l22:
      i2 = (OOC_INT32)resultList;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33536))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33553))+20);
      i0 = (OOC_INT32)OOC_Doc__NewEmail((OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33510)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l24:
      i2 = (OOC_INT32)resultList;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33377))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33447))+20);
      i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)OOC_Doc__NewMarkedInline(i3, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33344)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l26:
      i2 = (OOC_INT32)resultList;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33088))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33155))+20);
      i4 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33220))+24);
      i3 = (OOC_INT32)OOC_Doc__NewOberonRef(i3, (OOC_Doc__InlineElement)i4, (ADT_Storable__Object)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33058)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i3);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33252))+4);
      _copy_block((_check_pointer(i0, 33284)),(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33259)))), &_td_OOC_Doc__OberonRefDesc, 33259)), 33269)),12);
      goto l34;
l28:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32790))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32790))+16);
      i4 = _check_pointer(i0, 32807);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 32798)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i2, 32798)), i3, (void*)(_check_pointer(i0, 32807)), (RT0__Struct)i1);
      newText = (OOC_Doc__Text)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32851))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32851))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32859)), (OOC_INT32)0);
      i0 = OOC_Doc__ExtractSummary_Extract_EndOfSummary((void*)(_check_pointer(i2, 32859)), i0);
      i = i0;
      i2 = i0>=0;
      i3 = (OOC_INT32)newText;
      if (!i2) goto l31;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32909))+16);
      i2 = _check_pointer(i2, 32917);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_UINT8*)(i2+(_check_index(i0, i4, OOC_UINT32, 32917))) = (OOC_CHAR8)'\000';
      done = OOC_TRUE;
l31:
      i0 = (OOC_INT32)resultList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32988)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i0, (OOC_Doc__InlineElement)i3);
      goto l34;
l33:
      i2 = (OOC_INT32)resultList;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32719))+16);
      i0 = (OOC_INT32)OOC_Doc__NewGlyph(i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32693)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
l34:
      i0 = (OOC_INT32)_inline;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33757))+12);
      _inline = (OOC_Doc__InlineElement)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l37;
      i2=OOC_FALSE;
      goto l39;
l37:
      i2 = done;
      i2 = !i2;
      
l39:
      if (i2) goto l7_loop;
l43:
      i0 = (OOC_INT32)resultList;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 33804));
      return (OOC_Doc__InlineElement)i0;
      ;
    }


  i0 = (OOC_INT32)block;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33869)))), &_td_OOC_Doc__ParagraphDesc);
  
l5:
  if (i1) goto l7;
  return (OOC_Doc__InlineElement)(OOC_INT32)0;
  goto l8;
l7:
  done = OOC_FALSE;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33937)))), &_td_OOC_Doc__ParagraphDesc, 33937)), 33947))+20);
  i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
  return (OOC_Doc__InlineElement)i0;
l8:
  _failed_function(31985); return 0;
  ;
}

OOC_Doc__Document OOC_Doc__NewDocument(OOC_Doc__BlockElement blockList, OOC_Doc_Decoration__Decoration decoration, OOC_INT32 firstColumn) {
  register OOC_INT32 i0,i1;
  OOC_Doc__Document d;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Document.baseTypes[0]);
  d = (OOC_Doc__Document)i0;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)(_check_pointer(i0, 34256)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 34287))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)decoration;
  *(OOC_INT32*)((_check_pointer(i0, 34310))+8) = i1;
  i1 = firstColumn;
  *(OOC_INT32*)((_check_pointer(i0, 34343))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 34378))+16) = (OOC_INT32)0;
  return (OOC_Doc__Document)i0;
  ;
}

void OOC_Doc__DocumentDesc_AddUsedImport(OOC_Doc__Document d, ADT_Storable__Object importDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34546))+16);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)ADT_ArrayList__New(2);
  *(OOC_INT32*)((_check_pointer(i0, 34583))+16) = i1;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34650))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 34667))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)importDecl;
  if (!i2) goto l14;
  i2=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34690))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 34707));
  i4 = _check_pointer(i4, 34714);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 34714))*4);
  i4 = i4==i3;
  if (!i4) goto l9;
  return;
l9:
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l6_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34776))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34776))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34793)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i3);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Store(OOC_Doc__Document d, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)d;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34919));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34903)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34954))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34938)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Load(OOC_Doc__Document d, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35143)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  i3 = (OOC_INT32)d;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i3, 35229)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35248)))), &_td_OOC_Doc__BlockElementDesc, 35248));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i3, 35194)) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35276)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l7;
  *(OOC_INT32*)((_check_pointer(i3, 35360))+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35377)))), &_td_OOC_Doc__InlineElementDesc, 35377));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i3, 35327))+4) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i3, 35406))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 35432))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i3, 35457))+16) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Normalize(OOC_Doc__Document doc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35569));
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35622));
  i1 = (OOC_INT32)OOC_Doc__ExtractSummary((OOC_Doc__BlockElement)i1);
  *(OOC_INT32*)((_check_pointer(i0, 35590))+4) = i1;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Merge(OOC_Doc__Document doc, OOC_Doc__Document source) {
  register OOC_INT32 i0,i1;
  OOC_Doc__BlockElement last;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35755));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35865));
  i0 = (OOC_INT32)OOC_Doc__LastBlockElement((OOC_Doc__BlockElement)i0);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35910));
  *(OOC_INT32*)((_check_pointer(i0, 35889))+12) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35809));
  *(OOC_INT32*)(_check_pointer(i0, 35788)) = i1;
l4:
  return;
  ;
}

void OOC_OOC_Doc_init(void) {

  return;
  ;
}

/* --- */
