#include "Language/Real.d"
#include "__oo2c.h"

Language_Real__Value Language_Real__New(OOC_REAL64 val) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0;
  Language_Real__Value v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Real__Value.baseTypes[0]);
  v = (Language_Real__Value)i0;
  i1 = (OOC_INT32)Language_Real__type;
  Language__InitValue((Language__Value)i0, (Language__Type)i1);
  d0 = val;
  *(OOC_REAL64*)((_check_pointer(i0, 517))+8) = d0;
  return (Language_Real__Value)i0;
  ;
}

void Language_Real__ValueDesc_Store(Language_Real__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Store((Language__Value)i1, (ADT_Object__Writer)i0);
  d0 = *(OOC_REAL64*)((_check_pointer(i1, 648))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 634)))), BinaryRider__WriterDesc_WriteLReal)),BinaryRider__WriterDesc_WriteLReal)((BinaryRider__Writer)i0, d0);
  return;
  ;
}

void Language_Real__ValueDesc_Load(Language_Real__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Load((Language__Value)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 749)))), BinaryRider__ReaderDesc_ReadLReal)),BinaryRider__ReaderDesc_ReadLReal)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 762))+8));
  return;
  ;
}

OOC_CHAR8 Language_Real__ValueDesc_Equals(Language_Real__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 864)))), &_td_Language_Real__ValueDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)((_check_pointer(i1, 878))+8);
  d1 = *(OOC_REAL64*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 889)))), &_td_Language_Real__ValueDesc, 889)), 895))+8);
  i0 = d0==d1;
  
l4:
  return i0;
  ;
}

OOC_INT32 Language_Real__ValueDesc_HashCode(Language_Real__Value v) {
  register OOC_INT32 i0,i1,i2;
  OOC_UINT32 a[2];

  i0 = (OOC_INT32)v;
  _move_block(((_check_pointer(i0, 1179))+8),(OOC_INT32)a,8);
  i0=0;i1=0;
l1_loop:
  i2 = *(OOC_UINT32*)((OOC_INT32)a+(_check_index(i1, 2, OOC_UINT32, 1286))*4);
  i1 = i1+1;
  i0 = i0^i2;
  i2 = i1<=1;
  if (i2) goto l1_loop;
l5:
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, i0));
  ;
}

ADT_String__String Language_Real__ValueDesc_ToString(Language_Real__Value v) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;
  OOC_CHAR8 str[128];

  i0 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 1475))+8);
  LRealStr__RealToFloat(d0, 17, (void*)(OOC_INT32)str, 128);
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 128);
  return (ADT_String__String)i0;
  ;
}

OOC_REAL64 Language_Real__ValueDesc_ToReal(Language_Real__Value v) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 1594))+8);
  return d0;
  ;
}

Language_Real__Value Language_Real__ValueDesc_Sum(Language_Real__Value v, Language_Real__Value right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 1687))+8);
  d1 = *(OOC_REAL64*)((_check_pointer(i1, 1701))+8);
  i0 = (OOC_INT32)Language_Real__New((d0+d1));
  return (Language_Real__Value)i0;
  ;
}

Language_Real__Value Language_Real__ValueDesc_Difference(Language_Real__Value v, Language_Real__Value right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 1799))+8);
  d1 = *(OOC_REAL64*)((_check_pointer(i1, 1813))+8);
  i0 = (OOC_INT32)Language_Real__New((d0-d1));
  return (Language_Real__Value)i0;
  ;
}

Language_Real__Value Language_Real__ValueDesc_Product(Language_Real__Value v, Language_Real__Value right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 1915))+8);
  d1 = *(OOC_REAL64*)((_check_pointer(i1, 1929))+8);
  i0 = (OOC_INT32)Language_Real__New((d0*d1));
  return (Language_Real__Value)i0;
  ;
}

Language_Real__Value Language_Real__ValueDesc_Quotient(Language_Real__Value v, Language_Real__Value right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 2029))+8);
  d1 = *(OOC_REAL64*)((_check_pointer(i1, 2043))+8);
  i0 = (OOC_INT32)Language_Real__New((d0/d1));
  return (Language_Real__Value)i0;
  ;
}

OOC_INT32 Language_Real__ValueDesc_Compare(Language_Real__Value v, ADT_Object__Object right) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 2145))+8);
  d1 = *(OOC_REAL64*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2160)))), &_td_Language_Real__ValueDesc, 2160)), 2166))+8);
  i2 = d0==d1;
  if (i2) goto l7;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 2201))+8);
  d1 = *(OOC_REAL64*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2216)))), &_td_Language_Real__ValueDesc, 2216)), 2222))+8);
  i0 = d0<d1;
  if (i0) goto l5;
  return 1;
  goto l8;
l5:
  return -1;
  goto l8;
l7:
  return 0;
l8:
  _failed_function(2089); return 0;
  ;
}

OOC_INT32 Language_Real__ValueDesc_Sign(Language_Real__Value v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)Language_Real__zero;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2349)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
  return i0;
  ;
}

Language_Real__Value Language_Real__ValueDesc_Negate(Language_Real__Value v) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)((_check_pointer(i0, 2439))+8);
  i0 = (OOC_INT32)Language_Real__New((-d0));
  return (Language_Real__Value)i0;
  ;
}

Language_Real__Value Language_Real__TypeDesc_Value(Language_Real__Type t, OOC_REAL64 val) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;

  d0 = val;
  i0 = (OOC_INT32)Language_Real__New(d0);
  return (Language_Real__Value)i0;
  ;
}

Language_Real__Value Language_Real__TypeDesc_ValueOf(Language_Real__Type t, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)
  OOC_REAL64 real;
  OOC_INT8 res;

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  LRealStr__StrToReal((void*)(OOC_INT32)s, s_0d, (void*)(OOC_INT32)&real, (void*)(OOC_INT32)&res);
  i0 = res;
  i0 = i0==0;
  if (i0) goto l3;
  return (Language_Real__Value)(OOC_INT32)0;
  goto l4;
l3:
  d0 = real;
  i0 = (OOC_INT32)Language_Real__New(d0);
  return (Language_Real__Value)i0;
l4:
  _failed_function(2573); return 0;
  ;
}

Language_Real__Value Language_Real__TypeDesc_ValueOfLiteral(Language_Real__Type t, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1;
  register OOC_REAL32 f0;
  register OOC_REAL64 d0;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)
  OOC_REAL64 longreal;
  OOC_INT8 res;
  OOC_REAL32 real;

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 3305)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 3319)));
  i0 = i0!=(OOC_CHAR8)'D';
  
l5:
  if (i0) goto l7;
  i0=0;
  goto l17;
l7:
  i0=0;
l8_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3305)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3319)));
  i1 = i1!=(OOC_CHAR8)'D';
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3373)));
  i1 = i1==(OOC_CHAR8)'D';
  if (i1) goto l24;
  RealStr__StrToReal((void*)(OOC_INT32)s, s_0d, (void*)(OOC_INT32)&real, (void*)(OOC_INT32)&res);
  i0 = res;
  i0 = i0==0;
  if (i0) goto l22;
  i0=(OOC_INT32)0;
  goto l29;
l22:
  f0 = real;
  i0 = (OOC_INT32)Language_Real__New(((OOC_REAL64)f0));
  
  goto l29;
l24:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3394))) = (OOC_CHAR8)'E';
  LRealStr__StrToReal((void*)(OOC_INT32)s, s_0d, (void*)(OOC_INT32)&longreal, (void*)(OOC_INT32)&res);
  i0 = res;
  i0 = i0==0;
  if (i0) goto l27;
  i0=(OOC_INT32)0;
  goto l29;
l27:
  d0 = longreal;
  i0 = (OOC_INT32)Language_Real__New(d0);
  
l29:
  return (Language_Real__Value)i0;
  ;
}

ADT_String__String Language_Real__TypeDesc_ToString(Language_Real__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_Real__typeName;
  return (ADT_String__String)i0;
  ;
}

void OOC_Language_Real_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Real__Type.baseTypes[0]);
  Language_Real__type = (Language_Real__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("Real", 5);
  Language_Real__typeName = (ADT_String__String)i0;
  i0 = (OOC_INT32)Language_Real__New(0.0000000000000000);
  Language_Real__zero = (Language_Real__Value)i0;
  return;
  ;
}

/* --- */
