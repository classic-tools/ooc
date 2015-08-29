#include "ADT/Dictionary/AddressKey/IntValue.d"
#include "__oo2c.h"

void ADT_Dictionary_AddressKey_IntValue__Init(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4091))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4112))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4133))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4157)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4178))+4) = 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4453))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4497))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4560))+16);
  i3 = _check_pointer(i3, 4567);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4567))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4596))+16);
  i3 = _check_pointer(i3, 4603);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4603))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4632))+16);
  i3 = _check_pointer(i3, 4639);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4639))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4675))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_INT32 ADT_Dictionary_AddressKey_IntValue__HashCode(Object__Object obj) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)obj;
  return (_type_cast_fast(OOC_INT32, OOC_PTR, i0));
  ;
}

static OOC_CHAR8 ADT_Dictionary_AddressKey_IntValue__IsSet(Object__Object key) {
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

static OOC_INT32 ADT_Dictionary_AddressKey_IntValue__Lookup(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary_AddressKey_IntValue__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6425))+16);
  t = (ADT_Dictionary_AddressKey_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6462))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6535);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6535))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6556);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6556))*12))+4);
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=OOC_TRUE;
l4:
  i8 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6604);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6604))*12))+4);
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6659);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i9, OOC_UINT32, 6659))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6687);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6687))*12))+4);
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6889))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6982);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 6982))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7119);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7119))*12))+4);
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7223);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i9, OOC_UINT32, 7223))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7251);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7251))*12))+4);
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7338))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7419))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary_AddressKey_IntValue__Insert(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  i1 = hash;
  i2 = (OOC_INT32)dict;
  i3 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (Object__Object)i0, i1);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7814))+16);
  i4 = _check_pointer(i4, 7821);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7821))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7981))+16);
  i4 = _check_pointer(i4, 7988);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7988))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 8026));
  *(OOC_INT32*)(_check_pointer(i2, 8026)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8055))+16);
  i4 = _check_pointer(i4, 8062);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8062))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8089))+16);
  i0 = _check_pointer(i0, 8096);
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 8096))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8125))+16);
  i0 = _check_pointer(i0, 8132);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i4 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 8132))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 8168))+4);
  *(OOC_INT32*)((_check_pointer(i2, 8168))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7873))+16);
  i0 = _check_pointer(i0, 7880);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7880))*12))+8) = i2;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8572))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8600))+16);
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8753))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Table.baseTypes[0], i4);
  i6 = i4-1;
  newTable = (ADT_Dictionary_AddressKey_IntValue__Table)i5;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8892);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8892))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8923);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8923))*12))+8) = 0;
  i8 = _check_pointer(i5, 8954);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8954))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8986))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 9013))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 9040))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9069)) = 0;
  i1 = i1-1;
  *(OOC_INT32*)((_check_pointer(i0, 9090))+4) = 0;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9163);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9163))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9208);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i2, 9226);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 9245);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9208))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9245))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9226))*12));
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 9274);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9274))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9335);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9335))*12))+8) = 0;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9629))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i1);
  i1 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9749))+16);
  i0 = _check_pointer(i0, 9756);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9756))*12))+4);
  i0 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9415); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Size(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9918))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10276);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10312))+4);
  _assert((i2!=0), 127, 10300);
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10393))+16);
  i2 = _check_pointer(i2, 10400);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10400))*12))+4);
  i2 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 10374);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10427))+16);
  i1 = _check_pointer(i1, 10434);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10434))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10847);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10879));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10895))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10934))+4);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (i2*2));
l4:
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i0);
  i3 = value;
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (Object__Object)i0, i2, i3);
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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11200))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11242))+4);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11284))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11318))+16);
  i4 = _check_pointer(i4, 11325);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11325))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11368))+16);
  i4 = _check_pointer(i4, 11375);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11389))+16);
  i6 = _check_pointer(i6, 11396);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11429))+16);
  i8 = _check_pointer(i8, 11436);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11375))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11436))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11396))*12));
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary_AddressKey_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Delete(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11839);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11875))+4);
  _assert((i2!=0), 127, 11863);
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11956))+16);
  i2 = _check_pointer(i2, 11963);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11963))*12))+4);
  i2 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 11937);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11983))+16);
  i2 = _check_pointer(i2, 11990);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11990))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12063))+16);
  i2 = _check_pointer(i2, 12070);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12070))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12100))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12100))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Clear(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12262))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12306))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12369))+16);
  i3 = _check_pointer(i3, 12376);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12376))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12405))+16);
  i3 = _check_pointer(i3, 12412);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12412))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12441))+16);
  i3 = _check_pointer(i3, 12448);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12448))*12)) = 0;
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

Object__ObjectArrayPtr ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Keys(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12775))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12818))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12850))+16);
  i5 = _check_pointer(i5, 12857);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12857))*12))+4);
  i5 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12884);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12895))+16);
  i7 = _check_pointer(i7, 12902);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12902))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12884))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12967))+4);
  _assert((i2==i0), 127, 12951);
  return (Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Store(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13655))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13639)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13676))+4);
  i2 = i2!=0;
  if (!i2) goto l18;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13717))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l18;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13751))+16);
  i4 = _check_pointer(i4, 13758);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13758))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l12;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13794))+16);
  i4 = _check_pointer(i4, 13801);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13801))*12))+4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13903)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13931)))), &_td_ADT_Storable__ObjectDesc, 13931)));
  goto l11;
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13854)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13983))+16);
  i4 = _check_pointer(i4, 13990);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13990))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13967)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i4);
l12:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l18:
  return;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Load(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary_AddressKey_IntValue__Init((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14181)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 14196))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14217))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14395))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14382))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14428))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14449)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14481))+16);
  i4 = _check_pointer(i4, 14488);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14488))*12))+4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14529))+16);
  i4 = _check_pointer(i4, 14536);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14514)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14536))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14561))+16);
  i4 = _check_pointer(i4, 14568);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14595))+16);
  i6 = _check_pointer(i6, 14602);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14602))*12))+4);
  i6 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i6);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14568))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14648))+8);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_AddressKey_IntValue_init(void) {

  ADT_Dictionary_AddressKey_IntValue__dummy = (ADT_Dictionary_AddressKey_IntValue__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14717))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14738))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14759))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14781))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14803))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14825))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14848))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14872))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14896))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14920))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14944))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 14970))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 14996))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 15023))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 15049))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 15076))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 15103))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 15131))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 15159))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 15187))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 15215))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 15243))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 15272))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 15302))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 15331))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 15361))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 15392))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 15422))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 15452))*4) = 1073741907;
  return;
  ;
}

/* --- */
