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
      i1 = *(OOC_UINT8*)(_check_pointer(i0, 5382));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (!i1) goto l12;
      i1=0;
l3_loop:
      i2 = i;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 5417))+i1);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 280, OOC_UINT32, 5406))) = i3;
      i = (i2+1);
      i1 = i1+1;
      j = i1;
      i2 = i1!=128;
      if (i2) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 5382))+i1);
      i2 = i2!=(OOC_CHAR8)'\000';
      
l8:
      if (i2) goto l3_loop;
l12:
      return;
      ;
    }

    
    void Object__ObjectDesc_ToString_AppendHex(OOC_INT32 x) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = i;
      i1=7;
l1_loop:
      i2 = x;
      i3 = (_mod(i2,16))+48;
      i4 = i3>57;
      if (!i4) goto l5;
      i3 = i3+39;
      
l5:
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0+i1), 280, OOC_UINT32, 5705))) = i3;
      i1 = i1+-1;
      i3 = i1>=0;
      x = (i2>>4);
      if (i3) goto l1_loop;
l9:
      i = (i0+8);
      return;
      ;
    }


  _copy_8((const void*)"<",(void*)(OOC_INT32)str,280);
  i0 = (OOC_INT32)x;
  i = 1;
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  _struct = (RT0__Struct)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5874))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5881));
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 5896))) = (OOC_CHAR8)'.';
  i = (i0+1);
  i0 = (OOC_INT32)_struct;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5934))+12);
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 5949))) = (OOC_CHAR8)' ';
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 5976))) = (OOC_CHAR8)'a';
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6003))) = (OOC_CHAR8)'t';
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6030))) = (OOC_CHAR8)' ';
  i1 = (OOC_INT32)x;
  i = (i0+1);
  Object__ObjectDesc_ToString_AppendHex((_type_cast_fast(OOC_INT32, OOC_PTR, i1)));
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 6269))) = (OOC_CHAR8)'>';
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
  return (_type_cast_fast(OOC_INT32, OOC_PTR, i0));
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
  *(OOC_INT32*)(_check_pointer(i0, 9904)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 9929))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 9968)),i1);
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 9997);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = length;
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 9997))) = (OOC_CHAR8)'\000';
  i0 = (OOC_INT32)s;
  return (Object__String8)i0;
  ;
}

static Object__String32 Object__NewString32(OOC_INT32 source, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2;
  Object__String32 s;
  Object__CharsUCS4 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  i1 = length;
  s = (Object__String32)i0;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], (i1+1));
  d = (Object__CharsUCS4)i2;
  *(OOC_INT32*)(_check_pointer(i0, 10203)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 10228))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 10267)),(i1*4));
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 10300);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = length;
  *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 10300))*4) = (OOC_CHAR8)'\000';
  i0 = (OOC_INT32)s;
  return (Object__String32)i0;
  ;
}

Object__String8 Object__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 10626)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 10626)));
  i1 = i1!=(OOC_CHAR8)'\000';
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
  i0 = (OOC_INT32)Object__NewString8(((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11084))), (i1-i0));
  return (Object__String8)i0;
  ;
}

Object__String8 Object__NewLatin1Char(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Object__NewString8((OOC_INT32)&ch, 1);
  return (Object__String8)i0;
  ;
}

Object__String Object__NewUCS2(const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  Object__String32 s;
  Object__CharsUCS4 d;
  OOC_INT32 j;

  i = 0;
  i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 11741))*2);
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11741))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  s = (Object__String32)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], (i0+1));
  d = (Object__CharsUCS4)i2;
  *(OOC_INT32*)(_check_pointer(i1, 11816)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 11836))+4) = i2;
  i3 = 0<=i0;
  j = 0;
  if (!i3) goto l17;
  i3=0;
l12_loop:
  i4 = _check_pointer(i2, 11879);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 11889))*2);
  *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11879))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i0;
  j = i3;
  if (i4) goto l12_loop;
l17:
  return (Object__String)i1;
  ;
}

Object__String Object__NewUCS2Region(const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  Object__String32 s;
  Object__CharsUCS4 d;
  OOC_INT32 j;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  i = i2;
  i3 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  s = (Object__String32)i3;
  i4 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], (i2+1));
  d = (Object__CharsUCS4)i4;
  *(OOC_INT32*)(_check_pointer(i3, 12421)) = i2;
  *(OOC_INT32*)((_check_pointer(i3, 12441))+4) = i4;
  i0 = i0-1;
  i5 = i1<=i0;
  j = i1;
  if (!i5) goto l8;
  i5=i1;
l3_loop:
  i6 = _check_pointer(i4, 12492);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT32, 12508))*2);
  *(OOC_UINT32*)(i6+(_check_index((i5-i1), i7, OOC_UINT32, 12492))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i0;
  j = i5;
  if (i6) goto l3_loop;
l8:
  i0 = _check_pointer(i4, 12527);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 12527))*4) = (OOC_CHAR8)'\000';
  return (Object__String)i3;
  ;
}

Object__String Object__NewUCS2Char(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__String32 s;
  Object__CharsUCS4 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  s = (Object__String32)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], 2);
  d = (Object__CharsUCS4)i1;
  *(OOC_INT32*)(_check_pointer(i0, 12886)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 12906))+4) = i1;
  i2 = _check_pointer(i1, 12924);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = ch;
  *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT8, 12924))*4) = i4;
  i1 = _check_pointer(i1, 12940);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT32*)(i1+(_check_index(1, i2, OOC_UINT8, 12940))*4) = (OOC_CHAR8)'\000';
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4Region(const OOC_CHAR32 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = start;
  i1 = end;
  i0 = (OOC_INT32)Object__NewString32(((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 13394))*4), (i1-i0));
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4Char(OOC_CHAR32 ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Object__NewString32((OOC_INT32)&ch, 1);
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4(const OOC_CHAR32 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 14015))*4);
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 14015))*4);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Object__NewString32((OOC_INT32)str, i0);
  return (Object__String)i0;
  ;
}

Object__String Object__Concat2(Object__String s1, Object__String s2) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Object__String8 c8;
  Object__String32 c32;
  OOC_INT32 i;

  i0 = (OOC_INT32)s1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14344)))), &_td_Object__String8Desc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15243)))), &_td_Object__String32Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15239)))), 15239);
  goto l40;
l5:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15270)))), &_td_Object__String8Desc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15641)))), &_td_Object__String32Desc);
  if (i2) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15637)))), 15637);
  goto l40;
l10:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  c32 = (Object__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15748));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 15738));
  *(OOC_INT32*)(_check_pointer(i2, 15725)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15791));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15781));
  *(OOC_INT32*)((_check_pointer(i2, 15772))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15826))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15864))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15895));
  _move_block((_check_pointer(i1, 15831)),(_check_pointer(i2, 15869)),(i0*4));
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15943))+4);
  i2 = (OOC_INT32)c32;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15981))+4);
  i2 = _check_pointer(i2, 15986);
  i3 = (OOC_INT32)s1;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15989));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16022));
  _move_block((_check_pointer(i1, 15948)),(i2+(_check_index(i3, i4, OOC_UINT32, 15986))*4),(4+i0*4));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  c32 = (Object__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15335));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 15325));
  *(OOC_INT32*)(_check_pointer(i2, 15312)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15378));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15368));
  *(OOC_INT32*)((_check_pointer(i2, 15359))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15413))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15451))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15482));
  _move_block((_check_pointer(i1, 15418)),(_check_pointer(i2, 15456)),(i0*4));
  i0 = (OOC_INT32)s2;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 15531));
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)c32;
  if (!i2) goto l20;
  i2 = (OOC_INT32)s1;
  i4=0;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15555))+4);
  i5 = _check_pointer(i5, 15560);
  i6 = *(OOC_INT32*)(_check_pointer(i2, 15563));
  i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15579))+4);
  i8 = _check_pointer(i8, 15584);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 15584)));
  *(OOC_UINT32*)(i5+(_check_index((i6+i4), i7, OOC_UINT32, 15560))*4) = i8;
  i4 = i4+1;
  i5 = i4<=i1;
  i = i4;
  if (i5) goto l15_loop;
l20:
  return (Object__String)i3;
  goto l40;
l23:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14370)))), &_td_Object__String8Desc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14807)))), &_td_Object__String32Desc);
  if (i2) goto l28;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14803)))), 14803);
  goto l40;
l28:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  c32 = (Object__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14913));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14903));
  *(OOC_INT32*)(_check_pointer(i2, 14890)) = (i4+i3);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14956));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14946));
  *(OOC_INT32*)((_check_pointer(i2, 14937))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], ((i4+i3)+1)));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 14992));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15018))+4);
  i5 = _check_pointer(i5, 15023);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15032))+4);
  i7 = _check_pointer(i7, 15037);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 15037)));
  *(OOC_UINT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15023))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l31_loop;
l36:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15078))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15116))+4);
  i2 = _check_pointer(i2, 15121);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15124));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15157));
  _move_block((_check_pointer(i3, 15083)),(i2+(_check_index(i0, i4, OOC_UINT32, 15121))*4),(4+i1*4));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l38:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  c8 = (Object__String8)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14470));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14460));
  *(OOC_INT32*)(_check_pointer(i2, 14447)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 14512));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 14502));
  *(OOC_INT32*)((_check_pointer(i2, 14493))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14547))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14584))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14615));
  _move_block((_check_pointer(i1, 14552)),(_check_pointer(i2, 14589)),i0);
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14659))+4);
  i2 = (OOC_INT32)c8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14696))+4);
  i2 = _check_pointer(i2, 14701);
  i3 = (OOC_INT32)s1;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 14704));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14737));
  _move_block((_check_pointer(i1, 14664)),(i2+(_check_index(i3, i4, OOC_UINT32, 14701))),(1+i0*1));
  i0 = (OOC_INT32)c8;
  return (Object__String)i0;
l40:
  _failed_function(14117); return 0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16605))+4);
  return (Object__CharsLatin1)i0;
  ;
}

Object__CharsUCS4 Object__String32Desc_CharsUCS4(Object__String32 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16901))+4);
  return (Object__CharsUCS4)i0;
  ;
}

Object__String Object__StringDesc_ToString(Object__String s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  return (Object__String)i0;
  ;
}

OOC_CHAR8 Object__StringDesc_Equals(Object__String s, Object__Object y) {

  _failed_function(17089); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_Equals(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17239)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17267)))), &_td_Object__StringDesc, 17267)), 17274));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17255));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17329)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17487)))), &_td_Object__String32Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17484)))), 17484);
  goto l54;
l15:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 17537));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17550))+4);
  i2 = _check_pointer(i2, 17555);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17562))+4);
  i4 = _check_pointer(i4, 17567);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 17555)));
  i3 = *(OOC_UINT32*)(i4+(_check_index(0, i5, OOC_UINT32, 17567))*4);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17537));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=OOC_FALSE;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17550))+4);
  i3 = _check_pointer(i3, 17555);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17562))+4);
  i5 = _check_pointer(i5, 17567);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 17555)));
  i4 = *(OOC_UINT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 17567))*4);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17627));
  return (i0==i1);
  goto l54;
l34:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 17378));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=OOC_FALSE;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17391))+4);
  i2 = _check_pointer(i2, 17396);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17403))+4);
  i4 = _check_pointer(i4, 17408);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 17396)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 17408)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17378));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=OOC_FALSE;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17391))+4);
  i3 = _check_pointer(i3, 17396);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17403))+4);
  i5 = _check_pointer(i5, 17408);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 17396)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 17408)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17468));
  return (i0==i1);
  goto l54;
l53:
  return OOC_FALSE;
l54:
  _failed_function(17156); return 0;
  ;
}

OOC_CHAR8 Object__String32Desc_Equals(Object__String32 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17779)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17807)))), &_td_Object__StringDesc, 17807)), 17814));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17795));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17869)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18027)))), &_td_Object__String32Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18024)))), 18024);
  goto l54;
l15:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 18077));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18090))+4);
  i2 = _check_pointer(i2, 18095);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18102))+4);
  i4 = _check_pointer(i4, 18107);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT32, 18095))*4);
  i3 = *(OOC_UINT32*)(i4+(_check_index(0, i5, OOC_UINT32, 18107))*4);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 18077));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=OOC_FALSE;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18090))+4);
  i3 = _check_pointer(i3, 18095);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18102))+4);
  i5 = _check_pointer(i5, 18107);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 18095))*4);
  i4 = *(OOC_UINT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 18107))*4);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 18167));
  return (i0==i1);
  goto l54;
l34:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 17918));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=OOC_FALSE;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17931))+4);
  i2 = _check_pointer(i2, 17936);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17943))+4);
  i4 = _check_pointer(i4, 17948);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT32, 17936))*4);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 17948)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 17918));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=OOC_FALSE;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17931))+4);
  i3 = _check_pointer(i3, 17936);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17943))+4);
  i5 = _check_pointer(i5, 17948);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17936))*4);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 17948)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 18008));
  return (i0==i1);
  goto l54;
l53:
  return OOC_FALSE;
l54:
  _failed_function(17696); return 0;
  ;
}

OOC_INT32 Object__StringDesc_Compare(Object__String s, Object__Object y) {

  _failed_function(18245); return 0;
  ;
}

OOC_INT32 Object__String8Desc_Compare(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 18797));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18816)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19115)))), &_td_Object__String32Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19112)))), 19112);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 19140));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 19168));
  min = i1;
  
l9:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19222))+4);
  i3 = _check_pointer(i3, 19227);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19234))+4);
  i5 = _check_pointer(i5, 19239);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 19227)));
  i4 = *(OOC_UINT32*)(i5+(_check_index(0, i6, OOC_UINT32, 19239))*4);
  i3 = i3==i4;
  
l14:
  if (i3) goto l16;
  i3=0;
  goto l26;
l16:
  i3=0;
l17_loop:
  i3 = i3+1;
  i4 = i3!=i1;
  i = i3;
  if (i4) goto l20;
  i4=OOC_FALSE;
  goto l22;
l20:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19222))+4);
  i4 = _check_pointer(i4, 19227);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19234))+4);
  i6 = _check_pointer(i6, 19239);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 19227)));
  i5 = *(OOC_UINT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 19239))*4);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19368))+4);
  i0 = _check_pointer(i0, 19373);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19385))+4);
  i2 = _check_pointer(i2, 19390);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 19373)));
  i1 = *(OOC_UINT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 19390))*4);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 19326));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19315));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 18840));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 18868));
  min = i1;
  
l36:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l39;
  i3=OOC_FALSE;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18922))+4);
  i3 = _check_pointer(i3, 18927);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18934))+4);
  i5 = _check_pointer(i5, 18939);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 18927)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 18939)));
  i3 = i3==i4;
  
l41:
  if (i3) goto l43;
  i3=0;
  goto l53;
l43:
  i3=0;
l44_loop:
  i3 = i3+1;
  i4 = i3!=i1;
  i = i3;
  if (i4) goto l47;
  i4=OOC_FALSE;
  goto l49;
l47:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18922))+4);
  i4 = _check_pointer(i4, 18927);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18934))+4);
  i6 = _check_pointer(i6, 18939);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 18927)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 18939)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19068))+4);
  i0 = _check_pointer(i0, 19073);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19085))+4);
  i2 = _check_pointer(i2, 19090);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 19073)));
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 19090)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 19026));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19015));
  return (i0-i1);
l58:
  _failed_function(18720); return 0;
  ;
}

OOC_INT32 Object__String32Desc_Compare(Object__String32 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 19534));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19553)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19852)))), &_td_Object__String32Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19849)))), 19849);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 19877));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 19905));
  min = i1;
  
l9:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19959))+4);
  i3 = _check_pointer(i3, 19964);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19971))+4);
  i5 = _check_pointer(i5, 19976);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(0, i4, OOC_UINT32, 19964))*4);
  i4 = *(OOC_UINT32*)(i5+(_check_index(0, i6, OOC_UINT32, 19976))*4);
  i3 = i3==i4;
  
l14:
  if (i3) goto l16;
  i3=0;
  goto l26;
l16:
  i3=0;
l17_loop:
  i3 = i3+1;
  i4 = i3!=i1;
  i = i3;
  if (i4) goto l20;
  i4=OOC_FALSE;
  goto l22;
l20:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19959))+4);
  i4 = _check_pointer(i4, 19964);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19971))+4);
  i6 = _check_pointer(i6, 19976);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 19964))*4);
  i5 = *(OOC_UINT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 19976))*4);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20105))+4);
  i0 = _check_pointer(i0, 20110);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20122))+4);
  i2 = _check_pointer(i2, 20127);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i1, OOC_UINT32, 20110))*4);
  i1 = *(OOC_UINT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 20127))*4);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 20063));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 20052));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 19577));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 19605));
  min = i1;
  
l36:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l39;
  i3=OOC_FALSE;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19659))+4);
  i3 = _check_pointer(i3, 19664);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19671))+4);
  i5 = _check_pointer(i5, 19676);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(0, i4, OOC_UINT32, 19664))*4);
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 19676)));
  i3 = i3==i4;
  
l41:
  if (i3) goto l43;
  i3=0;
  goto l53;
l43:
  i3=0;
l44_loop:
  i3 = i3+1;
  i4 = i3!=i1;
  i = i3;
  if (i4) goto l47;
  i4=OOC_FALSE;
  goto l49;
l47:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19659))+4);
  i4 = _check_pointer(i4, 19664);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19671))+4);
  i6 = _check_pointer(i6, 19676);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 19664))*4);
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 19676)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19805))+4);
  i0 = _check_pointer(i0, 19810);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19822))+4);
  i2 = _check_pointer(i2, 19827);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i1, OOC_UINT32, 19810))*4);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 19827)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 19763));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19752));
  return (i0-i1);
l58:
  _failed_function(19457); return 0;
  ;
}

OOC_INT32 Object__StringDesc_HashCode(Object__String s) {

  _failed_function(20203); return 0;
  ;
}

OOC_INT32 Object__String8Desc_HashCode(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 20464));
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20496))+4);
  i2 = _check_pointer(i2, 20501);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 20501)));
  i2 = _ash(i2,7);
  x = i2;
  i3 = 0!=i1;
  p = 0;
  if (i3) goto l3;
  i0=i2;
  goto l9;
l3:
  i3=0;
l4_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20673))+4);
  i4 = _check_pointer(i4, 20678);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 20678)));
  i2 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (1000003*i2)))^(_type_cast_fast(OOC_UINT32, OOC_UINT8, i4))));
  x = i2;
  i3 = i3+1;
  i4 = i3!=i1;
  p = i3;
  if (i4) goto l4_loop;
l8:
  i0=i2;
l9:
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i0))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i1)))));
  ;
}

OOC_INT32 Object__String32Desc_HashCode(Object__String32 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 21035));
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21062))+4);
  i2 = _check_pointer(i2, 21067);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT8, 21067))*4);
  i2 = _ash(i2,7);
  x = i2;
  i3 = 0!=i1;
  p = 0;
  if (i3) goto l3;
  i0=i2;
  goto l9;
l3:
  i3=0;
l4_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21229))+4);
  i4 = _check_pointer(i4, 21234);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 21234))*4);
  i2 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (1000003*i2)))^(_type_cast_fast(OOC_UINT32, OOC_UINT32, i4))));
  x = i2;
  i3 = i3+1;
  i4 = i3!=i1;
  p = i3;
  if (i4) goto l4_loop;
l8:
  i0=i2;
l9:
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i0))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i1)))));
  ;
}

OOC_CHAR32 Object__StringDesc_CharAt(Object__String s, OOC_INT32 index) {

  _failed_function(21396); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_CharAt(Object__String8 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21660))+4);
  i0 = _check_pointer(i0, 21666);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 21666)));
  return i0;
  ;
}

OOC_CHAR32 Object__String32Desc_CharAt(Object__String32 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21770))+4);
  i0 = _check_pointer(i0, 21776);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = index;
  i0 = *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 21776))*4);
  return i0;
  ;
}

Object__String Object__StringDesc_Substring(Object__String s, OOC_INT32 start, OOC_INT32 end) {

  _failed_function(21833); return 0;
  ;
}

Object__String Object__String8Desc_Substring(Object__String8 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22264))+4);
  i0 = _check_pointer(i0, 22270);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = start;
  i3 = end;
  i0 = (OOC_INT32)Object__NewString8((i0+(_check_index(i2, i1, OOC_UINT32, 22270))), (i3-i2));
  return (Object__String)i0;
  ;
}

Object__String Object__String32Desc_Substring(Object__String32 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22414))+4);
  i0 = _check_pointer(i0, 22420);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = start;
  i3 = end;
  i0 = (OOC_INT32)Object__NewString32((i0+(_check_index(i2, i1, OOC_UINT32, 22420))*4), (i3-i2));
  return (Object__String)i0;
  ;
}

OOC_INT32 Object__StringDesc_IndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(22494); return 0;
  ;
}

OOC_INT32 Object__String8Desc_IndexOf(Object__String8 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = _char;
  i1 = i0<=(OOC_CHAR8)'\377';
  if (!i1) goto l14;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23012));
  i3 = pos;
  i3 = i3!=i2;
  endpos = i2;
  if (!i3) goto l14;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23064))+4);
  i3 = _check_pointer(i3, 23069);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = pos;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 23069)));
  i3 = i3==i0;
  if (!i3) goto l8;
  return i5;
l8:
  i3 = i5+1;
  i4 = i3!=i2;
  pos = i3;
  if (i4) goto l5_loop;
l14:
  return -1;
  ;
}

OOC_INT32 Object__String32Desc_IndexOf(Object__String32 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 23315));
  i2 = pos;
  i2 = i2!=i1;
  endpos = i1;
  if (!i2) goto l11;
  i2 = _char;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23363))+4);
  i3 = _check_pointer(i3, 23368);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = pos;
  i3 = *(OOC_UINT32*)(i3+(_check_index(i5, i4, OOC_UINT32, 23368))*4);
  i3 = i3==i2;
  if (!i3) goto l6;
  return i5;
l6:
  i3 = i5+1;
  i4 = i3!=i1;
  pos = i3;
  if (i4) goto l3_loop;
l11:
  return -1;
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
