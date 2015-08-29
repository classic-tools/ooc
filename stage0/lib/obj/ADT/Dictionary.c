#include <ADT/Dictionary.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Dictionary__DictionaryDesc_INIT(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  *(OOC_INT32*)((_check_pointer(i0, 4426))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4447))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4468))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4492)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4513))+4) = 0;
  return;
  ;
}

ADT_Dictionary__Dictionary ADT_Dictionary__New(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i0);
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Destroy(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4745))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4789))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4852))+16);
  i3 = _check_pointer(i3, 4859);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4859))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4888))+16);
  i3 = _check_pointer(i3, 4895);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4895))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4926))+16);
  i3 = _check_pointer(i3, 4933);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4933))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4969))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_CHAR8 ADT_Dictionary__IsSet(Object__Object key) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)key;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT32)ADT_Dictionary__dummy;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_Lookup(ADT_Dictionary__Dictionary dict, Object__Object key, OOC_INT32 hash) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_Dictionary__Table t;
  OOC_UINT32 mask;
  OOC_INT32 i;
  OOC_INT32 freeslot;
  OOC_INT32 incr;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6416))+16);
  t = (ADT_Dictionary__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6453))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6526);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6526))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6547);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6547))*12))+4);
  i7 = (OOC_INT32)key;
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=1u;
l4:
  i7 = (OOC_INT32)key;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6595);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6595))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6650);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6650))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=0u;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6684);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6684))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6673)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6886))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6979);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6979))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 7116);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 7116))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 7220);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 7220))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=0u;
  goto l34;
l32:
  i6 = _check_pointer(i1, 7254);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 7254))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7243)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7341))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7422))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

void ADT_Dictionary__DictionaryDesc_Insert(ADT_Dictionary__Dictionary dict, Object__Object key, OOC_INT32 hash, Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)key;
  i2 = hash;
  i3 = ADT_Dictionary__DictionaryDesc_Lookup((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, i2);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7798))+16);
  i4 = _check_pointer(i4, 7805);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7805))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7965))+16);
  i4 = _check_pointer(i4, 7972);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7972))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i0, 8010));
  *(OOC_INT32*)(_check_pointer(i0, 8010)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8039))+16);
  i4 = _check_pointer(i4, 8046);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8046))*12))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8073))+16);
  i1 = _check_pointer(i1, 8080);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+((_check_index(i3, i4, OOC_UINT32, 8080))*12)) = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8109))+16);
  i1 = _check_pointer(i1, 8116);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)value;
  *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 8116))*12))+8) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8152))+4);
  *(OOC_INT32*)((_check_pointer(i0, 8152))+4) = (i1+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7857))+16);
  i0 = _check_pointer(i0, 7864);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = (OOC_INT32)value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7864))*12))+8) = i2;
l7:
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Resize(ADT_Dictionary__Dictionary dict, OOC_INT32 minUsed) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 oldSize;
  ADT_Dictionary__Table oldTable;
  OOC_INT32 i;
  OOC_INT32 newSize;
  OOC_INT32 newPoly;
  ADT_Dictionary__Table newTable;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8569))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8597))+16);
  oldTable = (ADT_Dictionary__Table)i2;
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(i3, 29, OOC_UINT32, 8750))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary__Table)i5;
  i = 0;
  i6 = 0<i4;
  if (!i6) goto l17;
  i6=0;
l12_loop:
  i7 = _check_pointer(i5, 8889);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 8889))*12))+4) = (OOC_INT32)0;
  i7 = _check_pointer(i5, 8920);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 8920))*12))+8) = (OOC_INT32)0;
  i7 = _check_pointer(i5, 8953);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)(i7+((_check_index(i6, i8, OOC_UINT32, 8953))*12)) = 0;
  i6 = i6+1;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8985))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 9012))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 9039))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 9068)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9089))+4) = 0;
  i = 0;
  i3 = 0<i1;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 9162);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9162))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 9205);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 9223);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 9242);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9205))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 9242))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 9223))*12));
  ADT_Dictionary__DictionaryDesc_Insert((ADT_Dictionary__Dictionary)i0, (Object__Object)i4, i6, (Object__Object)i5);
  i4 = _check_pointer(i2, 9271);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9271))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9332);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9332))*12))+8) = (OOC_INT32)0;
l23:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary__DictionaryDesc_HasKey(ADT_Dictionary__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9632))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9712)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i1);
  i1 = ADT_Dictionary__DictionaryDesc_Lookup((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9750))+16);
  i0 = _check_pointer(i0, 9757);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9757))*12))+4);
  i0 = ADT_Dictionary__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(9420); return 0;
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_Size(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9925))+4);
  return i0;
  ;
}

Object__Object ADT_Dictionary__DictionaryDesc_Get(ADT_Dictionary__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10283);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10319))+4);
  _assert((i2!=0), 127, 10307);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10361)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary__DictionaryDesc_Lookup((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10399))+16);
  i2 = _check_pointer(i2, 10406);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10406))*12))+4);
  i2 = ADT_Dictionary__IsSet((Object__Object)i2);
  _assert(i2, 127, 10380);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10433))+16);
  i1 = _check_pointer(i1, 10440);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10440))*12))+8);
  return (Object__Object)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Set(ADT_Dictionary__Dictionary dict, Object__Object key, Object__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10853);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10885));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10901))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10938))+4);
  ADT_Dictionary__DictionaryDesc_Resize((ADT_Dictionary__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10981)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i3 = (OOC_INT32)value;
  ADT_Dictionary__DictionaryDesc_Insert((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, i2, (Object__Object)i3);
  return;
  ;
}

ADT_Dictionary__Dictionary ADT_Dictionary__DictionaryDesc_Copy(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  ADT_Dictionary__Dictionary copy;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Dictionary.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i0);
  copy = (ADT_Dictionary__Dictionary)i0;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11301))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11341))+4);
  ADT_Dictionary__DictionaryDesc_Resize((ADT_Dictionary__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11383))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11417))+16);
  i4 = _check_pointer(i4, 11424);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11424))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11465))+16);
  i4 = _check_pointer(i4, 11471);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11484))+16);
  i6 = _check_pointer(i6, 11490);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11526))+16);
  i8 = _check_pointer(i8, 11532);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11471))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11532))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11490))*12));
  ADT_Dictionary__DictionaryDesc_Insert((ADT_Dictionary__Dictionary)i0, (Object__Object)i4, i6, (Object__Object)i5);
l8:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void ADT_Dictionary__DictionaryDesc_Delete(ADT_Dictionary__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11938);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11974))+4);
  _assert((i2!=0), 127, 11962);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12016)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary__DictionaryDesc_Lookup((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12054))+16);
  i2 = _check_pointer(i2, 12061);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12061))*12))+4);
  i2 = ADT_Dictionary__IsSet((Object__Object)i2);
  _assert(i2, 127, 12035);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12125))+16);
  i2 = _check_pointer(i2, 12131);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12131))*12))+4) = ((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i4));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12167))+16);
  i2 = _check_pointer(i2, 12173);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 12173))*12))+8) = (OOC_INT32)0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 12204))+4);
  *(OOC_INT32*)((_check_pointer(i1, 12204))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Clear(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12372))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12416))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12479))+16);
  i3 = _check_pointer(i3, 12486);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12486))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12515))+16);
  i3 = _check_pointer(i3, 12522);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12522))*12))+8) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12553))+16);
  i3 = _check_pointer(i3, 12560);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12560))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l5_loop;
l10:
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12900))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12943))+8);
  i = 0;
  i3 = 0<i2;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12975))+16);
  i5 = _check_pointer(i5, 12982);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12982))*12))+4);
  i5 = ADT_Dictionary__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 13009);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13020))+16);
  i7 = _check_pointer(i7, 13027);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 13027))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13009))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13092))+4);
  _assert((i2==i0), 127, 13076);
  return (Object__ObjectArrayPtr)i1;
  ;
}

Object__ObjectArrayPtr ADT_Dictionary__DictionaryDesc_Values(ADT_Dictionary__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Object__ObjectArrayPtr list;
  OOC_INT32 j;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13408))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13451))+8);
  i = 0;
  i3 = 0<i2;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13483))+16);
  i5 = _check_pointer(i5, 13490);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 13490))*12))+4);
  i5 = ADT_Dictionary__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 13517);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13528))+16);
  i7 = _check_pointer(i7, 13535);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 13535))*12))+8);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13517))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13602))+4);
  _assert((i2==i0), 127, 13586);
  return (Object__ObjectArrayPtr)i1;
  ;
}

OOC_CHAR8 ADT_Dictionary__DictionaryDesc_Equals(ADT_Dictionary__Dictionary dict, Object__Object obj) {

  _assert(0u, 127, 13758);
  _failed_function(13678); 
  ;
}

OOC_INT32 ADT_Dictionary__DictionaryDesc_HashCode(ADT_Dictionary__Dictionary dict) {

  _assert(0u, 127, 13900);
  _failed_function(13832); 
  ;
}

void ADT_Dictionary__DictionaryDesc_Store(ADT_Dictionary__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14072))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14056)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14093))+4);
  i2 = i2!=0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14134))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14168))+16);
  i4 = _check_pointer(i4, 14175);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14175))*12))+4);
  i4 = ADT_Dictionary__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14220))+16);
  i4 = _check_pointer(i4, 14227);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14227))*12))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14201)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14268))+16);
  i4 = _check_pointer(i4, 14275);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14275))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14249)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i4);
l8:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l14:
  return;
  ;
}

void ADT_Dictionary__DictionaryDesc_Load(ADT_Dictionary__Dictionary dict, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14487)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 14502))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14523))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14701))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14688))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary__Table.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14734))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14755)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14787))+16);
  i4 = _check_pointer(i4, 14793);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14793))*12))+4) = ((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i6));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14828)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14860))+16);
  i4 = _check_pointer(i4, 14866);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14866))*12))+8) = ((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i6));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14907))+16);
  i4 = _check_pointer(i4, 14913);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14929))+16);
  i6 = _check_pointer(i6, 14935);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14935))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14929))+16);
  i7 = _check_pointer(i7, 14935);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 14935))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14942)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14913))*12)) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14988))+8);
  ADT_Dictionary__DictionaryDesc_Resize((ADT_Dictionary__Dictionary)i0, ((i1*3)>>1));
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
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(0, 29, OOC_UINT8, 15110))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(1, 29, OOC_UINT8, 15131))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(2, 29, OOC_UINT8, 15152))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(3, 29, OOC_UINT8, 15174))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(4, 29, OOC_UINT8, 15196))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(5, 29, OOC_UINT8, 15218))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(6, 29, OOC_UINT8, 15241))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(7, 29, OOC_UINT8, 15265))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(8, 29, OOC_UINT8, 15289))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(9, 29, OOC_UINT8, 15313))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(10, 29, OOC_UINT8, 15337))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(11, 29, OOC_UINT8, 15363))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(12, 29, OOC_UINT8, 15389))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(13, 29, OOC_UINT8, 15416))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(14, 29, OOC_UINT8, 15442))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(15, 29, OOC_UINT8, 15469))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(16, 29, OOC_UINT8, 15496))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(17, 29, OOC_UINT8, 15524))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(18, 29, OOC_UINT8, 15552))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(19, 29, OOC_UINT8, 15580))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(20, 29, OOC_UINT8, 15608))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(21, 29, OOC_UINT8, 15636))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(22, 29, OOC_UINT8, 15665))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(23, 29, OOC_UINT8, 15695))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(24, 29, OOC_UINT8, 15724))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(25, 29, OOC_UINT8, 15754))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(26, 29, OOC_UINT8, 15785))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(27, 29, OOC_UINT8, 15815))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary__polys+(_check_index(28, 29, OOC_UINT8, 15845))*4) = 1073741907;
  return;
  ;
}

/* --- */
