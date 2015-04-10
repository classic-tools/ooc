#include "ADT/Dictionary/AddressKey/IntValue.d"
#include "__oo2c.h"

void ADT_Dictionary_AddressKey_IntValue__Init(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4077))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4098))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4119))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4143)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4164))+4) = 0;
  return;
  ;
}

ADT_Dictionary_AddressKey_IntValue__Dictionary ADT_Dictionary_AddressKey_IntValue__New() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Dictionary.baseTypes[0]);
  ADT_Dictionary_AddressKey_IntValue__Init((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0);
  return (ADT_Dictionary_AddressKey_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4439))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4483))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4546))+16);
  i3 = _check_pointer(i3, 4553);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4553))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4582))+16);
  i3 = _check_pointer(i3, 4589);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4589))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4618))+16);
  i3 = _check_pointer(i3, 4625);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4625))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4661))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_INT32 ADT_Dictionary_AddressKey_IntValue__HashCode(ADT_Object__Object obj) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)obj;
  return (_type_cast_fast(OOC_INT32, OOC_PTR, i0));
  ;
}

static OOC_CHAR8 ADT_Dictionary_AddressKey_IntValue__IsSet(ADT_Object__Object key) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)key;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

static OOC_INT32 ADT_Dictionary_AddressKey_IntValue__Lookup(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary_AddressKey_IntValue__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6411))+16);
  t = (ADT_Dictionary_AddressKey_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6448))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6521);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6521))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6542);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6542))*12))+4);
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=OOC_TRUE;
l4:
  i8 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6590);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6590))*12))+4);
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6645);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i9, OOC_UINT32, 6645))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6673);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6673))*12))+4);
  i6 = i7==i6;
  
l13:
  if (i6) goto l15;
  freeslot = -1;
  goto l20;
l15:
  return i5;
  goto l20;
l17:
  freeslot = i5;
  goto l20;
l19:
  return i5;
l20:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((i4^(_type_cast_fast(OOC_UINT32, OOC_INT32, (_lsh(OOC_INT32, i3, -3)))))&i2));
  i6 = i4==0;
  incr = i4;
  if (!i6) goto l24;
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6875))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6968);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 6968))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7105);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7105))*12))+4);
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7209);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i9, OOC_UINT32, 7209))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7237);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7237))*12))+4);
  i6 = i7==i6;
  
l34:
  if (!i6) goto l47;
  return i4;
  goto l47;
l37:
  i6 = freeslot;
  i6 = i6<0;
  if (!i6) goto l47;
  freeslot = i4;
  goto l47;
l42:
  i6 = freeslot;
  i9 = i6>=0;
  if (i9) goto l45;
  return i4;
  goto l47;
l45:
  return i6;
l47:
  i5 = i5*2;
  incr = i5;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7324))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7405))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary_AddressKey_IntValue__Insert(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Object key, OOC_INT32 hash, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  i1 = hash;
  i2 = (OOC_INT32)dict;
  i3 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (ADT_Object__Object)i0, i1);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7800))+16);
  i4 = _check_pointer(i4, 7807);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7807))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7967))+16);
  i4 = _check_pointer(i4, 7974);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7974))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 8012));
  *(OOC_INT32*)(_check_pointer(i2, 8012)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8041))+16);
  i4 = _check_pointer(i4, 8048);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8048))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8075))+16);
  i0 = _check_pointer(i0, 8082);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 8082))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8111))+16);
  i0 = _check_pointer(i0, 8118);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 8118))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 8154))+4);
  *(OOC_INT32*)((_check_pointer(i2, 8154))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7859))+16);
  i0 = _check_pointer(i0, 7866);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7866))*12))+8) = i2;
l7:
  return;
  ;
}

static void ADT_Dictionary_AddressKey_IntValue__Resize(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, OOC_INT32 minUsed) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 oldSize;
  ADT_Dictionary_AddressKey_IntValue__Table oldTable;
  OOC_INT32 i;
  OOC_INT32 newSize;
  OOC_INT32 newPoly;
  ADT_Dictionary_AddressKey_IntValue__Table newTable;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8558))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8586))+16);
  oldTable = (ADT_Dictionary_AddressKey_IntValue__Table)i2;
  i3 = minUsed;
  i4 = 4<=i3;
  newSize = 4;
  if (i4) goto l3;
  i3=0;i4=4;
  goto l9;
l3:
  i4=0;i5=4;
l4_loop:
  i5 = _ash(i5,1);
  i6 = i5<=i3;
  newSize = i5;
  i4 = i4+1;
  if (i6) goto l4_loop;
l8:
  i3=i4;i4=i5;
l9:
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8739))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_AddressKey_IntValue__Table)i5;
  i6 = i4-1;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8878);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8878))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8909);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8909))*12))+8) = 0;
  i8 = _check_pointer(i5, 8940);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8940))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8972))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8999))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 9026))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9055)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9076))+4) = 0;
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9149);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9149))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9194);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 9212);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 9231);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9194))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9231))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9212))*12));
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (ADT_Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 9260);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9260))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9321);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9321))*12))+8) = 0;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9615))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((ADT_Object__Object)i1);
  i1 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (ADT_Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9735))+16);
  i0 = _check_pointer(i0, 9742);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9742))*12))+4);
  i0 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9401); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Size(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9904))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10262);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10298))+4);
  _assert((i2!=0), 127, 10286);
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((ADT_Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (ADT_Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10379))+16);
  i2 = _check_pointer(i2, 10386);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10386))*12))+4);
  i2 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i2);
  _assert(i2, 127, 10360);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10413))+16);
  i1 = _check_pointer(i1, 10420);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10420))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10833);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10865));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10881))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10920))+4);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (i2*2));
l4:
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((ADT_Object__Object)i0);
  i3 = value;
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (ADT_Object__Object)i0, i2, i3);
  return;
  ;
}

ADT_Dictionary_AddressKey_IntValue__Dictionary ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Copy(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary_AddressKey_IntValue__Dictionary copy;
  OOC_INT32 i;

  i0 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__New();
  copy = (ADT_Dictionary_AddressKey_IntValue__Dictionary)i0;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11186))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11228))+4);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11270))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11304))+16);
  i4 = _check_pointer(i4, 11311);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11311))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11354))+16);
  i4 = _check_pointer(i4, 11361);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11375))+16);
  i6 = _check_pointer(i6, 11382);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11415))+16);
  i8 = _check_pointer(i8, 11422);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11361))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11422))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11382))*12));
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (ADT_Object__Object)i4, i6, i5);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary_AddressKey_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Delete(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11825);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11861))+4);
  _assert((i2!=0), 127, 11849);
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((ADT_Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (ADT_Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11942))+16);
  i2 = _check_pointer(i2, 11949);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11949))*12))+4);
  i2 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i2);
  _assert(i2, 127, 11923);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11969))+16);
  i2 = _check_pointer(i2, 11976);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11976))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12049))+16);
  i2 = _check_pointer(i2, 12056);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12056))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12086))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12086))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Clear(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12248))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12292))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12355))+16);
  i3 = _check_pointer(i3, 12362);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12362))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12391))+16);
  i3 = _check_pointer(i3, 12398);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12398))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12427))+16);
  i3 = _check_pointer(i3, 12434);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12434))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  ADT_Dictionary_AddressKey_IntValue__Init((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0);
l11:
  return;
  ;
}

ADT_Object__ObjectArrayPtr ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Keys(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12761))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (ADT_Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12804))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12836))+16);
  i5 = _check_pointer(i5, 12843);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12843))*12))+4);
  i5 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12870);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12881))+16);
  i7 = _check_pointer(i7, 12888);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12888))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12870))*4) = i7;
  i4 = i4+1;
  j = i4;
  
l8:
  i3 = i3+1;
  i5 = i3<=i2;
  i = i3;
  if (i5) goto l4_loop;
l12:
  i2=i4;
l13:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12953))+4);
  _assert((i2==i0), 127, 12937);
  return (ADT_Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Store(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13615))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13599)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13636))+4);
  i2 = i2!=0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13677))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13711))+16);
  i4 = _check_pointer(i4, 13718);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13718))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13763))+16);
  i4 = _check_pointer(i4, 13770);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13770))*12))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13744)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13808))+16);
  i4 = _check_pointer(i4, 13815);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13815))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13792)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i4);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Load(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary_AddressKey_IntValue__Init((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13978)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 13993))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14014))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14192))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14179))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14225))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14264))+16);
  i4 = _check_pointer(i4, 14271);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14246)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14271))*12))+4));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14306))+16);
  i4 = _check_pointer(i4, 14313);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14291)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14313))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14338))+16);
  i4 = _check_pointer(i4, 14345);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14372))+16);
  i6 = _check_pointer(i6, 14379);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14379))*12))+4);
  i6 = ADT_Dictionary_AddressKey_IntValue__HashCode((ADT_Object__Object)i6);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14345))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14425))+8);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_AddressKey_IntValue_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Dummy.baseTypes[0]);
  ADT_Dictionary_AddressKey_IntValue__dummy = (ADT_Dictionary_AddressKey_IntValue__Dummy)i0;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14515))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14536))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14557))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14579))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14601))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14623))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14646))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14670))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14694))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14718))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14742))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 14768))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 14794))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 14821))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 14847))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 14874))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 14901))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 14929))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 14957))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 14985))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 15013))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 15041))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 15070))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 15100))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 15129))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 15159))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 15190))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 15220))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 15250))*4) = 1073741907;
  return;
  ;
}

/* --- */
