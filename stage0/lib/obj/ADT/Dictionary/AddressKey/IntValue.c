#include <ADT/Dictionary/AddressKey/IntValue.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Dictionary_AddressKey_IntValue__Init(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4095))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4116))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4137))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4161)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4182))+4) = 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4457))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4501))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4564))+16);
  i3 = _check_pointer(i3, 4571);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4571))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4600))+16);
  i3 = _check_pointer(i3, 4607);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4607))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4636))+16);
  i3 = _check_pointer(i3, 4643);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4643))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4679))+16) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6429))+16);
  t = (ADT_Dictionary_AddressKey_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6466))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6539);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6539))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6560);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6560))*12))+4);
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=OOC_TRUE;
l4:
  i8 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6608);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6608))*12))+4);
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6663);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i9, OOC_UINT32, 6663))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6691);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i9, OOC_UINT32, 6691))*12))+4);
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6893))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6986);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 6986))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7123);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7123))*12))+4);
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7227);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i9, OOC_UINT32, 7227))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7255);
  i9 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i9, OOC_UINT32, 7255))*12))+4);
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7342))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7423))+12);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7818))+16);
  i4 = _check_pointer(i4, 7825);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7825))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7985))+16);
  i4 = _check_pointer(i4, 7992);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7992))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 8030));
  *(OOC_INT32*)(_check_pointer(i2, 8030)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8059))+16);
  i4 = _check_pointer(i4, 8066);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8066))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8093))+16);
  i0 = _check_pointer(i0, 8100);
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 8100))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8129))+16);
  i0 = _check_pointer(i0, 8136);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i4 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 8136))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 8172))+4);
  *(OOC_INT32*)((_check_pointer(i2, 8172))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7877))+16);
  i0 = _check_pointer(i0, 7884);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7884))*12))+8) = i2;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8576))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8604))+16);
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8757))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_AddressKey_IntValue__Table)i5;
  i6 = i4-1;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8896);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8896))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8927);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8927))*12))+8) = 0;
  i8 = _check_pointer(i5, 8958);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8958))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8990))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 9017))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 9044))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9073)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9094))+4) = 0;
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9167);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9167))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9212);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i2, 9230);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 9249);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9212))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9249))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9230))*12));
  ADT_Dictionary_AddressKey_IntValue__Insert((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 9278);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9278))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9339);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9339))*12))+8) = 0;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9633))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i1);
  i1 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9753))+16);
  i0 = _check_pointer(i0, 9760);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9760))*12))+4);
  i0 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9419); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Size(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9922))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10280);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10316))+4);
  _assert((i2!=0), 127, 10304);
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10397))+16);
  i2 = _check_pointer(i2, 10404);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10404))*12))+4);
  i2 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 10378);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10431))+16);
  i1 = _check_pointer(i1, 10438);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10438))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10851);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10883));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10899))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10938))+4);
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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11204))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11246))+4);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11288))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11322))+16);
  i4 = _check_pointer(i4, 11329);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11329))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11372))+16);
  i4 = _check_pointer(i4, 11379);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11393))+16);
  i6 = _check_pointer(i6, 11400);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11433))+16);
  i8 = _check_pointer(i8, 11440);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11379))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11440))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11400))*12));
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
  _assert((i0!=(OOC_INT32)0), 127, 11843);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11879))+4);
  _assert((i2!=0), 127, 11867);
  i2 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i0);
  i0 = ADT_Dictionary_AddressKey_IntValue__Lookup((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11960))+16);
  i2 = _check_pointer(i2, 11967);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11967))*12))+4);
  i2 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 11941);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11987))+16);
  i2 = _check_pointer(i2, 11994);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)ADT_Dictionary_AddressKey_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11994))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12067))+16);
  i2 = _check_pointer(i2, 12074);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12074))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12104))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12104))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Clear(ADT_Dictionary_AddressKey_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12266))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12310))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12373))+16);
  i3 = _check_pointer(i3, 12380);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12380))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12409))+16);
  i3 = _check_pointer(i3, 12416);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12416))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12445))+16);
  i3 = _check_pointer(i3, 12452);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12452))*12)) = 0;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12779))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12822))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12854))+16);
  i5 = _check_pointer(i5, 12861);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12861))*12))+4);
  i5 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12888);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12899))+16);
  i7 = _check_pointer(i7, 12906);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12906))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12888))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12971))+4);
  _assert((i2==i0), 127, 12955);
  return (Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Store(ADT_Dictionary_AddressKey_IntValue__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13675))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13659)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13696))+4);
  i2 = i2!=0;
  if (!i2) goto l18;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13737))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l18;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13771))+16);
  i4 = _check_pointer(i4, 13778);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13778))*12))+4);
  i4 = ADT_Dictionary_AddressKey_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l12;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13814))+16);
  i4 = _check_pointer(i4, 13821);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13821))*12))+4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13923)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13951)))), &_td_ADT_Storable__ObjectDesc, 13951)));
  goto l11;
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13874)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14003))+16);
  i4 = _check_pointer(i4, 14010);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14010))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13987)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14217)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 14232))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14253))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14431))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14418))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14464))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14485)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14517))+16);
  i4 = _check_pointer(i4, 14524);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14524))*12))+4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14565))+16);
  i4 = _check_pointer(i4, 14572);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14550)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14572))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14597))+16);
  i4 = _check_pointer(i4, 14604);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14631))+16);
  i6 = _check_pointer(i6, 14638);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14638))*12))+4);
  i6 = ADT_Dictionary_AddressKey_IntValue__HashCode((Object__Object)i6);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14604))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14684))+8);
  ADT_Dictionary_AddressKey_IntValue__Resize((ADT_Dictionary_AddressKey_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_AddressKey_IntValue_init(void) {

  ADT_Dictionary_AddressKey_IntValue__dummy = (ADT_Dictionary_AddressKey_IntValue__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_AddressKey_IntValue__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14753))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14774))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14795))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14817))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14839))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14861))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14884))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14908))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14932))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14956))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14980))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 15006))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 15032))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 15059))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 15085))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 15112))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 15139))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 15167))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 15195))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 15223))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 15251))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 15279))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 15308))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 15338))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 15367))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 15397))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 15428))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 15458))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_AddressKey_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 15488))*4) = 1073741907;
  return;
  ;
}

/* --- */
