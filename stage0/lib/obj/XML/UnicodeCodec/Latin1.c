#include <XML/UnicodeCodec/Latin1.d>
#include <__oo2c.h>
#include <setjmp.h>

static void XML_UnicodeCodec_Latin1__Init(XML_UnicodeCodec_Latin1__Codec codec, OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)codec;
  i1 = bom;
  XML_UnicodeCodec__Init((XML_UnicodeCodec__Codec)i0, i1);
  return;
  ;
}

static XML_UnicodeCodec_Latin1__Codec XML_UnicodeCodec_Latin1__New(OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_Latin1__Codec.baseTypes[0]);
  i1 = bom;
  XML_UnicodeCodec_Latin1__Init((XML_UnicodeCodec_Latin1__Codec)i0, i1);
  return (XML_UnicodeCodec_Latin1__Codec)i0;
  ;
}

void XML_UnicodeCodec_Latin1__CodecDesc_Decode(XML_UnicodeCodec_Latin1__Codec codec, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_CHAR16 dest[], OOC_LEN dest_0d, OOC_INT32 destStart, OOC_INT32 destEnd, OOC_INT32 *sourceDone, OOC_INT32 *destDone) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = sourceEnd;
  i1 = destEnd;
  i2 = destStart;
  i3 = sourceStart;
  i1 = i1-i2;
  i0 = (i0-i3)>i1;
  if (!i0) goto l3;
  sourceEnd = (i1+i3);
l3:
  i0 = sourceEnd;
  i1 = i3!=i0;
  if (!i1) goto l11;
l6_loop:
  i1 = destStart;
  i2 = sourceStart;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 1323)));
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT32, 1302))*2) = i3;
  i2 = i2+1;
  sourceStart = i2;
  i2 = i2!=i0;
  destStart = (i1+1);
  if (i2) goto l6_loop;
l11:
  i0 = sourceStart;
  *sourceDone = i0;
  i0 = destStart;
  *destDone = i0;
  return;
  ;
}

void XML_UnicodeCodec_Latin1__CodecDesc_Encode(XML_UnicodeCodec_Latin1__Codec codec, OOC_CHAR16 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destStart, OOC_INT32 destEnd, OOC_INT32 *sourceDone, OOC_INT32 *destDone) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 testSourceEnd;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = sourceEnd;
  i0 = i0-1;
  testSourceEnd = i0;
  i1 = sourceStart;
  i = i1;
  i2 = destStart;
  i3 = i1<i0;
  j = i2;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = destEnd;
  i3 = i2!=i3;
  
l4:
  if (i3) goto l7;
  i0=i1;
  goto l37;
l7:
  i3 = destEnd;
  i4 = (OOC_INT32)codec;
  i5=i2;i2=i1;
l8_loop:
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 2214))*2);
  i6 = i6>(OOC_CHAR8)'\377';
  if (i6) goto l11;
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 2582))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i5, dest_0d, OOC_UINT32, 2562))) = i6;
  i2 = i2+1;
  i = i2;
  
  goto l28;
l11:
  i6 = *(OOC_INT32*)(_check_pointer(i4, 2249));
  *(OOC_INT32*)(_check_pointer(i4, 2249)) = (i6+1);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i5, dest_0d, OOC_UINT32, 2278))) = (OOC_CHAR8)'?';
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 2329))*2);
  i6 = (OOC_CHAR16)55296<=i6;
  if (i6) goto l14;
  i6=OOC_FALSE;
  goto l16;
l14:
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 2343))*2);
  i6 = i6<(OOC_CHAR16)56320;
  
l16:
  if (i6) goto l18;
  i6=OOC_FALSE;
  goto l20;
l18:
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index((i2+1), source_0d, OOC_UINT32, 2387))*2);
  i6 = (OOC_CHAR16)56320<=i6;
  
l20:
  if (i6) goto l22;
  i6=OOC_FALSE;
  goto l24;
l22:
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index((i2+1), source_0d, OOC_UINT32, 2403))*2);
  i6 = i6<(OOC_CHAR16)57344;
  
l24:
  if (i6) goto l26;
  i2 = i2+1;
  i = i2;
  
  goto l28;
l26:
  i2 = i2+2;
  i = i2;
  
l28:
  i5 = i5+1;
  i6 = i2<i0;
  j = i5;
  if (i6) goto l31;
  i6=OOC_FALSE;
  goto l33;
l31:
  i6 = i5!=i3;
  
l33:
  if (i6) goto l8_loop;
l36:
  i0=i2;i2=i5;
l37:
  i1 = i0==i1;
  if (i1) goto l40;
  i1=i2;
  goto l45;
l40:
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2941))*2);
  i1 = i1<(OOC_CHAR16)256;
  if (i1) goto l43;
  i1 = (OOC_INT32)codec;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 3092));
  *(OOC_INT32*)(_check_pointer(i1, 3092)) = (i3+1);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 3121))) = (OOC_CHAR8)'?';
  goto l44;
l43:
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2990))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 2970))) = i1;
l44:
  i1 = i2+1;
  i0 = i0+1;
  
l45:
  *sourceDone = i0;
  *destDone = i1;
  return;
  ;
}

static void XML_UnicodeCodec_Latin1__InitFactory(XML_UnicodeCodec_Latin1__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  XML_UnicodeCodec__InitFactory((XML_UnicodeCodec__Factory)i0, 0);
  return;
  ;
}

XML_UnicodeCodec_Latin1__Codec XML_UnicodeCodec_Latin1__FactoryDesc_NewCodec(XML_UnicodeCodec_Latin1__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 3414));
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__New(i0);
  return (XML_UnicodeCodec_Latin1__Codec)i0;
  ;
}

XML_UnicodeCodec_Latin1__Codec XML_UnicodeCodec_Latin1__FactoryDesc_NewCodecBOM(XML_UnicodeCodec_Latin1__Factory f, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_INT32 *sourceDone) {
  register OOC_INT32 i0;

  i0 = sourceStart;
  *sourceDone = i0;
  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 3692));
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__New(i0);
  return (XML_UnicodeCodec_Latin1__Codec)i0;
  ;
}

void XML_UnicodeCodec_Latin1__FactoryDesc_GetEncodingName(XML_UnicodeCodec_Latin1__Factory f, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"ISO-8859-1",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_XML_UnicodeCodec_Latin1_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_Latin1__Factory.baseTypes[0]);
  XML_UnicodeCodec_Latin1__factory = (XML_UnicodeCodec_Latin1__Factory)i0;
  XML_UnicodeCodec_Latin1__InitFactory((XML_UnicodeCodec_Latin1__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("ISO_8859-1:1987", 16, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("iso-ir-100", 11, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("ISO_8859-1", 11, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("ISO-8859-1", 11, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("latin1", 7, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("l1", 3, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("IBM819", 7, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("CP819", 6, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  XML_UnicodeCodec__Register("csISOLatin1", 12, (XML_UnicodeCodec__Factory)i0);
  return;
  ;
}

/* --- */
