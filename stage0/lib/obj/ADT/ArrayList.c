#include <ADT/ArrayList.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_ArrayList__ArrayListDesc_CreateArray(ADT_ArrayList__ArrayList l, OOC_INT32 size, ADT_ArrayList__ArrayList old) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_ArrayList__Array _new;
  OOC_INT32 i;

  i0 = size;
  i1 = i0<2;
  if (!i1) goto l4;
  size = 2;
  i0=2;
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_ArrayList__Array.baseTypes[0], i0);
  _new = (ADT_ArrayList__Array)i0;
  i1 = (OOC_INT32)old;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l15;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1844))+4);
  i3 = 0<i2;
  if (!i3) goto l15;
  i3=0;
l9_loop:
  i4 = _check_pointer(i0, 1867);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1877));
  i6 = _check_pointer(i6, 1884);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 1884))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1867))*4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1900));
  i4 = _check_pointer(i4, 1907);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1907))*4) = (OOC_INT32)0;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l9_loop;
l15:
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 1974)) = i0;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_INIT(ADT_ArrayList__ArrayList l, OOC_INT32 initialSize) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = initialSize;
  ADT_ArrayList__ArrayListDesc_CreateArray((ADT_ArrayList__ArrayList)i0, i1, (ADT_ArrayList__ArrayList)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 2175))+4) = 0;
  return;
  ;
}

ADT_ArrayList__ArrayList ADT_ArrayList__New(OOC_INT32 initialSize) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_ArrayList__ArrayList.baseTypes[0]);
  i1 = initialSize;
  ADT_ArrayList__ArrayListDesc_INIT((ADT_ArrayList__ArrayList)i0, i1);
  return (ADT_ArrayList__ArrayList)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Destroy(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2518))+4);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2537));
  i3 = _check_pointer(i3, 2544);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 2544))*4) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)(_check_pointer(i0, 2569)) = 0;
  return;
  ;
}

ADT_ArrayList__ArrayList ADT_ArrayList__ArrayListDesc_Copy(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_ArrayList__ArrayList _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_ArrayList__ArrayList.baseTypes[0]);
  i1 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 2823))+4);
  ADT_ArrayList__ArrayListDesc_INIT((ADT_ArrayList__ArrayList)i0, i2);
  _new = (ADT_ArrayList__ArrayList)i0;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 2851))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2872));
  i4 = _check_pointer(i4, 2879);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2887));
  i6 = _check_pointer(i6, 2894);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 2894))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2879))*4) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2925))+4);
  *(OOC_INT32*)((_check_pointer(i0, 2914))+4) = i1;
  return (ADT_ArrayList__ArrayList)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_EnsureCapacity(ADT_ArrayList__ArrayList l, OOC_INT32 size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3289));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3296)), 0);
  i2 = size;
  i1 = i1<i2;
  if (!i1) goto l4;
  ADT_ArrayList__ArrayListDesc_CreateArray((ADT_ArrayList__ArrayList)i0, i2, (ADT_ArrayList__ArrayList)i0);
l4:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Clear(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3562))+4);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3581));
  i3 = _check_pointer(i3, 3588);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3588))*4) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 3613))+4) = 0;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Append(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3792));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3777))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3799)), 0);
  i1 = i2==i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3831))+4);
  ADT_ArrayList__ArrayListDesc_CreateArray((ADT_ArrayList__ArrayList)i0, (i1*2), (ADT_ArrayList__ArrayList)i0);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3858));
  i1 = _check_pointer(i1, 3865);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3867))+4);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 3865))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3893))+4);
  *(OOC_INT32*)((_check_pointer(i0, 3893))+4) = (i1+1);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Insert(ADT_ArrayList__ArrayList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4374))+4);
  i2 = index;
  _assert((i2<=i1), 127, 4356);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4407));
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4392))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4414)), 0);
  i1 = i3==i1;
  if (!i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4446))+4);
  ADT_ArrayList__ArrayListDesc_CreateArray((ADT_ArrayList__ArrayList)i0, (i1*2), (ADT_ArrayList__ArrayList)i0);
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4482))+4);
  i1 = i1-1;
  i = i1;
  i3 = i1<=i2;
  if (!i3) goto l11;
l6_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4510));
  i3 = _check_pointer(i3, 4517);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = i1+1;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4527));
  i6 = _check_pointer(i6, 4534);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 4534))*4);
  *(OOC_INT32*)(i3+(_check_index(i5, i4, OOC_UINT32, 4517))*4) = i1;
  i = i5;
  i1 = i5<=i2;
  if (!i1) goto l11;
  i1=i5;
  goto l6_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4552));
  i1 = _check_pointer(i1, 4559);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4877))+4);
  i2 = index;
  _assert((i2<i1), 127, 4860);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4898));
  i0 = _check_pointer(i0, 4905);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 4905))*4);
  return (Object__Object)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Set(ADT_ArrayList__ArrayList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5243))+4);
  i2 = index;
  _assert((i2<i1), 127, 5226);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5257));
  i0 = _check_pointer(i0, 5264);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i3 = (OOC_INT32)obj;
  *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 5264))*4) = i3;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_RemoveRange(ADT_ArrayList__ArrayList l, OOC_INT32 fromIndex, OOC_INT32 toIndex) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 delta;
  OOC_INT32 i;

  i0 = toIndex;
  i1 = fromIndex;
  i1 = i0-i1;
  delta = i1;
  i2 = (OOC_INT32)l;
  i = i0;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 6124))+4);
  i4 = i0<i3;
  if (!i4) goto l8;
  i4 = (i1*(-1))+i0;
  
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6143));
  i5 = _check_pointer(i5, 6150);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6164));
  i7 = _check_pointer(i7, 6171);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i0, i8, OOC_UINT32, 6171))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6150))*4) = i7;
  i0 = i0+1;
  i = i0;
  i4 = i4+1;
  i5 = i0<i3;
  if (i5) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)((_check_pointer(i2, 6194))+4);
  *(OOC_INT32*)((_check_pointer(i2, 6194))+4) = (i0-i1);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Remove(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = index;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6567)))), ADT_ArrayList__ArrayListDesc_RemoveRange)),ADT_ArrayList__ArrayListDesc_RemoveRange)((ADT_ArrayList__ArrayList)i0, i1, (i1+1));
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_TrimToSize(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6860));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6845))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6867)), 0);
  i1 = i2!=i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6899))+4);
  ADT_ArrayList__ArrayListDesc_CreateArray((ADT_ArrayList__ArrayList)i0, i1, (ADT_ArrayList__ArrayList)i0);
l4:
  return;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_Size(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7057))+4);
  return i0;
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Contains(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7255))+4);
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7290));
  i4 = _check_pointer(i4, 7297);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7297))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7279)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
  if (!i4) goto l6;
  return 1u;
l6:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l11:
  return 0u;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_IndexOf(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7669))+4);
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7704));
  i4 = _check_pointer(i4, 7711);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7711))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7693)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
  if (!i4) goto l6;
  return i3;
l6:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l11:
  return (-1);
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_LastIndexOf(ADT_ArrayList__ArrayList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8074))+4);
  i1 = i1-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8120));
  i3 = _check_pointer(i3, 8127);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 8127))*4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8109)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i3);
  if (!i3) goto l6;
  return i1;
l6:
  i1 = i1+(-1);
  i = i1;
  i3 = i1>=0;
  if (i3) goto l3_loop;
l11:
  return (-1);
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_IsEmpty(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8321))+4);
  return (i0==0);
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Equals(ADT_ArrayList__ArrayList l, Object__Object obj) {

  _assert(0u, 127, 8459);
  _failed_function(8379); return 0;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_HashCode(ADT_ArrayList__ArrayList l) {

  _assert(0u, 127, 8594);
  _failed_function(8526); return 0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Store(ADT_ArrayList__ArrayList l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8756))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8743)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8784))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8819));
  i4 = _check_pointer(i4, 8826);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8826))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8803)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Load(ADT_ArrayList__ArrayList l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 size;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8991)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&size);
  i1 = (OOC_INT32)l;
  i2 = size;
  ADT_ArrayList__ArrayListDesc_INIT((ADT_ArrayList__ArrayList)i1, i2);
  i = 0;
  i2 = size;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9062)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9089));
  i4 = _check_pointer(i4, 9096);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9096))*4) = ((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i6));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i0 = size;
  *(OOC_INT32*)((_check_pointer(i1, 9137))+4) = i0;
  return;
  ;
}

void OOC_ADT_ArrayList_init(void) {

  return;
  ;
}

/* --- */
