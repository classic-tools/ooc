#include "Language/String16.d"
#include "__oo2c.h"

static void Language_String16__Init(Language_String16__Value v, Language_String16__CharArray value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Language_String16__type;
  i1 = (OOC_INT32)v;
  Language__InitValue((Language__Value)i1, (Language__Type)i0);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 560))+4) = i0;
  return;
  ;
}

static Language_String16__Value Language_String16__New(Language_String16__CharArray value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)value;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 678)), 0);
  i1 = i1==1;
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String16__Value.baseTypes[0]);
  Language_String16__Init((Language_String16__Value)i1, (Language_String16__CharArray)i0);
  return (Language_String16__Value)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Language_String16__empty;
  return (Language_String16__Value)i0;
l4:
  _failed_function(601); return 0;
  ;
}

Language_String16__Value Language_String16__NewRegion(const OOC_CHAR16 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Language_String16__CharArray array;
  OOC_INT32 i;

  i0 = pos;
  i1 = endPos;
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String16__CharArray.baseTypes[0], ((i1-i0)+1));
  array = (Language_String16__CharArray)i2;
  i0 = i0!=i1;
  i = 0;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i3 = _check_pointer(i2, 1013);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = pos;
  i6 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i5, source_0d, OOC_UINT32, 1026))*2);
  *(OOC_UINT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 1013))*2) = i6;
  i3 = i5+1;
  pos = i3;
  i0 = i0+1;
  i3 = i3!=i1;
  i = i0;
  if (i3) goto l4_loop;
l9:
  i1 = _check_pointer(i2, 1071);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(i0, i3, OOC_UINT32, 1071))*2) = (OOC_CHAR16)0;
  i0 = (OOC_INT32)Language_String16__New((Language_String16__CharArray)i2);
  return (Language_String16__Value)i0;
  ;
}

Language_String16__Value Language_String16__NewRegion8(const OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Language_String16__CharArray array;
  OOC_INT32 i;

  i0 = pos;
  i1 = endPos;
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String16__CharArray.baseTypes[0], ((i1-i0)+1));
  array = (Language_String16__CharArray)i2;
  i0 = i0!=i1;
  i = 0;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i3 = _check_pointer(i2, 1342);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = pos;
  i6 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i5, source_0d, OOC_UINT32, 1355)));
  *(OOC_UINT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 1342))*2) = i6;
  i3 = i5+1;
  pos = i3;
  i0 = i0+1;
  i3 = i3!=i1;
  i = i0;
  if (i3) goto l4_loop;
l9:
  i1 = _check_pointer(i2, 1400);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(i0, i3, OOC_UINT32, 1400))*2) = (OOC_CHAR16)0;
  i0 = (OOC_INT32)Language_String16__New((Language_String16__CharArray)i2);
  return (Language_String16__Value)i0;
  ;
}

Language_String16__Value Language_String16__NewString(const OOC_CHAR16 source[], OOC_LEN source_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(0, source_0d, OOC_UINT32, 1578))*2);
  i0 = i0!=(OOC_CHAR16)0;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT16*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 1578))*2);
  i1 = i1!=(OOC_CHAR16)0;
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Language_String16__NewRegion((void*)(OOC_INT32)source, source_0d, 0, i0);
  return (Language_String16__Value)i0;
  ;
}

Language_String16__Value Language_String16__NewChar(OOC_CHAR16 source) {
  register OOC_INT32 i0;
  OOC_CHAR16 str[1];

  i0 = source;
  *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, 1, OOC_UINT8, 1765))*2) = i0;
  i0 = (OOC_INT32)Language_String16__NewRegion((void*)(OOC_INT32)str, 1, 0, 1);
  return (Language_String16__Value)i0;
  ;
}

OOC_INT32 Language_String16__ValueDesc_Length(Language_String16__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1895))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1902)), 0);
  return (i0-1);
  ;
}

OOC_CHAR16 Language_String16__ValueDesc_CharAt(Language_String16__Value v, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2;

  i0 = i;
  i1 = 0<=i0;
  i2 = (OOC_INT32)v;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2017))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2024)), 0);
  i1 = i0<(i1-1);
  
l4:
  _assert(i1, 127, 1987);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2044))+4);
  i1 = _check_pointer(i1, 2051);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 2051))*2);
  return i0;
  ;
}

OOC_INT32 Language_String16__ValueDesc_Compare(Language_String16__Value v, ADT_Object__Object str) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2171))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2171))+4);
  i2 = (OOC_INT32)str;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2184)))), &_td_Language_String16__ValueDesc, 2184)), 2190))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2184)))), &_td_Language_String16__ValueDesc, 2184)), 2190))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2177)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2196)), 0);
  i0 = LongStrings__Compare((void*)(_check_pointer(i1, 2177)), i0, (void*)(_check_pointer(i3, 2196)), i2);
  return i0;
  ;
}

Language_String16__Value Language_String16__ValueDesc_Concat(Language_String16__Value v, Language_String16__Value str) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Language_String16__CharArray res;

  i0 = (OOC_INT32)v;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2308)))), Language_String16__ValueDesc_Length)),Language_String16__ValueDesc_Length)((Language_String16__Value)i0);
  i2 = (OOC_INT32)str;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2323)))), Language_String16__ValueDesc_Length)),Language_String16__ValueDesc_Length)((Language_String16__Value)i2);
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String16__CharArray.baseTypes[0], ((i1+i3)+1));
  res = (Language_String16__CharArray)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2361))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2361))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2373))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2373))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2367)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2379)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2385)), 0);
  LongStrings__Concat((void*)(_check_pointer(i3, 2367)), i0, (void*)(_check_pointer(i4, 2379)), i2, (void*)(_check_pointer(i1, 2385)), i5);
  i0 = (OOC_INT32)Language_String16__New((Language_String16__CharArray)i1);
  return (Language_String16__Value)i0;
  ;
}

OOC_CHAR8 Language_String16__ValueDesc_Equals(Language_String16__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2519)))), &_td_Language_String16__ValueDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l25;
l3:
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2546))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2564))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2553)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2571)), 0);
  i2 = i2==i3;
  if (i2) goto l6;
  return OOC_FALSE;
  goto l25;
l6:
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2621))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2628)), 0);
  i2 = 0!=i2;
  if (i2) goto l9;
  i2=OOC_FALSE;
  goto l11;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2636))+4);
  i2 = _check_pointer(i2, 2643);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2650))+4);
  i4 = _check_pointer(i4, 2657);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT32, 2643))*2);
  i3 = *(OOC_UINT16*)(i4+(_check_index(0, i5, OOC_UINT32, 2657))*2);
  i2 = i2==i3;
  
l11:
  if (i2) goto l13;
  i0=0;
  goto l23;
l13:
  i2=0;
l14_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2621))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2628)), 0);
  i3 = i2!=i3;
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2636))+4);
  i3 = _check_pointer(i3, 2643);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2650))+4);
  i5 = _check_pointer(i5, 2657);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 2643))*2);
  i4 = *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 2657))*2);
  i3 = i3==i4;
  
l19:
  if (i3) goto l14_loop;
l22:
  i0=i2;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2723))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2730)), 0);
  return (i0==i1);
l25:
  _failed_function(2442); return 0;
  ;
}

OOC_INT32 Language_String16__ValueDesc_HashCode(Language_String16__Value v) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3056))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3063)), 0);
  i1 = i1-1;
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3089))+4);
  i2 = _check_pointer(i2, 3096);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT8, 3096))*2);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3279))+4);
  i4 = _check_pointer(i4, 3286);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 3286))*2);
  i2 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (1000003*i2)))^(_type_cast_fast(OOC_UINT32, OOC_UINT16, i4))));
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

ADT_String__String Language_String16__ValueDesc_ToString(Language_String16__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ADT_String__New("[instance of Language:String16]", 32);
  return (ADT_String__String)i0;
  ;
}

void Language_String16__ValueDesc_Store(Language_String16__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Store((Language__Value)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3680))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3687)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3662)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, (i2-1));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3718))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3724)), 0);
  i2 = i2-2;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3757))+4);
  i4 = _check_pointer(i4, 3764);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 3764))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3739)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void Language_String16__ValueDesc_Load(Language_String16__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 len;
  Language_String16__CharArray array;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Load((Language__Value)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3924)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_Language_String16__CharArray.baseTypes[0], (i2+1));
  array = (Language_String16__CharArray)i3;
  i2 = i2-1;
  i4 = 0<=i2;
  i = 0;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3999)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&j);
  i5 = _check_pointer(i3, 4025);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = j;
  *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 4025))*2) = i7;
  i4 = i4+1;
  i5 = i4<=i2;
  i = i4;
  if (i5) goto l3_loop;
l8:
  i0 = _check_pointer(i3, 4063);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = len;
  *(OOC_UINT16*)(i0+(_check_index(i4, i2, OOC_UINT32, 4063))*2) = (OOC_CHAR16)0;
  *(OOC_INT32*)((_check_pointer(i1, 4081))+4) = i3;
  return;
  ;
}

Language_String16__Value Language_String16__TypeDesc_Value(Language_String16__Type t, ADT_String__String value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4207))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4207))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4214)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 4225));
  i0 = (OOC_INT32)Language_String16__NewRegion8((void*)(_check_pointer(i1, 4214)), i2, 0, i0);
  return (Language_String16__Value)i0;
  ;
}

Language_String16__Value Language_String16__TypeDesc_ValueOf(Language_String16__Type t, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 4373)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 4373)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = i0>=2;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 4431)));
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 4440)));
  i1 = i1==i2;
  
l14:
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l22;
l16:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 4454)));
  i1 = i1==(OOC_CHAR8)'"';
  if (i1) goto l19;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 4472)));
  i1 = i1==(OOC_CHAR8)'\047';
  
  goto l22;
l19:
  i1=OOC_TRUE;
l22:
  if (i1) goto l24;
  return (Language_String16__Value)(OOC_INT32)0;
  goto l25;
l24:
  i0 = (OOC_INT32)Language_String16__NewRegion8((void*)(OOC_INT32)str, str_0d, 1, (i0-1));
  return (Language_String16__Value)i0;
l25:
  _failed_function(4270); return 0;
  ;
}

ADT_String__String Language_String16__TypeDesc_ToString(Language_String16__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_String16__typeName;
  return (ADT_String__String)i0;
  ;
}

void OOC_Language_String16_init(void) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String16__Type.baseTypes[0]);
  Language_String16__type = (Language_String16__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("String16", 9);
  Language_String16__typeName = (ADT_String__String)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String16__CharArray.baseTypes[0], 1);
  Language_String16__emptyArray = (Language_String16__CharArray)i0;
  i1 = _check_pointer(i0, 4826);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT8, 4826))*2) = (OOC_CHAR16)0;
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String16__Value.baseTypes[0]);
  Language_String16__empty = (Language_String16__Value)i1;
  Language_String16__Init((Language_String16__Value)i1, (Language_String16__CharArray)i0);
  return;
  ;
}

/* --- */
