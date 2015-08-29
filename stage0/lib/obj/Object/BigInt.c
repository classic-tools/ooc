#include <Object/BigInt.d>
#include <__oo2c.h>

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
  i2 = i2==(OOC_INT32)0;
  
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
  i3 = i3==(OOC_INT32)0;
  
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
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4774))+4);
  i2 = _check_pointer(i2, 4780);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT16*)(i2+(_check_index(1, i3, OOC_UINT8, 4780))*2);
  i2 = i2!=(OOC_INT32)0;
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

OOC_INT32 Object_BigInt__BigIntDesc_HashCode(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5579));
  i1 = _abs(i1);
  i2 = i1==0;
  len = i1;
  if (i2) goto l12;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5650))+4);
  i2 = _check_pointer(i2, 5656);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT16*)(i2+(_check_index(0, i3, OOC_UINT8, 5656))*2);
  i2 = _ash(i2,7);
  x = i2;
  i3 = 0!=i1;
  p = 0;
  if (i3) goto l5;
  i0=i2;
  goto l11;
l5:
  i3=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5831))+4);
  i4 = _check_pointer(i4, 5837);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 5837))*2);
  i2 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (1000003*i2)))^(_type_cast_fast(OOC_UINT32, OOC_INT16, i4))));
  x = i2;
  i3 = i3+1;
  i4 = i3!=i1;
  p = i3;
  if (i4) goto l6_loop;
l10:
  i0=i2;
l11:
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i0))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i1)))));
  goto l13;
l12:
  return 0;
l13:
  _failed_function(5482); return 0;
  ;
}

OOC_CHAR8 Object_BigInt__BigIntDesc_Equals(Object_BigInt__BigInt a, Object__Object b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6084)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l19;
l3:
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 6107));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 6116));
  i2 = i2!=i3;
  if (i2) goto l17;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 6188));
  i2 = (_abs(i2))-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l16;
  i3=0;
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6215))+4);
  i4 = _check_pointer(i4, 6221);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6228))+4);
  i6 = _check_pointer(i6, 6234);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 6221))*2);
  i5 = *(OOC_INT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 6234))*2);
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
  _failed_function(6007); return 0;
  ;
}

OOC_CHAR8 Object_BigInt__BigIntDesc_IsZero(Object_BigInt__BigInt a) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)a;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6446));
  return (i0==0);
  ;
}

OOC_CHAR8 Object_BigInt__BigIntDesc_NonZero(Object_BigInt__BigInt a) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)a;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6537));
  return (i0!=0);
  ;
}

OOC_INT32 Object_BigInt__BigIntDesc_ToLongInt(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 _int;
  OOC_INT32 i;

  _int = 0;
  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6677));
  i1 = (_abs(i1))-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l3;
  i1=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6723))+4);
  i3 = _check_pointer(i3, 6729);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 6729))*2);
  i1 = (i1*32768)+i3;
  _int = i1;
  i2 = i2+-1;
  i = i2;
  i3 = i2>=0;
  if (i3) goto l4_loop;
l9:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6752));
  i0 = i0<0;
  if (i0) goto l12;
  return i1;
  goto l13;
l12:
  return (-i1);
l13:
  _failed_function(6587); return 0;
  ;
}

OOC_INT32 Object_BigInt__BigIntDesc_Sign(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6898));
  i1 = i1>0;
  if (i1) goto l7;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6942));
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
  _failed_function(6863); return 0;
  ;
}

OOC_INT32 Object_BigInt__BigIntDesc_Cmp(Object_BigInt__BigInt a, Object__Object b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 res;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7123)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7117)))), 7117);
  goto l33;
l3:
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 7146));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 7155));
  i2 = i2<i3;
  if (i2) goto l31;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 7209));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 7200));
  i2 = i3>i2;
  if (i2) goto l29;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 7268));
  i2 = _abs(i2);
  
l8_loop:
  i2 = i2-1;
  i = i2;
  i3 = i2<0;
  if (i3) goto l11;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7336))+4);
  i4 = _check_pointer(i4, 7342);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7349))+4);
  i6 = _check_pointer(i6, 7355);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i2, i5, OOC_UINT32, 7342))*2);
  i5 = *(OOC_INT16*)(i6+(_check_index(i2, i7, OOC_UINT32, 7355))*2);
  i4 = i4!=i5;
  
  goto l13;
l11:
  i4=OOC_TRUE;
l13:
  if (!i4) goto l8_loop;
l17:
  if (i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7421))+4);
  i3 = _check_pointer(i3, 7427);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7434))+4);
  i0 = _check_pointer(i0, 7440);
  i5 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 7427))*2);
  i0 = *(OOC_INT16*)(i0+(_check_index(i2, i5, OOC_UINT32, 7440))*2);
  i0 = i3<i0;
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
  i0 = *(OOC_INT32*)(_check_pointer(i1, 7530));
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
  _failed_function(7044); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Abs(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 size;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7744));
  i1 = i1>=0;
  if (i1) goto l3;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7802));
  i1 = -i1;
  size = i1;
  i2 = (OOC_INT32)Object_BigInt__NewInstance(i1);
  z = (Object_BigInt__BigInt)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7859))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7894))+4);
  _move_block((_check_pointer(i0, 7865)),(_check_pointer(i2, 7900)),(i1*2));
  i0 = (OOC_INT32)z;
  return (Object_BigInt__BigInt)i0;
  goto l4;
l3:
  return (Object_BigInt__BigInt)i0;
l4:
  _failed_function(7671); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Neg(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8055)))), Object_BigInt__BigIntDesc_Copy)),Object_BigInt__BigIntDesc_Copy)((Object_BigInt__BigInt)i0);
  z = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8080));
  *(OOC_INT32*)(_check_pointer(i0, 8069)) = (-i1);
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
  i2 = *(OOC_INT32*)(_check_pointer(i0, 8307));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 8321));
  i2 = (_abs(i2))<(_abs(i3));
  if (i2) goto l32;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 8412));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 8398));
  i2 = (_abs(i3))==(_abs(i2));
  if (i2) goto l5;
  i0=1;
  goto l33;
l5:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 8493));
  i2 = (_abs(i2))-1;
  i = i2;
  i3 = i2>=0;
  if (i3) goto l8;
  i3=OOC_FALSE;
  goto l10;
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8528))+4);
  i3 = _check_pointer(i3, 8534);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8541))+4);
  i5 = _check_pointer(i5, 8547);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 8534))*2);
  i4 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 8547))*2);
  i3 = i3==i4;
  
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8528))+4);
  i3 = _check_pointer(i3, 8534);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8541))+4);
  i5 = _check_pointer(i5, 8547);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 8534))*2);
  i4 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 8547))*2);
  i3 = i3==i4;
  
l18:
  if (i3) goto l13_loop;
l22:
  i3 = i2<0;
  if (i3) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8639))+4);
  i3 = _check_pointer(i3, 8645);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8652))+4);
  i5 = _check_pointer(i5, 8658);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 8645))*2);
  i2 = *(OOC_INT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 8658))*2);
  i2 = i3<i2;
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
  i2 = *(OOC_INT32*)(_check_pointer(i1, 8758));
  i2 = _abs(i2);
  sizeA = i2;
  i3 = (OOC_INT32)b;
  i4 = *(OOC_INT32*)(_check_pointer(i3, 8780));
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
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8893))+4);
  i8 = _check_pointer(i8, 8899);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8904))+4);
  i10 = _check_pointer(i10, 8910);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i8 = *(OOC_INT16*)(i8+(_check_index(i6, i9, OOC_UINT32, 8899))*2);
  i9 = *(OOC_INT16*)(i10+(_check_index(i6, i11, OOC_UINT32, 8910))*2);
  i7 = (i8-i9)-i7;
  borrow = i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8929))+4);
  i8 = _check_pointer(i8, 8935);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT16*)(i8+(_check_index(i6, i9, OOC_UINT32, 8935))*2) = (_mod(i7,32768));
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
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9100))+4);
  i6 = _check_pointer(i6, 9106);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 9106))*2);
  i4 = i6-i4;
  borrow = i4;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9125))+4);
  i6 = _check_pointer(i6, 9131);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  *(OOC_INT16*)(i6+(_check_index(i3, i7, OOC_UINT32, 9131))*2) = (_mod(i4,32768));
  i4 = _mod((i4>>15),2);
  borrow = i4;
  i3 = i3+1;
  i6 = i3!=i2;
  i = i3;
  if (i6) goto l46_loop;
l50:
  i1=i4;
l51:
  _assert((i1==0), 127, 9230);
  i0 = i0<0;
  if (!i0) goto l54;
  i0 = *(OOC_INT32*)(_check_pointer(i5, 9291));
  *(OOC_INT32*)(_check_pointer(i5, 9280)) = (-i0);
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9590));
  i1 = _abs(i1);
  sizeA = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 9612));
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
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9702))+4);
  i7 = _check_pointer(i7, 9708);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 9708))*2) = (OOC_INT32)0;
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
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9781))+4);
  i7 = _check_pointer(i7, 9787);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = *(OOC_INT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 9787))*2);
  f = i7;
  carry = 0;
  j = 0;
  if (i4) goto l14;
  i7=0;i8=0;
  goto l20;
l14:
  i8=0;i9=0;
l15_loop:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9872))+4);
  i10 = _check_pointer(i10, 9878);
  i11 = i6+i9;
  i12 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9885))+4);
  i13 = _check_pointer(i13, 9891);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i13 = *(OOC_INT16*)(i13+(_check_index(i9, i14, OOC_UINT32, 9891))*2);
  i10 = *(OOC_INT16*)(i10+(_check_index(i11, i12, OOC_UINT32, 9878))*2);
  i8 = i8+(i10+(i13*i7));
  carry = i8;
  _assert((i8>=0), 127, 9907);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 9936))+4);
  i10 = _check_pointer(i10, 9942);
  i12 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  *(OOC_INT16*)(i10+(_check_index(i11, i12, OOC_UINT32, 9942))*2) = (_mod(i8,32768));
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
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10081))+4);
  i9 = _check_pointer(i9, 10087);
  i10 = i6+i8;
  i11 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = *(OOC_INT16*)(i9+(_check_index(i10, i11, OOC_UINT32, 10087))*2);
  i7 = i7+i9;
  carry = i7;
  _assert((i7>=0), 127, 10103);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10132))+4);
  i9 = _check_pointer(i9, 10138);
  i11 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  *(OOC_INT16*)(i9+(_check_index(i10, i11, OOC_UINT32, 10138))*2) = (_mod(i7,32768));
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10386));
  i1 = i1<0;
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10572));
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
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10413));
  i2 = i2<0;
  if (i2) goto l10;
  i0 = (OOC_INT32)Object_BigInt__SubAbs((Object_BigInt__BigInt)i1, (Object_BigInt__BigInt)i0);
  return (Object_BigInt__BigInt)i0;
  goto l12;
l10:
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10476));
  *(OOC_INT32*)(_check_pointer(i0, 10465)) = (-i1);
  return (Object_BigInt__BigInt)i0;
l12:
  _failed_function(10322); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Sub(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10775));
  i1 = i1<0;
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10955));
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
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10802));
  i2 = i2<0;
  if (i2) goto l10;
  i0 = (OOC_INT32)Object_BigInt__AddAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i0;
  
  goto l11;
l10:
  i0 = (OOC_INT32)Object_BigInt__SubAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i0;
  
l11:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10912));
  *(OOC_INT32*)(_check_pointer(i0, 10901)) = (-i1);
  return (Object_BigInt__BigInt)i0;
l12:
  _failed_function(10711); return 0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Mul(Object_BigInt__BigInt a, Object_BigInt__BigInt b) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt z;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)Object_BigInt__MulAbs((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  z = (Object_BigInt__BigInt)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 11182));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 11197));
  i0 = (i0<0)!=(i1<0);
  if (!i0) goto l4;
  i0 = *(OOC_INT32*)(_check_pointer(i2, 11232));
  *(OOC_INT32*)(_check_pointer(i2, 11221)) = (-i0);
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
  _assert(i1, 127, 11858);
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
  i3 = *(OOC_INT16*)((OOC_INT32)pin+(_check_index(i2, pin_0d, OOC_UINT32, 11975))*2);
  i1 = (i1*32768)+i3;
  i3 = _div(i1,i0);
  *(OOC_INT16*)((OOC_INT32)pout+(_check_index(i2, pout_0d, OOC_UINT32, 12016))*2) = i3;
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
  _assert(i1, 127, 12409);
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 12457));
  i2 = _abs(i2);
  size = i2;
  i3 = (OOC_INT32)Object_BigInt__NewInstance(i2);
  z = (Object_BigInt__BigInt)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12520))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12520))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12530))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12530))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 12526)), 0);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12536)), 0);
  i0 = Object_BigInt__InplaceDivRem1((void*)(_check_pointer(i4, 12526)), i5, (void*)(_check_pointer(i6, 12536)), i1, i2, i0);
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 12804));
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
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12921))+4);
  i6 = _check_pointer(i6, 12927);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 12927))*2);
  i3 = i3+(i6*i4);
  carry = i3;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12943))+4);
  i6 = _check_pointer(i6, 12949);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  *(OOC_INT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 12949))*2) = (_mod(i3,32768));
  i3 = i3>>15;
  carry = i3;
  i5 = i5+1;
  i6 = i5!=i1;
  i = i5;
  if (i6) goto l4_loop;
l8:
  i0=i5;i1=i3;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13038))+4);
  i3 = _check_pointer(i3, 13044);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT16*)(i3+(_check_index(i0, i4, OOC_UINT32, 13044))*2) = i1;
  Object_BigInt__Normalize((Object_BigInt__BigInt)i2);
  return (Object_BigInt__BigInt)i2;
  ;
}

static Object_BigInt__BigInt Object_BigInt__DivRemAbs(Object_BigInt__BigInt v1, Object_BigInt__BigInt _w1, Object_BigInt__BigInt *rem) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20;
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 13380));
  i1 = _abs(i1);
  sizeV = i1;
  i2 = (OOC_INT32)_w1;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 13403));
  i3 = _abs(i3);
  sizeW = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13443))+4);
  i4 = _check_pointer(i4, 13449);
  i5 = i3-1;
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i5, i6, OOC_UINT32, 13449))*2);
  i4 = _div(32768,(i4+1));
  d = i4;
  i0 = (OOC_INT32)Object_BigInt__MulAdd1((Object_BigInt__BigInt)i0, i4, (OOC_INT32)0);
  v = (Object_BigInt__BigInt)i0;
  i4 = d;
  i2 = (OOC_INT32)Object_BigInt__MulAdd1((Object_BigInt__BigInt)i2, i4, (OOC_INT32)0);
  i1 = i1>=i3;
  w = (Object_BigInt__BigInt)i2;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i3>1;
  
l4:
  _assert(i1, 127, 13530);
  i1 = *(OOC_INT32*)(_check_pointer(i2, 13594));
  _assert((i3==(_abs(i1))), 127, 13574);
  i1 = *(OOC_INT32*)(_check_pointer(i0, 13621));
  i1 = _abs(i1);
  sizeV = i1;
  i4 = (OOC_INT32)Object_BigInt__NewInstance(((i1-i3)+1));
  a = (Object_BigInt__BigInt)i4;
  j = i1;
  i6 = *(OOC_INT32*)(_check_pointer(i4, 13693));
  i6 = i6-1;
  i7 = i6>=0;
  k = i6;
  if (!i7) goto l70;
  i7 = i3-2;
  i8 = 0<i3;
  i9=i6;i6=i1;
l7_loop:
  i10 = i6>=i1;
  if (i10) goto l10;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13794))+4);
  i10 = _check_pointer(i10, 13800);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i10 = *(OOC_INT16*)(i10+(_check_index(i6, i11, OOC_UINT32, 13800))*2);
  vj = i10;
  
  goto l11;
l10:
  vj = (OOC_INT32)0;
  i10=(OOC_INT32)0;
l11:
  carry = 0;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13851))+4);
  i11 = _check_pointer(i11, 13857);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i5, i12, OOC_UINT32, 13857))*2);
  i11 = i10==i11;
  i10 = i10*32768;
  i12 = i6-1;
  if (i11) goto l14;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13934))+4);
  i11 = _check_pointer(i11, 13940);
  i13 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i14 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13952))+4);
  i14 = _check_pointer(i14, 13958);
  i15 = OOC_ARRAY_LENGTH(i14, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i12, i13, OOC_UINT32, 13940))*2);
  i13 = *(OOC_INT16*)(i14+(_check_index(i5, i15, OOC_UINT32, 13958))*2);
  i11 = _div((i10+i11),i13);
  q = i11;
  
  goto l15;
l14:
  q = 32767;
  i11=32767;
l15:
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13994))+4);
  i13 = _check_pointer(i13, 14000);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14046))+4);
  i15 = _check_pointer(i15, 14052);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i17 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14077))+4);
  i17 = _check_pointer(i17, 14083);
  i18 = OOC_ARRAY_LENGTH(i17, (OOC_INT32)0);
  i19 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14103))+4);
  i19 = _check_pointer(i19, 14109);
  i20 = OOC_ARRAY_LENGTH(i19, (OOC_INT32)0);
  i15 = *(OOC_INT16*)(i15+(_check_index(i12, i16, OOC_UINT32, 14052))*2);
  i16 = *(OOC_INT16*)(i17+(_check_index(i5, i18, OOC_UINT32, 14083))*2);
  i6 = i6-2;
  i13 = *(OOC_INT16*)(i13+(_check_index(i7, i14, OOC_UINT32, 14000))*2);
  i14 = *(OOC_INT16*)(i19+(_check_index(i6, i20, OOC_UINT32, 14109))*2);
  i13 = (i13*i11)>((((i10+i15)-(i11*i16))*32768)+i14);
  if (i13) goto l19_loop;
  i6=i11;
  goto l24;
l19_loop:
  i11 = i11-1;
  q = i11;
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13994))+4);
  i13 = _check_pointer(i13, 14000);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14046))+4);
  i15 = _check_pointer(i15, 14052);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i17 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14077))+4);
  i17 = _check_pointer(i17, 14083);
  i18 = OOC_ARRAY_LENGTH(i17, (OOC_INT32)0);
  i19 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14103))+4);
  i19 = _check_pointer(i19, 14109);
  i20 = OOC_ARRAY_LENGTH(i19, (OOC_INT32)0);
  i15 = *(OOC_INT16*)(i15+(_check_index(i12, i16, OOC_UINT32, 14052))*2);
  i16 = *(OOC_INT16*)(i17+(_check_index(i5, i18, OOC_UINT32, 14083))*2);
  i13 = *(OOC_INT16*)(i13+(_check_index(i7, i14, OOC_UINT32, 14000))*2);
  i14 = *(OOC_INT16*)(i19+(_check_index(i6, i20, OOC_UINT32, 14109))*2);
  i13 = (i13*i11)>((((i10+i15)-(i11*i16))*32768)+i14);
  if (i13) goto l19_loop;
l23:
  i6=i11;
l24:
  i = 0;
  if (i8) goto l27;
  i10=OOC_FALSE;
  goto l29;
l27:
  i10 = i9<i1;
  
l29:
  if (i10) goto l31;
  i10=0;i11=0;
  goto l41;
l31:
  i10=0;i11=0;
l32_loop:
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14218))+4);
  i13 = _check_pointer(i13, 14224);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i13 = *(OOC_INT16*)(i13+(_check_index(i10, i14, OOC_UINT32, 14224))*2);
  i13 = i13*i6;
  z = i13;
  i14 = i13>>15;
  zz = i14;
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14284))+4);
  i15 = _check_pointer(i15, 14290);
  i16 = i10+i9;
  i17 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i15 = *(OOC_INT16*)(i15+(_check_index(i16, i17, OOC_UINT32, 14290))*2);
  i11 = i11+((i15-i13)+(i14*32768));
  carry = i11;
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14327))+4);
  i13 = _check_pointer(i13, 14333);
  i15 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i14 = (_ash(i11,-15))-i14;
  *(OOC_INT16*)(i13+(_check_index(i16, i15, OOC_UINT32, 14333))*2) = (_mod(i11,32768));
  carry = i14;
  i10 = i10+1;
  i11 = i10<i3;
  i = i10;
  if (i11) goto l35;
  i11=OOC_FALSE;
  goto l37;
l35:
  i11 = (i10+i9)<i1;
  
l37:
  if (!i11) goto l40;
  i11=i14;
  goto l32_loop;
l40:
  i11=i14;
l41:
  i10 = i10+i9;
  i13 = i10<i1;
  if (i13) goto l44;
  i10=i11;
  goto l45;
l44:
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14502))+4);
  i13 = _check_pointer(i13, 14508);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i13 = *(OOC_INT16*)(i13+(_check_index(i10, i14, OOC_UINT32, 14508))*2);
  i11 = i11+i13;
  carry = i11;
  i13 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14525))+4);
  i13 = _check_pointer(i13, 14531);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  *(OOC_INT16*)(i13+(_check_index(i10, i14, OOC_UINT32, 14531))*2) = (OOC_INT32)0;
  i10=i11;
l45:
  i11 = i10==0;
  if (i11) goto l64;
  _assert((i10==-1), 127, 14632);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14661))+4);
  i10 = _check_pointer(i10, 14667);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  *(OOC_INT16*)(i10+(_check_index(i9, i11, OOC_UINT32, 14667))*2) = (i6-1);
  carry = 0;
  i = 0;
  if (i8) goto l50;
  i6=OOC_FALSE;
  goto l52;
l50:
  i6 = i9<i1;
  
l52:
  if (!i6) goto l65;
  i6=0;i10=0;
l54_loop:
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14789))+4);
  i11 = _check_pointer(i11, 14795);
  i13 = i10+i9;
  i14 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14804))+4);
  i15 = _check_pointer(i15, 14810);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i13, i14, OOC_UINT32, 14795))*2);
  i14 = *(OOC_INT16*)(i15+(_check_index(i10, i16, OOC_UINT32, 14810))*2);
  i6 = i6+(i11+i14);
  carry = i6;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14827))+4);
  i11 = _check_pointer(i11, 14833);
  i14 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  *(OOC_INT16*)(i11+(_check_index(i13, i14, OOC_UINT32, 14833))*2) = (_mod(i6,32768));
  i6 = _ash(i6,-15);
  carry = i6;
  i10 = i10+1;
  i11 = i10<i3;
  i = i10;
  if (i11) goto l57;
  i11=OOC_FALSE;
  goto l59;
l57:
  i11 = (i10+i9)<i1;
  
l59:
  if (i11) goto l54_loop;
  goto l65;
l64:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14590))+4);
  i10 = _check_pointer(i10, 14596);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  *(OOC_INT16*)(i10+(_check_index(i9, i11, OOC_UINT32, 14596))*2) = i6;
l65:
  j = i12;
  i6 = i9-1;
  k = i6;
  i9 = i6>=0;
  if (!i9) goto l70;
  i9=i6;i6=i12;
  goto l7_loop;
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 15221));
  i1 = _abs(i1);
  sizeA = i1;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 15243));
  i3 = _abs(i3);
  sizeB = i3;
  _assert((i3!=0), 127, 15287);
  i4 = i1<i3;
  if (i4) goto l7;
  i4 = i1==i3;
  if (i4) goto l5;
  i1=OOC_FALSE;
  goto l9;
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15413))+4);
  i4 = _check_pointer(i4, 15419);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15432))+4);
  i6 = _check_pointer(i6, 15438);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i1 = *(OOC_INT16*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 15419))*2);
  i4 = *(OOC_INT16*)(i6+(_check_index((i3-1), i7, OOC_UINT32, 15438))*2);
  i1 = i1<i4;
  
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
  remDigit = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15595))+4);
  i1 = _check_pointer(i1, 15601);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i3, OOC_UINT8, 15601))*2);
  i1 = (OOC_INT32)Object_BigInt__DivRem1((Object_BigInt__BigInt)i0, i1, (void*)(OOC_INT32)&remDigit);
  z = (Object_BigInt__BigInt)i1;
  i3 = remDigit;
  i3 = (OOC_INT32)Object_BigInt__NewInt(i3);
  *rem = (Object_BigInt__BigInt)i3;
  
l14:
  i2 = *(OOC_INT32*)(_check_pointer(i2, 15866));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15851));
  i2 = (i3<0)!=(i2<0);
  if (!i2) goto l17;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15896));
  *(OOC_INT32*)(_check_pointer(i1, 15885)) = (-i2);
l17:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15925));
  i0 = i0<0;
  if (i0) goto l20;
  i0=OOC_FALSE;
  goto l22;
l20:
  i0 = (OOC_INT32)*rem;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15942));
  i0 = i0!=0;
  
l22:
  if (!i0) goto l24;
  i0 = (OOC_INT32)*rem;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 15975));
  *(OOC_INT32*)(_check_pointer(i0, 15962)) = (-i2);
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
  i2 = *(OOC_INT32*)(_check_pointer(i0, 16145));
  i2 = i2<0;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 16160));
  i2 = i2>0;
  
l5:
  if (i2) goto l11;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 16178));
  i2 = i2>0;
  if (i2) goto l9;
  i2=OOC_FALSE;
  goto l13;
l9:
  i2 = *(OOC_INT32*)(_check_pointer(i1, 16193));
  i2 = i2<0;
  
  goto l13;
l11:
  i2=OOC_TRUE;
l13:
  if (!i2) goto l15;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16225)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  *mod = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)*div;
  i1 = (OOC_INT32)Object_BigInt__one;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16250)))), Object_BigInt__BigIntDesc_Sub)),Object_BigInt__BigIntDesc_Sub)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16374)))), Object_BigInt__BigIntDesc_DivMod)),Object_BigInt__BigIntDesc_DivMod)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1, (void*)(OOC_INT32)&div, (void*)(OOC_INT32)&mod);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16513)))), Object_BigInt__BigIntDesc_DivMod)),Object_BigInt__BigIntDesc_DivMod)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1, (void*)(OOC_INT32)&div, (void*)(OOC_INT32)&mod);
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
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16988));
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
  _assert(i3, 127, 17000);
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
  i4 = (OOC_INT32)RT0__NewObject(_td_Object_BigInt__16868.baseTypes[0], i3);
  str = (void*)i4;
  pos = i3;
  i5 = i1==0;
  if (i5) goto l84;
  i5 = *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(i2, 37, OOC_UINT16, 17380)));
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
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18629)))), Object_BigInt__BigIntDesc_Copy)),Object_BigInt__BigIntDesc_Copy)((Object_BigInt__BigInt)i0);
  scratch = (Object_BigInt__BigInt)i7;
  size = i1;
  i8 = i6>0;
  
l23_loop:
  ntostore = i6;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18771))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18771))+4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18787))+4);
  i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18787))+4);
  i12 = OOC_ARRAY_LENGTH((_check_pointer(i12, 18793)), (OOC_INT32)0);
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i10, 18777)), (OOC_INT32)0);
  i9 = Object_BigInt__InplaceDivRem1((void*)(_check_pointer(i9, 18777)), i10, (void*)(_check_pointer(i11, 18793)), i12, i1, i5);
  rem = i9;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18824))+4);
  i10 = _check_pointer(i10, 18830);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i12 = i1-1;
  i10 = *(OOC_INT16*)(i10+(_check_index(i12, i11, OOC_UINT32, 18830))*2);
  i10 = i10==(OOC_INT32)0;
  if (!i10) goto l27;
  size = i12;
  i1=i12;
l27:
  _assert(i8, 127, 18923);
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
  i13 = _check_pointer(i4, 19184);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  *(OOC_UINT8*)(i13+(_check_index(i9, i14, OOC_UINT32, 19184))) = i3;
  rem = i12;
  i3 = i11-1;
  ntostore = i3;
  i11 = i3==0;
  if (i11) goto l38;
  if (i10) goto l36;
  i11=OOC_FALSE;
  goto l40;
l36:
  i11 = i12==(OOC_INT32)0;
  
  goto l40;
l38:
  i11=OOC_TRUE;
l40:
  if (i11) goto l44;
  i11=i3;i3=i12;
  goto l28_loop;
l44:
  if (i10) goto l47;
  i3=i9;
  goto l23_loop;
l47:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 19461));
  i0 = i0<0;
  if (i0) goto l50;
  i0=i9;
  goto l51;
l50:
  i0 = i9-1;
  pos = i0;
  i1 = _check_pointer(i4, 19506);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 19506))) = (OOC_CHAR8)'-';
  
l51:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19585)), (OOC_INT32)0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 19570)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i4, 19570)), i2, i0, i1);
  return (Object__String8)i0;
  goto l85;
l52:
  i5 = *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(i2, 37, OOC_UINT16, 17429)));
  baseBits = i5;
  accum = 0;
  accumBits = 0;
  i6 = 0!=i1;
  i = 0;
  if (i6) goto l55;
  i1=i3;
  goto l78;
l55:
  i6 = -i5;
  i7 = i1-1;
  i10=i3;i3=0;i8=0;i9=0;
l56_loop:
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17555))+4);
  i11 = _check_pointer(i11, 17561);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i8, i12, OOC_UINT32, 17561))*2);
  i3 = i3+(_ash(i11,i9));
  accum = i3;
  i9 = i9+15;
  accumBits = i9;
  _assert((i9>=i5), 127, 17618);
  i11 = i8<i7;
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
  i13 = _check_pointer(i4, 17894);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  *(OOC_UINT8*)(i13+(_check_index(i9, i14, OOC_UINT32, 17894))) = i12;
  i10 = i10-i5;
  i3 = _ash(i3,i6);
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
  i0 = *(OOC_INT32*)(_check_pointer(i0, 18091));
  i0 = i0<0;
  if (i0) goto l81;
  i0=i1;
  goto l82;
l81:
  i0 = i1-1;
  pos = i0;
  i1 = _check_pointer(i4, 18136);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 18136))) = (OOC_CHAR8)'-';
  
l82:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18215)), (OOC_INT32)0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18200)), (OOC_INT32)0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i4, 18200)), i2, i0, i1);
  return (Object__String8)i0;
  goto l85;
l84:
  i0 = (OOC_INT32)Object__NewLatin1("0", 2);
  return (Object__String8)i0;
l85:
  _failed_function(16585); return 0;
  ;
}

Object__String8 Object_BigInt__BigIntDesc_ToString(Object_BigInt__BigInt a) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)a;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19685)))), Object_BigInt__BigIntDesc_Format)),Object_BigInt__BigIntDesc_Format)((Object_BigInt__BigInt)i0, 10);
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
  _assert(i1, 127, 19992);
  if (i4) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 20125)));
  i1 = CharClass__IsWhiteSpace(i1);
  
l9:
  if (!i1) goto l19;
l10_loop:
  i1 = start;
  i1 = i1+1;
  i2 = i1!=i3;
  start = i1;
  if (i2) goto l13;
  i1=OOC_FALSE;
  goto l15;
l13:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 20125)));
  i1 = CharClass__IsWhiteSpace(i1);
  
l15:
  if (i1) goto l10_loop;
l19:
  i1 = start;
  i2 = i1!=i3;
  if (i2) goto l22;
  i1=1;
  goto l30;
l22:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 20226)));
  i2 = i2==(OOC_CHAR8)'-';
  if (i2) goto l28;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 20302)));
  i2 = i2==(OOC_CHAR8)'+';
  if (!i2) goto l27;
  start = (i1+1);
l27:
  i1=1;
  goto l30;
l28:
  sign = -1;
  start = (i1+1);
  i1=-1;
l30:
  i2 = (OOC_INT32)Object_BigInt__NewInstance(0);
  z = (Object_BigInt__BigInt)i2;
  i4 = start;
  i5 = i4!=i3;
  firstDigit = i4;
  if (i5) goto l34_loop;
  i0=i2;
  goto l55;
l34_loop:
  i5 = start;
  i6 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT32, 20458)));
  d = i6;
  i7 = i6<=57;
  if (i7) goto l45;
  i7 = i6>=97;
  if (i7) goto l43;
  i7 = i6>=65;
  if (!i7) goto l46;
  i6 = i6-55;
  d = i6;
  
  goto l46;
l43:
  i6 = i6-87;
  d = i6;
  
  goto l46;
l45:
  i6 = i6-48;
  d = i6;
  
l46:
  i7 = i6>=0;
  if (i7) goto l49;
  i7=OOC_FALSE;
  goto l50;
l49:
  i7 = i6<32768;
  
l50:
  _assert(i7, 127, 20665);
  i2 = (OOC_INT32)Object_BigInt__MulAdd1((Object_BigInt__BigInt)i2, i0, i6);
  z = (Object_BigInt__BigInt)i2;
  i5 = i5+1;
  i6 = i5!=i3;
  start = i5;
  if (i6) goto l34_loop;
l54:
  i0=i2;
l55:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 20795));
  i3 = start;
  *(OOC_INT32*)(_check_pointer(i0, 20780)) = (i1*i2);
  _assert((i3!=i4), 127, 20806);
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21164)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  chars = (Object__CharsLatin1)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21206)), (OOC_INT32)0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 21215));
  i3 = inputBase;
  i0 = (OOC_INT32)Object_BigInt__NewRegion((void*)(_check_pointer(i1, 21206)), i2, 0, i0, i3);
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_Invert(Object_BigInt__BigInt a) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)Object_BigInt__one;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21371)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
  a = (Object_BigInt__BigInt)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 21398));
  *(OOC_INT32*)(_check_pointer(i0, 21387)) = (-i1);
  return (Object_BigInt__BigInt)i0;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_LShift(Object_BigInt__BigInt a, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_INT32 wordShift;
  OOC_INT32 remShift;
  OOC_INT32 oldSize;
  OOC_INT32 newSize;
  Object_BigInt__BigInt z;
  OOC_INT32 i;
  OOC_INT32 accum;
  OOC_INT32 j;

  i0 = n;
  _assert((i0>=0), 127, 21584);
  i1 = _div(i0,15);
  wordShift = i1;
  i0 = _mod(i0,15);
  remShift = i0;
  i2 = (OOC_INT32)a;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 21684));
  i3 = _abs(i3);
  i4 = i3+i1;
  oldSize = i3;
  newSize = i4;
  i5 = i0!=0;
  if (!i5) goto l4;
  i4 = i4+1;
  newSize = i4;
  
l4:
  i6 = (OOC_INT32)Object_BigInt__NewInstance(i4);
  z = (Object_BigInt__BigInt)i6;
  i7 = *(OOC_INT32*)(_check_pointer(i2, 21823));
  i7 = i7<0;
  if (!i7) goto l7;
  i7 = *(OOC_INT32*)(_check_pointer(i6, 21857));
  *(OOC_INT32*)(_check_pointer(i6, 21846)) = (-i7);
l7:
  i7 = 0!=i1;
  i = 0;
  if (i7) goto l10;
  i1=0;
  goto l16;
l10:
  i7=0;
l11_loop:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 21921))+4);
  i8 = _check_pointer(i8, 21927);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT16*)(i8+(_check_index(i7, i9, OOC_UINT32, 21927))*2) = (OOC_INT32)0;
  i7 = i7+1;
  i8 = i7!=i1;
  i = i7;
  if (i8) goto l11_loop;
l15:
  i1=i7;
l16:
  accum = 0;
  i7 = 0!=i3;
  j = 0;
  if (i7) goto l19;
  i0=0;
  goto l26;
l19:
  i8=i1;i1=0;i7=0;
l20_loop:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22037))+4);
  i9 = _check_pointer(i9, 22043);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i9 = *(OOC_INT16*)(i9+(_check_index(i7, i10, OOC_UINT32, 22043))*2);
  i1 = i1+(_ash(i9,i0));
  accum = i1;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 22067))+4);
  i9 = _check_pointer(i9, 22073);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  *(OOC_INT16*)(i9+(_check_index(i8, i10, OOC_UINT32, 22073))*2) = (_mod(i1,32768));
  i1 = i1>>15;
  accum = i1;
  i8 = i8+1;
  i = i8;
  i7 = i7+1;
  i9 = i7!=i3;
  j = i7;
  if (i9) goto l20_loop;
l24:
  i0=i1;
l26:
  if (i5) goto l28;
  _assert((i0==0), 127, 22255);
  goto l29;
l28:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 22205))+4);
  i1 = _check_pointer(i1, 22211);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_INT16*)(i1+(_check_index((i4-1), i2, OOC_UINT32, 22211))*2) = i0;
l29:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i6);
  return (Object_BigInt__BigInt)i6;
  ;
}

Object_BigInt__BigInt Object_BigInt__BigIntDesc_RShift(Object_BigInt__BigInt a, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;
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
  _assert((i0>=0), 127, 22497);
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 22522));
  i2 = i2<0;
  if (i2) goto l18;
  i2 = _div(i0,15);
  wordShift = i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 22669));
  i3 = i3-i2;
  newSize = i3;
  i4 = i3<=0;
  if (i4) goto l16;
  i0 = _mod(i0,15);
  i4 = 15-i0;
  loShift = i0;
  i5 = (_ash(1,i4))-1;
  hiShift = i4;
  i6 = _type_cast_fast(OOC_UINT32, OOC_INT32, i5);
  loMask = i6;
  i5 = _type_cast_fast(OOC_UINT32, OOC_INT32, (32767-i5));
  hiMask = i5;
  i7 = (OOC_INT32)Object_BigInt__NewInstance(i3);
  z = (Object_BigInt__BigInt)i7;
  i = 0;
  j = i2;
  i8 = 0<i3;
  if (!i8) goto l15;
  i0 = -i0;
  i8=i2;i2=0;
l7_loop:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 23037))+4);
  i9 = _check_pointer(i9, 23043);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23087))+4);
  i11 = _check_pointer(i11, 23093);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = *(OOC_INT16*)(i11+(_check_index(i8, i12, OOC_UINT32, 23093))*2);
  i12 = i2+1;
  i13 = i12<i3;
  *(OOC_INT16*)(i9+(_check_index(i2, i10, OOC_UINT32, 23043))*2) = (_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (_ash(i11,i0))))&i6)));
  i8 = i8+1;
  if (!i13) goto l10;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 23170))+4);
  i9 = _check_pointer(i9, 23176);
  i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 23170))+4);
  i11 = _check_pointer(i11, 23176);
  i14 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23218))+4);
  i15 = _check_pointer(i15, 23224);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i15 = *(OOC_INT16*)(i15+(_check_index(i8, i16, OOC_UINT32, 23224))*2);
  i11 = *(OOC_INT16*)(i11+(_check_index(i2, i14, OOC_UINT32, 23176))*2);
  *(OOC_INT16*)(i9+(_check_index(i2, i10, OOC_UINT32, 23176))*2) = (i11+(_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (_ash(i15,i4))))&i5))));
l10:
  i = i12;
  j = i8;
  if (!i13) goto l15;
  i2=i12;
  goto l7_loop;
l15:
  Object_BigInt__Normalize((Object_BigInt__BigInt)i7);
  return (Object_BigInt__BigInt)i7;
  goto l19;
l16:
  i0 = (OOC_INT32)Object_BigInt__zero;
  return (Object_BigInt__BigInt)i0;
  goto l19;
l18:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22550)))), Object_BigInt__BigIntDesc_Invert)),Object_BigInt__BigIntDesc_Invert)((Object_BigInt__BigInt)i1);
  a = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22573)))), Object_BigInt__BigIntDesc_RShift)),Object_BigInt__BigIntDesc_RShift)((Object_BigInt__BigInt)i1, i0);
  a = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22599)))), Object_BigInt__BigIntDesc_Invert)),Object_BigInt__BigIntDesc_Invert)((Object_BigInt__BigInt)i0);
  return (Object_BigInt__BigInt)i0;
l19:
  _failed_function(22352); return 0;
  ;
}

void Object_BigInt__BigIntDesc_Store(Object_BigInt__BigInt a, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23487));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23476)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23518));
  i2 = (_abs(i2))-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23548))+4);
  i4 = _check_pointer(i4, 23554);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 23554))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23537)))), BinaryRider__WriterDesc_WriteInt)),BinaryRider__WriterDesc_WriteInt)((BinaryRider__Writer)i0, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23667)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 23677)));
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23707));
  *(OOC_INT32*)((_check_pointer(i1, 23694))+4) = ((OOC_INT32)RT0__NewObject(_td_Object_BigInt__DigitArray.baseTypes[0], (_abs(i2))));
  i2 = *(OOC_INT32*)(_check_pointer(i1, 23739));
  i2 = (_abs(i2))-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23768))+4);
  i4 = _check_pointer(i4, 23774);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23758)))), BinaryRider__ReaderDesc_ReadInt)),BinaryRider__ReaderDesc_ReadInt)((BinaryRider__Reader)i0, (void*)(i4+(_check_index(i3, i5, OOC_UINT32, 23774))*2));
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
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(i0, 37, OOC_UINT32, 23902))) = -1;
  i0 = i0+1;
  i = i0;
  i1 = i0<=36;
  if (i1) goto l1_loop;
l5:
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(2, 37, OOC_UINT8, 23934))) = 1;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(4, 37, OOC_UINT8, 23957))) = 2;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(8, 37, OOC_UINT8, 23980))) = 3;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(16, 37, OOC_UINT8, 24003))) = 4;
  *(OOC_INT8*)((OOC_INT32)Object_BigInt__powerOf2+(_check_index(32, 37, OOC_UINT8, 24026))) = 5;
  i0 = (OOC_INT32)Object_BigInt__NewInstance(0);
  Object_BigInt__zero = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)Object_BigInt__NewInstance(1);
  Object_BigInt__one = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24100))+4);
  i0 = _check_pointer(i0, 24106);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 24106))*2) = 1;
  return;
  ;
}

void OOC_Object_BigInt_init(void) {

  Object_BigInt__Init();
  return;
  ;
}

/* --- */
