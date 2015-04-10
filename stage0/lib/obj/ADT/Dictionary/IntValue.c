#include "ADT/Dictionary/IntValue.d"
#include "__oo2c.h"

void ADT_Dictionary_IntValue__Init(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4067))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4088))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4109))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4133)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4154))+4) = 0;
  return;
  ;
}

ADT_Dictionary_IntValue__Dictionary ADT_Dictionary_IntValue__New() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Dictionary.baseTypes[0]);
  ADT_Dictionary_IntValue__Init((ADT_Dictionary_IntValue__Dictionary)i0);
  return (ADT_Dictionary_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Destroy(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4429))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4473))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4536))+16);
  i3 = _check_pointer(i3, 4543);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4543))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4572))+16);
  i3 = _check_pointer(i3, 4579);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4579))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4608))+16);
  i3 = _check_pointer(i3, 4615);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4615))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4651))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_CHAR8 ADT_Dictionary_IntValue__IsSet(ADT_Object__Object key) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)key;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

static OOC_INT32 ADT_Dictionary_IntValue__Lookup(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Dictionary_IntValue__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6087))+16);
  t = (ADT_Dictionary_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6124))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6197);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6197))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6218);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6218))*12))+4);
  i6 = i6==i7;
  
  goto l5;
l3:
  i6=OOC_TRUE;
l5:
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6266);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6266))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6321);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6321))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6355);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6355))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6344)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i7, (ADT_Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6557))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6650);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6650))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 6787);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6787))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 6891);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 6891))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 6925);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6925))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6914)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i7, (ADT_Object__Object)i6);
  
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
  i8 = i6>=0;
  if (i8) goto l45;
  return i4;
  goto l47;
l45:
  return i6;
l47:
  i5 = i5*2;
  incr = i5;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7012))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7093))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary_IntValue__Insert(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Object key, OOC_INT32 hash, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  i1 = hash;
  i2 = (OOC_INT32)dict;
  i3 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i2, (ADT_Object__Object)i0, i1);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7488))+16);
  i4 = _check_pointer(i4, 7495);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7495))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7655))+16);
  i4 = _check_pointer(i4, 7662);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7662))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 7700));
  *(OOC_INT32*)(_check_pointer(i2, 7700)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7729))+16);
  i4 = _check_pointer(i4, 7736);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7736))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7763))+16);
  i0 = _check_pointer(i0, 7770);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 7770))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7799))+16);
  i0 = _check_pointer(i0, 7806);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7806))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 7842))+4);
  *(OOC_INT32*)((_check_pointer(i2, 7842))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7547))+16);
  i0 = _check_pointer(i0, 7554);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7554))*12))+8) = i2;
l7:
  return;
  ;
}

static void ADT_Dictionary_IntValue__Resize(ADT_Dictionary_IntValue__Dictionary dict, OOC_INT32 minUsed) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 oldSize;
  ADT_Dictionary_IntValue__Table oldTable;
  OOC_INT32 i;
  OOC_INT32 newSize;
  OOC_INT32 newPoly;
  ADT_Dictionary_IntValue__Table newTable;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8246))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8274))+16);
  oldTable = (ADT_Dictionary_IntValue__Table)i2;
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8427))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_IntValue__Table)i5;
  i6 = i4-1;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8566);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8566))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8597);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8597))*12))+8) = 0;
  i8 = _check_pointer(i5, 8628);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8628))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8660))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8687))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 8714))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 8743)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8764))+4) = 0;
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 8837);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8837))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 8882);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 8900);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 8919);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8882))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 8919))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 8900))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (ADT_Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 8948);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8948))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9009);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9009))*12))+8) = 0;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary_IntValue__DictionaryDesc_HasKey(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9303))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9385)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i1);
  i1 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i0, (ADT_Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9424))+16);
  i0 = _check_pointer(i0, 9431);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9431))*12))+4);
  i0 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9089); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Size(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9593))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Get(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 9951);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9987))+4);
  _assert((i2!=0), 127, 9975);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10031)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (ADT_Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10069))+16);
  i2 = _check_pointer(i2, 10076);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10076))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i2);
  _assert(i2, 127, 10050);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10103))+16);
  i1 = _check_pointer(i1, 10110);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10110))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Set(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10523);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10555));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10571))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10610))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10655)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i0);
  i3 = value;
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i1, (ADT_Object__Object)i0, i2, i3);
  return;
  ;
}

ADT_Dictionary_IntValue__Dictionary ADT_Dictionary_IntValue__DictionaryDesc_Copy(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary_IntValue__Dictionary copy;
  OOC_INT32 i;

  i0 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  copy = (ADT_Dictionary_IntValue__Dictionary)i0;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10877))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10919))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10961))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10995))+16);
  i4 = _check_pointer(i4, 11002);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11002))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11045))+16);
  i4 = _check_pointer(i4, 11052);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11066))+16);
  i6 = _check_pointer(i6, 11073);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11106))+16);
  i8 = _check_pointer(i8, 11113);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11052))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11113))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11073))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (ADT_Object__Object)i4, i6, i5);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Delete(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11516);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11552))+4);
  _assert((i2!=0), 127, 11540);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11596)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (ADT_Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11634))+16);
  i2 = _check_pointer(i2, 11641);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11641))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i2);
  _assert(i2, 127, 11615);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11661))+16);
  i2 = _check_pointer(i2, 11668);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11668))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11741))+16);
  i2 = _check_pointer(i2, 11748);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11748))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 11778))+4);
  *(OOC_INT32*)((_check_pointer(i1, 11778))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Clear(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11940))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11984))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12047))+16);
  i3 = _check_pointer(i3, 12054);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12054))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12083))+16);
  i3 = _check_pointer(i3, 12090);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12090))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12119))+16);
  i3 = _check_pointer(i3, 12126);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12126))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  ADT_Dictionary_IntValue__Init((ADT_Dictionary_IntValue__Dictionary)i0);
l11:
  return;
  ;
}

ADT_Object__ObjectArrayPtr ADT_Dictionary_IntValue__DictionaryDesc_Keys(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12453))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (ADT_Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12496))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12528))+16);
  i5 = _check_pointer(i5, 12535);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12535))*12))+4);
  i5 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12562);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12573))+16);
  i7 = _check_pointer(i7, 12580);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12580))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12562))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12645))+4);
  _assert((i2==i0), 127, 12629);
  return (ADT_Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Store(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13307))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13291)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13328))+4);
  i2 = i2!=0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13369))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13403))+16);
  i4 = _check_pointer(i4, 13410);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13410))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13455))+16);
  i4 = _check_pointer(i4, 13462);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13462))*12))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13436)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13500))+16);
  i4 = _check_pointer(i4, 13507);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13507))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13484)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i4);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Load(ADT_Dictionary_IntValue__Dictionary dict, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary_IntValue__Init((ADT_Dictionary_IntValue__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13670)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 13685))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13706))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13884))+8);
  *(OOC_INT32*)((_check_pointer(i0, 13871))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13917))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13956))+16);
  i4 = _check_pointer(i4, 13963);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13938)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 13963))*12))+4));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13998))+16);
  i4 = _check_pointer(i4, 14005);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13983)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14005))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14030))+16);
  i4 = _check_pointer(i4, 14037);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14054))+16);
  i6 = _check_pointer(i6, 14061);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14061))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14054))+16);
  i7 = _check_pointer(i7, 14061);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 14061))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14069)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14037))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14118))+8);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_IntValue_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Dummy.baseTypes[0]);
  ADT_Dictionary_IntValue__dummy = (ADT_Dictionary_IntValue__Dummy)i0;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14208))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14229))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14250))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14272))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14294))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14316))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14339))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14363))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14387))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14411))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14435))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 14461))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 14487))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 14514))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 14540))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 14567))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 14594))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 14622))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 14650))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 14678))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 14706))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 14734))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 14763))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 14793))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 14822))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 14852))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 14883))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 14913))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 14943))*4) = 1073741907;
  return;
  ;
}

/* --- */
