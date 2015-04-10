#include "ADT/StringBuffer.d"
#include "__oo2c.h"

static OOC_INT32 ADT_StringBuffer__ArraySize(OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;

  i0 = len;
  i0 = i0+17;
  i1 = 16<i0;
  if (i1) goto l3;
  i0=16;
  goto l9;
l3:
  i1=16;
l4_loop:
  i1 = i1*2;
  i2 = i1<i0;
  if (i2) goto l4_loop;
l8:
  i0=i1;
l9:
  return (i0-16);
  ;
}

static void ADT_StringBuffer__Extend(ADT_StringBuffer__StringBuffer str, OOC_INT32 len, OOC_CHAR8 copyOver) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 newSize;
  ADT_String__CharArrayPtr _new;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3514))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3521)), 0);
  i2 = len;
  i1 = i2>=i1;
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3546))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3553)), 0);
  i1 = i1>16;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l9;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3597))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3604)), 0);
  i1 = i2<=(_div(i1,3));
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (!i1) goto l17;
  i1 = ADT_StringBuffer__ArraySize(i2);
  newSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3683))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3690)), 0);
  i2 = i1!=i2;
  if (!i2) goto l17;
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_String__CharArrayPtr.baseTypes[0], i1);
  _new = (ADT_String__CharArrayPtr)i1;
  i2 = copyOver;
  if (!i2) goto l15;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3780))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 3809));
  _move_block((_check_pointer(i2, 3787)),(_check_pointer(i1, 3802)),i0);
l15:
  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)_new;
  *(OOC_INT32*)((_check_pointer(i0, 3844))+4) = i1;
l17:
  return;
  ;
}

static ADT_StringBuffer__StringBuffer ADT_StringBuffer__NewLength(OOC_INT32 len) {
  register OOC_INT32 i0,i1,i2;
  ADT_StringBuffer__StringBuffer str;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  str = (ADT_StringBuffer__StringBuffer)i0;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = len;
  i1 = ADT_StringBuffer__ArraySize(i1);
  *(OOC_INT32*)((_check_pointer(i0, 4029))+4) = ((OOC_INT32)RT0__NewObject(_td_ADT_String__CharArrayPtr.baseTypes[0], i1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4063))+4);
  i1 = _check_pointer(i1, 4070);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 4070))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)(_check_pointer(i0, 4088)) = 0;
  return (ADT_StringBuffer__StringBuffer)i0;
  ;
}

void ADT_StringBuffer__Init(ADT_StringBuffer__StringBuffer str, const OOC_CHAR8 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 len;

  i0 = (OOC_INT32)str;
  ADT_Object__Init((ADT_Object__Object)i0);
  len = 0;
  i1 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(0, value_0d, OOC_UINT32, 4397)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i1 = i1+1;
  len = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)value+(_check_index(i1, value_0d, OOC_UINT32, 4397)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l4_loop;
l9:
  i2 = ADT_StringBuffer__ArraySize(i1);
  *(OOC_INT32*)((_check_pointer(i0, 4437))+4) = ((OOC_INT32)RT0__NewObject(_td_ADT_String__CharArrayPtr.baseTypes[0], i2));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4484))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4484))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4491)), 0);
  _copy_8((OOC_INT32)value,(_check_pointer(i2, 4491)),i3);
  *(OOC_INT32*)(_check_pointer(i0, 4502)) = i1;
  return;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__New(const OOC_CHAR8 value[], OOC_LEN value_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  ADT_StringBuffer__Init((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)value, value_0d);
  return (ADT_StringBuffer__StringBuffer)i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Destroy(ADT_StringBuffer__StringBuffer str) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4932)))), ADT_StringBuffer__StringBufferDesc_Destroy)),ADT_StringBuffer__StringBufferDesc_Destroy)((ADT_StringBuffer__StringBuffer)i0);
  *(OOC_INT32*)(_check_pointer(i0, 4953)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4975))+4) = (OOC_INT32)0;
  return;
  ;
}

OOC_INT32 ADT_StringBuffer__StringBufferDesc_Size(ADT_StringBuffer__StringBuffer str) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)str;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 5119));
  return i0;
  ;
}

OOC_CHAR8 ADT_StringBuffer__StringBufferDesc_IsEmpty(ADT_StringBuffer__StringBuffer str) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)str;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 5304));
  return (i0==0);
  ;
}

OOC_CHAR8 ADT_StringBuffer__StringBufferDesc_Equals(ADT_StringBuffer__StringBuffer x, ADT_Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5678)))), &_td_ADT_StringBuffer__StringBufferDesc));
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)x;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5713)))), &_td_ADT_StringBuffer__StringBufferDesc, 5713)), 5726));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 5700));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l22;
  i1 = (OOC_INT32)x;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 5790));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l21;
  i3=0;
l13_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5817))+4);
  i4 = _check_pointer(i4, 5824);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5832)))), &_td_ADT_StringBuffer__StringBufferDesc, 5832)), 5845))+4);
  i6 = _check_pointer(i6, 5852);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 5824)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 5852)));
  i4 = i4!=i5;
  if (!i4) goto l16;
  return OOC_FALSE;
l16:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l13_loop;
l21:
  return OOC_TRUE;
  goto l23;
l22:
  return OOC_FALSE;
l23:
  _failed_function(5362); return 0;
  ;
}

OOC_INT32 ADT_StringBuffer__StringBufferDesc_HashCode(ADT_StringBuffer__StringBuffer str) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6179));
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6217))+4);
  i2 = _check_pointer(i2, 6224);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 6224)));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6416))+4);
  i4 = _check_pointer(i4, 6423);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 6423)));
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

ADT_StringBuffer__StringBuffer ADT_StringBuffer__StringBufferDesc_Copy(ADT_StringBuffer__StringBuffer str) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_StringBuffer__StringBuffer dest;
  OOC_INT32 i;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6762));
  i1 = (OOC_INT32)ADT_StringBuffer__NewLength(i1);
  dest = (ADT_StringBuffer__StringBuffer)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 6794));
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6816))+4);
  i4 = _check_pointer(i4, 6823);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6833))+4);
  i6 = _check_pointer(i6, 6840);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 6840)));
  *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 6823))) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6876));
  *(OOC_INT32*)(_check_pointer(i1, 6861)) = i0;
  return (ADT_StringBuffer__StringBuffer)i1;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__StringBufferDesc_Extract(ADT_StringBuffer__StringBuffer str, OOC_INT32 startPos, OOC_INT32 numberToExtract) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_StringBuffer__StringBuffer dest;
  OOC_INT32 i;

  i0 = numberToExtract;
  i1 = (OOC_INT32)ADT_StringBuffer__NewLength(i0);
  dest = (ADT_StringBuffer__StringBuffer)i1;
  i2 = (OOC_INT32)str;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 7492));
  i4 = startPos;
  i3 = i4<i3;
  if (!i3) goto l20;
  i3 = 0<i0;
  i = 0;
  if (i3) goto l5;
  i3=OOC_FALSE;
  goto l7;
l5:
  i3 = *(OOC_INT32*)(_check_pointer(i2, 7574));
  i3 = i4!=i3;
  
l7:
  if (i3) goto l9;
  i0=0;
  goto l19;
l9:
  i3=0;
l10_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7599))+4);
  i5 = _check_pointer(i5, 7606);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7616))+4);
  i7 = _check_pointer(i7, 7623);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index((i4+i3), i8, OOC_UINT32, 7623)));
  *(OOC_UINT8*)(i5+(_check_index(i3, i6, OOC_UINT32, 7606))) = i7;
  i3 = i3+1;
  i5 = i3<i0;
  i = i3;
  if (i5) goto l13;
  i5=OOC_FALSE;
  goto l15;
l13:
  i5 = *(OOC_INT32*)(_check_pointer(i2, 7574));
  i5 = (i4+i3)!=i5;
  
l15:
  if (i5) goto l10_loop;
l18:
  i0=i3;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7674))+4);
  i2 = _check_pointer(i2, 7681);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 7681))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)(_check_pointer(i1, 7702)) = i0;
l20:
  return (ADT_StringBuffer__StringBuffer)i1;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Delete(ADT_StringBuffer__StringBuffer str, OOC_INT32 startPos, OOC_INT32 numberToDelete) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)str;
  i1 = startPos;
  i2 = numberToDelete;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 8239));
  i3 = (i1+i2)<i3;
  if (i3) goto l6;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 8590));
  i2 = i1<i2;
  if (!i2) goto l15;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8614))+4);
  i2 = _check_pointer(i2, 8621);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 8621))) = (OOC_CHAR8)'\000';
  *(OOC_INT32*)(_check_pointer(i0, 8648)) = i1;
  goto l15;
l6:
  i3 = *(OOC_INT32*)(_check_pointer(i0, 8433));
  i3 = i3-i2;
  i4 = i1<=i3;
  i = i1;
  if (!i4) goto l14;
l9_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8471))+4);
  i4 = _check_pointer(i4, 8478);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8488))+4);
  i6 = _check_pointer(i6, 8495);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index((i1+i2), i7, OOC_UINT32, 8495)));
  *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8478))) = i6;
  i1 = i1+1;
  i4 = i1<=i3;
  i = i1;
  if (i4) goto l9_loop;
l14:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8539));
  *(OOC_INT32*)(_check_pointer(i0, 8539)) = (i1-i2);
l15:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8698));
  ADT_StringBuffer__Extend((ADT_StringBuffer__StringBuffer)i0, i1, OOC_TRUE);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Insert(ADT_StringBuffer__StringBuffer str, ADT_StringBuffer__StringBuffer source, OOC_INT32 startPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9457));
  i2 = startPos;
  i1 = i2<=i1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)source;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9509));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 9494));
  ADT_StringBuffer__Extend((ADT_StringBuffer__StringBuffer)i0, (i4+i3), OOC_TRUE);
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9639));
  i4 = i3>=i2;
  i = i3;
  if (!i4) goto l10;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9680))+4);
  i4 = _check_pointer(i4, 9687);
  i5 = *(OOC_INT32*)(_check_pointer(i1, 9696));
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9712))+4);
  i7 = _check_pointer(i7, 9719);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i3, i8, OOC_UINT32, 9719)));
  *(OOC_UINT8*)(i4+(_check_index((i3+i5), i6, OOC_UINT32, 9687))) = i7;
  i3 = i3+-1;
  i4 = i3>=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9811));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l18;
  i4=0;
l13_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9836))+4);
  i5 = _check_pointer(i5, 9843);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9865))+4);
  i7 = _check_pointer(i7, 9872);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 9872)));
  *(OOC_UINT8*)(i5+(_check_index((i2+i4), i6, OOC_UINT32, 9843))) = i7;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l13_loop;
l18:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9917));
  i2 = *(OOC_INT32*)(_check_pointer(i0, 9901));
  *(OOC_INT32*)(_check_pointer(i0, 9901)) = (i2+i1);
l19:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Replace(ADT_StringBuffer__StringBuffer str, ADT_StringBuffer__StringBuffer source, OOC_INT32 startPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10529));
  i2 = startPos;
  i1 = i2<i1;
  if (!i1) goto l19;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10707));
  i1 = i2!=i1;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)source;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10730));
  i1 = 0!=i1;
  
l7:
  if (!i1) goto l19;
  i1 = (OOC_INT32)source;
  i2=0;
l9_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10754))+4);
  i3 = _check_pointer(i3, 10761);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = startPos;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10781))+4);
  i6 = _check_pointer(i6, 10788);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 10788)));
  *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 10761))) = i6;
  i3 = i5+1;
  startPos = i3;
  i2 = i2+1;
  i = i2;
  i4 = *(OOC_INT32*)(_check_pointer(i0, 10707));
  i3 = i3!=i4;
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = *(OOC_INT32*)(_check_pointer(i1, 10730));
  i3 = i2!=i3;
  
l14:
  if (i3) goto l9_loop;
l19:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Append(ADT_StringBuffer__StringBuffer str, ADT_String__String source) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)source;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 11007));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 11022));
  ADT_StringBuffer__Extend((ADT_StringBuffer__StringBuffer)i0, (i2+i3), OOC_TRUE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11086))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11086))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11092)), 0);
  i4 = *(OOC_INT32*)(_check_pointer(i0, 11098));
  i5 = *(OOC_INT32*)(_check_pointer(i1, 11074));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11049)))), ADT_String__StringDesc_GetCharsRegion)),ADT_String__StringDesc_GetCharsRegion)((ADT_String__String)i1, 0, i5, (void*)(_check_pointer(i2, 11092)), i3, i4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 11136));
  i2 = *(OOC_INT32*)(_check_pointer(i0, 11120));
  *(OOC_INT32*)(_check_pointer(i0, 11120)) = (i2+i1);
  return;
  ;
}

ADT_StringBuffer__StringBuffer ADT_StringBuffer__StringBufferDesc_Concat(ADT_StringBuffer__StringBuffer str, ADT_StringBuffer__StringBuffer source2) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_StringBuffer__StringBuffer dest;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)source2;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 11429));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 11445));
  i2 = (OOC_INT32)ADT_StringBuffer__NewLength((i2+i3));
  dest = (ADT_StringBuffer__StringBuffer)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 11477));
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11499))+4);
  i5 = _check_pointer(i5, 11506);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11516))+4);
  i7 = _check_pointer(i7, 11523);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 11523)));
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11506))) = i7;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l8:
  i3 = *(OOC_INT32*)(_check_pointer(i0, 11548));
  j = i3;
  i4 = *(OOC_INT32*)(_check_pointer(i1, 11583));
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l16;
  i5=0;
l11_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11605))+4);
  i6 = _check_pointer(i6, 11612);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11628))+4);
  i8 = _check_pointer(i8, 11635);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i5, i9, OOC_UINT32, 11635)));
  *(OOC_UINT8*)(i6+(_check_index((i5+i3), i7, OOC_UINT32, 11612))) = i8;
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l11_loop;
l16:
  i1 = *(OOC_INT32*)(_check_pointer(i1, 11687));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 11671));
  *(OOC_INT32*)(_check_pointer(i2, 11656)) = (i0+i1);
  return (ADT_StringBuffer__StringBuffer)i2;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendChar(ADT_StringBuffer__StringBuffer str, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 11914));
  ADT_StringBuffer__Extend((ADT_StringBuffer__StringBuffer)i0, (i1+1), OOC_TRUE);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11940))+4);
  i1 = _check_pointer(i1, 11947);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)(_check_pointer(i0, 11951));
  i4 = ch;
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 11947))) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11974))+4);
  i1 = _check_pointer(i1, 11981);
  i2 = *(OOC_INT32*)(_check_pointer(i0, 11985));
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index((i2+1), i3, OOC_UINT32, 11981))) = (OOC_CHAR8)'\000';
  i1 = *(OOC_INT32*)(_check_pointer(i0, 12015));
  *(OOC_INT32*)(_check_pointer(i0, 12015)) = (i1+1);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendString(ADT_StringBuffer__StringBuffer str, const OOC_CHAR8 stringValue[], OOC_LEN stringValue_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 clen;
  OOC_INT32 i;

  clen = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)stringValue+(_check_index(0, stringValue_0d, OOC_UINT32, 12411)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  clen = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)stringValue+(_check_index(i0, stringValue_0d, OOC_UINT32, 12411)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)str;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 12473));
  ADT_StringBuffer__Extend((ADT_StringBuffer__StringBuffer)i1, (i2+i0), OOC_TRUE);
  i2 = 0<=i0;
  i = 0;
  if (!i2) goto l17;
  i2=0;
l12_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12530))+4);
  i3 = _check_pointer(i3, 12537);
  i4 = *(OOC_INT32*)(_check_pointer(i1, 12541));
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i6 = *(OOC_UINT8*)((OOC_INT32)stringValue+(_check_index(i2, stringValue_0d, OOC_UINT32, 12567)));
  *(OOC_UINT8*)(i3+(_check_index((i4+i2), i5, OOC_UINT32, 12537))) = i6;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l12_loop;
l17:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 12592));
  *(OOC_INT32*)(_check_pointer(i1, 12592)) = (i2+i0);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendRegion(ADT_StringBuffer__StringBuffer str, const OOC_CHAR8 chars[], OOC_LEN chars_0d, OOC_INT32 pos, OOC_INT32 endPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;

  i0 = endPos;
  i1 = pos;
  i0 = i0-i1;
  len = i0;
  i2 = (OOC_INT32)str;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 13062));
  ADT_StringBuffer__Extend((ADT_StringBuffer__StringBuffer)i2, (i3+i0), OOC_TRUE);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13120))+4);
  i4 = *(OOC_INT32*)(_check_pointer(i2, 13098));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13127)), 0);
  _assert(((i4+i0)<i3), 127, 13087);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13174))+4);
  i3 = _check_pointer(i3, 13181);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 13185));
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  _move_block(((OOC_INT32)chars+(_check_index(i1, chars_0d, OOC_UINT32, 13156))),(i3+(_check_index(i2, i4, OOC_UINT32, 13181))),i0);
  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 13215));
  i2 = len;
  *(OOC_INT32*)(_check_pointer(i0, 13215)) = (i1+i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13238))+4);
  i1 = _check_pointer(i1, 13245);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 13249));
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 13245))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendLongInt(ADT_StringBuffer__StringBuffer str, OOC_INT32 val) {
  register OOC_INT32 i0;
  OOC_CHAR8 a[32];

  i0 = val;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)a, 32);
  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13508)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)a, 32);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendReal(ADT_StringBuffer__StringBuffer str, OOC_REAL32 val) {
  register OOC_INT32 i0;
  register OOC_REAL32 f0;
  OOC_CHAR8 a[32];

  f0 = val;
  RealStr__RealToStr(f0, (void*)(OOC_INT32)a, 32);
  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13761)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)a, 32);
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendSet(ADT_StringBuffer__StringBuffer str, OOC_UINT32 val) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_CHAR8 comma;
  OOC_INT8 i;
  OOC_INT8 begin;

  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14000)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)'{');
  comma = OOC_FALSE;
  i = 0;
  i1 = val;
  i2=0;i3=OOC_FALSE;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14208)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)',');
l24:
  comma = OOC_TRUE;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14266)))), ADT_StringBuffer__StringBufferDesc_AppendLongInt)),ADT_StringBuffer__StringBufferDesc_AppendLongInt)((ADT_StringBuffer__StringBuffer)i0, i2);
  i3 = i2<i4;
  if (!i3) goto l31;
  i2 = i4==(i2+1);
  if (i2) goto l29;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14400)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i0, "..", 3);
  goto l30;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14356)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)',');
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14445)))), ADT_StringBuffer__StringBufferDesc_AppendLongInt)),ADT_StringBuffer__StringBufferDesc_AppendLongInt)((ADT_StringBuffer__StringBuffer)i0, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14508)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i0, (OOC_CHAR8)'}');
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendBool(ADT_StringBuffer__StringBuffer str, OOC_CHAR8 val) {
  register OOC_INT32 i0;

  i0 = val;
  if (i0) goto l3;
  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14763)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i0, "FALSE", 6);
  goto l4;
l3:
  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14727)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i0, "TRUE", 5);
l4:
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_AppendObject(ADT_StringBuffer__StringBuffer str, ADT_Object__Object object) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__String res;
  RT0__Struct type;
  OOC_CHAR8 name[256];

  i0 = (OOC_INT32)object;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15438)))), ADT_Object__ObjectDesc_ToString)),ADT_Object__ObjectDesc_ToString)((ADT_Object__Object)i0);
  res = (ADT_Object__String)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l5;
  i2=OOC_FALSE;
  goto l7;
l5:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15477)))), &_td_ADT_String__StringDesc);
  
l7:
  if (i2) goto l9;
  i1 = (OOC_INT32)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i1;
  i2 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15590)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'[');
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15624))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 15631));
  _copy_8((_check_pointer(i3, 15636)),(OOC_INT32)name,256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15655)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)name, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15685)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'.');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15719))+12);
  _copy_8((_check_pointer(i1, 15724)),(OOC_INT32)name,256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15743)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)name, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15773)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'@');
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15872)))), ADT_StringBuffer__StringBufferDesc_AppendLongInt)),ADT_StringBuffer__StringBufferDesc_AppendLongInt)((ADT_StringBuffer__StringBuffer)i2, (_type_cast_fast(OOC_INT32, OOC_PTR, i0)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15929)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)']');
  goto l12;
l9:
  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15509)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (ADT_String__String)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15528)))), &_td_ADT_String__StringDesc, 15528)));
  goto l12;
l11:
  i0 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15392)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i0, "NIL", 4);
l12:
  return;
  ;
}

ADT_String__String ADT_StringBuffer__StringBufferDesc_ToString(ADT_StringBuffer__StringBuffer str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16158))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16158))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16164)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 16173));
  i0 = (OOC_INT32)ADT_String__NewRegion((void*)(_check_pointer(i1, 16164)), i2, 0, i0);
  return (ADT_String__String)i0;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Load(ADT_StringBuffer__StringBuffer str, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)str;
  ADT_Object__ObjectDesc_Load((ADT_Object__Object)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16287)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 16301)));
  i2 = *(OOC_INT32*)(_check_pointer(i1, 16347));
  i2 = ADT_StringBuffer__ArraySize(i2);
  *(OOC_INT32*)((_check_pointer(i1, 16324))+4) = ((OOC_INT32)RT0__NewObject(_td_ADT_String__CharArrayPtr.baseTypes[0], i2));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16380))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 16396));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16364)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 16387)), -1, 0, i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16427))+4);
  i0 = _check_pointer(i0, 16434);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16438));
  *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 16434))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void ADT_StringBuffer__StringBufferDesc_Store(ADT_StringBuffer__StringBuffer str, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)str;
  ADT_Object__ObjectDesc_Store((ADT_Object__Object)i1, (ADT_Object__Writer)i0);
  i2 = *(OOC_INT32*)(_check_pointer(i1, 16574));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16559)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16607))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 16623));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16590)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i0, (void*)(_check_pointer(i2, 16614)), -1, 0, i1);
  return;
  ;
}

void OOC_ADT_StringBuffer_init(void) {

  return;
  ;
}

/* --- */
