#include "OOC/SymbolTable/TypeRules.d"
#include "__oo2c.h"

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNamedType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1519)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 1504);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1554))+20);
  return (i0!=(OOC_INT32)0);
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1782)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1813)))), &_td_OOC_SymbolTable__PredefTypeDesc, 1813)), 1824))+32);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsScalarType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2138)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2177)))), &_td_OOC_SymbolTable__PointerDesc);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2213)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l8;
l7:
  i0=OOC_TRUE;
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2391)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2429))+32);
  return (_in(i0,6));
l4:
  _failed_function(2263); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2667)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2705))+32);
  return (_in(i0,12288));
l4:
  _failed_function(2535); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsSTRING(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Record r;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3023)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3051)))), &_td_OOC_SymbolTable__PointerDesc, 3051)), 3059))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3070)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l29;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3110)))), &_td_OOC_SymbolTable__PointerDesc, 3110)), 3118))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3133)))), &_td_OOC_SymbolTable__RecordDesc, 3133);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3156))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l16;
l11_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3191))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3206)))), &_td_OOC_SymbolTable__RecordDesc, 3206);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3156))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l11_loop;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3241))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l21;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3273))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3284))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3289))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3293)),(const void*)"StringDesc"))==0;
  
l21:
  if (i1) goto l23;
  i1=OOC_FALSE;
  goto l25;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3324))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3335))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3343)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l25:
  if (i1) goto l27;
  i0=OOC_FALSE;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3371))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3382))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3394)))), &_td_OOC_SymbolTable__ModuleDesc, 3394)), 3401))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3406))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3410)),(const void*)"Language:String0"))==0;
  
l28:
  return i0;
l29:
  _failed_function(2826); return 0;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_TypeRules__BaseCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3959)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4236)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l5;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l17;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4265))+36);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4279)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l8;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l17;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4336))+36);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__PredefType)i0;
  goto l17;
l11:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 3994))+32);
  switch (i0) {
  case 1:
  case 12:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    return (OOC_SymbolTable__PredefType)i0;
    goto l17;
  case 2:
  case 13:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    return (OOC_SymbolTable__PredefType)i0;
    goto l17;
  default:
    return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
    goto l17;
  }
l17:
  _failed_function(3500); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__StringBase(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4570)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4560)))), 4560);
  goto l9;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4603))+32);
  switch (i0) {
  case 12:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    return (OOC_SymbolTable__Type)i0;
    goto l9;
  case 13:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    return (OOC_SymbolTable__Type)i0;
    goto l9;
  default:
    _failed_case(i0, 4594);
    goto l9;
  }
l9:
  _failed_function(4461); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__MatchingStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_INT16 id;

  i0 = (OOC_INT32)type;
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4890)))), &_td_OOC_SymbolTable__PredefTypeDesc, 4890)), 4901))+32);
  switch (i0) {
  case 1:
    id = 12;
    goto l5;
  case 2:
    id = 13;
    goto l5;
  default:
    _failed_case(i0, 4876);
    goto l5;
  }
l5:
  i0 = id;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsIntegerType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5203)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5241))+32);
  return (_in(i0,120));
l4:
  _failed_function(5073); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRealType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5487)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5525))+32);
  return (_in(i0,384));
l4:
  _failed_function(5354); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNumericType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i0 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i0);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsSetType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5951)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5989))+32);
  return (_in(i0,512));
l4:
  _failed_function(5830); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IncludesType(OOC_SymbolTable__Type large, OOC_SymbolTable__Type small) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 largeId;

  i0 = (OOC_INT32)large;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6475)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)small;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6503)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  
l5:
  if (!i1) goto l30;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6554)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6554)), 6565))+32);
  largeId = i1;
  i2 = (OOC_INT32)small;
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6597)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6597)), 6608))+32);
  i4 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i0);
  if (i4) goto l24;
  i4 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  if (i4) goto l18;
  i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
  if (!i0) goto l30;
  i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i0) goto l15;
  i0=OOC_FALSE;
  goto l16;
l15:
  i0 = i3<=i1;
  
l16:
  return i0;
  goto l30;
l18:
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i0) goto l21;
  i0=OOC_FALSE;
  goto l22;
l21:
  i0 = i3<=i1;
  
l22:
  return i0;
  goto l30;
l24:
  i0 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i2);
  if (i0) goto l27;
  i0=OOC_FALSE;
  goto l28;
l27:
  i0 = i3<=i1;
  
l28:
  return i0;
l30:
  return OOC_FALSE;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsOpenArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7154)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 7139);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7190)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7215)))), &_td_OOC_SymbolTable__ArrayDesc, 7215)), 7221))+32);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayOfChar(OOC_SymbolTable__Type type, OOC_CHAR8 includeFixed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7575)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 7560);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7619)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l9;
l3:
  i1 = includeFixed;
  if (i1) goto l6;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7669)))), &_td_OOC_SymbolTable__ArrayDesc, 7669)), 7675))+32);
  
  goto l9;
l6:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i0=OOC_FALSE;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7721)))), &_td_OOC_SymbolTable__ArrayDesc, 7721)), 7727))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l12:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRecordBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7963)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7989)))), &_td_OOC_SymbolTable__RecordDesc, 7989)), 7996))+50);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidParameterType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8244)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8229);
  i1 = OOC_SymbolTable_TypeRules__IsNamedType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8350)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l8;
l7:
  i0=OOC_TRUE;
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidReceiverType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8593)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8578);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8635)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8665)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l5;
  i0=OOC_FALSE;
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8693)))), &_td_OOC_SymbolTable__PointerDesc, 8693)), 8701))+32);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8712)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l8;
l7:
  i0=OOC_TRUE;
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidResultType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = OOC_SymbolTable_TypeRules__IsScalarType((OOC_SymbolTable__Type)i0);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidPointerBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9295)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9318)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidArrayElementType(OOC_SymbolTable__Type type, OOC_CHAR8 isOpenArray) {
  register OOC_INT32 i0,i1;

  i0 = isOpenArray;
  if (i0) goto l7;
  i0 = (OOC_INT32)type;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9712)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i1) goto l5;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9739)))), &_td_OOC_SymbolTable__ArrayDesc, 9739)), 9745))+32);
  i0 = !i0;
  
  goto l6;
l5:
  i0=OOC_TRUE;
l6:
  return i0;
  goto l8;
l7:
  return OOC_TRUE;
l8:
  _failed_function(9374); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidCaseSelector(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__VariableInstance(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10324)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10352)))), &_td_OOC_SymbolTable__RecordDesc, 10352)), 10359))+49);
  i0 = !i0;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__SameType(OOC_SymbolTable__Type a, OOC_SymbolTable__Type b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i1 = i0==i1;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  i0 = !i0;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__EqualTypes(OOC_SymbolTable__Type a, OOC_SymbolTable__Type b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  if (i2) goto l11;
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  if (i2) goto l5;
  i2=OOC_FALSE;
  goto l7;
l5:
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
  
l7:
  if (i2) goto l9;
  i2=OOC_FALSE;
  goto l13;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11038)))), &_td_OOC_SymbolTable__ArrayDesc, 11038)), 11044))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11095)))), &_td_OOC_SymbolTable__ArrayDesc, 11095)), 11101))+36);
  i2 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  
  goto l13;
l11:
  i2=OOC_TRUE;
l13:
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11133)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l19;
l17:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11157)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
l19:
  if (i2) goto l21;
  i0=OOC_FALSE;
  goto l24;
l21:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11216)))), &_td_OOC_SymbolTable__FormalParsDesc, 11216)), (OOC_SymbolTable__FormalPars)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11235)))), &_td_OOC_SymbolTable__FormalParsDesc, 11235)), OOC_FALSE);
  
  goto l24;
l23:
  i0=OOC_TRUE;
l24:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsExtensionOf(OOC_SymbolTable__Type type, OOC_SymbolTable__Type base) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11571)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11595)))), &_td_OOC_SymbolTable__PointerDesc);
  
l5:
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11639)))), &_td_OOC_SymbolTable__PointerDesc, 11639)), 11647))+32);
  type = (OOC_SymbolTable__Type)i0;
  i0 = (OOC_INT32)base;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11682)))), &_td_OOC_SymbolTable__PointerDesc, 11682)), 11690))+32);
  base = (OOC_SymbolTable__Type)i0;
l7:
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11723)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11746)))), &_td_OOC_SymbolTable__RecordDesc);
  
l12:
  if (!i1) goto l34;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l16;
  i0=OOC_FALSE;
  goto l18;
l16:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11909)))), &_td_OOC_SymbolTable__RecordDesc);
  
l18:
  if (!i0) goto l34;
  i0 = (OOC_INT32)base;
l20_loop:
  i1 = (OOC_INT32)type;
  i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  if (i2) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12028)))), &_td_OOC_SymbolTable__RecordDesc, 12028)), 12035))+32);
  type = (OOC_SymbolTable__Type)i1;
  goto l24;
l23:
  return OOC_TRUE;
l24:
  i1 = (OOC_INT32)type;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l27;
  i1=OOC_FALSE;
  goto l29;
l27:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11909)))), &_td_OOC_SymbolTable__RecordDesc);
  
l29:
  if (i1) goto l20_loop;
l34:
  return OOC_FALSE;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__FormalParamsMatch(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars, OOC_CHAR8 allowExtendedResult) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12763))+44);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12790))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12771)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 12798)), 0);
  i1 = i1!=i3;
  if (i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12847))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12879))+36);
  i1 = (i1==(OOC_INT32)0)!=(i3==(OOC_INT32)0);
  if (i1) goto l52;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12944))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = allowExtendedResult;
  i1 = !i1;
  
l9:
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13033))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13056))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  i1 = !i1;
  
l13:
  if (i1) goto l50;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13114))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l17;
  i1=OOC_FALSE;
  goto l19;
l17:
  i1 = allowExtendedResult;
  
l19:
  if (i1) goto l21;
  i1=OOC_FALSE;
  goto l27;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13200))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13223))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13276))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13299))+36);
  i1 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  
  goto l25;
l24:
  i1=OOC_TRUE;
l25:
  i1 = !i1;
  
l27:
  if (i1) goto l48;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 13358))+48);
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 13389))+48);
  i1 = i1!=i3;
  if (i1) goto l46;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13477))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13485)), 0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l45;
  i3=0;
l33_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13514))+44);
  i4 = _check_pointer(i4, 13522);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13522))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13562))+44);
  i5 = _check_pointer(i5, 13570);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13570))*4);
  i4 = *(OOC_UINT8*)((_check_pointer(i4, 13525))+50);
  i5 = *(OOC_UINT8*)((_check_pointer(i5, 13573))+50);
  i4 = i4!=i5;
  if (i4) goto l36;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13623))+44);
  i4 = _check_pointer(i4, 13631);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13631))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13680))+44);
  i5 = _check_pointer(i5, 13688);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13688))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 13634))+40);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13691))+40);
  i4 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  i4 = !i4;
  
  goto l38;
l36:
  i4=OOC_TRUE;
l38:
  if (!i4) goto l40;
  return OOC_FALSE;
l40:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l33_loop;
l45:
  return OOC_TRUE;
  goto l55;
l46:
  return OOC_FALSE;
  goto l55;
l48:
  return OOC_FALSE;
  goto l55;
l50:
  return OOC_FALSE;
  goto l55;
l52:
  return OOC_FALSE;
  goto l55;
l54:
  return OOC_FALSE;
l55:
  _failed_function(12126); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRedefinition(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14043))+32);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14077))+32);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 14053))+50);
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 14087))+50);
  i1 = i1==i3;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)i0, (OOC_SymbolTable__FormalPars)i2, OOC_TRUE);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidForwardDecl(OOC_SymbolTable__FormalPars forward, OOC_SymbolTable__FormalPars proc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)forward;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14394))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)proc;
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)i1, (OOC_SymbolTable__FormalPars)i0, OOC_FALSE);
  return i0;
  goto l4;
l3:
  i1 = (OOC_INT32)proc;
  i0 = OOC_SymbolTable_TypeRules__IsValidRedefinition((OOC_SymbolTable__FormalPars)i1, (OOC_SymbolTable__FormalPars)i0);
  return i0;
l4:
  _failed_function(14194); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14706)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 14691);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14742)))), &_td_OOC_SymbolTable__ArrayDesc));
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayCompatible(OOC_SymbolTable__Type argType, OOC_SymbolTable__Type fparType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fparType;
  i0 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = (OOC_INT32)argType;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15290)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l5:
  if (!i0) goto l16;
l7_loop:
  i0 = (OOC_INT32)argType;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15336)))), &_td_OOC_SymbolTable__ArrayDesc, 15336)), 15342))+36);
  argType = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)fparType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15388)))), &_td_OOC_SymbolTable__ArrayDesc, 15388)), 15394))+36);
  fparType = (OOC_SymbolTable__Type)i1;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
  if (i1) goto l10;
  i0=OOC_FALSE;
  goto l12;
l10:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15290)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l12:
  if (i0) goto l7_loop;
l16:
  i0 = (OOC_INT32)argType;
  i1 = (OOC_INT32)fparType;
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsComponentOf(OOC_SymbolTable__Type subType, OOC_SymbolTable__Type superType, OOC_CHAR8 arrayCompat) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Item field;

  i0 = (OOC_INT32)superType;
  i1 = (OOC_INT32)subType;
  i2 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  if (i2) goto l3;
  i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
  goto l5;
l3:
  i2=OOC_TRUE;
l5:
  if (i2) goto l45;
  i2 = arrayCompat;
  if (i2) goto l9;
  i3=OOC_FALSE;
  goto l11;
l9:
  i3 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  
l11:
  if (i3) goto l43;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16125)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l41;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16278)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i3) goto l17;
  return OOC_FALSE;
  goto l46;
l17:
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l39;
l20_loop:
  i0 = (OOC_INT32)superType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16415))+8);
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l34;
l23_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16481)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l29;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16544))+40);
  i4 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4, i2);
  if (!i4) goto l29;
  return OOC_TRUE;
l29:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 16714));
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l23_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16775)))), &_td_OOC_SymbolTable__RecordDesc, 16775)), 16782))+32);
  superType = (OOC_SymbolTable__Type)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l20_loop;
l39:
  return OOC_FALSE;
  goto l46;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16195)))), &_td_OOC_SymbolTable__ArrayDesc, 16195)), 16201))+36);
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, i2);
  return i0;
  goto l46;
l43:
  return OOC_TRUE;
  goto l46;
l45:
  return OOC_TRUE;
l46:
  _failed_function(15493); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsByteCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17058)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l8;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 17096))+32);
  i1 = i1==1;
  if (i1) goto l6;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 17124))+32);
  i0 = i0==3;
  
  goto l7;
l6:
  i0=OOC_TRUE;
l7:
  return i0;
l8:
  _failed_function(16891); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNilCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17450)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17544)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l9;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17590)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i0) goto l7;
  return OOC_FALSE;
  goto l16;
l7:
  return OOC_TRUE;
  goto l16;
l9:
  return OOC_TRUE;
  goto l16;
l11:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 17488))+32);
  i1 = i1==11;
  if (i1) goto l14;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 17515))+32);
  i0 = i0==14;
  
  goto l15;
l14:
  i0=OOC_TRUE;
l15:
  return i0;
l16:
  _failed_function(17222); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnly(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 17915))+24);
  i1 = i1==2;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17965)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)usingModule;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable_TypeRules__AllocateType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_INT16 align;
  OOC_INT32 size;
  OOC_INT16 maxAlign;
  OOC_SymbolTable__Item nested;
  OOC_INT16 fieldAlign;

  i0 = (OOC_INT32)type;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 19002))+24);
  i1 = i1==-2;
  if (!i1) goto l75;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19158)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l73;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19536)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l60;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19943)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l54;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20257)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20251)))), 20251);
  goto l75;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20362))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20527))+32);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20563))+32);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 20573))+28);
  align = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20604))+32);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 20614))+24);
  size = i2;
  
  goto l15;
l14:
  align = 1;
  size = 0;
  i1=1;i2=0;
l15:
  maxAlign = 32767;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21030))+8);
  nested = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l18;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l48;
l18:
  {register OOC_INT32 h0=i1;i1=i3;i3=i2;i2=h0;}
l19_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21098)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l43;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21149))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21190))+40);
  i4 = *(OOC_INT16*)((_check_pointer(i4, 21196))+28);
  fieldAlign = i4;
  i5 = i4>32767;
  if (!i5) goto l26;
  fieldAlign = 32767;
  i4=32767;
l26:
  i5 = i4>i2;
  if (!i5) goto l30;
  align = i4;
  i2=i4;
l30:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 21518))+48);
  if (i5) goto l37;
  i5 = _mod(i3,i4);
  i6 = i5!=0;
  if (!i6) goto l36;
  i3 = i3+(i4-i5);
  size = i3;
  
l36:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22150)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22201))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 22207))+24);
  i3 = i3+i4;
  size = i3;
  
  goto l43;
l37:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21707)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21748))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 21754))+24);
  i4 = i4>i3;
  if (!i4) goto l43;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21804))+40);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 21810))+24);
  size = i3;
  
l43:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22301));
  nested = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l19_loop;
l47:
  i1=i3;
l48:
  i3 = _mod(i1,i2);
  i4 = i3!=0;
  if (i4) goto l51;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22530)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l75;
l51:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22454)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, ((i1+i2)-i3), i2);
  goto l75;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19984))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 20015))+32);
  if (i1) goto l57;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20158))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20208))+36);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 20145))+44);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 20171))+24);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 20221))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20130)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (i3*i1), i2);
  goto l75;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20080))+36);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 20093))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20048)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, -1, i1);
  goto l75;
l60:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 19597);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(11, i3, OOC_UINT8, 19597))*4);
  i1 = _check_pointer(i1, 19657);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(11, i3, OOC_UINT8, 19657))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 19609))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 19669))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19568)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19731))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l63;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19782))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19792))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
l63:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19845))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19853)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l75;
  i2=0;
l66_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19889))+44);
  i3 = _check_pointer(i3, 19897);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 19897))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19900))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i3);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l66_loop;
  goto l75;
l73:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 19216);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(11, i3, OOC_UINT8, 19216))*4);
  i1 = _check_pointer(i1, 19276);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(11, i3, OOC_UINT8, 19276))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 19228))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 19288))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19187)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
l75:
  return;
  ;
}

void OOC_OOC_SymbolTable_TypeRules_init(void) {

  return;
  ;
}

/* --- */
