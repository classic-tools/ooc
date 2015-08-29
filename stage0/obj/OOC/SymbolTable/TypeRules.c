#include <OOC/SymbolTable/TypeRules.d>
#include <__oo2c.h>
#include <setjmp.h>

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

static OOC_CHAR8 OOC_SymbolTable_TypeRules__ExtendsLibType(OOC_SymbolTable__Type type, const OOC_CHAR8 module__ref[], OOC_LEN module_0d, const OOC_CHAR8 recordName__ref[], OOC_LEN recordName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(module,OOC_CHAR8 ,module_0d)
  OOC_ALLOCATE_VPAR(recordName,OOC_CHAR8 ,recordName_0d)
  OOC_SymbolTable__Record r;

  OOC_INITIALIZE_VPAR(module__ref,module,OOC_CHAR8 ,module_0d)
  OOC_INITIALIZE_VPAR(recordName__ref,recordName,OOC_CHAR8 ,recordName_0d)
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3013)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3048)))), &_td_OOC_SymbolTable__PointerDesc, 3048)), 3056))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3066)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l29;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3106)))), &_td_OOC_SymbolTable__PointerDesc, 3106)), 3114))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3128)))), &_td_OOC_SymbolTable__RecordDesc, 3128);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3151))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l16;
l11_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3185))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3199)))), &_td_OOC_SymbolTable__RecordDesc, 3199);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3151))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l11_loop;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3234))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l21;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3266))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3277))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3282))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3286)),(const void*)(OOC_INT32)recordName))==(OOC_INT32)0;
  
l21:
  if (i1) goto l23;
  i1=OOC_FALSE;
  goto l25;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3315))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3326))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3334)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l25:
  if (i1) goto l27;
  i0=OOC_FALSE;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3362))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3373))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3385)))), &_td_OOC_SymbolTable__ModuleDesc, 3385)), 3392))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3397))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3401)),(const void*)(OOC_INT32)module))==(OOC_INT32)0;
  
l28:
  return i0;
l29:
  _failed_function(2891); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsObject(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable_TypeRules__ExtendsLibType((OOC_SymbolTable__Type)i0, "Object", 7, "ObjectDesc", 11);
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsException(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable_TypeRules__ExtendsLibType((OOC_SymbolTable__Type)i0, "Exception", 10, "ExceptionDesc", 14);
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsSTRING(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Record r;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4165)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4200)))), &_td_OOC_SymbolTable__PointerDesc, 4200)), 4208))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4218)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l37;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4325)))), &_td_OOC_SymbolTable__PointerDesc, 4325)), 4333))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4347)))), &_td_OOC_SymbolTable__RecordDesc, 4347);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4370))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4391))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4405)))), &_td_OOC_SymbolTable__RecordDesc, 4405)), 4412))+32);
  i1 = i1!=(OOC_INT32)0;
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4446))+32);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4460)))), &_td_OOC_SymbolTable__RecordDesc, 4460);
  r = (OOC_SymbolTable__Record)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4370))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4391))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4405)))), &_td_OOC_SymbolTable__RecordDesc, 4405)), 4412))+32);
  i1 = i1!=(OOC_INT32)0;
  
l20:
  if (i1) goto l15_loop;
l24:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4495))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1=OOC_FALSE;
  goto l29;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4527))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4538))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4543))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 4547)),(const void*)"StringDesc"))==(OOC_INT32)0;
  
l29:
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4578))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4589))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4597)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l33:
  if (i1) goto l35;
  i0=OOC_FALSE;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4625))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4636))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4648)))), &_td_OOC_SymbolTable__ModuleDesc, 4648)), 4655))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4660))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 4664)),(const void*)"Object"))==(OOC_INT32)0;
  
l36:
  return i0;
l37:
  _failed_function(3968); return 0;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_TypeRules__BaseCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5215)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5589)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l5;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5618))+36);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5632)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l8;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5689))+36);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__PredefType)i0;
  goto l18;
l11:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5250))+32);
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
  _failed_function(4756); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__StringBase(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5923)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5913)))), 5913);
  goto l10;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5956))+32);
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
    _failed_case(i0, 5947);
    goto l10;
  }
l10:
  _failed_function(5814); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__MatchingStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_INT16 id;

  i0 = (OOC_INT32)type;
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6318)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6318)), 6329))+32);
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
    _failed_case(i0, 6304);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6681)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6719))+32);
  return (_in(i0,240));
l4:
  _failed_function(6551); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRealType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6965)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 7003))+32);
  return (_in(i0,768));
l4:
  _failed_function(6832); return 0;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7429)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 7467))+32);
  return (_in(i0,1024));
l4:
  _failed_function(7308); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IncludesType(OOC_SymbolTable__Type large, OOC_SymbolTable__Type small) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 largeId;

  i0 = (OOC_INT32)large;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7953)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)small;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7981)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  
l5:
  if (!i1) goto l30;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8032)))), &_td_OOC_SymbolTable__PredefTypeDesc, 8032)), 8043))+32);
  largeId = i1;
  i2 = (OOC_INT32)small;
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8075)))), &_td_OOC_SymbolTable__PredefTypeDesc, 8075)), 8086))+32);
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
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8632)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8617);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8668)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8693)))), &_td_OOC_SymbolTable__ArrayDesc, 8693)), 8699))+32);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayOfChar(OOC_SymbolTable__Type type, OOC_CHAR8 includeFixed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9053)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9038);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9097)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l9;
l3:
  i1 = includeFixed;
  if (i1) goto l6;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9147)))), &_td_OOC_SymbolTable__ArrayDesc, 9147)), 9153))+32);
  
  goto l9;
l6:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i0=OOC_FALSE;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9199)))), &_td_OOC_SymbolTable__ArrayDesc, 9199)), 9205))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l12:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRecordBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9441)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9467)))), &_td_OOC_SymbolTable__RecordDesc, 9467)), 9474))+50);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidParameterType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9722)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9707);
  i1 = OOC_SymbolTable_TypeRules__IsNamedType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9828)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
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
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10071)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 10056);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10113)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10143)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l5;
  i0=OOC_FALSE;
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10171)))), &_td_OOC_SymbolTable__PointerDesc, 10171)), 10179))+32);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10190)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10773)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10796)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11190)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i1) goto l5;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11217)))), &_td_OOC_SymbolTable__ArrayDesc, 11217)), 11223))+32);
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
  _failed_function(10852); return 0;
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
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11802)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11830)))), &_td_OOC_SymbolTable__RecordDesc, 11830)), 11837))+49);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12516)))), &_td_OOC_SymbolTable__ArrayDesc, 12516)), 12522))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12573)))), &_td_OOC_SymbolTable__ArrayDesc, 12573)), 12579))+36);
  i2 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  
  goto l13;
l11:
  i2=OOC_TRUE;
l13:
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12611)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l17;
  i2=OOC_FALSE;
  goto l19;
l17:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12635)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
l19:
  if (i2) goto l21;
  i0=OOC_FALSE;
  goto l24;
l21:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12694)))), &_td_OOC_SymbolTable__FormalParsDesc, 12694)), (OOC_SymbolTable__FormalPars)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12713)))), &_td_OOC_SymbolTable__FormalParsDesc, 12713)), OOC_FALSE);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13049)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13073)))), &_td_OOC_SymbolTable__PointerDesc);
  
l5:
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13117)))), &_td_OOC_SymbolTable__PointerDesc, 13117)), 13125))+32);
  type = (OOC_SymbolTable__Type)i0;
  i0 = (OOC_INT32)base;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13160)))), &_td_OOC_SymbolTable__PointerDesc, 13160)), 13168))+32);
  base = (OOC_SymbolTable__Type)i0;
l7:
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13201)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13224)))), &_td_OOC_SymbolTable__RecordDesc);
  
l12:
  if (!i1) goto l34;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l16;
  i0=OOC_FALSE;
  goto l18;
l16:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13387)))), &_td_OOC_SymbolTable__RecordDesc);
  
l18:
  if (!i0) goto l34;
  i0 = (OOC_INT32)base;
l20_loop:
  i1 = (OOC_INT32)type;
  i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  if (i2) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13506)))), &_td_OOC_SymbolTable__RecordDesc, 13506)), 13513))+32);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13387)))), &_td_OOC_SymbolTable__RecordDesc);
  
l29:
  if (i1) goto l20_loop;
l34:
  return OOC_FALSE;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__FormalParamsMatch(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars, OOC_CHAR8 allowSpecialization) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14793))+44);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14820))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14801)), (OOC_INT32)0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14828)), (OOC_INT32)0);
  i1 = i1!=i3;
  if (i1) goto l142;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14877))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14909))+36);
  i1 = (i1==(OOC_INT32)0)!=(i3==(OOC_INT32)0);
  if (i1) goto l140;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14974))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = allowSpecialization;
  i1 = !i1;
  
l9:
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15063))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15086))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  i1 = !i1;
  
l13:
  if (i1) goto l138;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15144))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l17;
  i1=OOC_FALSE;
  goto l19;
l17:
  i1 = allowSpecialization;
  
l19:
  if (i1) goto l21;
  i1=OOC_FALSE;
  goto l27;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15230))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15253))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15306))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15329))+36);
  i1 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  
  goto l25;
l24:
  i1=OOC_TRUE;
l25:
  i1 = !i1;
  
l27:
  if (i1) goto l136;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 15388))+48);
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 15419))+48);
  i1 = i1!=i3;
  if (i1) goto l134;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15507))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15515)), (OOC_INT32)0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l45;
  i3=0;
l33_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15544))+44);
  i4 = _check_pointer(i4, 15552);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15552))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15592))+44);
  i5 = _check_pointer(i5, 15600);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15600))*4);
  i4 = *(OOC_UINT8*)((_check_pointer(i4, 15555))+50);
  i5 = *(OOC_UINT8*)((_check_pointer(i5, 15603))+50);
  i4 = i4!=i5;
  if (i4) goto l36;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15653))+44);
  i4 = _check_pointer(i4, 15661);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15661))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15710))+44);
  i5 = _check_pointer(i5, 15718);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15718))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15664))+40);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15721))+40);
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
  i1 = allowSpecialization;
  if (i1) goto l104;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16474))+52);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16481)), (OOC_INT32)0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l75;
  i3=0;
l50_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16541))+52);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16548)), (OOC_INT32)0);
  i4 = 0!=i4;
  if (i4) goto l53;
  i4=OOC_FALSE;
  goto l55;
l53:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16589))+52);
  i4 = _check_pointer(i4, 16596);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 16596))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16641))+52);
  i5 = _check_pointer(i5, 16648);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 16648))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16599))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16651))+16);
  i4 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  i4 = !i4;
  
l55:
  if (i4) goto l57;
  i4=0;
  goto l67;
l57:
  i4=0;
l58_loop:
  i4 = i4+1;
  j = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16541))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16548)), (OOC_INT32)0);
  i5 = i4!=i5;
  if (i5) goto l61;
  i5=OOC_FALSE;
  goto l63;
l61:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16589))+52);
  i5 = _check_pointer(i5, 16596);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 16596))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16641))+52);
  i6 = _check_pointer(i6, 16648);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16648))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16599))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16651))+16);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l63:
  if (i5) goto l58_loop;
l67:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16727))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16734)), (OOC_INT32)0);
  i4 = i4==i5;
  if (!i4) goto l70;
  return OOC_FALSE;
l70:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l50_loop;
l75:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16847))+52);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16854)), (OOC_INT32)0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l133;
  i3=0;
l78_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16914))+52);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16921)), (OOC_INT32)0);
  i4 = 0!=i4;
  if (i4) goto l81;
  i4=OOC_FALSE;
  goto l83;
l81:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16962))+52);
  i4 = _check_pointer(i4, 16969);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 16969))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17014))+52);
  i5 = _check_pointer(i5, 17021);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 17021))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16972))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17024))+16);
  i4 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  i4 = !i4;
  
l83:
  if (i4) goto l85;
  i4=0;
  goto l95;
l85:
  i4=0;
l86_loop:
  i4 = i4+1;
  j = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16914))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16921)), (OOC_INT32)0);
  i5 = i4!=i5;
  if (i5) goto l89;
  i5=OOC_FALSE;
  goto l91;
l89:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16962))+52);
  i5 = _check_pointer(i5, 16969);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 16969))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17014))+52);
  i6 = _check_pointer(i6, 17021);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 17021))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16972))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 17024))+16);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l91:
  if (i5) goto l86_loop;
l95:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17100))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 17107)), (OOC_INT32)0);
  i4 = i4==i5;
  if (!i4) goto l98;
  return OOC_FALSE;
l98:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l78_loop;
  goto l133;
l104:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15850))+52);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15857)), (OOC_INT32)0);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l133;
  i3=0;
l107_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15917))+52);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15924)), (OOC_INT32)0);
  i4 = 0!=i4;
  if (i4) goto l110;
  i4=OOC_FALSE;
  goto l112;
l110:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15970))+52);
  i4 = _check_pointer(i4, 15977);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 15977))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16027))+52);
  i5 = _check_pointer(i5, 16034);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 16034))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15980))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16037))+16);
  i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  i4 = !i4;
  
l112:
  if (i4) goto l114;
  i4=0;
  goto l124;
l114:
  i4=0;
l115_loop:
  i4 = i4+1;
  j = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15917))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15924)), (OOC_INT32)0);
  i5 = i4!=i5;
  if (i5) goto l118;
  i5=OOC_FALSE;
  goto l120;
l118:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15970))+52);
  i5 = _check_pointer(i5, 15977);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15977))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16027))+52);
  i6 = _check_pointer(i6, 16034);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16034))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15980))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16037))+16);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l120:
  if (i5) goto l115_loop;
l124:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16113))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16120)), (OOC_INT32)0);
  i4 = i4==i5;
  if (!i4) goto l127;
  return OOC_FALSE;
l127:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l107_loop;
l133:
  return OOC_TRUE;
  goto l143;
l134:
  return OOC_FALSE;
  goto l143;
l136:
  return OOC_FALSE;
  goto l143;
l138:
  return OOC_FALSE;
  goto l143;
l140:
  return OOC_FALSE;
  goto l143;
l142:
  return OOC_FALSE;
l143:
  _failed_function(13604); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRedefinition(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17496))+32);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17530))+32);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 17506))+50);
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 17540))+50);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17847))+32);
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
  _failed_function(17647); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18159)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 18144);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18195)))), &_td_OOC_SymbolTable__ArrayDesc));
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
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18743)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l5:
  if (!i0) goto l16;
l7_loop:
  i0 = (OOC_INT32)argType;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18789)))), &_td_OOC_SymbolTable__ArrayDesc, 18789)), 18795))+36);
  argType = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)fparType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18841)))), &_td_OOC_SymbolTable__ArrayDesc, 18841)), 18847))+36);
  fparType = (OOC_SymbolTable__Type)i1;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
  if (i1) goto l10;
  i0=OOC_FALSE;
  goto l12;
l10:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18743)))), &_td_OOC_SymbolTable__ArrayDesc);
  
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
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19578)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l41;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19731)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i3) goto l17;
  return OOC_FALSE;
  goto l46;
l17:
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l39;
l20_loop:
  i0 = (OOC_INT32)superType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19868))+8);
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l34;
l23_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19934)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l29;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19997))+40);
  i4 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4, i2);
  if (!i4) goto l29;
  return OOC_TRUE;
l29:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20167));
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l23_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20228)))), &_td_OOC_SymbolTable__RecordDesc, 20228)), 20235))+32);
  superType = (OOC_SymbolTable__Type)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l20_loop;
l39:
  return OOC_FALSE;
  goto l46;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19648)))), &_td_OOC_SymbolTable__ArrayDesc, 19648)), 19654))+36);
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, i2);
  return i0;
  goto l46;
l43:
  return OOC_TRUE;
  goto l46;
l45:
  return OOC_TRUE;
l46:
  _failed_function(18946); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsByteCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20511)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l8;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 20549))+32);
  i1 = i1==1;
  if (i1) goto l6;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 20577))+32);
  i0 = i0==4;
  
  goto l7;
l6:
  i0=OOC_TRUE;
l7:
  return i0;
l8:
  _failed_function(20344); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNilCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20903)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20997)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l9;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21043)))), &_td_OOC_SymbolTable__FormalParsDesc);
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
  i1 = *(OOC_INT16*)((_check_pointer(i0, 20941))+32);
  i1 = i1==12;
  if (i1) goto l14;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 20968))+32);
  i0 = i0==16;
  
  goto l15;
l14:
  i0=OOC_TRUE;
l15:
  return i0;
l16:
  _failed_function(20675); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnly(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 21368))+24);
  i1 = i1==2;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21418)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)usingModule;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnlyType(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21679)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21712)))), &_td_OOC_SymbolTable__ArrayDesc, 21712)), 21718))+34);
  
l5:
  if (i1) goto l7;
  i0=OOC_FALSE;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21749)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 22789))+24);
  i1 = i1==-2;
  if (!i1) goto l75;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22945)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l73;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23323)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l60;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23730)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l54;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24044)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24038)))), 24038);
  goto l75;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24149))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24314))+32);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24350))+32);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 24360))+28);
  align = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24391))+32);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 24401))+24);
  size = i2;
  
  goto l15;
l14:
  align = 1;
  size = 0;
  i1=1;i2=0;
l15:
  maxAlign = 32767;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24817))+8);
  nested = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l18;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l48;
l18:
  {register OOC_INT32 h0=i1;i1=i3;i3=i2;i2=h0;}
l19_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24885)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l43;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24936))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24977))+40);
  i4 = *(OOC_INT16*)((_check_pointer(i4, 24983))+28);
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
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 25305))+48);
  if (i5) goto l37;
  i5 = _mod(i3,i4);
  i6 = i5!=0;
  if (!i6) goto l36;
  i3 = i3+(i4-i5);
  size = i3;
  
l36:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25937)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25988))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 25994))+24);
  i3 = i3+i4;
  size = i3;
  
  goto l43;
l37:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25494)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25535))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 25541))+24);
  i4 = i4>i3;
  if (!i4) goto l43;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25591))+40);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 25597))+24);
  size = i3;
  
l43:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 26088));
  nested = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l19_loop;
l47:
  i1=i3;
l48:
  i3 = _mod(i1,i2);
  i4 = i3!=0;
  if (i4) goto l51;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26317)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l75;
l51:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26241)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, ((i1+i2)-i3), i2);
  goto l75;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23771))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 23802))+32);
  if (i1) goto l57;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23945))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23995))+36);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 23932))+44);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 23958))+24);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 24008))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23917)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (i3*i1), i2);
  goto l75;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23867))+36);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 23880))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23835)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, -1, i1);
  goto l75;
l60:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 23384);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 23384))*4);
  i1 = _check_pointer(i1, 23444);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 23444))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 23396))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 23456))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23355)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23518))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l63;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23569))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23579))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
l63:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23632))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23640)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l75;
  i2=0;
l66_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23676))+44);
  i3 = _check_pointer(i3, 23684);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 23684))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 23687))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i3);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l66_loop;
  goto l75;
l73:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 23003);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 23003))*4);
  i1 = _check_pointer(i1, 23063);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 23063))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 23015))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 23075))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22974)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
l75:
  return;
  ;
}

void OOC_OOC_SymbolTable_TypeRules_init(void) {

  return;
  ;
}

/* --- */
