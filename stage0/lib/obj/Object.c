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
      i0 = *(OOC_UINT8*)(_check_pointer(i0, 6113));
      i0 = i0!=0u;
      if (!i0) goto l12;
      i0 = (OOC_INT32)name;
      i1=0;
l3_loop:
      i2 = i;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 6148))+i1);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 280, OOC_UINT32, 6137))) = i3;
      i = (i2+1);
      i1 = i1+1;
      j = i1;
      i2 = i1!=128;
      if (i2) goto l6;
      i2=0u;
      goto l8;
l6:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 6113))+i1);
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
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 280, OOC_UINT32, 6436))) = i4;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6605))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6612));
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6627))) = 46u;
  i = (i0+1);
  i0 = (OOC_INT32)_struct;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6665))+12);
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6680))) = 32u;
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6707))) = 97u;
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6734))) = 116u;
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6761))) = 32u;
  i1 = (OOC_INT32)x;
  i = (i0+1);
  Object__ObjectDesc_ToString_AppendHex((_type_cast_fast(OOC_INT32, OOC_INT32, i1)));
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 7000))) = 62u;
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
  *(OOC_INT32*)(_check_pointer(i0, 10419)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 10444))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 10483)),i1);
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 10512);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 10512))) = 0u;
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
  *(OOC_INT32*)(_check_pointer(i0, 10719)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 10744))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 10783)),(i1*2));
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 10816);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 10816))*2) = 0u;
  i0 = (OOC_INT32)s;
  return (Object__String16)i0;
  ;
}

Object__String8 Object__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 11142)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11142)));
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
  i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 12258))*2);
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 12258))*2);
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s = (Object__String16)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i0+1));
  d = (Object__CharsUTF16)i2;
  *(OOC_INT32*)(_check_pointer(i1, 12333)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 12353))+4) = i2;
  j = 0;
  i3 = 0<=i0;
  if (!i3) goto l17;
  i3=0;
l12_loop:
  i4 = _check_pointer(i2, 12396);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 12406))*2);
  *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 12396))*2) = i6;
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
  *(OOC_INT32*)(_check_pointer(i3, 12941)) = i2;
  *(OOC_INT32*)((_check_pointer(i3, 12961))+4) = i4;
  j = i1;
  i5 = i1<i0;
  if (!i5) goto l8;
  i5 = (i1*(-1))+i1;
  
l3_loop:
  i6 = _check_pointer(i4, 13012);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 13028))*2);
  *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 13012))*2) = i8;
  i1 = i1+1;
  j = i1;
  i5 = i5+1;
  i6 = i1<i0;
  if (i6) goto l3_loop;
l8:
  i0 = _check_pointer(i4, 13047);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT16*)(i0+(_check_index(i2, i1, OOC_UINT32, 13047))*2) = 0u;
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
  *(OOC_INT32*)(_check_pointer(i0, 13409)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 13429))+4) = i1;
  i2 = _check_pointer(i1, 13447);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = ch;
  *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT8, 13447))*2) = i4;
  i1 = _check_pointer(i1, 13463);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(1, i2, OOC_UINT8, 13463))*2) = 0u;
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
  *(OOC_INT32*)(_check_pointer(i1, 13966)) = 2;
  *(OOC_INT32*)((_check_pointer(i1, 13988))+4) = i2;
  i0 = i0-65536;
  v = i0;
  i3 = _check_pointer(i2, 14049);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT8, 14049))*2) = (55296+(i0>>10));
  i3 = _check_pointer(i2, 14104);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT16*)(i3+(_check_index(1, i4, OOC_UINT8, 14104))*2) = (56320+(_mod(i0,1024)));
  i0 = _check_pointer(i2, 14160);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT16*)(i0+(_check_index(2, i2, OOC_UINT8, 14160))*2) = 0u;
  return (Object__String)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Object__NewUTF16Char(i0);
  return (Object__String)i0;
l4:
  _failed_function(13519); return 0;
  ;
}

Object__String Object__Concat2(Object__String s1, Object__String s2) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Object__String8 c8;
  Object__String16 c32;
  OOC_INT32 i;

  i0 = (OOC_INT32)s1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15327)))), &_td_Object__String8Desc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16241)))), &_td_Object__String16Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16237)))), 16237);
  goto l40;
l5:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16268)))), &_td_Object__String8Desc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16639)))), &_td_Object__String16Desc);
  if (i2) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16635)))), 16635);
  goto l40;
l10:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16746));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16736));
  *(OOC_INT32*)(_check_pointer(i2, 16723)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16789));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 16779));
  *(OOC_INT32*)((_check_pointer(i2, 16770))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16824))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16862))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16893));
  _move_block((_check_pointer(i1, 16829)),(_check_pointer(i2, 16867)),(i0*2));
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16941))+4);
  i2 = (OOC_INT32)c32;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16979))+4);
  i3 = (OOC_INT32)s1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17035));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 16989));
  _move_block((_check_pointer(i1, 16946)),((_check_pointer(i2, 16984))+i3*2),(2+i0*2));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16333));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 16323));
  *(OOC_INT32*)(_check_pointer(i2, 16310)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16376));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 16366));
  *(OOC_INT32*)((_check_pointer(i2, 16357))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16411))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16449))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16480));
  _move_block((_check_pointer(i1, 16416)),(_check_pointer(i2, 16454)),(i0*2));
  i0 = (OOC_INT32)s2;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16529));
  i2 = (OOC_INT32)c32;
  i3 = 0<=i1;
  if (!i3) goto l20;
  i3 = (OOC_INT32)s1;
  i4=0;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16553))+4);
  i5 = _check_pointer(i5, 16558);
  i6 = *(OOC_INT32*)(_check_pointer(i3, 16561));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16577))+4);
  i8 = _check_pointer(i8, 16582);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 16582)));
  *(OOC_UINT16*)(i5+(_check_index((i6+i4), i7, OOC_UINT32, 16558))*2) = i8;
  i4 = i4+1;
  i = i4;
  i5 = i4<=i1;
  if (i5) goto l15_loop;
l20:
  return (Object__String)i2;
  goto l40;
l23:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15353)))), &_td_Object__String8Desc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15790)))), &_td_Object__String16Desc);
  if (i2) goto l28;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15786)))), 15786);
  goto l40;
l28:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  c32 = (Object__String16)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15896));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 15886));
  *(OOC_INT32*)(_check_pointer(i2, 15873)) = (i4+i3);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15939));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 15929));
  *(OOC_INT32*)((_check_pointer(i2, 15920))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], ((i4+i3)+1)));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15975));
  i4 = 0<i3;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16001))+4);
  i5 = _check_pointer(i5, 16006);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16015))+4);
  i7 = _check_pointer(i7, 16020);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 16020)));
  *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 16006))*2) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l31_loop;
l36:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16061))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16099))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16155));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16109));
  _move_block((_check_pointer(i3, 16066)),((_check_pointer(i2, 16104))+i0*2),(2+i1*2));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l38:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  c8 = (Object__String8)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15453));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 15443));
  *(OOC_INT32*)(_check_pointer(i2, 15430)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15495));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15485));
  *(OOC_INT32*)((_check_pointer(i2, 15476))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15530))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15567))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15598));
  _move_block((_check_pointer(i1, 15535)),(_check_pointer(i2, 15572)),i0);
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15642))+4);
  i2 = (OOC_INT32)c8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15679))+4);
  i3 = (OOC_INT32)s1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15720));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15689));
  _move_block((_check_pointer(i1, 15647)),((_check_pointer(i2, 15684))+i3),(i0+1));
  i0 = (OOC_INT32)c8;
  return (Object__String)i0;
l40:
  _failed_function(15100); return 0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17618))+4);
  return (Object__CharsLatin1)i0;
  ;
}

Object__CharsUTF16 Object__String16Desc_CharsUTF16(Object__String16 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17916))+4);
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

  _failed_function(18105); return 0;
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 18594));
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], (i1+1));
  data8 = (Object__CharsLatin1)i1;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 18625));
  i3 = 0<=i2;
  if (!i3) goto l12;
  i3 = replace;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18647))+4);
  i5 = _check_pointer(i5, 18652);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 18652))*2);
  i5 = (OOC_UINT16)i5>(OOC_UINT16)255u;
  if (i5) goto l6;
  i5 = _check_pointer(i1, 18779);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18793))+4);
  i7 = _check_pointer(i7, 18798);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 18798))*2);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 18779))) = i7;
  goto l7;
l6:
  i5 = _check_pointer(i1, 18739);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 18739))) = i3;
l7:
  i4 = i4+1;
  i = i4;
  i5 = i4<=i2;
  if (i5) goto l3_loop;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  s8 = (Object__String8)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 18856));
  *(OOC_INT32*)(_check_pointer(i2, 18844)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 18871))+4) = i1;
  return (Object__String8)i2;
  ;
}

Object__String16 Object__StringDesc_ToString16(Object__String s) {

  _failed_function(18953); return 0;
  ;
}

Object__String16 Object__String8Desc_ToString16(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__CharsUTF16 data16;
  OOC_INT32 i;
  Object__String16 s16;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 19218));
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUTF16.baseTypes[0], (i1+1));
  data16 = (Object__CharsUTF16)i1;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 19249));
  i3 = 0<=i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 19272);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19280))+4);
  i6 = _check_pointer(i6, 19285);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 19285)));
  *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 19272))*2) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<=i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String16.baseTypes[0]);
  s16 = (Object__String16)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19337));
  *(OOC_INT32*)(_check_pointer(i2, 19325)) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 19353))+4) = i1;
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

  _failed_function(19528); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_Equals(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19678)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19706)))), &_td_Object__StringDesc, 19706)), 19713));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 19694));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19768)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19926)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19923)))), 19923);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 19976));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19989))+4);
  i2 = _check_pointer(i2, 19994);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20001))+4);
  i4 = _check_pointer(i4, 20006);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 19994)));
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 20006))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 19976));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19989))+4);
  i3 = _check_pointer(i3, 19994);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20001))+4);
  i5 = _check_pointer(i5, 20006);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 19994)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 20006))*2);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20066));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 19817));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19830))+4);
  i2 = _check_pointer(i2, 19835);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19842))+4);
  i4 = _check_pointer(i4, 19847);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 19835)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 19847)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 19817));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19830))+4);
  i3 = _check_pointer(i3, 19835);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19842))+4);
  i5 = _check_pointer(i5, 19847);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 19835)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 19847)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 19907));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(19595); return 0;
  ;
}

OOC_CHAR8 Object__String16Desc_Equals(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20218)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20246)))), &_td_Object__StringDesc, 20246)), 20253));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20234));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20308)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20466)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20463)))), 20463);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 20516));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20529))+4);
  i2 = _check_pointer(i2, 20534);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20541))+4);
  i4 = _check_pointer(i4, 20546);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 20534))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 20546))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 20516));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20529))+4);
  i3 = _check_pointer(i3, 20534);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20541))+4);
  i5 = _check_pointer(i5, 20546);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 20534))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 20546))*2);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20606));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 20357));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20370))+4);
  i2 = _check_pointer(i2, 20375);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20382))+4);
  i4 = _check_pointer(i4, 20387);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 20375))*2);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 20387)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 20357));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20370))+4);
  i3 = _check_pointer(i3, 20375);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20382))+4);
  i5 = _check_pointer(i5, 20387);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 20375))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 20387)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20447));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(20135); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_EqualsIgnoreCase(Object__String s, Object__Object y) {

  _failed_function(20684); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_EqualsIgnoreCase(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20864)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20892)))), &_td_Object__StringDesc, 20892)), 20899));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 20880));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21029)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21197)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21194)))), 21194);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21247));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21264))+4);
  i2 = _check_pointer(i2, 21269);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21281))+4);
  i4 = _check_pointer(i4, 21286);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 21269)));
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 21286))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21247));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21264))+4);
  i3 = _check_pointer(i3, 21269);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21281))+4);
  i5 = _check_pointer(i5, 21286);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 21269)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 21286))*2);
  i3 = (_cap(i3))==(_cap(i4));
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21347));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21078));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21095))+4);
  i2 = _check_pointer(i2, 21100);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21112))+4);
  i4 = _check_pointer(i4, 21117);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 21100)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 21117)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21078));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21095))+4);
  i3 = _check_pointer(i3, 21100);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21112))+4);
  i5 = _check_pointer(i5, 21117);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 21100)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 21117)));
  i3 = (_cap(i3))==(_cap(i4));
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21178));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(20771); return 0;
  ;
}

OOC_CHAR8 Object__String16Desc_EqualsIgnoreCase(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21519)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21547)))), &_td_Object__StringDesc, 21547)), 21554));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21535));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21684)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21852)))), &_td_Object__String16Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21849)))), 21849);
  goto l54;
l15:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21902));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21919))+4);
  i2 = _check_pointer(i2, 21924);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21936))+4);
  i4 = _check_pointer(i4, 21941);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 21924))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 21941))*2);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21902));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21919))+4);
  i3 = _check_pointer(i3, 21924);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21936))+4);
  i5 = _check_pointer(i5, 21941);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 21924))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 21941))*2);
  i3 = (_cap(i3))==(_cap(i4));
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22002));
  return (i0==i1);
  goto l54;
l34:
  i = 0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21733));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=0u;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21750))+4);
  i2 = _check_pointer(i2, 21755);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21767))+4);
  i4 = _check_pointer(i4, 21772);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 21755))*2);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 21772)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 21733));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=0u;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21750))+4);
  i3 = _check_pointer(i3, 21755);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21767))+4);
  i5 = _check_pointer(i5, 21772);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 21755))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 21772)));
  i3 = (_cap(i3))==(_cap(i4));
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21833));
  return (i0==i1);
  goto l54;
l53:
  return 0u;
l54:
  _failed_function(21426); return 0;
  ;
}

OOC_INT32 Object__StringDesc_Compare(Object__String s, Object__Object y) {

  _failed_function(22090); return 0;
  ;
}

OOC_INT32 Object__String8Desc_Compare(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 22642));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22661)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22960)))), &_td_Object__String16Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22957)))), 22957);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 22985));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23013));
  min = i1;
  
l9:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23067))+4);
  i3 = _check_pointer(i3, 23072);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23079))+4);
  i5 = _check_pointer(i5, 23084);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 23072)));
  i4 = *(OOC_UINT16*)(i5+(_check_index(0, i6, OOC_UINT32, 23084))*2);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23067))+4);
  i4 = _check_pointer(i4, 23072);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23079))+4);
  i6 = _check_pointer(i6, 23084);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 23072)));
  i5 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 23084))*2);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23213))+4);
  i0 = _check_pointer(i0, 23218);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23230))+4);
  i2 = _check_pointer(i2, 23235);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 23218)));
  i1 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 23235))*2);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23171));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 23160));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 22685));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 22713));
  min = i1;
  
l36:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22767))+4);
  i3 = _check_pointer(i3, 22772);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22779))+4);
  i5 = _check_pointer(i5, 22784);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 22772)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 22784)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22767))+4);
  i4 = _check_pointer(i4, 22772);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22779))+4);
  i6 = _check_pointer(i6, 22784);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 22772)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 22784)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22913))+4);
  i0 = _check_pointer(i0, 22918);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22930))+4);
  i2 = _check_pointer(i2, 22935);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 22918)));
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 22935)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 22871));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 22860));
  return (i0-i1);
l58:
  _failed_function(22565); return 0;
  ;
}

OOC_INT32 Object__String16Desc_Compare(Object__String16 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 23379));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23398)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23697)))), &_td_Object__String16Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23694)))), 23694);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 23722));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23750));
  min = i1;
  
l9:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23804))+4);
  i3 = _check_pointer(i3, 23809);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23816))+4);
  i5 = _check_pointer(i5, 23821);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 23809))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(0, i6, OOC_UINT32, 23821))*2);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23804))+4);
  i4 = _check_pointer(i4, 23809);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23816))+4);
  i6 = _check_pointer(i6, 23821);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 23809))*2);
  i5 = *(OOC_UINT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 23821))*2);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23950))+4);
  i0 = _check_pointer(i0, 23955);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23967))+4);
  i2 = _check_pointer(i2, 23972);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 23955))*2);
  i1 = *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 23972))*2);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23908));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 23897));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 23422));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23450));
  min = i1;
  
l36:
  i = 0;
  i3 = 0!=i1;
  if (i3) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23504))+4);
  i3 = _check_pointer(i3, 23509);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23516))+4);
  i5 = _check_pointer(i5, 23521);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 23509))*2);
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 23521)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23504))+4);
  i4 = _check_pointer(i4, 23509);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23516))+4);
  i6 = _check_pointer(i6, 23521);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 23509))*2);
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 23521)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23650))+4);
  i0 = _check_pointer(i0, 23655);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23667))+4);
  i2 = _check_pointer(i2, 23672);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i3, i1, OOC_UINT32, 23655))*2);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 23672)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 23608));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 23597));
  return (i0-i1);
l58:
  _failed_function(23302); return 0;
  ;
}

OOC_INT32 Object__StringDesc_HashCode(Object__String s) {

  _failed_function(24048); return 0;
  ;
}

OOC_INT32 Object__String8Desc_HashCode(Object__String8 s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24166))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24166))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 24171)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24178));
  i0 = HashCode__CharRegion((void*)(_check_pointer(i1, 24171)), i2, 0, i0);
  return i0;
  ;
}

OOC_INT32 Object__String16Desc_HashCode(Object__String16 s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24292))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24292))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 24297)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 24304));
  i0 = HashCode__LongCharRegion((void*)(_check_pointer(i1, 24297)), i2, 0, i0);
  return i0;
  ;
}

OOC_CHAR32 Object__StringDesc_CharAt(Object__String s, OOC_INT32 index) {

  _failed_function(24364); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_CharAt(Object__String8 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24626))+4);
  i0 = _check_pointer(i0, 24631);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 24631)));
  return i0;
  ;
}

OOC_CHAR32 Object__String16Desc_CharAt(Object__String16 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24761))+4);
  i1 = _check_pointer(i1, 24766);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 24766))*2);
  _w1 = i1;
  i2 = (OOC_UINT16)i1<(OOC_UINT16)55296u;
  if (i2) goto l3;
  i2 = (OOC_UINT16)i1>=(OOC_UINT16)57344u;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (i2) goto l19;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25039))+4);
  i0 = _check_pointer(i0, 25044);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index((i3+1), i2, OOC_UINT32, 25044))*2);
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
  _failed_function(24679); return 0;
  ;
}

OOC_CHAR32 Object__StringDesc_NextChar(Object__String s, OOC_INT32 *index) {

  _failed_function(25411); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_NextChar(Object__String8 s, OOC_INT32 *index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25863))+4);
  i0 = _check_pointer(i0, 25868);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = *index;
  *index = (i2+1);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 25868)));
  return i0;
  ;
}

OOC_CHAR32 Object__String16Desc_NextChar(Object__String16 s, OOC_INT32 *index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26036))+4);
  i1 = _check_pointer(i1, 26041);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 26041))*2);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26329))+4);
  i0 = _check_pointer(i0, 26334);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i2, i3, OOC_UINT32, 26334))*2);
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
  _failed_function(25948); return 0;
  ;
}

Object__String Object__StringDesc_Substring(Object__String s, OOC_INT32 start, OOC_INT32 end) {

  _failed_function(26720); return 0;
  ;
}

Object__String8 Object__String8Desc_Substring(Object__String8 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27152))+4);
  i1 = start;
  i2 = end;
  i0 = (OOC_INT32)Object__NewString8(((_check_pointer(i0, 27157))+i1), (i2-i1));
  return (Object__String8)i0;
  ;
}

Object__String16 Object__String16Desc_Substring(Object__String16 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27303))+4);
  i1 = start;
  i2 = end;
  i0 = (OOC_INT32)Object__NewString16(((_check_pointer(i0, 27308))+i1*2), (i2-i1));
  return (Object__String16)i0;
  ;
}

Object__String Object__StringDesc_Trim(Object__String s) {

  _failed_function(27397); return 0;
  ;
}

Object__String8 Object__String8Desc_Trim(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 a;
  OOC_INT32 b;

  a = 0;
  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 27786));
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27799))+4);
  i1 = _check_pointer(i1, 27804);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 27804)));
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
  i2 = *(OOC_INT32*)(_check_pointer(i0, 27786));
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27799))+4);
  i2 = _check_pointer(i2, 27804);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 27804)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 27852));
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27883))+4);
  i3 = _check_pointer(i3, 27888);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 27888)));
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27883))+4);
  i3 = _check_pointer(i3, 27888);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 27888)));
  i3 = (OOC_UINT8)i3<=(OOC_UINT8)32u;
  
l30:
  if (i3) goto l25_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27957))+4);
  i0 = (OOC_INT32)Object__NewString8(((_check_pointer(i0, 27962))+i1), (i2-i1));
  return (Object__String8)i0;
  ;
}

Object__String16 Object__String16Desc_Trim(Object__String16 s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 a;
  OOC_INT32 b;

  a = 0;
  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 28091));
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28104))+4);
  i1 = _check_pointer(i1, 28109);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 28109))*2);
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
  i2 = *(OOC_INT32*)(_check_pointer(i0, 28091));
  i2 = i1!=i2;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28104))+4);
  i2 = _check_pointer(i2, 28109);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 28109))*2);
  i2 = (OOC_UINT16)i2<=(OOC_UINT16)32u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 28157));
  b = i2;
  i3 = i2!=i1;
  if (i3) goto l20;
  i3=0u;
  goto l22;
l20:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28188))+4);
  i3 = _check_pointer(i3, 28193);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 28193))*2);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28188))+4);
  i3 = _check_pointer(i3, 28193);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 28193))*2);
  i3 = (OOC_UINT16)i3<=(OOC_UINT16)32u;
  
l30:
  if (i3) goto l25_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28263))+4);
  i0 = (OOC_INT32)Object__NewString16(((_check_pointer(i0, 28268))+i1*2), (i2-i1));
  return (Object__String16)i0;
  ;
}

OOC_INT32 Object__StringDesc_IndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(28342); return 0;
  ;
}

OOC_INT32 Object__String8Desc_IndexOf(Object__String8 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 28825));
  endpos = i1;
  i2 = pos;
  i3 = i2!=i1;
  if (!i3) goto l11;
  i3 = _char;
  
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28873))+4);
  i4 = _check_pointer(i4, 28878);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 28878)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i2, 29509));
  endpos = i3;
  i4 = pos;
  i5 = i4!=i3;
  if (!i5) goto l17;
l5_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 29561))+4);
  i5 = _check_pointer(i5, 29566);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 29566))*2);
  i6 = i4+1;
  i5 = i5==i1;
  if (i5) goto l8;
  i5=0u;
  goto l10;
l8:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 29582))+4);
  i5 = _check_pointer(i5, 29587);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i6, i7, OOC_UINT32, 29587))*2);
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
  i2 = *(OOC_INT32*)(_check_pointer(i1, 29170));
  endpos = i2;
  i3 = pos;
  i4 = i3!=i2;
  if (!i4) goto l29;
l21_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29222))+4);
  i4 = _check_pointer(i4, 29227);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 29227))*2);
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
  _failed_function(29008); return 0;
  ;
}

OOC_INT32 Object__StringDesc_LastIndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(29867); return 0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30400))+4);
  i3 = _check_pointer(i3, 30405);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 30405)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31028))+4);
  i4 = _check_pointer(i4, 31033);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i2, i5, OOC_UINT32, 31033))*2);
  i4 = i4==i1;
  if (i4) goto l8;
  i4=0u;
  goto l10;
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31049))+4);
  i4 = _check_pointer(i4, 31054);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index((i2+1), i5, OOC_UINT32, 31054))*2);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30720))+4);
  i3 = _check_pointer(i3, 30725);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i1, i4, OOC_UINT32, 30725))*2);
  i3 = i3==i0;
  if (!i3) goto l24;
  return i1;
l24:
  i3 = i1>0;
  if (i3) goto l21_loop;
l29:
  return (-1);
l30:
  _failed_function(30523); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_EndsWith(Object__String s, Object__String suffix) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String e;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)suffix;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 31647));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 31664));
  i2 = i2>=i3;
  if (i2) goto l3;
  return 0u;
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 31716));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 31702));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 31726));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31690)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, (i3-i2), i4);
  e = (Object__String)i0;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31750)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  return i0;
l4:
  _failed_function(31335); return 0;
  ;
}

OOC_CHAR8 Object__StringDesc_StartsWith(Object__String s, Object__String prefix) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String e;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)prefix;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 32159));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 32176));
  i2 = i2>=i3;
  if (i2) goto l3;
  return 0u;
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 32222));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32202)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, 0, i2);
  e = (Object__String)i0;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32246)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  return i0;
l4:
  _failed_function(31844); return 0;
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
