#include "ADT/Dictionary.d"
#include "__oo2c.h"

void ADT_Dictionary__Init(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4337))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4358))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4379))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4403)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4424))+4) = 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4699))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4743))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4806))+16);
  i3 = _check_pointer(i3, 4813);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4813))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4842))+16);
  i3 = _check_pointer(i3, 4849);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4849))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4880))+16);
  i3 = _check_pointer(i3, 4887);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4887))*12)) = 0;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4923))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_CHAR8 ADT_Dictionary__IsSet(ADT_Object__Object key) {
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

static OOC_INT32 ADT_Dictionary__Lookup(ADT_Dictionary__Dictionary dict, ADT_Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Dictionary__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6359))+16);
  t = (ADT_Dictionary__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6396))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6469);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6469))*12))+4);
  i6 = i6==(OOC_INT32)0;
  i7 = (OOC_INT32)key;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6490);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6490))*12))+4);
  i6 = i6==i7;
  
  goto l5;
l3:
  i6=OOC_TRUE;
l5:
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6538);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6538))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6593);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6593))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=OOC_FALSE;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6627);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6627))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6616)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i7, (ADT_Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6829))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6922);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6922))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7059);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 7059))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7163);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 7163))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7197);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 7197))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7186)))), ADT_Object__ObjectDesc_Equals)),ADT_Object__ObjectDesc_Equals)((ADT_Object__Object)i7, (ADT_Object__Object)i6);
  
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7284))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7365))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary__Insert(ADT_Dictionary__Dictionary dict, ADT_Object__Object key, OOC_INT32 hash, ADT_Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  i1 = hash;
  i2 = (OOC_INT32)dict;
  i3 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0, i1);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7760))+16);
  i4 = _check_pointer(i4, 7767);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7767))*12))+4);
  i4 = ADT_Dictionary__IsSet((ADT_Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7927))+16);
  i4 = _check_pointer(i4, 7934);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7934))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i2, 7972));
  *(OOC_INT32*)(_check_pointer(i2, 7972)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8001))+16);
  i4 = _check_pointer(i4, 8008);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8008))*12))+4) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8035))+16);
  i0 = _check_pointer(i0, 8042);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+((_check_index(i3, i4, OOC_UINT32, 8042))*12)) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8071))+16);
  i0 = _check_pointer(i0, 8078);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = (OOC_INT32)value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 8078))*12))+8) = i4;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 8114))+4);
  *(OOC_INT32*)((_check_pointer(i2, 8114))+4) = (i0+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7819))+16);
  i0 = _check_pointer(i0, 7826);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7826))*12))+8) = i2;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8518))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8546))+16);
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(i3, 29, OOC_UINT32, 8699))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary__Table)i5;
  i6 = i4-1;
  i7 = 0<=i6;
  i = 0;
  if (!i7) goto l17;
  i7=0;
l12_loop:
  i8 = _check_pointer(i5, 8838);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8838))*12))+4) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8869);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)((i8+((_check_index(i7, i9, OOC_UINT32, 8869))*12))+8) = (OOC_INT32)0;
  i8 = _check_pointer(i5, 8902);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  *(OOC_INT32*)(i8+((_check_index(i7, i9, OOC_UINT32, 8902))*12)) = 0;
  i7 = i7+1;
  i8 = i7<=i6;
  i = i7;
  if (i8) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8934))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8961))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 8988))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9017)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9038))+4) = 0;
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9111);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9111))*12))+4);
  i4 = ADT_Dictionary__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9156);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 9174);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 9193);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9156))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9193))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9174))*12));
  ADT_Dictionary__Insert((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i4, i6, (ADT_Object__Object)i5);
  i4 = _check_pointer(i2, 9222);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9222))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9283);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9283))*12))+8) = (OOC_INT32)0;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary__DictionaryDesc_HasKey(ADT_Dictionary__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9579))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9661)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i1);
  i1 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9700))+16);
  i0 = _check_pointer(i0, 9707);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9707))*12))+4);
  i0 = ADT_Dictionary__IsSet((ADT_Object__Object)i0);
  return i0;
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(9365); return 0;
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_Size(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9869))+4);
  return i0;
  ;
}

ADT_Object__Object ADT_Dictionary__DictionaryDesc_Get(ADT_Dictionary__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10227);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10263))+4);
  _assert((i2!=0), 127, 10251);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10307)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i0);
  i0 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10345))+16);
  i2 = _check_pointer(i2, 10352);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10352))*12))+4);
  i2 = ADT_Dictionary__IsSet((ADT_Object__Object)i2);
  _assert(i2, 127, 10326);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10379))+16);
  i1 = _check_pointer(i1, 10386);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10386))*12))+8);
  return (ADT_Object__Object)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Set(ADT_Dictionary__Dictionary dict, ADT_Object__Object key, ADT_Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10799);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10831));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10847))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10886))+4);
  ADT_Dictionary__Resize((ADT_Dictionary__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10931)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i0);
  i3 = (OOC_INT32)value;
  ADT_Dictionary__Insert((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0, i2, (ADT_Object__Object)i3);
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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11218))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11260))+4);
  ADT_Dictionary__Resize((ADT_Dictionary__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11302))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11336))+16);
  i4 = _check_pointer(i4, 11343);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11343))*12))+4);
  i4 = ADT_Dictionary__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11386))+16);
  i4 = _check_pointer(i4, 11393);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11407))+16);
  i6 = _check_pointer(i6, 11414);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11447))+16);
  i8 = _check_pointer(i8, 11454);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11393))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11454))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11414))*12));
  ADT_Dictionary__Insert((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i4, i6, (ADT_Object__Object)i5);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Delete(ADT_Dictionary__Dictionary dict, ADT_Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11857);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11893))+4);
  _assert((i2!=0), 127, 11881);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11937)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i0);
  i0 = ADT_Dictionary__Lookup((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11975))+16);
  i2 = _check_pointer(i2, 11982);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11982))*12))+4);
  i2 = ADT_Dictionary__IsSet((ADT_Object__Object)i2);
  _assert(i2, 127, 11956);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12002))+16);
  i2 = _check_pointer(i2, 12009);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12009))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12082))+16);
  i2 = _check_pointer(i2, 12089);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12089))*12))+8) = (OOC_INT32)0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12121))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12121))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Clear(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12283))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12327))+8);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12390))+16);
  i3 = _check_pointer(i3, 12397);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12397))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12426))+16);
  i3 = _check_pointer(i3, 12433);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12433))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12464))+16);
  i3 = _check_pointer(i3, 12471);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12471))*12)) = 0;
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

ADT_Object__ObjectArrayPtr ADT_Dictionary__DictionaryDesc_Keys(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12798))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (ADT_Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12841))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12873))+16);
  i5 = _check_pointer(i5, 12880);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12880))*12))+4);
  i5 = ADT_Dictionary__IsSet((ADT_Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12907);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12918))+16);
  i7 = _check_pointer(i7, 12925);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12925))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12907))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12990))+4);
  _assert((i2==i0), 127, 12974);
  return (ADT_Object__ObjectArrayPtr)i1;
  ;
}

ADT_Object__ObjectArrayPtr ADT_Dictionary__DictionaryDesc_Values(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13294))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_ADT_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (ADT_Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13337))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13369))+16);
  i5 = _check_pointer(i5, 13376);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 13376))*12))+4);
  i5 = ADT_Dictionary__IsSet((ADT_Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 13403);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13414))+16);
  i7 = _check_pointer(i7, 13421);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 13421))*12))+8);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13403))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13488))+4);
  _assert((i2==i0), 127, 13472);
  return (ADT_Object__ObjectArrayPtr)i1;
  ;
}

OOC_CHAR8 ADT_Dictionary__DictionaryDesc_Equals(ADT_Dictionary__Dictionary dict, ADT_Object__Object obj) {

  _assert(OOC_FALSE, 127, 13635);
  _failed_function(13558); return 0;
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_HashCode(ADT_Dictionary__Dictionary dict) {

  _assert(OOC_FALSE, 127, 13761);
  _failed_function(13700); return 0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Store(ADT_Dictionary__Dictionary dict, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13906))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13890)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13927))+4);
  i2 = i2!=0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13968))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14002))+16);
  i4 = _check_pointer(i4, 14009);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14009))*12))+4);
  i4 = ADT_Dictionary__IsSet((ADT_Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14054))+16);
  i4 = _check_pointer(i4, 14061);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14061))*12))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14035)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14102))+16);
  i4 = _check_pointer(i4, 14109);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14109))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14083)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i4);
l8:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l14:
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Load(ADT_Dictionary__Dictionary dict, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary__Init((ADT_Dictionary__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14272)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 14287))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14308))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14486))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14473))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14519))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14558))+16);
  i4 = _check_pointer(i4, 14565);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14540)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14565))*12))+4));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14603))+16);
  i4 = _check_pointer(i4, 14610);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14585)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14610))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14635))+16);
  i4 = _check_pointer(i4, 14642);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14659))+16);
  i6 = _check_pointer(i6, 14666);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14666))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14659))+16);
  i7 = _check_pointer(i7, 14666);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 14666))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14674)))), ADT_Object__ObjectDesc_HashCode)),ADT_Object__ObjectDesc_HashCode)((ADT_Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14642))*12)) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14723))+8);
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
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dummy.baseTypes[0]);
  ADT_Dictionary__dummy = (ADT_Dictionary__Dummy)i0;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(0, 29, OOC_UINT8, 14865))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(1, 29, OOC_UINT8, 14886))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(2, 29, OOC_UINT8, 14907))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(3, 29, OOC_UINT8, 14929))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(4, 29, OOC_UINT8, 14951))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(5, 29, OOC_UINT8, 14973))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(6, 29, OOC_UINT8, 14996))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(7, 29, OOC_UINT8, 15020))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(8, 29, OOC_UINT8, 15044))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(9, 29, OOC_UINT8, 15068))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(10, 29, OOC_UINT8, 15092))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(11, 29, OOC_UINT8, 15118))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(12, 29, OOC_UINT8, 15144))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(13, 29, OOC_UINT8, 15171))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(14, 29, OOC_UINT8, 15197))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(15, 29, OOC_UINT8, 15224))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(16, 29, OOC_UINT8, 15251))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(17, 29, OOC_UINT8, 15279))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(18, 29, OOC_UINT8, 15307))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(19, 29, OOC_UINT8, 15335))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(20, 29, OOC_UINT8, 15363))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(21, 29, OOC_UINT8, 15391))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(22, 29, OOC_UINT8, 15420))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(23, 29, OOC_UINT8, 15450))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(24, 29, OOC_UINT8, 15479))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(25, 29, OOC_UINT8, 15509))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(26, 29, OOC_UINT8, 15540))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(27, 29, OOC_UINT8, 15570))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(28, 29, OOC_UINT8, 15600))*4) = 1073741907;
  return;
  ;
}

/* --- */
