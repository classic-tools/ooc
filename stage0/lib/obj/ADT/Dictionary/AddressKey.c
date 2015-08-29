#include <ADT/Dictionary/AddressKey.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Dictionary_AddressKey__Init(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4364))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4385))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4406))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4430)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4451))+4) = 0;
  return;
  ;
}

ADT_Dictionary_AddressKey__Dictionary ADT_Dictionary_AddressKey__New(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey__Dictionary.baseTypes[0]);
  ADT_Dictionary_AddressKey__Init((ADT_Dictionary_AddressKey__Dictionary)i0);
  return (ADT_Dictionary_AddressKey__Dictionary)i0;
  ;
}

void ADT_Dictionary_AddressKey__DictionaryDesc_Destroy(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4726))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4770))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4833))+16);
  i3 = _check_pointer(i3, 4840);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4840))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4869))+16);
  i3 = _check_pointer(i3, 4876);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4876))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4907))+16);
  i3 = _check_pointer(i3, 4914);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4914))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4950))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_INT32 ADT_Dictionary_AddressKey__HashCode(Object__Object obj) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)obj;
  return (_type_cast_fast(OOC_INT32, OOC_INT32, i0));
  ;
}

static OOC_CHAR8 ADT_Dictionary_AddressKey__IsSet(Object__Object key) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)key;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT32)ADT_Dictionary_AddressKey__dummy;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

static OOC_INT32 ADT_Dictionary_AddressKey__Lookup(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary_AddressKey__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6700))+16);
  t = (ADT_Dictionary_AddressKey__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6737))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6810);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6810))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6831);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6831))*12))+4);
  i7 = (OOC_INT32)key;
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=1u;
l4:
  i7 = (OOC_INT32)key;
  i8 = (OOC_INT32)ADT_Dictionary_AddressKey__dummy;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6879);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6879))*12))+4);
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6934);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i9, OOC_UINT32, 6934))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=0u;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6962);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6962))*12))+4);
  i6 = i7==i6;
  
l13:
  if (i6) goto l15;
  freeslot = (-1);
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
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((i4^(_type_cast_fast(OOC_UINT32, OOC_INT32, (_lsh(OOC_INT32, i3, (-3))))))&i2));
  incr = i4;
  i6 = i4==0;
  if (!i6) goto l24;
  i4 = *(OOC_INT32*)((_check_pointer(i0, 7164))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 7257);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7257))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7394);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7394))*12))+4);
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7498);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i9, OOC_UINT32, 7498))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=0u;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7526);
  i9 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7526))*12))+4);
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7613))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7694))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary_AddressKey__Insert(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key, OOC_INT32 hash, Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)key;
  i2 = hash;
  i3 = ADT_Dictionary_AddressKey__Lookup((ADT_Dictionary_AddressKey__Dictionary)i0, (Object__Object)i1, i2);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8089))+16);
  i4 = _check_pointer(i4, 8096);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8096))*12))+4);
  i4 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8256))+16);
  i4 = _check_pointer(i4, 8263);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8263))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i0, 8301));
  *(OOC_INT32*)(_check_pointer(i0, 8301)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8330))+16);
  i4 = _check_pointer(i4, 8337);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8337))*12))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8364))+16);
  i1 = _check_pointer(i1, 8371);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+((_check_index(i3, i4, OOC_UINT32, 8371))*12)) = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8400))+16);
  i1 = _check_pointer(i1, 8407);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)value;
  *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 8407))*12))+8) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8443))+4);
  *(OOC_INT32*)((_check_pointer(i0, 8443))+4) = (i1+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8148))+16);
  i0 = _check_pointer(i0, 8155);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 8155))*12))+8) = i2;
l7:
  return;
  ;
}

static void ADT_Dictionary_AddressKey__Resize(ADT_Dictionary_AddressKey__Dictionary dict, OOC_INT32 minUsed) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 oldSize;
  ADT_Dictionary_AddressKey__Table oldTable;
  OOC_INT32 i;
  OOC_INT32 newSize;
  OOC_INT32 newPoly;
  ADT_Dictionary_AddressKey__Table newTable;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8847))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8875))+16);
  oldTable = (ADT_Dictionary_AddressKey__Table)i2;
  newSize = 4;
  i3 = minUsed;
  i4 = 4<=i3;
  if (i4) goto l3;
  i3=0;i4=4;
  goto l9;
l3:
  i4=0;i5=4;
l4_loop:
  i5 = _ash(i5,1);
  newSize = i5;
  i4 = i4+1;
  i6 = i5<=i3;
  if (i6) goto l4_loop;
l8:
  i3=i4;i4=i5;
l9:
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(i3, 29, OOC_UINT32, 9028))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_AddressKey__Table)i5;
  i = 0;
  i6 = 0<i4;
  if (!i6) goto l17;
  i6=0;
l12_loop:
  i7 = _check_pointer(i5, 9167);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 9167))*12))+4) = (OOC_INT32)0;
  i7 = _check_pointer(i5, 9198);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 9198))*12))+8) = (OOC_INT32)0;
  i7 = _check_pointer(i5, 9231);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)(i7+((_check_index(i6, i8, OOC_UINT32, 9231))*12)) = 0;
  i6 = i6+1;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 9263))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 9290))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 9317))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9346)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9367))+4) = 0;
  i = 0;
  i3 = 0<i1;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9440);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9440))*12))+4);
  i4 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9485);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 9503);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 9522);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9485))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9522))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9503))*12));
  ADT_Dictionary_AddressKey__Insert((ADT_Dictionary_AddressKey__Dictionary)i0, (Object__Object)i4, i6, (Object__Object)i5);
  i4 = _check_pointer(i2, 9551);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9551))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9612);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9612))*12))+8) = (OOC_INT32)0;
l23:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary_AddressKey__DictionaryDesc_HasKey(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9908))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = ADT_Dictionary_AddressKey__HashCode((Object__Object)i1);
  i1 = ADT_Dictionary_AddressKey__Lookup((ADT_Dictionary_AddressKey__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10028))+16);
  i0 = _check_pointer(i0, 10035);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 10035))*12))+4);
  i0 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(9694); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey__DictionaryDesc_Size(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10197))+4);
  return i0;
  ;
}

Object__Object ADT_Dictionary_AddressKey__DictionaryDesc_Get(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10555);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10591))+4);
  _assert((i2!=0), 127, 10579);
  i2 = ADT_Dictionary_AddressKey__HashCode((Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey__Lookup((ADT_Dictionary_AddressKey__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10672))+16);
  i2 = _check_pointer(i2, 10679);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10679))*12))+4);
  i2 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i2);
  _assert(i2, 127, 10653);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10706))+16);
  i1 = _check_pointer(i1, 10713);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10713))*12))+8);
  return (Object__Object)i0;
  ;
}

void ADT_Dictionary_AddressKey__DictionaryDesc_Set(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key, Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11126);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 11158));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 11174))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11213))+4);
  ADT_Dictionary_AddressKey__Resize((ADT_Dictionary_AddressKey__Dictionary)i1, (i2*2));
l4:
  i2 = ADT_Dictionary_AddressKey__HashCode((Object__Object)i0);
  i3 = (OOC_INT32)value;
  ADT_Dictionary_AddressKey__Insert((ADT_Dictionary_AddressKey__Dictionary)i1, (Object__Object)i0, i2, (Object__Object)i3);
  return;
  ;
}

ADT_Dictionary_AddressKey__Dictionary ADT_Dictionary_AddressKey__DictionaryDesc_Copy(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary_AddressKey__Dictionary copy;
  OOC_INT32 i;

  i0 = (OOC_INT32)ADT_Dictionary_AddressKey__New();
  copy = (ADT_Dictionary_AddressKey__Dictionary)i0;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11544))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11586))+4);
  ADT_Dictionary_AddressKey__Resize((ADT_Dictionary_AddressKey__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11628))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11662))+16);
  i4 = _check_pointer(i4, 11669);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11669))*12))+4);
  i4 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11712))+16);
  i4 = _check_pointer(i4, 11719);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11733))+16);
  i6 = _check_pointer(i6, 11740);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11773))+16);
  i8 = _check_pointer(i8, 11780);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11719))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11780))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11740))*12));
  ADT_Dictionary_AddressKey__Insert((ADT_Dictionary_AddressKey__Dictionary)i0, (Object__Object)i4, i6, (Object__Object)i5);
l8:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary_AddressKey__Dictionary)i0;
  ;
}

void ADT_Dictionary_AddressKey__DictionaryDesc_Delete(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 12183);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 12219))+4);
  _assert((i2!=0), 127, 12207);
  i2 = ADT_Dictionary_AddressKey__HashCode((Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey__Lookup((ADT_Dictionary_AddressKey__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12300))+16);
  i2 = _check_pointer(i2, 12307);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12307))*12))+4);
  i2 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i2);
  _assert(i2, 127, 12281);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12327))+16);
  i2 = _check_pointer(i2, 12334);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary_AddressKey__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12334))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12407))+16);
  i2 = _check_pointer(i2, 12414);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12414))*12))+8) = (OOC_INT32)0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12446))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12446))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_AddressKey__DictionaryDesc_Clear(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12608))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12652))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12715))+16);
  i3 = _check_pointer(i3, 12722);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12722))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12751))+16);
  i3 = _check_pointer(i3, 12758);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12758))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12789))+16);
  i3 = _check_pointer(i3, 12796);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12796))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l5_loop;
l10:
  ADT_Dictionary_AddressKey__Init((ADT_Dictionary_AddressKey__Dictionary)i0);
l11:
  return;
  ;
}

Object__ObjectArrayPtr ADT_Dictionary_AddressKey__DictionaryDesc_Keys(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13123))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13166))+8);
  i = 0;
  i3 = 0<i2;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13198))+16);
  i5 = _check_pointer(i5, 13205);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 13205))*12))+4);
  i5 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 13232);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13243))+16);
  i7 = _check_pointer(i7, 13250);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 13250))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13232))*4) = i7;
  i4 = i4+1;
  j = i4;
  
l8:
  i3 = i3+1;
  i = i3;
  i5 = i3<i2;
  if (i5) goto l4_loop;
l12:
  i2=i4;
l13:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13315))+4);
  _assert((i2==i0), 127, 13299);
  return (Object__ObjectArrayPtr)i1;
  ;
}

Object__ObjectArrayPtr ADT_Dictionary_AddressKey__DictionaryDesc_Values(ADT_Dictionary_AddressKey__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13619))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13662))+8);
  i = 0;
  i3 = 0<i2;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13694))+16);
  i5 = _check_pointer(i5, 13701);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 13701))*12))+4);
  i5 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 13728);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13739))+16);
  i7 = _check_pointer(i7, 13746);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 13746))*12))+8);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13728))*4) = i7;
  i4 = i4+1;
  j = i4;
  
l8:
  i3 = i3+1;
  i = i3;
  i5 = i3<i2;
  if (i5) goto l4_loop;
l12:
  i2=i4;
l13:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13813))+4);
  _assert((i2==i0), 127, 13797);
  return (Object__ObjectArrayPtr)i1;
  ;
}

OOC_CHAR8 ADT_Dictionary_AddressKey__DictionaryDesc_Equals(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object obj) {

  _assert(0u, 127, 13960);
  _failed_function(13883); 
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey__DictionaryDesc_HashCode(ADT_Dictionary_AddressKey__Dictionary dict) {

  _assert(0u, 127, 14086);
  _failed_function(14025); 
  ;
}

void ADT_Dictionary_AddressKey__DictionaryDesc_Store(ADT_Dictionary_AddressKey__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14273))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14257)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14294))+4);
  i2 = i2!=0;
  if (!i2) goto l22;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14335))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l22;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14369))+16);
  i4 = _check_pointer(i4, 14376);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14376))*12))+4);
  i4 = ADT_Dictionary_AddressKey__IsSet((Object__Object)i4);
  if (!i4) goto l16;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14412))+16);
  i4 = _check_pointer(i4, 14419);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14419))*12))+4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14521)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14549)))), &_td_ADT_Storable__ObjectDesc, 14549)));
  goto l11;
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14472)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14595))+16);
  i4 = _check_pointer(i4, 14602);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14602))*12))+8);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14706)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14734)))), &_td_ADT_Storable__ObjectDesc, 14734)));
  goto l16;
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14657)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l16:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l22:
  return;
  ;
}

void ADT_Dictionary_AddressKey__DictionaryDesc_Load(ADT_Dictionary_AddressKey__Dictionary dict, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary_AddressKey__Init((ADT_Dictionary_AddressKey__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14954)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 14969))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14990))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 15168))+8);
  *(OOC_INT32*)((_check_pointer(i0, 15155))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey__Table.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 15201))+8);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15222)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15254))+16);
  i4 = _check_pointer(i4, 15261);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 15261))*12))+4) = i6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15287)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15319))+16);
  i4 = _check_pointer(i4, 15326);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 15326))*12))+8) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15357))+16);
  i4 = _check_pointer(i4, 15364);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15391))+16);
  i6 = _check_pointer(i6, 15398);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 15398))*12))+4);
  i6 = ADT_Dictionary_AddressKey__HashCode((Object__Object)i6);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 15364))*12)) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 15444))+8);
  ADT_Dictionary_AddressKey__Resize((ADT_Dictionary_AddressKey__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void ADT_Dictionary_AddressKey__DummyDesc_Destroy(ADT_Dictionary_AddressKey__Dummy dummy) {

  return;
  ;
}

void OOC_ADT_Dictionary_AddressKey_init(void) {

  ADT_Dictionary_AddressKey__dummy = (ADT_Dictionary_AddressKey__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(0, 29, OOC_UINT8, 15565))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(1, 29, OOC_UINT8, 15586))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(2, 29, OOC_UINT8, 15607))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(3, 29, OOC_UINT8, 15629))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(4, 29, OOC_UINT8, 15651))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(5, 29, OOC_UINT8, 15673))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(6, 29, OOC_UINT8, 15696))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(7, 29, OOC_UINT8, 15720))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(8, 29, OOC_UINT8, 15744))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(9, 29, OOC_UINT8, 15768))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(10, 29, OOC_UINT8, 15792))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(11, 29, OOC_UINT8, 15818))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(12, 29, OOC_UINT8, 15844))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(13, 29, OOC_UINT8, 15871))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(14, 29, OOC_UINT8, 15897))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(15, 29, OOC_UINT8, 15924))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(16, 29, OOC_UINT8, 15951))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(17, 29, OOC_UINT8, 15979))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(18, 29, OOC_UINT8, 16007))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(19, 29, OOC_UINT8, 16035))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(20, 29, OOC_UINT8, 16063))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(21, 29, OOC_UINT8, 16091))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(22, 29, OOC_UINT8, 16120))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(23, 29, OOC_UINT8, 16150))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(24, 29, OOC_UINT8, 16179))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(25, 29, OOC_UINT8, 16209))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(26, 29, OOC_UINT8, 16240))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(27, 29, OOC_UINT8, 16270))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey__polys+(_check_index(28, 29, OOC_UINT8, 16300))*4) = 1073741907;
  return;
  ;
}

/* --- */
