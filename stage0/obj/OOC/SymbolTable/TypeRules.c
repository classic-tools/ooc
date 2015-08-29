#include <OOC/SymbolTable/TypeRules.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNamedType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1557)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 1542);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1592))+20);
  return (i0!=(OOC_INT32)0);
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1820)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1851)))), &_td_OOC_SymbolTable__PredefTypeDesc, 1851)), 1862))+36);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsScalarType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2172)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2266)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l5;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2304)))), &_td_OOC_SymbolTable__PointerDesc);
  
  goto l7;
l5:
  i1=1u;
l7:
  if (i1) goto l9;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2339)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l10;
l9:
  i0=1u;
l10:
  return i0;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2219))+36);
  i0 = OOC_SymbolTable_TypeRules__IsScalarType((OOC_SymbolTable__Type)i0);
  return i0;
l12:
  _failed_function(1905); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2527)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2565))+36);
  return (_in(i0,14u));
l4:
  _failed_function(2399); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2820)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2858))+36);
  return (_in(i0,57344u));
l4:
  _failed_function(2688); return 0;
  ;
}

static OOC_CHAR8 OOC_SymbolTable_TypeRules__ExtendsLibType(OOC_SymbolTable__Type type, const OOC_CHAR8 module__ref[], OOC_LEN module_0d, const OOC_CHAR8 recordName__ref[], OOC_LEN recordName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(module,OOC_CHAR8 ,module_0d)
  OOC_ALLOCATE_VPAR(recordName,OOC_CHAR8 ,recordName_0d)
  OOC_SymbolTable__Type r;

  OOC_INITIALIZE_VPAR(module__ref,module,OOC_CHAR8 ,module_0d)
  OOC_INITIALIZE_VPAR(recordName__ref,recordName,OOC_CHAR8 ,recordName_0d)
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3122)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3157)))), &_td_OOC_SymbolTable__PointerDesc, 3157)), 3165))+36);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3175)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return 0u;
  goto l49;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3215)))), &_td_OOC_SymbolTable__PointerDesc, 3215)), 3223))+36);
  r = (OOC_SymbolTable__Type)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=0u;
  goto l24;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3274))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l13;
  i1=0u;
  goto l15;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3312))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3323))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3328))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3332)),(const void*)(OOC_INT32)recordName))==0;
  
l15:
  if (i1) goto l17;
  i1=0u;
  goto l19;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3367))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3378))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3386)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l19:
  if (i1) goto l21;
  i1=0u;
  goto l22;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3420))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3431))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3443)))), &_td_OOC_SymbolTable__ModuleDesc, 3443)), 3450))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3455))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3459)),(const void*)(OOC_INT32)module))==0;
  
l22:
  i1 = !i1;
  
l24:
  if (!i1) goto l48;
l27_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3494)))), &_td_OOC_SymbolTable__RecordDesc, 3494)), 3501))+36);
  r = (OOC_SymbolTable__Type)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l30;
  i1=0u;
  goto l44;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3274))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l33;
  i1=0u;
  goto l35;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3312))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3323))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3328))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3332)),(const void*)(OOC_INT32)recordName))==0;
  
l35:
  if (i1) goto l37;
  i1=0u;
  goto l39;
l37:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3367))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3378))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3386)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l39:
  if (i1) goto l41;
  i1=0u;
  goto l42;
l41:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3420))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3431))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3443)))), &_td_OOC_SymbolTable__ModuleDesc, 3443)), 3450))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3455))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3459)),(const void*)(OOC_INT32)module))==0;
  
l42:
  i1 = !i1;
  
l44:
  if (i1) goto l27_loop;
l48:
  return (i0!=(OOC_INT32)0);
l49:
  _failed_function(3002); return 0;
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
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable_TypeRules__ExtendsLibType((OOC_SymbolTable__Type)i0, "Object", 7, "StringDesc", 11);
  return i0;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_TypeRules__BaseCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4803)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5177)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l5;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5206))+40);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5220)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l8;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5277))+40);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__PredefType)i0;
  goto l18;
l11:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4838))+36);
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
  _failed_function(4344); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__StringBase(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5511)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5501)))), 5501);
  goto l10;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5544))+36);
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
    _failed_case(i0, 5535);
    goto l10;
  }
l10:
  _failed_function(5402); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__MatchingStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_INT16 id;

  i0 = (OOC_INT32)type;
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5906)))), &_td_OOC_SymbolTable__PredefTypeDesc, 5906)), 5917))+36);
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
    _failed_case(i0, 5892);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6269)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6307))+36);
  return (_in(i0,240u));
l4:
  _failed_function(6139); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRealType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6553)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6591))+36);
  return (_in(i0,768u));
l4:
  _failed_function(6420); return 0;
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
  i0=1u;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsSetType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7017)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 7055))+36);
  return (_in(i0,1024u));
l4:
  _failed_function(6896); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IncludesType(OOC_SymbolTable__Type large, OOC_SymbolTable__Type small) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 largeId;

  i0 = (OOC_INT32)large;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7541)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)small;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7569)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  
l5:
  if (!i1) goto l30;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7620)))), &_td_OOC_SymbolTable__PredefTypeDesc, 7620)), 7631))+36);
  largeId = i1;
  i2 = (OOC_INT32)small;
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7663)))), &_td_OOC_SymbolTable__PredefTypeDesc, 7663)), 7674))+36);
  i4 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i0);
  if (i4) goto l24;
  i4 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  if (i4) goto l18;
  i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
  if (!i0) goto l30;
  i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i0) goto l15;
  i0=0u;
  goto l16;
l15:
  i0 = i3<=i1;
  
l16:
  return i0;
  goto l30;
l18:
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i0) goto l21;
  i0=0u;
  goto l22;
l21:
  i0 = i3<=i1;
  
l22:
  return i0;
  goto l30;
l24:
  i0 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i2);
  if (i0) goto l27;
  i0=0u;
  goto l28;
l27:
  i0 = i3<=i1;
  
l28:
  return i0;
l30:
  return 0u;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsOpenArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8220)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8205);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8256)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8281)))), &_td_OOC_SymbolTable__ArrayDesc, 8281)), 8287))+36);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayOfChar(OOC_SymbolTable__Type type, OOC_CHAR8 includeFixed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8641)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8626);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8685)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l9;
l3:
  i1 = includeFixed;
  if (i1) goto l6;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8735)))), &_td_OOC_SymbolTable__ArrayDesc, 8735)), 8741))+36);
  
  goto l9;
l6:
  i1=1u;
l9:
  if (i1) goto l11;
  i0=0u;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8787)))), &_td_OOC_SymbolTable__ArrayDesc, 8787)), 8793))+40);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l12:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRecordBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9025)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9122)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l5;
  i0=0u;
  goto l6;
l5:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9148)))), &_td_OOC_SymbolTable__RecordDesc, 9148)), 9155))+54);
  
l6:
  return i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9082))+36);
  i0 = OOC_SymbolTable_TypeRules__IsValidRecordBaseType((OOC_SymbolTable__Type)i0);
  return i0;
l8:
  _failed_function(8842); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidParameterType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9412)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9397);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9447)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_SymbolTable_TypeRules__IsNamedType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9546)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l8;
l7:
  i0=1u;
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidReceiverType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9789)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9774);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9824)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9861)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9894)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l5;
  i0=0u;
  goto l8;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9931)))), &_td_OOC_SymbolTable__PointerDesc, 9931)), 9939))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9931)))), &_td_OOC_SymbolTable__PointerDesc, 9931)), 9939))+36);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9948)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9959)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l8;
l7:
  i0=1u;
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidResultType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10312)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  i0 = OOC_SymbolTable_TypeRules__IsScalarType((OOC_SymbolTable__Type)i0);
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidPointerBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10550)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10648)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l5;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10671)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l6;
l5:
  i0=1u;
l6:
  return i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10608))+36);
  i0 = OOC_SymbolTable_TypeRules__IsValidPointerBaseType((OOC_SymbolTable__Type)i0);
  return i0;
l8:
  _failed_function(10361); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidArrayElementType(OOC_SymbolTable__Type type, OOC_CHAR8 isOpenArray) {
  register OOC_INT32 i0,i1;

  i0 = isOpenArray;
  if (i0) goto l7;
  i0 = (OOC_INT32)type;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11074)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i1) goto l5;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11101)))), &_td_OOC_SymbolTable__ArrayDesc, 11101)), 11107))+36);
  i0 = !i0;
  
  goto l6;
l5:
  i0=1u;
l6:
  return i0;
  goto l8;
l7:
  return 1u;
l8:
  _failed_function(10736); return 0;
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
  i0=1u;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidTypeBound(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11636)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11661)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11705)))), &_td_OOC_SymbolTable__PointerDesc, 11705)), 11713))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11705)))), &_td_OOC_SymbolTable__PointerDesc, 11705)), 11713))+36);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11722)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11753)))), &_td_OOC_SymbolTable__RecordDesc));
l4:
  _failed_function(11442); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__VariableInstance(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12086)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12114)))), &_td_OOC_SymbolTable__RecordDesc, 12114)), 12121))+53);
  i0 = !i0;
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__SameType(OOC_SymbolTable__Type a, OOC_SymbolTable__Type b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseA;
  OOC_SymbolTable__Type baseB;
  OOC_INT32 i;
  OOC_SymbolTable__TypeVar tv;

  i0 = (OOC_INT32)a;
  i1 = (OOC_INT32)b;
  i2 = i0==i1;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  i2 = !i2;
  
l5:
  if (i2) goto l28;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12933)))), &_td_OOC_SymbolTable__TypeClosureDesc);
  if (i2) goto l9;
  i2=0u;
  goto l11;
l9:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12958)))), &_td_OOC_SymbolTable__TypeClosureDesc);
  
l11:
  if (!i2) goto l29;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13004)))), &_td_OOC_SymbolTable__TypeClosureDesc, 13004)), 13016))+36);
  baseA = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13048)))), &_td_OOC_SymbolTable__TypeClosureDesc, 13048)), 13060))+36);
  baseB = (OOC_SymbolTable__Type)i3;
  i4 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  if (!i4) goto l29;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13128))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13145))+24);
  _assert((i4==i3), 127, 13116);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13188))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13197))+16);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13204)), 0);
  i4 = 0<i3;
  if (!i4) goto l25;
  i4=0;
l17_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13233))+24);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13242))+16);
  i5 = _check_pointer(i5, 13249);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13249))*4);
  tv = (OOC_SymbolTable__TypeVar)i5;
  i6 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Lookup((OOC_SymbolTable__TypeClosure)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13283)))), &_td_OOC_SymbolTable__TypeClosureDesc, 13283)), (OOC_SymbolTable__TypeVar)i5, (OOC_SymbolTable__TypeVar)i5);
  i5 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Lookup((OOC_SymbolTable__TypeClosure)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13341)))), &_td_OOC_SymbolTable__TypeClosureDesc, 13341)), (OOC_SymbolTable__TypeVar)i5, (OOC_SymbolTable__TypeVar)i5);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i6, (OOC_SymbolTable__Type)i5);
  i5 = !i5;
  if (!i5) goto l20;
  return 0u;
l20:
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l17_loop;
l25:
  return 1u;
  goto l29;
l28:
  return 1u;
l29:
  return 0u;
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
  i2=0u;
  goto l7;
l5:
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
  
l7:
  if (i2) goto l9;
  i2=0u;
  goto l13;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13799)))), &_td_OOC_SymbolTable__ArrayDesc, 13799)), 13805))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13856)))), &_td_OOC_SymbolTable__ArrayDesc, 13856)), 13862))+40);
  i2 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  
  goto l13;
l11:
  i2=1u;
l13:
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13894)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l17;
  i2=0u;
  goto l19;
l17:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13918)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
l19:
  if (i2) goto l21;
  i0=0u;
  goto l24;
l21:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13977)))), &_td_OOC_SymbolTable__FormalParsDesc, 13977)), (OOC_SymbolTable__FormalPars)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13996)))), &_td_OOC_SymbolTable__FormalParsDesc, 13996)), 0u);
  
  goto l24;
l23:
  i0=1u;
l24:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsPointer(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14293)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14304)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14329)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__PointerBaseType(OOC_SymbolTable__Type pointer) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)pointer;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14530)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14607)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14656)))), &_td_OOC_SymbolTable__PointerDesc, 14656)), 14664))+36);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14639)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14567))+36);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(14374); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRecord(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14899)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14910)))), &_td_OOC_SymbolTable__RecordDesc));
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__RecordBaseType(OOC_SymbolTable__Type record) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)record;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15105)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15179)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15227)))), &_td_OOC_SymbolTable__RecordDesc, 15227)), 15234))+36);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15210)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15140))+36);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(14953); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRecordPointer(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_SymbolTable_TypeRules__IsPointer((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i0);
  i0 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArray(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15689)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15700)))), &_td_OOC_SymbolTable__ArrayDesc));
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__ArrayElementType(OOC_SymbolTable__Type array) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)array;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15892)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15966)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16013)))), &_td_OOC_SymbolTable__ArrayDesc, 16013)), 16019))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15996)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15925))+40);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(15741); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsInducedExtensionOf(OOC_SymbolTable__Type type, OOC_SymbolTable__Type base, OOC_CHAR8 ensureInduction) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type ptr;
  OOC_SymbolTable__Type qualBase;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16298)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16342)))), &_td_OOC_SymbolTable__TypeVarDesc, 16342)), 16350))+36);
  type = (OOC_SymbolTable__Type)i0;
  
l4:
  i1 = (OOC_INT32)base;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16380)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16424)))), &_td_OOC_SymbolTable__TypeVarDesc, 16424)), 16432))+36);
  base = (OOC_SymbolTable__Type)i1;
l7:
  i1 = OOC_SymbolTable_TypeRules__IsPointer((OOC_SymbolTable__Type)i0);
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = (OOC_INT32)base;
  i1 = OOC_SymbolTable_TypeRules__IsPointer((OOC_SymbolTable__Type)i1);
  
l12:
  if (!i1) goto l15;
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)base;
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i1);
  base = (OOC_SymbolTable__Type)i1;
  
l15:
  i1 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = (OOC_INT32)base;
  i1 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i1);
  
l20:
  if (!i1) goto l53;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l24;
  i1=0u;
  goto l26;
l24:
  i1 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
  
l26:
  if (!i1) goto l53;
  i1 = (OOC_INT32)base;
  i2 = ensureInduction;
  
l28_loop:
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  if (i3) goto l42;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16949)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16991)))), &_td_OOC_SymbolTable__RecordDesc, 16991)), 16998))+36);
  qualBase = (OOC_SymbolTable__Type)i3;
  if (i2) goto l33;
  i4=0u;
  goto l35;
l33:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17057)))), &_td_OOC_SymbolTable__TypeClosureDesc);
  
l35:
  if (i4) goto l37;
  i4=0u;
  goto l39;
l37:
  i4 = OOC_SymbolTable__TypeClosureDesc_ArgumentsInduced((OOC_SymbolTable__TypeClosure)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17102)))), &_td_OOC_SymbolTable__TypeClosureDesc, 17102)), (OOC_SymbolTable__Type)i3);
  i4 = !i4;
  
l39:
  if (!i4) goto l41;
  return 0u;
l41:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17221)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i3);
  type = (OOC_SymbolTable__Type)i0;
  
  goto l43;
l42:
  return 1u;
  
l43:
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l46;
  i3=0u;
  goto l48;
l46:
  i3 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
  
l48:
  if (i3) goto l28_loop;
l53:
  return 0u;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsExtensionOf(OOC_SymbolTable__Type type, OOC_SymbolTable__Type base) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)base;
  i0 = OOC_SymbolTable_TypeRules__IsInducedExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1, 0u);
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsExtensionOfNoParams(OOC_SymbolTable__Type type, OOC_SymbolTable__Type base) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17901)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17945)))), &_td_OOC_SymbolTable__TypeVarDesc, 17945)), 17953))+36);
  type = (OOC_SymbolTable__Type)i0;
  
l4:
  i1 = (OOC_INT32)base;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17983)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18027)))), &_td_OOC_SymbolTable__TypeVarDesc, 18027)), 18035))+36);
  base = (OOC_SymbolTable__Type)i1;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18068)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)base;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18096)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  base = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18198)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l10;
  i2=0u;
  goto l12;
l10:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18222)))), &_td_OOC_SymbolTable__PointerDesc);
  
l12:
  if (!i2) goto l15;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18266)))), &_td_OOC_SymbolTable__PointerDesc, 18266)), 18274))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18266)))), &_td_OOC_SymbolTable__PointerDesc, 18266)), 18274))+36);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18283)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18318)))), &_td_OOC_SymbolTable__PointerDesc, 18318)), 18326))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18318)))), &_td_OOC_SymbolTable__PointerDesc, 18318)), 18326))+36);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18335)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  base = (OOC_SymbolTable__Type)i1;
  
l15:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18369)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18392)))), &_td_OOC_SymbolTable__RecordDesc);
  
l20:
  if (!i2) goto l46;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l24;
  i2=0u;
  goto l26;
l24:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18555)))), &_td_OOC_SymbolTable__RecordDesc);
  
l26:
  if (!i2) goto l46;
l28_loop:
  i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  if (i2) goto l35;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18673)))), &_td_OOC_SymbolTable__RecordDesc, 18673)), 18680))+36);
  type = (OOC_SymbolTable__Type)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l36;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18746)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  
  goto l36;
l35:
  return 1u;
  
l36:
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l39;
  i2=0u;
  goto l41;
l39:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18555)))), &_td_OOC_SymbolTable__RecordDesc);
  
l41:
  if (i2) goto l28_loop;
l46:
  return 0u;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__FunctionResultType(OOC_SymbolTable__Type formalPars) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)formalPars;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19033)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19121)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19173)))), &_td_OOC_SymbolTable__FormalParsDesc, 19173)), 19184))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19156)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19076))+40);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(18863); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__FormalParamsMatch(OOC_SymbolTable__Type baseFParsClosure, OOC_SymbolTable__FormalPars procFPars, OOC_CHAR8 allowSpecialization) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type ptr;
  OOC_SymbolTable__FormalPars baseFPars;
  OOC_SymbolTable__Type baseResult;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)baseFParsClosure;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20621)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20658)))), &_td_OOC_SymbolTable__FormalParsDesc, 20658);
  baseFPars = (OOC_SymbolTable__FormalPars)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20688))+40);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20800))+40);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20782)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  baseResult = (OOC_SymbolTable__Type)i2;
  
  goto l4;
l3:
  baseResult = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i2=(OOC_INT32)0;
l4:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20850))+48);
  i4 = (OOC_INT32)procFPars;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20877))+48);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 20858)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 20885)), 0);
  i3 = i3!=i5;
  if (i3) goto l146;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 20955))+40);
  i3 = (i2==(OOC_INT32)0)!=(i3==(OOC_INT32)0);
  if (i3) goto l144;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l11;
  i5=0u;
  goto l13;
l11:
  i5 = allowSpecialization;
  i5 = !i5;
  
l13:
  if (i5) goto l15;
  i5=0u;
  goto l17;
l15:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21109))+40);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i5);
  i5 = !i5;
  
l17:
  if (i5) goto l142;
l19:
  if (i3) goto l21;
  i3=0u;
  goto l23;
l21:
  i3 = allowSpecialization;
  
l23:
  if (i3) goto l25;
  i2=0u;
  goto l31;
l25:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21252))+40);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  if (i3) goto l28;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21303))+40);
  i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  
  goto l29;
l28:
  i2=1u;
l29:
  i2 = !i2;
  
l31:
  if (i2) goto l140;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 21373))+52);
  i3 = *(OOC_UINT8*)((_check_pointer(i4, 21404))+52);
  i2 = i2!=i3;
  if (i2) goto l138;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21492))+48);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21500)), 0);
  i3 = 0<i2;
  if (!i3) goto l49;
  i3=0;
l37_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21529))+48);
  i5 = _check_pointer(i5, 21537);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 21537))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21577))+48);
  i6 = _check_pointer(i6, 21585);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 21585))*4);
  i5 = *(OOC_UINT8*)((_check_pointer(i5, 21540))+55);
  i6 = *(OOC_UINT8*)((_check_pointer(i6, 21588))+55);
  i5 = i5!=i6;
  if (i5) goto l40;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21663))+48);
  i5 = _check_pointer(i5, 21670);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 21670))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21673))+44);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21645)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i5);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21715))+48);
  i6 = _check_pointer(i6, 21722);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 21722))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 21725))+44);
  i5 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
  goto l42;
l40:
  i5=1u;
l42:
  if (!i5) goto l44;
  return 0u;
l44:
  i3 = i3+1;
  i = i3;
  i5 = i3<i2;
  if (i5) goto l37_loop;
l49:
  i0 = allowSpecialization;
  if (i0) goto l108;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22477))+56);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22484)), 0);
  i2 = 0<i0;
  if (!i2) goto l79;
  i2=0;
l54_loop:
  j = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22544))+56);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 22551)), 0);
  i3 = 0!=i3;
  if (i3) goto l57;
  i3=0u;
  goto l59;
l57:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22592))+56);
  i3 = _check_pointer(i3, 22599);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i5, OOC_UINT32, 22599))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22644))+56);
  i5 = _check_pointer(i5, 22651);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 22651))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22602))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 22654))+16);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i5);
  i3 = !i3;
  
l59:
  if (i3) goto l61;
  i3=0;
  goto l71;
l61:
  i3=0;
l62_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22544))+56);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 22551)), 0);
  i5 = i3!=i5;
  if (i5) goto l65;
  i5=0u;
  goto l67;
l65:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22592))+56);
  i5 = _check_pointer(i5, 22599);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 22599))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22644))+56);
  i6 = _check_pointer(i6, 22651);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 22651))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 22602))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 22654))+16);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l67:
  if (i5) goto l62_loop;
l71:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22730))+56);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 22737)), 0);
  i3 = i3==i5;
  if (!i3) goto l74;
  return 0u;
l74:
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l54_loop;
l79:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22850))+56);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22857)), 0);
  i2 = 0<i0;
  if (!i2) goto l137;
  i2=0;
l82_loop:
  j = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22917))+56);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 22924)), 0);
  i3 = 0!=i3;
  if (i3) goto l85;
  i3=0u;
  goto l87;
l85:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22965))+56);
  i3 = _check_pointer(i3, 22972);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i5, OOC_UINT32, 22972))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23017))+56);
  i5 = _check_pointer(i5, 23024);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 23024))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22975))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23027))+16);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i5);
  i3 = !i3;
  
l87:
  if (i3) goto l89;
  i3=0;
  goto l99;
l89:
  i3=0;
l90_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22917))+56);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 22924)), 0);
  i5 = i3!=i5;
  if (i5) goto l93;
  i5=0u;
  goto l95;
l93:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22965))+56);
  i5 = _check_pointer(i5, 22972);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 22972))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23017))+56);
  i6 = _check_pointer(i6, 23024);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 23024))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 22975))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 23027))+16);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l95:
  if (i5) goto l90_loop;
l99:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23103))+56);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 23110)), 0);
  i3 = i3==i5;
  if (!i3) goto l102;
  return 0u;
l102:
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l82_loop;
  goto l137;
l108:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21853))+56);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21860)), 0);
  i2 = 0<i0;
  if (!i2) goto l137;
  i2=0;
l111_loop:
  j = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21920))+56);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 21927)), 0);
  i3 = 0!=i3;
  if (i3) goto l114;
  i3=0u;
  goto l116;
l114:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21973))+56);
  i3 = _check_pointer(i3, 21980);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i5, OOC_UINT32, 21980))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22030))+56);
  i5 = _check_pointer(i5, 22037);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 22037))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21983))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 22040))+16);
  i3 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i5);
  i3 = !i3;
  
l116:
  if (i3) goto l118;
  i3=0;
  goto l128;
l118:
  i3=0;
l119_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21920))+56);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 21927)), 0);
  i5 = i3!=i5;
  if (i5) goto l122;
  i5=0u;
  goto l124;
l122:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21973))+56);
  i5 = _check_pointer(i5, 21980);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 21980))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22030))+56);
  i6 = _check_pointer(i6, 22037);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 22037))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21983))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 22040))+16);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l124:
  if (i5) goto l119_loop;
l128:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22116))+56);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 22123)), 0);
  i3 = i3==i5;
  if (!i3) goto l131;
  return 0u;
l131:
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l111_loop;
l137:
  return 1u;
  goto l147;
l138:
  return 0u;
  goto l147;
l140:
  return 0u;
  goto l147;
l142:
  return 0u;
  goto l147;
l144:
  return 0u;
  goto l147;
l146:
  return 0u;
l147:
  _failed_function(19244); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRedefinition(OOC_SymbolTable__Type baseFParsClosure, OOC_SymbolTable__FormalPars procFPars) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type baseFPars;

  i0 = (OOC_INT32)baseFParsClosure;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23592)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  baseFPars = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23636)))), &_td_OOC_SymbolTable__FormalParsDesc, 23636)), 23647))+36);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23686))+36);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 23656))+55);
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 23695))+55);
  i1 = i1==i3;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__FormalPars)i2, 1u);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidForwardDecl(OOC_SymbolTable__FormalPars forward, OOC_SymbolTable__FormalPars proc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)forward;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24008))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)proc;
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__FormalPars)i0, 0u);
  return i0;
  goto l4;
l3:
  i1 = (OOC_INT32)proc;
  i0 = OOC_SymbolTable_TypeRules__IsValidRedefinition((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__FormalPars)i0);
  return i0;
l4:
  _failed_function(23808); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24355)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 24340);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24390)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24401)))), &_td_OOC_SymbolTable__ArrayDesc));
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayCompatible(OOC_SymbolTable__Type argType, OOC_SymbolTable__Type fparType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fparType;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)argType;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24949)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l5:
  if (!i1) goto l17;
  
l8_loop:
  i1 = (OOC_INT32)argType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24995)))), &_td_OOC_SymbolTable__ArrayDesc, 24995)), 25001))+40);
  argType = (OOC_SymbolTable__Type)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25047)))), &_td_OOC_SymbolTable__ArrayDesc, 25047)), 25053))+40);
  fparType = (OOC_SymbolTable__Type)i0;
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  if (i2) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24949)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = (OOC_INT32)argType;
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
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
  i2=1u;
l5:
  if (i2) goto l45;
  i2 = arrayCompat;
  if (i2) goto l9;
  i3=0u;
  goto l11;
l9:
  i3 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  
l11:
  if (i3) goto l43;
  i3 = OOC_SymbolTable_TypeRules__IsArray((OOC_SymbolTable__Type)i0);
  if (i3) goto l41;
  i3 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
  if (i3) goto l17;
  return 0u;
  goto l46;
l17:
  i3 = i0!=(OOC_INT32)0;
  if (!i3) goto l39;
  
l20_loop:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26021)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  superType = (OOC_SymbolTable__Type)i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26059))+8);
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l34;
l23_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 26125)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l29;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 26188))+44);
  i4 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4, i2);
  if (!i4) goto l29;
  return 1u;
l29:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 26358));
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l23_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26419)))), &_td_OOC_SymbolTable__RecordDesc, 26419)), 26426))+36);
  superType = (OOC_SymbolTable__Type)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l20_loop;
l39:
  return 0u;
  goto l46;
l41:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__ArrayElementType((OOC_SymbolTable__Type)i0);
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, i2);
  return i0;
  goto l46;
l43:
  return 1u;
  goto l46;
l45:
  return 1u;
l46:
  _failed_function(25152); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsByteCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26702)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l8;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 26740))+36);
  i1 = i1==1;
  if (i1) goto l6;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 26768))+36);
  i0 = i0==4;
  
  goto l7;
l6:
  i0=1u;
l7:
  return i0;
l8:
  _failed_function(26535); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNilCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27097)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27122)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27216)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27262)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l11;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27311)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i0) goto l9;
  return 0u;
  goto l20;
l9:
  return 1u;
  goto l20;
l11:
  return 1u;
  goto l20;
l13:
  return 1u;
  goto l20;
l15:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 27160))+36);
  i1 = i1==12;
  if (i1) goto l18;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 27187))+36);
  i0 = i0==16;
  
  goto l19;
l18:
  i0=1u;
l19:
  return i0;
l20:
  _failed_function(26866); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnly(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27633))+24);
  i1 = i1==2;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27683)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)usingModule;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnlyType(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27944)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27977)))), &_td_OOC_SymbolTable__ArrayDesc, 27977)), 27983))+38);
  
l5:
  if (i1) goto l7;
  i0=0u;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28014)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 29054))+28);
  i1 = i1==(-2);
  if (!i1) goto l83;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29210)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l81;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29588)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l68;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29995)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l62;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30309)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32632)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32753)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32747)))), 32747);
  goto l83;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32796))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32833))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32853))+36);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 32842))+28);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 32862))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32820)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l83;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32674))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32708))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32725))+36);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 32714))+28);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 32731))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32695)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l83;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30414))+36);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30579))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30615))+36);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 30625))+32);
  align = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30656))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 30666))+28);
  size = i2;
  
  goto l23;
l22:
  align = 1;
  size = 0;
  i1=1;i2=0;
l23:
  maxAlign = 32767;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31082))+8);
  nested = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l26;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l56;
l26:
  {register OOC_INT32 h0=i1;i1=i3;i3=i2;i2=h0;}
l27_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31150)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l51;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31201))+44);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31242))+44);
  i4 = *(OOC_INT16*)((_check_pointer(i4, 31248))+32);
  fieldAlign = i4;
  i5 = i4>32767;
  if (!i5) goto l34;
  fieldAlign = 32767;
  i4=32767;
l34:
  i5 = i4>i2;
  if (!i5) goto l38;
  align = i4;
  i2=i4;
l38:
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 31570))+52);
  if (i5) goto l45;
  i5 = _mod(i3,i4);
  i6 = i5!=0;
  if (!i6) goto l44;
  i3 = i3+(i4-i5);
  size = i3;
  
l44:
  OOC_SymbolTable__FieldDeclDesc_SetOffset((OOC_SymbolTable__FieldDecl)i1, i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32253))+44);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 32259))+28);
  i3 = i3+i4;
  size = i3;
  
  goto l51;
l45:
  OOC_SymbolTable__FieldDeclDesc_SetOffset((OOC_SymbolTable__FieldDecl)i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31800))+44);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 31806))+28);
  i4 = i4>i3;
  if (!i4) goto l51;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31856))+44);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 31862))+28);
  size = i3;
  
l51:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32353));
  nested = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l27_loop;
l55:
  i1=i3;
l56:
  i3 = _mod(i1,i2);
  i4 = i3!=0;
  if (i4) goto l59;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32582)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l83;
l59:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32506)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, ((i1+i2)-i3), i2);
  goto l83;
l62:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30036))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 30067))+36);
  if (i1) goto l65;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30210))+40);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30260))+40);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 30197))+48);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 30223))+28);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 30273))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30182)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (i3*i1), i2);
  goto l83;
l65:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30132))+40);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 30145))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30100)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (-1), i1);
  goto l83;
l68:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 29649);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 29649))*4);
  i1 = _check_pointer(i1, 29709);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 29709))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 29661))+28);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 29721))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29620)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29783))+36);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l71;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29834))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29844))+44);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
l71:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29897))+48);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 29905)), 0);
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l83;
  i2=0;
l74_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29941))+48);
  i3 = _check_pointer(i3, 29949);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 29949))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 29952))+44);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i3);
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l74_loop;
  goto l83;
l81:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 29268);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 29268))*4);
  i1 = _check_pointer(i1, 29328);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 29328))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 29280))+28);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 29340))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29239)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
l83:
  return;
  ;
}

void OOC_OOC_SymbolTable_TypeRules_init(void) {

  return;
  ;
}

/* --- */
