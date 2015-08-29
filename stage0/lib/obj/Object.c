#include <Object.d>
#include <__oo2c.h>

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
      i1 = *(OOC_UINT8*)(_check_pointer(i0, 3807));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (!i1) goto l12;
      i1=0;
l3_loop:
      i2 = i;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 3842))+i1);
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 280, OOC_UINT32, 3831))) = i3;
      i = (i2+1);
      i1 = i1+1;
      j = i1;
      i2 = i1!=128;
      if (i2) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 3807))+i1);
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
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0+i1), 280, OOC_UINT32, 4130))) = i3;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4299))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4306));
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 4321))) = (OOC_CHAR8)'.';
  i = (i0+1);
  i0 = (OOC_INT32)_struct;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4359))+12);
  Object__ObjectDesc_ToString_Append((RT0__Name)i0);
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 4374))) = (OOC_CHAR8)' ';
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 4401))) = (OOC_CHAR8)'a';
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 4428))) = (OOC_CHAR8)'t';
  i0 = i0+1;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 4455))) = (OOC_CHAR8)' ';
  i1 = (OOC_INT32)x;
  i = (i0+1);
  Object__ObjectDesc_ToString_AppendHex((_type_cast_fast(OOC_INT32, OOC_PTR, i1)));
  i0 = i;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 280, OOC_UINT32, 4694))) = (OOC_CHAR8)'>';
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
  *(OOC_INT32*)(_check_pointer(i0, 8329)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 8354))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 8393)),i1);
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 8422);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = length;
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 8422))) = (OOC_CHAR8)'\000';
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
  *(OOC_INT32*)(_check_pointer(i0, 8628)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 8653))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 8692)),(i1*4));
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 8725);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = length;
  *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 8725))*4) = (OOC_CHAR8)'\000';
  i0 = (OOC_INT32)s;
  return (Object__String32)i0;
  ;
}

Object__String8 Object__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 9051)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9051)));
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
  i0 = (OOC_INT32)Object__NewString8(((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9509))), (i1-i0));
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
  i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 10166))*2);
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 10166))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  s = (Object__String32)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], (i0+1));
  d = (Object__CharsUCS4)i2;
  *(OOC_INT32*)(_check_pointer(i1, 10241)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 10261))+4) = i2;
  i3 = 0<=i0;
  j = 0;
  if (!i3) goto l17;
  i3=0;
l12_loop:
  i4 = _check_pointer(i2, 10304);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 10314))*2);
  *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10304))*4) = i6;
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
  *(OOC_INT32*)(_check_pointer(i3, 10846)) = i2;
  *(OOC_INT32*)((_check_pointer(i3, 10866))+4) = i4;
  i0 = i0-1;
  i5 = i1<=i0;
  j = i1;
  if (!i5) goto l8;
  i5=i1;
l3_loop:
  i6 = _check_pointer(i4, 10917);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT32, 10933))*2);
  *(OOC_UINT32*)(i6+(_check_index((i5-i1), i7, OOC_UINT32, 10917))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i0;
  j = i5;
  if (i6) goto l3_loop;
l8:
  i0 = _check_pointer(i4, 10952);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 10952))*4) = (OOC_CHAR8)'\000';
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
  *(OOC_INT32*)(_check_pointer(i0, 11311)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 11331))+4) = i1;
  i2 = _check_pointer(i1, 11349);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = ch;
  *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT8, 11349))*4) = i4;
  i1 = _check_pointer(i1, 11365);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT32*)(i1+(_check_index(1, i2, OOC_UINT8, 11365))*4) = (OOC_CHAR8)'\000';
  return (Object__String)i0;
  ;
}

Object__String Object__NewUCS4Region(const OOC_CHAR32 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = start;
  i1 = end;
  i0 = (OOC_INT32)Object__NewString32(((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11819))*4), (i1-i0));
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

  i0 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 12440))*4);
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 12440))*4);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12654)))), &_td_Object__String8Desc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13553)))), &_td_Object__String32Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13549)))), 13549);
  goto l40;
l5:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13580)))), &_td_Object__String8Desc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13951)))), &_td_Object__String32Desc);
  if (i2) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13947)))), 13947);
  goto l40;
l10:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  c32 = (Object__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14058));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14048));
  *(OOC_INT32*)(_check_pointer(i2, 14035)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 14101));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 14091));
  *(OOC_INT32*)((_check_pointer(i2, 14082))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14136))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14174))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14205));
  _move_block((_check_pointer(i1, 14141)),(_check_pointer(i2, 14179)),(i0*4));
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14253))+4);
  i2 = (OOC_INT32)c32;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14291))+4);
  i2 = _check_pointer(i2, 14296);
  i3 = (OOC_INT32)s1;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 14299));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14332));
  _move_block((_check_pointer(i1, 14258)),(i2+(_check_index(i3, i4, OOC_UINT32, 14296))*4),(4+i0*4));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  c32 = (Object__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13645));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 13635));
  *(OOC_INT32*)(_check_pointer(i2, 13622)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 13688));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 13678));
  *(OOC_INT32*)((_check_pointer(i2, 13669))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13723))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13761))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 13792));
  _move_block((_check_pointer(i1, 13728)),(_check_pointer(i2, 13766)),(i0*4));
  i0 = (OOC_INT32)s2;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 13841));
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)c32;
  if (!i2) goto l20;
  i2 = (OOC_INT32)s1;
  i4=0;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13865))+4);
  i5 = _check_pointer(i5, 13870);
  i6 = *(OOC_INT32*)(_check_pointer(i2, 13873));
  i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13889))+4);
  i8 = _check_pointer(i8, 13894);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 13894)));
  *(OOC_UINT32*)(i5+(_check_index((i6+i4), i7, OOC_UINT32, 13870))*4) = i8;
  i4 = i4+1;
  i5 = i4<=i1;
  i = i4;
  if (i5) goto l15_loop;
l20:
  return (Object__String)i3;
  goto l40;
l23:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12680)))), &_td_Object__String8Desc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13117)))), &_td_Object__String32Desc);
  if (i2) goto l28;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13113)))), 13113);
  goto l40;
l28:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String32.baseTypes[0]);
  c32 = (Object__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13223));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 13213));
  *(OOC_INT32*)(_check_pointer(i2, 13200)) = (i4+i3);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13266));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 13256));
  *(OOC_INT32*)((_check_pointer(i2, 13247))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsUCS4.baseTypes[0], ((i4+i3)+1)));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 13302));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13328))+4);
  i5 = _check_pointer(i5, 13333);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13342))+4);
  i7 = _check_pointer(i7, 13347);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 13347)));
  *(OOC_UINT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13333))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l31_loop;
l36:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13388))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13426))+4);
  i2 = _check_pointer(i2, 13431);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 13434));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 13467));
  _move_block((_check_pointer(i3, 13393)),(i2+(_check_index(i0, i4, OOC_UINT32, 13431))*4),(4+i1*4));
  i0 = (OOC_INT32)c32;
  return (Object__String)i0;
  goto l40;
l38:
  i2 = (OOC_INT32)RT0__NewObject(_td_Object__String8.baseTypes[0]);
  c8 = (Object__String8)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 12780));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 12770));
  *(OOC_INT32*)(_check_pointer(i2, 12757)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 12822));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 12812));
  *(OOC_INT32*)((_check_pointer(i2, 12803))+4) = ((OOC_INT32)RT0__NewObject(_td_Object__CharsLatin1.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12857))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12894))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 12925));
  _move_block((_check_pointer(i1, 12862)),(_check_pointer(i2, 12899)),i0);
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12969))+4);
  i2 = (OOC_INT32)c8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13006))+4);
  i2 = _check_pointer(i2, 13011);
  i3 = (OOC_INT32)s1;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 13014));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 13047));
  _move_block((_check_pointer(i1, 12974)),(i2+(_check_index(i3, i4, OOC_UINT32, 13011))),(1+i0*1));
  i0 = (OOC_INT32)c8;
  return (Object__String)i0;
l40:
  _failed_function(12542); return 0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14599))+4);
  return (Object__CharsLatin1)i0;
  ;
}

Object__CharsUCS4 Object__String32Desc_CharsUCS4(Object__String32 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14695))+4);
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

  _failed_function(14835); return 0;
  ;
}

OOC_CHAR8 Object__String8Desc_Equals(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14985)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15013)))), &_td_Object__StringDesc, 15013)), 15020));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15001));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15075)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15233)))), &_td_Object__String32Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15230)))), 15230);
  goto l54;
l15:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15283));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15296))+4);
  i2 = _check_pointer(i2, 15301);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15308))+4);
  i4 = _check_pointer(i4, 15313);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 15301)));
  i3 = *(OOC_UINT32*)(i4+(_check_index(0, i5, OOC_UINT32, 15313))*4);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15283));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=OOC_FALSE;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15296))+4);
  i3 = _check_pointer(i3, 15301);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15308))+4);
  i5 = _check_pointer(i5, 15313);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 15301)));
  i4 = *(OOC_UINT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 15313))*4);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15373));
  return (i0==i1);
  goto l54;
l34:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15124));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=OOC_FALSE;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15137))+4);
  i2 = _check_pointer(i2, 15142);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15149))+4);
  i4 = _check_pointer(i4, 15154);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 15142)));
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 15154)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15124));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=OOC_FALSE;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15137))+4);
  i3 = _check_pointer(i3, 15142);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15149))+4);
  i5 = _check_pointer(i5, 15154);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 15142)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 15154)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15214));
  return (i0==i1);
  goto l54;
l53:
  return OOC_FALSE;
l54:
  _failed_function(14902); return 0;
  ;
}

OOC_CHAR8 Object__String32Desc_Equals(Object__String32 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15525)))), &_td_Object__StringDesc));
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15553)))), &_td_Object__StringDesc, 15553)), 15560));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15541));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l53;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15615)))), &_td_Object__String8Desc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15773)))), &_td_Object__String32Desc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15770)))), 15770);
  goto l54;
l15:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15823));
  i2 = 0!=i2;
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15836))+4);
  i2 = _check_pointer(i2, 15841);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15848))+4);
  i4 = _check_pointer(i4, 15853);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT32, 15841))*4);
  i3 = *(OOC_UINT32*)(i4+(_check_index(0, i5, OOC_UINT32, 15853))*4);
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15823));
  i3 = i2!=i3;
  if (i3) goto l26;
  i3=OOC_FALSE;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15836))+4);
  i3 = _check_pointer(i3, 15841);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15848))+4);
  i5 = _check_pointer(i5, 15853);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 15841))*4);
  i4 = *(OOC_UINT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 15853))*4);
  i3 = i3==i4;
  
l28:
  if (i3) goto l23_loop;
l31:
  i0=i2;
l32:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15913));
  return (i0==i1);
  goto l54;
l34:
  i1 = (OOC_INT32)s;
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15664));
  i2 = 0!=i2;
  if (i2) goto l37;
  i2=OOC_FALSE;
  goto l39;
l37:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15677))+4);
  i2 = _check_pointer(i2, 15682);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15689))+4);
  i4 = _check_pointer(i4, 15694);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT32, 15682))*4);
  i3 = *(OOC_UINT8*)(i4+(_check_index(0, i5, OOC_UINT32, 15694)));
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
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15664));
  i3 = i2!=i3;
  if (i3) goto l45;
  i3=OOC_FALSE;
  goto l47;
l45:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15677))+4);
  i3 = _check_pointer(i3, 15682);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15689))+4);
  i5 = _check_pointer(i5, 15694);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 15682))*4);
  i4 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 15694)));
  i3 = i3==i4;
  
l47:
  if (i3) goto l42_loop;
l50:
  i0=i2;
l51:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15754));
  return (i0==i1);
  goto l54;
l53:
  return OOC_FALSE;
l54:
  _failed_function(15442); return 0;
  ;
}

OOC_INT32 Object__StringDesc_Compare(Object__String s, Object__Object y) {

  _failed_function(15991); return 0;
  ;
}

OOC_INT32 Object__String8Desc_Compare(Object__String8 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16137));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16156)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16455)))), &_td_Object__String32Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16452)))), 16452);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 16480));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 16508));
  min = i1;
  
l9:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16562))+4);
  i3 = _check_pointer(i3, 16567);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16574))+4);
  i5 = _check_pointer(i5, 16579);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 16567)));
  i4 = *(OOC_UINT32*)(i5+(_check_index(0, i6, OOC_UINT32, 16579))*4);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16562))+4);
  i4 = _check_pointer(i4, 16567);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16574))+4);
  i6 = _check_pointer(i6, 16579);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 16567)));
  i5 = *(OOC_UINT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16579))*4);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16708))+4);
  i0 = _check_pointer(i0, 16713);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16725))+4);
  i2 = _check_pointer(i2, 16730);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 16713)));
  i1 = *(OOC_UINT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 16730))*4);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 16666));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16655));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 16180));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 16208));
  min = i1;
  
l36:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l39;
  i3=OOC_FALSE;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16262))+4);
  i3 = _check_pointer(i3, 16267);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16274))+4);
  i5 = _check_pointer(i5, 16279);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 16267)));
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 16279)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16262))+4);
  i4 = _check_pointer(i4, 16267);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16274))+4);
  i6 = _check_pointer(i6, 16279);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 16267)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 16279)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16408))+4);
  i0 = _check_pointer(i0, 16413);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16425))+4);
  i2 = _check_pointer(i2, 16430);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 16413)));
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 16430)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 16366));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16355));
  return (i0-i1);
l58:
  _failed_function(16060); return 0;
  ;
}

OOC_INT32 Object__String32Desc_Compare(Object__String32 s, Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 min;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16874));
  min = i1;
  i2 = (OOC_INT32)y;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16893)))), &_td_Object__String8Desc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17192)))), &_td_Object__String32Desc);
  if (i3) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17189)))), 17189);
  goto l58;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 17217));
  i3 = i3<i1;
  if (!i3) goto l9;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 17245));
  min = i1;
  
l9:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17299))+4);
  i3 = _check_pointer(i3, 17304);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17311))+4);
  i5 = _check_pointer(i5, 17316);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(0, i4, OOC_UINT32, 17304))*4);
  i4 = *(OOC_UINT32*)(i5+(_check_index(0, i6, OOC_UINT32, 17316))*4);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17299))+4);
  i4 = _check_pointer(i4, 17304);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17311))+4);
  i6 = _check_pointer(i6, 17316);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17304))*4);
  i5 = *(OOC_UINT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 17316))*4);
  i4 = i4==i5;
  
l22:
  if (i4) goto l17_loop;
l26:
  i1 = i3==i1;
  if (i1) goto l29;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17445))+4);
  i0 = _check_pointer(i0, 17450);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17462))+4);
  i2 = _check_pointer(i2, 17467);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i1, OOC_UINT32, 17450))*4);
  i1 = *(OOC_UINT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 17467))*4);
  return (i0-i1);
  goto l58;
l29:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 17403));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17392));
  return (i0-i1);
  goto l58;
l32:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 16917));
  i3 = i3<i1;
  if (!i3) goto l36;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 16945));
  min = i1;
  
l36:
  i3 = 0!=i1;
  i = 0;
  if (i3) goto l39;
  i3=OOC_FALSE;
  goto l41;
l39:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16999))+4);
  i3 = _check_pointer(i3, 17004);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17011))+4);
  i5 = _check_pointer(i5, 17016);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_UINT32*)(i3+(_check_index(0, i4, OOC_UINT32, 17004))*4);
  i4 = *(OOC_UINT8*)(i5+(_check_index(0, i6, OOC_UINT32, 17016)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16999))+4);
  i4 = _check_pointer(i4, 17004);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17011))+4);
  i6 = _check_pointer(i6, 17016);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17004))*4);
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 17016)));
  i4 = i4==i5;
  
l49:
  if (i4) goto l44_loop;
l53:
  i1 = i3==i1;
  if (i1) goto l56;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17145))+4);
  i0 = _check_pointer(i0, 17150);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17162))+4);
  i2 = _check_pointer(i2, 17167);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i1, OOC_UINT32, 17150))*4);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i3, i4, OOC_UINT32, 17167)));
  return (i0-i1);
  goto l58;
l56:
  i1 = *(OOC_INT32*)(_check_pointer(i2, 17103));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17092));
  return (i0-i1);
l58:
  _failed_function(16797); return 0;
  ;
}

OOC_INT32 Object__StringDesc_HashCode(Object__String s) {

  _failed_function(17543); return 0;
  ;
}

OOC_INT32 Object__String8Desc_HashCode(Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 17804));
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17836))+4);
  i2 = _check_pointer(i2, 17841);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 17841)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18013))+4);
  i4 = _check_pointer(i4, 18018);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 18018)));
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 18375));
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18402))+4);
  i2 = _check_pointer(i2, 18407);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT32*)(i2+(_check_index(0, i3, OOC_UINT8, 18407))*4);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18569))+4);
  i4 = _check_pointer(i4, 18574);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 18574))*4);
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

  _failed_function(18736); return 0;
  ;
}

OOC_CHAR32 Object__String8Desc_CharAt(Object__String8 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18866))+4);
  i0 = _check_pointer(i0, 18872);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 18872)));
  return i0;
  ;
}

OOC_CHAR32 Object__String32Desc_CharAt(Object__String32 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18976))+4);
  i0 = _check_pointer(i0, 18982);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = index;
  i0 = *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 18982))*4);
  return i0;
  ;
}

Object__String Object__StringDesc_Substring(Object__String s, OOC_INT32 start, OOC_INT32 end) {

  _failed_function(19039); return 0;
  ;
}

Object__String Object__String8Desc_Substring(Object__String8 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19201))+4);
  i0 = _check_pointer(i0, 19207);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = start;
  i3 = end;
  i0 = (OOC_INT32)Object__NewString8((i0+(_check_index(i2, i1, OOC_UINT32, 19207))), (i3-i2));
  return (Object__String)i0;
  ;
}

Object__String Object__String32Desc_Substring(Object__String32 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19351))+4);
  i0 = _check_pointer(i0, 19357);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = start;
  i3 = end;
  i0 = (OOC_INT32)Object__NewString32((i0+(_check_index(i2, i1, OOC_UINT32, 19357))*4), (i3-i2));
  return (Object__String)i0;
  ;
}

OOC_INT32 Object__StringDesc_IndexOf(Object__String s, OOC_CHAR32 _char, OOC_INT32 pos) {

  _failed_function(19431); return 0;
  ;
}

OOC_INT32 Object__String8Desc_IndexOf(Object__String8 s, OOC_CHAR32 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = _char;
  i1 = i0<=(OOC_CHAR8)'\377';
  if (!i1) goto l14;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 19653));
  i3 = pos;
  i3 = i3!=i2;
  endpos = i2;
  if (!i3) goto l14;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19705))+4);
  i3 = _check_pointer(i3, 19710);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = pos;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 19710)));
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 19956));
  i2 = pos;
  i2 = i2!=i1;
  endpos = i1;
  if (!i2) goto l11;
  i2 = _char;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20004))+4);
  i3 = _check_pointer(i3, 20009);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = pos;
  i3 = *(OOC_UINT32*)(i3+(_check_index(i5, i4, OOC_UINT32, 20009))*4);
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
