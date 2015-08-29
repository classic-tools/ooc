#include "ADT/Dictionary.d"
#include "__oo2c.h"

void ADT_Dictionary__Init(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4351))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4372))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4393))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4417)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4438))+4) = 0;
  return;
  ;
}

ADT_Dictionary__Dictionary ADT_Dictionary__New() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__Init((ADT_Dictionary__Dictionary)i0);
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Destroy(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4713))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4757))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4820))+16);
  i3 = _check_pointer(i3, 4827);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4827))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4856))+16);
  i3 = _check_pointer(i3, 4863);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4863))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4894))+16);
  i3 = _check_pointer(i3, 4901);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4901))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4937))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_CHAR8 ADT_Dictionary__IsSet(Object__Object key) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)key;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)ADT_Dictionary__dummy;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

static OOC_INT32 ADT_Dictionary__Lookup(ADT_Dictionary__Dictionary dict, Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Dictionary__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6373))+16);
  t = (ADT_Dictionary__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6410))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6483);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6483))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6504);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6504))*12))+4);
  i6 = i6==i7;
  
  goto l5;
l3:
  i6=OOC_TRUE;
l5:
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6552);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6552))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6607);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6607))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6641);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6641))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6630)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6843))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6936);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6936))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7073);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 7073))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7177);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 7177))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7211);
  i8 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 7211))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7200)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7298))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7379))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary__Insert(ADT_Dictionary__Dictionary dict, Object__Object key, OOC_INT32 hash, Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  i1 = hash;
  i2 = (OOC_INT32)dict;
  i3 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, i1);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7774))+16);
  i4 = _check_pointer(i4, 7781);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7781))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7941))+16);
  i4 = _check_pointer(i4, 7948);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7948))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 7986));
  *(OOC_INT32*)(_check_pointer(i2, 7986)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8015))+16);
  i4 = _check_pointer(i4, 8022);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8022))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8049))+16);
  i0 = _check_pointer(i0, 8056);
  i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 8056))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8085))+16);
  i0 = _check_pointer(i0, 8092);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i4 = (OOC_INT32)value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 8092))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 8128))+4);
  *(OOC_INT32*)((_check_pointer(i2, 8128))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7833))+16);
  i0 = _check_pointer(i0, 7840);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = (OOC_INT32)value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7840))*12))+8) = i2;
l7:
  return;
  ;
}

static void ADT_Dictionary__Resize(ADT_Dictionary__Dictionary dict, OOC_INT32 minUsed) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 oldSize;
  ADT_Dictionary__Table oldTable;
  OOC_INT32 i;
  OOC_INT32 newSize;
  OOC_INT32 newPoly;
  ADT_Dictionary__Table newTable;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8532))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8560))+16);
  oldTable = (ADT_Dictionary__Table)i2;
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(i3, 29, OOC_UINT32, 8713))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Table.baseTypes[0], i4);
  i6 = i4-1;
  newTable = (ADT_Dictionary__Table)i5;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8852);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8852))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8883);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8883))*12))+8) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8916);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8916))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8948))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8975))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 9002))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9031)) = 0;
  i1 = i1-1;
  *(OOC_INT32*)((_check_pointer(i0, 9052))+4) = 0;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9125);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9125))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9170);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = _check_pointer(i2, 9188);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = _check_pointer(i2, 9207);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9170))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9207))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9188))*12));
  ADT_Dictionary__Insert((ADT_Dictionary__Dictionary)i0, (Object__Object)i4, i6, (Object__Object)i5);
  i4 = _check_pointer(i2, 9236);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9236))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9297);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9297))*12))+8) = (OOC_INT32)0;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary__DictionaryDesc_HasKey(ADT_Dictionary__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9593))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9675)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i1);
  i1 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9714))+16);
  i0 = _check_pointer(i0, 9721);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9721))*12))+4);
  i0 = ADT_Dictionary__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9379); return 0;
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_Size(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9883))+4);
  return i0;
  ;
}

Object__Object ADT_Dictionary__DictionaryDesc_Get(ADT_Dictionary__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10241);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10277))+4);
  _assert((i2!=0), 127, 10265);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10321)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10359))+16);
  i2 = _check_pointer(i2, 10366);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10366))*12))+4);
  i2 = ADT_Dictionary__IsSet((Object__Object)i2);
  _assert(i2, 127, 10340);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10393))+16);
  i1 = _check_pointer(i1, 10400);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10400))*12))+8);
  return (Object__Object)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Set(ADT_Dictionary__Dictionary dict, Object__Object key, Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10813);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10845));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10861))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10900))+4);
  ADT_Dictionary__Resize((ADT_Dictionary__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10945)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i3 = (OOC_INT32)value;
  ADT_Dictionary__Insert((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, i2, (Object__Object)i3);
  return;
  ;
}

ADT_Dictionary__Dictionary ADT_Dictionary__DictionaryDesc_Copy(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary__Dictionary copy;
  OOC_INT32 i;

  i0 = (OOC_INT32)ADT_Dictionary__New();
  copy = (ADT_Dictionary__Dictionary)i0;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11232))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11274))+4);
  ADT_Dictionary__Resize((ADT_Dictionary__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11316))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11350))+16);
  i4 = _check_pointer(i4, 11357);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11357))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11400))+16);
  i4 = _check_pointer(i4, 11407);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11421))+16);
  i6 = _check_pointer(i6, 11428);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11461))+16);
  i8 = _check_pointer(i8, 11468);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11407))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11468))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11428))*12));
  ADT_Dictionary__Insert((ADT_Dictionary__Dictionary)i0, (Object__Object)i4, i6, (Object__Object)i5);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Delete(ADT_Dictionary__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11871);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11907))+4);
  _assert((i2!=0), 127, 11895);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11951)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11989))+16);
  i2 = _check_pointer(i2, 11996);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11996))*12))+4);
  i2 = ADT_Dictionary__IsSet((Object__Object)i2);
  _assert(i2, 127, 11970);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12016))+16);
  i2 = _check_pointer(i2, 12023);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)ADT_Dictionary__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12023))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12096))+16);
  i2 = _check_pointer(i2, 12103);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12103))*12))+8) = (OOC_INT32)0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12135))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12135))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Clear(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12297))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12341))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12404))+16);
  i3 = _check_pointer(i3, 12411);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12411))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12440))+16);
  i3 = _check_pointer(i3, 12447);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12447))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12478))+16);
  i3 = _check_pointer(i3, 12485);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12485))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  ADT_Dictionary__Init((ADT_Dictionary__Dictionary)i0);
l11:
  return;
  ;
}

Object__ObjectArrayPtr ADT_Dictionary__DictionaryDesc_Keys(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12812))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12855))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12887))+16);
  i5 = _check_pointer(i5, 12894);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12894))*12))+4);
  i5 = ADT_Dictionary__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12921);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12932))+16);
  i7 = _check_pointer(i7, 12939);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12939))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12921))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13004))+4);
  _assert((i2==i0), 127, 12988);
  return (Object__ObjectArrayPtr)i1;
  ;
}

Object__ObjectArrayPtr ADT_Dictionary__DictionaryDesc_Values(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13308))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13351))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13383))+16);
  i5 = _check_pointer(i5, 13390);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 13390))*12))+4);
  i5 = ADT_Dictionary__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 13417);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13428))+16);
  i7 = _check_pointer(i7, 13435);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 13435))*12))+8);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13417))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13502))+4);
  _assert((i2==i0), 127, 13486);
  return (Object__ObjectArrayPtr)i1;
  ;
}

OOC_CHAR8 ADT_Dictionary__DictionaryDesc_Equals(ADT_Dictionary__Dictionary dict, Object__Object obj) {

  _assert(OOC_FALSE, 127, 13649);
  _failed_function(13572); return 0;
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_HashCode(ADT_Dictionary__Dictionary dict) {

  _assert(OOC_FALSE, 127, 13775);
  _failed_function(13714); return 0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Store(ADT_Dictionary__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13946))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13930)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13967))+4);
  i2 = i2!=0;
  if (!i2) goto l22;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14008))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l22;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14042))+16);
  i4 = _check_pointer(i4, 14049);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14049))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (!i4) goto l16;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14085))+16);
  i4 = _check_pointer(i4, 14092);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14092))*12))+4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14194)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14222)))), &_td_ADT_Storable__ObjectDesc, 14222)));
  goto l11;
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14145)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14268))+16);
  i4 = _check_pointer(i4, 14275);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14275))*12))+8);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14379)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14407)))), &_td_ADT_Storable__ObjectDesc, 14407)));
  goto l16;
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14330)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l16:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l22:
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Load(ADT_Dictionary__Dictionary dict, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary__Init((ADT_Dictionary__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14611)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 14626))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14647))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14825))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14812))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14858))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14879)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14911))+16);
  i4 = _check_pointer(i4, 14918);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14918))*12))+4) = i6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14944)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14976))+16);
  i4 = _check_pointer(i4, 14983);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14983))*12))+8) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15014))+16);
  i4 = _check_pointer(i4, 15021);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15038))+16);
  i6 = _check_pointer(i6, 15045);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 15045))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15038))+16);
  i7 = _check_pointer(i7, 15045);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 15045))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15053)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 15021))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 15102))+8);
  ADT_Dictionary__Resize((ADT_Dictionary__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void ADT_Dictionary__DummyDesc_Destroy(ADT_Dictionary__Dummy dummy) {

  return;
  ;
}

void OOC_ADT_Dictionary_init(void) {

  ADT_Dictionary__dummy = (ADT_Dictionary__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(0, 29, OOC_UINT8, 15223))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(1, 29, OOC_UINT8, 15244))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(2, 29, OOC_UINT8, 15265))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(3, 29, OOC_UINT8, 15287))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(4, 29, OOC_UINT8, 15309))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(5, 29, OOC_UINT8, 15331))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(6, 29, OOC_UINT8, 15354))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(7, 29, OOC_UINT8, 15378))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(8, 29, OOC_UINT8, 15402))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(9, 29, OOC_UINT8, 15426))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(10, 29, OOC_UINT8, 15450))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(11, 29, OOC_UINT8, 15476))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(12, 29, OOC_UINT8, 15502))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(13, 29, OOC_UINT8, 15529))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(14, 29, OOC_UINT8, 15555))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(15, 29, OOC_UINT8, 15582))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(16, 29, OOC_UINT8, 15609))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(17, 29, OOC_UINT8, 15637))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(18, 29, OOC_UINT8, 15665))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(19, 29, OOC_UINT8, 15693))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(20, 29, OOC_UINT8, 15721))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(21, 29, OOC_UINT8, 15749))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(22, 29, OOC_UINT8, 15778))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(23, 29, OOC_UINT8, 15808))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(24, 29, OOC_UINT8, 15837))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(25, 29, OOC_UINT8, 15867))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(26, 29, OOC_UINT8, 15898))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(27, 29, OOC_UINT8, 15928))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(28, 29, OOC_UINT8, 15958))*4) = 1073741907;
  return;
  ;
}

/* --- */
