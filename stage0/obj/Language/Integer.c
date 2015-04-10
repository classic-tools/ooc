#include "Language/Integer.d"
#include "__oo2c.h"

static Language_Integer__Value Language_Integer__NewInt(Integers__Integer val) {
  register OOC_INT32 i0,i1;
  Language_Integer__Value v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Integer__Value.baseTypes[0]);
  v = (Language_Integer__Value)i0;
  i1 = (OOC_INT32)Language_Integer__type;
  Language__InitValue((Language__Value)i0, (Language__Type)i1);
  i1 = (OOC_INT32)val;
  *(OOC_INT32*)((_check_pointer(i0, 559))+4) = i1;
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__NewDistinct(OOC_INT32 l) {
  register OOC_INT32 i0;

  i0 = l;
  i0 = (OOC_INT32)Integers__Long(i0);
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__New(OOC_INT32 l) {
  register OOC_INT32 i0;

  i0 = l;
  switch (i0) {
  case 0:
    i0 = (OOC_INT32)Language_Integer__zero;
    return (Language_Integer__Value)i0;
    goto l6;
  case 1:
    i0 = (OOC_INT32)Language_Integer__one;
    return (Language_Integer__Value)i0;
    goto l6;
  case -1:
    i0 = (OOC_INT32)Language_Integer__minus1;
    return (Language_Integer__Value)i0;
    goto l6;
  default:
    i0 = (OOC_INT32)Integers__Long(i0);
    i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
    return (Language_Integer__Value)i0;
    goto l6;
  }
l6:
  _failed_function(880); return 0;
  ;
}

Language_Integer__Value Language_Integer__NewString(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  Integers__Integer i;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  Integers__ConvertFromString((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&i);
  i0 = (OOC_INT32)i;
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

void Language_Integer__ValueDesc_Store(Language_Integer__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Store((Language__Value)i1, (ADT_Object__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1341))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 1348)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1323)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1377))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 1384)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1412))+4);
  i4 = _check_pointer(i4, 1419);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 1419))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1399)))), BinaryRider__WriterDesc_WriteInt)),BinaryRider__WriterDesc_WriteInt)((BinaryRider__Writer)i0, i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void Language_Integer__ValueDesc_Load(Language_Integer__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Load((Language__Value)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1553)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 1580))+4) = ((OOC_INT32)RT0__NewObject(_td_Integers__Integer.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1641))+4);
  i4 = _check_pointer(i4, 1648);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1629)))), BinaryRider__ReaderDesc_ReadInt)),BinaryRider__ReaderDesc_ReadInt)((BinaryRider__Reader)i0, (void*)(i4+(_check_index(i3, i5, OOC_UINT32, 1648))*2));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

OOC_CHAR8 Language_Integer__ValueDesc_Equals(Language_Integer__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1756)))), &_td_Language_Integer__ValueDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1788)))), &_td_Language_Integer__ValueDesc, 1788)), 1794))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1803))+4);
  i0 = Integers__Compare((Integers__Integer)i0, (Integers__Integer)i1);
  i0 = i0==0;
  
l4:
  return i0;
  ;
}

OOC_INT32 Language_Integer__ValueDesc_HashCode(Language_Integer__Value v) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 h;
  OOC_INT32 i;

  h = 0;
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2111))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2117)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=0;i3=0;
l4_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2140))+4);
  i4 = _check_pointer(i4, 2147);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 2147))*2);
  i2 = i2+i4;
  h = i2;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l4_loop;
l8:
  i0=i2;
l9:
  return i0;
  ;
}

ADT_String__String Language_Integer__ValueDesc_ToString(Language_Integer__Value v) {
  register OOC_INT32 i0;
  OOC_CHAR8 str[128];

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2321))+4);
  Integers__ConvertToString((Integers__Integer)i0, (void*)(OOC_INT32)str, 128);
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 128);
  return (ADT_String__String)i0;
  ;
}

OOC_INT32 Language_Integer__ValueDesc_ToInt(Language_Integer__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2452))+4);
  i0 = Integers__Short((Integers__Integer)i0);
  return i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Sum(Language_Integer__Value v, Language_Integer__Value right) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2564))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2577))+4);
  i0 = (OOC_INT32)Integers__Sum((Integers__Integer)i0, (Integers__Integer)i1);
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Difference(Language_Integer__Value v, Language_Integer__Value right) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2699))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2712))+4);
  i0 = (OOC_INT32)Integers__Difference((Integers__Integer)i0, (Integers__Integer)i1);
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Product(Language_Integer__Value v, Language_Integer__Value right) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2835))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2848))+4);
  i0 = (OOC_INT32)Integers__Product((Integers__Integer)i0, (Integers__Integer)i1);
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Quotient(Language_Integer__Value v, Language_Integer__Value right) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2970))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2983))+4);
  i0 = (OOC_INT32)Integers__Quotient((Integers__Integer)i0, (Integers__Integer)i1);
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Remainder(Language_Integer__Value v, Language_Integer__Value right) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3108))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3121))+4);
  i0 = (OOC_INT32)Integers__Remainder((Integers__Integer)i0, (Integers__Integer)i1);
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Ash(Language_Integer__Value v, Language_Integer__Value exp) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3237))+4);
  i0 = Integers__Short((Integers__Integer)i0);
  i1 = (OOC_INT32)exp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3264))+4);
  i1 = Integers__Short((Integers__Integer)i1);
  i0 = (OOC_INT32)Language_Integer__New((_ash(i0,i1)));
  return (Language_Integer__Value)i0;
  ;
}

OOC_INT32 Language_Integer__ValueDesc_Compare(Language_Integer__Value v, ADT_Object__Object right) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3384))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3398)))), &_td_Language_Integer__ValueDesc, 3398)), 3404))+4);
  i0 = Integers__Compare((Integers__Integer)i0, (Integers__Integer)i1);
  return i0;
  ;
}

OOC_INT32 Language_Integer__ValueDesc_Sign(Language_Integer__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3499))+4);
  i0 = Integers__Sign((Integers__Integer)i0);
  return i0;
  ;
}

Language_Integer__Value Language_Integer__ValueDesc_Negate(Language_Integer__Value v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)Language_Integer__minus1;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3577)))), Language_Integer__ValueDesc_Product)),Language_Integer__ValueDesc_Product)((Language_Integer__Value)i0, (Language_Integer__Value)i1);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__TypeDesc_Value(Language_Integer__Type t, OOC_INT32 val) {
  register OOC_INT32 i0;

  i0 = val;
  i0 = (OOC_INT32)Language_Integer__New(i0);
  return (Language_Integer__Value)i0;
  ;
}

Language_Integer__Value Language_Integer__TypeDesc_ValueOf(Language_Integer__Type t, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)
  Integers__Integer val;

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  Integers__ConvertFromString((void*)(OOC_INT32)s, s_0d, (void*)(OOC_INT32)&val);
  i0 = (OOC_INT32)val;
  i0 = (OOC_INT32)Language_Integer__NewInt((Integers__Integer)i0);
  return (Language_Integer__Value)i0;
  ;
}

ADT_String__String Language_Integer__TypeDesc_ToString(Language_Integer__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_Integer__typeName;
  return (ADT_String__String)i0;
  ;
}

void OOC_Language_Integer_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Integer__Type.baseTypes[0]);
  Language_Integer__type = (Language_Integer__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("Integer", 8);
  Language_Integer__typeName = (ADT_String__String)i0;
  i0 = (OOC_INT32)Language_Integer__NewDistinct(0);
  Language_Integer__zero = (Language_Integer__Value)i0;
  i0 = (OOC_INT32)Language_Integer__NewDistinct(1);
  Language_Integer__one = (Language_Integer__Value)i0;
  i0 = (OOC_INT32)Language_Integer__NewDistinct(-1);
  Language_Integer__minus1 = (Language_Integer__Value)i0;
  return;
  ;
}

/* --- */
