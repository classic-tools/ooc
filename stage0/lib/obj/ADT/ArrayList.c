#include "ADT/ArrayList.d"
#include "__oo2c.h"

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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1748))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l8_loop:
  i4 = _check_pointer(i0, 1771);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1781));
  i6 = _check_pointer(i6, 1788);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 1788))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1771))*4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1804));
  i4 = _check_pointer(i4, 1811);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 1811))*4) = (OOC_INT32)0;
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
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = initialSize;
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i1, (ADT_ArrayList__ArrayList)(OOC_INT32)0);
  *(OOC_INT32*)(_check_pointer(i0, 2052)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2100))+4) = 0;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2477))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2496));
  i3 = _check_pointer(i3, 2503);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 2503))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)(_check_pointer(i0, 2528)) = (OOC_INT32)0;
  return;
  ;
}

ADT_ArrayList__ArrayList ADT_ArrayList__ArrayListDesc_Copy(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_ArrayList__ArrayList _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2760))+4);
  i1 = (OOC_INT32)ADT_ArrayList__New(i1);
  _new = (ADT_ArrayList__ArrayList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2788))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2809));
  i4 = _check_pointer(i4, 2816);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2824));
  i6 = _check_pointer(i6, 2831);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 2831))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2816))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2862))+4);
  *(OOC_INT32*)((_check_pointer(i1, 2851))+4) = i0;
  return (ADT_ArrayList__ArrayList)i1;
  ;
}

void ADT_ArrayList__ArrayListDesc_EnsureCapacity(ADT_ArrayList__ArrayList l, OOC_INT32 size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3223));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3230)), 0);
  i2 = size;
  i1 = i1<i2;
  if (!i1) goto l4;
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i2, (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3253)) = i1;
l4:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Clear(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3502))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3521));
  i3 = _check_pointer(i3, 3528);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3528))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 3553))+4) = 0;
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Append(ADT_ArrayList__ArrayList l, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3741));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3726))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3748)), 0);
  i1 = i2==i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3789))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray((i1*2), (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3764)) = i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3816));
  i1 = _check_pointer(i1, 3823);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3825))+4);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 3823))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3851))+4);
  *(OOC_INT32*)((_check_pointer(i0, 3851))+4) = (i1+1);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Insert(ADT_ArrayList__ArrayList l, OOC_INT32 index, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4341))+4);
  i2 = index;
  _assert((i2<=i1), 127, 4323);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4374));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4381)), 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4359))+4);
  i1 = i3==i1;
  if (!i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4422))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray((i1*2), (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 4397)) = i1;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4458))+4);
  i1 = i1-1;
  i3 = i1<=i2;
  i = i1;
  if (!i3) goto l11;
l6_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4486));
  i3 = _check_pointer(i3, 4493);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = i1+1;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4503));
  i6 = _check_pointer(i6, 4510);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 4510))*4);
  *(OOC_INT32*)(i3+(_check_index(i5, i4, OOC_UINT32, 4493))*4) = i1;
  i1 = i5<=i2;
  i = i5;
  if (!i1) goto l11;
  i1=i5;
  goto l6_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4528));
  i1 = _check_pointer(i1, 4535);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)obj;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 4535))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4561))+4);
  *(OOC_INT32*)((_check_pointer(i0, 4561))+4) = (i1+1);
  return;
  ;
}

ADT_Object__Object ADT_ArrayList__ArrayListDesc_Get(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4862))+4);
  i2 = index;
  _assert((i2<i1), 127, 4845);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4883));
  i0 = _check_pointer(i0, 4890);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 4890))*4);
  return (ADT_Object__Object)i0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Set(ADT_ArrayList__ArrayList l, OOC_INT32 index, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5237))+4);
  i2 = index;
  _assert((i2<i1), 127, 5220);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5251));
  i0 = _check_pointer(i0, 5258);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i3 = (OOC_INT32)obj;
  *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 5258))*4) = i3;
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
  i3 = *(OOC_INT32*)((_check_pointer(i2, 6115))+4);
  i3 = i3-1;
  i4 = i1<=i3;
  i = i1;
  if (!i4) goto l8;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6134));
  i4 = _check_pointer(i4, 6141);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6155));
  i6 = _check_pointer(i6, 6162);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 6162))*4);
  *(OOC_INT32*)(i4+(_check_index((i1-i0), i5, OOC_UINT32, 6141))*4) = i6;
  i1 = i1+1;
  i4 = i1<=i3;
  i = i1;
  if (i4) goto l3_loop;
l8:
  i1 = *(OOC_INT32*)((_check_pointer(i2, 6185))+4);
  *(OOC_INT32*)((_check_pointer(i2, 6185))+4) = (i1-i0);
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Remove(ADT_ArrayList__ArrayList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = index;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6555)))), ADT_ArrayList__ArrayListDesc_RemoveRange)),ADT_ArrayList__ArrayListDesc_RemoveRange)((ADT_ArrayList__ArrayList)i0, i1, (i1+1));
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_TrimToSize(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6845));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6830))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6852)), 0);
  i1 = i2!=i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6893))+4);
  i1 = (OOC_INT32)ADT_ArrayList__CreateArray(i1, (ADT_ArrayList__ArrayList)i0);
  *(OOC_INT32*)(_check_pointer(i0, 6868)) = i1;
l4:
  return;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_Size(ADT_ArrayList__ArrayList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7048))+4);
  return i0;
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Contains(ADT_ArrayList__ArrayList l, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7255))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7290));
  i4 = _check_pointer(i4, 7297);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7297))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7279)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i2, (ADT_Object__Object)i4);
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

OOC_INT32 ADT_ArrayList__ArrayListDesc_IndexOf(ADT_ArrayList__ArrayList l, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7678))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7713));
  i4 = _check_pointer(i4, 7720);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7720))*4);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7702)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i2, (ADT_Object__Object)i4);
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

OOC_INT32 ADT_ArrayList__ArrayListDesc_LastIndexOf(ADT_ArrayList__ArrayList l, ADT_Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8092))+4);
  i1 = i1-1;
  i2 = i1>=0;
  i = i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8138));
  i3 = _check_pointer(i3, 8145);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 8145))*4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8127)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i2, (ADT_Object__Object)i3);
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8336))+4);
  return (i0==0);
  ;
}

OOC_CHAR8 ADT_ArrayList__ArrayListDesc_Equals(ADT_ArrayList__ArrayList l, ADT_Object__Object obj) {

  _assert(OOC_FALSE, 127, 8468);
  _failed_function(8391); return 0;
  ;
}

OOC_INT32 ADT_ArrayList__ArrayListDesc_HashCode(ADT_ArrayList__ArrayList l) {

  _assert(OOC_FALSE, 127, 8590);
  _failed_function(8529); return 0;
  ;
}

void ADT_ArrayList__ArrayListDesc_Store(ADT_ArrayList__ArrayList l, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8728))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8715)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8756))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8791));
  i4 = _check_pointer(i4, 8798);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8798))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8775)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void ADT_ArrayList__ArrayListDesc_Load(ADT_ArrayList__ArrayList l, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 size;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8918)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&size);
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
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9006));
  i4 = _check_pointer(i4, 9013);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8991)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(i4+(_check_index(i3, i5, OOC_UINT32, 9013))*4));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = size;
  *(OOC_INT32*)((_check_pointer(i1, 9032))+4) = i0;
  return;
  ;
}

void OOC_ADT_ArrayList_init(void) {

  return;
  ;
}

/* --- */
