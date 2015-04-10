#include "OOC/Doc/TextBuffer.d"
#include "__oo2c.h"

OOC_Doc_TextBuffer__Buffer OOC_Doc_TextBuffer__New() {
  register OOC_INT32 i0,i1,i2;
  OOC_Doc_TextBuffer__Buffer b;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_TextBuffer__Buffer.baseTypes[0]);
  b = (OOC_Doc_TextBuffer__Buffer)i0;
  *(OOC_INT32*)(_check_pointer(i0, 1196)) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 2032));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1220));
  i1 = _check_pointer(i1, 1225);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 1225))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)((_check_pointer(i0, 1241))+4) = 0;
  return (OOC_Doc_TextBuffer__Buffer)i0;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_Clear(OOC_Doc_TextBuffer__Buffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1321));
  i1 = _check_pointer(i1, 1326);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 1326))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)((_check_pointer(i0, 1342))+4) = 0;
  return;
  ;
}

static void OOC_Doc_TextBuffer__Extend(OOC_Doc_TextBuffer__Buffer b, OOC_INT32 to) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_Scanner_InputBuffer__CharArray s;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1474));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1479)), 0);
  i2 = to;
  i3 = i1<=i2;
  i = i1;
  if (!i3) goto l9;
l4_loop:
  i1 = i1+2048;
  i3 = i1<=i2;
  i = i1;
  if (i3) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], i1);
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1564));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1573)), 0);
  _copy_8((_check_pointer(i2, 1569)),(_check_pointer(i1, 1573)),i3);
  *(OOC_INT32*)(_check_pointer(i0, 1582)) = i1;
  return;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_Append(OOC_Doc_TextBuffer__Buffer b, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 len;

  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  len = i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1762));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 1743))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 1767)), 0);
  i2 = (i3+i0)>=i2;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1794))+4);
  OOC_Doc_TextBuffer__Extend((OOC_Doc_TextBuffer__Buffer)i1, (i2+i0));
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1840));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1840));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 1845)), 0);
  Strings__Append((void*)(OOC_INT32)str, str_0d, (void*)(_check_pointer(i2, 1845)), i3);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1859))+4);
  *(OOC_INT32*)((_check_pointer(i1, 1859))+4) = (i2+i0);
  return;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_AppendEOL(OOC_Doc_TextBuffer__Buffer b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1954));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 1937))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1959)), 0);
  i1 = (i2+1)>=i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1986))+4);
  OOC_Doc_TextBuffer__Extend((OOC_Doc_TextBuffer__Buffer)i0, (i1+1));
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2009));
  i1 = _check_pointer(i1, 2014);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2016))+4);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 2014))) = (OOC_CHAR8)'\012';
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2046));
  i1 = _check_pointer(i1, 2051);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2053))+4);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index((i2+1), i3, OOC_UINT32, 2051))) = (OOC_CHAR8)'\000';
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2079))+4);
  *(OOC_INT32*)((_check_pointer(i0, 2079))+4) = (i1+1);
  return;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_AppendSpaces(OOC_Doc_TextBuffer__Buffer b, OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2214));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2195))+4);
  i3 = len;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2219)), 0);
  i1 = (i2+i3)>=i1;
  if (!i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2246))+4);
  OOC_Doc_TextBuffer__Extend((OOC_Doc_TextBuffer__Buffer)i0, (i1+i3));
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2290))+4);
  i1 = (i1+i3)-1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2280))+4);
  i4 = i2<=i1;
  i = i2;
  if (!i4) goto l11;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2312));
  i4 = _check_pointer(i4, 2317);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 2317))) = (OOC_CHAR8)' ';
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l6_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2342));
  i1 = _check_pointer(i1, 2347);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2349))+4);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index((i2+i3), i4, OOC_UINT32, 2347))) = (OOC_CHAR8)'\000';
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2377))+4);
  *(OOC_INT32*)((_check_pointer(i0, 2377))+4) = (i1+i3);
  return;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_AppendSubstring(OOC_Doc_TextBuffer__Buffer b, const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  len = i2;
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2626));
  i5 = *(OOC_INT32*)((_check_pointer(i3, 2607))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2631)), 0);
  i4 = (i5+i2)>=i4;
  if (!i4) goto l3;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 2658))+4);
  OOC_Doc_TextBuffer__Extend((OOC_Doc_TextBuffer__Buffer)i3, (i4+i2));
l3:
  i0 = i0-1;
  i4 = i1<=i0;
  i = i1;
  if (!i4) goto l11;
  i4=i1;
l6_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2716));
  i5 = _check_pointer(i5, 2721);
  i6 = *(OOC_INT32*)((_check_pointer(i3, 2731))+4);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i4, str_0d, OOC_UINT32, 2744)));
  *(OOC_UINT8*)(i5+(_check_index(((i4-i1)+i6), i7, OOC_UINT32, 2721))) = i8;
  i4 = i4+1;
  i5 = i4<=i0;
  i = i4;
  if (i5) goto l6_loop;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 2762));
  i0 = _check_pointer(i0, 2767);
  i1 = *(OOC_INT32*)((_check_pointer(i3, 2769))+4);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index((i1+i2), i4, OOC_UINT32, 2767))) = (OOC_CHAR8)'\000';
  i0 = *(OOC_INT32*)((_check_pointer(i3, 2797))+4);
  *(OOC_INT32*)((_check_pointer(i3, 2797))+4) = (i0+i2);
  return;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_AppendNoLB(OOC_Doc_TextBuffer__Buffer b, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_INT32 count;
  OOC_INT32 j;

  i = 0;
  count = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2976)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;i1=0;
  goto l13;
l3:
  i0=0;i1=0;
l4_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3002)));
  i2 = i2==(OOC_CHAR8)'\012';
  if (!i2) goto l8;
  i1 = i1+1;
  count = i1;
  
l8:
  i0 = i0+1;
  i = i0;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2976)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l4_loop;
l13:
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 3098))+4);
  OOC_Doc_TextBuffer__Extend((OOC_Doc_TextBuffer__Buffer)i2, ((i3+i0)+i1));
  i = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 3137))+4);
  j = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 3158)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l34;
  i1=i0;i0=0;
l17_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3184)));
  i3 = i3==(OOC_CHAR8)'\012';
  if (i3) goto l20;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3359));
  i3 = _check_pointer(i3, 3364);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3374)));
  *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 3364))) = i5;
  
  goto l29;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3219));
  i3 = _check_pointer(i3, 3224);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 3224))) = (OOC_CHAR8)' ';
  i3 = i0>0;
  if (i3) goto l23;
  i3=OOC_FALSE;
  goto l25;
l23:
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 3261)));
  i3 = i3==(OOC_CHAR8)'.';
  
l25:
  if (!i3) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3290));
  i3 = _check_pointer(i3, 3295);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = i1+1;
  *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 3295))) = (OOC_CHAR8)' ';
  
l29:
  i0 = i0+1;
  i = i0;
  i1 = i1+1;
  j = i1;
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 3158)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (i3) goto l17_loop;
l33:
  i0=i1;
l34:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3427));
  i1 = _check_pointer(i1, 3432);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i3, OOC_UINT32, 3432))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)((_check_pointer(i2, 3448))+4) = i0;
  return;
  ;
}

void OOC_Doc_TextBuffer__BufferDesc_Capitalize(OOC_Doc_TextBuffer__Buffer b, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = start;
  i1 = end;
  i0 = i0!=i1;
  if (!i0) goto l8;
  i0 = (OOC_INT32)b;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3577));
  i2 = _check_pointer(i2, 3582);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = start;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3599));
  i5 = _check_pointer(i5, 3604);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 3604)));
  *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 3582))) = (_cap(i5));
  i2 = i4+1;
  i3 = i2!=i1;
  start = i2;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

void OOC_Doc_TextBuffer__FormatBlock(OOC_Doc_TextBuffer__Buffer dest, OOC_Doc_TextBuffer__Buffer source, OOC_INT32 indent, OOC_INT32 scrWidth, OOC_INT32 offsetFirst) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_Scanner_InputBuffer__CharArray s;
  OOC_CHAR8 firstLine;
  OOC_INT32 i;
  OOC_INT32 start;
  OOC_INT32 end;
  auto OOC_INT32 OOC_Doc_TextBuffer__FormatBlock_LastWord(OOC_Scanner_InputBuffer__CharArray s, OOC_INT32 sLen, OOC_INT32 start, OOC_INT32 width);
    
    OOC_INT32 OOC_Doc_TextBuffer__FormatBlock_LastWord(OOC_Scanner_InputBuffer__CharArray s, OOC_INT32 sLen, OOC_INT32 start, OOC_INT32 width) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = start;
      i1 = width;
      i1 = i0+i1;
      i2 = sLen;
      i3 = i1<i2;
      if (i3) goto l3;
      return i2;
      goto l51;
l3:
      i2 = i1!=i0;
      i = i1;
      if (i2) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = (OOC_INT32)s;
      i2 = _check_pointer(i2, 4568);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 4568)));
      i2 = i2>(OOC_CHAR8)' ';
      
l8:
      if (i2) goto l10;
      i2=i1;
      goto l20;
l10:
      i2 = (OOC_INT32)s;
      i3=i1;
l11_loop:
      i3 = i3-1;
      i4 = i3!=i0;
      i = i3;
      if (i4) goto l14;
      i4=OOC_FALSE;
      goto l16;
l14:
      i4 = _check_pointer(i2, 4568);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 4568)));
      i4 = i4>(OOC_CHAR8)' ';
      
l16:
      if (i4) goto l11_loop;
l19:
      i2=i3;
l20:
      i3 = i2!=i0;
      if (i3) goto l23;
      i3=OOC_FALSE;
      goto l25;
l23:
      i3 = (OOC_INT32)s;
      i3 = _check_pointer(i3, 4718);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 4718)));
      i3 = i3<=(OOC_CHAR8)' ';
      
l25:
      if (!i3) goto l37;
      i3 = (OOC_INT32)s;
      
l28_loop:
      i2 = i2-1;
      i4 = i2!=i0;
      i = i2;
      if (i4) goto l31;
      i4=OOC_FALSE;
      goto l33;
l31:
      i4 = _check_pointer(i3, 4718);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index((i2-1), i5, OOC_UINT32, 4718)));
      i4 = i4<=(OOC_CHAR8)' ';
      
l33:
      if (i4) goto l28_loop;
l37:
      i0 = i2==i0;
      if (i0) goto l40;
      return i2;
      goto l51;
l40:
      i = i1;
      i0 = (OOC_INT32)s;
      i2 = _check_pointer(i0, 4883);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 4883)));
      i2 = i2>(OOC_CHAR8)' ';
      if (i2) goto l44_loop;
      i0=i1;
      goto l49;
l44_loop:
      i1 = i1+1;
      i = i1;
      i2 = _check_pointer(i0, 4883);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 4883)));
      i2 = i2>(OOC_CHAR8)' ';
      if (i2) goto l44_loop;
l48:
      i0=i1;
l49:
      return i0;
l51:
      _failed_function(4309); return 0;
      ;
    }


  i0 = scrWidth;
  i1 = indent;
  i0 = (i0-i1)<32;
  if (!i0) goto l3;
  scrWidth = (i1+32);
l3:
  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5285));
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5311))+4);
  i0 = i0==0;
  if (!i0) goto l6;
  i0 = (OOC_INT32)dest;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5367)))), OOC_Doc_TextBuffer__BufferDesc_AppendEOL)),OOC_Doc_TextBuffer__BufferDesc_AppendEOL)((OOC_Doc_TextBuffer__Buffer)i0);
  return;
l6:
  firstLine = OOC_TRUE;
  i = 0;
  i0 = _check_pointer(i1, 5454);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 5454)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l46;
  i0=0;
l9_loop:
  i1 = (OOC_INT32)s;
  i2 = _check_pointer(i1, 5522);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5522)));
  i2 = (OOC_CHAR8)'\000'<i2;
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = _check_pointer(i1, 5531);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5531)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l14:
  if (!i2) goto l26;
l17_loop:
  i0 = i0+1;
  i = i0;
  i2 = _check_pointer(i1, 5522);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5522)));
  i2 = (OOC_CHAR8)'\000'<i2;
  if (i2) goto l20;
  i2=OOC_FALSE;
  goto l22;
l20:
  i2 = _check_pointer(i1, 5531);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5531)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l22:
  if (i2) goto l17_loop;
l26:
  i2 = _check_pointer(i1, 5591);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5591)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (!i2) goto l41;
  start = i0;
  i2 = firstLine;
  if (i2) goto l32;
  i2 = (OOC_INT32)source;
  i3 = indent;
  i4 = scrWidth;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 6130))+4);
  i0 = OOC_Doc_TextBuffer__FormatBlock_LastWord((OOC_Scanner_InputBuffer__CharArray)i1, i2, i0, (i4-i3));
  end = i0;
  i1 = (OOC_INT32)dest;
  i2 = indent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6176)))), OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)),OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)((OOC_Doc_TextBuffer__Buffer)i1, i2);
  
  goto l40;
l32:
  i2 = offsetFirst;
  i3 = i2<0;
  if (i3) goto l35;
  i3 = (OOC_INT32)source;
  i4 = indent;
  i5 = scrWidth;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 5890))+4);
  i0 = OOC_Doc_TextBuffer__FormatBlock_LastWord((OOC_Scanner_InputBuffer__CharArray)i1, i3, i0, ((i5-i4)-i2));
  end = i0;
  
  goto l36;
l35:
  i3 = (OOC_INT32)source;
  i4 = scrWidth;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 5801))+4);
  i0 = OOC_Doc_TextBuffer__FormatBlock_LastWord((OOC_Scanner_InputBuffer__CharArray)i1, i3, i0, (i4+i2));
  end = i0;
  
l36:
  i1 = offsetFirst;
  i2 = i1>=0;
  if (!i2) goto l39;
  i2 = (OOC_INT32)dest;
  i3 = indent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6001)))), OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)),OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)((OOC_Doc_TextBuffer__Buffer)i2, (i1+i3));
l39:
  firstLine = OOC_FALSE;
  
l40:
  i1 = (OOC_INT32)dest;
  i2 = (OOC_INT32)s;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6254)), 0);
  i4 = start;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6234)))), OOC_Doc_TextBuffer__BufferDesc_AppendSubstring)),OOC_Doc_TextBuffer__BufferDesc_AppendSubstring)((OOC_Doc_TextBuffer__Buffer)i1, (void*)(_check_pointer(i2, 6254)), i3, i4, i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6282)))), OOC_Doc_TextBuffer__BufferDesc_AppendEOL)),OOC_Doc_TextBuffer__BufferDesc_AppendEOL)((OOC_Doc_TextBuffer__Buffer)i1);
  i = i0;
  
l41:
  i1 = (OOC_INT32)s;
  i1 = _check_pointer(i1, 5454);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 5454)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l9_loop;
l46:
  return;
  ;
}

void OOC_Doc_TextBuffer__FormatBlockHTML(OOC_Doc_TextBuffer__Buffer dest, OOC_Doc_TextBuffer__Buffer source, OOC_INT32 indent, OOC_INT32 scrWidth, OOC_INT32 offsetFirst) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_Scanner_InputBuffer__CharArray s;
  OOC_CHAR8 firstLine;
  OOC_INT32 i;
  OOC_INT32 start;
  OOC_INT32 end;
  auto OOC_INT32 OOC_Doc_TextBuffer__FormatBlockHTML_LastWord(OOC_Scanner_InputBuffer__CharArray s, OOC_INT32 sLen, OOC_INT32 start, OOC_INT32 width);
    
    OOC_INT32 OOC_Doc_TextBuffer__FormatBlockHTML_LastWord(OOC_Scanner_InputBuffer__CharArray s, OOC_INT32 sLen, OOC_INT32 start, OOC_INT32 width) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_INT32 j;
      OOC_INT32 lastWord;
      OOC_INT32 len;

      i0 = start;
      j = i0;
      lastWord = -1;
      len = 0;
      i1 = (OOC_INT32)s;
      i2 = _check_pointer(i1, 7329);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 7329)));
      i2 = i2!=(OOC_CHAR8)'\000';
      i3 = width;
      if (i2) goto l3;
      i2=i0;i0=0;i1=-1;
      goto l71;
l3:
      i2=i0;i4=0;i5=-1;
l4_loop:
      i6 = _check_pointer(i1, 7355);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7355)));
      i6 = i6==(OOC_CHAR8)'&';
      if (i6) goto l48;
      i6 = _check_pointer(i1, 7488);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7488)));
      i6 = i6==(OOC_CHAR8)'<';
      if (i6) goto l29;
      i6 = _check_pointer(i1, 7600);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7600)));
      i6 = i6<=(OOC_CHAR8)' ';
      if (i6) goto l11;
      i2 = i2+1;
      j = i2;
      i4 = i4+1;
      len = i4;
      
      goto l66;
l11:
      i6 = i2!=i0;
      if (i6) goto l14;
      i6=OOC_FALSE;
      goto l16;
l14:
      i6 = _check_pointer(i1, 7646);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index((i2-1), i7, OOC_UINT32, 7646)));
      i6 = i6>(OOC_CHAR8)' ';
      
l16:
      if (i6) goto l18;
      i2 = i2+1;
      j = i2;
      i4 = i4+1;
      len = i4;
      
      goto l66;
l18:
      i6 = i4>i3;
      if (i6) goto l21;
      i5 = i2+1;
      lastWord = i2;
      j = i5;
      i4 = i4+1;
      len = i4;
      {register OOC_INT32 h0=i2;i2=i5;i5=h0;}
      goto l66;
l21:
      i6 = i5<0;
      if (i6) goto l24;
      return i5;
      goto l66;
l24:
      return i2;
      goto l66;
l29:
      i6 = _check_pointer(i1, 7522);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7522)));
      i6 = i6!=(OOC_CHAR8)'\000';
      if (i6) goto l32;
      i6=OOC_FALSE;
      goto l34;
l32:
      i6 = _check_pointer(i1, 7536);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7536)));
      i6 = i6!=(OOC_CHAR8)'>';
      
l34:
      if (!i6) goto l66;
l37_loop:
      i2 = i2+1;
      j = i2;
      i6 = _check_pointer(i1, 7522);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7522)));
      i6 = i6!=(OOC_CHAR8)'\000';
      if (i6) goto l40;
      i6=OOC_FALSE;
      goto l42;
l40:
      i6 = _check_pointer(i1, 7536);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7536)));
      i6 = i6!=(OOC_CHAR8)'>';
      
l42:
      if (i6) goto l37_loop;
      goto l66;
l48:
      i6 = _check_pointer(i1, 7389);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7389)));
      i6 = i6!=(OOC_CHAR8)'\000';
      if (i6) goto l51;
      i6=OOC_FALSE;
      goto l53;
l51:
      i6 = _check_pointer(i1, 7403);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7403)));
      i6 = i6!=(OOC_CHAR8)';';
      
l53:
      if (!i6) goto l65;
l56_loop:
      i2 = i2+1;
      j = i2;
      i6 = _check_pointer(i1, 7389);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7389)));
      i6 = i6!=(OOC_CHAR8)'\000';
      if (i6) goto l59;
      i6=OOC_FALSE;
      goto l61;
l59:
      i6 = _check_pointer(i1, 7403);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7403)));
      i6 = i6!=(OOC_CHAR8)';';
      
l61:
      if (i6) goto l56_loop;
l65:
      i4 = i4+1;
      len = i4;
      
l66:
      i6 = _check_pointer(i1, 7329);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 7329)));
      i6 = i6!=(OOC_CHAR8)'\000';
      if (i6) goto l4_loop;
l70:
      i0=i4;i1=i5;
l71:
      i0 = i0>i3;
      if (i0) goto l74;
      return i2;
      goto l79;
l74:
      i0 = i1<0;
      if (i0) goto l77;
      return i1;
      goto l79;
l77:
      return i2;
l79:
      _failed_function(7156); return 0;
      ;
    }


  i0 = scrWidth;
  i1 = indent;
  i0 = (i0-i1)<32;
  if (!i0) goto l3;
  scrWidth = (i1+32);
l3:
  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8352));
  s = (OOC_Scanner_InputBuffer__CharArray)i1;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8378))+4);
  i0 = i0==0;
  if (!i0) goto l6;
  i0 = (OOC_INT32)dest;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8434)))), OOC_Doc_TextBuffer__BufferDesc_AppendEOL)),OOC_Doc_TextBuffer__BufferDesc_AppendEOL)((OOC_Doc_TextBuffer__Buffer)i0);
  return;
l6:
  firstLine = OOC_TRUE;
  i = 0;
  i0 = _check_pointer(i1, 8521);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 8521)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l46;
  i0=0;
l9_loop:
  i1 = (OOC_INT32)s;
  i2 = _check_pointer(i1, 8589);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 8589)));
  i2 = (OOC_CHAR8)'\000'<i2;
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = _check_pointer(i1, 8598);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 8598)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l14:
  if (!i2) goto l26;
l17_loop:
  i0 = i0+1;
  i = i0;
  i2 = _check_pointer(i1, 8589);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 8589)));
  i2 = (OOC_CHAR8)'\000'<i2;
  if (i2) goto l20;
  i2=OOC_FALSE;
  goto l22;
l20:
  i2 = _check_pointer(i1, 8598);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 8598)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l22:
  if (i2) goto l17_loop;
l26:
  i2 = _check_pointer(i1, 8658);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 8658)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (!i2) goto l41;
  start = i0;
  i2 = firstLine;
  if (i2) goto l32;
  i2 = (OOC_INT32)source;
  i3 = indent;
  i4 = scrWidth;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 9197))+4);
  i0 = OOC_Doc_TextBuffer__FormatBlockHTML_LastWord((OOC_Scanner_InputBuffer__CharArray)i1, i2, i0, (i4-i3));
  end = i0;
  i1 = (OOC_INT32)dest;
  i2 = indent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9243)))), OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)),OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)((OOC_Doc_TextBuffer__Buffer)i1, i2);
  
  goto l40;
l32:
  i2 = offsetFirst;
  i3 = i2<0;
  if (i3) goto l35;
  i3 = (OOC_INT32)source;
  i4 = indent;
  i5 = scrWidth;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 8957))+4);
  i0 = OOC_Doc_TextBuffer__FormatBlockHTML_LastWord((OOC_Scanner_InputBuffer__CharArray)i1, i3, i0, ((i5-i4)-i2));
  end = i0;
  
  goto l36;
l35:
  i3 = (OOC_INT32)source;
  i4 = scrWidth;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 8868))+4);
  i0 = OOC_Doc_TextBuffer__FormatBlockHTML_LastWord((OOC_Scanner_InputBuffer__CharArray)i1, i3, i0, (i4+i2));
  end = i0;
  
l36:
  i1 = offsetFirst;
  i2 = i1>=0;
  if (!i2) goto l39;
  i2 = (OOC_INT32)dest;
  i3 = indent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9068)))), OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)),OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)((OOC_Doc_TextBuffer__Buffer)i2, (i1+i3));
l39:
  firstLine = OOC_FALSE;
  
l40:
  i1 = (OOC_INT32)dest;
  i2 = (OOC_INT32)s;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9321)), 0);
  i4 = start;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9301)))), OOC_Doc_TextBuffer__BufferDesc_AppendSubstring)),OOC_Doc_TextBuffer__BufferDesc_AppendSubstring)((OOC_Doc_TextBuffer__Buffer)i1, (void*)(_check_pointer(i2, 9321)), i3, i4, i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9349)))), OOC_Doc_TextBuffer__BufferDesc_AppendEOL)),OOC_Doc_TextBuffer__BufferDesc_AppendEOL)((OOC_Doc_TextBuffer__Buffer)i1);
  i = i0;
  
l41:
  i1 = (OOC_INT32)s;
  i1 = _check_pointer(i1, 8521);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 8521)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l9_loop;
l46:
  return;
  ;
}

void OOC_Doc_TextBuffer__IndentBlock(OOC_Doc_TextBuffer__Buffer dest, OOC_Doc_TextBuffer__Buffer source, OOC_INT32 indent) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_Scanner_InputBuffer__CharArray s;
  OOC_INT32 i;
  OOC_INT32 start;

  i0 = (OOC_INT32)source;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9565));
  s = (OOC_Scanner_InputBuffer__CharArray)i0;
  i = 0;
  i1 = _check_pointer(i0, 9596);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 9596)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l29;
  i1 = (OOC_INT32)dest;
  i2 = indent;
  i3=0;
l3_loop:
  start = i3;
  i4 = _check_pointer(i0, 9641);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 9641)));
  i4 = i4!=(OOC_CHAR8)'\000';
  if (i4) goto l6;
  i4=OOC_FALSE;
  goto l8;
l6:
  i4 = _check_pointer(i0, 9655);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 9655)));
  i4 = i4!=(OOC_CHAR8)'\012';
  
l8:
  if (i4) goto l10;
  i4=i3;
  goto l20;
l10:
  i4=i3;
l11_loop:
  i4 = i4+1;
  i = i4;
  i5 = _check_pointer(i0, 9641);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 9641)));
  i5 = i5!=(OOC_CHAR8)'\000';
  if (i5) goto l14;
  i5=OOC_FALSE;
  goto l16;
l14:
  i5 = _check_pointer(i0, 9655);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 9655)));
  i5 = i5!=(OOC_CHAR8)'\012';
  
l16:
  if (i5) goto l11_loop;
l20:
  i5 = _check_pointer(i0, 9717);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 9717)));
  i5 = i5==(OOC_CHAR8)'\012';
  if (!i5) goto l24;
  i4 = i4+1;
  i = i4;
  
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9780)))), OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)),OOC_Doc_TextBuffer__BufferDesc_AppendSpaces)((OOC_Doc_TextBuffer__Buffer)i1, i2);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9835)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9815)))), OOC_Doc_TextBuffer__BufferDesc_AppendSubstring)),OOC_Doc_TextBuffer__BufferDesc_AppendSubstring)((OOC_Doc_TextBuffer__Buffer)i1, (void*)(_check_pointer(i0, 9835)), i5, i3, i4);
  i3 = _check_pointer(i0, 9596);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i4, i5, OOC_UINT32, 9596)));
  i3 = i3!=(OOC_CHAR8)'\000';
  if (!i3) goto l29;
  i3=i4;
  goto l3_loop;
l29:
  return;
  ;
}

void OOC_OOC_Doc_TextBuffer_init(void) {

  return;
  ;
}

/* --- */
