#include <ADT/Dictionary/IntValue.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Dictionary_IntValue__Init(ADT_Dictionary_IntValue__Dictionary dict) {
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4453))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4497))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4560))+16);
  i3 = _check_pointer(i3, 4567);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4567))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4596))+16);
  i3 = _check_pointer(i3, 4603);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 4603))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4632))+16);
  i3 = _check_pointer(i3, 4639);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 4639))*12)) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 4675))+16) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6111))+16);
  t = (ADT_Dictionary_IntValue__Table)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6148))+8);
  i3 = hash;
  i4 = _type_cast_fast(OOC_UINT32, OOC_INT32, i3);
  i2 = _type_cast_fast(OOC_UINT32, OOC_INT32, (i2-1));
  mask = i2;
  i5 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((~i4)&i2));
  i = i5;
  i6 = _check_pointer(i1, 6221);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6221))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l3;
  i6 = _check_pointer(i1, 6242);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 6242))*12))+4);
  i7 = (OOC_INT32)key;
  i6 = i6==i7;
  
  goto l4;
l3:
  i6=1u;
l4:
  i7 = (OOC_INT32)key;
  if (i6) goto l19;
  i6 = _check_pointer(i1, 6290);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6290))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l17;
  i6 = _check_pointer(i1, 6345);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i5, i8, OOC_UINT32, 6345))*12));
  i6 = i6==i3;
  if (i6) goto l11;
  i6=0u;
  goto l13;
l11:
  i6 = _check_pointer(i1, 6379);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 6379))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6368)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i4 = *(OOC_INT32*)((_check_pointer(i0, 6581))+8);
  i4 = i4-1;
  incr = i4;
  
l24:
  {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l25_loop:
  i4 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (i4+i5)))&i2));
  i = i4;
  i6 = _check_pointer(i1, 6674);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6674))*12))+4);
  i6 = i6==(OOC_INT32)0;
  if (i6) goto l42;
  i6 = _check_pointer(i1, 6811);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6811))*12))+4);
  i8 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  i6 = i6==i8;
  if (i6) goto l37;
  i6 = _check_pointer(i1, 6915);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+((_check_index(i4, i8, OOC_UINT32, 6915))*12));
  i6 = i6==i3;
  if (i6) goto l32;
  i6=0u;
  goto l34;
l32:
  i6 = _check_pointer(i1, 6949);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i4, i8, OOC_UINT32, 6949))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6938)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i7, (Object__Object)i6);
  
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
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7036))+8);
  i6 = i5>=i6;
  if (!i6) goto l25_loop;
  i6 = *(OOC_INT32*)((_check_pointer(i0, 7117))+12);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7512))+16);
  i4 = _check_pointer(i4, 7519);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7519))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7679))+16);
  i4 = _check_pointer(i4, 7686);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7686))*12))+4);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l5;
  i4 = *(OOC_INT32*)(_check_pointer(i0, 7724));
  *(OOC_INT32*)(_check_pointer(i0, 7724)) = (i4+1);
l5:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7753))+16);
  i4 = _check_pointer(i4, 7760);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 7760))*12))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7787))+16);
  i1 = _check_pointer(i1, 7794);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+((_check_index(i3, i4, OOC_UINT32, 7794))*12)) = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7823))+16);
  i1 = _check_pointer(i1, 7830);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = value;
  *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 7830))*12))+8) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7866))+4);
  *(OOC_INT32*)((_check_pointer(i0, 7866))+4) = (i1+1);
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7571))+16);
  i0 = _check_pointer(i0, 7578);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = value;
  *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 7578))*12))+8) = i2;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8270))+8);
  oldSize = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8298))+16);
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
  i3 = *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(i3, 29, OOC_UINT32, 8451))*4);
  newPoly = i3;
  i5 = (OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i4);
  newTable = (ADT_Dictionary_IntValue__Table)i5;
  i = 0;
  i6 = 0<i4;
  if (!i6) goto l17;
  i6=0;
l12_loop:
  i7 = _check_pointer(i5, 8590);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 8590))*12))+4) = (OOC_INT32)0;
  i7 = _check_pointer(i5, 8621);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 8621))*12))+8) = 0;
  i7 = _check_pointer(i5, 8652);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  *(OOC_INT32*)(i7+((_check_index(i6, i8, OOC_UINT32, 8652))*12)) = 0;
  i6 = i6+1;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l12_loop;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 8684))+8) = i4;
  *(OOC_INT32*)((_check_pointer(i0, 8711))+12) = i3;
  *(OOC_INT32*)((_check_pointer(i0, 8738))+16) = i5;
  *(OOC_INT32*)(_check_pointer(i0, 8767)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8788))+4) = 0;
  i = 0;
  i3 = 0<i1;
  if (!i3) goto l28;
  i3=0;
l20_loop:
  i4 = _check_pointer(i2, 8861);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8861))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l23;
  i4 = _check_pointer(i2, 8906);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i2, 8924);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 8943);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8906))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 8943))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 8924))*12));
  ADT_Dictionary_IntValue__Insert((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i4, i6, i5);
  i4 = _check_pointer(i2, 8972);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 8972))*12))+4) = (OOC_INT32)0;
  i4 = _check_pointer(i2, 9033);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 9033))*12))+8) = 0;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9327))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)key;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9409)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i1);
  i1 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  index = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9448))+16);
  i0 = _check_pointer(i0, 9455);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 9455))*12))+4);
  i0 = ADT_Dictionary_IntValue__IsSet((Object__Object)i0);
  return i0;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(9113); return 0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Size(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dict;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9617))+4);
  return i0;
  ;
}

OOC_INT32 ADT_Dictionary_IntValue__DictionaryDesc_Get(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 9975);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10011))+4);
  _assert((i2!=0), 127, 9999);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10055)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10093))+16);
  i2 = _check_pointer(i2, 10100);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10100))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 10074);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10127))+16);
  i1 = _check_pointer(i1, 10134);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 10134))*12))+8);
  return i0;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Set(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)key;
  _assert((i0!=(OOC_INT32)0), 127, 10547);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 10579));
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10595))+8);
  i2 = (i2*3)>=(i3*2);
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10634))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i1, (i2*2));
l4:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10679)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
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
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10901))+4);
  i2 = i2>0;
  if (!i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10943))+4);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i2*3)>>1));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10985))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l14;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11019))+16);
  i4 = _check_pointer(i4, 11026);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11026))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l8;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11069))+16);
  i4 = _check_pointer(i4, 11076);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11090))+16);
  i6 = _check_pointer(i6, 11097);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11130))+16);
  i8 = _check_pointer(i8, 11137);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 11076))*12))+4);
  i5 = *(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 11137))*12))+8);
  i6 = *(OOC_INT32*)(i6+((_check_index(i3, i7, OOC_UINT32, 11097))*12));
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
  _assert((i0!=(OOC_INT32)0), 127, 11540);
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11576))+4);
  _assert((i2!=0), 127, 11564);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11620)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i0);
  i0 = ADT_Dictionary_IntValue__Lookup((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
  i = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11658))+16);
  i2 = _check_pointer(i2, 11665);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11665))*12))+4);
  i2 = ADT_Dictionary_IntValue__IsSet((Object__Object)i2);
  _assert(i2, 127, 11639);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11685))+16);
  i2 = _check_pointer(i2, 11692);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)ADT_Dictionary_IntValue__dummy;
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11692))*12))+4) = i4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11765))+16);
  i2 = _check_pointer(i2, 11772);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 11772))*12))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 11802))+4);
  *(OOC_INT32*)((_check_pointer(i1, 11802))+4) = (i0-1);
  return;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Clear(ADT_Dictionary_IntValue__Dictionary dict) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dict;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11964))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12008))+8);
  i2 = 0<i1;
  if (!i2) goto l10;
  i2=0;
l5_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12071))+16);
  i3 = _check_pointer(i3, 12078);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12078))*12))+4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12107))+16);
  i3 = _check_pointer(i3, 12114);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 12114))*12))+8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12143))+16);
  i3 = _check_pointer(i3, 12150);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 12150))*12)) = 0;
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12477))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i1);
  list = (Object__ObjectArrayPtr)i1;
  j = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12520))+8);
  i = 0;
  i3 = 0<i2;
  if (i3) goto l3;
  i2=0;
  goto l13;
l3:
  i3=0;i4=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12552))+16);
  i5 = _check_pointer(i5, 12559);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i3, i6, OOC_UINT32, 12559))*12))+4);
  i5 = ADT_Dictionary_IntValue__IsSet((Object__Object)i5);
  if (!i5) goto l8;
  i5 = _check_pointer(i1, 12586);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12597))+16);
  i7 = _check_pointer(i7, 12604);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 12604))*12))+4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 12586))*4) = i7;
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
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12669))+4);
  _assert((i2==i0), 127, 12653);
  return (Object__ObjectArrayPtr)i1;
  ;
}

void ADT_Dictionary_IntValue__DictionaryDesc_Store(ADT_Dictionary_IntValue__Dictionary dict, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Object__Object obj;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)dict;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13373))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13357)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13394))+4);
  i2 = i2!=0;
  if (!i2) goto l18;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13435))+8);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l18;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13469))+16);
  i4 = _check_pointer(i4, 13476);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13476))*12))+4);
  i4 = ADT_Dictionary_IntValue__IsSet((Object__Object)i4);
  if (!i4) goto l12;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13512))+16);
  i4 = _check_pointer(i4, 13519);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13519))*12))+4);
  obj = (Object__Object)i4;
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13621)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13649)))), &_td_ADT_Storable__ObjectDesc, 13649)));
  goto l11;
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13572)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13701))+16);
  i4 = _check_pointer(i4, 13708);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 13708))*12))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13685)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i4);
l12:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13915)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 13930))+8));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13951))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14129))+8);
  *(OOC_INT32*)((_check_pointer(i0, 14116))+16) = ((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Table.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14162))+8);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14183)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14215))+16);
  i4 = _check_pointer(i4, 14222);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 14222))*12))+4) = i6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14263))+16);
  i4 = _check_pointer(i4, 14270);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14248)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((i4+((_check_index(i3, i5, OOC_UINT32, 14270))*12))+8));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14295))+16);
  i4 = _check_pointer(i4, 14302);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14319))+16);
  i6 = _check_pointer(i6, 14326);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 14326))*12))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14319))+16);
  i7 = _check_pointer(i7, 14326);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((i7+((_check_index(i3, i8, OOC_UINT32, 14326))*12))+4);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14334)))), Object__ObjectDesc_HashCode)),Object__ObjectDesc_HashCode)((Object__Object)i7);
  *(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 14302))*12)) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14383))+8);
  ADT_Dictionary_IntValue__Resize((ADT_Dictionary_IntValue__Dictionary)i0, ((i1*3)>>1));
l11:
  return;
  ;
}

void OOC_ADT_Dictionary_IntValue_init(void) {

  ADT_Dictionary_IntValue__dummy = (ADT_Dictionary_IntValue__Dummy)((OOC_INT32)RT0__NewObject(_td_ADT_Dictionary_IntValue__Dummy.baseTypes[0]));
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(0, 29, OOC_UINT8, 14452))*4) = 7;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(1, 29, OOC_UINT8, 14473))*4) = 11;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(2, 29, OOC_UINT8, 14494))*4) = 19;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(3, 29, OOC_UINT8, 14516))*4) = 37;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(4, 29, OOC_UINT8, 14538))*4) = 67;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(5, 29, OOC_UINT8, 14560))*4) = 131;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(6, 29, OOC_UINT8, 14583))*4) = 285;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(7, 29, OOC_UINT8, 14607))*4) = 529;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(8, 29, OOC_UINT8, 14631))*4) = 1033;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(9, 29, OOC_UINT8, 14655))*4) = 2053;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(10, 29, OOC_UINT8, 14679))*4) = 4179;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(11, 29, OOC_UINT8, 14705))*4) = 8219;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(12, 29, OOC_UINT8, 14731))*4) = 16427;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(13, 29, OOC_UINT8, 14758))*4) = 32771;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(14, 29, OOC_UINT8, 14784))*4) = 65581;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(15, 29, OOC_UINT8, 14811))*4) = 131081;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(16, 29, OOC_UINT8, 14838))*4) = 262183;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(17, 29, OOC_UINT8, 14866))*4) = 524327;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(18, 29, OOC_UINT8, 14894))*4) = 1048585;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(19, 29, OOC_UINT8, 14922))*4) = 2097157;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(20, 29, OOC_UINT8, 14950))*4) = 4194307;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(21, 29, OOC_UINT8, 14978))*4) = 8388641;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(22, 29, OOC_UINT8, 15007))*4) = 16777243;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(23, 29, OOC_UINT8, 15037))*4) = 33554441;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(24, 29, OOC_UINT8, 15066))*4) = 67108935;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(25, 29, OOC_UINT8, 15096))*4) = 134217767;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(26, 29, OOC_UINT8, 15127))*4) = 268435465;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(27, 29, OOC_UINT8, 15157))*4) = 536870917;
  *(OOC_INT32*)((OOC_INT32)ADT_Dictionary_IntValue__polys+(_check_index(28, 29, OOC_UINT8, 15187))*4) = 1073741907;
  return;
  ;
}

/* --- */
