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
  *(OOC_INT32*)(_check_pointer(i0, 6786)) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 6810))+4) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 6834))+8) = (-1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7546))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7583))+12);
  i = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7546))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l11:
  i1 = (OOC_INT32)src;
  *(OOC_INT32*)((_check_pointer(i0, 7614))+12) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 7744))+12) = (OOC_INT32)0;
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

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)w;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8036))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8020)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__InlineElementDesc_Load(OOC_Doc__InlineElement e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8200)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 8287))+12) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8307)))), &_td_OOC_Doc__InlineElementDesc, 8307));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 8251))+12) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitBlockElement(OOC_Doc__BlockElement e, OOC_CHAR8 padAfter) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  OOC_Doc__InitElement((OOC_Doc__Element)i0);
  *(OOC_INT32*)((_check_pointer(i0, 8444))+12) = (OOC_INT32)0;
  i1 = padAfter;
  *(OOC_UINT8*)((_check_pointer(i0, 8469))+16) = i1;
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Store(OOC_Doc__BlockElement e, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)w;
  OOC_Doc__ElementDesc_Store((OOC_Doc__Element)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8638))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8622)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 8671))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8657)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_Doc__BlockElementDesc_Load(OOC_Doc__BlockElement e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__ElementDesc_Load((OOC_Doc__Element)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8832)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 8918))+12) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8937)))), &_td_OOC_Doc__BlockElementDesc, 8937));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 8883))+12) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8965)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 8978))+16));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9284)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9317))+12);
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
  if (!i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9463))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9505))+12);
  list = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9463))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l6_loop;
l11:
  *(OOC_UINT8*)((_check_pointer(i0, 9538))+16) = 0u;
l12:
  return;
  ;
}

OOC_Doc__InlineList OOC_Doc__NewInlineList(void) {
  register OOC_INT32 i0;
  OOC_Doc__InlineList il;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__InlineList.baseTypes[0]);
  il = (OOC_Doc__InlineList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 9690)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9711))+4) = 0;
  return (OOC_Doc__InlineList)i0;
  ;
}

void OOC_Doc__InlineListDesc_Append(OOC_Doc__InlineList il, OOC_Doc__InlineElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 9854))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)il;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9885));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9953))+4);
  *(OOC_INT32*)((_check_pointer(i2, 9959))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 9912)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 10004))+4) = i0;
  return;
  ;
}

OOC_Doc__BlockList OOC_Doc__NewBlockList(void) {
  register OOC_INT32 i0;
  OOC_Doc__BlockList bl;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__BlockList.baseTypes[0]);
  bl = (OOC_Doc__BlockList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 10135)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 10156))+4) = 0;
  return (OOC_Doc__BlockList)i0;
  ;
}

void OOC_Doc__BlockListDesc_Append(OOC_Doc__BlockList bl, OOC_Doc__BlockElement inlineElement) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)inlineElement;
  *(OOC_INT32*)((_check_pointer(i0, 10296))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)bl;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10326));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10394))+4);
  *(OOC_INT32*)((_check_pointer(i2, 10400))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 10353)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 10444))+4) = i0;
  return;
  ;
}

static void OOC_Doc__NormalizeInlineList(OOC_Doc__InlineElement *blockList) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Doc__InlineElement prev;
  OOC_Doc__InlineElement i;

  prev = (OOC_Doc__InlineElement)(OOC_INT32)0;
  i0 = (OOC_INT32)*blockList;
  i = (OOC_Doc__InlineElement)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
  i1=(OOC_INT32)0;i2=1u;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10655)))), OOC_Doc__ElementDesc_Normalize)),OOC_Doc__ElementDesc_Normalize)((OOC_Doc__Element)i0);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10680)))), &_td_OOC_Doc__TextDesc);
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10694)))), &_td_OOC_Doc__TextDesc, 10694)), 10699))+16);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 10707)),(const void*)""))==0;
  
l8:
  if (i3) goto l10;
  prev = (OOC_Doc__InlineElement)i0;
  i1 = i0==(OOC_INT32)0;
  i2=i1;i1=i0;
  goto l14;
l10:
  if (i2) goto l12;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11037))+12);
  *(OOC_INT32*)((_check_pointer(i1, 11020))+12) = i3;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10980))+12);
  *blockList = (OOC_Doc__InlineElement)i3;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11114))+12);
  i = (OOC_Doc__InlineElement)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l3_loop;
l19:
  return;
  ;
}

static OOC_Doc__InlineElement OOC_Doc__LastInlineElement(OOC_Doc__InlineElement inlineList) {
  register OOC_INT32 i0,i1;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)inlineList;
  last = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11313))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11354))+12);
  last = (OOC_Doc__InlineElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11313))+12);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11562))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11602))+12);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11562))+12);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11802)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)inlineText;
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11873)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12099)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12170)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
l4:
  return;
  ;
}

static void OOC_Doc__InitGlyph(OOC_Doc__Glyph glyph, OOC_INT32 glyphCode) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)glyph;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = glyphCode;
  *(OOC_INT32*)((_check_pointer(i0, 12402))+16) = i1;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12690))+16);
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
    _failed_case(i0, 12680);
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

  i0 = (OOC_INT32)glyph;
  i1 = (OOC_INT32)w;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i0, (ADT_Storable__Writer)i1);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13199))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13182)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_Doc__GlyphDesc_Load(OOC_Doc__Glyph glyph, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)glyph;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13325)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 13341))+16));
  return;
  ;
}

static void OOC_Doc__InitText(OOC_Doc__Text text, struct OOC_Doc__Position *pos, RT0__Struct pos__tag, OOC_CHAR8 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)text;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  _copy_block((OOC_INT32)pos,(_check_pointer(i0, 13488)),12);
  i1 = Strings__Length((void*)(OOC_INT32)string, string_0d);
  *(OOC_INT32*)((_check_pointer(i0, 13515))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13575))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13575))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 13583)), 0);
  _copy_8((const void*)(OOC_INT32)string,(void*)(_check_pointer(i1, 13583)),i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14179))+16);
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i = 0;
  delta = 0;
  dotExt = 0;
  i2 = _check_pointer(i1, 14234);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 14234)));
  i2 = i2!=0u;
  if (i2) goto l3;
  i2=0;i3=0;i4=0;
  goto l54;
l3:
  i2=0;i3=0;i4=0;
l4_loop:
  i5 = _check_pointer(i1, 14258);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14258)));
  i5 = (OOC_UINT8)i5<=(OOC_UINT8)32u;
  if (i5) goto l31;
  i5 = _check_pointer(i1, 14413);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14413)));
  i5 = i5==46u;
  if (i5) goto l9;
  i5 = _check_pointer(i1, 14908);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i1, 14922);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14922)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14908))) = i7;
  i2 = i2+1;
  i = i2;
  
  goto l49;
l9:
  i5 = _check_pointer(i1, 14438);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i1, 14452);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i2, i8, OOC_UINT32, 14452)));
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14438))) = i7;
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 14479);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14479)));
  i5 = i5!=0u;
  if (i5) goto l12;
  i5=0u;
  goto l14;
l12:
  i5 = _check_pointer(i1, 14493);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14493)));
  i5 = (OOC_UINT8)i5<=(OOC_UINT8)32u;
  
l14:
  if (i5) goto l16;
  i5=0u;
  goto l18;
l16:
  i5 = _check_pointer(i1, 14521);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14521)));
  i5 = i5!=0u;
  
l18:
  if (i5) goto l20;
  i5=0u;
  goto l22;
l20:
  i5 = _check_pointer(i1, 14537);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index((i2+1), i6, OOC_UINT32, 14537)));
  i5 = (OOC_UINT8)i5<=(OOC_UINT8)32u;
  
l22:
  if (i5) goto l28;
  i5 = _check_pointer(i1, 14631);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14631)));
  i5 = i5==10u;
  if (!i5) goto l49;
  i5 = _check_pointer(i1, 14837);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14837))) = 1u;
  i2 = i2+1;
  i = i2;
  i4 = i4+1;
  dotExt = i4;
  
  goto l49;
l28:
  i5 = _check_pointer(i1, 14567);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14567))) = 32u;
  i2 = i2+1;
  i = i2;
  
  goto l49;
l31:
  i5 = _check_pointer(i1, 14284);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index((i2-i3), i6, OOC_UINT32, 14284))) = 32u;
  i2 = i2+1;
  i = i2;
  i5 = _check_pointer(i1, 14327);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14327)));
  i5 = i5!=0u;
  if (i5) goto l34;
  i5=0u;
  goto l36;
l34:
  i5 = _check_pointer(i1, 14341);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14341)));
  i5 = (OOC_UINT8)i5<=(OOC_UINT8)32u;
  
l36:
  if (!i5) goto l49;
l39_loop:
  i2 = i2+1;
  i = i2;
  i3 = i3+1;
  delta = i3;
  i5 = _check_pointer(i1, 14327);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14327)));
  i5 = i5!=0u;
  if (i5) goto l42;
  i5=0u;
  goto l44;
l42:
  i5 = _check_pointer(i1, 14341);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14341)));
  i5 = (OOC_UINT8)i5<=(OOC_UINT8)32u;
  
l44:
  if (i5) goto l39_loop;
l49:
  i5 = _check_pointer(i1, 14234);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 14234)));
  i5 = i5!=0u;
  if (i5) goto l4_loop;
l54:
  i5 = _check_pointer(i1, 14959);
  i2 = i2-i3;
  i3 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index(i2, i3, OOC_UINT32, 14959))) = 0u;
  i = i2;
  i3 = i2+i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15023)), 0);
  i5 = i3>=i5;
  if (i5) goto l57;
  ns = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0=i1;
  goto l58;
l57:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i3+1));
  ns = (OOC_Scanner_InputBuffer__CharArray)i3;
  *(OOC_INT32*)((_check_pointer(i0, 15070))+16) = i3;
  i0=i3;
l58:
  i3 = i2>=0;
  if (!i3) goto l70;
  i3=i4;
l61_loop:
  i4 = _check_pointer(i1, 15150);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 15150)));
  i4 = i4==1u;
  if (i4) goto l64;
  i4 = _check_pointer(i0, 15282);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i1, 15297);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 15297)));
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 15282))) = i6;
  i2 = i2-1;
  i = i2;
  
  goto l65;
l64:
  i4 = _check_pointer(i0, 15175);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 15175))) = 32u;
  i3 = i3-1;
  dotExt = i3;
  i4 = _check_pointer(i0, 15226);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index((i2+i3), i5, OOC_UINT32, 15226))) = 32u;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15447))+16);
  i1 = _check_pointer(i1, 15455);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15455)));
  i1 = i1!=0u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15472))+16);
  i1 = _check_pointer(i1, 15480);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 15480)));
  i1 = (OOC_UINT8)i1<=(OOC_UINT8)32u;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15447))+16);
  i2 = _check_pointer(i2, 15455);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15455)));
  i2 = i2!=0u;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15472))+16);
  i2 = _check_pointer(i2, 15480);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 15480)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15542))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15542))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15550)), 0);
  Strings__Delete((void*)(_check_pointer(i2, 15550)), i0, 0, i1);
  return;
  ;
}

void OOC_Doc__TextDesc_StripTailWS(OOC_Doc__Text text) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15682))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15682))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 15690)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 15690)), i2);
  i = i1;
  i2 = i1!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15719))+16);
  i2 = _check_pointer(i2, 15727);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15727)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l5:
  if (!i2) goto l17;
l8_loop:
  i1 = i1-1;
  i = i1;
  i2 = i1!=0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15719))+16);
  i2 = _check_pointer(i2, 15727);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 15727)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15775))+16);
  i0 = _check_pointer(i0, 15783);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 15783))) = 0u;
  return;
  ;
}

void OOC_Doc__TextDesc_Store(OOC_Doc__Text text, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)w;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i0, (ADT_Storable__Writer)i1);
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15960))+16);
  i2 = _check_pointer(i2, 15968);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 15968)));
  i2 = i2!=0u;
  if (i2) goto l3;
  i2=0;
  goto l9;
l3:
  i2=0;
l4_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15960))+16);
  i3 = _check_pointer(i3, 15968);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 15968)));
  i3 = i3!=0u;
  if (i3) goto l4_loop;
l9:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16009)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16049))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16049))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16057)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16030)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)(_check_pointer(i2, 16057)), i0);
  return;
  ;
}

void OOC_Doc__TextDesc_Load(OOC_Doc__Text text, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)text;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16199)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 16229))+16) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1)));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16270))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16270))+16);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16278)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16252)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i2, 16278)), i0);
  return;
  ;
}

static void OOC_Doc__InitMarkedInline(OOC_Doc__MarkedInline mi, OOC_INT32 mark, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = mark;
  *(OOC_INT32*)((_check_pointer(i0, 16454))+16) = i1;
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 16476))+20) = i1;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 16831))+16);
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
    _failed_case(i0, 16824);
    goto l22;
  }
l22:
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Normalize(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mi;
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 17727))+20));
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripHeadWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17815))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17815))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17827)))), OOC_Doc__InlineElementDesc_StripHeadWS)),OOC_Doc__InlineElementDesc_StripHeadWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_StripTailWS(OOC_Doc__MarkedInline mi) {
  register OOC_INT32 i0;
  OOC_Doc__InlineElement last;

  i0 = (OOC_INT32)mi;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17975))+20);
  i0 = (OOC_INT32)OOC_Doc__LastInlineElement((OOC_Doc__InlineElement)i0);
  last = (OOC_Doc__InlineElement)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17998)))), OOC_Doc__InlineElementDesc_StripTailWS)),OOC_Doc__InlineElementDesc_StripTailWS)((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Store(OOC_Doc__MarkedInline mi, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)w;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 18153))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18139)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18184))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18167)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__MarkedInlineDesc_Load(OOC_Doc__MarkedInline mi, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)mi;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18349)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 18362))+16));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18376)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18465))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18485)))), &_td_OOC_Doc__InlineElementDesc, 18485));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 18428))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitOberonRef(OOC_Doc__OberonRef or, OOC_INT32 mark, OOC_Doc__InlineElement inlineText, ADT_Storable__Object target) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)or;
  i1 = mark;
  i2 = (OOC_INT32)inlineText;
  OOC_Doc__InitMarkedInline((OOC_Doc__MarkedInline)i0, i1, (OOC_Doc__InlineElement)i2);
  i1 = (OOC_INT32)target;
  *(OOC_INT32*)((_check_pointer(i0, 18739))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 18765))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 18796))+32) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 19185))+24) = i1;
  return;
  ;
}

void OOC_Doc__OberonRefDesc_SetExternalTarget(OOC_Doc__OberonRef or, OOC_Scanner_InputBuffer__CharArray module, OOC_Scanner_InputBuffer__CharArray id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 19322))+28) = i1;
  i1 = (OOC_INT32)id;
  *(OOC_INT32*)((_check_pointer(i0, 19356))+32) = i1;
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

  i0 = (OOC_INT32)or;
  i1 = (OOC_INT32)r;
  OOC_Doc__MarkedInlineDesc_Load((OOC_Doc__MarkedInline)i0, (ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 19677))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 19700))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 19731))+32) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_Doc__InitEmail(OOC_Doc__Email email, OOC_Doc__InlineElement address, OOC_Doc__InlineElement displayed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)email;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)address;
  *(OOC_INT32*)((_check_pointer(i0, 19884))+16) = i1;
  i1 = (OOC_INT32)displayed;
  *(OOC_INT32*)((_check_pointer(i0, 19915))+20) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20328))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20363))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__EmailDesc_Store(OOC_Doc__Email email, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)w;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20520))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20500)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20557))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20537)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__EmailDesc_Load(OOC_Doc__Email email, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)email;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20720)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20812))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20829)))), &_td_OOC_Doc__InlineElementDesc, 20829));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 20775))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20858)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 20952))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20971)))), &_td_OOC_Doc__InlineElementDesc, 20971));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 20913))+20) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitUref(OOC_Doc__Uref uref, OOC_Doc__InlineElement url, OOC_Doc__InlineElement text, OOC_Doc__InlineElement replacement) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)uref;
  OOC_Doc__InitInlineElement((OOC_Doc__InlineElement)i0);
  i1 = (OOC_INT32)url;
  *(OOC_INT32*)((_check_pointer(i0, 21126))+16) = i1;
  i1 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i0, 21148))+20) = i1;
  i1 = (OOC_INT32)replacement;
  *(OOC_INT32*)((_check_pointer(i0, 21172))+24) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21581))+16);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21611))+20);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21642))+24);
  OOC_Doc__NormalizeArg((OOC_Doc__InlineElement)i0);
  return;
  ;
}

void OOC_Doc__UrefDesc_Store(OOC_Doc__Uref uref, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)w;
  OOC_Doc__InlineElementDesc_Store((OOC_Doc__InlineElement)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21797))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21778)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21829))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21810)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21862))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21843)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__UrefDesc_Load(OOC_Doc__Uref uref, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)uref;
  i1 = (OOC_INT32)r;
  OOC_Doc__InlineElementDesc_Load((OOC_Doc__InlineElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22025)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 22111))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22124)))), &_td_OOC_Doc__InlineElementDesc, 22124));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 22079))+16) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22153)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 22240))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22254)))), &_td_OOC_Doc__InlineElementDesc, 22254));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 22207))+20) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22283)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 22377))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22398)))), &_td_OOC_Doc__InlineElementDesc, 22398));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 22337))+24) = (OOC_INT32)0;
l12:
  return;
  ;
}

static void OOC_Doc__InitParagraph(OOC_Doc__Paragraph p, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText, OOC_CHAR8 noIndent) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 22590))+20) = i1;
  i1 = noIndent;
  *(OOC_UINT8*)((_check_pointer(i0, 22623))+24) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23081))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 23122))+20));
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Store(OOC_Doc__Paragraph p, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23272))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23256)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 23306))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23292)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_Doc__ParagraphDesc_Load(OOC_Doc__Paragraph p, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23464)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 23551))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23571)))), &_td_OOC_Doc__InlineElementDesc, 23571));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 23515))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23600)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 23613))+24));
  return;
  ;
}

static void OOC_Doc__InitExample(OOC_Doc__Example ex, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ex;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 23773))+20) = i1;
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

  i0 = (OOC_INT32)ex;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24307))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24290)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__ExampleDesc_Load(OOC_Doc__Example ex, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)ex;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24467)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 24556))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24576)))), &_td_OOC_Doc__InlineElementDesc, 24576));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 24519))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitPreCond(OOC_Doc__PreCond pc, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pc;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)((_check_pointer(i0, 24745))+20) = i1;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25172))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Store(OOC_Doc__PreCond pc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25322))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25305)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__PreCondDesc_Load(OOC_Doc__PreCond pc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25481)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 25569))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25588)))), &_td_OOC_Doc__BlockElementDesc, 25588));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 25533))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitPostCond(OOC_Doc__PostCond pc, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pc;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)((_check_pointer(i0, 25758))+20) = i1;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26194))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Store(OOC_Doc__PostCond pc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26345))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26328)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__PostCondDesc_Load(OOC_Doc__PostCond pc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26505)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 26593))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26612)))), &_td_OOC_Doc__BlockElementDesc, 26612));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 26557))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitItem(OOC_Doc__Item item, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)((_check_pointer(i0, 26780))+20) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27194))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27234))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 27256))+16) = 1u;
  return;
  ;
}

void OOC_Doc__ItemDesc_Store(OOC_Doc__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27415))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27396)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__ItemDesc_Load(OOC_Doc__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27575)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 27667))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27686)))), &_td_OOC_Doc__BlockElementDesc, 27686));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 27629))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitItemize(OOC_Doc__Itemize i, OOC_CHAR8 padAfter, OOC_Doc__InlineElement mark, OOC_Doc__Item text, OOC_Doc__BlockElement itemList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)i;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)mark;
  *(OOC_INT32*)((_check_pointer(i0, 27906))+20) = i1;
  i1 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i0, 27927))+24) = i1;
  i1 = (OOC_INT32)itemList;
  *(OOC_INT32*)((_check_pointer(i0, 27948))+28) = i1;
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
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28431))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 28466))+20));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28484))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28510))+24);
  OOC_Doc__ItemDesc_Normalize((OOC_Doc__Item)i1);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28562))+28);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28598))+28);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Store(OOC_Doc__Itemize i, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28744))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28728)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28774))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28758)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28804))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28788)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__ItemizeDesc_Load(OOC_Doc__Itemize i, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28960)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 29041))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29055)))), &_td_OOC_Doc__InlineElementDesc, 29055));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 29011))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29084)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 29165))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29179)))), &_td_OOC_Doc__ItemDesc, 29179));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 29135))+24) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29199)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l11;
  *(OOC_INT32*)((_check_pointer(i0, 29284))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29302)))), &_td_OOC_Doc__BlockElementDesc, 29302));
  goto l12;
l11:
  *(OOC_INT32*)((_check_pointer(i0, 29250))+28) = (OOC_INT32)0;
l12:
  return;
  ;
}

static void OOC_Doc__InitEnumerate(OOC_Doc__Enumerate e, OOC_CHAR8 padAfter, OOC_INT8 mode, OOC_INT32 start, OOC_Doc__Item text, OOC_Doc__BlockElement itemList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = mode;
  *(OOC_INT8*)((_check_pointer(i0, 29565))+20) = i1;
  i1 = start;
  *(OOC_INT32*)((_check_pointer(i0, 29586))+24) = i1;
  i1 = (OOC_INT32)text;
  *(OOC_INT32*)((_check_pointer(i0, 29609))+28) = i1;
  i1 = (OOC_INT32)itemList;
  *(OOC_INT32*)((_check_pointer(i0, 29630))+32) = i1;
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
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30137))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30163))+28);
  OOC_Doc__ItemDesc_Normalize((OOC_Doc__Item)i1);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30215))+32);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30251))+32);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__EnumerateDesc_Store(OOC_Doc__Enumerate e, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 30397))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30383)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 30424))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30411)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30455))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30439)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30485))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30469)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__EnumerateDesc_Load(OOC_Doc__Enumerate e, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30643)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 30656))+20));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30670)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 30682))+24));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30697)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 30778))+28) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30792)))), &_td_OOC_Doc__ItemDesc, 30792));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 30748))+28) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30812)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 30897))+32) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30915)))), &_td_OOC_Doc__BlockElementDesc, 30915));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 30863))+32) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitFirstColumn(OOC_Doc__FirstColumn fc, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fc;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)inlineText;
  *(OOC_INT32*)((_check_pointer(i0, 31094))+20) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31567))+20);
  OOC_Doc__StripInlineListWS((OOC_Doc__InlineElement)i1);
  OOC_Doc__NormalizeInlineList((void*)((_check_pointer(i0, 31609))+20));
  *(OOC_UINT8*)((_check_pointer(i0, 31630))+16) = 0u;
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Store(OOC_Doc__FirstColumn fc, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31791))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31774)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__FirstColumnDesc_Load(OOC_Doc__FirstColumn fc, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)fc;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31955)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 32044))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32064)))), &_td_OOC_Doc__InlineElementDesc, 32064));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 32007))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static void OOC_Doc__InitTableRow(OOC_Doc__TableRow tr, OOC_CHAR8 padAfter, OOC_Doc__BlockElement firstColumnList, OOC_Doc__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tr;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)firstColumnList;
  *(OOC_INT32*)((_check_pointer(i0, 32277))+20) = i1;
  i1 = (OOC_INT32)item;
  *(OOC_INT32*)((_check_pointer(i0, 32321))+24) = i1;
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
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32803))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32829))+24);
  OOC_Doc__ItemDesc_Normalize((OOC_Doc__Item)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32854))+24);
  *(OOC_UINT8*)((_check_pointer(i1, 32860))+16) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 32887))+16) = 1u;
  return;
  ;
}

void OOC_Doc__TableRowDesc_Store(OOC_Doc__TableRow tr, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33044))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33027)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33086))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33069)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__TableRowDesc_Load(OOC_Doc__TableRow tr, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)tr;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33242)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 33336))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 33361)))), &_td_OOC_Doc__BlockElementDesc, 33361));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 33294))+20) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33389)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 33472))+24) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33486)))), &_td_OOC_Doc__ItemDesc, 33486));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 33441))+24) = (OOC_INT32)0;
l8:
  return;
  ;
}

static void OOC_Doc__InitTable(OOC_Doc__Table t, OOC_CHAR8 padAfter, OOC_Doc__BlockElement rowList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = padAfter;
  OOC_Doc__InitBlockElement((OOC_Doc__BlockElement)i0, i1);
  i1 = (OOC_INT32)rowList;
  *(OOC_INT32*)((_check_pointer(i0, 33638))+20) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34031))+20);
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34066))+20);
  OOC_Doc__NoPadLastElement((OOC_Doc__BlockElement)i0);
  return;
  ;
}

void OOC_Doc__TableDesc_Store(OOC_Doc__Table t, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  OOC_Doc__BlockElementDesc_Store((OOC_Doc__BlockElement)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34209))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34193)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_Doc__TableDesc_Load(OOC_Doc__Table t, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)r;
  OOC_Doc__BlockElementDesc_Load((OOC_Doc__BlockElement)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34362)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 34446))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34463)))), &_td_OOC_Doc__BlockElementDesc, 34463));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 34413))+20) = (OOC_INT32)0;
l4:
  return;
  ;
}

static OOC_Doc__InlineElement OOC_Doc__ExtractSummary(OOC_Doc__BlockElement block) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 done;
  auto OOC_Doc__InlineElement OOC_Doc__ExtractSummary_Extract(OOC_Doc__InlineElement inlineList);
    
    OOC_Doc__InlineElement OOC_Doc__ExtractSummary_Extract(OOC_Doc__InlineElement inlineList) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_Doc__InlineList resultList;
      OOC_Doc__InlineElement _inline;
      OOC_Doc__Text newText;
      OOC_INT32 i;
      auto OOC_INT32 OOC_Doc__ExtractSummary_Extract_EndOfSummary(OOC_CHAR8 str[], OOC_LEN str_0d);
        
        OOC_INT32 OOC_Doc__ExtractSummary_Extract_EndOfSummary(OOC_CHAR8 str[], OOC_LEN str_0d) {
          register OOC_INT32 i0,i1;

          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 34873)));
          i0 = i0!=0u;
          if (!i0) goto l15;
          i0=0;
l3_loop:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 34903)));
          i0 = i0+1;
          i1 = i1==46u;
          if (i1) goto l6;
          i1=0u;
          goto l8;
l6:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 34920)));
          i1 = i1==32u;
          
l8:
          if (!i1) goto l10;
          return i0;
l10:
          i = i0;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 34873)));
          i1 = i1!=0u;
          if (i1) goto l3_loop;
l15:
          return (-1);
          ;
        }


      i0 = (OOC_INT32)OOC_Doc__NewInlineList();
      resultList = (OOC_Doc__InlineList)i0;
      i0 = (OOC_INT32)inlineList;
      _inline = (OOC_Doc__InlineElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = done;
      i1 = !i1;
      
l5:
      if (!i1) goto l43;
      i1 = (OOC_INT32)&_td_OOC_Doc__Position;
      
l7_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35186)))), &_td_OOC_Doc__GlyphDesc);
      if (i2) goto l33;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35268)))), &_td_OOC_Doc__TextDesc);
      if (i2) goto l28;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35547)))), &_td_OOC_Doc__OberonRefDesc);
      if (i2) goto l26;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35830)))), &_td_OOC_Doc__MarkedInlineDesc);
      if (i2) goto l24;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36003)))), &_td_OOC_Doc__EmailDesc);
      if (i2) goto l22;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36107)))), &_td_OOC_Doc__UrefDesc);
      if (i2) goto l20;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36099)))), 36099);
      goto l34;
l20:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36162))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36175))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36228))+24);
      i0 = (OOC_INT32)OOC_Doc__NewUref((OOC_Doc__InlineElement)i2, (OOC_Doc__InlineElement)i3, (OOC_Doc__InlineElement)i0);
      i2 = (OOC_INT32)resultList;
      OOC_Doc__InlineListDesc_Append((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l22:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36060))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36077))+20);
      i0 = (OOC_INT32)OOC_Doc__NewEmail((OOC_Doc__InlineElement)i2, (OOC_Doc__InlineElement)i0);
      i2 = (OOC_INT32)resultList;
      OOC_Doc__InlineListDesc_Append((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l24:
      i2 = *(OOC_INT32*)((_check_pointer(i0, 35901))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35971))+20);
      i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)OOC_Doc__NewMarkedInline(i2, (OOC_Doc__InlineElement)i0);
      i2 = (OOC_INT32)resultList;
      OOC_Doc__InlineListDesc_Append((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l26:
      i2 = *(OOC_INT32*)((_check_pointer(i0, 35612))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35679))+20);
      i3 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i3);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35744))+24);
      i2 = (OOC_INT32)OOC_Doc__NewOberonRef(i2, (OOC_Doc__InlineElement)i3, (ADT_Storable__Object)i4);
      i3 = (OOC_INT32)resultList;
      OOC_Doc__InlineListDesc_Append((OOC_Doc__InlineList)i3, (OOC_Doc__InlineElement)i2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 35776))+4);
      _copy_block((_check_pointer(i0, 35808)),(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35783)))), &_td_OOC_Doc__OberonRefDesc, 35783)), 35793)),12);
      goto l34;
l28:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35314))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35314))+16);
      i4 = _check_pointer(i0, 35331);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 35322)), 0);
      i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i2, 35322)), i3, (void*)(_check_pointer(i0, 35331)), (RT0__Struct)i1);
      newText = (OOC_Doc__Text)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35375))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35375))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 35383)), 0);
      i0 = OOC_Doc__ExtractSummary_Extract_EndOfSummary((void*)(_check_pointer(i2, 35383)), i0);
      i = i0;
      i2 = i0>=0;
      if (!i2) goto l31;
      i2 = (OOC_INT32)newText;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 35433))+16);
      i2 = _check_pointer(i2, 35441);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 35441))) = 0u;
      done = 1u;
l31:
      i0 = (OOC_INT32)newText;
      i2 = (OOC_INT32)resultList;
      OOC_Doc__InlineListDesc_Append((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
      goto l34;
l33:
      i0 = *(OOC_INT32*)((_check_pointer(i0, 35243))+16);
      i0 = (OOC_INT32)OOC_Doc__NewGlyph(i0);
      i2 = (OOC_INT32)resultList;
      OOC_Doc__InlineListDesc_Append((OOC_Doc__InlineList)i2, (OOC_Doc__InlineElement)i0);
l34:
      i0 = (OOC_INT32)_inline;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36281))+12);
      _inline = (OOC_Doc__InlineElement)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l37;
      i2=0u;
      goto l39;
l37:
      i2 = done;
      i2 = !i2;
      
l39:
      if (i2) goto l7_loop;
l43:
      i0 = (OOC_INT32)resultList;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36328));
      return (OOC_Doc__InlineElement)i0;
      ;
    }


  i0 = (OOC_INT32)block;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36393)))), &_td_OOC_Doc__ParagraphDesc);
  
l5:
  if (i1) goto l7;
  return (OOC_Doc__InlineElement)(OOC_INT32)0;
  goto l8;
l7:
  done = 0u;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36461)))), &_td_OOC_Doc__ParagraphDesc, 36461)), 36471))+20);
  i0 = (OOC_INT32)OOC_Doc__ExtractSummary_Extract((OOC_Doc__InlineElement)i0);
  return (OOC_Doc__InlineElement)i0;
l8:
  _failed_function(34509); return 0;
  ;
}

OOC_Doc__Document OOC_Doc__NewDocument(OOC_Doc__BlockElement blockList, OOC_Doc_Decoration__Decoration decoration, OOC_INT32 firstColumn) {
  register OOC_INT32 i0,i1;
  OOC_Doc__Document d;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc__Document.baseTypes[0]);
  d = (OOC_Doc__Document)i0;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = (OOC_INT32)blockList;
  *(OOC_INT32*)(_check_pointer(i0, 36780)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 36811))+4) = 0;
  i1 = (OOC_INT32)decoration;
  *(OOC_INT32*)((_check_pointer(i0, 36834))+8) = i1;
  i1 = firstColumn;
  *(OOC_INT32*)((_check_pointer(i0, 36867))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 36902))+16) = 0;
  return (OOC_Doc__Document)i0;
  ;
}

void OOC_Doc__DocumentDesc_AddUsedImport(OOC_Doc__Document d, ADT_Storable__Object importDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37070))+16);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)ADT_ArrayList__New(2);
  *(OOC_INT32*)((_check_pointer(i0, 37107))+16) = i1;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37174))+16);
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 37191))+4);
  i2 = (OOC_INT32)importDecl;
  i3 = 0<i1;
  if (!i3) goto l14;
  i3=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37214))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 37231));
  i4 = _check_pointer(i4, 37238);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 37238))*4);
  i4 = i4==i2;
  if (!i4) goto l9;
  return;
l9:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l6_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37300))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37300))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37317)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Store(OOC_Doc__Document d, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)d;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37459));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37443)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37494))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37478)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_Doc__DocumentDesc_Load(OOC_Doc__Document d, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37699)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)d;
  *(OOC_INT32*)(_check_pointer(i2, 37785)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37804)))), &_td_OOC_Doc__BlockElementDesc, 37804));
  i1=i2;
  goto l4;
l3:
  i1 = (OOC_INT32)d;
  *(OOC_INT32*)(_check_pointer(i1, 37750)) = (OOC_INT32)0;
  
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37832)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i1, 37916))+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37933)))), &_td_OOC_Doc__InlineElementDesc, 37933));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 37883))+4) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i1, 37962))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 37988))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 38013))+16) = (OOC_INT32)0;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Normalize(OOC_Doc__Document doc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38125));
  OOC_Doc__NormalizeBlockList((OOC_Doc__BlockElement)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38178));
  i1 = (OOC_INT32)OOC_Doc__ExtractSummary((OOC_Doc__BlockElement)i1);
  *(OOC_INT32*)((_check_pointer(i0, 38146))+4) = i1;
  return;
  ;
}

void OOC_Doc__DocumentDesc_Merge(OOC_Doc__Document doc, OOC_Doc__Document source) {
  register OOC_INT32 i0,i1;
  OOC_Doc__BlockElement last;

  i0 = (OOC_INT32)doc;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38311));
  i1 = i1==0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38421));
  i0 = (OOC_INT32)OOC_Doc__LastBlockElement((OOC_Doc__BlockElement)i0);
  last = (OOC_Doc__BlockElement)i0;
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 38466));
  *(OOC_INT32*)((_check_pointer(i0, 38445))+12) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 38365));
  *(OOC_INT32*)(_check_pointer(i0, 38344)) = i1;
l4:
  return;
  ;
}

void OOC_OOC_Doc_init(void) {

  return;
  ;
}

/* --- */
