#include <Object/Boxed.d>
#include <__oo2c.h>

Object__String Object_Boxed__ObjectDesc_ToString(Object_Boxed__Object v) {

  _failed_function(2425); return 0;
  ;
}

OOC_INT32 Object_Boxed__ObjectDesc_Cmp(Object_Boxed__Object v, Object__Object y) {

  _failed_function(2500); return 0;
  ;
}

Object_Boxed__Boolean Object_Boxed__NewBoolean(OOC_CHAR8 value) {
  register OOC_INT32 i0,i1;
  Object_Boxed__Boolean v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__Boolean.baseTypes[0]);
  v = (Object_Boxed__Boolean)i0;
  i1 = value;
  *(OOC_UINT8*)(_check_pointer(i0, 2728)) = i1;
  return (Object_Boxed__Boolean)i0;
  ;
}

Object_Boxed__Boolean Object_Boxed__ParseBoolean(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0;

  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)"TRUE"))==(OOC_INT32)0;
  if (i0) goto l7;
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)"FALSE"))==(OOC_INT32)0;
  if (i0) goto l5;
  return (Object_Boxed__Boolean)(OOC_INT32)0;
  goto l8;
l5:
  i0 = (OOC_INT32)Object_Boxed__false;
  return (Object_Boxed__Boolean)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)Object_Boxed__true;
  return (Object_Boxed__Boolean)i0;
l8:
  _failed_function(2788); return 0;
  ;
}

OOC_CHAR8 Object_Boxed__BooleanDesc_Equals(Object_Boxed__Boolean v, Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3081)))), &_td_Object_Boxed__BooleanDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i1 = *(OOC_UINT8*)(_check_pointer(i1, 3097));
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3108)))), &_td_Object_Boxed__BooleanDesc, 3108)), 3116));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

OOC_INT32 Object_Boxed__BooleanDesc_Cmp(Object_Boxed__Boolean v, Object__Object y) {

  _assert(OOC_FALSE, 127, 3206);
  return -1;
  ;
}

OOC_INT32 Object_Boxed__BooleanDesc_HashCode(Object_Boxed__Boolean v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 3313));
  if (i0) goto l3;
  return 2;
  goto l4;
l3:
  return 1;
l4:
  _failed_function(3274); return 0;
  ;
}

Object__String Object_Boxed__BooleanDesc_ToString(Object_Boxed__Boolean v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 3456));
  if (i0) goto l3;
  i0 = (OOC_INT32)Object_Boxed__falseString;
  return (Object__String)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)Object_Boxed__trueString;
  return (Object__String)i0;
l4:
  _failed_function(3415); return 0;
  ;
}

void Object_Boxed__BooleanDesc_Store(Object_Boxed__Boolean v, ADT_Storable__Writer w) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 3621));
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3671)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, 0);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3640)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, 1);
l4:
  return;
  ;
}

void Object_Boxed__BooleanDesc_Load(Object_Boxed__Boolean v, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  OOC_INT8 si;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3796)))), BinaryRider__ReaderDesc_ReadSInt)),BinaryRider__ReaderDesc_ReadSInt)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&si);
  i0 = (OOC_INT32)v;
  i1 = si;
  *(OOC_UINT8*)(_check_pointer(i0, 3816)) = (i1!=0);
  return;
  ;
}

Object_Boxed__LongReal Object_Boxed__NewLongReal(OOC_REAL64 val) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;
  Object_Boxed__LongReal v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__LongReal.baseTypes[0]);
  v = (Object_Boxed__LongReal)i0;
  d0 = val;
  *(OOC_REAL64*)(_check_pointer(i0, 4090)) = d0;
  return (Object_Boxed__LongReal)i0;
  ;
}

Object_Boxed__LongReal Object_Boxed__ParseLongReal(const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
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
  return (Object_Boxed__LongReal)(OOC_INT32)0;
  goto l4;
l3:
  d0 = real;
  i0 = (OOC_INT32)Object_Boxed__NewLongReal(d0);
  return (Object_Boxed__LongReal)i0;
l4:
  _failed_function(4149); return 0;
  ;
}

Object_Boxed__LongReal Object_Boxed__ParseLongRealLiteral(const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1;
  register OOC_REAL32 f0;
  register OOC_REAL64 d0;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)
  OOC_REAL64 longreal;
  OOC_INT8 res;
  OOC_REAL32 real;

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 4939)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 4953)));
  i0 = i0!=(OOC_CHAR8)'D';
  
l5:
  if (i0) goto l7;
  i0=0;
  goto l17;
l7:
  i0=0;
l8_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 4939)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 4953)));
  i1 = i1!=(OOC_CHAR8)'D';
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 5019)));
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
  i0 = (OOC_INT32)Object_Boxed__NewLongReal(((OOC_REAL64)f0));
  
  goto l29;
l24:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 5042))) = (OOC_CHAR8)'E';
  LRealStr__StrToReal((void*)(OOC_INT32)s, s_0d, (void*)(OOC_INT32)&longreal, (void*)(OOC_INT32)&res);
  i0 = res;
  i0 = i0==0;
  if (i0) goto l27;
  i0=(OOC_INT32)0;
  goto l29;
l27:
  d0 = longreal;
  i0 = (OOC_INT32)Object_Boxed__NewLongReal(d0);
  
l29:
  return (Object_Boxed__LongReal)i0;
  ;
}

void Object_Boxed__LongRealDesc_Store(Object_Boxed__LongReal v, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)(_check_pointer(i1, 5449));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5435)))), BinaryRider__WriterDesc_WriteLReal)),BinaryRider__WriterDesc_WriteLReal)((BinaryRider__Writer)i0, d0);
  return;
  ;
}

void Object_Boxed__LongRealDesc_Load(Object_Boxed__LongReal v, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5536)))), BinaryRider__ReaderDesc_ReadLReal)),BinaryRider__ReaderDesc_ReadLReal)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 5549)));
  return;
  ;
}

OOC_CHAR8 Object_Boxed__LongRealDesc_Equals(Object_Boxed__LongReal v, Object__Object y) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5650)))), &_td_Object_Boxed__LongRealDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)(_check_pointer(i1, 5667));
  d1 = *(OOC_REAL64*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5678)))), &_td_Object_Boxed__LongRealDesc, 5678)), 5687));
  i0 = d0==d1;
  
l4:
  return i0;
  ;
}

OOC_INT32 Object_Boxed__LongRealDesc_HashCode(Object_Boxed__LongReal v) {
  register OOC_INT32 i0,i1,i2;
  OOC_UINT32 a[2];

  i0 = (OOC_INT32)v;
  _move_block((_check_pointer(i0, 5985)),(OOC_INT32)a,8);
  i0=0;i1=0;
l1_loop:
  i2 = *(OOC_UINT32*)((OOC_INT32)a+(_check_index(i1, 2, OOC_UINT32, 6098))*4);
  i1 = i1+1;
  i0 = i0^i2;
  i2 = i1<=1;
  if (i2) goto l1_loop;
l5:
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, i0));
  ;
}

Object__String Object_Boxed__LongRealDesc_ToString(Object_Boxed__LongReal v) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;
  OOC_CHAR8 str[128];

  i0 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 6286));
  LRealStr__RealToFloat(d0, 17, (void*)(OOC_INT32)str, 128);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 128);
  return (Object__String)i0;
  ;
}

OOC_REAL64 Object_Boxed__LongRealDesc_ToLongReal(Object_Boxed__LongReal v) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 6421));
  return d0;
  ;
}

Object_Boxed__LongReal Object_Boxed__LongRealDesc_Add(Object_Boxed__LongReal v, Object_Boxed__LongReal right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 6537));
  d1 = *(OOC_REAL64*)(_check_pointer(i1, 6551));
  i0 = (OOC_INT32)Object_Boxed__NewLongReal((d0+d1));
  return (Object_Boxed__LongReal)i0;
  ;
}

Object_Boxed__LongReal Object_Boxed__LongRealDesc_Sub(Object_Boxed__LongReal v, Object_Boxed__LongReal right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 6661));
  d1 = *(OOC_REAL64*)(_check_pointer(i1, 6675));
  i0 = (OOC_INT32)Object_Boxed__NewLongReal((d0-d1));
  return (Object_Boxed__LongReal)i0;
  ;
}

Object_Boxed__LongReal Object_Boxed__LongRealDesc_Mul(Object_Boxed__LongReal v, Object_Boxed__LongReal right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 6785));
  d1 = *(OOC_REAL64*)(_check_pointer(i1, 6799));
  i0 = (OOC_INT32)Object_Boxed__NewLongReal((d0*d1));
  return (Object_Boxed__LongReal)i0;
  ;
}

Object_Boxed__LongReal Object_Boxed__LongRealDesc_Div(Object_Boxed__LongReal v, Object_Boxed__LongReal right) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 6909));
  d1 = *(OOC_REAL64*)(_check_pointer(i1, 6923));
  i0 = (OOC_INT32)Object_Boxed__NewLongReal((d0/d1));
  return (Object_Boxed__LongReal)i0;
  ;
}

OOC_INT32 Object_Boxed__LongRealDesc_Cmp(Object_Boxed__LongReal v, Object__Object right) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0,d1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 7018));
  d1 = *(OOC_REAL64*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7033)))), &_td_Object_Boxed__LongRealDesc, 7033)), 7042));
  i2 = d0==d1;
  if (i2) goto l7;
  d0 = *(OOC_REAL64*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7096)))), &_td_Object_Boxed__LongRealDesc, 7096)), 7105));
  d1 = *(OOC_REAL64*)(_check_pointer(i0, 7081));
  i0 = d1<d0;
  if (i0) goto l5;
  return 1;
  goto l8;
l5:
  return -1;
  goto l8;
l7:
  return 0;
l8:
  _failed_function(6968); return 0;
  ;
}

OOC_INT32 Object_Boxed__LongRealDesc_Sign(Object_Boxed__LongReal v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)Object_Boxed__zeroLongReal;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7242)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
  return i0;
  ;
}

Object_Boxed__LongReal Object_Boxed__LongRealDesc_Neg(Object_Boxed__LongReal v) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)v;
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 7350));
  i0 = (OOC_INT32)Object_Boxed__NewLongReal((-d0));
  return (Object_Boxed__LongReal)i0;
  ;
}

Object_Boxed__Set Object_Boxed__NewSet(OOC_UINT32 value) {
  register OOC_INT32 i0,i1;
  Object_Boxed__Set v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__Set.baseTypes[0]);
  v = (Object_Boxed__Set)i0;
  i1 = value;
  *(OOC_UINT32*)(_check_pointer(i0, 7533)) = i1;
  return (Object_Boxed__Set)i0;
  ;
}

OOC_CHAR8 Object_Boxed__SetDesc_Equals(Object_Boxed__Set v, Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7645)))), &_td_Object_Boxed__SetDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i0 = *(OOC_UINT32*)(_check_pointer(i0, 7666));
  i1 = *(OOC_UINT32*)(_check_pointer(i1, 7676));
  return (i0==i1);
l4:
  _failed_function(7598); return 0;
  ;
}

OOC_INT32 Object_Boxed__SetDesc_Cmp(Object_Boxed__Set v, Object__Object y) {

  _assert(OOC_FALSE, 127, 7789);
  return -1;
  ;
}

OOC_INT32 Object_Boxed__SetDesc_HashCode(Object_Boxed__Set v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT32*)(_check_pointer(i0, 7917));
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, i0));
  ;
}

static void Object_Boxed__SetToString(OOC_UINT32 val, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_CHAR8 num[8];

  _copy_8((const void*)"{",(void*)(OOC_INT32)str,str_0d);
  i0 = val;
  i1=(OOC_INT32)0;i2=OOC_FALSE;
l1_loop:
  i3 = _in(i1,i0);
  if (i3) goto l4;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l32;
l4:
  i3 = i1<31;
  if (i3) goto l7;
  i3=OOC_FALSE;
  goto l9;
l7:
  i3 = _in((i1+1),i0);
  
l9:
  if (i3) goto l11;
  i3=i1;
  goto l22;
l11:
  i3=i1;
l12_loop:
  i3 = i3+1;
  i4 = i3<31;
  if (i4) goto l15;
  i4=OOC_FALSE;
  goto l17;
l15:
  i4 = _in((i3+1),i0);
  
l17:
  if (i4) goto l12_loop;
l22:
  if (!i2) goto l24;
  Strings__Append(",", 2, (void*)(OOC_INT32)str, str_0d);
l24:
  IntStr__IntToStr(i1, (void*)(OOC_INT32)num, 8);
  Strings__Append((void*)(OOC_INT32)num, 8, (void*)(OOC_INT32)str, str_0d);
  i2 = i1<i3;
  if (!i2) goto l31;
  i1 = i3==(i1+1);
  if (i1) goto l29;
  Strings__Append("..", 3, (void*)(OOC_INT32)str, str_0d);
  goto l30;
l29:
  Strings__Append(",", 2, (void*)(OOC_INT32)str, str_0d);
l30:
  IntStr__IntToStr(i3, (void*)(OOC_INT32)num, 8);
  Strings__Append((void*)(OOC_INT32)num, 8, (void*)(OOC_INT32)str, str_0d);
l31:
  i2=i3;i1=OOC_TRUE;
l32:
  i2 = i2+1;
  i3 = i2<=31;
  if (!i3) goto l36;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l1_loop;
l36:
  Strings__Append("}", 2, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

Object__String Object_Boxed__SetDesc_ToString(Object_Boxed__Set v) {
  register OOC_INT32 i0;
  OOC_CHAR8 str[131];

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT32*)(_check_pointer(i0, 8878));
  Object_Boxed__SetToString(i0, (void*)(OOC_INT32)str, 131);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 131);
  return (Object__String)i0;
  ;
}

void Object_Boxed__SetDesc_Store(Object_Boxed__Set v, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  i1 = *(OOC_UINT32*)(_check_pointer(i1, 9011));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9000)))), BinaryRider__WriterDesc_WriteSet)),BinaryRider__WriterDesc_WriteSet)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void Object_Boxed__SetDesc_Load(Object_Boxed__Set v, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9093)))), BinaryRider__ReaderDesc_ReadSet)),BinaryRider__ReaderDesc_ReadSet)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 9103)));
  return;
  ;
}

Object_Boxed__String Object_Boxed__NewString(Object__String value) {
  register OOC_INT32 i0,i1;
  Object_Boxed__String v;

  i0 = (OOC_INT32)value;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9306));
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  v = (Object_Boxed__String)i1;
  *(OOC_INT32*)(_check_pointer(i1, 9381)) = i0;
  return (Object_Boxed__String)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Object_Boxed__emptyString;
  return (Object_Boxed__String)i0;
l4:
  _failed_function(9225); return 0;
  ;
}

OOC_INT32 Object_Boxed__StringDesc_Cmp(Object_Boxed__String v, Object__Object str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9514));
  i2 = (OOC_INT32)str;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9533)))), &_td_Object_Boxed__StringDesc, 9533)), 9540));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9514));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9520)))), Object__StringDesc_Compare)),Object__StringDesc_Compare)((Object__String)i0, (Object__Object)i2);
  return i0;
  ;
}

OOC_CHAR8 Object_Boxed__StringDesc_Equals(Object_Boxed__String v, Object__Object y) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9638)))), &_td_Object_Boxed__StringDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9652));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9670)))), &_td_Object_Boxed__StringDesc, 9670)), 9677));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9652));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9659)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i1, (Object__Object)i0);
  
l4:
  return i0;
  ;
}

OOC_INT32 Object_Boxed__StringDesc_HashCode(Object_Boxed__String v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9768));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9768));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9775)))), Object__StringDesc_HashCode)),Object__StringDesc_HashCode)((Object__String)i0);
  return i0;
  ;
}

Object__String Object_Boxed__StringDesc_ToString(Object_Boxed__String v) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;
  OOC_CHAR8 delim[2];
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9958));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9958));
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9965)))), Object__StringDesc_IndexOf)),Object__StringDesc_IndexOf)((Object__String)i2, (OOC_CHAR8)'"', 0);
  i = i1;
  i1 = i1<0;
  if (i1) goto l3;
  _copy_8((const void*)"\047",(void*)(OOC_INT32)delim,2);
  goto l4;
l3:
  _copy_8((const void*)"\"",(void*)(OOC_INT32)delim,2);
l4:
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)delim, 2);
  i1 = (OOC_INT32)ADT_StringBuffer__New((Object__String)i1);
  sb = (ADT_StringBuffer__StringBuffer)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10126));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10117)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10141)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i1, (void*)(OOC_INT32)delim, 2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10176)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i1);
  return (Object__String)i0;
  ;
}

void Object_Boxed__StringDesc_Store(Object_Boxed__String v, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10280));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10269)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

void Object_Boxed__StringDesc_Load(Object_Boxed__String v, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10365)))), BinaryRider__ReaderDesc_ReadStr)),BinaryRider__ReaderDesc_ReadStr)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 10375)));
  return;
  ;
}

Object_Boxed__String Object_Boxed__ParseString(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 10514)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 10514)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = i0>=2;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 10572)));
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 10581)));
  i1 = i1==i2;
  
l14:
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l22;
l16:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 10595)));
  i1 = i1==(OOC_CHAR8)'"';
  if (i1) goto l19;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 10613)));
  i1 = i1==(OOC_CHAR8)'\047';
  
  goto l22;
l19:
  i1=OOC_TRUE;
l22:
  if (i1) goto l24;
  return (Object_Boxed__String)(OOC_INT32)0;
  goto l25;
l24:
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)str, str_0d, 1, (i0-1));
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  return (Object_Boxed__String)i0;
l25:
  _failed_function(10407); return 0;
  ;
}

void OOC_Object_Boxed_init(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Object_Boxed__NewBoolean(OOC_TRUE);
  Object_Boxed__true = (Object_Boxed__Boolean)i0;
  i0 = (OOC_INT32)Object__NewLatin1("TRUE", 5);
  Object_Boxed__trueString = (Object__String)i0;
  i0 = (OOC_INT32)Object_Boxed__NewBoolean(OOC_FALSE);
  Object_Boxed__false = (Object_Boxed__Boolean)i0;
  i0 = (OOC_INT32)Object__NewLatin1("FALSE", 6);
  Object_Boxed__falseString = (Object__String)i0;
  i0 = (OOC_INT32)Object_Boxed__NewLongReal(0.0000000000000000);
  Object_Boxed__zeroLongReal = (Object_Boxed__LongReal)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  Object_Boxed__emptyString = (Object_Boxed__String)i0;
  i1 = (OOC_INT32)Object__NewLatin1("", 1);
  *(OOC_INT32*)(_check_pointer(i0, 10996)) = i1;
  return;
  ;
}

/* --- */
