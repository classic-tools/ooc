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
  *(OOC_INT32*)(_check_pointer(i0, 10726)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 10751))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 10790)),i1);
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 10819);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 10819))) = 0u;
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
  *(OOC_INT32*)(_check_pointer(i0, 11026)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 11051))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 11090)),(i1*2));
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 11123);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 11123))*2) = 0u;
  i0 = (OOC_INT32)s;
  return (Object__String16)i0;
  ;
}

Object__String8 Object__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 11449)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11449)));
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
  i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 12565))*2);
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 12565))*2);
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i0+1));
  d = (Object__CharsUTF16)i2;
  *(OOC_INT32*)(_check_pointer(i1, 12640)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 12660))+4) = i2;
  j = 0;
  i3 = 0<=i0;
  if (!i3) goto l17;
  i3=0;
l12_loop:
  i4 = _check_pointer(i2, 12703);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 12713))*2);
  *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 12703))*2) = i6;
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
  *(OOC_INT32*)(_check_pointer(i3, 13248)) = i2;
  *(OOC_INT32*)((_check_pointer(i3, 13268))+4) = i4;
  j = i1;
  i5 = i1<i0;
  if (!i5) goto l8;
  i5 = (i1*(-1))+i1;
  
l3_loop:
  i6 = _check_pointer(i4, 13319);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 13335))*2);
  *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 13319))*2) = i8;
  i1 = i1+1;
  j = i1;
  i5 = i5+1;
  i6 = i1<i0;
  if (i6) goto l3_loop;
l8:
  i0 = _check_pointer(i4, 13354);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 13354))*2) = 0u;
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
  *(OOC_INT32*)(_check_pointer(i0, 13716)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 13736))+4) = i1;
  i2 = _check_pointer(i1, 13754);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = ch;
  *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT8, 13754))*2) = i4;
  i1 = _check_pointer(i1, 13770);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(1, i2, OOC_UINT8, 13770))*2) = 0u;
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
  *(OOC_INT32*)(_check_pointer(i1, 14273)) = 2;
  *(OOC_INT32*)((_check_pointer(i1, 14295))+4) = i2;
  i0 = i0-65536;
  v = i0;
  i3 = _check_pointer(i2, 14356);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT8, 14356))*2) = (55296+(i0>>10));
  i3 = _check_pointer(i2, 14411);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT16*)(i3+(_check_index(1, i4, OOC_UINT8, 14411))*2) = (56320+(_mod(i0,1024)));
  i0 = _check_pointer(i2, 14467);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT16*)(i0+(_check_index(2, i2, OOC_UINT8, 14467))*2) = 0u;
  return (Object__String)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Object__NewUTF16Char(i0);
  return (Object__String)i0;
l4:
  _failed_function(13826); return 0;
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
  i5 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 15026))*4);
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
  i5 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15204))*4);
  i5 = (OOC_UINT32)i5>=(OOC_UINT32)65536u;
  if (i5) goto l19;
  i5 = _check_pointer(i4, 15442);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15458))*4);
  *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 15442))*2) = i7;
  i2 = i2+1;
  i = i2;
  
  goto l20;
l19:
  i5 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15256))*4);
  i5 = i5-65536;
  v = i5;
  i6 = _check_pointer(i4, 15295);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT16*)(i6+(_check_index(i2, i7, OOC_UINT32, 15295))*2) = (55296+(i5>>10));
  i6 = _check_pointer(i4, 15352);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT16*)(i6+(_check_index((i2+1), i7, OOC_UINT32, 15352))*2) = (56320+(_mod(i5,1024)));
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
  *(OOC_INT32*)(_check_pointer(i0, 15540)) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 15559))+4) = i4;
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4(const OOC_CHAR32 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 15918))*4);
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15918))*4);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16244)))), &_td_Object__String8Desc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17158)))), &_td_Object__String16Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17154)))), 17154);
  goto l40;
l5:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17185)))), &_td_Object__String8Desc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17556)))), &_td_Object__String16Desc);
  if (i2) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17552)))), 17552);
  goto l40;
l10:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17663));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 17653));
  *(OOC_INT32*)(_check_pointer(i2, 17640)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17706));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 17696));
  *(OOC_INT32*)((_check_pointer(i2, 17687))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17741))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17779))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17810));
  _move_block((_check_pointer(i1, 17746)),(_check_pointer(i2, 17784)),(i0*2));
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17858))+4);
  i2 = (OOC_INT32)c32;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17896))+4);
  i3 = (OOC_INT32)s1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17952));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17906));
  _move_block((_check_pointer(i1, 17863)),((_check_pointer(i2, 17901))+i3*2),(2+i0*2));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17250));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 17240));
  *(OOC_INT32*)(_check_pointer(i2, 17227)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17293));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 17283));
  *(OOC_INT32*)((_check_pointer(i2, 17274))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17328))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17366))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17397));
  _move_block((_check_pointer(i1, 17333)),(_check_pointer(i2, 17371)),(i0*2));
  i0 = (OOC_INT32)s2;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 17446));
  i2 = (OOC_INT32)c32;
  i3 = 0<=i1;
  if (!i3) goto l20;
  i3 = (OOC_INT32)s1;
  i4=0;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17470))+4);
  i5 = _check_pointer(i5, 17475);
  i6 = *(OOC_INT32*)(_check_pointer(i3, 17478));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17494))+4);
  i8 = _check_pointer(i8, 17499);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 17499)));
  *(OOC_UINT16*)(i5+(_check_index((i6+i4), i7, OOC_UINT32, 17475))*2) = i8;
  i4 = i4+1;
  i = i4;
  i5 = i4<=i1;
  if (i5) goto l15_loop;
l20:
  return (Object__String)i2;
  goto l40;
l23:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16270)))), &_td_Object__String8Desc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16707)))), &_td_Object__String16Desc);
  if (i2) goto l28;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16703)))), 16703);
  goto l40;
l28:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16813));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16803));
  *(OOC_INT32*)(_check_pointer(i2, 16790)) = (i4+i3);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16856));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16846));
  *(OOC_INT32*)((_check_pointer(i2, 16837))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i4+i3)+1)));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 16892));
  i4 = 0<i3;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16918))+4);
  i5 = _check_pointer(i5, 16923);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16932))+4);
  i7 = _check_pointer(i7, 16937);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 16937)));
  *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 16923))*2) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l31_loop;
l36:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16978))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17016))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17072));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17026));
  _move_block((_check_pointer(i3, 16983)),((_check_pointer(i2, 17021))+i0*2),(2+i1*2));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l38:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  c8 = (Object__String8)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16370));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16360));
  *(OOC_INT32*)(_check_pointer(i2, 16347)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16412));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 16402));
  *(OOC_INT32*)((_check_pointer(i2, 16393))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16447))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16484))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16515));
  _move_block((_check_pointer(i1, 16452)),(_check_pointer(i2, 16489)),i0);
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16559))+4);
  i2 = (OOC_INT32)c8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16596))+4);
  i3 = (OOC_INT32)s1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16637));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 16606));
  _move_block((_check_pointer(i1, 16564)),((_check_pointer(i2, 16601))+i3),(i0+1));
  i0 = (OOC_INT32)c8;
  return (Object__String)i0;
l40:
  _failed_function(16017); return 0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18535))+4);
  return (Object__CharsLatin1)i0;
  ;
}

Object__CharsUTF16 Object__String16Desc_CharsUTF16(Object__String16 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18833))+4);
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

  _failed_function(19022); return 0;
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 19511));
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], (i1+1));
  data8 = (Object__CharsLatin1)i1;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 19542));
  i3 = 0<=i2;
  if (!i3) goto l12;
  i3 = replace;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19564))+4);
  i5 = _check_pointer(i5, 19569);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 19569))*2);
  i5 = (OOC_UINT16)i5>(OOC_UINT16)255u;
  if (i5) goto l6;
  i5 = _check_pointer(i1, 19696);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19710))+4);
  i7 = _check_pointer(i7, 19715);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 19715))*2);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 19696))) = i7;
  goto l7;
l6:
  i5 = _check_pointer(i1, 19656);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 19656))) = i3;
l7:
  i4 = i4+1;
  i = i4;
  i5 = i4<=i2;
  if (i5) goto l3_loop;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  s8 = (Object__String8)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19773));
  *(OOC_INT32*)(_check_pointer(i2, 19761)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 19788))+4) = i1;
  return (Object__String8)i2;
  ;
}

Object__String16 Object__StringDesc_ToString16(Object__String s) {

  _failed_function(19870); return 0;
  ;
}

Object__String16 Object__String8Desc_ToString16(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__CharsUTF16 data16;
  OOC_INT32 i;
  Object__String16 s16;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 20135));
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i1+1));
  data16 = (Object__CharsUTF16)i1;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 20166));
  i3 = 0<=i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 20189);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20197))+4);
  i6 = _check_pointer(i6, 20202);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 20202)));
  *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 20189))*2) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<=i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s16 = (Object__String16)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 20254));
  *(OOC_INT32*)(_check_pointer(i2, 20242)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 20270))+4) = i1;
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

  _failed_function(20445); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_Equals(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20595)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20623)))), &_td_Object__StringDesc, 20623)), 20630));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20611));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20685)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20843)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20840)))), 20840);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 20893));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20906))+4);
  i2 = _check_pointer(i2, 20911);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20918))+4);
  i4 = _check_pointer(i4, 20923);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 20911)));
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 20923))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 20893));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20906))+4);
  i3 = _check_pointer(i3, 20911);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20918))+4);
  i5 = _check_pointer(i5, 20923);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 20911)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 20923))*2);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20983));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 20734));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20747))+4);
  i2 = _check_pointer(i2, 20752);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20759))+4);
  i4 = _check_pointer(i4, 20764);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 20752)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 20764)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 20734));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20747))+4);
  i3 = _check_pointer(i3, 20752);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20759))+4);
  i5 = _check_pointer(i5, 20764);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 20752)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 20764)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20824));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(20512); return 0;
  ;
}

OOC_CHAR8 Object__String16Desc_Equals(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21135)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21163)))), &_td_Object__StringDesc, 21163)), 21170));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21151));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21225)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21383)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21380)))), 21380);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21433));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21446))+4);
  i2 = _check_pointer(i2, 21451);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21458))+4);
  i4 = _check_pointer(i4, 21463);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 21451))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 21463))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21433));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21446))+4);
  i3 = _check_pointer(i3, 21451);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21458))+4);
  i5 = _check_pointer(i5, 21463);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 21451))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 21463))*2);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21523));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21274));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21287))+4);
  i2 = _check_pointer(i2, 21292);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21299))+4);
  i4 = _check_pointer(i4, 21304);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 21292))*2);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 21304)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21274));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21287))+4);
  i3 = _check_pointer(i3, 21292);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21299))+4);
  i5 = _check_pointer(i5, 21304);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 21292))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 21304)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21364));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(21052); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_EqualsIgnoreCase(Object__String s, Object__Object y) {

  _failed_function(21601); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_EqualsIgnoreCase(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21781)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21809)))), &_td_Object__StringDesc, 21809)), 21816));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21797));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21946)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22114)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22111)))), 22111);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22164));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22181))+4);
  i2 = _check_pointer(i2, 22186);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22198))+4);
  i4 = _check_pointer(i4, 22203);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 22186)));
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 22203))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22164));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22181))+4);
  i3 = _check_pointer(i3, 22186);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22198))+4);
  i5 = _check_pointer(i5, 22203);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 22186)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 22203))*2);
  i3 = (_cap(i3))==(_cap(i4));
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22264));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21995));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22012))+4);
  i2 = _check_pointer(i2, 22017);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22029))+4);
  i4 = _check_pointer(i4, 22034);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 22017)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 22034)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21995));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22012))+4);
  i3 = _check_pointer(i3, 22017);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22029))+4);
  i5 = _check_pointer(i5, 22034);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 22017)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 22034)));
  i3 = (_cap(i3))==(_cap(i4));
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22095));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(21688); return 0;
  ;
}

OOC_CHAR8 Object__String16Desc_EqualsIgnoreCase(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22436)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22464)))), &_td_Object__StringDesc, 22464)), 22471));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22452));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22601)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22769)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22766)))), 22766);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22819));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22836))+4);
  i2 = _check_pointer(i2, 22841);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22853))+4);
  i4 = _check_pointer(i4, 22858);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 22841))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 22858))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22819));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22836))+4);
  i3 = _check_pointer(i3, 22841);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22853))+4);
  i5 = _check_pointer(i5, 22858);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 22841))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 22858))*2);
  i3 = (_cap(i3))==(_cap(i4));
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22919));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22650));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22667))+4);
  i2 = _check_pointer(i2, 22672);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22684))+4);
  i4 = _check_pointer(i4, 22689);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 22672))*2);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 22689)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22650));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22667))+4);
  i3 = _check_pointer(i3, 22672);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22684))+4);
  i5 = _check_pointer(i5, 22689);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 22672))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 22689)));
  i3 = (_cap(i3))==(_cap(i4));
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22750));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(22343); return 0;
  ;
}

OOC_INT32 Object__StringDesc_Compare(Object__String s, Object__Object y) {

  _failed_function(23007); return 0;
  ;
}

OOC_INT32 Object__String8Desc_Compare(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 23559));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23578)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23877)))), &_td_Object__String16Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23874)))), 23874);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 23902));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23930));
  min = i1;
  
l9:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23984))+4);
  i3 = _check_pointer(i3, 23989);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23996))+4);
  i5 = _check_pointer(i5, 24001);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 23989)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(0, i6, OOC_UINT32, 24001))*2);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23984))+4);
  i4 = _check_pointer(i4, 23989);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23996))+4);
  i6 = _check_pointer(i6, 24001);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 23989)));
  i5 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24001))*2);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24130))+4);
  i0 = _check_pointer(i0, 24135);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24147))+4);
  i2 = _check_pointer(i2, 24152);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 24135)));
  i1 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 24152))*2);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24088));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24077));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 23602));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23630));
  min = i1;
  
l36:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23684))+4);
  i3 = _check_pointer(i3, 23689);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23696))+4);
  i5 = _check_pointer(i5, 23701);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 23689)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 23701)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23684))+4);
  i4 = _check_pointer(i4, 23689);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23696))+4);
  i6 = _check_pointer(i6, 23701);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 23689)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 23701)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23830))+4);
  i0 = _check_pointer(i0, 23835);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23847))+4);
  i2 = _check_pointer(i2, 23852);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 23835)));
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 23852)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23788));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 23777));
  return (i0-i1);
l58:
  _failed_function(23482); return 0;
  ;
}

OOC_INT32 Object__String16Desc_Compare(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 24296));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24315)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24614)))), &_td_Object__String16Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24611)))), 24611);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 24639));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24667));
  min = i1;
  
l9:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24721))+4);
  i3 = _check_pointer(i3, 24726);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24733))+4);
  i5 = _check_pointer(i5, 24738);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 24726))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(0, i6, OOC_UINT32, 24738))*2);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24721))+4);
  i4 = _check_pointer(i4, 24726);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24733))+4);
  i6 = _check_pointer(i6, 24738);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24726))*2);
  i5 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 24738))*2);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24867))+4);
  i0 = _check_pointer(i0, 24872);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24884))+4);
  i2 = _check_pointer(i2, 24889);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 24872))*2);
  i1 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 24889))*2);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24825));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24814));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 24339));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24367));
  min = i1;
  
l36:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24421))+4);
  i3 = _check_pointer(i3, 24426);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24433))+4);
  i5 = _check_pointer(i5, 24438);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 24426))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 24438)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24421))+4);
  i4 = _check_pointer(i4, 24426);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24433))+4);
  i6 = _check_pointer(i6, 24438);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 24426))*2);
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 24438)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24567))+4);
  i0 = _check_pointer(i0, 24572);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24584))+4);
  i2 = _check_pointer(i2, 24589);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 24572))*2);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 24589)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 24525));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24514));
  return (i0-i1);
l58:
  _failed_function(24219); return 0;
  ;
}

OOC_INT32 Object__StringDesc_HashCode(Object__String s) {

  _failed_function(24965); return 0;
  ;
}

OOC_INT32 Object__String8Desc_HashCode(Object__String8 s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25083))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25083))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25088)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 25095));
  i0 = HashCode__CharRegion((void*)(_check_pointer(i1, 25088)), i2, 0, i0);
  return i0;
  ;
}

OOC_INT32 Object__String16Desc_HashCode(Object__String16 s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25209))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25209))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25214)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 25221));
  i0 = HashCode__LongCharRegion((void*)(_check_pointer(i1, 25214)), i2, 0, i0);
  return i0;
  ;
}

OOC_CHAR32 Object__StringDesc_CharAt(Object__String s, OOC_INT32 index) {

  _failed_function(25281); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_CharAt(Object__String8 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25543))+4);
  i0 = _check_pointer(i0, 25548);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 25548)));
  return i0;
  ;
}

OOC_CHAR32 Object__String16Desc_CharAt(Object__String16 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25678))+4);
  i1 = _check_pointer(i1, 25683);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 25683))*2);
  _w1 = i1;
  i2 = (OOC_UINT16)i1<(OOC_UINT16)55296u;
  if (i2) goto l3;
  i2 = (OOC_UINT16)i1>=(OOC_UINT16)57344u;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (i2) goto l19;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25956))+4);
  i0 = _check_pointer(i0, 25961);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index((i3+1), i2, OOC_UINT32, 25961))*2);
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
  _failed_function(25596); return 0;
  ;
}

OOC_CHAR32 Object__StringDesc_NextChar(Object__String s, OOC_INT32 *index) {

  _failed_function(26328); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_NextChar(Object__String8 s, OOC_INT32 *index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26780))+4);
  i0 = _check_pointer(i0, 26785);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = *index;
  *index = (i2+1);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 26785)));
  return i0;
  ;
}

OOC_CHAR32 Object__String16Desc_NextChar(Object__String16 s, OOC_INT32 *index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26953))+4);
  i1 = _check_pointer(i1, 26958);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 26958))*2);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27246))+4);
  i0 = _check_pointer(i0, 27251);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 27251))*2);
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
  _failed_function(26865); return 0;
  ;
}

Object__String Object__StringDesc_Substring(Object__String s, OOC_INT32 start, OOC_INT32 end) {

  _failed_function(27637); return 0;
  ;
}

Object__String8 Object__String8Desc_Substring(Object__String8 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28069))+4);
  i1 = start;
  i2 = end;
  i0 = (OOC_INT32)Object__NewString8(((_check_pointer(i0, 28074))+i1), (i2-i1));
  return (Object__String8)i0;
  ;
}

Object__String16 Object__String16Desc_Substring(Object__String16 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28220))+4);
  i1 = start;
  i2 = end;
  i0 = (OOC_INT32)Object__NewString16(((_check_pointer(i0, 28225))+i1*2), (i2-i1));
  return (Object__String16)i0;
  ;
}

Object__String Object__StringDesc_Trim(Object__String s) {

  _failed_function(28314); return 0;
  ;
}

Object__String8 Object__String8Desc_Trim(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 a;
  OOC_INT32 b;

  a = 0;
  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 28703));
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28716))+4);
  i1 = _check_pointer(i1, 28721);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 28721)));
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
  i2 = *(OOC_INT32*)(_check_pointer(i0, 28703));
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28716))+4);
  i2 = _check_pointer(i2, 28721);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 28721)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 28769));
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28800))+4);
  i3 = _check_pointer(i3, 28805);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 28805)));
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28800))+4);
  i3 = _check_pointer(i3, 28805);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 28805)));
  i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
  
l30:
  if (i3) goto l25_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28874))+4);
  i0 = (OOC_INT32)Object__NewString8(((_check_pointer(i0, 28879))+i1), (i2-i1));
  return (Object__String8)i0;
  ;
}

Object__String16 Object__String16Desc_Trim(Object__String16 s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 a;
  OOC_INT32 b;

  a = 0;
  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 29008));
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29021))+4);
  i1 = _check_pointer(i1, 29026);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 29026))*2);
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
  i2 = *(OOC_INT32*)(_check_pointer(i0, 29008));
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29021))+4);
  i2 = _check_pointer(i2, 29026);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 29026))*2);
  i2 = (OOC_UINT16)i2<=(OOC_UINT16)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 29074));
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29105))+4);
  i3 = _check_pointer(i3, 29110);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 29110))*2);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29105))+4);
  i3 = _check_pointer(i3, 29110);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 29110))*2);
  i3 = (OOC_UINT16)i3<=(OOC_UINT16)32u;
  
l30:
  if (i3) goto l25_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29180))+4);
  i0 = (OOC_INT32)Object__NewString16(((_check_pointer(i0, 29185))+i1*2), (i2-i1));
  return (Object__String16)i0;
  ;
}

OOC_INT32 Object__StringDesc_IndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(29259); return 0;
  ;
}

OOC_INT32 Object__String8Desc_IndexOf(Object__String8 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 29742));
  endpos = i1;
  i2 = pos;
  i3 = i2!=i1;
  if (!i3) goto l11;
  i3 = _char;
  
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29790))+4);
  i4 = _check_pointer(i4, 29795);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 29795)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i2, 30426));
  endpos = i3;
  i4 = pos;
  i5 = i4!=i3;
  if (!i5) goto l17;
l5_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30478))+4);
  i5 = _check_pointer(i5, 30483);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 30483))*2);
  i6 = i4+1;
  i5 = i5==i1;
  if (i5) goto l8;
  i5=0u;
  goto l10;
l8:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30499))+4);
  i5 = _check_pointer(i5, 30504);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i6, i7, OOC_UINT32, 30504))*2);
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
  i2 = *(OOC_INT32*)(_check_pointer(i1, 30087));
  endpos = i2;
  i3 = pos;
  i4 = i3!=i2;
  if (!i4) goto l29;
l21_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30139))+4);
  i4 = _check_pointer(i4, 30144);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 30144))*2);
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
  _failed_function(29925); return 0;
  ;
}

OOC_INT32 Object__StringDesc_LastIndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(30784); return 0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31317))+4);
  i3 = _check_pointer(i3, 31322);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 31322)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31945))+4);
  i4 = _check_pointer(i4, 31950);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i2, i5, OOC_UINT32, 31950))*2);
  i4 = i4==i1;
  if (i4) goto l8;
  i4=0u;
  goto l10;
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31966))+4);
  i4 = _check_pointer(i4, 31971);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index((i2+1), i5, OOC_UINT32, 31971))*2);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31637))+4);
  i3 = _check_pointer(i3, 31642);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i1, i4, OOC_UINT32, 31642))*2);
  i3 = i3==i0;
  if (!i3) goto l24;
  return i1;
l24:
  i3 = i1>0;
  if (i3) goto l21_loop;
l29:
  return (-1);
l30:
  _failed_function(31440); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_EndsWith(Object__String s, Object__String suffix) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String e;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)suffix;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 32564));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 32581));
  i2 = i2>=i3;
  if (i2) goto l3;
  return 0u;
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 32633));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 32619));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 32643));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32607)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, (i3-i2), i4);
  e = (Object__String)i0;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32667)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  return i0;
l4:
  _failed_function(32252); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_StartsWith(Object__String s, Object__String prefix) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String e;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)prefix;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 33076));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 33093));
  i2 = i2>=i3;
  if (i2) goto l3;
  return 0u;
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 33139));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33119)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, 0, i2);
  e = (Object__String)i0;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33163)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  return i0;
l4:
  _failed_function(32761); return 0;
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
