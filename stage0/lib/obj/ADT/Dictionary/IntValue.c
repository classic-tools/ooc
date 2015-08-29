#include <ADT/Dictionary/IntValue.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Dictionary_IntValue__Init(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  *(OOC_INT32*)((_check_pointer(i0, 4065))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4086))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4107))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 4131)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4152))+4) = 0;
  return;
  ;
}

ADT_Dictionary_IntValue__Dictionary ADT_Dictionary_IntValue__New(void) {
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4427))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4471))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4534))+16);
  i3 = _check_pointer(i3, 4541);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4541))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4570))+16);
  i3 = _check_pointer(i3, 4577);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4577))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4606))+16);
  i3 = _check_pointer(i3, 4613);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4613))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4649))+16) = (OOC_INT32)0;
l11:
  return;
  ;
}

static OOC_CHAR8 ADT_Dictionary_IntValue__IsSet(Object__Object key) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)key;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6085))+16);
  t = (ADT_Dictionary_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6122))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6195);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6195))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6216);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6216))*12))+4);
  i7 = (OOC_INT32)key;
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=1u;
l4:
  i7 = (OOC_INT32)key;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6264);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6264))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6319);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6319))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=0u;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6353);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6353))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6342)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6555))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6648);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6648))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 6785);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6785))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 6889);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 6889))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=0u;
  goto l34;
l32:
  i6 = _check_pointer(i1, 6923);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6923))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6912)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7010))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7091))+12);
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i5))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i6))));
  incr = i5;
  
  goto l25_loop;
l53:
  ;
}

static void ADT_Dictionary_IntValue__Insert(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)key;
  i2 = hash;
  i3 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7486))+16);
  i4 = _check_pointer(i4, 7493);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7493))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7653))+16);
  i4 = _check_pointer(i4, 7660);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7660))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i0, 7698));
  *(OOC_INT32*)(_check_pointer(i0, 7698)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7727))+16);
  i4 = _check_pointer(i4, 7734);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7734))*12))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7761))+16);
  i1 = _check_pointer(i1, 7768);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+((_check_index(i3, i4, OOC_UINT32, 7768))*12)) = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7797))+16);
  i1 = _check_pointer(i1, 7804);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = value;
  *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 7804))*12))+8) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7840))+4);
  *(OOC_INT32*)((_check_pointer(i0, 7840))+4) = (i1+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7545))+16);
  i0 = _check_pointer(i0, 7552);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7552))*12))+8) = i2;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8244))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8272))+16);
  oldTable = (ADT_Dictionary_IntValue__Table)i2;
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8425))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_IntValue__Table)i5;
  i = 0;
  i6 = 0<i4;
  if (!i6) goto l17;
  i6=0;
l12_loop:
  i7 = _check_pointer(i5, 8564);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 8564))*12))+4) = (OOC_INT32)0;
  i7 = _check_pointer(i5, 8595);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 8595))*12))+8) = 0;
  i7 = _check_pointer(i5, 8626);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)(i7+((_check_index(i6, i8, OOC_UINT32, 8626))*12)) = 0;
  i6 = i6+1;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8658))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8685))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 8712))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 8741)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8762))+4) = 0;
  i = 0;
  i3 = 0<i1;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 8835);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8835))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 8880);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 8898);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 8917);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8880))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 8917))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 8898))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 8946);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8946))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9007);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9007))*12))+8) = 0;
l23:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l20_loop;
l28:
  return;
  ;
}

OOC_CHAR8 ADT_Dictionary_IntValue__DictionaryDesc_HasKey(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 index;

  i0 = (OOC_INT32)dict;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9301))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9383)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i1);
  i1 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9422))+16);
  i0 = _check_pointer(i0, 9429);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9429))*12))+4);
  i0 = ADT_Dictionary_IntValue__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(9087); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Size(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9591))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Get(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 9949);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9985))+4);
  _assert((i2!=0), 127, 9973);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10029)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10067))+16);
  i2 = _check_pointer(i2, 10074);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10074))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 10048);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10101))+16);
  i1 = _check_pointer(i1, 10108);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10108))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Set(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10521);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10553));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10569))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10608))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10653)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10875))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10917))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10959))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10993))+16);
  i4 = _check_pointer(i4, 11000);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11000))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11043))+16);
  i4 = _check_pointer(i4, 11050);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11064))+16);
  i6 = _check_pointer(i6, 11071);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11104))+16);
  i8 = _check_pointer(i8, 11111);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11050))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11111))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11071))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
l8:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l14:
  return (ADT_Dictionary_IntValue__Dictionary)i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Delete(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 11514);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11550))+4);
  _assert((i2!=0), 127, 11538);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11594)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11632))+16);
  i2 = _check_pointer(i2, 11639);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11639))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 11613);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11659))+16);
  i2 = _check_pointer(i2, 11666);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11666))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11739))+16);
  i2 = _check_pointer(i2, 11746);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11746))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 11776))+4);
  *(OOC_INT32*)((_check_pointer(i1, 11776))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Clear(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11938))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11982))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12045))+16);
  i3 = _check_pointer(i3, 12052);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12052))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12081))+16);
  i3 = _check_pointer(i3, 12088);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12088))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12117))+16);
  i3 = _check_pointer(i3, 12124);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12124))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12451))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12494))+8);
  i = 0;
  i3 = 0<i2;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12526))+16);
  i5 = _check_pointer(i5, 12533);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12533))*12))+4);
  i5 = ADT_Dictionary_IntValue__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12560);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12571))+16);
  i7 = _check_pointer(i7, 12578);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12578))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12560))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12643))+4);
  _assert((i2==i0), 127, 12627);
  return (Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Store(ADT_Dictionary_IntValue__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13323))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13307)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13344))+4);
  i2 = i2!=0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13385))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13419))+16);
  i4 = _check_pointer(i4, 13426);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13426))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13471))+16);
  i4 = _check_pointer(i4, 13478);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13478))*12))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13452)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13516))+16);
  i4 = _check_pointer(i4, 13523);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13523))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13500)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i4);
l8:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l14:
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Load(ADT_Dictionary_IntValue__Dictionary dict, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)dict;
  ADT_Dictionary_IntValue__Init((ADT_Dictionary_IntValue__Dictionary)i0);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13728)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 13743))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13764))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13942))+8);
  *(OOC_INT32*)((_check_pointer(i0, 13929))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13975))+8);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13996)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14028))+16);
  i4 = _check_pointer(i4, 14035);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14035))*12))+4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14076))+16);
  i4 = _check_pointer(i4, 14083);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14061)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14083))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14108))+16);
  i4 = _check_pointer(i4, 14115);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14132))+16);
  i6 = _check_pointer(i6, 14139);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14139))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14132))+16);
  i7 = _check_pointer(i7, 14139);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 14139))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14147)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14115))*12)) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14196))+8);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_IntValue_init(void) {

  ADT_Dictionary_IntValue__dummy = (ADT_Dictionary_IntValue__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14265))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14286))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14307))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14329))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14351))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14373))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14396))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14420))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14444))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14468))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14492))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 14518))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 14544))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 14571))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 14597))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 14624))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 14651))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 14679))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 14707))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 14735))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 14763))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 14791))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 14820))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 14850))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 14879))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 14909))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 14940))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 14970))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 15000))*4) = 1073741907;
  return;
  ;
}

/* --- */
