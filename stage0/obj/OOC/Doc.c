#include <OOC/Doc.d>
#include <__oo2c.h>
#include <setjmp.h>

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
  *(OOC_INT32*)(_check_pointer(i0, 6776)) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6800))+4) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6824))+8) = -1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7504))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7541))+12);
  i = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7504))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l11:
  i1 = (OOC_INT32)src;
  *(OOC_INT32*)((_check_pointer(i0, 7572))+12) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 7702))+12) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7978))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7962)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__InlineElementDesc_Load(OOC_Doc__InlineElement e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8126)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 8213))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8233)))), &_td_OOC_Doc__InlineElementDesc, 8233));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 8177))+12) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitBlockElement(OOC_Doc__BlockElement e, OOC_CHAR8 padAfter) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  *(OOC_INT32*)((_check_pointer(i0, 8370))+12) = (OOC_INT32)0;
  i1 = padAfter;
  *(OOC_UINT8*)((_check_pointer(i0, 8395))+16) = i1;
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Store(OOC_Doc__BlockElement e, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8548))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8532)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8581))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8567)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Load(OOC_Doc__BlockElement e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)e;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8726)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 8812))+12) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8831)))), &_td_OOC_Doc__BlockElementDesc, 8831));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 8777))+12) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8859)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 8872))+16));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9178)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9211))+12);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9357))+12);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l9;
l4_loop:
  i0 = (OOC_INT32)list;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9399))+12);
  list = (OOC_Doc__BlockElement)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9357))+12);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l4_loop;
l9:
  i0 = (OOC_INT32)list;
  *(OOC_UINT8*)((_check_pointer(i0, 9432))+16) = OOC_FALSE;
l10:
  return;
  ;
}

OOC_Doc__InlineList OOC_Doc__NewInlineList() {
  register OOC_INT32 i0;
  OOC_Doc__InlineList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__InlineList.baseTypes[0]);
  il = (OOC_Doc__InlineList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 9584)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 9605))+4) = (OOC_INT32)0;
  return (OOC_Doc__InlineList)i0;
  ;
}

void OOC_Doc__InlineListDesc_Append(OOC_Doc__InlineList il, OOC_Doc__InlineElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 9748))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)il;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9779));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9847))+4);
  *(OOC_INT32*)((_check_pointer(i2, 9853))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 9806)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 9898))+4) = i0;
  return;
  ;
}

OOC_Doc__BlockList OOC_Doc__NewBlockList() {
  register OOC_INT32 i0;
  OOC_Doc__BlockList bl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__BlockList.baseTypes[0]);
  bl = (OOC_Doc__BlockList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 10029)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 10050))+4) = (OOC_INT32)0;
  return (OOC_Doc__BlockList)i0;
  ;
}

void OOC_Doc__BlockListDesc_Append(OOC_Doc__BlockList bl, OOC_Doc__BlockElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 10190))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)bl;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10220));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10288))+4);
  *(OOC_INT32*)((_check_pointer(i2, 10294))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 10247)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 10338))+4) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10549)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10574)))), &_td_OOC_Doc__TextDesc);
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10588)))), &_td_OOC_Doc__TextDesc, 10588)), 10593))+16);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 10601)),(const void*)""))==(OOC_INT32)0;
  
l8:
  if (i2) goto l10;
  prev = (OOC_Doc__InlineElement)i0;
  i1=i0;
  goto l15;
l10:
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10931))+12);
  *(OOC_INT32*)((_check_pointer(i1, 10914))+12) = i2;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10874))+12);
  *blockList = (OOC_Doc__InlineElement)i2;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11008))+12);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11207))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11248))+12);
  last = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11207))+12);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11456))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11496))+12);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11456))+12);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11696)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)inlineText;
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11767)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11993)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12064)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
l4:
  return;
  ;
}

static void OOC_Doc__InitGlyph(OOC_Doc__Glyph glyph, OOC_INT32 glyphCode) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)glyph;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = glyphCode;
  *(OOC_INT32*)((_check_pointer(i0, 12296))+16) = i1;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12584))+16);
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
    _failed_case(i0, 12574);
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
  i1 = *(OOC_INT32*)((_check_pointer(i1, 13077))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13060)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__GlyphDesc_Load(OOC_Doc__Glyph glyph, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)glyph;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13187)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 13203))+16));
  return;
  ;
}

static void OOC_Doc__InitText(OOC_Doc__Text text, struct OOC_Doc__Position *pos, RT0__Struct pos__tag, OOC_CHAR8 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)text;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  _copy_block((OOC_INT32)pos,(_check_pointer(i0, 13350)),12);
  i1 = Strings__Length((void*)(OOC_INT32)string, string_0d);
  *(OOC_INT32*)((_check_pointer(i0, 13377))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13437))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13437))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13445)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)string,(void*)(_check_pointer(i1, 13445)),i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14041))+16);
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i = 0;
  delta = 0;
  dotExt = 0;
  i2 = _check_pointer(i1, 14096);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 14096)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3;
  i2=0;i3=0;i4=0;
  goto l54;
l3:
  i2=0;i3=0;i4=0;
l4_loop:
  i5 = _check_pointer(i1, 14120);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14120)));
  i5 = i5<=(OOC_CHAR8)' ';
  if (i5) goto l31;
  i5 = _check_pointer(i1, 14275);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14275)));
  i5 = i5==(OOC_CHAR8)'.';
  if (i5) goto l9;
  i5 = _check_pointer(i1, 14770);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i1, 14784);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14784)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14770))) = i7;
  i2 = i2+1;
  i = i2;
  
  goto l49;
l9:
  i5 = _check_pointer(i1, 14300);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i1, 14314);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14314)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14300))) = i7;
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 14341);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14341)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l12;
  i5=OOC_FALSE;
  goto l14;
l12:
  i5 = _check_pointer(i1, 14355);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14355)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l14:
  if (i5) goto l16;
  i5=OOC_FALSE;
  goto l18;
l16:
  i5 = _check_pointer(i1, 14383);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14383)));
  i5 = i5!=(OOC_CHAR8)'\000';
  
l18:
  if (i5) goto l20;
  i5=OOC_FALSE;
  goto l22;
l20:
  i5 = _check_pointer(i1, 14399);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14399)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l22:
  if (i5) goto l28;
  i5 = _check_pointer(i1, 14493);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14493)));
  i5 = i5==(OOC_CHAR8)'\012';
  if (!i5) goto l49;
  i5 = _check_pointer(i1, 14699);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14699))) = (OOC_CHAR8)'\001';
  i2 = i2+1;
  i = i2;
  i4 = i4+1;
  dotExt = i4;
  
  goto l49;
l28:
  i5 = _check_pointer(i1, 14429);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14429))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i = i2;
  
  goto l49;
l31:
  i5 = _check_pointer(i1, 14146);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14146))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 14189);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14189)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l34;
  i5=OOC_FALSE;
  goto l36;
l34:
  i5 = _check_pointer(i1, 14203);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14203)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l36:
  if (!i5) goto l49;
l39_loop:
  i2 = i2+1;
  i = i2;
  i3 = i3+1;
  delta = i3;
  i5 = _check_pointer(i1, 14189);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14189)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l42;
  i5=OOC_FALSE;
  goto l44;
l42:
  i5 = _check_pointer(i1, 14203);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14203)));
  i5 = i5<=(OOC_CHAR8)' ';
  
l44:
  if (i5) goto l39_loop;
l49:
  i5 = _check_pointer(i1, 14096);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14096)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l4_loop;
l54:
  i5 = _check_pointer(i1, 14821);
  i2 = i2-i3;
  i3 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_UINT8*)(i5+(_check_index(i2, i3, OOC_UINT32, 14821))) = (OOC_CHAR8)'\000';
  i = i2;
  i3 = i2+i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14885)), (OOC_INT32)0);
  i5 = i3>=i5;
  if (i5) goto l57;
  ns = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0=i1;
  goto l58;
l57:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i3+1));
  ns = (OOC_Scanner_InputBuffer__CharArray)i3;
  *(OOC_INT32*)((_check_pointer(i0, 14932))+16) = i3;
  i0=i3;
l58:
  i3 = i2>=0;
  if (!i3) goto l70;
  i3=i4;
l61_loop:
  i4 = _check_pointer(i1, 15012);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 15012)));
  i4 = i4==(OOC_CHAR8)'\001';
  if (i4) goto l64;
  i4 = _check_pointer(i0, 15144);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i1, 15159);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 15159)));
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 15144))) = i6;
  i2 = i2-1;
  i = i2;
  
  goto l65;
l64:
  i4 = _check_pointer(i0, 15037);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 15037))) = (OOC_CHAR8)' ';
  i3 = i3-1;
  dotExt = i3;
  i4 = _check_pointer(i0, 15088);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 15088))) = (OOC_CHAR8)' ';
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15309))+16);
  i1 = _check_pointer(i1, 15317);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15317)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15334))+16);
  i1 = _check_pointer(i1, 15342);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15342)));
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15309))+16);
  i2 = _check_pointer(i2, 15317);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15317)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15334))+16);
  i2 = _check_pointer(i2, 15342);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15342)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15404))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15404))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15412)), (OOC_INT32)0);
  Strings__Delete((void*)(_check_pointer(i2, 15412)), i0, (OOC_INT32)0, i1);
  return;
  ;
}

void OOC_Doc__TextDesc_StripTailWS(OOC_Doc__Text text) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15544))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15544))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15552)), (OOC_INT32)0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 15552)), i2);
  i2 = i1!=0;
  i = i1;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15581))+16);
  i2 = _check_pointer(i2, 15589);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15589)));
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15581))+16);
  i2 = _check_pointer(i2, 15589);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15589)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l13:
  if (i2) goto l8_loop;
l17:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15637))+16);
  i0 = _check_pointer(i0, 15645);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 15645))) = (OOC_CHAR8)'\000';
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15806))+16);
  i2 = _check_pointer(i2, 15814);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 15814)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l3;
  i2=0;
  goto l9;
l3:
  i2=0;
l4_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15806))+16);
  i3 = _check_pointer(i3, 15814);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 15814)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l4_loop;
l9:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15855)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15895))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15895))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15903)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15876)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i0, (void*)(_check_pointer(i2, 15903)), i1);
  return;
  ;
}

void OOC_Doc__TextDesc_Load(OOC_Doc__Text text, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)text;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16029)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 16059))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16100))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16100))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16108)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16082)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 16108)), i1);
  return;
  ;
}

static void OOC_Doc__InitMarkedInline(OOC_Doc__MarkedInline mi, OOC_INT32 mark, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = mark;
  *(OOC_INT32*)((_check_pointer(i0, 16284))+16) = i1;
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 16306))+20) = i1;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 16661))+16);
  switch (i0) {
  case 0:
    _copy_8((const void*)"asis",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 1:
    _copy_8((const void*)"cite",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 2:
    _copy_8((const void*)"code",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 3:
    _copy_8((const void*)"command",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 4:
    _copy_8((const void*)"dfn",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 5:
    _copy_8((const void*)"emph",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 6:
    _copy_8((const void*)"file",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 7:
    _copy_8((const void*)"kbd",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 8:
    _copy_8((const void*)"samp",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 9:
    _copy_8((const void*)"strong",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 10:
    _copy_8((const void*)"var",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 11:
    _copy_8((const void*)"url",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 12:
    _copy_8((const void*)"oberon-module",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 13:
    _copy_8((const void*)"oberon-const",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 14:
    _copy_8((const void*)"oberon-field",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 15:
    _copy_8((const void*)"oberon-param",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 16:
    _copy_8((const void*)"oberon-proc",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 17:
    _copy_8((const void*)"oberon-type",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  case 18:
    _copy_8((const void*)"oberon-var",(void*)(OOC_INT32)name,name_0d);
    goto l22;
  default:
    _failed_case(i0, 16654);
    goto l22;
  }
l22:
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Normalize(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mi;
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 17557))+20));
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripHeadWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17645))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17645))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17657)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripTailWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)mi;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17805))+20);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17828)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Store(OOC_Doc__MarkedInline mi, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)mi;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 17967))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17953)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17998))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17981)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Load(OOC_Doc__MarkedInline mi, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18147)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 18160))+16));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18174)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18263))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18283)))), &_td_OOC_Doc__InlineElementDesc, 18283));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 18226))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i2, 18537))+24) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 18563))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 18594))+32) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 18983))+24) = i1;
  return;
  ;
}

void OOC_Doc__OberonRefDesc_SetExternalTarget(OOC_Doc__OberonRef or, OOC_Scanner_InputBuffer__CharArray module, OOC_Scanner_InputBuffer__CharArray id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 19120))+28) = i1;
  i1 = (OOC_INT32)id;
  *(OOC_INT32*)((_check_pointer(i0, 19154))+32) = i1;
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
  *(OOC_INT32*)((_check_pointer(i1, 19443))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 19466))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 19497))+32) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_Doc__InitEmail(OOC_Doc__Email email, OOC_Doc__InlineElement address, OOC_Doc__InlineElement displayed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)email;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)address;
  *(OOC_INT32*)((_check_pointer(i0, 19650))+16) = i1;
  i1 = (OOC_INT32)displayed;
  *(OOC_INT32*)((_check_pointer(i0, 19681))+20) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20094))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20129))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__EmailDesc_Store(OOC_Doc__Email email, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)email;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20270))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20250)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20307))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20287)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__EmailDesc_Load(OOC_Doc__Email email, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20454)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20546))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20563)))), &_td_OOC_Doc__InlineElementDesc, 20563));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20509))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20592)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 20686))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20705)))), &_td_OOC_Doc__InlineElementDesc, 20705));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 20647))+20) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitUref(OOC_Doc__Uref uref, OOC_Doc__InlineElement url, OOC_Doc__InlineElement text, OOC_Doc__InlineElement replacement) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uref;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)url;
  *(OOC_INT32*)((_check_pointer(i0, 20860))+16) = i1;
  i1 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i0, 20882))+20) = i1;
  i1 = (OOC_INT32)replacement;
  *(OOC_INT32*)((_check_pointer(i0, 20906))+24) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21315))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21345))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21376))+24);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__UrefDesc_Store(OOC_Doc__Uref uref, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)uref;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21515))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21496)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21547))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21528)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21580))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21561)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__UrefDesc_Load(OOC_Doc__Uref uref, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21727)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 21813))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21826)))), &_td_OOC_Doc__InlineElementDesc, 21826));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 21781))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21855)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 21942))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21956)))), &_td_OOC_Doc__InlineElementDesc, 21956));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 21909))+20) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21985)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 22079))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22100)))), &_td_OOC_Doc__InlineElementDesc, 22100));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 22039))+24) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 22292))+20) = i0;
  i0 = noIndent;
  *(OOC_UINT8*)((_check_pointer(i1, 22325))+24) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22783))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 22824))+20));
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Store(OOC_Doc__Paragraph p, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)p;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22958))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22942)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 22992))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22978)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Load(OOC_Doc__Paragraph p, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)p;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23134)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 23221))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23241)))), &_td_OOC_Doc__InlineElementDesc, 23241));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 23185))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23270)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 23283))+24));
  return;
  ;
}

static void OOC_Doc__InitExample(OOC_Doc__Example ex, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)ex;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i1, 23443))+20) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23961))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23944)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__ExampleDesc_Load(OOC_Doc__Example ex, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)ex;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24105)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24194))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24214)))), &_td_OOC_Doc__InlineElementDesc, 24214));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24157))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 24383))+20) = i0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24810))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Store(OOC_Doc__PreCond pc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24944))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24927)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Load(OOC_Doc__PreCond pc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25087)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 25175))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25194)))), &_td_OOC_Doc__BlockElementDesc, 25194));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 25139))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 25364))+20) = i0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25800))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Store(OOC_Doc__PostCond pc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25935))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25918)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Load(OOC_Doc__PostCond pc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26079)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26167))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26186)))), &_td_OOC_Doc__BlockElementDesc, 26186));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26131))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 26354))+20) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26768))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26808))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 26830))+16) = OOC_TRUE;
  return;
  ;
}

void OOC_Doc__ItemDesc_Store(OOC_Doc__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)item;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26973))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26954)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__ItemDesc_Load(OOC_Doc__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27117)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 27209))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27228)))), &_td_OOC_Doc__BlockElementDesc, 27228));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 27171))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 27448))+20) = i0;
  i0 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i1, 27469))+24) = i0;
  i0 = (OOC_INT32)itemList;
  *(OOC_INT32*)((_check_pointer(i1, 27490))+28) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27973))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 28008))+20));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28026))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28052))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28052))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28058)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28104))+28);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28140))+28);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Store(OOC_Doc__Itemize i, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)i;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28270))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28254)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28300))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28284)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28330))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28314)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Load(OOC_Doc__Itemize i, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28470)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 28551))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28565)))), &_td_OOC_Doc__InlineElementDesc, 28565));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 28521))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28594)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 28675))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28689)))), &_td_OOC_Doc__ItemDesc, 28689));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 28645))+24) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28709)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 28794))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28812)))), &_td_OOC_Doc__BlockElementDesc, 28812));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 28760))+28) = (OOC_INT32)0;
l12:
  return;
  ;
}

static void OOC_Doc__InitEnumerate(OOC_Doc__Enumerate e, OOC_CHAR8 padAfter, OOC_INT8 mode, OOC_INT32 start, OOC_Doc__Item text, OOC_Doc__BlockElement itemList) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)e;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = mode;
  *(OOC_INT8*)((_check_pointer(i1, 29075))+20) = i0;
  i0 = start;
  *(OOC_INT32*)((_check_pointer(i1, 29096))+24) = i0;
  i0 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i1, 29119))+28) = i0;
  i0 = (OOC_INT32)itemList;
  *(OOC_INT32*)((_check_pointer(i1, 29140))+32) = i0;
  return;
  ;
}

OOC_Doc__Enumerate OOC_Doc__NewEnumerate(OOC_CHAR8 padAfter, OOC_INT8 mode, OOC_INT32 start, OOC_Doc__Item text, OOC_Doc__BlockElement itemList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Enumerate.baseTypes[0]);
  i1 = padAfter;
  i2 = mode;
  i3 = start;
  i4 = (OOC_INT32)text;
  i5 = (OOC_INT32)itemList;
  OOC_Doc__InitEnumerate((OOC_Doc__Enumerate)i0, i1, i2, i3, (OOC_Doc__Item)i4, (OOC_Doc__BlockElement)i5);
  return (OOC_Doc__Enumerate)i0;
  ;
}

void OOC_Doc__EnumerateDesc_NodeName(OOC_Doc__Enumerate e, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"enumerate",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_Doc__EnumerateDesc_Normalize(OOC_Doc__Enumerate e) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29647))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29673))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29673))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29679)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29725))+32);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29761))+32);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__EnumerateDesc_Store(OOC_Doc__Enumerate e, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)e;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 29891))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29877)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 29918))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29905)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29949))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29933)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29979))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29963)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__EnumerateDesc_Load(OOC_Doc__Enumerate e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30121)))), BinaryRider__ReaderDesc_ReadSInt)),BinaryRider__ReaderDesc_ReadSInt)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 30134))+20));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30148)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 30160))+24));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30175)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 30256))+28) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30270)))), &_td_OOC_Doc__ItemDesc, 30270));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 30226))+28) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30290)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 30375))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30393)))), &_td_OOC_Doc__BlockElementDesc, 30393));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 30341))+32) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitFirstColumn(OOC_Doc__FirstColumn fc, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = padAfter;
  i1 = (OOC_INT32)fc;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i1, i0);
  i0 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i1, 30572))+20) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31045))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 31087))+20));
  *(OOC_UINT8*)((_check_pointer(i0, 31108))+16) = OOC_FALSE;
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Store(OOC_Doc__FirstColumn fc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fc;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31253))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31236)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Load(OOC_Doc__FirstColumn fc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31401)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 31490))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31510)))), &_td_OOC_Doc__InlineElementDesc, 31510));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 31453))+20) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 31723))+20) = i0;
  i0 = (OOC_INT32)item;
  *(OOC_INT32*)((_check_pointer(i1, 31767))+24) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32249))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32275))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32275))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32281)))), OOC_Doc__ItemDesc_Normalize)),OOC_Doc__ItemDesc_Normalize)((OOC_Doc__Item)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32300))+24);
  *(OOC_UINT8*)((_check_pointer(i1, 32306))+16) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i0, 32333))+16) = OOC_TRUE;
  return;
  ;
}

void OOC_Doc__TableRowDesc_Store(OOC_Doc__TableRow tr, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)tr;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32474))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32457)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32516))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32499)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__TableRowDesc_Load(OOC_Doc__TableRow tr, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32656)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 32750))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32775)))), &_td_OOC_Doc__BlockElementDesc, 32775));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 32708))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32803)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 32886))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32900)))), &_td_OOC_Doc__ItemDesc, 32900));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 32855))+24) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i1, 33052))+20) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33445))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33480))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__TableDesc_Store(OOC_Doc__Table t, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)t;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33607))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33591)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__TableDesc_Load(OOC_Doc__Table t, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33744)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 33828))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33845)))), &_td_OOC_Doc__BlockElementDesc, 33845));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 33795))+20) = (OOC_INT32)0;
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
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 34255)));
          i0 = i0!=(OOC_CHAR8)'\000';
          if (!i0) goto l15;
          i0=0;
l3_loop:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 34285)));
          i1 = i1==(OOC_CHAR8)'.';
          i0 = i0+1;
          if (i1) goto l6;
          i1=OOC_FALSE;
          goto l8;
l6:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 34302)));
          i1 = i1==(OOC_CHAR8)' ';
          
l8:
          if (!i1) goto l10;
          return i0;
l10:
          i = i0;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 34255)));
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
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34568)))), &_td_OOC_Doc__GlyphDesc);
      if (i2) goto l33;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34650)))), &_td_OOC_Doc__TextDesc);
      if (i2) goto l28;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34929)))), &_td_OOC_Doc__OberonRefDesc);
      if (i2) goto l26;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35212)))), &_td_OOC_Doc__MarkedInlineDesc);
      if (i2) goto l24;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35385)))), &_td_OOC_Doc__EmailDesc);
      if (i2) goto l22;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35489)))), &_td_OOC_Doc__UrefDesc);
      if (i2) goto l20;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35481)))), 35481);
      goto l34;
l20:
      i2 = (OOC_INT32)resultList;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35544))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35557))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35610))+24);
      i0 = (OOC_INT32)OOC_Doc__NewUref((OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i4, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35519)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l22:
      i2 = (OOC_INT32)resultList;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35442))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35459))+20);
      i0 = (OOC_INT32)OOC_Doc__NewEmail((OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35416)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l24:
      i2 = (OOC_INT32)resultList;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 35283))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35353))+20);
      i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)OOC_Doc__NewMarkedInline(i3, (OOC_Doc__InlineElement)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35250)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l26:
      i2 = (OOC_INT32)resultList;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 34994))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35061))+20);
      i4 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35126))+24);
      i3 = (OOC_INT32)OOC_Doc__NewOberonRef(i3, (OOC_Doc__InlineElement)i4, (ADT_Storable__Object)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34964)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i3);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 35158))+4);
      _copy_block((_check_pointer(i0, 35190)),(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35165)))), &_td_OOC_Doc__OberonRefDesc, 35165)), 35175)),12);
      goto l34;
l28:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34696))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34696))+16);
      i4 = _check_pointer(i0, 34713);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 34704)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i2, 34704)), i3, (void*)(_check_pointer(i0, 34713)), (RT0__Struct)i1);
      newText = (OOC_Doc__Text)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34757))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34757))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 34765)), (OOC_INT32)0);
      i0 = OOC_Doc__ExtractSummary_Extract_EndOfSummary((void*)(_check_pointer(i2, 34765)), i0);
      i = i0;
      i2 = i0>=0;
      i3 = (OOC_INT32)newText;
      if (!i2) goto l31;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 34815))+16);
      i2 = _check_pointer(i2, 34823);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_UINT8*)(i2+(_check_index(i0, i4, OOC_UINT32, 34823))) = (OOC_CHAR8)'\000';
      done = OOC_TRUE;
l31:
      i0 = (OOC_INT32)resultList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34894)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i0, (OOC_Doc__InlineElement)i3);
      goto l34;
l33:
      i2 = (OOC_INT32)resultList;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 34625))+16);
      i0 = (OOC_INT32)OOC_Doc__NewGlyph(i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34599)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
l34:
      i0 = (OOC_INT32)_inline;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35663))+12);
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35710));
      return (OOC_Doc__InlineElement)i0;
      ;
    }


  i0 = (OOC_INT32)block;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35775)))), &_td_OOC_Doc__ParagraphDesc);
  
l5:
  if (i1) goto l7;
  return (OOC_Doc__InlineElement)(OOC_INT32)0;
  goto l8;
l7:
  done = OOC_FALSE;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35843)))), &_td_OOC_Doc__ParagraphDesc, 35843)), 35853))+20);
  i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
  return (OOC_Doc__InlineElement)i0;
l8:
  _failed_function(33891); return 0;
  ;
}

OOC_Doc__Document OOC_Doc__NewDocument(OOC_Doc__BlockElement blockList, OOC_Doc_Decoration__Decoration decoration, OOC_INT32 firstColumn) {
  register OOC_INT32 i0,i1;
  OOC_Doc__Document d;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Document.baseTypes[0]);
  d = (OOC_Doc__Document)i0;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)(_check_pointer(i0, 36162)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 36193))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)decoration;
  *(OOC_INT32*)((_check_pointer(i0, 36216))+8) = i1;
  i1 = firstColumn;
  *(OOC_INT32*)((_check_pointer(i0, 36249))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 36284))+16) = (OOC_INT32)0;
  return (OOC_Doc__Document)i0;
  ;
}

void OOC_Doc__DocumentDesc_AddUsedImport(OOC_Doc__Document d, ADT_Storable__Object importDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36452))+16);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)ADT_ArrayList__New(2);
  *(OOC_INT32*)((_check_pointer(i0, 36489))+16) = i1;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36556))+16);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 36573))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)importDecl;
  if (!i2) goto l14;
  i2=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36596))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 36613));
  i4 = _check_pointer(i4, 36620);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 36620))*4);
  i4 = i4==i3;
  if (!i4) goto l9;
  return;
l9:
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l6_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36682))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36682))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36699)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i3);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Store(OOC_Doc__Document d, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)d;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 36825));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36809)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36860))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36844)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Load(OOC_Doc__Document d, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37049)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  i3 = (OOC_INT32)d;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i3, 37135)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37154)))), &_td_OOC_Doc__BlockElementDesc, 37154));
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i3, 37100)) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37182)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l7;
  *(OOC_INT32*)((_check_pointer(i3, 37266))+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37283)))), &_td_OOC_Doc__InlineElementDesc, 37283));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i3, 37233))+4) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i3, 37312))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 37338))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i3, 37363))+16) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Normalize(OOC_Doc__Document doc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37475));
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37528));
  i1 = (OOC_INT32)OOC_Doc__ExtractSummary((OOC_Doc__BlockElement)i1);
  *(OOC_INT32*)((_check_pointer(i0, 37496))+4) = i1;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Merge(OOC_Doc__Document doc, OOC_Doc__Document source) {
  register OOC_INT32 i0,i1;
  OOC_Doc__BlockElement last;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37661));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37771));
  i0 = (OOC_INT32)OOC_Doc__LastBlockElement((OOC_Doc__BlockElement)i0);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37816));
  *(OOC_INT32*)((_check_pointer(i0, 37795))+12) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37715));
  *(OOC_INT32*)(_check_pointer(i0, 37694)) = i1;
l4:
  return;
  ;
}

void OOC_OOC_Doc_init(void) {

  return;
  ;
}

/* --- */
