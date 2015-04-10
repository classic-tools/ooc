#include "OOC/Doc.d"
#include "__oo2c.h"

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
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 6482)) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6506))+4) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6530))+8) = -1;
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

void OOC_Doc__ElementDesc_Store(OOC_Doc__Element e, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)w;
  ADT_Object__ObjectDesc_Store((ADT_Object__Object)i0, (ADT_Object__Writer)i1);
  return;
  ;
}

void OOC_Doc__ElementDesc_Load(OOC_Doc__Element e, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  i1 = (OOC_INT32)r;
  ADT_Object__ObjectDesc_Load((ADT_Object__Object)i0, (ADT_Object__Reader)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7242))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7279))+12);
  i = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7242))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l11:
  i1 = (OOC_INT32)src;
  *(OOC_INT32*)((_check_pointer(i0, 7310))+12) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 7440))+12) = (OOC_INT32)0;
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

void OOC_Doc__InlineElementDesc_Store(OOC_Doc__InlineElement e, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7714))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7698)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__InlineElementDesc_Load(OOC_Doc__InlineElement e, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7858)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7945))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7965)))), &_td_OOC_Doc__InlineElementDesc, 7965));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 7909))+12) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitBlockElement(OOC_Doc__BlockElement e, OOC_CHAR8 padAfter) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  *(OOC_INT32*)((_check_pointer(i0, 8102))+12) = (OOC_INT32)0;
  i1 = padAfter;
  *(OOC_UINT8*)((_check_pointer(i0, 8127))+16) = i1;
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Store(OOC_Doc__BlockElement e, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8278))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8262)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8311))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8297)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Load(OOC_Doc__BlockElement e, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8452)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 8538))+12) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8557)))), &_td_OOC_Doc__BlockElementDesc, 8557));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 8503))+12) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8585)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 8598))+16));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8904)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8937))+12);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9083))+12);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l9;
l4_loop:
  i0 = (OOC_INT32)list;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9125))+12);
  list = (OOC_Doc__BlockElement)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9083))+12);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l4_loop;
l9:
  i0 = (OOC_INT32)list;
  *(OOC_UINT8*)((_check_pointer(i0, 9158))+16) = OOC_FALSE;
l10:
  return;
  ;
}

OOC_Doc__InlineList OOC_Doc__NewInlineList() {
  register OOC_INT32 i0;
  OOC_Doc__InlineList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__InlineList.baseTypes[0]);
  il = (OOC_Doc__InlineList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 9310)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 9331))+4) = (OOC_INT32)0;
  return (OOC_Doc__InlineList)i0;
  ;
}

void OOC_Doc__InlineListDesc_Append(OOC_Doc__InlineList il, OOC_Doc__InlineElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 9474))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)il;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9505));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9573))+4);
  *(OOC_INT32*)((_check_pointer(i2, 9579))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 9532)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 9624))+4) = i0;
  return;
  ;
}

OOC_Doc__BlockList OOC_Doc__NewBlockList() {
  register OOC_INT32 i0;
  OOC_Doc__BlockList bl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__BlockList.baseTypes[0]);
  bl = (OOC_Doc__BlockList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 9755)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 9776))+4) = (OOC_INT32)0;
  return (OOC_Doc__BlockList)i0;
  ;
}

void OOC_Doc__BlockListDesc_Append(OOC_Doc__BlockList bl, OOC_Doc__BlockElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 9916))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)bl;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9946));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10014))+4);
  *(OOC_INT32*)((_check_pointer(i2, 10020))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 9973)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 10064))+4) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10275)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10300)))), &_td_OOC_Doc__TextDesc);
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10314)))), &_td_OOC_Doc__TextDesc, 10314)), 10319))+16);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 10327)),(const void*)""))==0;
  
l8:
  if (i2) goto l10;
  prev = (OOC_Doc__InlineElement)i0;
  i1=i0;
  goto l15;
l10:
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10657))+12);
  *(OOC_INT32*)((_check_pointer(i1, 10640))+12) = i2;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10600))+12);
  *blockList = (OOC_Doc__InlineElement)i2;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10734))+12);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10933))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10974))+12);
  last = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10933))+12);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11182))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11222))+12);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11182))+12);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11422)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)inlineText;
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11493)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11719)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11790)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
l4:
  return;
  ;
}

static void OOC_Doc__InitGlyph(OOC_Doc__Glyph glyph, OOC_INT32 glyphCode) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)glyph;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = glyphCode;
  *(OOC_INT32*)((_check_pointer(i0, 12022))+16) = i1;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12310))+16);
  switch (i0) {
  case 0:
    _copy_8("bullet",(OOC_INT32)name,name_0d);
    goto l10;
  case 1:
    _copy_8("dots",(OOC_INT32)name,name_0d);
    goto l10;
  case 2:
    _copy_8("minus",(OOC_INT32)name,name_0d);
    goto l10;
  case 3:
    _copy_8("em-dash",(OOC_INT32)name,name_0d);
    goto l10;
  case 4:
    _copy_8("result",(OOC_INT32)name,name_0d);
    goto l10;
  case 5:
    _copy_8("left-quote",(OOC_INT32)name,name_0d);
    goto l10;
  case 6:
    _copy_8("right-quote",(OOC_INT32)name,name_0d);
    goto l10;
  default:
    _failed_case(i0, 12300);
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

void OOC_Doc__GlyphDesc_Store(OOC_Doc__Glyph glyph, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)glyph;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Object__Writer)i0);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 12801))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12784)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__GlyphDesc_Load(OOC_Doc__Glyph glyph, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)glyph;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12909)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 12925))+16));
  return;
  ;
}

static void OOC_Doc__InitText(OOC_Doc__Text text, struct OOC_Doc__Position *pos, RT0__Struct pos__tag, OOC_CHAR8 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)text;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  _copy_block((OOC_INT32)pos,(_check_pointer(i0, 13072)),12);
  i1 = Strings__Length((void*)(OOC_INT32)string, string_0d);
  *(OOC_INT32*)((_check_pointer(i0, 13099))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13159))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13159))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13167)), 0);
  _copy_8((OOC_INT32)string,(_check_pointer(i1, 13167)),i0);
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

  _copy_8("text",(OOC_INT32)name,name_0d);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13763))+16);
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i = 0;
  delta = 0;
  dotExt = 0;
  i2 = _check_pointer(i1, 13818);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 13818)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3;
  i2=0;i3=0;i4=0;
  goto l54;
l3:
  i2=0;i3=0;i4=0;
l4_loop:
  i5 = _check_pointer(i1, 13842);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13842)));
  i5 = i5<=(OOC_CHAR8)' ';
  if (i5) goto l31;
  i5 = _check_pointer(i1, 13997);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13997)));
  i5 = i5==(OOC_CHAR8)'.';
  if (i5) goto l9;
  i5 = _check_pointer(i1, 14492);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i1, 14506);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14506)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14492))) = i7;
  i2 = i2+1;
  i = i2;
  
  goto l49;
l9:
  i5 = _check_pointer(i1, 14022);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i1, 14036);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14036)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14022))) = i7;
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 14063);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14063)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l12;
  i5=OOC_FALSE;
  goto l14;
l12:
  i5 = _check_pointer(i1, 14077);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14077)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l14:
  if (i5) goto l16;
  i5=OOC_FALSE;
  goto l18;
l16:
  i5 = _check_pointer(i1, 14105);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14105)));
  i5 = i5!=(OOC_CHAR8)'\000';
  
l18:
  if (i5) goto l20;
  i5=OOC_FALSE;
  goto l22;
l20:
  i5 = _check_pointer(i1, 14121);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14121)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l22:
  if (i5) goto l28;
  i5 = _check_pointer(i1, 14215);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14215)));
  i5 = i5==(OOC_CHAR8)'\012';
  if (!i5) goto l49;
  i5 = _check_pointer(i1, 14421);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14421))) = (OOC_CHAR8)'\001';
  i2 = i2+1;
  i = i2;
  i4 = i4+1;
  dotExt = i4;
  
  goto l49;
l28:
  i5 = _check_pointer(i1, 14151);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14151))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i = i2;
  
  goto l49;
l31:
  i5 = _check_pointer(i1, 13868);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 13868))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 13911);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13911)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l34;
  i5=OOC_FALSE;
  goto l36;
l34:
  i5 = _check_pointer(i1, 13925);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13925)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l36:
  if (!i5) goto l49;
l39_loop:
  i2 = i2+1;
  i = i2;
  i3 = i3+1;
  delta = i3;
  i5 = _check_pointer(i1, 13911);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13911)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l42;
  i5=OOC_FALSE;
  goto l44;
l42:
  i5 = _check_pointer(i1, 13925);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13925)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l44:
  if (i5) goto l39_loop;
l49:
  i5 = _check_pointer(i1, 13818);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 13818)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l4_loop;
l54:
  i5 = _check_pointer(i1, 14543);
  i2 = i2-i3;
  i3 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index(i2, i3, OOC_UINT32, 14543))) = (OOC_CHAR8)'\000';
  i = i2;
  i3 = i2+i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14607)), 0);
  i5 = i3>=i5;
  if (i5) goto l57;
  ns = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0=i1;
  goto l58;
l57:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i3+1));
  ns = (OOC_Scanner_InputBuffer__CharArray)i3;
  *(OOC_INT32*)((_check_pointer(i0, 14654))+16) = i3;
  i0=i3;
l58:
  i3 = i2>=0;
  if (!i3) goto l70;
  i3=i4;
l61_loop:
  i4 = _check_pointer(i1, 14734);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 14734)));
  i4 = i4==(OOC_CHAR8)'\001';
  if (i4) goto l64;
  i4 = _check_pointer(i0, 14866);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i1, 14881);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 14881)));
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 14866))) = i6;
  i2 = i2-1;
  i = i2;
  
  goto l65;
l64:
  i4 = _check_pointer(i0, 14759);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 14759))) = (OOC_CHAR8)' ';
  i3 = i3-1;
  dotExt = i3;
  i4 = _check_pointer(i0, 14810);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 14810))) = (OOC_CHAR8)' ';
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15031))+16);
  i1 = _check_pointer(i1, 15039);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15039)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15056))+16);
  i1 = _check_pointer(i1, 15064);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15064)));
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15031))+16);
  i2 = _check_pointer(i2, 15039);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15039)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15056))+16);
  i2 = _check_pointer(i2, 15064);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15064)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15126))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15126))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15134)), 0);
  Strings__Delete((void*)(_check_pointer(i2, 15134)), i0, 0, i1);
  return;
  ;
}

void OOC_Doc__TextDesc_StripTailWS(OOC_Doc__Text text) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15266))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15266))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15274)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 15274)), i2);
  i2 = i1!=0;
  i = i1;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15303))+16);
  i2 = _check_pointer(i2, 15311);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15311)));
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15303))+16);
  i2 = _check_pointer(i2, 15311);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15311)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l13:
  if (i2) goto l8_loop;
l17:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15359))+16);
  i0 = _check_pointer(i0, 15367);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 15367))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void OOC_Doc__TextDesc_Store(OOC_Doc__Text text, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)text;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Object__Writer)i0);
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15526))+16);
  i2 = _check_pointer(i2, 15534);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 15534)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3;
  i2=0;
  goto l9;
l3:
  i2=0;
l4_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15526))+16);
  i3 = _check_pointer(i3, 15534);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 15534)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l4_loop;
l9:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15575)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15615))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15615))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15623)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15596)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i0, (void*)(_check_pointer(i2, 15623)), i1);
  return;
  ;
}

void OOC_Doc__TextDesc_Load(OOC_Doc__Text text, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)text;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15747)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 15777))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15818))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15818))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15826)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15800)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 15826)), i1);
  return;
  ;
}

static void OOC_Doc__InitMarkedInline(OOC_Doc__MarkedInline mi, OOC_INT32 mark, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = mark;
  *(OOC_INT32*)((_check_pointer(i0, 16002))+16) = i1;
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 16024))+20) = i1;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 16379))+16);
  switch (i0) {
  case 0:
    _copy_8("asis",(OOC_INT32)name,name_0d);
    goto l21;
  case 1:
    _copy_8("cite",(OOC_INT32)name,name_0d);
    goto l21;
  case 2:
    _copy_8("code",(OOC_INT32)name,name_0d);
    goto l21;
  case 3:
    _copy_8("dfn",(OOC_INT32)name,name_0d);
    goto l21;
  case 4:
    _copy_8("emph",(OOC_INT32)name,name_0d);
    goto l21;
  case 5:
    _copy_8("file",(OOC_INT32)name,name_0d);
    goto l21;
  case 6:
    _copy_8("kbd",(OOC_INT32)name,name_0d);
    goto l21;
  case 7:
    _copy_8("samp",(OOC_INT32)name,name_0d);
    goto l21;
  case 8:
    _copy_8("strong",(OOC_INT32)name,name_0d);
    goto l21;
  case 9:
    _copy_8("var",(OOC_INT32)name,name_0d);
    goto l21;
  case 10:
    _copy_8("url",(OOC_INT32)name,name_0d);
    goto l21;
  case 11:
    _copy_8("oberon-module",(OOC_INT32)name,name_0d);
    goto l21;
  case 12:
    _copy_8("oberon-const",(OOC_INT32)name,name_0d);
    goto l21;
  case 13:
    _copy_8("oberon-field",(OOC_INT32)name,name_0d);
    goto l21;
  case 14:
    _copy_8("oberon-param",(OOC_INT32)name,name_0d);
    goto l21;
  case 15:
    _copy_8("oberon-proc",(OOC_INT32)name,name_0d);
    goto l21;
  case 16:
    _copy_8("oberon-type",(OOC_INT32)name,name_0d);
    goto l21;
  case 17:
    _copy_8("oberon-var",(OOC_INT32)name,name_0d);
    goto l21;
  default:
    _failed_case(i0, 16372);
    goto l21;
  }
l21:
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Normalize(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mi;
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 17233))+20));
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripHeadWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17321))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17321))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17333)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripTailWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)mi;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17481))+20);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17504)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Store(OOC_Doc__MarkedInline mi, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)mi;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Object__Writer)i0);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 17641))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17627)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17672))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17655)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Load(OOC_Doc__MarkedInline mi, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17817)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 17830))+16));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17844)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 17933))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17953)))), &_td_OOC_Doc__InlineElementDesc, 17953));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 17896))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitOberonRef(OOC_Doc__OberonRef or, OOC_INT32 mark, OOC_Doc__InlineElement inlineText, ADT_Object__Object target) {
  register OOC_INT32 i0,i1,i2;

  i0 = mark;
  i1 = (OOC_INT32)inlineText;
  i2 = (OOC_INT32)or;
  OOC_Doc__InitMarkedInline((OOC_Doc__MarkedInline)i2, i0, (OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)target;
  *(OOC_INT32*)((_check_pointer(i2, 18205))+24) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 18231))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 18262))+32) = (OOC_INT32)0;
  return;
  ;
}

OOC_Doc__MarkedInline OOC_Doc__NewOberonRef(OOC_INT32 mark, OOC_Doc__InlineElement inlineText, ADT_Object__Object target) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__OberonRef.baseTypes[0]);
  i1 = mark;
  i2 = (OOC_INT32)inlineText;
  i3 = (OOC_INT32)target;
  OOC_Doc__InitOberonRef((OOC_Doc__OberonRef)i0, i1, (OOC_Doc__InlineElement)i2, (ADT_Object__Object)i3);
  return (OOC_Doc__MarkedInline)i0;
  ;
}

void OOC_Doc__OberonRefDesc_SetTarget(OOC_Doc__OberonRef or, ADT_Object__Object targetDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)targetDecl;
  *(OOC_INT32*)((_check_pointer(i0, 18647))+24) = i1;
  return;
  ;
}

void OOC_Doc__OberonRefDesc_SetExternalTarget(OOC_Doc__OberonRef or, OOC_Scanner_InputBuffer__CharArray module, OOC_Scanner_InputBuffer__CharArray id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 18784))+28) = i1;
  i1 = (OOC_INT32)id;
  *(OOC_INT32*)((_check_pointer(i0, 18818))+32) = i1;
  return;
  ;
}

void OOC_Doc__OberonRefDesc_Store(OOC_Doc__OberonRef or, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)w;
  OOC_Doc__MarkedInlineDesc_Store((OOC_Doc__MarkedInline)i0, (ADT_Object__Writer)i1);
  return;
  ;
}

void OOC_Doc__OberonRefDesc_Load(OOC_Doc__OberonRef or, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)or;
  OOC_Doc__MarkedInlineDesc_Load((OOC_Doc__MarkedInline)i1, (ADT_Object__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 19103))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 19126))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 19157))+32) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_Doc__InitEmail(OOC_Doc__Email email, OOC_Doc__InlineElement address, OOC_Doc__InlineElement displayed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)email;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)address;
  *(OOC_INT32*)((_check_pointer(i0, 19310))+16) = i1;
  i1 = (OOC_INT32)displayed;
  *(OOC_INT32*)((_check_pointer(i0, 19341))+20) = i1;
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

  _copy_8("email",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__EmailDesc_Normalize(OOC_Doc__Email email) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19754))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19789))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__EmailDesc_Store(OOC_Doc__Email email, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)email;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19928))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19908)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19965))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19945)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__EmailDesc_Load(OOC_Doc__Email email, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20108)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20200))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20217)))), &_td_OOC_Doc__InlineElementDesc, 20217));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20163))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20246)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 20340))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20359)))), &_td_OOC_Doc__InlineElementDesc, 20359));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 20301))+20) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitUref(OOC_Doc__Uref uref, OOC_Doc__InlineElement url, OOC_Doc__InlineElement text, OOC_Doc__InlineElement replacement) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uref;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)url;
  *(OOC_INT32*)((_check_pointer(i0, 20514))+16) = i1;
  i1 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i0, 20536))+20) = i1;
  i1 = (OOC_INT32)replacement;
  *(OOC_INT32*)((_check_pointer(i0, 20560))+24) = i1;
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

  _copy_8("uref",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__UrefDesc_Normalize(OOC_Doc__Uref uref) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20969))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20999))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21030))+24);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__UrefDesc_Store(OOC_Doc__Uref uref, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)uref;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21167))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21148)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21199))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21180)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21232))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21213)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__UrefDesc_Load(OOC_Doc__Uref uref, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21375)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 21461))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21474)))), &_td_OOC_Doc__InlineElementDesc, 21474));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 21429))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21503)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 21590))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21604)))), &_td_OOC_Doc__InlineElementDesc, 21604));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 21557))+20) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21633)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 21727))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21748)))), &_td_OOC_Doc__InlineElementDesc, 21748));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 21687))+24) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 21940))+20) = i0;
  i0 = noIndent;
  *(OOC_UINT8*)((_check_pointer(i1, 21973))+24) = i0;
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

  _copy_8("p",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Normalize(OOC_Doc__Paragraph p) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22431))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 22472))+20));
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Store(OOC_Doc__Paragraph p, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)p;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22604))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22588)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 22638))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22624)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Load(OOC_Doc__Paragraph p, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)p;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22776)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 22863))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22883)))), &_td_OOC_Doc__InlineElementDesc, 22883));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 22827))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22912)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 22925))+24));
  return;
  ;
}

static void OOC_Doc__InitExample(OOC_Doc__Example ex, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)ex;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i1, 23085))+20) = i0;
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

  _copy_8("example",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ExampleDesc_Normalize(OOC_Doc__Example ex) {

  return;
  ;
}

void OOC_Doc__ExampleDesc_Store(OOC_Doc__Example ex, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ex;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23601))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23584)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__ExampleDesc_Load(OOC_Doc__Example ex, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)ex;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23741)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 23830))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23850)))), &_td_OOC_Doc__InlineElementDesc, 23850));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 23793))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 24019))+20) = i0;
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

  _copy_8("pre-cond",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Normalize(OOC_Doc__PreCond pc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)pc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24446))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Store(OOC_Doc__PreCond pc, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24578))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24561)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Load(OOC_Doc__PreCond pc, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24717)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24805))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24824)))), &_td_OOC_Doc__BlockElementDesc, 24824));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24769))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 24994))+20) = i0;
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

  _copy_8("post-cond",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Normalize(OOC_Doc__PostCond pc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)pc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25430))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Store(OOC_Doc__PostCond pc, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25563))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25546)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Load(OOC_Doc__PostCond pc, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25703)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 25791))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25810)))), &_td_OOC_Doc__BlockElementDesc, 25810));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 25755))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 25978))+20) = i0;
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

  _copy_8("item",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ItemDesc_Normalize(OOC_Doc__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26392))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26432))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 26454))+16) = OOC_TRUE;
  return;
  ;
}

void OOC_Doc__ItemDesc_Store(OOC_Doc__Item item, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)item;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26595))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26576)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__ItemDesc_Load(OOC_Doc__Item item, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26735)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26827))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26846)))), &_td_OOC_Doc__BlockElementDesc, 26846));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26789))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 27066))+20) = i0;
  i0 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i1, 27087))+24) = i0;
  i0 = (OOC_INT32)itemList;
  *(OOC_INT32*)((_check_pointer(i1, 27108))+28) = i0;
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

  _copy_8("itemize",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Normalize(OOC_Doc__Itemize i) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27591))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 27626))+20));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27644))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27670))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27670))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27676)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27722))+28);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27758))+28);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Store(OOC_Doc__Itemize i, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)i;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27886))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27870)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27916))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27900)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27946))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27930)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Load(OOC_Doc__Itemize i, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28082)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28163))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28177)))), &_td_OOC_Doc__InlineElementDesc, 28177));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28133))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28206)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 28287))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28301)))), &_td_OOC_Doc__ItemDesc, 28301));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 28257))+24) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28321)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 28406))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28424)))), &_td_OOC_Doc__BlockElementDesc, 28424));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 28372))+28) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 28603))+20) = i0;
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

  _copy_8("table-first-column",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Normalize(OOC_Doc__FirstColumn fc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29076))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 29118))+20));
  *(OOC_UINT8*)((_check_pointer(i0, 29139))+16) = OOC_FALSE;
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Store(OOC_Doc__FirstColumn fc, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29282))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29265)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Load(OOC_Doc__FirstColumn fc, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29426)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 29515))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29535)))), &_td_OOC_Doc__InlineElementDesc, 29535));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 29478))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 29748))+20) = i0;
  i0 = (OOC_INT32)item;
  *(OOC_INT32*)((_check_pointer(i1, 29792))+24) = i0;
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

  _copy_8("table-row",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__TableRowDesc_Normalize(OOC_Doc__TableRow tr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30274))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30300))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30300))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30306)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30325))+24);
  *(OOC_UINT8*)((_check_pointer(i1, 30331))+16) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 30358))+16) = OOC_TRUE;
  return;
  ;
}

void OOC_Doc__TableRowDesc_Store(OOC_Doc__TableRow tr, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)tr;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30497))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30480)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30539))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30522)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__TableRowDesc_Load(OOC_Doc__TableRow tr, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30675)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 30769))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30794)))), &_td_OOC_Doc__BlockElementDesc, 30794));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 30727))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30822)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 30905))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30919)))), &_td_OOC_Doc__ItemDesc, 30919));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 30874))+24) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 31071))+20) = i0;
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

  _copy_8("table",(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__TableDesc_Normalize(OOC_Doc__Table t) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31464))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31499))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__TableDesc_Store(OOC_Doc__Table t, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)t;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31624))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31608)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__TableDesc_Load(OOC_Doc__Table t, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Object__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31757)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 31841))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31858)))), &_td_OOC_Doc__BlockElementDesc, 31858));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 31808))+20) = (OOC_INT32)0;
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
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 32268)));
          i0 = i0!=(OOC_CHAR8)'\000';
          if (!i0) goto l15;
          i0=0;
l3_loop:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 32298)));
          i1 = i1==(OOC_CHAR8)'.';
          i0 = i0+1;
          if (i1) goto l6;
          i1=OOC_FALSE;
          goto l8;
l6:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 32315)));
          i1 = i1==(OOC_CHAR8)' ';
          
l8:
          if (!i1) goto l10;
          return i0;
l10:
          i = i0;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 32268)));
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
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32581)))), &_td_OOC_Doc__GlyphDesc);
      if (i2) goto l33;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32663)))), &_td_OOC_Doc__TextDesc);
      if (i2) goto l28;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32942)))), &_td_OOC_Doc__OberonRefDesc);
      if (i2) goto l26;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33225)))), &_td_OOC_Doc__MarkedInlineDesc);
      if (i2) goto l24;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33398)))), &_td_OOC_Doc__EmailDesc);
      if (i2) goto l22;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33502)))), &_td_OOC_Doc__UrefDesc);
      if (i2) goto l20;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33494)))), 33494);
      goto l34;
l20:
      i2 = (OOC_INT32)resultList;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33557))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33570))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33623))+24);
      i0 = (OOC_INT32)OOC_Doc__NewUref((OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i4, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33532)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l22:
      i2 = (OOC_INT32)resultList;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33455))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33472))+20);
      i0 = (OOC_INT32)OOC_Doc__NewEmail((OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33429)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l24:
      i2 = (OOC_INT32)resultList;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33296))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33366))+20);
      i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)OOC_Doc__NewMarkedInline(i3, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33263)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l26:
      i2 = (OOC_INT32)resultList;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 33007))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33074))+20);
      i4 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33139))+24);
      i3 = (OOC_INT32)OOC_Doc__NewOberonRef(i3, (OOC_Doc__InlineElement)i4, (ADT_Object__Object)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32977)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i3);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33171))+4);
      _copy_block((_check_pointer(i0, 33203)),(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33178)))), &_td_OOC_Doc__OberonRefDesc, 33178)), 33188)),12);
      goto l34;
l28:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32709))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32709))+16);
      i4 = _check_pointer(i0, 32726);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 32717)), 0);
      i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i2, 32717)), i3, (void*)(_check_pointer(i0, 32726)), (RT0__Struct)i1);
      newText = (OOC_Doc__Text)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32770))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32770))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32778)), 0);
      i0 = OOC_Doc__ExtractSummary_Extract_EndOfSummary((void*)(_check_pointer(i2, 32778)), i0);
      i = i0;
      i2 = i0>=0;
      i3 = (OOC_INT32)newText;
      if (!i2) goto l31;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32828))+16);
      i2 = _check_pointer(i2, 32836);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_UINT8*)(i2+(_check_index(i0, i4, OOC_UINT32, 32836))) = (OOC_CHAR8)'\000';
      done = OOC_TRUE;
l31:
      i0 = (OOC_INT32)resultList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32907)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i0, (OOC_Doc__InlineElement)i3);
      goto l34;
l33:
      i2 = (OOC_INT32)resultList;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 32638))+16);
      i0 = (OOC_INT32)OOC_Doc__NewGlyph(i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32612)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
l34:
      i0 = (OOC_INT32)_inline;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33676))+12);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 33723));
      return (OOC_Doc__InlineElement)i0;
      ;
    }


  i0 = (OOC_INT32)block;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33788)))), &_td_OOC_Doc__ParagraphDesc);
  
l5:
  if (i1) goto l7;
  return (OOC_Doc__InlineElement)(OOC_INT32)0;
  goto l8;
l7:
  done = OOC_FALSE;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33856)))), &_td_OOC_Doc__ParagraphDesc, 33856)), 33866))+20);
  i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
  return (OOC_Doc__InlineElement)i0;
l8:
  _failed_function(31904); return 0;
  ;
}

OOC_Doc__Document OOC_Doc__NewDocument(OOC_Doc__BlockElement blockList, OOC_Doc_Decoration__Decoration decoration, OOC_INT32 firstColumn) {
  register OOC_INT32 i0,i1;
  OOC_Doc__Document d;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Document.baseTypes[0]);
  d = (OOC_Doc__Document)i0;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)(_check_pointer(i0, 34173)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 34204))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)decoration;
  *(OOC_INT32*)((_check_pointer(i0, 34227))+8) = i1;
  i1 = firstColumn;
  *(OOC_INT32*)((_check_pointer(i0, 34260))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 34295))+16) = (OOC_INT32)0;
  return (OOC_Doc__Document)i0;
  ;
}

void OOC_Doc__DocumentDesc_AddUsedImport(OOC_Doc__Document d, ADT_Object__Object importDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34461))+16);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)ADT_ArrayList__New(2);
  *(OOC_INT32*)((_check_pointer(i0, 34498))+16) = i1;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34565))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 34582))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)importDecl;
  if (!i2) goto l14;
  i2=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34605))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 34622));
  i4 = _check_pointer(i4, 34629);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 34629))*4);
  i4 = i4==i3;
  if (!i4) goto l9;
  return;
l9:
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l6_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34691))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34691))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34708)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (ADT_Object__Object)i3);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Store(OOC_Doc__Document d, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)d;
  ADT_Object__ObjectDesc_Store((ADT_Object__Object)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34851));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34835)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34886))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34870)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Load(OOC_Doc__Document d, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)d;
  ADT_Object__ObjectDesc_Load((ADT_Object__Object)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35089)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)(_check_pointer(i1, 35175)) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35194)))), &_td_OOC_Doc__BlockElementDesc, 35194));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 35140)) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35222)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i1, 35306))+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35323)))), &_td_OOC_Doc__InlineElementDesc, 35323));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 35273))+4) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i1, 35352))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 35378))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 35403))+16) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Normalize(OOC_Doc__Document doc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35515));
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35568));
  i1 = (OOC_INT32)OOC_Doc__ExtractSummary((OOC_Doc__BlockElement)i1);
  *(OOC_INT32*)((_check_pointer(i0, 35536))+4) = i1;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Merge(OOC_Doc__Document doc, OOC_Doc__Document source) {
  register OOC_INT32 i0,i1;
  OOC_Doc__BlockElement last;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35701));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35811));
  i0 = (OOC_INT32)OOC_Doc__LastBlockElement((OOC_Doc__BlockElement)i0);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35856));
  *(OOC_INT32*)((_check_pointer(i0, 35835))+12) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35755));
  *(OOC_INT32*)(_check_pointer(i0, 35734)) = i1;
l4:
  return;
  ;
}

void OOC_OOC_Doc_init(void) {

  return;
  ;
}

/* --- */
