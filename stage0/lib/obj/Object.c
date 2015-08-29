#include <Object.d>
#include <__oo2c.h>
#include <setjmp.h>

Object__String Object__ObjectDesc_ToString(Object__Object x) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[280];
  OOC_INT32 i;
  RT0__Struct _struct;
  auto void Object__ObjectDesc_ToString_Append(RT0__Name name);
  auto void Object__ObjectDesc_ToString_AppendHex(OOC_INT32 x);
    
    void Object__ObjectDesc_ToString_Append(RT0__Name name) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 j;

      j = 0;
      i0 = (OOC_INT32)name;
      i0 = *(OOC_UINT8*)(_check_pointer(i0, 6421));
      i0 = i0!=0u;
      if (!i0) goto l12;
      i0 = (OOC_INT32)name;
      i1=0;
l3_loop:
      i2 = i;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 6456))+i1);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 280, OOC_UINT32, 6445))) = i3;
      i = (i2+1);
      i1 = i1+1;
      j = i1;
      i2 = i1!=128;
      if (i2) goto l6;
      i2=0u;
      goto l8;
l6:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 6421))+i1);
      i2 = i2!=0u;
      
l8:
      if (i2) goto l3_loop;
l12:
      return;
      ;
    }

    
    void Object__ObjectDesc_ToString_AppendHex(OOC_INT32 x) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = i;
      i1 = i0+7;
      i2=i1;i1=7;
l1_loop:
      i3 = x;
      i4 = (_mod(i3,16))+48;
      i5 = i4>57;
      if (!i5) goto l5;
      i4 = i4+39;
      
l5:
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 280, OOC_UINT32, 6744))) = i4;
      x = (i3>>4);
      i2 = i2+(-1);
      i1 = i1+(-1);
      i3 = i1>=0;
      if (i3) goto l1_loop;
l9:
      i = (i0+8);
      return;
      ;
    }


  _copy_8((const void*)"<",(void*)(OOC_INT32)str,280);
  i = 1;
  i0 = (OOC_INT32)x;
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  _struct = (RT0__Struct)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6913))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6920));
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6935))) = 46u;
  i = (i0+1);
  i0 = (OOC_INT32)_struct;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6973))+16);
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6988))) = 32u;
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 7015))) = 97u;
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 7042))) = 116u;
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 7069))) = 32u;
  i1 = (OOC_INT32)x;
  i = (i0+1);
  Object__ObjectDesc_ToString_AppendHex((_type_cast_fast(OOC_INT32, OOC_INT32, i1)));
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 7308))) = 62u;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)str, 280, 0, (i0+1));
  return (Object__String)i0;
  ;
}

OOC_CHAR8 Object__ObjectDesc_Equals(Object__Object x, Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  return (i0==i1);
  ;
}

OOC_INT32 Object__ObjectDesc_HashCode(Object__Object x) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)x;
  i0 = HashCode__Ptr((void*)i0);
  return i0;
  ;
}

static Object__String8 Object__NewString8(OOC_INT32 source, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2;
  Object__String8 s;
  Object__CharsLatin1 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  i1 = length;
  s = (Object__String8)i0;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], (i1+1));
  d = (Object__CharsLatin1)i2;
  *(OOC_INT32*)(_check_pointer(i0, 10727)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 10752))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 10791)),i1);
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 10820);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 10820))) = 0u;
  i0 = (OOC_INT32)s;
  return (Object__String8)i0;
  ;
}

static Object__String16 Object__NewString16(OOC_INT32 source, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2;
  Object__String16 s;
  Object__CharsUTF16 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  i1 = length;
  s = (Object__String16)i0;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i1+1));
  d = (Object__CharsUTF16)i2;
  *(OOC_INT32*)(_check_pointer(i0, 11027)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 11052))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 11091)),(i1*2));
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 11124);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 11124))*2) = 0u;
  i0 = (OOC_INT32)s;
  return (Object__String16)i0;
  ;
}

Object__String8 Object__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 11450)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11450)));
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Object__NewString8((OOC_INT32)str, i0);
  return (Object__String8)i0;
  ;
}

Object__String8 Object__NewLatin1Region(const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = start;
  i1 = end;
  i0 = (OOC_INT32)Object__NewString8(((OOC_INT32)str+i0), (i1-i0));
  return (Object__String8)i0;
  ;
}

Object__String8 Object__NewLatin1Char(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Object__NewString8((OOC_INT32)&ch, 1);
  return (Object__String8)i0;
  ;
}

Object__String Object__NewUTF16(const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  Object__String16 s;
  Object__CharsUTF16 d;
  OOC_INT32 j;

  i = 0;
  i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 12566))*2);
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 12566))*2);
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i0+1));
  d = (Object__CharsUTF16)i2;
  *(OOC_INT32*)(_check_pointer(i1, 12641)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 12661))+4) = i2;
  j = 0;
  i3 = 0<=i0;
  if (!i3) goto l17;
  i3=0;
l12_loop:
  i4 = _check_pointer(i2, 12704);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 12714))*2);
  *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 12704))*2) = i6;
  i3 = i3+1;
  j = i3;
  i4 = i3<=i0;
  if (i4) goto l12_loop;
l17:
  return (Object__String)i1;
  ;
}

Object__String Object__NewUTF16Region(const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  Object__String16 s;
  Object__CharsUTF16 d;
  OOC_INT32 j;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  i = i2;
  i3 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i3;
  i4 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i2+1));
  d = (Object__CharsUTF16)i4;
  *(OOC_INT32*)(_check_pointer(i3, 13249)) = i2;
  *(OOC_INT32*)((_check_pointer(i3, 13269))+4) = i4;
  j = i1;
  i5 = i1<i0;
  if (!i5) goto l8;
  i5 = (i1*(-1))+i1;
  
l3_loop:
  i6 = _check_pointer(i4, 13320);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 13336))*2);
  *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 13320))*2) = i8;
  i1 = i1+1;
  j = i1;
  i5 = i5+1;
  i6 = i1<i0;
  if (i6) goto l3_loop;
l8:
  i0 = _check_pointer(i4, 13355);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 13355))*2) = 0u;
  return (Object__String)i3;
  ;
}

Object__String Object__NewUTF16Char(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String16 s;
  Object__CharsUTF16 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], 2);
  d = (Object__CharsUTF16)i1;
  *(OOC_INT32*)(_check_pointer(i0, 13717)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 13737))+4) = i1;
  i2 = _check_pointer(i1, 13755);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = ch;
  *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT8, 13755))*2) = i4;
  i1 = _check_pointer(i1, 13771);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(1, i2, OOC_UINT8, 13771))*2) = 0u;
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4Char(OOC_CHAR32 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String16 s;
  Object__CharsUTF16 d;
  OOC_INT32 v;

  i0 = ch;
  i1 = (OOC_UINT32)i0<(OOC_UINT32)65536u;
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], 3);
  d = (Object__CharsUTF16)i2;
  *(OOC_INT32*)(_check_pointer(i1, 14274)) = 2;
  *(OOC_INT32*)((_check_pointer(i1, 14296))+4) = i2;
  i0 = i0-65536;
  v = i0;
  i3 = _check_pointer(i2, 14357);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT8, 14357))*2) = (55296+(i0>>10));
  i3 = _check_pointer(i2, 14412);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT16*)(i3+(_check_index(1, i4, OOC_UINT8, 14412))*2) = (56320+(_mod(i0,1024)));
  i0 = _check_pointer(i2, 14468);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT16*)(i0+(_check_index(2, i2, OOC_UINT8, 14468))*2) = 0u;
  return (Object__String)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Object__NewUTF16Char(i0);
  return (Object__String)i0;
l4:
  _failed_function(13827); return 0;
  ;
}

Object__String Object__NewUCS4Region(const OOC_CHAR32 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 c;
  OOC_INT32 i;
  Object__CharsUTF16 d;
  OOC_INT32 v;
  Object__String16 s;

  c = 0;
  i0 = start;
  i1 = end;
  i2 = i0!=i1;
  if (i2) goto l3;
  i3=0;
  goto l13;
l3:
  i3=i0;i4=0;
l4_loop:
  i5 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 15027))*4);
  i5 = (OOC_UINT32)i5>=(OOC_UINT32)65536u;
  if (i5) goto l7;
  i4 = i4+1;
  c = i4;
  
  goto l8;
l7:
  i4 = i4+2;
  c = i4;
  
l8:
  i3 = i3+1;
  i5 = i3!=i1;
  if (i5) goto l4_loop;
l12:
  i3=i4;
l13:
  i4 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i3+1));
  d = (Object__CharsUTF16)i4;
  i = 0;
  if (!i2) goto l25;
  i2=0;
l16_loop:
  i5 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15205))*4);
  i5 = (OOC_UINT32)i5>=(OOC_UINT32)65536u;
  if (i5) goto l19;
  i5 = _check_pointer(i4, 15443);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15459))*4);
  *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 15443))*2) = i7;
  i2 = i2+1;
  i = i2;
  
  goto l20;
l19:
  i5 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15257))*4);
  i5 = i5-65536;
  v = i5;
  i6 = _check_pointer(i4, 15296);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT16*)(i6+(_check_index(i2, i7, OOC_UINT32, 15296))*2) = (55296+(i5>>10));
  i6 = _check_pointer(i4, 15353);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT16*)(i6+(_check_index((i2+1), i7, OOC_UINT32, 15353))*2) = (56320+(_mod(i5,1024)));
  i2 = i2+2;
  i = i2;
  
l20:
  i0 = i0+1;
  start = i0;
  i5 = i0!=i1;
  if (i5) goto l16_loop;
l25:
  i0 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i0;
  *(OOC_INT32*)(_check_pointer(i0, 15541)) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 15560))+4) = i4;
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4(const OOC_CHAR32 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 15919))*4);
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15919))*4);
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Object__NewUCS4Region((void*)(OOC_INT32)str, str_0d, 0, i0);
  return (Object__String)i0;
  ;
}

Object__String Object__Concat2(Object__String s1, Object__String s2) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Object__String8 c8;
  Object__String16 c32;
  OOC_INT32 i;

  i0 = (OOC_INT32)s1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16245)))), &_td_Object__String8Desc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17159)))), &_td_Object__String16Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17155)))), 17155);
  goto l40;
l5:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17186)))), &_td_Object__String8Desc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17557)))), &_td_Object__String16Desc);
  if (i2) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17553)))), 17553);
  goto l40;
l10:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17664));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 17654));
  *(OOC_INT32*)(_check_pointer(i2, 17641)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17707));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 17697));
  *(OOC_INT32*)((_check_pointer(i2, 17688))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17742))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17780))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17811));
  _move_block((_check_pointer(i1, 17747)),(_check_pointer(i2, 17785)),(i0*2));
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17859))+4);
  i2 = (OOC_INT32)c32;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17897))+4);
  i3 = (OOC_INT32)s1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17953));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17907));
  _move_block((_check_pointer(i1, 17864)),((_check_pointer(i2, 17902))+i3*2),(2+i0*2));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17251));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 17241));
  *(OOC_INT32*)(_check_pointer(i2, 17228)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17294));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 17284));
  *(OOC_INT32*)((_check_pointer(i2, 17275))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17329))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17367))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17398));
  _move_block((_check_pointer(i1, 17334)),(_check_pointer(i2, 17372)),(i0*2));
  i0 = (OOC_INT32)s2;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 17447));
  i2 = (OOC_INT32)c32;
  i3 = 0<=i1;
  if (!i3) goto l20;
  i3 = (OOC_INT32)s1;
  i4=0;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17471))+4);
  i5 = _check_pointer(i5, 17476);
  i6 = *(OOC_INT32*)(_check_pointer(i3, 17479));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17495))+4);
  i8 = _check_pointer(i8, 17500);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 17500)));
  *(OOC_UINT16*)(i5+(_check_index((i6+i4), i7, OOC_UINT32, 17476))*2) = i8;
  i4 = i4+1;
  i = i4;
  i5 = i4<=i1;
  if (i5) goto l15_loop;
l20:
  return (Object__String)i2;
  goto l40;
l23:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16271)))), &_td_Object__String8Desc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16708)))), &_td_Object__String16Desc);
  if (i2) goto l28;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16704)))), 16704);
  goto l40;
l28:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16814));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16804));
  *(OOC_INT32*)(_check_pointer(i2, 16791)) = (i4+i3);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16857));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16847));
  *(OOC_INT32*)((_check_pointer(i2, 16838))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i4+i3)+1)));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 16893));
  i4 = 0<i3;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16919))+4);
  i5 = _check_pointer(i5, 16924);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16933))+4);
  i7 = _check_pointer(i7, 16938);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 16938)));
  *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 16924))*2) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l31_loop;
l36:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16979))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17017))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17073));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17027));
  _move_block((_check_pointer(i3, 16984)),((_check_pointer(i2, 17022))+i0*2),(2+i1*2));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l38:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  c8 = (Object__String8)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16371));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16361));
  *(OOC_INT32*)(_check_pointer(i2, 16348)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16413));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 16403));
  *(OOC_INT32*)((_check_pointer(i2, 16394))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16448))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16485))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16516));
  _move_block((_check_pointer(i1, 16453)),(_check_pointer(i2, 16490)),i0);
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16560))+4);
  i2 = (OOC_INT32)c8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16597))+4);
  i3 = (OOC_INT32)s1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16638));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 16607));
  _move_block((_check_pointer(i1, 16565)),((_check_pointer(i2, 16602))+i3),(i0+1));
  i0 = (OOC_INT32)c8;
  return (Object__String)i0;
l40:
  _failed_function(16018); return 0;
  ;
}

Object__String Object__StringDesc_Concat(Object__String s, Object__String t) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)t;
  i0 = (OOC_INT32)Object__Concat2((Object__String)i0, (Object__String)i1);
  return (Object__String)i0;
  ;
}

Object__CharsLatin1 Object__String8Desc_CharsLatin1(Object__String8 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18536))+4);
  return (Object__CharsLatin1)i0;
  ;
}

Object__CharsUTF16 Object__String16Desc_CharsUTF16(Object__String16 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18834))+4);
  return (Object__CharsUTF16)i0;
  ;
}

Object__String Object__StringDesc_ToString(Object__String s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  return (Object__String)i0;
  ;
}

Object__String8 Object__StringDesc_ToString8(Object__String s, OOC_CHAR8 replace) {

  _failed_function(19023); return 0;
  ;
}

Object__String8 Object__String8Desc_ToString8(Object__String8 s, OOC_CHAR8 replace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  return (Object__String8)i0;
  ;
}

Object__String8 Object__String16Desc_ToString8(Object__String16 s, OOC_CHAR8 replace) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__CharsLatin1 data8;
  OOC_INT32 i;
  Object__String8 s8;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 19512));
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], (i1+1));
  data8 = (Object__CharsLatin1)i1;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 19543));
  i3 = 0<=i2;
  if (!i3) goto l12;
  i3 = replace;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19565))+4);
  i5 = _check_pointer(i5, 19570);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 19570))*2);
  i5 = (OOC_UINT16)i5>(OOC_UINT16)255u;
  if (i5) goto l6;
  i5 = _check_pointer(i1, 19697);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19711))+4);
  i7 = _check_pointer(i7, 19716);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 19716))*2);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 19697))) = i7;
  goto l7;
l6:
  i5 = _check_pointer(i1, 19657);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 19657))) = i3;
l7:
  i4 = i4+1;
  i = i4;
  i5 = i4<=i2;
  if (i5) goto l3_loop;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  s8 = (Object__String8)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19774));
  *(OOC_INT32*)(_check_pointer(i2, 19762)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 19789))+4) = i1;
  return (Object__String8)i2;
  ;
}

Object__String16 Object__StringDesc_ToString16(Object__String s) {

  _failed_function(19871); return 0;
  ;
}

Object__String16 Object__String8Desc_ToString16(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__CharsUTF16 data16;
  OOC_INT32 i;
  Object__String16 s16;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 20136));
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i1+1));
  data16 = (Object__CharsUTF16)i1;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 20167));
  i3 = 0<=i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 20190);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20198))+4);
  i6 = _check_pointer(i6, 20203);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 20203)));
  *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 20190))*2) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<=i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s16 = (Object__String16)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 20255));
  *(OOC_INT32*)(_check_pointer(i2, 20243)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 20271))+4) = i1;
  return (Object__String16)i2;
  ;
}

Object__String16 Object__String16Desc_ToString16(Object__String16 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  return (Object__String16)i0;
  ;
}

OOC_CHAR8 Object__StringDesc_Equals(Object__String s, Object__Object y) {

  _failed_function(20446); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_Equals(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20596)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20624)))), &_td_Object__StringDesc, 20624)), 20631));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20612));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20686)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20844)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20841)))), 20841);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 20894));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20907))+4);
  i2 = _check_pointer(i2, 20912);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20919))+4);
  i4 = _check_pointer(i4, 20924);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 20912)));
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 20924))*2);
  i2 = i2==i3;
  
l20:
  if (i2) goto l22;
  i0=0;
  goto l32;
l22:
  i2=0;
l23_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 20894));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20907))+4);
  i3 = _check_pointer(i3, 20912);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20919))+4);
  i5 = _check_pointer(i5, 20924);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 20912)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 20924))*2);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20984));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 20735));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20748))+4);
  i2 = _check_pointer(i2, 20753);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20760))+4);
  i4 = _check_pointer(i4, 20765);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 20753)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 20765)));
  i2 = i2==i3;
  
l39:
  if (i2) goto l41;
  i0=0;
  goto l51;
l41:
  i2=0;
l42_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 20735));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20748))+4);
  i3 = _check_pointer(i3, 20753);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20760))+4);
  i5 = _check_pointer(i5, 20765);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 20753)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 20765)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20825));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(20513); return 0;
  ;
}

OOC_CHAR8 Object__String16Desc_Equals(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21136)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21164)))), &_td_Object__StringDesc, 21164)), 21171));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21152));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21226)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21384)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21381)))), 21381);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21434));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21447))+4);
  i2 = _check_pointer(i2, 21452);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21459))+4);
  i4 = _check_pointer(i4, 21464);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 21452))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 21464))*2);
  i2 = i2==i3;
  
l20:
  if (i2) goto l22;
  i0=0;
  goto l32;
l22:
  i2=0;
l23_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21434));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21447))+4);
  i3 = _check_pointer(i3, 21452);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21459))+4);
  i5 = _check_pointer(i5, 21464);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 21452))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 21464))*2);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21524));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21275));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21288))+4);
  i2 = _check_pointer(i2, 21293);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21300))+4);
  i4 = _check_pointer(i4, 21305);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 21293))*2);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 21305)));
  i2 = i2==i3;
  
l39:
  if (i2) goto l41;
  i0=0;
  goto l51;
l41:
  i2=0;
l42_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21275));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21288))+4);
  i3 = _check_pointer(i3, 21293);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21300))+4);
  i5 = _check_pointer(i5, 21305);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 21293))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 21305)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21365));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(21053); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_EqualsIgnoreCase(Object__String s, Object__Object y) {

  _failed_function(21602); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_EqualsIgnoreCase(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21782)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21810)))), &_td_Object__StringDesc, 21810)), 21817));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21798));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21947)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22115)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22112)))), 22112);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22165));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22182))+4);
  i2 = _check_pointer(i2, 22187);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22199))+4);
  i4 = _check_pointer(i4, 22204);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 22187)));
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 22204))*2);
  i2 = (_cap(i2))==(_cap(i3));
  
l20:
  if (i2) goto l22;
  i0=0;
  goto l32;
l22:
  i2=0;
l23_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22165));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22182))+4);
  i3 = _check_pointer(i3, 22187);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22199))+4);
  i5 = _check_pointer(i5, 22204);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 22187)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 22204))*2);
  i3 = (_cap(i3))==(_cap(i4));
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22265));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21996));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22013))+4);
  i2 = _check_pointer(i2, 22018);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22030))+4);
  i4 = _check_pointer(i4, 22035);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 22018)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 22035)));
  i2 = (_cap(i2))==(_cap(i3));
  
l39:
  if (i2) goto l41;
  i0=0;
  goto l51;
l41:
  i2=0;
l42_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21996));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22013))+4);
  i3 = _check_pointer(i3, 22018);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22030))+4);
  i5 = _check_pointer(i5, 22035);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 22018)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 22035)));
  i3 = (_cap(i3))==(_cap(i4));
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22096));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(21689); return 0;
  ;
}

OOC_CHAR8 Object__String16Desc_EqualsIgnoreCase(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22437)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22465)))), &_td_Object__StringDesc, 22465)), 22472));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22453));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22602)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22770)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22767)))), 22767);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22820));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22837))+4);
  i2 = _check_pointer(i2, 22842);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22854))+4);
  i4 = _check_pointer(i4, 22859);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 22842))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 22859))*2);
  i2 = (_cap(i2))==(_cap(i3));
  
l20:
  if (i2) goto l22;
  i0=0;
  goto l32;
l22:
  i2=0;
l23_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22820));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22837))+4);
  i3 = _check_pointer(i3, 22842);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22854))+4);
  i5 = _check_pointer(i5, 22859);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 22842))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 22859))*2);
  i3 = (_cap(i3))==(_cap(i4));
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22920));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22651));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22668))+4);
  i2 = _check_pointer(i2, 22673);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22685))+4);
  i4 = _check_pointer(i4, 22690);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 22673))*2);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 22690)));
  i2 = (_cap(i2))==(_cap(i3));
  
l39:
  if (i2) goto l41;
  i0=0;
  goto l51;
l41:
  i2=0;
l42_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22651));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22668))+4);
  i3 = _check_pointer(i3, 22673);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22685))+4);
  i5 = _check_pointer(i5, 22690);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 22673))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 22690)));
  i3 = (_cap(i3))==(_cap(i4));
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22751));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(22344); return 0;
  ;
}

OOC_INT32 Object__StringDesc_Compare(Object__String s, Object__Object y) {

  _failed_function(23008); return 0;
  ;
}

OOC_INT32 Object__String8Desc_Compare(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 23560));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23579)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23878)))), &_td_Object__String16Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23875)))), 23875);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 23903));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23931));
  min = i1;
  
l9:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23985))+4);
  i3 = _check_pointer(i3, 23990);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23997))+4);
  i5 = _check_pointer(i5, 24002);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 23990)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(0, i6, OOC_UINT32, 24002))*2);
  i3 = i3==i4;
  
l14:
  if (i3) goto l16;
  i3=0;
  goto l26;
l16:
  i3=0;
l17_loop:
  i3 = i3+1;
  i = i3;
  i4 = i3!=i1;
  if (i4) goto l20;
  i4=0u;
  goto l22;
l20:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23985))+4);
  i4 = _check_pointer(i4, 23990);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23997))+4);
  i6 = _check_pointer(i6, 24002);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 23990)));
  i5 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24002))*2);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24131))+4);
  i0 = _check_pointer(i0, 24136);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24148))+4);
  i2 = _check_pointer(i2, 24153);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 24136)));
  i1 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 24153))*2);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24089));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24078));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 23603));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23631));
  min = i1;
  
l36:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23685))+4);
  i3 = _check_pointer(i3, 23690);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23697))+4);
  i5 = _check_pointer(i5, 23702);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 23690)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 23702)));
  i3 = i3==i4;
  
l41:
  if (i3) goto l43;
  i3=0;
  goto l53;
l43:
  i3=0;
l44_loop:
  i3 = i3+1;
  i = i3;
  i4 = i3!=i1;
  if (i4) goto l47;
  i4=0u;
  goto l49;
l47:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23685))+4);
  i4 = _check_pointer(i4, 23690);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23697))+4);
  i6 = _check_pointer(i6, 23702);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 23690)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 23702)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23831))+4);
  i0 = _check_pointer(i0, 23836);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23848))+4);
  i2 = _check_pointer(i2, 23853);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 23836)));
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 23853)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23789));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 23778));
  return (i0-i1);
l58:
  _failed_function(23483); return 0;
  ;
}

OOC_INT32 Object__String16Desc_Compare(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 24297));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24316)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24615)))), &_td_Object__String16Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24612)))), 24612);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 24640));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24668));
  min = i1;
  
l9:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24722))+4);
  i3 = _check_pointer(i3, 24727);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24734))+4);
  i5 = _check_pointer(i5, 24739);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 24727))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(0, i6, OOC_UINT32, 24739))*2);
  i3 = i3==i4;
  
l14:
  if (i3) goto l16;
  i3=0;
  goto l26;
l16:
  i3=0;
l17_loop:
  i3 = i3+1;
  i = i3;
  i4 = i3!=i1;
  if (i4) goto l20;
  i4=0u;
  goto l22;
l20:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24722))+4);
  i4 = _check_pointer(i4, 24727);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24734))+4);
  i6 = _check_pointer(i6, 24739);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24727))*2);
  i5 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24739))*2);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24868))+4);
  i0 = _check_pointer(i0, 24873);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24885))+4);
  i2 = _check_pointer(i2, 24890);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 24873))*2);
  i1 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 24890))*2);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24826));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24815));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 24340));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24368));
  min = i1;
  
l36:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24422))+4);
  i3 = _check_pointer(i3, 24427);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24434))+4);
  i5 = _check_pointer(i5, 24439);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 24427))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 24439)));
  i3 = i3==i4;
  
l41:
  if (i3) goto l43;
  i3=0;
  goto l53;
l43:
  i3=0;
l44_loop:
  i3 = i3+1;
  i = i3;
  i4 = i3!=i1;
  if (i4) goto l47;
  i4=0u;
  goto l49;
l47:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24422))+4);
  i4 = _check_pointer(i4, 24427);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24434))+4);
  i6 = _check_pointer(i6, 24439);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24427))*2);
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 24439)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24568))+4);
  i0 = _check_pointer(i0, 24573);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24585))+4);
  i2 = _check_pointer(i2, 24590);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 24573))*2);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 24590)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24526));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24515));
  return (i0-i1);
l58:
  _failed_function(24220); return 0;
  ;
}

OOC_INT32 Object__StringDesc_HashCode(Object__String s) {

  _failed_function(24966); return 0;
  ;
}

OOC_INT32 Object__String8Desc_HashCode(Object__String8 s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25084))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25084))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25089)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 25096));
  i0 = HashCode__CharRegion((void*)(_check_pointer(i1, 25089)), i2, 0, i0);
  return i0;
  ;
}

OOC_INT32 Object__String16Desc_HashCode(Object__String16 s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25210))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25210))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25215)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 25222));
  i0 = HashCode__LongCharRegion((void*)(_check_pointer(i1, 25215)), i2, 0, i0);
  return i0;
  ;
}

OOC_CHAR32 Object__StringDesc_CharAt(Object__String s, OOC_INT32 index) {

  _failed_function(25282); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_CharAt(Object__String8 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25544))+4);
  i0 = _check_pointer(i0, 25549);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 25549)));
  return i0;
  ;
}

OOC_CHAR32 Object__String16Desc_CharAt(Object__String16 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25679))+4);
  i1 = _check_pointer(i1, 25684);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 25684))*2);
  _w1 = i1;
  i2 = (OOC_UINT16)i1<(OOC_UINT16)55296u;
  if (i2) goto l3;
  i2 = (OOC_UINT16)i1>=(OOC_UINT16)57344u;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (i2) goto l19;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25957))+4);
  i0 = _check_pointer(i0, 25962);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index((i3+1), i2, OOC_UINT32, 25962))*2);
  i2 = (OOC_UINT16)i1<(OOC_UINT16)56320u;
  if (i2) goto l9;
  i2=0u;
  goto l11;
l9:
  i2 = (OOC_UINT16)56320u<=(OOC_UINT16)i0;
  
l11:
  if (i2) goto l13;
  i2=0u;
  goto l15;
l13:
  i2 = (OOC_UINT16)i0<(OOC_UINT16)57344u;
  
l15:
  if (i2) goto l17;
  return i1;
  goto l20;
l17:
  return ((((_mod(i1,1024))*1024)+(_mod(i0,1024)))+65536);
  goto l20;
l19:
  return i1;
l20:
  _failed_function(25597); return 0;
  ;
}

OOC_CHAR32 Object__StringDesc_NextChar(Object__String s, OOC_INT32 *index) {

  _failed_function(26329); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_NextChar(Object__String8 s, OOC_INT32 *index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26781))+4);
  i0 = _check_pointer(i0, 26786);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = *index;
  *index = (i2+1);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 26786)));
  return i0;
  ;
}

OOC_CHAR32 Object__String16Desc_NextChar(Object__String16 s, OOC_INT32 *index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26954))+4);
  i1 = _check_pointer(i1, 26959);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 26959))*2);
  _w1 = i1;
  i2 = i3+1;
  *index = i2;
  i3 = (OOC_UINT16)i1<(OOC_UINT16)55296u;
  if (i3) goto l3;
  i3 = (OOC_UINT16)i1>=(OOC_UINT16)57344u;
  
  goto l5;
l3:
  i3=1u;
l5:
  if (i3) goto l19;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27247))+4);
  i0 = _check_pointer(i0, 27252);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27252))*2);
  i3 = (OOC_UINT16)i1<(OOC_UINT16)56320u;
  if (i3) goto l9;
  i3=0u;
  goto l11;
l9:
  i3 = (OOC_UINT16)56320u<=(OOC_UINT16)i0;
  
l11:
  if (i3) goto l13;
  i3=0u;
  goto l15;
l13:
  i3 = (OOC_UINT16)i0<(OOC_UINT16)57344u;
  
l15:
  if (i3) goto l17;
  return i1;
  goto l20;
l17:
  *index = (i2+1);
  return ((((_mod(i1,1024))*1024)+(_mod(i0,1024)))+65536);
  goto l20;
l19:
  return i1;
l20:
  _failed_function(26866); return 0;
  ;
}

Object__String Object__StringDesc_Substring(Object__String s, OOC_INT32 start, OOC_INT32 end) {

  _failed_function(27638); return 0;
  ;
}

Object__String8 Object__String8Desc_Substring(Object__String8 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28070))+4);
  i1 = start;
  i2 = end;
  i0 = (OOC_INT32)Object__NewString8(((_check_pointer(i0, 28075))+i1), (i2-i1));
  return (Object__String8)i0;
  ;
}

Object__String16 Object__String16Desc_Substring(Object__String16 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28221))+4);
  i1 = start;
  i2 = end;
  i0 = (OOC_INT32)Object__NewString16(((_check_pointer(i0, 28226))+i1*2), (i2-i1));
  return (Object__String16)i0;
  ;
}

Object__String Object__StringDesc_Trim(Object__String s) {

  _failed_function(28315); return 0;
  ;
}

Object__String8 Object__String8Desc_Trim(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 a;
  OOC_INT32 b;

  a = 0;
  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 28704));
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28717))+4);
  i1 = _check_pointer(i1, 28722);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 28722)));
  i1 = (OOC_UINT8)i1<=(OOC_UINT8)32u;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  a = i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 28704));
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28717))+4);
  i2 = _check_pointer(i2, 28722);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 28722)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 28770));
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28801))+4);
  i3 = _check_pointer(i3, 28806);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 28806)));
  i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
  
l22:
  if (!i3) goto l34;
l25_loop:
  i2 = i2-1;
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l28;
  i3=0u;
  goto l30;
l28:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28801))+4);
  i3 = _check_pointer(i3, 28806);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 28806)));
  i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
  
l30:
  if (i3) goto l25_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28875))+4);
  i0 = (OOC_INT32)Object__NewString8(((_check_pointer(i0, 28880))+i1), (i2-i1));
  return (Object__String8)i0;
  ;
}

Object__String16 Object__String16Desc_Trim(Object__String16 s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 a;
  OOC_INT32 b;

  a = 0;
  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 29009));
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29022))+4);
  i1 = _check_pointer(i1, 29027);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 29027))*2);
  i1 = (OOC_UINT16)i1<=(OOC_UINT16)32u;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  a = i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 29009));
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29022))+4);
  i2 = _check_pointer(i2, 29027);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 29027))*2);
  i2 = (OOC_UINT16)i2<=(OOC_UINT16)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 29075));
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29106))+4);
  i3 = _check_pointer(i3, 29111);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 29111))*2);
  i3 = (OOC_UINT16)i3<=(OOC_UINT16)32u;
  
l22:
  if (!i3) goto l34;
l25_loop:
  i2 = i2-1;
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l28;
  i3=0u;
  goto l30;
l28:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29106))+4);
  i3 = _check_pointer(i3, 29111);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 29111))*2);
  i3 = (OOC_UINT16)i3<=(OOC_UINT16)32u;
  
l30:
  if (i3) goto l25_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29181))+4);
  i0 = (OOC_INT32)Object__NewString16(((_check_pointer(i0, 29186))+i1*2), (i2-i1));
  return (Object__String16)i0;
  ;
}

OOC_INT32 Object__StringDesc_IndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(29260); return 0;
  ;
}

OOC_INT32 Object__String8Desc_IndexOf(Object__String8 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 29743));
  endpos = i1;
  i2 = pos;
  i3 = i2!=i1;
  if (!i3) goto l11;
  i3 = _char;
  
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29791))+4);
  i4 = _check_pointer(i4, 29796);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 29796)));
  i4 = i4==i3;
  if (!i4) goto l6;
  return i2;
l6:
  i2 = i2+1;
  pos = i2;
  i4 = i2!=i1;
  if (i4) goto l3_loop;
l11:
  return (-1);
  ;
}

OOC_INT32 Object__String16Desc_IndexOf(Object__String16 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 endpos;
  OOC_INT32 v;
  OOC_CHAR16 _w1;
  OOC_CHAR16 _w2;

  i0 = _char;
  i1 = (OOC_UINT32)i0<(OOC_UINT32)65536u;
  if (i1) goto l18;
  i0 = i0-65536;
  v = i0;
  i1 = 55296+(i0>>10);
  _w1 = i1;
  i0 = 56320+(_mod(i0,1024));
  _w2 = i0;
  i2 = (OOC_INT32)s;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 30427));
  endpos = i3;
  i4 = pos;
  i5 = i4!=i3;
  if (!i5) goto l17;
l5_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30479))+4);
  i5 = _check_pointer(i5, 30484);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 30484))*2);
  i6 = i4+1;
  i5 = i5==i1;
  if (i5) goto l8;
  i5=0u;
  goto l10;
l8:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30500))+4);
  i5 = _check_pointer(i5, 30505);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i6, i7, OOC_UINT32, 30505))*2);
  i5 = i5==i0;
  
l10:
  if (!i5) goto l12;
  return i4;
l12:
  pos = i6;
  i4 = i6!=i3;
  if (!i4) goto l17;
  i4=i6;
  goto l5_loop;
l17:
  return (-1);
  goto l30;
l18:
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 30088));
  endpos = i2;
  i3 = pos;
  i4 = i3!=i2;
  if (!i4) goto l29;
l21_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30140))+4);
  i4 = _check_pointer(i4, 30145);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 30145))*2);
  i4 = i4==i0;
  if (!i4) goto l24;
  return i3;
l24:
  i3 = i3+1;
  pos = i3;
  i4 = i3!=i2;
  if (i4) goto l21_loop;
l29:
  return (-1);
l30:
  _failed_function(29926); return 0;
  ;
}

OOC_INT32 Object__StringDesc_LastIndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(30785); return 0;
  ;
}

OOC_INT32 Object__String8Desc_LastIndexOf(Object__String8 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = pos;
  i1 = i0>0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)s;
  i2 = _char;
  
l3_loop:
  i0 = i0-1;
  pos = i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31318))+4);
  i3 = _check_pointer(i3, 31323);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 31323)));
  i3 = i3==i2;
  if (!i3) goto l6;
  return i0;
l6:
  i3 = i0>0;
  if (i3) goto l3_loop;
l11:
  return (-1);
  ;
}

OOC_INT32 Object__String16Desc_LastIndexOf(Object__String16 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 v;
  OOC_CHAR16 _w1;
  OOC_CHAR16 _w2;

  i0 = _char;
  i1 = (OOC_UINT32)i0<(OOC_UINT32)65536u;
  if (i1) goto l18;
  i0 = i0-65536;
  v = i0;
  i1 = 55296+(i0>>10);
  _w1 = i1;
  i0 = 56320+(_mod(i0,1024));
  _w2 = i0;
  i2 = pos;
  i3 = i2>0;
  if (!i3) goto l17;
  i3 = (OOC_INT32)s;
  
l5_loop:
  i2 = i2-1;
  pos = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31946))+4);
  i4 = _check_pointer(i4, 31951);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i2, i5, OOC_UINT32, 31951))*2);
  i4 = i4==i1;
  if (i4) goto l8;
  i4=0u;
  goto l10;
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31967))+4);
  i4 = _check_pointer(i4, 31972);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index((i2+1), i5, OOC_UINT32, 31972))*2);
  i4 = i4==i0;
  
l10:
  if (!i4) goto l12;
  return i2;
l12:
  i4 = i2>0;
  if (i4) goto l5_loop;
l17:
  return (-1);
  goto l30;
l18:
  i1 = pos;
  i2 = i1>0;
  if (!i2) goto l29;
  i2 = (OOC_INT32)s;
  
l21_loop:
  i1 = i1-1;
  pos = i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31638))+4);
  i3 = _check_pointer(i3, 31643);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i1, i4, OOC_UINT32, 31643))*2);
  i3 = i3==i0;
  if (!i3) goto l24;
  return i1;
l24:
  i3 = i1>0;
  if (i3) goto l21_loop;
l29:
  return (-1);
l30:
  _failed_function(31441); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_EndsWith(Object__String s, Object__String suffix) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String e;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)suffix;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 32565));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 32582));
  i2 = i2>=i3;
  if (i2) goto l3;
  return 0u;
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 32634));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 32620));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 32644));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32608)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, (i3-i2), i4);
  e = (Object__String)i0;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32668)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  return i0;
l4:
  _failed_function(32253); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_StartsWith(Object__String s, Object__String prefix) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String e;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)prefix;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 33077));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 33094));
  i2 = i2>=i3;
  if (i2) goto l3;
  return 0u;
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 33140));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33120)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, 0, i2);
  e = (Object__String)i0;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33164)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  return i0;
l4:
  _failed_function(32762); return 0;
  ;
}

void OOC_Object_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Object__NewLatin1("", 1);
  Object__emptyString = (Object__String)i0;
  return;
  ;
}

/* --- */
