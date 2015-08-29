#include <ADT/ArrayList.d>
#include <__oo2c.h>
#include <setjmp.h>

static ADT_ArrayList__Array ADT_ArrayList__CreateArray(OOC_INT32 size, ADT_ArrayList__ArrayList old) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_ArrayList__Array _new;
  OOC_INT32 i;

  i0 = size;
  i0 = i0<2;
  if (!i0) goto l3;
  size = 2;
l3:
  i0 = size;
  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_ArrayList__Array.baseTypes[0], i0);
  i1 = (OOC_INT32)old;
  i2 = i1!=(OOC_INT32)0;
  _new = (ADT_ArrayList__Array)i0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1760))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l8_loop:
  i4 = _check_pointer(i0, 1783);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1793));
  i6 = _check_pointer(i6, 1800);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 1800))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1783))*4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1816));
  i4 = _check_pointer(i4, 1823);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1823))*4) = (OOC_INT32)0;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l8_loop;
l14:
  return (ADT_ArrayList__Array)i0;
  ;
}

void ADT_ArrayList__Init(ADT_ArrayList__ArrayList l, OOC_INT32 initialSize) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = initialSize;
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i1, (ADT_ArrayList__ArrayList)(OOC_INT32)0);
  *(OOC_INT32*)(_check_pointer(i0, 2066)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2114))+4) = 0;
  return;
  ;
}

ADT_ArrayList__ArrayList ADT_ArrayList__New(OOC_INT32 initialSize) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_ArrayList__ArrayList.baseTypes[0]);
  i1 = initialSize;
  ADT_ArrayList__Init((ADT_ArrayList__ArrayList)i0, i1);
  return (ADT_ArrayList__ArrayList)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Destroy(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2491))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2510));
  i3 = _check_pointer(i3, 2517);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 2517))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)(_check_pointer(i0, 2542)) = (OOC_INT32)0;
  return;
  ;
}

ADT_ArrayList__ArrayList ADT_ArrayList__ArrayListDesc_Copy(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_ArrayList__ArrayList _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2774))+4);
  i1 = (OOC_INT32)ADT_ArrayList__New(i1);
  _new = (ADT_ArrayList__ArrayList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2802))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2823));
  i4 = _check_pointer(i4, 2830);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2838));
  i6 = _check_pointer(i6, 2845);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 2845))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2830))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2876))+4);
  *(OOC_INT32*)((_check_pointer(i1, 2865))+4) = i0;
  return (ADT_ArrayList__ArrayList)i1;
  ;
}

void ADT_ArrayList__ArrayListDesc_EnsureCapacity(ADT_ArrayList__ArrayList l, OOC_INT32 size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3237));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3244)), (OOC_INT32)0);
  i2 = size;
  i1 = i1<i2;
  if (!i1) goto l4;
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i2, (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3267)) = i1;
l4:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Clear(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3516))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3535));
  i3 = _check_pointer(i3, 3542);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3542))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 3567))+4) = 0;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Append(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3755));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3740))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3762)), (OOC_INT32)0);
  i1 = i2==i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3803))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray((i1*2), (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3778)) = i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3830));
  i1 = _check_pointer(i1, 3837);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3839))+4);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 3837))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3865))+4);
  *(OOC_INT32*)((_check_pointer(i0, 3865))+4) = (i1+1);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Insert(ADT_ArrayList__ArrayList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4355))+4);
  i2 = index;
  _assert((i2<=i1), 127, 4337);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4388));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4395)), (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4373))+4);
  i1 = i3==i1;
  if (!i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4436))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray((i1*2), (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 4411)) = i1;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4472))+4);
  i1 = i1-1;
  i3 = i1<=i2;
  i = i1;
  if (!i3) goto l11;
l6_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4500));
  i3 = _check_pointer(i3, 4507);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = i1+1;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4517));
  i6 = _check_pointer(i6, 4524);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 4524))*4);
  *(OOC_INT32*)(i3+(_check_index(i5, i4, OOC_UINT32, 4507))*4) = i1;
  i1 = i5<=i2;
  i = i5;
  if (!i1) goto l11;
  i1=i5;
  goto l6_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4542));
  i1 = _check_pointer(i1, 4549);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 4549))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4575))+4);
  *(OOC_INT32*)((_check_pointer(i0, 4575))+4) = (i1+1);
  return;
  ;
}

Object__Object ADT_ArrayList__ArrayListDesc_Get(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4876))+4);
  i2 = index;
  _assert((i2<i1), 127, 4859);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4897));
  i0 = _check_pointer(i0, 4904);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 4904))*4);
  return (Object__Object)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Set(ADT_ArrayList__ArrayList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5251))+4);
  i2 = index;
  _assert((i2<i1), 127, 5234);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5265));
  i0 = _check_pointer(i0, 5272);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i3 = (OOC_INT32)obj;
  *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 5272))*4) = i3;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_RemoveRange(ADT_ArrayList__ArrayList l, OOC_INT32 fromIndex, OOC_INT32 toIndex) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 delta;
  OOC_INT32 i;

  i0 = fromIndex;
  i1 = toIndex;
  i0 = i1-i0;
  delta = i0;
  i2 = (OOC_INT32)l;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 6129))+4);
  i3 = i3-1;
  i4 = i1<=i3;
  i = i1;
  if (!i4) goto l8;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6148));
  i4 = _check_pointer(i4, 6155);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6169));
  i6 = _check_pointer(i6, 6176);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 6176))*4);
  *(OOC_INT32*)(i4+(_check_index((i1-i0), i5, OOC_UINT32, 6155))*4) = i6;
  i1 = i1+1;
  i4 = i1<=i3;
  i = i1;
  if (i4) goto l3_loop;
l8:
  i1 = *(OOC_INT32*)((_check_pointer(i2, 6199))+4);
  *(OOC_INT32*)((_check_pointer(i2, 6199))+4) = (i1-i0);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Remove(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = index;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6569)))), ADT_ArrayList__ArrayListDesc_RemoveRange)),ADT_ArrayList__ArrayListDesc_RemoveRange)((ADT_ArrayList__ArrayList)i0, i1, (i1+1));
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_TrimToSize(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6859));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6844))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6866)), (OOC_INT32)0);
  i1 = i2!=i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6907))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i1, (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 6882)) = i1;
l4:
  return;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_Size(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7062))+4);
  return i0;
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Contains(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7269))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7304));
  i4 = _check_pointer(i4, 7311);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7311))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7293)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
  if (!i4) goto l6;
  return OOC_TRUE;
l6:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l11:
  return OOC_FALSE;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_IndexOf(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7692))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7727));
  i4 = _check_pointer(i4, 7734);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7734))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7716)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
  if (!i4) goto l6;
  return i3;
l6:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l11:
  return -1;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_LastIndexOf(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8106))+4);
  i1 = i1-1;
  i2 = i1>=0;
  i = i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8152));
  i3 = _check_pointer(i3, 8159);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 8159))*4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8141)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i3);
  if (!i3) goto l6;
  return i1;
l6:
  i1 = i1+-1;
  i = i1;
  i3 = i1>=0;
  if (i3) goto l3_loop;
l11:
  return -1;
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_IsEmpty(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8350))+4);
  return (i0==0);
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Equals(ADT_ArrayList__ArrayList l, Object__Object obj) {

  _assert(OOC_FALSE, 127, 8482);
  _failed_function(8405); return 0;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_HashCode(ADT_ArrayList__ArrayList l) {

  _assert(OOC_FALSE, 127, 8604);
  _failed_function(8543); return 0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Store(ADT_ArrayList__ArrayList l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8768))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8755)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8796))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l12;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8822));
  i4 = _check_pointer(i4, 8829);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8829))*4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8910)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8938)))), &_td_ADT_Storable__ObjectDesc, 8938)));
  goto l7;
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8869)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l7:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l12:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Load(ADT_ArrayList__ArrayList l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 size;
  OOC_INT32 i;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9101)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&size);
  i1 = (OOC_INT32)l;
  i2 = size;
  ADT_ArrayList__Init((ADT_ArrayList__ArrayList)i1, i2);
  i2 = size;
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9174)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9201));
  i4 = _check_pointer(i4, 9208);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9208))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = size;
  *(OOC_INT32*)((_check_pointer(i1, 9234))+4) = i0;
  return;
  ;
}

void OOC_ADT_ArrayList_init(void) {

  return;
  ;
}

/* --- */
