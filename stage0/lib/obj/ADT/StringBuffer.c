#include <ADT/StringBuffer.d>
#include <__oo2c.h>
#include <setjmp.h>

static void ADT_StringBuffer__Init(ADT_StringBuffer__StringBuffer b, OOC_INT32 initialCapacity) {
  register OOC_INT32 i0,i1;

  i0 = initialCapacity;
  i1 = i0<8;
  if (!i1) goto l4;
  initialCapacity = 8;
  i0=8;
l4:
  i1 = (OOC_INT32)b;
  *(OOC_INT32*)(_check_pointer(i1, 1973)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 2008))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 2031))+8) = ((OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsLatin1.baseTypes[0], i0));
  *(OOC_INT32*)((_check_pointer(i1, 2062))+12) = 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2331))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2455))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2455))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2462)), 0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2469))+4);
  i0 = (OOC_INT32)Object__NewUTF16Region((void*)(_check_pointer(i1, 2462)), i2, 0, i0);
  return (Object__String)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2387))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2387))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2393)), 0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2400))+4);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i1, 2393)), i2, 0, i0);
  return (Object__String)i0;
l4:
  _failed_function(2294); return 0;
  ;
}

OOC_CHAR32 ADT_StringBuffer__StringBufferDesc_CharAt(ADT_StringBuffer__StringBuffer b, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR16 _w1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2613))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2683))+12);
  i1 = _check_pointer(i1, 2690);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = index;
  i1 = *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 2690))*2);
  _w1 = i1;
  i2 = (OOC_UINT16)i1<(OOC_UINT16)55296u;
  if (i2) goto l5;
  i2 = (OOC_UINT16)i1>=(OOC_UINT16)57344u;
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2799))+4);
  i2 = (i3+1)==i2;
  
  goto l11;
l9:
  i2=1u;
l11:
  if (i2) goto l25;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2924))+12);
  i0 = _check_pointer(i0, 2931);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index((i3+1), i2, OOC_UINT32, 2931))*2);
  i2 = (OOC_UINT16)i1<(OOC_UINT16)56320u;
  if (i2) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_UINT16)56320u<=(OOC_UINT16)i0;
  
l17:
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = (OOC_UINT16)i0<(OOC_UINT16)57344u;
  
l21:
  if (i2) goto l23;
  return i1;
  goto l28;
l23:
  return (((_mod(i1,1024))*1024)+(_mod(i0,1024)));
  goto l28;
l25:
  return i1;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2646))+8);
  i0 = _check_pointer(i0, 2652);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 2652)));
  return i0;
l28:
  _failed_function(2533); return 0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Clear(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 3288))+4) = 0;
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_EnsureCapacity(ADT_StringBuffer__StringBuffer b, OOC_INT32 cap) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 newCap;
  ADT_StringBuffer__CharsLatin1 new8;
  ADT_StringBuffer__CharsUTF16 new16;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 3465));
  i2 = cap;
  i1 = i1<i2;
  if (!i1) goto l16;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 3504));
  newCap = i1;
  i3 = i1<i2;
  if (!i3) goto l11;
l6_loop:
  i1 = i1*2;
  newCap = i1;
  i3 = i1<i2;
  if (i3) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i0, 3591)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3630))+8);
  i2 = i2!=0;
  if (i2) goto l14;
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsUTF16.baseTypes[0], i1);
  new16 = (ADT_StringBuffer__CharsUTF16)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3830))+12);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3857))+4);
  _move_block((_check_pointer(i2, 3837)),(_check_pointer(i1, 3852)),(i0*2));
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)new16;
  *(OOC_INT32*)((_check_pointer(i0, 3891))+12) = i1;
  goto l16;
l14:
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsLatin1.baseTypes[0], i1);
  new8 = (ADT_StringBuffer__CharsLatin1)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3698))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3723))+4);
  _move_block((_check_pointer(i2, 3704)),(_check_pointer(i1, 3718)),i0);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)new8;
  *(OOC_INT32*)((_check_pointer(i0, 3753))+8) = i1;
l16:
  return;
  ;
}

ADT_StringBuffer__CharsLatin1 ADT_StringBuffer__StringBufferDesc_CharsLatin1(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4642))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4685))+4);
  ADT_StringBuffer__StringBufferDesc_EnsureCapacity((ADT_StringBuffer__StringBuffer)i0, (i1+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4704))+8);
  i1 = _check_pointer(i1, 4710);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4712))+4);
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 4710))) = 0u;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4749))+8);
  return (ADT_StringBuffer__CharsLatin1)i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_ConvertTo16(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4871))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4877)), 0);
  *(OOC_INT32*)((_check_pointer(i0, 4857))+12) = ((OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__CharsUTF16.baseTypes[0], i1));
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4901))+4);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4922))+12);
  i3 = _check_pointer(i3, 4929);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4937))+8);
  i5 = _check_pointer(i5, 4943);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 4943)));
  *(OOC_UINT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 4929))*2) = i5;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 4962))+8) = (OOC_INT32)0;
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLatin1Region(ADT_StringBuffer__StringBuffer b, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = start;
  i1 = end;
  _assert((i0>=0), 127, 5184);
  _assert((i0<=i1), 127, 5208);
  _assert((i1<=data_0d), 127, 5234);
  i2 = i1-i0;
  len = i2;
  i3 = (OOC_INT32)b;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 5309))+4);
  ADT_StringBuffer__StringBufferDesc_EnsureCapacity((ADT_StringBuffer__StringBuffer)i3, (i4+i2));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5332))+8);
  i4 = i4!=(OOC_INT32)0;
  if (i4) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 5484))+4);
  i = i2;
  i4 = i0!=i1;
  if (!i4) goto l12;
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5531))+12);
  i4 = _check_pointer(i4, 5538);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 5549)));
  *(OOC_UINT16*)(i4+(_check_index(i0, i5, OOC_UINT32, 5538))*2) = i6;
  i2 = i2+1;
  start = i2;
  i0 = i0+1;
  i = i0;
  i4 = i2!=i1;
  if (i4) goto l5_loop;
  goto l12;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5419))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 5427))+4);
  _move_block(((OOC_INT32)data+i0),((_check_pointer(i1, 5425))+i3),i2);
l12:
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5615))+4);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 5615))+4) = (i1+i2);
  return;
  ;
}

static OOC_INT32 ADT_StringBuffer__Length(const OOC_CHAR8 data[], OOC_LEN data_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(0, data_0d, OOC_UINT32, 5771)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5771)));
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  return i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLatin1(ADT_StringBuffer__StringBuffer b, const OOC_CHAR8 data[], OOC_LEN data_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = ADT_StringBuffer__Length((void*)(OOC_INT32)data, data_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5922)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)data, data_0d, 0, i1);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLatin1Char(ADT_StringBuffer__StringBuffer b, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6074))+4);
  ADT_StringBuffer__StringBufferDesc_EnsureCapacity((ADT_StringBuffer__StringBuffer)i0, (i1+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6095))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6161))+12);
  i1 = _check_pointer(i1, 6168);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 6170))+4);
  i4 = ch;
  *(OOC_UINT16*)(i1+(_check_index(i3, i2, OOC_UINT32, 6168))*2) = i4;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6121))+8);
  i1 = _check_pointer(i1, 6127);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 6129))+4);
  i4 = ch;
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 6127))) = i4;
l4:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6204))+4);
  *(OOC_INT32*)((_check_pointer(i0, 6204))+4) = (i1+1);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLn(ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6360)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, 10u);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendUTF16Region(ADT_StringBuffer__StringBuffer b, const OOC_CHAR16 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 len;

  i0 = start;
  i1 = end;
  _assert((i0>=0), 127, 6591);
  _assert((i0<=i1), 127, 6615);
  _assert((i1<=data_0d), 127, 6641);
  i1 = i1-i0;
  len = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 6716))+4);
  ADT_StringBuffer__StringBufferDesc_EnsureCapacity((ADT_StringBuffer__StringBuffer)i2, (i3+i1));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6739))+12);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l4;
  ADT_StringBuffer__StringBufferDesc_ConvertTo16((ADT_StringBuffer__StringBuffer)i2);
l4:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6855))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 6864))+4);
  _move_block(((OOC_INT32)data+i0*2),((_check_pointer(i3, 6862))+i2*2),(i1*2));
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6913))+4);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 6913))+4) = (i1+i2);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendChar(ADT_StringBuffer__StringBuffer b, OOC_CHAR32 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 v;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7061))+4);
  ADT_StringBuffer__StringBufferDesc_EnsureCapacity((ADT_StringBuffer__StringBuffer)i0, (i1+2));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7082))+12);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  ADT_StringBuffer__StringBufferDesc_ConvertTo16((ADT_StringBuffer__StringBuffer)i0);
l3:
  i1 = ch;
  i2 = (OOC_UINT32)i1<(OOC_UINT32)65536u;
  if (i2) goto l6;
  i1 = i1-65536;
  v = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7301))+12);
  i2 = _check_pointer(i2, 7308);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 7310))+4);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 7308))*2) = (55296+(i1>>10));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7377))+12);
  i2 = _check_pointer(i2, 7384);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 7386))+4);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT16*)(i2+(_check_index((i3+1), i4, OOC_UINT32, 7384))*2) = (56320+(_mod(i1,1024)));
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7460))+4);
  *(OOC_INT32*)((_check_pointer(i0, 7460))+4) = (i1+2);
  goto l7;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7185))+12);
  i2 = _check_pointer(i2, 7192);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 7194))+4);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT16*)(i2+(_check_index(i3, i4, OOC_UINT32, 7192))*2) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7228))+4);
  *(OOC_INT32*)((_check_pointer(i0, 7228))+4) = (i1+1);
l7:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Append(ADT_StringBuffer__StringBuffer b, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String s;
  Object__CharsLatin1 c8;
  Object__CharsUTF16 c16;

  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7713)))), &_td_Object__StringDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7770)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  s = (Object__String)i0;
  
  goto l6;
l5:
  s = (Object__String)i0;
  
l6:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7813)))), &_td_Object__String8Desc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7921)))), &_td_Object__String16Desc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7918)))), 7918);
  goto l16;
l11:
  i1 = (OOC_INT32)Object__String16Desc_CharsUTF16((Object__String16)i0);
  c16 = (Object__CharsUTF16)i1;
  i2 = (OOC_INT32)b;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8004)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 8011));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7982)))), ADT_StringBuffer__StringBufferDesc_AppendUTF16Region)),ADT_StringBuffer__StringBufferDesc_AppendUTF16Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i1, 8004)), i3, 0, i0);
  goto l16;
l13:
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  c8 = (Object__CharsLatin1)i1;
  i2 = (OOC_INT32)b;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7895)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 7902));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7873)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i1, 7895)), i3, 0, i0);
  goto l16;
l15:
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7674)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c0));
l16:
  return;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__New(Object__String str) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer b;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8158));
  i1 = (OOC_INT32)ADT_StringBuffer__NewCapacity(i1);
  b = (ADT_StringBuffer__StringBuffer)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8173)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i0);
  return (ADT_StringBuffer__StringBuffer)i1;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0;
  ADT_StringBuffer__StringBuffer b;

  i0 = ADT_StringBuffer__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)ADT_StringBuffer__NewCapacity(i0);
  b = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8353)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)str, str_0d);
  return (ADT_StringBuffer__StringBuffer)i0;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__NewLatin1Region(const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;
  ADT_StringBuffer__StringBuffer b;

  i0 = end;
  i1 = start;
  i2 = (OOC_INT32)ADT_StringBuffer__NewCapacity((i0-i1));
  b = (ADT_StringBuffer__StringBuffer)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8597)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)str, str_0d, i1, i0);
  return (ADT_StringBuffer__StringBuffer)i2;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendInt(ADT_StringBuffer__StringBuffer b, OOC_INT32 val) {
  register OOC_INT32 i0;
  OOC_CHAR8 a[32];

  i0 = val;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)a, 32);
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8892)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)a, 32);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9144)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)a, 32);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendSet(ADT_StringBuffer__StringBuffer b, OOC_UINT32 val) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_CHAR8 comma;
  OOC_INT8 i;
  OOC_INT8 begin;

  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9386)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, 123u);
  comma = 0u;
  i1 = val;
  i = 0;
  i2=0;i3=0u;
l1_loop:
  i4 = _in(i2,i1);
  if (i4) goto l4;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l32;
l4:
  begin = i2;
  i4 = i2<31;
  if (i4) goto l7;
  i4=0u;
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
  i5=0u;
  goto l17;
l15:
  i5 = _in((i4+1),i1);
  
l17:
  if (i5) goto l12_loop;
l22:
  if (!i3) goto l24;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9614)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, 44u);
l24:
  comma = 1u;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9682)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i2);
  i3 = i2<i4;
  if (!i3) goto l31;
  i2 = i4==(i2+1);
  if (i2) goto l29;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9824)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "..", 3);
  goto l30;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9772)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, 44u);
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9871)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i4);
l31:
  i3=i4;i2=1u;
l32:
  i3 = i3+1;
  i = i3;
  i4 = i3<=31;
  if (!i4) goto l36;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l1_loop;
l36:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9938)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i0, 125u);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendBool(ADT_StringBuffer__StringBuffer b, OOC_CHAR8 val) {
  register OOC_INT32 i0;

  i0 = val;
  if (i0) goto l3;
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10203)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "FALSE", 6);
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10165)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "TRUE", 5);
l4:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Insert(ADT_StringBuffer__StringBuffer b, Object__Object obj, OOC_INT32 at) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Object__String s;
  Object__CharsLatin1 c8;
  OOC_INT32 i;
  Object__CharsUTF16 c16;

  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l70;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10498)))), &_td_Object__StringDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10555)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  s = (Object__String)i0;
  
  goto l6;
l5:
  s = (Object__String)i0;
  
l6:
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10604))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i0, 10613));
  ADT_StringBuffer__StringBufferDesc_EnsureCapacity((ADT_StringBuffer__StringBuffer)i1, (i2+i3));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10635)))), &_td_Object__String8Desc);
  if (i2) goto l32;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11157)))), &_td_Object__String16Desc);
  if (i2) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11154)))), 11154);
  goto l69;
l11:
  i2 = (OOC_INT32)Object__String16Desc_CharsUTF16((Object__String16)i0);
  c16 = (Object__CharsUTF16)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11222))+12);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l14;
  ADT_StringBuffer__StringBufferDesc_ConvertTo16((ADT_StringBuffer__StringBuffer)i1);
l14:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 11298))+4);
  i3 = i3-1;
  i = i3;
  i4 = at;
  i5 = i3>=i4;
  if (!i5) goto l22;
l17_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11334))+12);
  i5 = _check_pointer(i5, 11341);
  i6 = *(OOC_INT32*)(_check_pointer(i0, 11345));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11358))+12);
  i8 = _check_pointer(i8, 11365);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT16*)(i8+(_check_index(i3, i9, OOC_UINT32, 11365))*2);
  *(OOC_UINT16*)(i5+(_check_index((i3+i6), i7, OOC_UINT32, 11341))*2) = i8;
  i3 = i3+(-1);
  i = i3;
  i5 = i3>=i4;
  if (i5) goto l17_loop;
l22:
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 11406));
  i5 = 0<i3;
  if (!i5) goto l69;
  i5=i4;i4=0;
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11430))+12);
  i6 = _check_pointer(i6, 11437);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 11450);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT16*)(i8+(_check_index(i4, i9, OOC_UINT32, 11450))*2);
  *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 11437))*2) = i8;
  i4 = i4+1;
  i = i4;
  i5 = i5+1;
  i6 = i4<i3;
  if (i6) goto l25_loop;
  goto l69;
l32:
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  c8 = (Object__CharsLatin1)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10699))+8);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l51;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10947))+4);
  i3 = i3-1;
  i = i3;
  i4 = at;
  i5 = i3>=i4;
  if (!i5) goto l42;
l37_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10985))+12);
  i5 = _check_pointer(i5, 10992);
  i6 = *(OOC_INT32*)(_check_pointer(i0, 10996));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11009))+12);
  i8 = _check_pointer(i8, 11016);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT16*)(i8+(_check_index(i3, i9, OOC_UINT32, 11016))*2);
  *(OOC_UINT16*)(i5+(_check_index((i3+i6), i7, OOC_UINT32, 10992))*2) = i8;
  i3 = i3+(-1);
  i = i3;
  i5 = i3>=i4;
  if (i5) goto l37_loop;
l42:
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 11061));
  i5 = 0<i3;
  if (!i5) goto l69;
  i5=i4;i4=0;
l45_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11087))+12);
  i6 = _check_pointer(i6, 11094);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 11106);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 11106)));
  *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 11094))*2) = i8;
  i4 = i4+1;
  i = i4;
  i5 = i5+1;
  i6 = i4<i3;
  if (i6) goto l45_loop;
  goto l69;
l51:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10738))+4);
  i3 = i3-1;
  i = i3;
  i4 = at;
  i5 = i3>=i4;
  if (!i5) goto l59;
l54_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10776))+8);
  i5 = _check_pointer(i5, 10782);
  i6 = *(OOC_INT32*)(_check_pointer(i0, 10786));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10799))+8);
  i8 = _check_pointer(i8, 10805);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i3, i9, OOC_UINT32, 10805)));
  *(OOC_UINT8*)(i5+(_check_index((i3+i6), i7, OOC_UINT32, 10782))) = i8;
  i3 = i3+(-1);
  i = i3;
  i5 = i3>=i4;
  if (i5) goto l54_loop;
l59:
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 10850));
  i5 = 0<i3;
  if (!i5) goto l69;
  i5=i4;i4=0;
l62_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10876))+8);
  i6 = _check_pointer(i6, 10882);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 10894);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 10894)));
  *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT32, 10882))) = i8;
  i4 = i4+1;
  i = i4;
  i5 = i5+1;
  i6 = i4<i3;
  if (i6) goto l62_loop;
l69:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11490))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 11500));
  *(OOC_INT32*)((_check_pointer(i1, 11490))+4) = (i2+i0);
  goto l71;
l70:
  i0 = (OOC_INT32)b;
  i1 = at;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10455)))), ADT_StringBuffer__StringBufferDesc_Insert)),ADT_StringBuffer__StringBufferDesc_Insert)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c1), i1);
l71:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Delete(ADT_StringBuffer__StringBuffer b, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 d;
  OOC_INT32 i;

  i0 = start;
  i1 = end;
  _assert((i0>=0), 127, 11629);
  _assert((i0<=i1), 127, 11654);
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 11697))+4);
  _assert((i1<=i3), 127, 11681);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 11727))+4);
  i3 = i1==i3;
  if (i3) goto l26;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11778))+8);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l16;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11942))+12);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l27;
  i1 = i1-i0;
  d = i1;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 12009))+4);
  i3 = i3-i1;
  i = i0;
  i4 = i0<i3;
  if (!i4) goto l14;
  i4 = i1+i0;
  
l9_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12033))+12);
  i5 = _check_pointer(i5, 12040);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12048))+12);
  i7 = _check_pointer(i7, 12055);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT16*)(i7+(_check_index(i4, i8, OOC_UINT32, 12055))*2);
  *(OOC_UINT16*)(i5+(_check_index(i0, i6, OOC_UINT32, 12040))*2) = i7;
  i0 = i0+1;
  i = i0;
  i4 = i4+1;
  i5 = i0<i3;
  if (i5) goto l9_loop;
l14:
  i0 = *(OOC_INT32*)((_check_pointer(i2, 12084))+4);
  *(OOC_INT32*)((_check_pointer(i2, 12084))+4) = (i0-i1);
  goto l27;
l16:
  i1 = i1-i0;
  d = i1;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 11844))+4);
  i3 = i3-i1;
  i = i0;
  i4 = i0<i3;
  if (!i4) goto l24;
  i4 = i1+i0;
  
l19_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11868))+8);
  i5 = _check_pointer(i5, 11874);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11882))+8);
  i7 = _check_pointer(i7, 11888);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 11888)));
  *(OOC_UINT8*)(i5+(_check_index(i0, i6, OOC_UINT32, 11874))) = i7;
  i0 = i0+1;
  i = i0;
  i4 = i4+1;
  i5 = i0<i3;
  if (i5) goto l19_loop;
l24:
  i0 = *(OOC_INT32*)((_check_pointer(i2, 11917))+4);
  *(OOC_INT32*)((_check_pointer(i2, 11917))+4) = (i0-i1);
  goto l27;
l26:
  *(OOC_INT32*)((_check_pointer(i2, 11748))+4) = i0;
l27:
  return;
  ;
}

void OOC_ADT_StringBuffer_init(void) {
  _c0 = Object__NewLatin1Region("NIL", 4, 0, 3);
  _c1 = Object__NewLatin1Region("NIL", 4, 0, 3);

  return;
  ;
}

/* --- */
