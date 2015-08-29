#include <XML/UnicodeCodec/UTF16.d>
#include <__oo2c.h>

static void XML_UnicodeCodec_UTF16__InitBE(XML_UnicodeCodec_UTF16__Codec codec, OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = bom;
  i1 = (OOC_INT32)codec;
  XML_UnicodeCodec__Init((XML_UnicodeCodec__Codec)i1, i0);
  *(OOC_UINT8*)((_check_pointer(i1, 1002))+8) = OOC_TRUE;
  return;
  ;
}

static XML_UnicodeCodec_UTF16__Codec XML_UnicodeCodec_UTF16__NewBE(OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF16__Codec.baseTypes[0]);
  i1 = bom;
  XML_UnicodeCodec_UTF16__InitBE((XML_UnicodeCodec_UTF16__Codec)i0, i1);
  return (XML_UnicodeCodec_UTF16__Codec)i0;
  ;
}

static void XML_UnicodeCodec_UTF16__InitLE(XML_UnicodeCodec_UTF16__Codec codec, OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = bom;
  i1 = (OOC_INT32)codec;
  XML_UnicodeCodec__Init((XML_UnicodeCodec__Codec)i1, i0);
  *(OOC_UINT8*)((_check_pointer(i1, 1257))+8) = OOC_FALSE;
  return;
  ;
}

static XML_UnicodeCodec_UTF16__Codec XML_UnicodeCodec_UTF16__NewLE(OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF16__Codec.baseTypes[0]);
  i1 = bom;
  XML_UnicodeCodec_UTF16__InitLE((XML_UnicodeCodec_UTF16__Codec)i0, i1);
  return (XML_UnicodeCodec_UTF16__Codec)i0;
  ;
}

void XML_UnicodeCodec_UTF16__CodecDesc_Decode(XML_UnicodeCodec_UTF16__Codec codec, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_CHAR16 dest[], OOC_LEN dest_0d, OOC_INT32 destStart, OOC_INT32 destEnd, OOC_INT32 *sourceDone, OOC_INT32 *destDone) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_INT32 low;
  OOC_INT32 high;
  OOC_INT32 testSourceEnd;
  OOC_INT32 testDestEnd;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_INT32 cval;
  auto OOC_INT32 XML_UnicodeCodec_UTF16__CodecDesc_Decode_BytesPerEncoding(OOC_CHAR8 highChar);
    
    OOC_INT32 XML_UnicodeCodec_UTF16__CodecDesc_Decode_BytesPerEncoding(OOC_CHAR8 highChar) {
      register OOC_INT32 i0,i1;

      i0 = highChar;
      i1 = (OOC_CHAR8)'\330'<=i0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = i0<(OOC_CHAR8)'\334';
      
l5:
      if (i0) goto l7;
      return 2;
      goto l8;
l7:
      return 4;
l8:
      _failed_function(1937); return 0;
      ;
    }


  i0 = (OOC_INT32)codec;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 2148))+8);
  if (i1) goto l3;
  low = 0;
  high = 1;
  i1=1;i2=0;
  goto l4;
l3:
  low = 1;
  high = 0;
  i1=0;i2=1;
l4:
  i3 = sourceEnd;
  i4 = i3-5;
  i5 = destEnd;
  i5 = i5-1;
  testSourceEnd = i4;
  testDestEnd = i5;
  i6 = sourceStart;
  i = i6;
  i7 = destStart;
  i8 = i6<i4;
  j = i7;
  if (i8) goto l7;
  i8=OOC_FALSE;
  goto l8;
l7:
  i8 = i7<i5;
  
l8:
  if (i8) goto l11;
  i0=i6;i2=i7;
  goto l45;
l11:
  i8=i7;i7=i6;
l12_loop:
  i9 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i7+i1), source_0d, OOC_UINT32, 2614)));
  i10 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i7+i2), source_0d, OOC_UINT32, 2642)));
  i9 = (i9*256)+i10;
  cval = i9;
  i10 = i9<55296;
  if (i10) goto l19;
  i10 = i9>=57344;
  if (i10) goto l17;
  i10=OOC_FALSE;
  goto l21;
l17:
  i10 = i9<65534;
  
  goto l21;
l19:
  i10=OOC_TRUE;
l21:
  if (i10) goto l35;
  i10 = i9<56320;
  if (i10) goto l25;
  i10=OOC_FALSE;
  goto l27;
l25:
  i10 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(((i7+2)+i1), source_0d, OOC_UINT32, 2885)));
  i10 = (OOC_CHAR8)'\334'<=i10;
  
l27:
  if (i10) goto l29;
  i10=OOC_FALSE;
  goto l31;
l29:
  i10 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(((i7+2)+i1), source_0d, OOC_UINT32, 2906)));
  i10 = i10<(OOC_CHAR8)'\340';
  
l31:
  if (i10) goto l33;
  i9 = *(OOC_INT32*)(_check_pointer(i0, 3299));
  *(OOC_INT32*)(_check_pointer(i0, 3299)) = (i9+1);
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i8, dest_0d, OOC_UINT32, 3328))*2) = (OOC_CHAR16)65533;
  i7 = i7+2;
  i = i7;
  i8 = i8+1;
  j = i8;
  
  goto l36;
l33:
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i8, dest_0d, OOC_UINT32, 3016))*2) = i9;
  i9 = i7+2;
  i10 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i9+i1), source_0d, OOC_UINT32, 3086)));
  i9 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i9+i2), source_0d, OOC_UINT32, 3146)));
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index((i8+1), dest_0d, OOC_UINT32, 3051))*2) = ((i10*256)+i9);
  i7 = i7+4;
  i = i7;
  i8 = i8+2;
  j = i8;
  
  goto l36;
l35:
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i8, dest_0d, OOC_UINT32, 2785))*2) = i9;
  i7 = i7+2;
  i = i7;
  i8 = i8+1;
  j = i8;
  
l36:
  i9 = i7<i4;
  if (i9) goto l39;
  i9=OOC_FALSE;
  goto l41;
l39:
  i9 = i8<i5;
  
l41:
  if (i9) goto l12_loop;
l44:
  i0=i7;i2=i8;
l45:
  i4 = i0==i6;
  if (i4) goto l48;
  *sourceDone = i0;
  *destDone = i2;
  goto l79;
l48:
  i2 = (i0+1)<i3;
  if (i2) goto l51;
  i0=OOC_FALSE;
  goto l53;
l51:
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i0+i1), source_0d, OOC_UINT32, 3748)));
  i1 = XML_UnicodeCodec_UTF16__CodecDesc_Decode_BytesPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l53:
  if (!i0) goto l63;
l54_loop:
  i0 = i;
  i1 = high;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i0+i1), source_0d, OOC_UINT32, 3815)));
  i1 = XML_UnicodeCodec_UTF16__CodecDesc_Decode_BytesPerEncoding(i1);
  i0 = i0+i1;
  i1 = sourceEnd;
  i1 = (i0+1)<i1;
  i = i0;
  if (i1) goto l57;
  i0=OOC_FALSE;
  goto l59;
l57:
  i1 = high;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((i0+i1), source_0d, OOC_UINT32, 3748)));
  i1 = XML_UnicodeCodec_UTF16__CodecDesc_Decode_BytesPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l59:
  if (i0) goto l54_loop;
l63:
  i0 = sourceStart;
  i1 = i;
  i2 = i1!=i0;
  if (i2) goto l66;
  *sourceDone = i1;
  i0 = destStart;
  *destDone = i0;
  goto l67;
l66:
  i2 = (OOC_INT32)codec;
  i3 = destEnd;
  i4 = j;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3953)))), XML_UnicodeCodec_UTF16__CodecDesc_Decode)),XML_UnicodeCodec_UTF16__CodecDesc_Decode)((XML_UnicodeCodec_UTF16__Codec)i2, (void*)(OOC_INT32)source, source_0d, i0, (i1+5), (void*)(OOC_INT32)dest, dest_0d, i4, (i3+1), (void*)(OOC_INT32)sourceDone, (void*)(OOC_INT32)destDone);
l67:
  i0 = *sourceDone;
  i1 = i0==i1;
  if (i1) goto l70;
  i0=OOC_FALSE;
  goto l72;
l70:
  i1 = sourceEnd;
  i0 = i0!=i1;
  
l72:
  if (i0) goto l74;
  i0=OOC_FALSE;
  goto l76;
l74:
  i0 = destEnd;
  i1 = *destDone;
  i0 = i1!=i0;
  
l76:
  if (!i0) goto l79;
  i0 = (OOC_INT32)codec;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 4393));
  *(OOC_INT32*)(_check_pointer(i0, 4393)) = (i1+1);
  i0 = *destDone;
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT32, 4422))*2) = (OOC_CHAR16)65533;
  *destDone = (i0+1);
  i0 = sourceEnd;
  *sourceDone = i0;
l79:
  return;
  ;
}

void XML_UnicodeCodec_UTF16__CodecDesc_Encode(XML_UnicodeCodec_UTF16__Codec codec, OOC_CHAR16 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destStart, OOC_INT32 destEnd, OOC_INT32 *sourceDone, OOC_INT32 *destDone) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_INT32 low;
  OOC_INT32 high;
  OOC_INT32 testSourceEnd;
  OOC_INT32 testDestEnd;
  OOC_INT32 i;
  OOC_INT32 j;
  auto OOC_INT32 XML_UnicodeCodec_UTF16__CodecDesc_Encode_WordsPerEncoding(OOC_CHAR16 ch);
    
    OOC_INT32 XML_UnicodeCodec_UTF16__CodecDesc_Encode_WordsPerEncoding(OOC_CHAR16 ch) {
      register OOC_INT32 i0,i1;

      i0 = ch;
      i1 = (OOC_CHAR16)55296<=i0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = i0<(OOC_CHAR16)56320;
      
l5:
      if (i0) goto l7;
      return 1;
      goto l8;
l7:
      return 2;
l8:
      _failed_function(5105); return 0;
      ;
    }


  i0 = (OOC_INT32)codec;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 5306))+8);
  if (i1) goto l3;
  low = 0;
  high = 1;
  i1=1;i2=0;
  goto l4;
l3:
  low = 1;
  high = 0;
  i1=0;i2=1;
l4:
  i3 = sourceEnd;
  i4 = i3-1;
  i5 = destEnd;
  i5 = i5-5;
  testSourceEnd = i4;
  testDestEnd = i5;
  i6 = sourceStart;
  i = i6;
  i7 = destStart;
  i8 = i6<i4;
  j = i7;
  if (i8) goto l7;
  i8=OOC_FALSE;
  goto l8;
l7:
  i8 = i7<i5;
  
l8:
  if (i8) goto l11;
  i0=i6;i1=i7;
  goto l45;
l11:
  i8=i6;
l12_loop:
  i9 = i7+i1;
  i10 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i8, source_0d, OOC_UINT32, 5779))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i9, dest_0d, OOC_UINT32, 5751))) = (i10>>8);
  i10 = i7+i2;
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i8, source_0d, OOC_UINT32, 5831))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i10, dest_0d, OOC_UINT32, 5804))) = (_mod(i11,256));
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i8, source_0d, OOC_UINT32, 5862))*2);
  i11 = i11<(OOC_CHAR16)55296;
  if (i11) goto l19;
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i8, source_0d, OOC_UINT32, 5895))*2);
  i11 = i11>=(OOC_CHAR16)57344;
  if (i11) goto l17;
  i11=OOC_FALSE;
  goto l21;
l17:
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i8, source_0d, OOC_UINT32, 5919))*2);
  i11 = i11<(OOC_CHAR16)65534;
  
  goto l21;
l19:
  i11=OOC_TRUE;
l21:
  if (i11) goto l35;
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i8, source_0d, OOC_UINT32, 5985))*2);
  i11 = i11<(OOC_CHAR16)56320;
  if (i11) goto l25;
  i11=OOC_FALSE;
  goto l27;
l25:
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index((i8+1), source_0d, OOC_UINT32, 6030))*2);
  i11 = (OOC_CHAR16)56320<=i11;
  
l27:
  if (i11) goto l29;
  i11=OOC_FALSE;
  goto l31;
l29:
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index((i8+1), source_0d, OOC_UINT32, 6046))*2);
  i11 = i11<(OOC_CHAR16)57344;
  
l31:
  if (i11) goto l33;
  i11 = *(OOC_INT32*)(_check_pointer(i0, 6244));
  *(OOC_INT32*)(_check_pointer(i0, 6244)) = (i11+1);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i9, dest_0d, OOC_UINT32, 6273))) = (OOC_CHAR8)'\000';
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i10, dest_0d, OOC_UINT32, 6333))) = (OOC_CHAR8)'?';
  i8 = i8+1;
  i = i8;
  i7 = i7+2;
  j = i7;
  
  goto l36;
l33:
  i9 = i7+2;
  i10 = i8+1;
  i11 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i10, source_0d, OOC_UINT32, 6109))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i9+i1), dest_0d, OOC_UINT32, 6079))) = (i11>>8);
  i10 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i10, source_0d, OOC_UINT32, 6167))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i9+i2), dest_0d, OOC_UINT32, 6138))) = (_mod(i10,256));
  i8 = i8+2;
  i = i8;
  i7 = i7+4;
  j = i7;
  
  goto l36;
l35:
  i8 = i8+1;
  i = i8;
  i7 = i7+2;
  j = i7;
  
l36:
  i9 = i8<i4;
  if (i9) goto l39;
  i9=OOC_FALSE;
  goto l41;
l39:
  i9 = i7<i5;
  
l41:
  if (i9) goto l12_loop;
l44:
  i0=i8;i1=i7;
l45:
  i2 = i0==i6;
  if (i2) goto l48;
  *sourceDone = i0;
  *destDone = i1;
  goto l79;
l48:
  i1 = i0!=i3;
  if (i1) goto l51;
  i0=OOC_FALSE;
  goto l53;
l51:
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 6771))*2);
  i1 = XML_UnicodeCodec_UTF16__CodecDesc_Encode_WordsPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l53:
  if (!i0) goto l63;
l54_loop:
  i0 = i;
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 6833))*2);
  i1 = XML_UnicodeCodec_UTF16__CodecDesc_Encode_WordsPerEncoding(i1);
  i0 = i0+i1;
  i1 = sourceEnd;
  i1 = i0!=i1;
  i = i0;
  if (i1) goto l57;
  i0=OOC_FALSE;
  goto l59;
l57:
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 6771))*2);
  i1 = XML_UnicodeCodec_UTF16__CodecDesc_Encode_WordsPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l59:
  if (i0) goto l54_loop;
l63:
  i0 = sourceStart;
  i1 = i;
  i2 = i1!=i0;
  if (i2) goto l66;
  *sourceDone = i1;
  i0 = destStart;
  *destDone = i0;
  goto l67;
l66:
  i2 = (OOC_INT32)codec;
  i3 = destEnd;
  i4 = destStart;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6964)))), XML_UnicodeCodec_UTF16__CodecDesc_Encode)),XML_UnicodeCodec_UTF16__CodecDesc_Encode)((XML_UnicodeCodec_UTF16__Codec)i2, (void*)(OOC_INT32)source, source_0d, i0, (i1+1), (void*)(OOC_INT32)dest, dest_0d, i4, (i3+5), (void*)(OOC_INT32)sourceDone, (void*)(OOC_INT32)destDone);
l67:
  i0 = *sourceDone;
  i1 = i0==i1;
  if (i1) goto l70;
  i0=OOC_FALSE;
  goto l72;
l70:
  i1 = sourceEnd;
  i0 = i0!=i1;
  
l72:
  if (i0) goto l74;
  i0=OOC_FALSE;
  goto l76;
l74:
  i0 = destEnd;
  i1 = *destDone;
  i0 = i1!=i0;
  
l76:
  if (!i0) goto l79;
  i0 = (OOC_INT32)codec;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7412));
  i2 = high;
  i3 = *destDone;
  *(OOC_INT32*)(_check_pointer(i0, 7412)) = (i1+1);
  i0 = low;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i3+i2), dest_0d, OOC_UINT32, 7441))) = (OOC_CHAR8)'\000';
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i3+i0), dest_0d, OOC_UINT32, 7508))) = (OOC_CHAR8)'?';
  *destDone = (i3+2);
  i0 = sourceEnd;
  *sourceDone = i0;
l79:
  return;
  ;
}

static void XML_UnicodeCodec_UTF16__InitFactory(XML_UnicodeCodec_UTF16__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  XML_UnicodeCodec__InitFactory((XML_UnicodeCodec__Factory)i0, 1);
  return;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF16__FactoryDesc_NewCodec(XML_UnicodeCodec_UTF16__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 7879));
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewBE(i0);
  return (XML_UnicodeCodec__Codec)i0;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF16__FactoryDesc_NewCodecBOM(XML_UnicodeCodec_UTF16__Factory f, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_INT32 *sourceDone) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = sourceStart;
  i1 = i0+1;
  i2 = sourceEnd;
  i2 = i1<i2;
  i3 = (OOC_INT32)f;
  if (!i2) goto l18;
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 8174)));
  i2 = i2==(OOC_CHAR8)'\377';
  if (i2) goto l5;
  i2=OOC_FALSE;
  goto l7;
l5:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 8214)));
  i2 = i2==(OOC_CHAR8)'\376';
  
l7:
  if (i2) goto l16;
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 8329)));
  i2 = i2==(OOC_CHAR8)'\376';
  if (i2) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 8372)));
  i1 = i1==(OOC_CHAR8)'\377';
  
l13:
  if (!i1) goto l18;
  *sourceDone = (i0+2);
  i1 = *(OOC_INT8*)(_check_pointer(i3, 8461));
  i1 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewBE(i1);
  return (XML_UnicodeCodec__Codec)i1;
  goto l18;
l16:
  *sourceDone = (i0+2);
  i1 = *(OOC_INT8*)(_check_pointer(i3, 8303));
  i1 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewLE(i1);
  return (XML_UnicodeCodec__Codec)i1;
l18:
  *sourceDone = i0;
  i0 = *(OOC_INT8*)(_check_pointer(i3, 8594));
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewBE(i0);
  return (XML_UnicodeCodec__Codec)i0;
  ;
}

void XML_UnicodeCodec_UTF16__FactoryDesc_GetEncodingName(XML_UnicodeCodec_UTF16__Factory f, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"UTF-16",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

static void XML_UnicodeCodec_UTF16__InitFactoryLE(XML_UnicodeCodec_UTF16__FactoryLE f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  XML_UnicodeCodec__InitFactory((XML_UnicodeCodec__Factory)i0, 0);
  return;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF16__FactoryLEDesc_NewCodec(XML_UnicodeCodec_UTF16__FactoryLE f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 8937));
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewLE(i0);
  return (XML_UnicodeCodec__Codec)i0;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF16__FactoryLEDesc_NewCodecBOM(XML_UnicodeCodec_UTF16__FactoryLE f, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_INT32 *sourceDone) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_UnicodeCodec__Codec codec;

  i0 = sourceStart;
  *sourceDone = i0;
  i1 = (OOC_INT32)f;
  i1 = *(OOC_INT8*)(_check_pointer(i1, 9261));
  i1 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewLE(i1);
  i2 = i0+1;
  i3 = sourceEnd;
  i3 = i2<i3;
  codec = (XML_UnicodeCodec__Codec)i1;
  if (!i3) goto l18;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 9325)));
  i3 = i3==(OOC_CHAR8)'\376';
  if (i3) goto l5;
  i3=OOC_FALSE;
  goto l7;
l5:
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 9365)));
  i3 = i3==(OOC_CHAR8)'\377';
  
l7:
  if (i3) goto l16;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 9466)));
  i3 = i3==(OOC_CHAR8)'\377';
  if (i3) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 9509)));
  i2 = i2==(OOC_CHAR8)'\376';
  
l13:
  if (!i2) goto l18;
  *sourceDone = (i0+2);
  goto l18;
l16:
  i0 = *(OOC_INT32*)(_check_pointer(i1, 9431));
  *(OOC_INT32*)(_check_pointer(i1, 9431)) = (i0+1);
l18:
  return (XML_UnicodeCodec__Codec)i1;
  ;
}

void XML_UnicodeCodec_UTF16__FactoryLEDesc_GetEncodingName(XML_UnicodeCodec_UTF16__FactoryLE f, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"UTF-16LE",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

static void XML_UnicodeCodec_UTF16__InitFactoryBE(XML_UnicodeCodec_UTF16__FactoryBE f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  XML_UnicodeCodec__InitFactory((XML_UnicodeCodec__Factory)i0, 0);
  return;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF16__FactoryBEDesc_NewCodec(XML_UnicodeCodec_UTF16__FactoryBE f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 9942));
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewBE(i0);
  return (XML_UnicodeCodec__Codec)i0;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF16__FactoryBEDesc_NewCodecBOM(XML_UnicodeCodec_UTF16__FactoryBE f, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_INT32 *sourceDone) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_UnicodeCodec__Codec codec;

  i0 = sourceStart;
  *sourceDone = i0;
  i1 = (OOC_INT32)f;
  i1 = *(OOC_INT8*)(_check_pointer(i1, 10266));
  i1 = (OOC_INT32)XML_UnicodeCodec_UTF16__NewBE(i1);
  i2 = i0+1;
  i3 = sourceEnd;
  i3 = i2<i3;
  codec = (XML_UnicodeCodec__Codec)i1;
  if (!i3) goto l18;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 10330)));
  i3 = i3==(OOC_CHAR8)'\377';
  if (i3) goto l5;
  i3=OOC_FALSE;
  goto l7;
l5:
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 10370)));
  i3 = i3==(OOC_CHAR8)'\376';
  
l7:
  if (i3) goto l16;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 10471)));
  i3 = i3==(OOC_CHAR8)'\376';
  if (i3) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 10514)));
  i2 = i2==(OOC_CHAR8)'\377';
  
l13:
  if (!i2) goto l18;
  *sourceDone = (i0+2);
  goto l18;
l16:
  i0 = *(OOC_INT32*)(_check_pointer(i1, 10436));
  *(OOC_INT32*)(_check_pointer(i1, 10436)) = (i0+1);
l18:
  return (XML_UnicodeCodec__Codec)i1;
  ;
}

void XML_UnicodeCodec_UTF16__FactoryBEDesc_GetEncodingName(XML_UnicodeCodec_UTF16__FactoryBE f, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"UTF-16BE",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_XML_UnicodeCodec_UTF16_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF16__Factory.baseTypes[0]);
  XML_UnicodeCodec_UTF16__factory = (XML_UnicodeCodec_UTF16__Factory)i0;
  XML_UnicodeCodec_UTF16__InitFactory((XML_UnicodeCodec_UTF16__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__factory;
  XML_UnicodeCodec__Register("UTF-16", 7, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF16__FactoryLE.baseTypes[0]);
  XML_UnicodeCodec_UTF16__factoryLE = (XML_UnicodeCodec_UTF16__FactoryLE)i0;
  XML_UnicodeCodec_UTF16__InitFactoryLE((XML_UnicodeCodec_UTF16__FactoryLE)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__factoryLE;
  XML_UnicodeCodec__Register("UTF-16LE", 9, (XML_UnicodeCodec__Factory)i0);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF16__FactoryBE.baseTypes[0]);
  XML_UnicodeCodec_UTF16__factoryBE = (XML_UnicodeCodec_UTF16__FactoryBE)i0;
  XML_UnicodeCodec_UTF16__InitFactoryBE((XML_UnicodeCodec_UTF16__FactoryBE)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF16__factoryBE;
  XML_UnicodeCodec__Register("UTF-16BE", 9, (XML_UnicodeCodec__Factory)i0);
  return;
  ;
}

/* --- */
