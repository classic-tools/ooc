#include "Object/BigInt.d"
#include "__oo2c.h"

static Object_BigInt__BigInt Object_BigInt__NewInstance(OOC_INT32 size) {
  register OOC_INT32 i0,i1;
  Object_BigInt__BigInt big;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object_BigInt__BigInt.baseTypes[0]);
  big = (Object_BigInt__BigInt)i0;
  i1 = size;
  *(OOC_INT32*)(_check_pointer(i0, 2271)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2297))+4) = ((OOC_INT32)RT0__NewObject(_td_Object_BigInt__DigitArray.baseTypes[0], (_abs(i1))));
  return (Object_BigInt__BigInt)i0;
  ;
}

static void Object_BigInt__Normalize(Object_BigInt__BigInt big) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)big;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 2437));
  i1 = _abs(i1);
  j = i1;
  i2 = i1!=0;
  i = i1;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2481))+4);
  i2 = _check_pointer(i2, 2487);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT16*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 2487))*2);
  i2 = i2==0;
  
l5:
  if (i2) goto l7;
  i2=i1;
  goto l17;
l7:
  i2=i1;
l8_loop:
  i2 = i2-1;
  i = i2;
  i3 = i2!=0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2481))+4);
  i3 = _check_pointer(i3, 2487);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index((i2-1), i4, OOC_UINT32, 2487))*2);
  i3 = i3==0;
  
l13:
  if (i3) goto l8_loop;
l17:
  i1 = i2!=i1;
  if (!i1) goto l24;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 2558));
  i1 = i1<0;
  if (i1) goto l22;
  i1=i2;
  goto l23;
l22:
  i1 = -i2;
  i = i1;
  
l23:
  *(OOC_INT32*)(_check_pointer(i0, 2611)) = i1;
l24:
  return;
  ;
}

static Object_BigInt__BigInt Object_BigInt__AddAbs(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  Object_BigInt__BigInt z;
  OOC_INT32 sizeA;
  OOC_INT32 sizeB;
  OOC_INT32 carry;
  OOC_INT32 i;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 3191));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 3205));
  i2 = (_abs(i2))<(_abs(i3));
  if (!i2) goto l3;
  z = (Object_BigInt__BigInt)i0;
  a = (Object_BigInt__BigInt)i1;
  b = (Object_BigInt__BigInt)i0;
l3:
  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 3275));
  i1 = _abs(i1);
  sizeA = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 3297));
  i3 = _abs(i3);
  sizeB = i3;
  i4 = (OOC_INT32)Object_BigInt__NewInstance((i1+1));
  z = (Object_BigInt__BigInt)i4;
  carry = 0;
  i5 = 0!=i3;
  i = 0;
  if (i5) goto l6;
  i2=0;i3=0;
  goto l12;
l6:
  i5=0;i6=0;
l7_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3408))+4);
  i7 = _check_pointer(i7, 3414);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3419))+4);
  i9 = _check_pointer(i9, 3425);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i7 = *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 3414))*2);
  i8 = *(OOC_INT16*)(i9+(_check_index(i6, i10, OOC_UINT32, 3425))*2);
  i5 = i5+(i7+i8);
  carry = i5;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3438))+4);
  i7 = _check_pointer(i7, 3444);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 3444))*2) = (_mod(i5,32768));
  i5 = i5>>15;
  carry = i5;
  i6 = i6+1;
  i7 = i6!=i3;
  i = i6;
  if (i7) goto l7_loop;
l11:
  i2=i6;i3=i5;
l12:
  i5 = i2!=i1;
  if (i5) goto l15;
  i0=i2;i1=i3;
  goto l21;
l15:
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
l16_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3572))+4);
  i5 = _check_pointer(i5, 3578);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_INT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 3578))*2);
  i2 = i2+i5;
  carry = i2;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3591))+4);
  i5 = _check_pointer(i5, 3597);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  *(OOC_INT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 3597))*2) = (_mod(i2,32768));
  i2 = i2>>15;
  carry = i2;
  i3 = i3+1;
  i5 = i3!=i1;
  i = i3;
  if (i5) goto l16_loop;
l20:
  i0=i3;i1=i2;
l21:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3686))+4);
  i2 = _check_pointer(i2, 3692);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT16*)(i2+(_check_index(i0, i3, OOC_UINT32, 3692))*2) = i1;
  Object_BigInt__Normalize((Object_BigInt__BigInt)i4);
  return (Object_BigInt__BigInt)i4;
  ;
}

Object_BigInt__BigInt Object_BigInt__NewInt(OOC_INT32 _int) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 sign;
  Object_BigInt__BigInt big;
  OOC_INT32 size;

  i0 = _int;
  i1 = i0==0;
  if (i1) goto l23;
  i1 = i0<0;
  sign = 1;
  if (i1) goto l5;
  i0=1;
  goto l14;
l5:
  i1 = i0==(-2147483647-1);
  if (i1) goto l8;
  _int = (-i0);
  sign = -1;
  i0=-1;
  goto l14;
l8:
  i0 = (OOC_INT32)Object_BigInt__NewInt((i0+1));
  big = (Object_BigInt__BigInt)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4139))+4);
  i1 = _check_pointer(i1, 4145);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 4145))*2);
  i1 = i1==32767;
  if (i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4268))+4);
  i1 = _check_pointer(i1, 4274);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4268))+4);
  i3 = _check_pointer(i3, 4274);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(0, i4, OOC_UINT8, 4274))*2);
  *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 4274))*2) = (i3+1);
  
  goto l12;
l11:
  i1 = (OOC_INT32)Object_BigInt__one;
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  big = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 4227));
  *(OOC_INT32*)(_check_pointer(i0, 4214)) = (-i1);
  
l12:
  return (Object_BigInt__BigInt)i0;
  i0=1;
l14:
  i1 = (OOC_INT32)Object_BigInt__NewInstance(3);
  big = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4558))+4);
  i2 = _check_pointer(i2, 4564);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = _int;
  *(OOC_INT16*)(i2+(_check_index(0, i3, OOC_UINT8, 4564))*2) = (_mod(i4,32768));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4603))+4);
  i2 = _check_pointer(i2, 4609);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT16*)(i2+(_check_index(1, i3, OOC_UINT8, 4609))*2) = (_mod((i4>>15),32768));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4659))+4);
  i2 = _check_pointer(i2, 4665);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT16*)(i2+(_check_index(2, i3, OOC_UINT8, 4665))*2) = (i4>>30);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4715))+4);
  i2 = _check_pointer(i2, 4721);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT16*)(i2+(_check_index(2, i3, OOC_UINT8, 4721))*2);
  i2 = i2!=0;
  if (i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4774))+4);
  i2 = _check_pointer(i2, 4780);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT16*)(i2+(_check_index(1, i3, OOC_UINT8, 4780))*2);
  i2 = i2!=0;
  if (i2) goto l19;
  size = 1;
  i2=1;
  goto l22;
l19:
  size = 2;
  i2=2;
  goto l22;
l21:
  size = 3;
  i2=3;
l22:
  *(OOC_INT32*)(_check_pointer(i1, 5167)) = (i2*i0);
  return (Object_BigInt__BigInt)i1;
  goto l24;
l23:
  i0 = (OOC_INT32)Object_BigInt__zero;
  return (Object_BigInt__BigInt)i0;
l24:
  _failed_function(3770); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Copy(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 size;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5333));
  i1 = _abs(i1);
  size = i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 5363));
  i2 = (OOC_INT32)Object_BigInt__NewInstance(i2);
  z = (Object_BigInt__BigInt)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5389))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5405))+4);
  _move_block((_check_pointer(i0, 5395)),(_check_pointer(i2, 5411)),(i1*2));
  i0 = (OOC_INT32)z;
  return (Object_BigInt__BigInt)i0;
  ;
}

OOC_CHAR8 Object_BigInt__BigIntDesc_Equals(Object_BigInt__BigInt a, Object__Object b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5559)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l19;
l3:
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 5582));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 5591));
  i2 = i2!=i3;
  if (i2) goto l17;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 5663));
  i2 = (_abs(i2))-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l16;
  i3=0;
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5690))+4);
  i4 = _check_pointer(i4, 5696);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5703))+4);
  i6 = _check_pointer(i6, 5709);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 5696))*2);
  i5 = *(OOC_INT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 5709))*2);
  i4 = i4!=i5;
  if (!i4) goto l11;
  return OOC_FALSE;
l11:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l8_loop;
l16:
  return OOC_TRUE;
  goto l19;
l17:
  return OOC_FALSE;
l19:
  _failed_function(5482); return 0;
  ;
}

OOC_CHAR8 Object_BigInt__BigIntDesc_IsZero(Object_BigInt__BigInt a) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)a;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 5921));
  return (i0==0);
  ;
}

OOC_CHAR8 Object_BigInt__BigIntDesc_NonZero(Object_BigInt__BigInt a) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)a;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6012));
  return (i0!=0);
  ;
}

OOC_INT32 Object_BigInt__BigIntDesc_ToLongInt(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 _int;
  OOC_INT32 i;

  _int = 0;
  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6152));
  i1 = (_abs(i1))-1;
  i2 = i1>=0;
  i = i1;
  if (i2) goto l3;
  i1=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6198))+4);
  i3 = _check_pointer(i3, 6204);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 6204))*2);
  i1 = (i1*32768)+i3;
  _int = i1;
  i2 = i2+-1;
  i = i2;
  i3 = i2>=0;
  if (i3) goto l4_loop;
l9:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6227));
  i0 = i0<0;
  if (i0) goto l12;
  return i1;
  goto l13;
l12:
  return (-i1);
l13:
  _failed_function(6062); return 0;
  ;
}

OOC_INT32 Object_BigInt__BigIntDesc_Sign(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6373));
  i1 = i1>0;
  if (i1) goto l7;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6417));
  i0 = i0<0;
  if (i0) goto l5;
  return 0;
  goto l8;
l5:
  return -1;
  goto l8;
l7:
  return 1;
l8:
  _failed_function(6338); return 0;
  ;
}

OOC_INT32 Object_BigInt__BigIntDesc_Cmp(Object_BigInt__BigInt a, Object__Object b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_INT32 res;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6598)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6592)))), 6592);
  goto l33;
l3:
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 6621));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 6630));
  i2 = i2<i3;
  if (i2) goto l31;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 6684));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6675));
  i2 = i3>i2;
  if (i2) goto l29;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 6743));
  i2 = _abs(i2);
  
l8_loop:
  i2 = i2-1;
  i = i2;
  i3 = i2<0;
  if (i3) goto l11;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6811))+4);
  i3 = _check_pointer(i3, 6817);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6824))+4);
  i5 = _check_pointer(i5, 6830);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 6817))*2);
  i4 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 6830))*2);
  i3 = i3!=i4;
  
  goto l13;
l11:
  i3=OOC_TRUE;
l13:
  if (!i3) goto l8_loop;
l16:
  i3 = i2<0;
  if (i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6896))+4);
  i3 = _check_pointer(i3, 6902);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6909))+4);
  i0 = _check_pointer(i0, 6915);
  i5 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_INT16*)(i0+(_check_index(i2, i5, OOC_UINT32, 6915))*2);
  i2 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 6902))*2);
  i0 = i2<i0;
  if (i0) goto l21;
  res = 1;
  i0=1;
  goto l24;
l21:
  res = -1;
  i0=-1;
  goto l24;
l23:
  return 0;
l24:
  i0 = *(OOC_INT32*)(_check_pointer(i1, 7005));
  i0 = i0<0;
  if (i0) goto l27;
  i0 = res;
  return i0;
  goto l33;
l27:
  i0 = res;
  return (-i0);
  goto l33;
l29:
  return 1;
  goto l33;
l31:
  return -1;
l33:
  _failed_function(6519); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Abs(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 size;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7219));
  i1 = i1>=0;
  if (i1) goto l3;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7277));
  i1 = -i1;
  size = i1;
  i2 = (OOC_INT32)Object_BigInt__NewInstance(i1);
  z = (Object_BigInt__BigInt)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7334))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7369))+4);
  _move_block((_check_pointer(i0, 7340)),(_check_pointer(i2, 7375)),(i1*2));
  i0 = (OOC_INT32)z;
  return (Object_BigInt__BigInt)i0;
  goto l4;
l3:
  return (Object_BigInt__BigInt)i0;
l4:
  _failed_function(7146); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Neg(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7530)))), Object_BigInt__BigIntDesc_Copy)),Object_BigInt__BigIntDesc_Copy)((Object_BigInt__BigInt)i0);
  z = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7555));
  *(OOC_INT32*)(_check_pointer(i0, 7544)) = (-i1);
  return (Object_BigInt__BigInt)i0;
  ;
}

static Object_BigInt__BigInt Object_BigInt__SubAbs(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_INT32 sign;
  Object_BigInt__BigInt z;
  OOC_INT32 i;
  OOC_INT32 sizeA;
  OOC_INT32 sizeB;
  OOC_INT32 borrow;

  sign = 1;
  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 7782));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 7796));
  i2 = (_abs(i2))<(_abs(i3));
  if (i2) goto l32;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 7887));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 7873));
  i2 = (_abs(i3))==(_abs(i2));
  if (i2) goto l5;
  i0=1;
  goto l33;
l5:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 7968));
  i2 = (_abs(i2))-1;
  i3 = i2>=0;
  i = i2;
  if (i3) goto l8;
  i3=OOC_FALSE;
  goto l10;
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8003))+4);
  i3 = _check_pointer(i3, 8009);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8016))+4);
  i5 = _check_pointer(i5, 8022);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 8022))*2);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 8009))*2);
  i3 = i3==i5;
  
l10:
  if (!i3) goto l22;
l13_loop:
  i2 = i2-1;
  i = i2;
  i3 = i2>=0;
  if (i3) goto l16;
  i3=OOC_FALSE;
  goto l18;
l16:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8003))+4);
  i3 = _check_pointer(i3, 8009);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8016))+4);
  i5 = _check_pointer(i5, 8022);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 8009))*2);
  i4 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 8022))*2);
  i3 = i3==i4;
  
l18:
  if (i3) goto l13_loop;
l22:
  i3 = i2<0;
  if (i3) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8114))+4);
  i3 = _check_pointer(i3, 8120);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8127))+4);
  i5 = _check_pointer(i5, 8133);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 8133))*2);
  i2 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 8120))*2);
  i2 = i2<i5;
  if (i2) goto l27;
  i0=1;
  goto l33;
l27:
  z = (Object_BigInt__BigInt)i0;
  a = (Object_BigInt__BigInt)i1;
  b = (Object_BigInt__BigInt)i0;
  sign = -1;
  i0=-1;
  goto l33;
l29:
  i0 = (OOC_INT32)Object_BigInt__zero;
  return (Object_BigInt__BigInt)i0;
  i0=1;
  goto l33;
l32:
  z = (Object_BigInt__BigInt)i0;
  a = (Object_BigInt__BigInt)i1;
  b = (Object_BigInt__BigInt)i0;
  sign = -1;
  i0=-1;
l33:
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 8233));
  i2 = _abs(i2);
  sizeA = i2;
  i3 = (OOC_INT32)b;
  i4 = *(OOC_INT32*)(_check_pointer(i3, 8255));
  i4 = _abs(i4);
  sizeB = i4;
  i5 = (OOC_INT32)Object_BigInt__NewInstance(i2);
  z = (Object_BigInt__BigInt)i5;
  borrow = 0;
  i6 = 0!=i4;
  i = 0;
  if (i6) goto l36;
  i3=0;i4=0;
  goto l42;
l36:
  i6=0;i7=0;
l37_loop:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8368))+4);
  i8 = _check_pointer(i8, 8374);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8379))+4);
  i10 = _check_pointer(i10, 8385);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i8 = *(OOC_INT16*)(i8+(_check_index(i6, i9, OOC_UINT32, 8374))*2);
  i9 = *(OOC_INT16*)(i10+(_check_index(i6, i11, OOC_UINT32, 8385))*2);
  i7 = (i8-i9)-i7;
  borrow = i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8404))+4);
  i8 = _check_pointer(i8, 8410);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT16*)(i8+(_check_index(i6, i9, OOC_UINT32, 8410))*2) = (_mod(i7,32768));
  i7 = _mod((i7>>15),2);
  borrow = i7;
  i6 = i6+1;
  i8 = i6!=i4;
  i = i6;
  if (i8) goto l37_loop;
l41:
  i3=i6;i4=i7;
l42:
  i6 = i3!=i2;
  if (i6) goto l46_loop;
  i1=i4;
  goto l51;
l46_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8575))+4);
  i6 = _check_pointer(i6, 8581);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 8581))*2);
  i4 = i6-i4;
  borrow = i4;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8600))+4);
  i6 = _check_pointer(i6, 8606);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  *(OOC_INT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 8606))*2) = (_mod(i4,32768));
  i4 = _mod((i4>>15),2);
  borrow = i4;
  i3 = i3+1;
  i6 = i3!=i2;
  i = i3;
  if (i6) goto l46_loop;
l50:
  i1=i4;
l51:
  _assert((i1==0), 127, 8705);
  i0 = i0<0;
  if (!i0) goto l54;
  i0 = *(OOC_INT32*)(_check_pointer(i5, 8766));
  *(OOC_INT32*)(_check_pointer(i5, 8755)) = (-i0);
l54:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i5);
  return (Object_BigInt__BigInt)i5;
  ;
}

static Object_BigInt__BigInt Object_BigInt__MulAbs(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14;
  OOC_INT32 sizeA;
  OOC_INT32 sizeB;
  Object_BigInt__BigInt z;
  OOC_INT32 i;
  OOC_INT32 f;
  OOC_INT32 carry;
  OOC_INT32 j;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9065));
  i1 = _abs(i1);
  sizeA = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 9087));
  i3 = _abs(i3);
  i4 = i1+i3;
  sizeB = i3;
  i5 = (OOC_INT32)Object_BigInt__NewInstance(i4);
  i4 = i4-1;
  z = (Object_BigInt__BigInt)i5;
  i6 = 0<=i4;
  i = 0;
  if (!i6) goto l8;
  i6=0;
l3_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9177))+4);
  i7 = _check_pointer(i7, 9183);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 9183))*2) = 0;
  i6 = i6+1;
  i7 = i6<=i4;
  i = i6;
  if (i7) goto l3_loop;
l8:
  i4 = 0!=i1;
  i = 0;
  if (!i4) goto l33;
  i4 = 0!=i3;
  i6=0;
l11_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9256))+4);
  i7 = _check_pointer(i7, 9262);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 9262))*2);
  f = i7;
  carry = 0;
  j = 0;
  if (i4) goto l14;
  i7=0;i8=0;
  goto l20;
l14:
  i8=0;i9=0;
l15_loop:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9347))+4);
  i10 = _check_pointer(i10, 9353);
  i11 = i6+i9;
  i12 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9360))+4);
  i13 = _check_pointer(i13, 9366);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i13 = *(OOC_INT16*)(i13+(_check_index(i9, i14, OOC_UINT32, 9366))*2);
  i10 = *(OOC_INT16*)(i10+(_check_index(i11, i12, OOC_UINT32, 9353))*2);
  i8 = i8+(i10+(i13*i7));
  carry = i8;
  _assert((i8>=0), 127, 9382);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9411))+4);
  i10 = _check_pointer(i10, 9417);
  i12 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  *(OOC_INT16*)(i10+(_check_index(i11, i12, OOC_UINT32, 9417))*2) = (_mod(i8,32768));
  i8 = i8>>15;
  carry = i8;
  i9 = i9+1;
  i10 = i9!=i3;
  j = i9;
  if (i10) goto l15_loop;
l19:
  i7=i8;i8=i9;
l20:
  i9 = i7!=0;
  if (!i9) goto l28;
l23_loop:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9556))+4);
  i9 = _check_pointer(i9, 9562);
  i10 = i6+i8;
  i11 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = *(OOC_INT16*)(i9+(_check_index(i10, i11, OOC_UINT32, 9562))*2);
  i7 = i7+i9;
  carry = i7;
  _assert((i7>=0), 127, 9578);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9607))+4);
  i9 = _check_pointer(i9, 9613);
  i11 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  *(OOC_INT16*)(i9+(_check_index(i10, i11, OOC_UINT32, 9613))*2) = (_mod(i7,32768));
  i7 = i7>>15;
  carry = i7;
  i8 = i8+1;
  j = i8;
  i9 = i7!=0;
  if (i9) goto l23_loop;
l28:
  i6 = i6+1;
  i7 = i6!=i1;
  i = i6;
  if (i7) goto l11_loop;
l33:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i5);
  return (Object_BigInt__BigInt)i5;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Add(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9861));
  i1 = i1<0;
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10047));
  i2 = i2<0;
  if (i2) goto l5;
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  return (Object_BigInt__BigInt)i0;
  goto l12;
l5:
  i0 = (OOC_INT32)Object_BigInt__SubAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  return (Object_BigInt__BigInt)i0;
  goto l12;
l7:
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 9888));
  i2 = i2<0;
  if (i2) goto l10;
  i0 = (OOC_INT32)Object_BigInt__SubAbs((Object_BigInt__BigInt)i1, (Object_BigInt__BigInt)i0);
  return (Object_BigInt__BigInt)i0;
  goto l12;
l10:
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9951));
  *(OOC_INT32*)(_check_pointer(i0, 9940)) = (-i1);
  return (Object_BigInt__BigInt)i0;
l12:
  _failed_function(9797); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Sub(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10250));
  i1 = i1<0;
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10430));
  i2 = i2<0;
  if (i2) goto l5;
  i0 = (OOC_INT32)Object_BigInt__SubAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  return (Object_BigInt__BigInt)i0;
  goto l12;
l5:
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  return (Object_BigInt__BigInt)i0;
  goto l12;
l7:
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10277));
  i2 = i2<0;
  if (i2) goto l10;
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i0;
  
  goto l11;
l10:
  i0 = (OOC_INT32)Object_BigInt__SubAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i0;
  
l11:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10387));
  *(OOC_INT32*)(_check_pointer(i0, 10376)) = (-i1);
  return (Object_BigInt__BigInt)i0;
l12:
  _failed_function(10186); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Mul(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)Object_BigInt__MulAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 10657));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10672));
  i0 = (i0<0)!=(i1<0);
  if (!i0) goto l4;
  i0 = *(OOC_INT32*)(_check_pointer(i2, 10707));
  *(OOC_INT32*)(_check_pointer(i2, 10696)) = (-i0);
l4:
  return (Object_BigInt__BigInt)i2;
  ;
}

static OOC_INT16 Object_BigInt__InplaceDivRem1(OOC_INT16 pout[], OOC_LEN pout_0d, OOC_INT16 pin[], OOC_LEN pin_0d, OOC_INT32 size, OOC_INT16 n) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = n;
  i1 = i0>0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<32768;
  
l4:
  i2 = size;
  _assert(i1, 127, 11333);
  i1 = i2>0;
  if (i1) goto l7;
  i0=0;
  goto l13;
l7:
  i1=0;
l8_loop:
  i2 = size;
  i2 = i2-1;
  size = i2;
  i3 = *(OOC_INT16*)((OOC_INT32)pin+(_check_index(i2, pin_0d, OOC_UINT32, 11450))*2);
  i1 = (i1*32768)+i3;
  i3 = _div(i1,i0);
  *(OOC_INT16*)((OOC_INT32)pout+(_check_index(i2, pout_0d, OOC_UINT32, 11491))*2) = i3;
  i1 = i1-(i3*i0);
  i2 = i2>0;
  if (i2) goto l8_loop;
l12:
  i0=i1;
l13:
  return i0;
  ;
}

static Object_BigInt__BigInt Object_BigInt__DivRem1(Object_BigInt__BigInt a, OOC_INT16 n, OOC_INT16 *rem) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 size;
  Object_BigInt__BigInt z;

  i0 = n;
  i1 = i0>0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<32768;
  
l4:
  _assert(i1, 127, 11884);
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 11932));
  i2 = _abs(i2);
  size = i2;
  i3 = (OOC_INT32)Object_BigInt__NewInstance(i2);
  z = (Object_BigInt__BigInt)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11995))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11995))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12005))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12005))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 12001)), (OOC_INT32)0);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12011)), (OOC_INT32)0);
  i0 = Object_BigInt__InplaceDivRem1((void*)(_check_pointer(i4, 12001)), i5, (void*)(_check_pointer(i6, 12011)), i1, i2, i0);
  *rem = i0;
  Object_BigInt__Normalize((Object_BigInt__BigInt)i3);
  return (Object_BigInt__BigInt)i3;
  ;
}

static Object_BigInt__BigInt Object_BigInt__MulAdd1(Object_BigInt__BigInt a, OOC_INT16 n, OOC_INT16 add) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 sizeA;
  Object_BigInt__BigInt z;
  OOC_INT32 carry;
  OOC_INT32 i;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 12279));
  i1 = _abs(i1);
  sizeA = i1;
  i2 = (OOC_INT32)Object_BigInt__NewInstance((i1+1));
  z = (Object_BigInt__BigInt)i2;
  i3 = add;
  carry = i3;
  i4 = 0!=i1;
  i = 0;
  if (i4) goto l3;
  i1=i3;i0=0;
  goto l9;
l3:
  i4 = n;
  i5=0;
l4_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12396))+4);
  i6 = _check_pointer(i6, 12402);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 12402))*2);
  i3 = i3+(i6*i4);
  carry = i3;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12418))+4);
  i6 = _check_pointer(i6, 12424);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  *(OOC_INT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 12424))*2) = (_mod(i3,32768));
  i3 = i3>>15;
  carry = i3;
  i5 = i5+1;
  i6 = i5!=i1;
  i = i5;
  if (i6) goto l4_loop;
l8:
  i0=i5;i1=i3;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12513))+4);
  i3 = _check_pointer(i3, 12519);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 12519))*2) = i1;
  Object_BigInt__Normalize((Object_BigInt__BigInt)i2);
  return (Object_BigInt__BigInt)i2;
  ;
}

static Object_BigInt__BigInt Object_BigInt__DivRemAbs(Object_BigInt__BigInt v1, Object_BigInt__BigInt _w1, Object_BigInt__BigInt *rem) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23,i24;
  OOC_INT32 sizeV;
  OOC_INT32 sizeW;
  OOC_INT16 d;
  Object_BigInt__BigInt v;
  Object_BigInt__BigInt w;
  Object_BigInt__BigInt a;
  OOC_INT32 j;
  OOC_INT32 k;
  OOC_INT16 vj;
  OOC_INT32 carry;
  OOC_INT32 q;
  OOC_INT32 i;
  OOC_INT32 z;
  OOC_INT16 zz;

  i0 = (OOC_INT32)v1;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 12855));
  i1 = _abs(i1);
  sizeV = i1;
  i2 = (OOC_INT32)_w1;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 12878));
  i3 = _abs(i3);
  sizeW = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12918))+4);
  i4 = _check_pointer(i4, 12924);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index((i3-1), i5, OOC_UINT32, 12924))*2);
  i4 = _div(32768,(i4+1));
  d = i4;
  i0 = (OOC_INT32)Object_BigInt__MulAdd1((Object_BigInt__BigInt)i0, i4, 0);
  v = (Object_BigInt__BigInt)i0;
  i4 = d;
  i2 = (OOC_INT32)Object_BigInt__MulAdd1((Object_BigInt__BigInt)i2, i4, 0);
  i1 = i1>=i3;
  w = (Object_BigInt__BigInt)i2;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i3>1;
  
l4:
  _assert(i1, 127, 13005);
  i1 = *(OOC_INT32*)(_check_pointer(i2, 13069));
  _assert((i3==(_abs(i1))), 127, 13049);
  i1 = *(OOC_INT32*)(_check_pointer(i0, 13096));
  i1 = _abs(i1);
  sizeV = i1;
  i4 = (OOC_INT32)Object_BigInt__NewInstance(((i1-i3)+1));
  a = (Object_BigInt__BigInt)i4;
  j = i1;
  i5 = *(OOC_INT32*)(_check_pointer(i4, 13168));
  i5 = i5-1;
  i6 = i5>=0;
  k = i5;
  if (!i6) goto l70;
  i6 = i3-1;
  i7 = i3-1;
  i8 = i3-2;
  i9 = i3-1;
  i10 = 0<i3;
  i11 = 0<i3;
  i12=i5;i5=i1;
l7_loop:
  i13 = i5>=i1;
  if (i13) goto l10;
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13269))+4);
  i13 = _check_pointer(i13, 13275);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i13 = *(OOC_INT16*)(i13+(_check_index(i5, i14, OOC_UINT32, 13275))*2);
  vj = i13;
  
  goto l11;
l10:
  vj = 0;
  i13=0;
l11:
  carry = 0;
  i14 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13326))+4);
  i14 = _check_pointer(i14, 13332);
  i15 = OOC_ARRAY_LENGTH(i14, (OOC_INT32)0);
  i14 = *(OOC_INT16*)(i14+(_check_index(i6, i15, OOC_UINT32, 13332))*2);
  i14 = i13==i14;
  i13 = i13*32768;
  if (i14) goto l14;
  i14 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13409))+4);
  i14 = _check_pointer(i14, 13415);
  i15 = OOC_ARRAY_LENGTH(i14, (OOC_INT32)0);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13427))+4);
  i16 = _check_pointer(i16, 13433);
  i17 = OOC_ARRAY_LENGTH(i16, (OOC_INT32)0);
  i14 = *(OOC_INT16*)(i14+(_check_index((i5-1), i15, OOC_UINT32, 13415))*2);
  i15 = *(OOC_INT16*)(i16+(_check_index(i7, i17, OOC_UINT32, 13433))*2);
  i14 = _div((i13+i14),i15);
  q = i14;
  
  goto l15;
l14:
  q = 32767;
  i14=32767;
l15:
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13469))+4);
  i15 = _check_pointer(i15, 13475);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i17 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13521))+4);
  i17 = _check_pointer(i17, 13527);
  i18 = OOC_ARRAY_LENGTH(i17, (OOC_INT32)0);
  i19 = i5-1;
  i20 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13552))+4);
  i20 = _check_pointer(i20, 13558);
  i21 = OOC_ARRAY_LENGTH(i20, (OOC_INT32)0);
  i22 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13578))+4);
  i22 = _check_pointer(i22, 13584);
  i23 = OOC_ARRAY_LENGTH(i22, (OOC_INT32)0);
  i17 = *(OOC_INT16*)(i17+(_check_index(i19, i18, OOC_UINT32, 13527))*2);
  i18 = *(OOC_INT16*)(i20+(_check_index(i9, i21, OOC_UINT32, 13558))*2);
  i20 = i5-2;
  i15 = *(OOC_INT16*)(i15+(_check_index(i8, i16, OOC_UINT32, 13475))*2);
  i16 = *(OOC_INT16*)(i22+(_check_index(i20, i23, OOC_UINT32, 13584))*2);
  i15 = (i15*i14)>((((i13+i17)-(i14*i18))*32768)+i16);
  if (i15) goto l19_loop;
  i13=i14;
  goto l24;
l19_loop:
  i14 = i14-1;
  q = i14;
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13469))+4);
  i15 = _check_pointer(i15, 13475);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i17 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13521))+4);
  i17 = _check_pointer(i17, 13527);
  i18 = OOC_ARRAY_LENGTH(i17, (OOC_INT32)0);
  i21 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13552))+4);
  i21 = _check_pointer(i21, 13558);
  i22 = OOC_ARRAY_LENGTH(i21, (OOC_INT32)0);
  i23 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13578))+4);
  i23 = _check_pointer(i23, 13584);
  i24 = OOC_ARRAY_LENGTH(i23, (OOC_INT32)0);
  i17 = *(OOC_INT16*)(i17+(_check_index(i19, i18, OOC_UINT32, 13527))*2);
  i18 = *(OOC_INT16*)(i21+(_check_index(i9, i22, OOC_UINT32, 13558))*2);
  i15 = *(OOC_INT16*)(i15+(_check_index(i8, i16, OOC_UINT32, 13475))*2);
  i16 = *(OOC_INT16*)(i23+(_check_index(i20, i24, OOC_UINT32, 13584))*2);
  i15 = (i15*i14)>((((i13+i17)-(i14*i18))*32768)+i16);
  if (i15) goto l19_loop;
l23:
  i13=i14;
l24:
  i = 0;
  if (i10) goto l27;
  i14=OOC_FALSE;
  goto l29;
l27:
  i14 = i12<i1;
  
l29:
  if (i14) goto l31;
  i14=0;i15=0;
  goto l41;
l31:
  i14=0;i15=0;
l32_loop:
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13693))+4);
  i16 = _check_pointer(i16, 13699);
  i17 = OOC_ARRAY_LENGTH(i16, (OOC_INT32)0);
  i16 = *(OOC_INT16*)(i16+(_check_index(i14, i17, OOC_UINT32, 13699))*2);
  i16 = i16*i13;
  z = i16;
  i17 = i16>>15;
  zz = i17;
  i18 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13759))+4);
  i18 = _check_pointer(i18, 13765);
  i19 = i14+i12;
  i20 = OOC_ARRAY_LENGTH(i18, (OOC_INT32)0);
  i18 = *(OOC_INT16*)(i18+(_check_index(i19, i20, OOC_UINT32, 13765))*2);
  i15 = i15+((i18-i16)+(i17*32768));
  carry = i15;
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13802))+4);
  i16 = _check_pointer(i16, 13808);
  i18 = OOC_ARRAY_LENGTH(i16, (OOC_INT32)0);
  i17 = (_ash(i15,-15))-i17;
  *(OOC_INT16*)(i16+(_check_index(i19, i18, OOC_UINT32, 13808))*2) = (_mod(i15,32768));
  carry = i17;
  i14 = i14+1;
  i15 = i14<i3;
  i = i14;
  if (i15) goto l35;
  i15=OOC_FALSE;
  goto l37;
l35:
  i15 = (i14+i12)<i1;
  
l37:
  if (!i15) goto l40;
  i15=i17;
  goto l32_loop;
l40:
  i15=i17;
l41:
  i14 = i14+i12;
  i16 = i14<i1;
  if (i16) goto l44;
  i14=i15;
  goto l45;
l44:
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13977))+4);
  i16 = _check_pointer(i16, 13983);
  i17 = OOC_ARRAY_LENGTH(i16, (OOC_INT32)0);
  i16 = *(OOC_INT16*)(i16+(_check_index(i14, i17, OOC_UINT32, 13983))*2);
  i15 = i15+i16;
  carry = i15;
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14000))+4);
  i16 = _check_pointer(i16, 14006);
  i17 = OOC_ARRAY_LENGTH(i16, (OOC_INT32)0);
  *(OOC_INT16*)(i16+(_check_index(i14, i17, OOC_UINT32, 14006))*2) = 0;
  i14=i15;
l45:
  i15 = i14==0;
  if (i15) goto l64;
  _assert((i14==-1), 127, 14107);
  i14 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14136))+4);
  i14 = _check_pointer(i14, 14142);
  i15 = OOC_ARRAY_LENGTH(i14, (OOC_INT32)0);
  *(OOC_INT16*)(i14+(_check_index(i12, i15, OOC_UINT32, 14142))*2) = (i13-1);
  carry = 0;
  i = 0;
  if (i11) goto l50;
  i13=OOC_FALSE;
  goto l52;
l50:
  i13 = i12<i1;
  
l52:
  if (!i13) goto l65;
  i13=0;i14=0;
l54_loop:
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14264))+4);
  i15 = _check_pointer(i15, 14270);
  i16 = i14+i12;
  i17 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i18 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14279))+4);
  i18 = _check_pointer(i18, 14285);
  i19 = OOC_ARRAY_LENGTH(i18, (OOC_INT32)0);
  i15 = *(OOC_INT16*)(i15+(_check_index(i16, i17, OOC_UINT32, 14270))*2);
  i17 = *(OOC_INT16*)(i18+(_check_index(i14, i19, OOC_UINT32, 14285))*2);
  i13 = i13+(i15+i17);
  carry = i13;
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14302))+4);
  i15 = _check_pointer(i15, 14308);
  i17 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  *(OOC_INT16*)(i15+(_check_index(i16, i17, OOC_UINT32, 14308))*2) = (_mod(i13,32768));
  i13 = _ash(i13,-15);
  carry = i13;
  i14 = i14+1;
  i15 = i14<i3;
  i = i14;
  if (i15) goto l57;
  i15=OOC_FALSE;
  goto l59;
l57:
  i15 = (i14+i12)<i1;
  
l59:
  if (i15) goto l54_loop;
  goto l65;
l64:
  i14 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14065))+4);
  i14 = _check_pointer(i14, 14071);
  i15 = OOC_ARRAY_LENGTH(i14, (OOC_INT32)0);
  *(OOC_INT16*)(i14+(_check_index(i12, i15, OOC_UINT32, 14071))*2) = i13;
l65:
  i5 = i5-1;
  j = i5;
  i12 = i12-1;
  k = i12;
  i13 = i12>=0;
  if (i13) goto l7_loop;
l70:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i4);
  i1 = d;
  i0 = (OOC_INT32)Object_BigInt__DivRem1((Object_BigInt__BigInt)i0, i1, (void*)(OOC_INT32)&d);
  *rem = (Object_BigInt__BigInt)i0;
  return (Object_BigInt__BigInt)i4;
  ;
}

static void Object_BigInt__DivRem(Object_BigInt__BigInt a, Object_BigInt__BigInt b, Object_BigInt__BigInt *div, Object_BigInt__BigInt *rem) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 sizeA;
  OOC_INT32 sizeB;
  OOC_INT16 remDigit;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 14696));
  i1 = _abs(i1);
  sizeA = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 14718));
  i3 = _abs(i3);
  sizeB = i3;
  _assert((i3!=0), 127, 14762);
  i4 = i1<i3;
  if (i4) goto l7;
  i4 = i1==i3;
  if (i4) goto l5;
  i1=OOC_FALSE;
  goto l9;
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14888))+4);
  i4 = _check_pointer(i4, 14894);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14907))+4);
  i6 = _check_pointer(i6, 14913);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT16*)(i6+(_check_index((i3-1), i7, OOC_UINT32, 14913))*2);
  i1 = *(OOC_INT16*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 14894))*2);
  i1 = i1<i6;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l25;
  i1 = i3==1;
  if (i1) goto l13;
  i1 = (OOC_INT32)Object_BigInt__DivRemAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i2, (void*)(OOC_INT32)rem);
  z = (Object_BigInt__BigInt)i1;
  
  goto l14;
l13:
  remDigit = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15070))+4);
  i1 = _check_pointer(i1, 15076);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i3, OOC_UINT8, 15076))*2);
  i1 = (OOC_INT32)Object_BigInt__DivRem1((Object_BigInt__BigInt)i0, i1, (void*)(OOC_INT32)&remDigit);
  z = (Object_BigInt__BigInt)i1;
  i3 = remDigit;
  i3 = (OOC_INT32)Object_BigInt__NewInt(i3);
  *rem = (Object_BigInt__BigInt)i3;
  
l14:
  i2 = *(OOC_INT32*)(_check_pointer(i2, 15341));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15326));
  i2 = (i3<0)!=(i2<0);
  if (!i2) goto l17;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15371));
  *(OOC_INT32*)(_check_pointer(i1, 15360)) = (-i2);
l17:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15400));
  i0 = i0<0;
  if (i0) goto l20;
  i0=OOC_FALSE;
  goto l22;
l20:
  i0 = (OOC_INT32)*rem;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15417));
  i0 = i0!=0;
  
l22:
  if (!i0) goto l24;
  i0 = (OOC_INT32)*rem;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 15450));
  *(OOC_INT32*)(_check_pointer(i0, 15437)) = (-i2);
l24:
  *div = (Object_BigInt__BigInt)i1;
  goto l26;
l25:
  i1 = (OOC_INT32)Object_BigInt__zero;
  *div = (Object_BigInt__BigInt)i1;
  *rem = (Object_BigInt__BigInt)i0;
l26:
  return;
  ;
}

void Object_BigInt__BigIntDesc_DivMod(Object_BigInt__BigInt v, Object_BigInt__BigInt w, Object_BigInt__BigInt *div, Object_BigInt__BigInt *mod) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)w;
  Object_BigInt__DivRem((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1, (void*)(OOC_INT32)div, (void*)(OOC_INT32)mod);
  i0 = (OOC_INT32)*mod;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 15620));
  i2 = i2<0;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15635));
  i2 = i2>0;
  
l5:
  if (i2) goto l11;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 15653));
  i2 = i2>0;
  if (i2) goto l9;
  i2=OOC_FALSE;
  goto l13;
l9:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15668));
  i2 = i2<0;
  
  goto l13;
l11:
  i2=OOC_TRUE;
l13:
  if (!i2) goto l15;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15700)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  *mod = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)*div;
  i1 = (OOC_INT32)Object_BigInt__one;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15725)))), Object_BigInt__BigIntDesc_Sub)),Object_BigInt__BigIntDesc_Sub)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  *div = (Object_BigInt__BigInt)i0;
l15:
  return;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Div(Object_BigInt__BigInt v, Object_BigInt__BigInt w) {
  register OOC_INT32 i0,i1;
  Object_BigInt__BigInt div;
  Object_BigInt__BigInt mod;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15849)))), Object_BigInt__BigIntDesc_DivMod)),Object_BigInt__BigIntDesc_DivMod)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1, (void*)(OOC_INT32)&div, (void*)(OOC_INT32)&mod);
  i0 = (OOC_INT32)div;
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Mod(Object_BigInt__BigInt v, Object_BigInt__BigInt w) {
  register OOC_INT32 i0,i1;
  Object_BigInt__BigInt div;
  Object_BigInt__BigInt mod;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15988)))), Object_BigInt__BigIntDesc_DivMod)),Object_BigInt__BigIntDesc_DivMod)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1, (void*)(OOC_INT32)&div, (void*)(OOC_INT32)&mod);
  i0 = (OOC_INT32)mod;
  return (Object_BigInt__BigInt)i0;
  ;
}

Object__String8 Object_BigInt__BigIntDesc_Format(Object_BigInt__BigInt a, OOC_INT16 outputBase) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14;
  OOC_INT32 sizeA;
  OOC_INT32 i;
  OOC_INT32 bits;
  OOC_CHAR8 *str;
  OOC_INT32 pos;
  OOC_INT32 baseBits;
  OOC_INT32 accum;
  OOC_INT32 accumBits;
  OOC_INT32 d;
  OOC_CHAR8 c;
  OOC_INT16 powbase;
  OOC_INT32 power;
  OOC_INT32 newpow;
  Object_BigInt__BigInt scratch;
  OOC_INT32 size;
  OOC_INT32 ntostore;
  OOC_INT16 rem;
  OOC_INT16 nextrem;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16463));
  i1 = _abs(i1);
  i2 = outputBase;
  i3 = i2>=2;
  sizeA = i1;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = i2<=36;
  
l4:
  _assert(i3, 127, 16475);
  i3 = i2>1;
  bits = 0;
  if (i3) goto l7;
  i3=0;
  goto l13;
l7:
  i4=i2;i3=0;
l8_loop:
  i4 = i4>>1;
  i3 = i3+1;
  bits = i3;
  i5 = i4>1;
  if (i5) goto l8_loop;
l13:
  i3 = 5+(_div((((i1*15)+i3)-1),i3));
  i = i3;
  i4 = (OOC_INT32)RT0__NewObject(_td_Object_BigInt__16343.baseTypes[0], i3);
  str = (void*)i4;
  i5 = i1==0;
  pos = i3;
  if (i5) goto l84;
  i5 = *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(i2, 37, OOC_UINT16, 16855)));
  i5 = i5>0;
  if (i5) goto l52;
  powbase = i2;
  power = 1;
  i5=i2;i6=1;
l18_loop:
  i7 = i5*i2;
  newpow = i7;
  i8 = i7>32768;
  if (i8) goto l22;
  powbase = i7;
  i5 = i6+1;
  power = i5;
  i6=i5;i5=i7;
  goto l18_loop;
l22:
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18104)))), Object_BigInt__BigIntDesc_Copy)),Object_BigInt__BigIntDesc_Copy)((Object_BigInt__BigInt)i0);
  scratch = (Object_BigInt__BigInt)i7;
  size = i1;
  i8 = i6>0;
  
l23_loop:
  ntostore = i6;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18246))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18246))+4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18262))+4);
  i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18262))+4);
  i12 = OOC_ARRAY_LENGTH((_check_pointer(i12, 18268)), (OOC_INT32)0);
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i10, 18252)), (OOC_INT32)0);
  i9 = Object_BigInt__InplaceDivRem1((void*)(_check_pointer(i9, 18252)), i10, (void*)(_check_pointer(i11, 18268)), i12, i1, i5);
  rem = i9;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18299))+4);
  i10 = _check_pointer(i10, 18305);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i10 = *(OOC_INT16*)(i10+(_check_index((i1-1), i11, OOC_UINT32, 18305))*2);
  i10 = i10==0;
  if (!i10) goto l27;
  i1 = i1-1;
  size = i1;
  
l27:
  _assert(i8, 127, 18398);
  i10 = i1==0;
  i11=i6;{register OOC_INT32 h0=i3;i3=i9;i9=h0;}
l28_loop:
  i12 = _div(i3,i2);
  i3 = i3-(i12*i2);
  nextrem = i12;
  d = i3;
  i13 = i3<10;
  if (i13) goto l31;
  i3 = i3+55;
  c = i3;
  
  goto l32;
l31:
  i3 = i3+48;
  c = i3;
  
l32:
  i9 = i9-1;
  pos = i9;
  i13 = _check_pointer(i4, 18659);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  *(OOC_UINT8*)(i13+(_check_index(i9, i14, OOC_UINT32, 18659))) = i3;
  rem = i12;
  i3 = i11-1;
  ntostore = i3;
  i11 = i3==0;
  if (i11) goto l38;
  if (i10) goto l36;
  i11=OOC_FALSE;
  goto l40;
l36:
  i11 = i12==0;
  
  goto l40;
l38:
  i11=OOC_TRUE;
l40:
  if (i11) goto l43;
  i11=i3;i3=i12;
  goto l28_loop;
l43:
  i3 = i1==0;
  if (i3) goto l47;
  i3=i9;
  goto l23_loop;
l47:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 18936));
  i0 = i0<0;
  if (i0) goto l50;
  i0=i9;
  goto l51;
l50:
  i0 = i9-1;
  pos = i0;
  i1 = _check_pointer(i4, 18981);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 18981))) = (OOC_CHAR8)'-';
  
l51:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19060)), (OOC_INT32)0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19045)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i4, 19045)), i2, i0, i1);
  return (Object__String8)i0;
  goto l85;
l52:
  i5 = *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(i2, 37, OOC_UINT16, 16904)));
  baseBits = i5;
  accum = 0;
  accumBits = 0;
  i6 = 0!=i1;
  i = 0;
  if (i6) goto l55;
  i1=i3;
  goto l78;
l55:
  i6 = i1-1;
  i7 = -i5;
  i10=i3;i3=0;i8=0;i9=0;
l56_loop:
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17030))+4);
  i11 = _check_pointer(i11, 17036);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i8, i12, OOC_UINT32, 17036))*2);
  i3 = i3+(_ash(i11,i9));
  accum = i3;
  i9 = i9+15;
  accumBits = i9;
  _assert((i9>=i5), 127, 17093);
  i11 = i8<i6;
  {register OOC_INT32 h0=i9;i9=i10;i10=h0;}
l57_loop:
  i12 = _mod(i3,i2);
  d = i12;
  i13 = i12<10;
  if (i13) goto l60;
  i12 = i12+55;
  c = i12;
  
  goto l61;
l60:
  i12 = i12+48;
  c = i12;
  
l61:
  i9 = i9-1;
  pos = i9;
  i13 = _check_pointer(i4, 17369);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  *(OOC_UINT8*)(i13+(_check_index(i9, i14, OOC_UINT32, 17369))) = i12;
  i10 = i10-i5;
  i3 = _ash(i3,i7);
  accumBits = i10;
  i12 = i10<i5;
  accum = i3;
  if (i12) goto l64;
  i12=OOC_FALSE;
  goto l66;
l64:
  i12=i11;
l66:
  if (i12) goto l68;
  i12 = i3==0;
  
  goto l70;
l68:
  i12=OOC_TRUE;
l70:
  if (!i12) goto l57_loop;
l73:
  i8 = i8+1;
  i11 = i8!=i1;
  i = i8;
  if (!i11) goto l77;
  {register OOC_INT32 h0=i9;i9=i10;i10=h0;}
  goto l56_loop;
l77:
  i1=i9;
l78:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 17566));
  i0 = i0<0;
  if (i0) goto l81;
  i0=i1;
  goto l82;
l81:
  i0 = i1-1;
  pos = i0;
  i1 = _check_pointer(i4, 17611);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 17611))) = (OOC_CHAR8)'-';
  
l82:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17690)), (OOC_INT32)0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17675)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i4, 17675)), i2, i0, i1);
  return (Object__String8)i0;
  goto l85;
l84:
  i0 = (OOC_INT32)Object__NewLatin1("0", 2);
  return (Object__String8)i0;
l85:
  _failed_function(16060); return 0;
  ;
}

Object__String8 Object_BigInt__BigIntDesc_ToString(Object_BigInt__BigInt a) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)a;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19160)))), Object_BigInt__BigIntDesc_Format)),Object_BigInt__BigIntDesc_Format)((Object_BigInt__BigInt)i0, 10);
  return (Object__String8)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__NewRegion(const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end, OOC_INT32 inputBase) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 sign;
  Object_BigInt__BigInt z;
  OOC_INT32 firstDigit;
  OOC_INT32 d;

  i0 = inputBase;
  i1 = 2<=i0;
  sign = 1;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<=36;
  
l4:
  i2 = start;
  i3 = end;
  i4 = i2!=i3;
  _assert(i1, 127, 19467);
  if (i4) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 19600)));
  i1 = CharClass__IsWhiteSpace(i1);
  
l9:
  if (!i1) goto l20;
l11_loop:
  i1 = start;
  i1 = i1+1;
  i2 = i1!=i3;
  start = i1;
  if (i2) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 19600)));
  i1 = CharClass__IsWhiteSpace(i1);
  
l16:
  if (i1) goto l11_loop;
l20:
  i1 = start;
  i2 = i1!=i3;
  if (i2) goto l23;
  i1=1;
  goto l31;
l23:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 19701)));
  i2 = i2==(OOC_CHAR8)'-';
  if (i2) goto l29;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 19777)));
  i2 = i2==(OOC_CHAR8)'+';
  if (!i2) goto l28;
  start = (i1+1);
l28:
  i1=1;
  goto l31;
l29:
  sign = -1;
  start = (i1+1);
  i1=-1;
l31:
  i2 = (OOC_INT32)Object_BigInt__NewInstance(0);
  z = (Object_BigInt__BigInt)i2;
  i4 = start;
  i5 = i4!=i3;
  firstDigit = i4;
  if (i5) goto l35_loop;
  i0=i2;
  goto l56;
l35_loop:
  i5 = start;
  i6 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT32, 19933)));
  d = i6;
  i7 = i6<=57;
  if (i7) goto l46;
  i7 = i6>=97;
  if (i7) goto l44;
  i7 = i6>=65;
  if (!i7) goto l47;
  i6 = i6-55;
  d = i6;
  
  goto l47;
l44:
  i6 = i6-87;
  d = i6;
  
  goto l47;
l46:
  i6 = i6-48;
  d = i6;
  
l47:
  i7 = i6>=0;
  if (i7) goto l50;
  i7=OOC_FALSE;
  goto l51;
l50:
  i7 = i6<32768;
  
l51:
  _assert(i7, 127, 20140);
  i2 = (OOC_INT32)Object_BigInt__MulAdd1((Object_BigInt__BigInt)i2, i0, i6);
  z = (Object_BigInt__BigInt)i2;
  i5 = i5+1;
  i6 = i5!=i3;
  start = i5;
  if (i6) goto l35_loop;
l55:
  i0=i2;
l56:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 20270));
  i3 = start;
  *(OOC_INT32*)(_check_pointer(i0, 20255)) = (i1*i2);
  _assert((i3!=i4), 127, 20281);
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__NewString(const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 inputBase) {
  register OOC_INT32 i0,i1;

  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i1 = inputBase;
  i0 = (OOC_INT32)Object_BigInt__NewRegion((void*)(OOC_INT32)str, str_0d, 0, i0, i1);
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__NewStr(Object__String8 str, OOC_INT32 inputBase) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20639)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  chars = (Object__CharsLatin1)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20681)), (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 20690));
  i3 = inputBase;
  i0 = (OOC_INT32)Object_BigInt__NewRegion((void*)(_check_pointer(i1, 20681)), i2, 0, i0, i3);
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Invert(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)Object_BigInt__one;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20846)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  a = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 20873));
  *(OOC_INT32*)(_check_pointer(i0, 20862)) = (-i1);
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_LShift(Object_BigInt__BigInt a, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 wordShift;
  OOC_INT32 remShift;
  OOC_INT32 oldSize;
  OOC_INT32 newSize;
  Object_BigInt__BigInt z;
  OOC_INT32 i;
  OOC_INT32 accum;
  OOC_INT32 j;

  i0 = n;
  _assert((i0>=0), 127, 21059);
  i1 = _div(i0,15);
  wordShift = i1;
  i0 = _mod(i0,15);
  remShift = i0;
  i2 = (OOC_INT32)a;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 21159));
  i3 = _abs(i3);
  i4 = i3+i1;
  oldSize = i3;
  i5 = i0!=0;
  newSize = i4;
  if (!i5) goto l4;
  i4 = i4+1;
  newSize = i4;
  
l4:
  i5 = (OOC_INT32)Object_BigInt__NewInstance(i4);
  z = (Object_BigInt__BigInt)i5;
  i6 = *(OOC_INT32*)(_check_pointer(i2, 21298));
  i6 = i6<0;
  if (!i6) goto l7;
  i6 = *(OOC_INT32*)(_check_pointer(i5, 21332));
  *(OOC_INT32*)(_check_pointer(i5, 21321)) = (-i6);
l7:
  i6 = 0!=i1;
  i = 0;
  if (i6) goto l10;
  i1=0;
  goto l16;
l10:
  i6=0;
l11_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21396))+4);
  i7 = _check_pointer(i7, 21402);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 21402))*2) = 0;
  i6 = i6+1;
  i7 = i6!=i1;
  i = i6;
  if (i7) goto l11_loop;
l15:
  i1=i6;
l16:
  accum = 0;
  i6 = 0!=i3;
  j = 0;
  if (i6) goto l19;
  i1=0;
  goto l25;
l19:
  i7=i1;i1=0;i6=0;
l20_loop:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21512))+4);
  i8 = _check_pointer(i8, 21518);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = *(OOC_INT16*)(i8+(_check_index(i6, i9, OOC_UINT32, 21518))*2);
  i1 = i1+(_ash(i8,i0));
  accum = i1;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21542))+4);
  i8 = _check_pointer(i8, 21548);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT16*)(i8+(_check_index(i7, i9, OOC_UINT32, 21548))*2) = (_mod(i1,32768));
  i1 = i1>>15;
  accum = i1;
  i7 = i7+1;
  i = i7;
  i6 = i6+1;
  i8 = i6!=i3;
  j = i6;
  if (i8) goto l20_loop;
l25:
  i0 = i0!=0;
  if (i0) goto l28;
  _assert((i1==0), 127, 21730);
  goto l29;
l28:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21680))+4);
  i0 = _check_pointer(i0, 21686);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT16*)(i0+(_check_index((i4-1), i2, OOC_UINT32, 21686))*2) = i1;
l29:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i5);
  return (Object_BigInt__BigInt)i5;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_RShift(Object_BigInt__BigInt a, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14;
  OOC_INT32 wordShift;
  OOC_INT32 newSize;
  OOC_INT32 loShift;
  OOC_INT32 hiShift;
  OOC_UINT32 loMask;
  OOC_UINT32 hiMask;
  Object_BigInt__BigInt z;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = n;
  _assert((i0>=0), 127, 21972);
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 21997));
  i2 = i2<0;
  if (i2) goto l18;
  i2 = _div(i0,15);
  wordShift = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22144));
  i3 = i3-i2;
  i4 = i3<=0;
  newSize = i3;
  if (i4) goto l16;
  i0 = _mod(i0,15);
  i4 = 15-i0;
  loShift = i0;
  hiShift = i4;
  i5 = _type_cast_fast(OOC_UINT32, OOC_INT32, ((_ash(1,i4))-1));
  loMask = i5;
  i6 = _type_cast_fast(OOC_UINT32, OOC_INT32, (32767-((_ash(1,i4))-1)));
  hiMask = i6;
  i7 = (OOC_INT32)Object_BigInt__NewInstance(i3);
  z = (Object_BigInt__BigInt)i7;
  i = 0;
  j = i2;
  i8 = 0<i3;
  if (!i8) goto l15;
  i0 = -i0;
  i8=i2;i2=0;
l7_loop:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 22512))+4);
  i9 = _check_pointer(i9, 22518);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22562))+4);
  i11 = _check_pointer(i11, 22568);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i8, i12, OOC_UINT32, 22568))*2);
  i12 = (i2+1)<i3;
  *(OOC_INT16*)(i9+(_check_index(i2, i10, OOC_UINT32, 22518))*2) = (_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (_ash(i11,i0))))&i5)));
  if (!i12) goto l10;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 22645))+4);
  i9 = _check_pointer(i9, 22651);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 22645))+4);
  i11 = _check_pointer(i11, 22651);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22693))+4);
  i13 = _check_pointer(i13, 22699);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i13 = *(OOC_INT16*)(i13+(_check_index((i8+1), i14, OOC_UINT32, 22699))*2);
  i11 = *(OOC_INT16*)(i11+(_check_index(i2, i12, OOC_UINT32, 22651))*2);
  *(OOC_INT16*)(i9+(_check_index(i2, i10, OOC_UINT32, 22651))*2) = (i11+(_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (_ash(i13,i4))))&i6))));
l10:
  i2 = i2+1;
  i = i2;
  i8 = i8+1;
  i9 = i2<i3;
  j = i8;
  if (i9) goto l7_loop;
l15:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i7);
  return (Object_BigInt__BigInt)i7;
  goto l19;
l16:
  i0 = (OOC_INT32)Object_BigInt__zero;
  return (Object_BigInt__BigInt)i0;
  goto l19;
l18:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22025)))), Object_BigInt__BigIntDesc_Invert)),Object_BigInt__BigIntDesc_Invert)((Object_BigInt__BigInt)i1);
  a = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22048)))), Object_BigInt__BigIntDesc_RShift)),Object_BigInt__BigIntDesc_RShift)((Object_BigInt__BigInt)i1, i0);
  a = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22074)))), Object_BigInt__BigIntDesc_Invert)),Object_BigInt__BigIntDesc_Invert)((Object_BigInt__BigInt)i0);
  return (Object_BigInt__BigInt)i0;
l19:
  _failed_function(21827); return 0;
  ;
}

void Object_BigInt__BigIntDesc_Store(Object_BigInt__BigInt a, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22962));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22951)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22993));
  i2 = (_abs(i2))-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23023))+4);
  i4 = _check_pointer(i4, 23029);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 23029))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23012)))), BinaryRider__WriterDesc_WriteInt)),BinaryRider__WriterDesc_WriteInt)((BinaryRider__Writer)i0, i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void Object_BigInt__BigIntDesc_Load(Object_BigInt__BigInt a, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)a;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23142)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 23152)));
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23182));
  *(OOC_INT32*)((_check_pointer(i1, 23169))+4) = ((OOC_INT32)RT0__NewObject(_td_Object_BigInt__DigitArray.baseTypes[0], (_abs(i2))));
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23214));
  i2 = (_abs(i2))-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23243))+4);
  i4 = _check_pointer(i4, 23249);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23233)))), BinaryRider__ReaderDesc_ReadInt)),BinaryRider__ReaderDesc_ReadInt)((BinaryRider__Reader)i0, (void*)(i4+(_check_index(i3, i5, OOC_UINT32, 23249))*2));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

static void Object_BigInt__Init() {
  register OOC_INT32 i0,i1;
  OOC_INT32 i;

  i = 0;
  i0=0;
l1_loop:
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(i0, 37, OOC_UINT32, 23377))) = -1;
  i0 = i0+1;
  i = i0;
  i1 = i0<=36;
  if (i1) goto l1_loop;
l5:
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(2, 37, OOC_UINT8, 23409))) = 1;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(4, 37, OOC_UINT8, 23432))) = 2;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(8, 37, OOC_UINT8, 23455))) = 3;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(16, 37, OOC_UINT8, 23478))) = 4;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(32, 37, OOC_UINT8, 23501))) = 5;
  i0 = (OOC_INT32)Object_BigInt__NewInstance(0);
  Object_BigInt__zero = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)Object_BigInt__NewInstance(1);
  Object_BigInt__one = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23575))+4);
  i0 = _check_pointer(i0, 23581);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 23581))*2) = 1;
  return;
  ;
}

void OOC_Object_BigInt_init(void) {

  Object_BigInt__Init();
  return;
  ;
}

/* --- */
