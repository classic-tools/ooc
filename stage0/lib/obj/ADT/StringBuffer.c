#include "ADT/StringBuffer.d"
#include "__oo2c.h"

static void ADT_StringBuffer__Init(ADT_StringBuffer__StringBuffer b, OOC_INT32 initialCapacity) {
  register OOC_INT32 i0,i1;

  i0 = initialCapacity;
  i0 = i0<8;
  if (!i0) goto l4;
  initialCapacity = 8;
l4:
  i0 = (OOC_INT32)b;
  i1 = initialCapacity;
  *(OOC_INT32*)(_check_pointer(i0, 1961)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 1996))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2019))+8) = ((OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsLatin1.baseTypes[0], i1));
  *(OOC_INT32*)((_check_pointer(i0, 2050))+12) = (OOC_INT32)0;
  return;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__NewCapacity(OOC_INT32 initialCapacity) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  i1 = initialCapacity;
  ADT_StringBuffer__Init((ADT_StringBuffer__StringBuffer)i0, i1);
  return (ADT_StringBuffer__StringBuffer)i0;
  ;
}

Object__String ADT_StringBuffer__StringBufferDesc_ToString(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2319))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2442))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2442))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2449)), (OOC_INT32)0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2456))+4);
  i0 = (OOC_INT32)Object__NewUCS4Region((void*)(_check_pointer(i1, 2449)), i2, 0, i0);
  return (Object__String)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2375))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2375))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2381)), (OOC_INT32)0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2388))+4);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i1, 2381)), i2, 0, i0);
  return (Object__String)i0;
l4:
  _failed_function(2282); return 0;
  ;
}

OOC_CHAR32 ADT_StringBuffer__StringBufferDesc_CharAt(ADT_StringBuffer__StringBuffer b, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2572))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2643))+12);
  i0 = _check_pointer(i0, 2650);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = index;
  i0 = *(OOC_UINT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 2650))*4);
  return i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2605))+8);
  i0 = _check_pointer(i0, 2611);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 2611)));
  return i0;
l4:
  _failed_function(2520); return 0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Clear(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 2732))+4) = 0;
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_EnsureCapacity(ADT_StringBuffer__StringBuffer b, OOC_INT32 cap) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 newCap;
  ADT_StringBuffer__CharsLatin1 new8;
  ADT_StringBuffer__CharsUCS4 new32;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 2908));
  i2 = cap;
  i1 = i1<i2;
  if (!i1) goto l16;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 2947));
  i3 = i1<i2;
  newCap = i1;
  if (!i3) goto l11;
l6_loop:
  i1 = i1*2;
  i3 = i1<i2;
  newCap = i1;
  if (i3) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i0, 3034)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3073))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsUCS4.baseTypes[0], i1);
  new32 = (ADT_StringBuffer__CharsUCS4)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3273))+12);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3300))+4);
  _move_block((_check_pointer(i2, 3280)),(_check_pointer(i1, 3295)),(i0*4));
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)new32;
  *(OOC_INT32*)((_check_pointer(i0, 3334))+12) = i1;
  goto l16;
l14:
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsLatin1.baseTypes[0], i1);
  new8 = (ADT_StringBuffer__CharsLatin1)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3141))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3166))+4);
  _move_block((_check_pointer(i2, 3147)),(_check_pointer(i1, 3161)),i0);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)new8;
  *(OOC_INT32*)((_check_pointer(i0, 3196))+8) = i1;
l16:
  return;
  ;
}

ADT_StringBuffer__CharsLatin1 ADT_StringBuffer__StringBufferDesc_CharsLatin1(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4085))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4128))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4111)))), ADT_StringBuffer__StringBufferDesc_EnsureCapacity)),ADT_StringBuffer__StringBufferDesc_EnsureCapacity)((ADT_StringBuffer__StringBuffer)i0, (i1+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4147))+8);
  i1 = _check_pointer(i1, 4153);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4155))+4);
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 4153))) = (OOC_CHAR8)'\000';
l4:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4192))+8);
  return (ADT_StringBuffer__CharsLatin1)i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_ConvertTo32(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4314))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4320)), (OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 4300))+12) = ((OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsUCS4.baseTypes[0], i1));
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4344))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4365))+12);
  i3 = _check_pointer(i3, 4372);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4380))+8);
  i5 = _check_pointer(i5, 4386);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 4386)));
  *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 4372))*4) = i5;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 4405))+8) = (OOC_INT32)0;
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLatin1Region(ADT_StringBuffer__StringBuffer b, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = start;
  i1 = end;
  _assert((i0>=0), 127, 4627);
  _assert((i0<=i1), 127, 4651);
  _assert((i1<=data_0d), 127, 4677);
  i2 = i1-i0;
  len = i2;
  i3 = (OOC_INT32)b;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 4752))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4735)))), ADT_StringBuffer__StringBufferDesc_EnsureCapacity)),ADT_StringBuffer__StringBufferDesc_EnsureCapacity)((ADT_StringBuffer__StringBuffer)i3, (i4+i2));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4775))+8);
  i4 = i4!=(OOC_INT32)0;
  if (i4) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 4927))+4);
  i0 = i0!=i1;
  i = i2;
  if (!i0) goto l12;
  i0=i2;
l5_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4974))+12);
  i2 = _check_pointer(i2, 4981);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i5 = start;
  i6 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i5, data_0d, OOC_UINT32, 4992)));
  *(OOC_UINT32*)(i2+(_check_index(i0, i4, OOC_UINT32, 4981))*4) = i6;
  i2 = i5+1;
  start = i2;
  i0 = i0+1;
  i2 = i2!=i1;
  i = i0;
  if (i2) goto l5_loop;
  goto l12;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4862))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 4870))+4);
  _move_block(((OOC_INT32)data+i0),((_check_pointer(i1, 4868))+i3),i2);
l12:
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5058))+4);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 5058))+4) = (i1+i2);
  return;
  ;
}

static OOC_INT32 ADT_StringBuffer__Length(const OOC_CHAR8 data[], OOC_LEN data_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(0, data_0d, OOC_UINT32, 5214)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5214)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  return i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLatin1(ADT_StringBuffer__StringBuffer b, const OOC_CHAR8 data[], OOC_LEN data_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = ADT_StringBuffer__Length((void*)(OOC_INT32)data, data_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5365)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)data, data_0d, 0, i1);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLatin1Char(ADT_StringBuffer__StringBuffer b, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5517))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5500)))), ADT_StringBuffer__StringBufferDesc_EnsureCapacity)),ADT_StringBuffer__StringBufferDesc_EnsureCapacity)((ADT_StringBuffer__StringBuffer)i0, (i1+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5538))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5604))+12);
  i1 = _check_pointer(i1, 5611);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5613))+4);
  i4 = ch;
  *(OOC_UINT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 5611))*4) = i4;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5564))+8);
  i1 = _check_pointer(i1, 5570);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5572))+4);
  i4 = ch;
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 5570))) = i4;
l4:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5647))+4);
  *(OOC_INT32*)((_check_pointer(i0, 5647))+4) = (i1+1);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendUCS4Region(ADT_StringBuffer__StringBuffer b, const OOC_CHAR32 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 len;

  i0 = start;
  i1 = end;
  _assert((i0>=0), 127, 5866);
  _assert((i0<=i1), 127, 5890);
  _assert((i1<=data_0d), 127, 5916);
  i1 = i1-i0;
  len = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 5991))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5974)))), ADT_StringBuffer__StringBufferDesc_EnsureCapacity)),ADT_StringBuffer__StringBufferDesc_EnsureCapacity)((ADT_StringBuffer__StringBuffer)i2, (i3+i1));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6014))+12);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6041)))), ADT_StringBuffer__StringBufferDesc_ConvertTo32)),ADT_StringBuffer__StringBufferDesc_ConvertTo32)((ADT_StringBuffer__StringBuffer)i2);
l4:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6130))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 6139))+4);
  _move_block(((OOC_INT32)data+i0*4),((_check_pointer(i3, 6137))+i2*4),(i1*4));
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6188))+4);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 6188))+4) = (i1+i2);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Append(ADT_StringBuffer__StringBuffer b, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String s;
  Object__CharsLatin1 c8;
  Object__CharsUCS4 c32;

  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6439)))), &_td_Object__StringDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6496)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  s = (Object__String)i0;
  
  goto l6;
l5:
  s = (Object__String)i0;
  
l6:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6539)))), &_td_Object__String8Desc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6647)))), &_td_Object__String32Desc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6644)))), 6644);
  goto l16;
l11:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6684)))), Object__String32Desc_CharsUCS4)),Object__String32Desc_CharsUCS4)((Object__String32)i0);
  c32 = (Object__CharsUCS4)i1;
  i2 = (OOC_INT32)b;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6728)), (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6735));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6707)))), ADT_StringBuffer__StringBufferDesc_AppendUCS4Region)),ADT_StringBuffer__StringBufferDesc_AppendUCS4Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i1, 6728)), i3, 0, i0);
  goto l16;
l13:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6574)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  c8 = (Object__CharsLatin1)i1;
  i2 = (OOC_INT32)b;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6621)), (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6628));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6599)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i1, 6621)), i3, 0, i0);
  goto l16;
l15:
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6400)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c0));
l16:
  return;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__New(Object__String str) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer b;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6882));
  i1 = (OOC_INT32)ADT_StringBuffer__NewCapacity(i1);
  b = (ADT_StringBuffer__StringBuffer)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6897)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i0);
  return (ADT_StringBuffer__StringBuffer)i1;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0;
  ADT_StringBuffer__StringBuffer b;

  i0 = ADT_StringBuffer__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)ADT_StringBuffer__NewCapacity(i0);
  b = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7077)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)str, str_0d);
  return (ADT_StringBuffer__StringBuffer)i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendInt(ADT_StringBuffer__StringBuffer b, OOC_INT32 val) {
  register OOC_INT32 i0;
  OOC_CHAR8 a[32];

  i0 = val;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)a, 32);
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7348)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)a, 32);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendReal(ADT_StringBuffer__StringBuffer b, OOC_REAL32 val) {
  register OOC_INT32 i0;
  register OOC_REAL32 f0;
  OOC_CHAR8 a[32];

  f0 = val;
  RealStr__RealToStr(f0, (void*)(OOC_INT32)a, 32);
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7600)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)a, 32);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendSet(ADT_StringBuffer__StringBuffer b, OOC_UINT32 val) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_CHAR8 comma;
  OOC_INT8 i;
  OOC_INT8 begin;

  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7842)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)'{');
  comma = OOC_FALSE;
  i = (OOC_INT32)0;
  i1 = val;
  i2=(OOC_INT32)0;i3=OOC_FALSE;
l1_loop:
  i4 = _in(i2,i1);
  if (i4) goto l4;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l32;
l4:
  begin = i2;
  i4 = i2<31;
  if (i4) goto l7;
  i4=OOC_FALSE;
  goto l9;
l7:
  i4 = _in((i2+1),i1);
  
l9:
  if (i4) goto l11;
  i4=i2;
  goto l22;
l11:
  i4=i2;
l12_loop:
  i4 = i4+1;
  i = i4;
  i5 = i4<31;
  if (i5) goto l15;
  i5=OOC_FALSE;
  goto l17;
l15:
  i5 = _in((i4+1),i1);
  
l17:
  if (i5) goto l12_loop;
l22:
  if (!i3) goto l24;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8070)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)',');
l24:
  comma = OOC_TRUE;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8138)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i2);
  i3 = i2<i4;
  if (!i3) goto l31;
  i2 = i4==(i2+1);
  if (i2) goto l29;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8280)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "..", 3);
  goto l30;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8228)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)',');
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8327)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i4);
l31:
  i3=i4;i2=OOC_TRUE;
l32:
  i3 = i3+1;
  i = i3;
  i4 = i3<=31;
  if (!i4) goto l36;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l1_loop;
l36:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8394)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)'}');
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendBool(ADT_StringBuffer__StringBuffer b, OOC_CHAR8 val) {
  register OOC_INT32 i0;

  i0 = val;
  if (i0) goto l3;
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8659)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "FALSE", 6);
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8621)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "TRUE", 5);
l4:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Insert(ADT_StringBuffer__StringBuffer b, Object__Object obj, OOC_INT32 at) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Object__String s;
  Object__CharsLatin1 c8;
  OOC_INT32 i;
  Object__CharsUCS4 c32;

  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l70;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8953)))), &_td_Object__StringDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9010)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  s = (Object__String)i0;
  
  goto l6;
l5:
  s = (Object__String)i0;
  
l6:
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9059))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9068));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9042)))), ADT_StringBuffer__StringBufferDesc_EnsureCapacity)),ADT_StringBuffer__StringBufferDesc_EnsureCapacity)((ADT_StringBuffer__StringBuffer)i1, (i2+i3));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9090)))), &_td_Object__String8Desc);
  if (i2) goto l32;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9612)))), &_td_Object__String32Desc);
  if (i2) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9609)))), 9609);
  goto l69;
l11:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9649)))), Object__String32Desc_CharsUCS4)),Object__String32Desc_CharsUCS4)((Object__String32)i0);
  c32 = (Object__CharsUCS4)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9676))+12);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9707)))), ADT_StringBuffer__StringBufferDesc_ConvertTo32)),ADT_StringBuffer__StringBufferDesc_ConvertTo32)((ADT_StringBuffer__StringBuffer)i1);
l14:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 9752))+4);
  i3 = i3-1;
  i4 = at;
  i5 = i3>=i4;
  i = i3;
  if (!i5) goto l22;
l17_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9788))+12);
  i5 = _check_pointer(i5, 9795);
  i6 = *(OOC_INT32*)(_check_pointer(i0, 9799));
  i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9812))+12);
  i8 = _check_pointer(i8, 9819);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT32*)(i8+(_check_index(i3, i9, OOC_UINT32, 9819))*4);
  *(OOC_UINT32*)(i5+(_check_index((i3+i6), i7, OOC_UINT32, 9795))*4) = i8;
  i3 = i3+-1;
  i5 = i3>=i4;
  i = i3;
  if (i5) goto l17_loop;
l22:
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9860));
  i3 = i3-1;
  i5 = 0<=i3;
  i = 0;
  if (!i5) goto l69;
  i5=0;
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9884))+12);
  i6 = _check_pointer(i6, 9891);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 9904);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 9904))*4);
  *(OOC_UINT32*)(i6+(_check_index((i4+i5), i7, OOC_UINT32, 9891))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i3;
  i = i5;
  if (i6) goto l25_loop;
  goto l69;
l32:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9125)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  c8 = (Object__CharsLatin1)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9154))+8);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l51;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 9402))+4);
  i3 = i3-1;
  i4 = at;
  i5 = i3>=i4;
  i = i3;
  if (!i5) goto l42;
l37_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9440))+12);
  i5 = _check_pointer(i5, 9447);
  i6 = *(OOC_INT32*)(_check_pointer(i0, 9451));
  i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9464))+12);
  i8 = _check_pointer(i8, 9471);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT32*)(i8+(_check_index(i3, i9, OOC_UINT32, 9471))*4);
  *(OOC_UINT32*)(i5+(_check_index((i3+i6), i7, OOC_UINT32, 9447))*4) = i8;
  i3 = i3+-1;
  i5 = i3>=i4;
  i = i3;
  if (i5) goto l37_loop;
l42:
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9516));
  i3 = i3-1;
  i5 = 0<=i3;
  i = 0;
  if (!i5) goto l69;
  i5=0;
l45_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9542))+12);
  i6 = _check_pointer(i6, 9549);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 9561);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i5, i9, OOC_UINT32, 9561)));
  *(OOC_UINT32*)(i6+(_check_index((i4+i5), i7, OOC_UINT32, 9549))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i3;
  i = i5;
  if (i6) goto l45_loop;
  goto l69;
l51:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 9193))+4);
  i3 = i3-1;
  i4 = at;
  i5 = i3>=i4;
  i = i3;
  if (!i5) goto l59;
l54_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9231))+8);
  i5 = _check_pointer(i5, 9237);
  i6 = *(OOC_INT32*)(_check_pointer(i0, 9241));
  i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9254))+8);
  i8 = _check_pointer(i8, 9260);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i3, i9, OOC_UINT32, 9260)));
  *(OOC_UINT8*)(i5+(_check_index((i3+i6), i7, OOC_UINT32, 9237))) = i8;
  i3 = i3+-1;
  i5 = i3>=i4;
  i = i3;
  if (i5) goto l54_loop;
l59:
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9305));
  i3 = i3-1;
  i5 = 0<=i3;
  i = 0;
  if (!i5) goto l69;
  i5=0;
l62_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9331))+8);
  i6 = _check_pointer(i6, 9337);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 9349);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i5, i9, OOC_UINT32, 9349)));
  *(OOC_UINT8*)(i6+(_check_index((i4+i5), i7, OOC_UINT32, 9337))) = i8;
  i5 = i5+1;
  i6 = i5<=i3;
  i = i5;
  if (i6) goto l62_loop;
l69:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 9954));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9944))+4);
  *(OOC_INT32*)((_check_pointer(i1, 9944))+4) = (i2+i0);
  goto l71;
l70:
  i0 = (OOC_INT32)b;
  i1 = at;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8910)))), ADT_StringBuffer__StringBufferDesc_Insert)),ADT_StringBuffer__StringBufferDesc_Insert)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c1), i1);
l71:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Delete(ADT_StringBuffer__StringBuffer b, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 d;
  OOC_INT32 i;

  i0 = start;
  i1 = end;
  _assert((i0>=0), 127, 10083);
  _assert((i0<=i1), 127, 10108);
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10151))+4);
  _assert((i1<=i3), 127, 10135);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10181))+4);
  i3 = i1==i3;
  if (i3) goto l26;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10232))+8);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l16;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10396))+12);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l27;
  i1 = i1-i0;
  d = i1;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10463))+4);
  i3 = (i3-i1)-1;
  i4 = i0<=i3;
  i = i0;
  if (!i4) goto l14;
l9_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10487))+12);
  i4 = _check_pointer(i4, 10494);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10502))+12);
  i6 = _check_pointer(i6, 10509);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_UINT32*)(i6+(_check_index((i0+i1), i7, OOC_UINT32, 10509))*4);
  *(OOC_UINT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 10494))*4) = i6;
  i0 = i0+1;
  i4 = i0<=i3;
  i = i0;
  if (i4) goto l9_loop;
l14:
  i0 = *(OOC_INT32*)((_check_pointer(i2, 10538))+4);
  *(OOC_INT32*)((_check_pointer(i2, 10538))+4) = (i0-i1);
  goto l27;
l16:
  i1 = i1-i0;
  d = i1;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 10298))+4);
  i3 = (i3-i1)-1;
  i4 = i0<=i3;
  i = i0;
  if (!i4) goto l24;
l19_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10322))+8);
  i4 = _check_pointer(i4, 10328);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10336))+8);
  i6 = _check_pointer(i6, 10342);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_UINT8*)(i6+(_check_index((i0+i1), i7, OOC_UINT32, 10342)));
  *(OOC_UINT8*)(i4+(_check_index(i0, i5, OOC_UINT32, 10328))) = i6;
  i0 = i0+1;
  i4 = i0<=i3;
  i = i0;
  if (i4) goto l19_loop;
l24:
  i0 = *(OOC_INT32*)((_check_pointer(i2, 10371))+4);
  *(OOC_INT32*)((_check_pointer(i2, 10371))+4) = (i0-i1);
  goto l27;
l26:
  *(OOC_INT32*)((_check_pointer(i2, 10202))+4) = i0;
l27:
  return;
  ;
}

void OOC_ADT_StringBuffer_init(void) {
  _c0 = Object__NewLatin1Region("NIL", 4, (OOC_INT32)0, 3);
  _c1 = Object__NewLatin1Region("NIL", 4, (OOC_INT32)0, 3);

  return;
  ;
}

/* --- */
