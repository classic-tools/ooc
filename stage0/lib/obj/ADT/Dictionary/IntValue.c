#include <ADT/Dictionary/IntValue.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Dictionary_IntValue__Init(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4081))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4102))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4123))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4147)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4168))+4) = 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4443))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4487))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4550))+16);
  i3 = _check_pointer(i3, 4557);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4557))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4586))+16);
  i3 = _check_pointer(i3, 4593);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4593))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4622))+16);
  i3 = _check_pointer(i3, 4629);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4629))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4665))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_CHAR8 ADT_Dictionary_IntValue__IsSet(Object__Object key) {
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

static OOC_INT32 ADT_Dictionary_IntValue__Lookup(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Dictionary_IntValue__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6101))+16);
  t = (ADT_Dictionary_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6138))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6211);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6211))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6232);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6232))*12))+4);
  i6 = i6==i7;
  
  goto l5;
l3:
  i6=OOC_TRUE;
l5:
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6280);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6280))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6335);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6335))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6369);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6369))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6358)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6571))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6664);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6664))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 6801);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6801))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 6905);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 6905))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 6939);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6939))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6928)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7026))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7107))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary_IntValue__Insert(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  i1 = hash;
  i2 = (OOC_INT32)dict;
  i3 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i0, i1);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7502))+16);
  i4 = _check_pointer(i4, 7509);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7509))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7669))+16);
  i4 = _check_pointer(i4, 7676);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7676))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 7714));
  *(OOC_INT32*)(_check_pointer(i2, 7714)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7743))+16);
  i4 = _check_pointer(i4, 7750);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7750))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7777))+16);
  i0 = _check_pointer(i0, 7784);
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 7784))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7813))+16);
  i0 = _check_pointer(i0, 7820);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i4 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7820))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 7856))+4);
  *(OOC_INT32*)((_check_pointer(i2, 7856))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7561))+16);
  i0 = _check_pointer(i0, 7568);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7568))*12))+8) = i2;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8260))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8288))+16);
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8441))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_IntValue__Table)i5;
  i6 = i4-1;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8580);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8580))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8611);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8611))*12))+8) = 0;
  i8 = _check_pointer(i5, 8642);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8642))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8674))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8701))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 8728))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 8757)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8778))+4) = 0;
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 8851);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8851))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 8896);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i2, 8914);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 8933);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8896))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 8933))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 8914))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 8962);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8962))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9023);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9023))*12))+8) = 0;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary_IntValue__DictionaryDesc_HasKey(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9317))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9399)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i1);
  i1 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9438))+16);
  i0 = _check_pointer(i0, 9445);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9445))*12))+4);
  i0 = ADT_Dictionary_IntValue__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9103); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Size(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9607))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Get(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 9965);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10001))+4);
  _assert((i2!=0), 127, 9989);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10045)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10083))+16);
  i2 = _check_pointer(i2, 10090);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10090))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 10064);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10117))+16);
  i1 = _check_pointer(i1, 10124);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10124))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Set(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10537);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10569));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10585))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10624))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10669)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i3 = value;
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2, i3);
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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10891))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10933))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10975))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11009))+16);
  i4 = _check_pointer(i4, 11016);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11016))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11059))+16);
  i4 = _check_pointer(i4, 11066);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11080))+16);
  i6 = _check_pointer(i6, 11087);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11120))+16);
  i8 = _check_pointer(i8, 11127);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11066))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11127))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11087))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Delete(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11530);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11566))+4);
  _assert((i2!=0), 127, 11554);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11610)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11648))+16);
  i2 = _check_pointer(i2, 11655);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11655))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 11629);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11675))+16);
  i2 = _check_pointer(i2, 11682);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11682))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11755))+16);
  i2 = _check_pointer(i2, 11762);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11762))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 11792))+4);
  *(OOC_INT32*)((_check_pointer(i1, 11792))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Clear(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11954))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11998))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12061))+16);
  i3 = _check_pointer(i3, 12068);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12068))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12097))+16);
  i3 = _check_pointer(i3, 12104);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12104))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12133))+16);
  i3 = _check_pointer(i3, 12140);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12140))*12)) = 0;
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

Object__ObjectArrayPtr ADT_Dictionary_IntValue__DictionaryDesc_Keys(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12467))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12510))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12542))+16);
  i5 = _check_pointer(i5, 12549);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12549))*12))+4);
  i5 = ADT_Dictionary_IntValue__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12576);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12587))+16);
  i7 = _check_pointer(i7, 12594);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12594))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12576))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12659))+4);
  _assert((i2==i0), 127, 12643);
  return (Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Store(ADT_Dictionary_IntValue__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13347))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13331)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13368))+4);
  i2 = i2!=0;
  if (!i2) goto l18;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13409))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l18;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13443))+16);
  i4 = _check_pointer(i4, 13450);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13450))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l12;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13486))+16);
  i4 = _check_pointer(i4, 13493);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13493))*12))+4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13595)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13623)))), &_td_ADT_Storable__ObjectDesc, 13623)));
  goto l11;
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13546)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13675))+16);
  i4 = _check_pointer(i4, 13682);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13682))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13659)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i4);
l12:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l18:
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Load(ADT_Dictionary_IntValue__Dictionary dict, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary_IntValue__Init((ADT_Dictionary_IntValue__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13873)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 13888))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13909))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14087))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14074))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14120))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14141)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14173))+16);
  i4 = _check_pointer(i4, 14180);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14180))*12))+4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14221))+16);
  i4 = _check_pointer(i4, 14228);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14206)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14228))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14253))+16);
  i4 = _check_pointer(i4, 14260);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14277))+16);
  i6 = _check_pointer(i6, 14284);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14284))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14277))+16);
  i7 = _check_pointer(i7, 14284);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 14284))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14292)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14260))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14341))+8);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_IntValue_init(void) {

  ADT_Dictionary_IntValue__dummy = (ADT_Dictionary_IntValue__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14410))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14431))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14452))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14474))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14496))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14518))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14541))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14565))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14589))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14613))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14637))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 14663))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 14689))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 14716))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 14742))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 14769))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 14796))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 14824))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 14852))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 14880))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 14908))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 14936))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 14965))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 14995))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 15024))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 15054))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 15085))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 15115))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 15145))*4) = 1073741907;
  return;
  ;
}

/* --- */
