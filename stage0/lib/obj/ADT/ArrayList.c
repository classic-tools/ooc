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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1770))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l8_loop:
  i4 = _check_pointer(i0, 1793);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1803));
  i6 = _check_pointer(i6, 1810);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 1810))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1793))*4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1826));
  i4 = _check_pointer(i4, 1833);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1833))*4) = (OOC_INT32)0;
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
  *(OOC_INT32*)(_check_pointer(i0, 2076)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2124))+4) = 0;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2501))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2520));
  i3 = _check_pointer(i3, 2527);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 2527))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)(_check_pointer(i0, 2552)) = (OOC_INT32)0;
  return;
  ;
}

ADT_ArrayList__ArrayList ADT_ArrayList__ArrayListDesc_Copy(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_ArrayList__ArrayList _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2784))+4);
  i1 = (OOC_INT32)ADT_ArrayList__New(i1);
  _new = (ADT_ArrayList__ArrayList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2812))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2833));
  i4 = _check_pointer(i4, 2840);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2848));
  i6 = _check_pointer(i6, 2855);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 2855))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2840))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2886))+4);
  *(OOC_INT32*)((_check_pointer(i1, 2875))+4) = i0;
  return (ADT_ArrayList__ArrayList)i1;
  ;
}

void ADT_ArrayList__ArrayListDesc_EnsureCapacity(ADT_ArrayList__ArrayList l, OOC_INT32 size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3247));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3254)), (OOC_INT32)0);
  i2 = size;
  i1 = i1<i2;
  if (!i1) goto l4;
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i2, (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3277)) = i1;
l4:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Clear(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3526))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3545));
  i3 = _check_pointer(i3, 3552);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3552))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 3577))+4) = 0;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Append(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3765));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3750))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3772)), (OOC_INT32)0);
  i1 = i2==i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3813))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray((i1*2), (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3788)) = i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3840));
  i1 = _check_pointer(i1, 3847);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3849))+4);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 3847))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3875))+4);
  *(OOC_INT32*)((_check_pointer(i0, 3875))+4) = (i1+1);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Insert(ADT_ArrayList__ArrayList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4365))+4);
  i2 = index;
  _assert((i2<=i1), 127, 4347);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4398));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4405)), (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4383))+4);
  i1 = i3==i1;
  if (!i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4446))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray((i1*2), (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 4421)) = i1;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4482))+4);
  i1 = i1-1;
  i3 = i1<=i2;
  i = i1;
  if (!i3) goto l11;
l6_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4510));
  i3 = _check_pointer(i3, 4517);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = i1+1;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4527));
  i6 = _check_pointer(i6, 4534);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 4534))*4);
  *(OOC_INT32*)(i3+(_check_index(i5, i4, OOC_UINT32, 4517))*4) = i1;
  i1 = i5<=i2;
  i = i5;
  if (!i1) goto l11;
  i1=i5;
  goto l6_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4552));
  i1 = _check_pointer(i1, 4559);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 4559))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4585))+4);
  *(OOC_INT32*)((_check_pointer(i0, 4585))+4) = (i1+1);
  return;
  ;
}

Object__Object ADT_ArrayList__ArrayListDesc_Get(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4886))+4);
  i2 = index;
  _assert((i2<i1), 127, 4869);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4907));
  i0 = _check_pointer(i0, 4914);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 4914))*4);
  return (Object__Object)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Set(ADT_ArrayList__ArrayList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5261))+4);
  i2 = index;
  _assert((i2<i1), 127, 5244);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5275));
  i0 = _check_pointer(i0, 5282);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i3 = (OOC_INT32)obj;
  *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 5282))*4) = i3;
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
  i3 = *(OOC_INT32*)((_check_pointer(i2, 6139))+4);
  i3 = i3-1;
  i4 = i1<=i3;
  i = i1;
  if (!i4) goto l8;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6158));
  i4 = _check_pointer(i4, 6165);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6179));
  i6 = _check_pointer(i6, 6186);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 6186))*4);
  *(OOC_INT32*)(i4+(_check_index((i1-i0), i5, OOC_UINT32, 6165))*4) = i6;
  i1 = i1+1;
  i4 = i1<=i3;
  i = i1;
  if (i4) goto l3_loop;
l8:
  i1 = *(OOC_INT32*)((_check_pointer(i2, 6209))+4);
  *(OOC_INT32*)((_check_pointer(i2, 6209))+4) = (i1-i0);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Remove(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = index;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6579)))), ADT_ArrayList__ArrayListDesc_RemoveRange)),ADT_ArrayList__ArrayListDesc_RemoveRange)((ADT_ArrayList__ArrayList)i0, i1, (i1+1));
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_TrimToSize(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6869));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6854))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6876)), (OOC_INT32)0);
  i1 = i2!=i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6917))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i1, (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 6892)) = i1;
l4:
  return;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_Size(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7072))+4);
  return i0;
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Contains(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7279))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7314));
  i4 = _check_pointer(i4, 7321);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7321))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7303)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7702))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7737));
  i4 = _check_pointer(i4, 7744);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7744))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7726)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8116))+4);
  i1 = i1-1;
  i2 = i1>=0;
  i = i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8162));
  i3 = _check_pointer(i3, 8169);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 8169))*4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8151)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i3);
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8360))+4);
  return (i0==0);
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Equals(ADT_ArrayList__ArrayList l, Object__Object obj) {

  _assert(OOC_FALSE, 127, 8492);
  _failed_function(8415); return 0;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_HashCode(ADT_ArrayList__ArrayList l) {

  _assert(OOC_FALSE, 127, 8614);
  _failed_function(8553); return 0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Store(ADT_ArrayList__ArrayList l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8794))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8781)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8822))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l12;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8848));
  i4 = _check_pointer(i4, 8855);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8855))*4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8936)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8964)))), &_td_ADT_Storable__ObjectDesc, 8964)));
  goto l7;
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8895)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9143)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&size);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9216)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9243));
  i4 = _check_pointer(i4, 9250);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9250))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = size;
  *(OOC_INT32*)((_check_pointer(i1, 9276))+4) = i0;
  return;
  ;
}

void OOC_ADT_ArrayList_init(void) {

  return;
  ;
}

/* --- */
