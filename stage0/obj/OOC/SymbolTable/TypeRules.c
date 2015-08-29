#include <OOC/SymbolTable/TypeRules.d>
#include <__oo2c.h>

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNamedType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1544)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 1529);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1579))+20);
  return (i0!=(OOC_INT32)0);
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1807)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1838)))), &_td_OOC_SymbolTable__PredefTypeDesc, 1838)), 1849))+32);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsScalarType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2163)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2202)))), &_td_OOC_SymbolTable__PointerDesc);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2238)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2416)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2454))+32);
  return (_in(i0,14));
l4:
  _failed_function(2288); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2709)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2747))+32);
  return (_in(i0,57344));
l4:
  _failed_function(2577); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsObject(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Record r;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3093)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3128)))), &_td_OOC_SymbolTable__PointerDesc, 3128)), 3136))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3146)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l29;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3186)))), &_td_OOC_SymbolTable__PointerDesc, 3186)), 3194))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3208)))), &_td_OOC_SymbolTable__RecordDesc, 3208);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3231))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l16;
l11_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3265))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3279)))), &_td_OOC_SymbolTable__RecordDesc, 3279);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3231))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l11_loop;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3314))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l21;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3346))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3357))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3362))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3366)),(const void*)"ObjectDesc"))==(OOC_INT32)0;
  
l21:
  if (i1) goto l23;
  i1=OOC_FALSE;
  goto l25;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3397))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3408))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3416)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l25:
  if (i1) goto l27;
  i0=OOC_FALSE;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3444))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3455))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3467)))), &_td_OOC_SymbolTable__ModuleDesc, 3467)), 3474))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3479))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3483)),(const void*)"Object"))==(OOC_INT32)0;
  
l28:
  return i0;
l29:
  _failed_function(2891); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsSTRING(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Record r;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3760)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3795)))), &_td_OOC_SymbolTable__PointerDesc, 3795)), 3803))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3813)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l37;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3920)))), &_td_OOC_SymbolTable__PointerDesc, 3920)), 3928))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3942)))), &_td_OOC_SymbolTable__RecordDesc, 3942);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3965))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3986))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4000)))), &_td_OOC_SymbolTable__RecordDesc, 4000)), 4007))+32);
  i1 = i1!=(OOC_INT32)0;
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4041))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4055)))), &_td_OOC_SymbolTable__RecordDesc, 4055);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3965))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3986))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4000)))), &_td_OOC_SymbolTable__RecordDesc, 4000)), 4007))+32);
  i1 = i1!=(OOC_INT32)0;
  
l20:
  if (i1) goto l15_loop;
l24:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4090))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1=OOC_FALSE;
  goto l29;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4122))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4133))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4138))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 4142)),(const void*)"StringDesc"))==(OOC_INT32)0;
  
l29:
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4173))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4184))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4192)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l33:
  if (i1) goto l35;
  i0=OOC_FALSE;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4220))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4231))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4243)))), &_td_OOC_SymbolTable__ModuleDesc, 4243)), 4250))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4255))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 4259)),(const void*)"Object"))==(OOC_INT32)0;
  
l36:
  return i0;
l37:
  _failed_function(3563); return 0;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_TypeRules__BaseCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4810)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5184)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l5;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5213))+36);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5227)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l8;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5284))+36);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__PredefType)i0;
  goto l18;
l11:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4845))+32);
  switch (i0) {
  case 1:
  case 13:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    return (OOC_SymbolTable__PredefType)i0;
    goto l18;
  case 2:
  case 14:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    return (OOC_SymbolTable__PredefType)i0;
    goto l18;
  case 3:
  case 15:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
    return (OOC_SymbolTable__PredefType)i0;
    goto l18;
  default:
    return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
    goto l18;
  }
l18:
  _failed_function(4351); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__StringBase(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5518)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5508)))), 5508);
  goto l10;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5551))+32);
  switch (i0) {
  case 13:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    return (OOC_SymbolTable__Type)i0;
    goto l10;
  case 14:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    return (OOC_SymbolTable__Type)i0;
    goto l10;
  case 15:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
    return (OOC_SymbolTable__Type)i0;
    goto l10;
  default:
    _failed_case(i0, 5542);
    goto l10;
  }
l10:
  _failed_function(5409); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__MatchingStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_INT16 id;

  i0 = (OOC_INT32)type;
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5913)))), &_td_OOC_SymbolTable__PredefTypeDesc, 5913)), 5924))+32);
  switch (i0) {
  case 1:
    id = 13;
    goto l6;
  case 2:
    id = 14;
    goto l6;
  case 3:
    id = 15;
    goto l6;
  default:
    _failed_case(i0, 5899);
    goto l6;
  }
l6:
  i0 = id;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsIntegerType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6276)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6314))+32);
  return (_in(i0,240));
l4:
  _failed_function(6146); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRealType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6560)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6598))+32);
  return (_in(i0,768));
l4:
  _failed_function(6427); return 0;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7024)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 7062))+32);
  return (_in(i0,1024));
l4:
  _failed_function(6903); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IncludesType(OOC_SymbolTable__Type large, OOC_SymbolTable__Type small) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 largeId;

  i0 = (OOC_INT32)large;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7548)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)small;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7576)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  
l5:
  if (!i1) goto l30;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7627)))), &_td_OOC_SymbolTable__PredefTypeDesc, 7627)), 7638))+32);
  largeId = i1;
  i2 = (OOC_INT32)small;
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7670)))), &_td_OOC_SymbolTable__PredefTypeDesc, 7670)), 7681))+32);
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
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8227)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8212);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8263)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8288)))), &_td_OOC_SymbolTable__ArrayDesc, 8288)), 8294))+32);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayOfChar(OOC_SymbolTable__Type type, OOC_CHAR8 includeFixed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8648)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8633);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8692)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l9;
l3:
  i1 = includeFixed;
  if (i1) goto l6;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8742)))), &_td_OOC_SymbolTable__ArrayDesc, 8742)), 8748))+32);
  
  goto l9;
l6:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i0=OOC_FALSE;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8794)))), &_td_OOC_SymbolTable__ArrayDesc, 8794)), 8800))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l12:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRecordBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9036)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9062)))), &_td_OOC_SymbolTable__RecordDesc, 9062)), 9069))+50);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidParameterType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9317)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9302);
  i1 = OOC_SymbolTable_TypeRules__IsNamedType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9423)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
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
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9666)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9651);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9708)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9738)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l5;
  i0=OOC_FALSE;
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9766)))), &_td_OOC_SymbolTable__PointerDesc, 9766)), 9774))+32);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9785)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10368)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10391)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10785)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i1) goto l5;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10812)))), &_td_OOC_SymbolTable__ArrayDesc, 10812)), 10818))+32);
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
  _failed_function(10447); return 0;
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
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11397)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11425)))), &_td_OOC_SymbolTable__RecordDesc, 11425)), 11432))+49);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12111)))), &_td_OOC_SymbolTable__ArrayDesc, 12111)), 12117))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12168)))), &_td_OOC_SymbolTable__ArrayDesc, 12168)), 12174))+36);
  i2 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  
  goto l13;
l11:
  i2=OOC_TRUE;
l13:
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12206)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l19;
l17:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12230)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
l19:
  if (i2) goto l21;
  i0=OOC_FALSE;
  goto l24;
l21:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12289)))), &_td_OOC_SymbolTable__FormalParsDesc, 12289)), (OOC_SymbolTable__FormalPars)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12308)))), &_td_OOC_SymbolTable__FormalParsDesc, 12308)), OOC_FALSE);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12644)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12668)))), &_td_OOC_SymbolTable__PointerDesc);
  
l5:
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12712)))), &_td_OOC_SymbolTable__PointerDesc, 12712)), 12720))+32);
  type = (OOC_SymbolTable__Type)i0;
  i0 = (OOC_INT32)base;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12755)))), &_td_OOC_SymbolTable__PointerDesc, 12755)), 12763))+32);
  base = (OOC_SymbolTable__Type)i0;
l7:
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12796)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12819)))), &_td_OOC_SymbolTable__RecordDesc);
  
l12:
  if (!i1) goto l34;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l16;
  i0=OOC_FALSE;
  goto l18;
l16:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12982)))), &_td_OOC_SymbolTable__RecordDesc);
  
l18:
  if (!i0) goto l34;
  i0 = (OOC_INT32)base;
l20_loop:
  i1 = (OOC_INT32)type;
  i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  if (i2) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13101)))), &_td_OOC_SymbolTable__RecordDesc, 13101)), 13108))+32);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12982)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13836))+44);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13863))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13844)), (OOC_INT32)0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13871)), (OOC_INT32)0);
  i1 = i1!=i3;
  if (i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13920))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13952))+36);
  i1 = (i1==(OOC_INT32)0)!=(i3==(OOC_INT32)0);
  if (i1) goto l52;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14017))+36);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14106))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14129))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  i1 = !i1;
  
l13:
  if (i1) goto l50;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14187))+36);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14273))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14296))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14349))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14372))+36);
  i1 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  
  goto l25;
l24:
  i1=OOC_TRUE;
l25:
  i1 = !i1;
  
l27:
  if (i1) goto l48;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 14431))+48);
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 14462))+48);
  i1 = i1!=i3;
  if (i1) goto l46;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14550))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14558)), (OOC_INT32)0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l45;
  i3=0;
l33_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14587))+44);
  i4 = _check_pointer(i4, 14595);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14595))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14635))+44);
  i5 = _check_pointer(i5, 14643);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 14643))*4);
  i4 = *(OOC_UINT8*)((_check_pointer(i4, 14598))+50);
  i5 = *(OOC_UINT8*)((_check_pointer(i5, 14646))+50);
  i4 = i4!=i5;
  if (i4) goto l36;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14696))+44);
  i4 = _check_pointer(i4, 14704);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14704))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14753))+44);
  i5 = _check_pointer(i5, 14761);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 14761))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14707))+40);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14764))+40);
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
  _failed_function(13199); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRedefinition(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15116))+32);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15150))+32);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 15126))+50);
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 15160))+50);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15467))+32);
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
  _failed_function(15267); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15779)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 15764);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15815)))), &_td_OOC_SymbolTable__ArrayDesc));
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
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16363)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l5:
  if (!i0) goto l16;
l7_loop:
  i0 = (OOC_INT32)argType;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16409)))), &_td_OOC_SymbolTable__ArrayDesc, 16409)), 16415))+36);
  argType = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)fparType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16461)))), &_td_OOC_SymbolTable__ArrayDesc, 16461)), 16467))+36);
  fparType = (OOC_SymbolTable__Type)i1;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
  if (i1) goto l10;
  i0=OOC_FALSE;
  goto l12;
l10:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16363)))), &_td_OOC_SymbolTable__ArrayDesc);
  
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
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17198)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l41;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17351)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i3) goto l17;
  return OOC_FALSE;
  goto l46;
l17:
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l39;
l20_loop:
  i0 = (OOC_INT32)superType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17488))+8);
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l34;
l23_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17554)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l29;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17617))+40);
  i4 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4, i2);
  if (!i4) goto l29;
  return OOC_TRUE;
l29:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17787));
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l23_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17848)))), &_td_OOC_SymbolTable__RecordDesc, 17848)), 17855))+32);
  superType = (OOC_SymbolTable__Type)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l20_loop;
l39:
  return OOC_FALSE;
  goto l46;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17268)))), &_td_OOC_SymbolTable__ArrayDesc, 17268)), 17274))+36);
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, i2);
  return i0;
  goto l46;
l43:
  return OOC_TRUE;
  goto l46;
l45:
  return OOC_TRUE;
l46:
  _failed_function(16566); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsByteCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18131)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l8;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 18169))+32);
  i1 = i1==1;
  if (i1) goto l6;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 18197))+32);
  i0 = i0==4;
  
  goto l7;
l6:
  i0=OOC_TRUE;
l7:
  return i0;
l8:
  _failed_function(17964); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNilCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18523)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18617)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l9;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18663)))), &_td_OOC_SymbolTable__FormalParsDesc);
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
  i1 = *(OOC_INT16*)((_check_pointer(i0, 18561))+32);
  i1 = i1==12;
  if (i1) goto l14;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 18588))+32);
  i0 = i0==16;
  
  goto l15;
l14:
  i0=OOC_TRUE;
l15:
  return i0;
l16:
  _failed_function(18295); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnly(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 18988))+24);
  i1 = i1==2;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19038)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)usingModule;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnlyType(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19299)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19332)))), &_td_OOC_SymbolTable__ArrayDesc, 19332)), 19338))+34);
  
l5:
  if (i1) goto l7;
  i0=OOC_FALSE;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19369)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)usingModule;
  i0 = i0!=i1;
  
l8:
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 20409))+24);
  i1 = i1==-2;
  if (!i1) goto l75;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20565)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l73;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20943)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l60;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21350)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l54;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21664)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21658)))), 21658);
  goto l75;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21769))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21934))+32);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21970))+32);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 21980))+28);
  align = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22011))+32);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 22021))+24);
  size = i2;
  
  goto l15;
l14:
  align = 1;
  size = 0;
  i1=1;i2=0;
l15:
  maxAlign = 32767;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22437))+8);
  nested = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l18;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l48;
l18:
  {register OOC_INT32 h0=i1;i1=i3;i3=i2;i2=h0;}
l19_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22505)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l43;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22556))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22597))+40);
  i4 = *(OOC_INT16*)((_check_pointer(i4, 22603))+28);
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
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 22925))+48);
  if (i5) goto l37;
  i5 = _mod(i3,i4);
  i6 = i5!=0;
  if (!i6) goto l36;
  i3 = i3+(i4-i5);
  size = i3;
  
l36:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23557)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23608))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 23614))+24);
  i3 = i3+i4;
  size = i3;
  
  goto l43;
l37:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23114)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23155))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 23161))+24);
  i4 = i4>i3;
  if (!i4) goto l43;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23211))+40);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 23217))+24);
  size = i3;
  
l43:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23708));
  nested = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l19_loop;
l47:
  i1=i3;
l48:
  i3 = _mod(i1,i2);
  i4 = i3!=0;
  if (i4) goto l51;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23937)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l75;
l51:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23861)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, ((i1+i2)-i3), i2);
  goto l75;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21391))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 21422))+32);
  if (i1) goto l57;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21565))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21615))+36);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 21552))+44);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 21578))+24);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 21628))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21537)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (i3*i1), i2);
  goto l75;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21487))+36);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 21500))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21455)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, -1, i1);
  goto l75;
l60:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 21004);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 21004))*4);
  i1 = _check_pointer(i1, 21064);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 21064))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 21016))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 21076))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20975)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21138))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l63;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21189))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21199))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
l63:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21252))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21260)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l75;
  i2=0;
l66_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21296))+44);
  i3 = _check_pointer(i3, 21304);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 21304))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21307))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i3);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l66_loop;
  goto l75;
l73:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 20623);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 20623))*4);
  i1 = _check_pointer(i1, 20683);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 20683))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 20635))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 20695))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20594)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
l75:
  return;
  ;
}

void OOC_OOC_SymbolTable_TypeRules_init(void) {

  return;
  ;
}

/* --- */
