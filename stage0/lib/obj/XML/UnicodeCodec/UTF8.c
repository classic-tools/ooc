#include <XML/UnicodeCodec/UTF8.d>
#include <__oo2c.h>
#include <setjmp.h>

static void XML_UnicodeCodec_UTF8__Init(XML_UnicodeCodec_UTF8__Codec codec, OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)codec;
  i1 = bom;
  XML_UnicodeCodec__Init((XML_UnicodeCodec__Codec)i0, i1);
  return;
  ;
}

static XML_UnicodeCodec_UTF8__Codec XML_UnicodeCodec_UTF8__New(OOC_INT8 bom) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF8__Codec.baseTypes[0]);
  i1 = bom;
  XML_UnicodeCodec_UTF8__Init((XML_UnicodeCodec_UTF8__Codec)i0, i1);
  return (XML_UnicodeCodec_UTF8__Codec)i0;
  ;
}

void XML_UnicodeCodec_UTF8__CodecDesc_Decode(XML_UnicodeCodec_UTF8__Codec codec, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_CHAR16 dest[], OOC_LEN dest_0d, OOC_INT32 destStart, OOC_INT32 destEnd, OOC_INT32 *sourceDone, OOC_INT32 *destDone) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 testSourceEnd;
  OOC_INT32 testDestEnd;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_INT32 cval;
  OOC_INT32 bytes;
  OOC_INT32 low;
  auto OOC_INT32 XML_UnicodeCodec_UTF8__CodecDesc_Decode_BytesPerEncoding(OOC_CHAR8 ch);
  auto void XML_UnicodeCodec_UTF8__CodecDesc_Decode_Invalid(OOC_INT32 offset);
    
    OOC_INT32 XML_UnicodeCodec_UTF8__CodecDesc_Decode_BytesPerEncoding(OOC_CHAR8 ch) {
      register OOC_INT32 i0;

      i0 = ch;
      switch (i0) {
      case (OOC_CHAR8)'\000' ... (OOC_CHAR8)'\177':
        return 1;
        goto l9;
      case (OOC_CHAR8)'\300' ... (OOC_CHAR8)'\337':
        return 2;
        goto l9;
      case (OOC_CHAR8)'\340' ... (OOC_CHAR8)'\357':
        return 3;
        goto l9;
      case (OOC_CHAR8)'\360' ... (OOC_CHAR8)'\367':
        return 4;
        goto l9;
      case (OOC_CHAR8)'\370' ... (OOC_CHAR8)'\373':
        return 5;
        goto l9;
      case (OOC_CHAR8)'\374' ... (OOC_CHAR8)'\375':
        return 6;
        goto l9;
      default:
        return 1;
        goto l9;
      }
l9:
      _failed_function(1262); return 0;
      ;
    }

    
    void XML_UnicodeCodec_UTF8__CodecDesc_Decode_Invalid(OOC_INT32 offset) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)codec;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 1683));
      *(OOC_INT32*)(_check_pointer(i0, 1683)) = (i1+1);
      i0 = j;
      *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT32, 1710))*2) = (OOC_CHAR16)65533;
      i1 = i;
      i2 = offset;
      i1 = i1+i2;
      j = (i0+1);
      i0 = sourceEnd;
      i2 = i1!=i0;
      i = i1;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 1809)));
      i2 = (OOC_CHAR8)'\200'<=i2;
      
l5:
      if (i2) goto l7;
      i2=OOC_FALSE;
      goto l9;
l7:
      i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 1823)));
      i2 = i2<(OOC_CHAR8)'\300';
      
l9:
      if (!i2) goto l24;
l11_loop:
      i1 = i1+1;
      i2 = i1!=i0;
      i = i1;
      if (i2) goto l14;
      i2=OOC_FALSE;
      goto l16;
l14:
      i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 1809)));
      i2 = (OOC_CHAR8)'\200'<=i2;
      
l16:
      if (i2) goto l18;
      i2=OOC_FALSE;
      goto l20;
l18:
      i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 1823)));
      i2 = i2<(OOC_CHAR8)'\300';
      
l20:
      if (i2) goto l11_loop;
l24:
      return;
      ;
    }


  i0 = sourceEnd;
  i0 = i0-5;
  i1 = destEnd;
  i1 = i1-1;
  testSourceEnd = i0;
  testDestEnd = i1;
  i2 = sourceStart;
  i = i2;
  i3 = destStart;
  i0 = i2<i0;
  j = i3;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i3<i1;
  
l4:
  if (!i0) goto l130;
l7_loop:
  i0 = i;
  i1 = testSourceEnd;
  i2 = i0<i1;
  if (i2) goto l10;
  i2=OOC_FALSE;
  goto l12;
l10:
  i2 = testDestEnd;
  i3 = j;
  i2 = i3<i2;
  
l12:
  if (i2) goto l14;
  i0=OOC_FALSE;
  goto l16;
l14:
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2727)));
  i0 = i0<(OOC_CHAR8)'\200';
  
l16:
  if (!i0) goto l31;
  i0 = testDestEnd;
l18_loop:
  i2 = j;
  i3 = i;
  i4 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i3, source_0d, OOC_UINT32, 2766)));
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 2753))*2) = i4;
  i3 = i3+1;
  i = i3;
  i2 = i2+1;
  i4 = i3<i1;
  j = i2;
  if (i4) goto l21;
  i2=OOC_FALSE;
  goto l23;
l21:
  i2 = i2<i0;
  
l23:
  if (i2) goto l25;
  i2=OOC_FALSE;
  goto l27;
l25:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i3, source_0d, OOC_UINT32, 2727)));
  i2 = i2<(OOC_CHAR8)'\200';
  
l27:
  if (i2) goto l18_loop;
l31:
  i0 = i;
  i1 = i0<i1;
  if (i1) goto l34;
  i1=OOC_FALSE;
  goto l36;
l34:
  i1 = testDestEnd;
  i2 = j;
  i1 = i2<i1;
  
l36:
  if (i1) goto l38;
  i0=OOC_FALSE;
  goto l40;
l38:
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2918)));
  i0 = i0>=(OOC_CHAR8)'\200';
  
l40:
  if (!i0) goto l121;
l41_loop:
  i0 = i;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2951)));
  i1 = i1<(OOC_CHAR8)'\300';
  if (i1) goto l107;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 3039)));
  i1 = i1<(OOC_CHAR8)'\340';
  if (i1) goto l98;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 3506)));
  i1 = i1>=(OOC_CHAR8)'\376';
  if (i1) goto l96;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4025)));
  switch (i1) {
  case (OOC_CHAR8)'\340' ... (OOC_CHAR8)'\357':
    i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4089)));
    cval = (_mod(i0,16));
    bytes = 2;
    low = 2048;
    goto l55_loop;
  case (OOC_CHAR8)'\360' ... (OOC_CHAR8)'\367':
    i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4188)));
    cval = (_mod(i0,8));
    bytes = 3;
    low = 65536;
    goto l55_loop;
  case (OOC_CHAR8)'\370' ... (OOC_CHAR8)'\373':
    i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4287)));
    cval = (_mod(i0,4));
    bytes = 4;
    low = 2097152;
    goto l55_loop;
  case (OOC_CHAR8)'\374' ... (OOC_CHAR8)'\375':
    i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4386)));
    cval = (_mod(i0,2));
    bytes = 5;
    low = 67108864;
    goto l55_loop;
  default:
    _failed_case(i1, 4014);
    goto l55_loop;
  }
l55_loop:
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4561)));
  i1 = (i1>>6)!=2;
  if (i1) goto l58;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4689)));
  i2 = cval;
  i3 = bytes;
  i3 = i3-1;
  cval = ((i2*64)+(_mod(i1,64)));
  bytes = i3;
  i1=i3;
  goto l59;
l58:
  bytes = -1;
  i1=-1;
l59:
  i2 = i1<=0;
  if (!i2) goto l55_loop;
l63:
  i = (i0+1);
  i0 = i1<0;
  if (i0) goto l66;
  i0 = low;
  i1 = cval;
  i0 = i1<i0;
  
  goto l68;
l66:
  i0=OOC_TRUE;
l68:
  if (i0) goto l74;
  i0 = cval;
  i1 = 55296<=i0;
  if (i1) goto l72;
  i0=OOC_FALSE;
  goto l76;
l72:
  i0 = i0<57344;
  
  goto l76;
l74:
  i0=OOC_TRUE;
l76:
  if (i0) goto l78;
  i0 = cval;
  i0 = i0==65534;
  
  goto l80;
l78:
  i0=OOC_TRUE;
l80:
  if (i0) goto l82;
  i0 = cval;
  i0 = i0==65535;
  
  goto l84;
l82:
  i0=OOC_TRUE;
l84:
  if (i0) goto l86;
  i0 = cval;
  i0 = i0>=1114112;
  
  goto l88;
l86:
  i0=OOC_TRUE;
l88:
  if (i0) goto l94;
  i0 = cval;
  i1 = i0<=65535;
  if (i1) goto l92;
  i0 = i0-65536;
  cval = i0;
  i1 = j;
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT32, 5509))*2) = (55296+(i0>>10));
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index((i1+1), dest_0d, OOC_UINT32, 5566))*2) = (56320+(_mod(i0,1024)));
  i0 = i1+2;
  j = i0;
  
  goto l108;
l92:
  i1 = j;
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT32, 5339))*2) = i0;
  i0 = i1+1;
  j = i0;
  
  goto l108;
l94:
  i0 = j;
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT32, 5162))*2) = (OOC_CHAR16)65533;
  i1 = (OOC_INT32)codec;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 5207));
  *(OOC_INT32*)(_check_pointer(i1, 5207)) = (i2+1);
  i0 = i0+1;
  j = i0;
  
  goto l108;
l96:
  XML_UnicodeCodec_UTF8__CodecDesc_Decode_Invalid(1);
  goto l108;
l98:
  i1 = i0+1;
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 3108)));
  i2 = (i2>>6)!=2;
  if (i2) goto l104;
  i2 = j;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 3215)));
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 3277)));
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 3187))*2) = (((_mod(i3,32))*64)+(_mod(i1,64)));
  i1 = *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 3313))*2);
  i1 = i1<(OOC_CHAR8)'\200';
  if (!i1) goto l103;
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 3347))*2) = (OOC_CHAR16)65533;
  i1 = (OOC_INT32)codec;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 3394));
  *(OOC_INT32*)(_check_pointer(i1, 3394)) = (i3+1);
l103:
  i = (i0+2);
  j = (i2+1);
  goto l108;
l104:
  XML_UnicodeCodec_UTF8__CodecDesc_Decode_Invalid(2);
  goto l108;
l107:
  XML_UnicodeCodec_UTF8__CodecDesc_Decode_Invalid(1);
l108:
  i0 = i;
  i1 = testSourceEnd;
  i1 = i0<i1;
  if (i1) goto l111;
  i1=OOC_FALSE;
  goto l113;
l111:
  i1 = testDestEnd;
  i2 = j;
  i1 = i2<i1;
  
l113:
  if (i1) goto l115;
  i0=OOC_FALSE;
  goto l117;
l115:
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2918)));
  i0 = i0>=(OOC_CHAR8)'\200';
  
l117:
  if (i0) goto l41_loop;
l121:
  i0 = i;
  i1 = testSourceEnd;
  i0 = i0<i1;
  if (i0) goto l124;
  i0=OOC_FALSE;
  goto l126;
l124:
  i0 = testDestEnd;
  i1 = j;
  i0 = i1<i0;
  
l126:
  if (i0) goto l7_loop;
l130:
  i0 = i;
  i1 = sourceStart;
  i1 = i0==i1;
  if (i1) goto l133;
  *sourceDone = i0;
  i0 = j;
  *destDone = i0;
  goto l164;
l133:
  i1 = sourceEnd;
  i1 = i0!=i1;
  if (i1) goto l136;
  i0=OOC_FALSE;
  goto l138;
l136:
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 6021)));
  i1 = XML_UnicodeCodec_UTF8__CodecDesc_Decode_BytesPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l138:
  if (!i0) goto l148;
l139_loop:
  i0 = i;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 6083)));
  i1 = XML_UnicodeCodec_UTF8__CodecDesc_Decode_BytesPerEncoding(i1);
  i0 = i0+i1;
  i1 = sourceEnd;
  i1 = i0!=i1;
  i = i0;
  if (i1) goto l142;
  i0=OOC_FALSE;
  goto l144;
l142:
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 6021)));
  i1 = XML_UnicodeCodec_UTF8__CodecDesc_Decode_BytesPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l144:
  if (i0) goto l139_loop;
l148:
  i0 = sourceStart;
  i1 = i;
  i2 = i1!=i0;
  if (i2) goto l151;
  *sourceDone = i1;
  i0 = destStart;
  *destDone = i0;
  goto l152;
l151:
  i2 = (OOC_INT32)codec;
  i3 = destEnd;
  i4 = j;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6216)))), XML_UnicodeCodec_UTF8__CodecDesc_Decode)),XML_UnicodeCodec_UTF8__CodecDesc_Decode)((XML_UnicodeCodec_UTF8__Codec)i2, (void*)(OOC_INT32)source, source_0d, i0, (i1+5), (void*)(OOC_INT32)dest, dest_0d, i4, (i3+1), (void*)(OOC_INT32)sourceDone, (void*)(OOC_INT32)destDone);
l152:
  i0 = *sourceDone;
  i1 = i0==i1;
  if (i1) goto l155;
  i0=OOC_FALSE;
  goto l157;
l155:
  i1 = sourceEnd;
  i0 = i0!=i1;
  
l157:
  if (i0) goto l159;
  i0=OOC_FALSE;
  goto l161;
l159:
  i0 = destEnd;
  i1 = *destDone;
  i0 = i1!=i0;
  
l161:
  if (!i0) goto l164;
  i0 = (OOC_INT32)codec;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6656));
  *(OOC_INT32*)(_check_pointer(i0, 6656)) = (i1+1);
  i0 = *destDone;
  *(OOC_UINT16*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT32, 6685))*2) = (OOC_CHAR16)65533;
  *destDone = (i0+1);
  i0 = sourceEnd;
  *sourceDone = i0;
l164:
  return;
  ;
}

void XML_UnicodeCodec_UTF8__CodecDesc_Encode(XML_UnicodeCodec_UTF8__Codec codec, OOC_CHAR16 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destStart, OOC_INT32 destEnd, OOC_INT32 *sourceDone, OOC_INT32 *destDone) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 testSourceEnd;
  OOC_INT32 testDestEnd;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_INT32 cval;
  auto OOC_INT32 XML_UnicodeCodec_UTF8__CodecDesc_Encode_WordsPerEncoding(OOC_CHAR16 ch);
    
    OOC_INT32 XML_UnicodeCodec_UTF8__CodecDesc_Encode_WordsPerEncoding(OOC_CHAR16 ch) {
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
      _failed_function(7355); return 0;
      ;
    }


  i0 = sourceEnd;
  i1 = i0-1;
  i2 = destEnd;
  i2 = i2-5;
  testSourceEnd = i1;
  testDestEnd = i2;
  i3 = sourceStart;
  i = i3;
  i4 = destStart;
  i5 = i3<i1;
  j = i4;
  if (i5) goto l3;
  i5=OOC_FALSE;
  goto l4;
l3:
  i5 = i4<i2;
  
l4:
  if (i5) goto l7;
  i1=i3;i2=i4;
  goto l53;
l7:
  i5 = (OOC_INT32)codec;
  i6=i4;i4=i3;
l8_loop:
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 7903))*2);
  i7 = i7<(OOC_CHAR8)'\200';
  if (i7) goto l43;
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 8032))*2);
  i7 = i7<(OOC_CHAR16)2048;
  if (i7) goto l41;
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 8241))*2);
  i7 = (OOC_CHAR16)55296<=i7;
  if (i7) goto l15;
  i7=OOC_FALSE;
  goto l17;
l15:
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 8255))*2);
  i7 = i7<(OOC_CHAR16)56320;
  
l17:
  if (i7) goto l31;
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 9025))*2);
  i7 = (OOC_CHAR16)56320<=i7;
  if (i7) goto l21;
  i7=OOC_FALSE;
  goto l23;
l21:
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 9039))*2);
  i7 = i7<(OOC_CHAR16)57344;
  
l23:
  if (i7) goto l25;
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 9075))*2);
  i7 = i7>=(OOC_CHAR16)65534;
  
  goto l27;
l25:
  i7=OOC_TRUE;
l27:
  if (i7) goto l29;
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 9352))*2);
  cval = i7;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i6, dest_0d, OOC_UINT32, 9370))) = (224+(_ash(i7,-12)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i6+1), dest_0d, OOC_UINT32, 9420))) = ((_mod((_ash(i7,-6)),64))+128);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i6+2), dest_0d, OOC_UINT32, 9478))) = ((_mod(i7,64))+128);
  i4 = i4+1;
  i = i4;
  i6 = i6+3;
  j = i6;
  
  goto l44;
l29:
  i7 = *(OOC_INT32*)(_check_pointer(i5, 9185));
  *(OOC_INT32*)(_check_pointer(i5, 9185)) = (i7+1);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i6, dest_0d, OOC_UINT32, 9214))) = (OOC_CHAR8)'?';
  i4 = i4+1;
  i = i4;
  i6 = i6+1;
  j = i6;
  
  goto l44;
l31:
  i7 = i4+1;
  i8 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i7, source_0d, OOC_UINT32, 8423))*2);
  i8 = (OOC_CHAR16)56320<=i8;
  if (i8) goto l34;
  i8=OOC_FALSE;
  goto l36;
l34:
  i8 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i7, source_0d, OOC_UINT32, 8439))*2);
  i8 = i8<(OOC_CHAR16)57344;
  
l36:
  if (i8) goto l38;
  i4 = *(OOC_INT32*)(_check_pointer(i5, 8903));
  *(OOC_INT32*)(_check_pointer(i5, 8903)) = (i4+1);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i6, dest_0d, OOC_UINT32, 8934))) = (OOC_CHAR8)'?';
  i = i7;
  i4 = i6+1;
  j = i4;
  i6=i4;i4=i7;
  goto l44;
l38:
  i8 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 8489))*2);
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i7, source_0d, OOC_UINT32, 8539))*2);
  i7 = (((_mod(i8,1024))*1024)+(_mod(i7,1024)))+65536;
  cval = i7;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i6, dest_0d, OOC_UINT32, 8579))) = (240+(_ash(i7,-18)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i6+1), dest_0d, OOC_UINT32, 8631))) = ((_mod((_ash(i7,-12)),64))+128);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i6+2), dest_0d, OOC_UINT32, 8691))) = ((_mod((_ash(i7,-6)),64))+128);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i6+3), dest_0d, OOC_UINT32, 8751))) = ((_mod(i7,64))+128);
  i4 = i4+2;
  i = i4;
  i6 = i6+4;
  j = i6;
  
  goto l44;
l41:
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 8115))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i6, dest_0d, OOC_UINT32, 8088))) = (192+(i7>>6));
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 8170))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((i6+1), dest_0d, OOC_UINT32, 8141))) = (128+(_mod(i7,64)));
  i4 = i4+1;
  i = i4;
  i6 = i6+2;
  j = i6;
  
  goto l44;
l43:
  i7 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i4, source_0d, OOC_UINT32, 7982))*2);
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i6, dest_0d, OOC_UINT32, 7962))) = i7;
  i4 = i4+1;
  i = i4;
  i6 = i6+1;
  j = i6;
  
l44:
  i7 = i4<i1;
  if (i7) goto l47;
  i7=OOC_FALSE;
  goto l49;
l47:
  i7 = i6<i2;
  
l49:
  if (i7) goto l8_loop;
l52:
  i1=i4;i2=i6;
l53:
  i3 = i1==i3;
  if (i3) goto l56;
  *sourceDone = i1;
  *destDone = i2;
  goto l87;
l56:
  i0 = i1!=i0;
  if (i0) goto l59;
  i0=OOC_FALSE;
  goto l61;
l59:
  i0 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT32, 9903))*2);
  i0 = XML_UnicodeCodec_UTF8__CodecDesc_Encode_WordsPerEncoding(i0);
  i2 = sourceEnd;
  i0 = (i1+i0)<=i2;
  
l61:
  if (!i0) goto l71;
l62_loop:
  i0 = i;
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 9965))*2);
  i1 = XML_UnicodeCodec_UTF8__CodecDesc_Encode_WordsPerEncoding(i1);
  i0 = i0+i1;
  i1 = sourceEnd;
  i1 = i0!=i1;
  i = i0;
  if (i1) goto l65;
  i0=OOC_FALSE;
  goto l67;
l65:
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 9903))*2);
  i1 = XML_UnicodeCodec_UTF8__CodecDesc_Encode_WordsPerEncoding(i1);
  i2 = sourceEnd;
  i0 = (i0+i1)<=i2;
  
l67:
  if (i0) goto l62_loop;
l71:
  i0 = sourceStart;
  i1 = i;
  i2 = i1!=i0;
  if (i2) goto l74;
  *sourceDone = i1;
  i0 = destStart;
  *destDone = i0;
  goto l75;
l74:
  i2 = (OOC_INT32)codec;
  i3 = destEnd;
  i4 = destStart;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10096)))), XML_UnicodeCodec_UTF8__CodecDesc_Encode)),XML_UnicodeCodec_UTF8__CodecDesc_Encode)((XML_UnicodeCodec_UTF8__Codec)i2, (void*)(OOC_INT32)source, source_0d, i0, (i1+1), (void*)(OOC_INT32)dest, dest_0d, i4, (i3+5), (void*)(OOC_INT32)sourceDone, (void*)(OOC_INT32)destDone);
l75:
  i0 = *sourceDone;
  i1 = i0==i1;
  if (i1) goto l78;
  i0=OOC_FALSE;
  goto l80;
l78:
  i1 = sourceEnd;
  i0 = i0!=i1;
  
l80:
  if (i0) goto l82;
  i0=OOC_FALSE;
  goto l84;
l82:
  i0 = destEnd;
  i1 = *destDone;
  i0 = i1!=i0;
  
l84:
  if (!i0) goto l87;
  i0 = (OOC_INT32)codec;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10544));
  *(OOC_INT32*)(_check_pointer(i0, 10544)) = (i1+1);
  i0 = *destDone;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT32, 10573))) = (OOC_CHAR8)'?';
  *destDone = (i0+1);
  i0 = sourceEnd;
  *sourceDone = i0;
l87:
  return;
  ;
}

static void XML_UnicodeCodec_UTF8__InitFactory(XML_UnicodeCodec_UTF8__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  XML_UnicodeCodec__InitFactory((XML_UnicodeCodec__Factory)i0, 0);
  return;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF8__FactoryDesc_NewCodec(XML_UnicodeCodec_UTF8__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 10919));
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF8__New(i0);
  return (XML_UnicodeCodec__Codec)i0;
  ;
}

XML_UnicodeCodec__Codec XML_UnicodeCodec_UTF8__FactoryDesc_NewCodecBOM(XML_UnicodeCodec_UTF8__Factory f, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 sourceStart, OOC_INT32 sourceEnd, OOC_INT32 *sourceDone) {
  register OOC_INT32 i0;

  i0 = sourceStart;
  *sourceDone = i0;
  i0 = (OOC_INT32)f;
  i0 = *(OOC_INT8*)(_check_pointer(i0, 11234));
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF8__New(i0);
  return (XML_UnicodeCodec__Codec)i0;
  ;
}

void XML_UnicodeCodec_UTF8__FactoryDesc_GetEncodingName(XML_UnicodeCodec_UTF8__Factory f, OOC_CHAR8 name[], OOC_LEN name_0d) {

  _copy_8((const void*)"UTF-8",(void*)(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_XML_UnicodeCodec_UTF8_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeCodec_UTF8__Factory.baseTypes[0]);
  XML_UnicodeCodec_UTF8__factory = (XML_UnicodeCodec_UTF8__Factory)i0;
  XML_UnicodeCodec_UTF8__InitFactory((XML_UnicodeCodec_UTF8__Factory)i0);
  i0 = (OOC_INT32)XML_UnicodeCodec_UTF8__factory;
  XML_UnicodeCodec__Register("UTF-8", 6, (XML_UnicodeCodec__Factory)i0);
  return;
  ;
}

/* --- */
