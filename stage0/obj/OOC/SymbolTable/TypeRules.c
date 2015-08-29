#include <OOC/SymbolTable/TypeRules.d>
#include <__oo2c.h>
#include <setjmp.h>

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
  i0=0u;
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
  i1=1u;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2213)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l8;
l7:
  i0=1u;
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsCharType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2391)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2429))+32);
  return (_in(i0,14u));
l4:
  _failed_function(2263); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2684)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 2722))+32);
  return (_in(i0,57344u));
l4:
  _failed_function(2552); return 0;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2986)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3021)))), &_td_OOC_SymbolTable__PointerDesc, 3021)), 3029))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3039)))), &_td_OOC_SymbolTable__RecordDesc);
  
l5:
  if (i1) goto l7;
  return 0u;
  goto l49;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3079)))), &_td_OOC_SymbolTable__PointerDesc, 3079)), 3087))+32);
  r = (OOC_SymbolTable__Type)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=0u;
  goto l24;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3138))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l13;
  i1=0u;
  goto l15;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3176))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3187))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3192))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3196)),(const void*)(OOC_INT32)recordName))==0;
  
l15:
  if (i1) goto l17;
  i1=0u;
  goto l19;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3231))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3242))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3250)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l19:
  if (i1) goto l21;
  i1=0u;
  goto l22;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3284))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3295))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3307)))), &_td_OOC_SymbolTable__ModuleDesc, 3307)), 3314))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3319))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3323)),(const void*)(OOC_INT32)module))==0;
  
l22:
  i1 = !i1;
  
l24:
  if (!i1) goto l48;
l27_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3358)))), &_td_OOC_SymbolTable__RecordDesc, 3358)), 3365))+32);
  r = (OOC_SymbolTable__Type)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l30;
  i1=0u;
  goto l44;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3138))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l33;
  i1=0u;
  goto l35;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3176))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3187))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3192))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3196)),(const void*)(OOC_INT32)recordName))==0;
  
l35:
  if (i1) goto l37;
  i1=0u;
  goto l39;
l37:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3231))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3242))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3250)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l39:
  if (i1) goto l41;
  i1=0u;
  goto l42;
l41:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3284))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3295))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3307)))), &_td_OOC_SymbolTable__ModuleDesc, 3307)), 3314))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3319))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3323)),(const void*)(OOC_INT32)module))==0;
  
l42:
  i1 = !i1;
  
l44:
  if (i1) goto l27_loop;
l48:
  return (i0!=(OOC_INT32)0);
l49:
  _failed_function(2866); return 0;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4667)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5041)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l5;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5070))+36);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5084)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l8;
  return (OOC_SymbolTable__PredefType)(OOC_INT32)0;
  goto l18;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5141))+36);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__PredefType)i0;
  goto l18;
l11:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4702))+32);
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
  _failed_function(4208); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__StringBase(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5375)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5365)))), 5365);
  goto l10;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5408))+32);
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
    _failed_case(i0, 5399);
    goto l10;
  }
l10:
  _failed_function(5266); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_TypeRules__MatchingStringConst(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_INT16 id;

  i0 = (OOC_INT32)type;
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5770)))), &_td_OOC_SymbolTable__PredefTypeDesc, 5770)), 5781))+32);
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
    _failed_case(i0, 5756);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6133)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6171))+32);
  return (_in(i0,240u));
l4:
  _failed_function(6003); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsRealType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6417)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6455))+32);
  return (_in(i0,768u));
l4:
  _failed_function(6284); return 0;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6881)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 6919))+32);
  return (_in(i0,1024u));
l4:
  _failed_function(6760); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IncludesType(OOC_SymbolTable__Type large, OOC_SymbolTable__Type small) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 largeId;

  i0 = (OOC_INT32)large;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7405)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)small;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7433)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  
l5:
  if (!i1) goto l30;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7484)))), &_td_OOC_SymbolTable__PredefTypeDesc, 7484)), 7495))+32);
  largeId = i1;
  i2 = (OOC_INT32)small;
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7527)))), &_td_OOC_SymbolTable__PredefTypeDesc, 7527)), 7538))+32);
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
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8084)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8069);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8120)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8145)))), &_td_OOC_SymbolTable__ArrayDesc, 8145)), 8151))+32);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayOfChar(OOC_SymbolTable__Type type, OOC_CHAR8 includeFixed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8505)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 8490);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8549)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l9;
l3:
  i1 = includeFixed;
  if (i1) goto l6;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8599)))), &_td_OOC_SymbolTable__ArrayDesc, 8599)), 8605))+32);
  
  goto l9;
l6:
  i1=1u;
l9:
  if (i1) goto l11;
  i0=0u;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8651)))), &_td_OOC_SymbolTable__ArrayDesc, 8651)), 8657))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l12:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRecordBaseType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8893)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8919)))), &_td_OOC_SymbolTable__RecordDesc, 8919)), 8926))+50);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidParameterType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9174)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9159);
  i1 = OOC_SymbolTable_TypeRules__IsNamedType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9280)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
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
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9523)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 9508);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9565)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9595)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l5;
  i0=0u;
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9623)))), &_td_OOC_SymbolTable__PointerDesc, 9623)), 9631))+32);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9642)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10225)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10248)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidArrayElementType(OOC_SymbolTable__Type type, OOC_CHAR8 isOpenArray) {
  register OOC_INT32 i0,i1;

  i0 = isOpenArray;
  if (i0) goto l7;
  i0 = (OOC_INT32)type;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10642)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i1) goto l5;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10669)))), &_td_OOC_SymbolTable__ArrayDesc, 10669)), 10675))+32);
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
  _failed_function(10304); return 0;
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

OOC_CHAR8 OOC_SymbolTable_TypeRules__VariableInstance(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11254)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11282)))), &_td_OOC_SymbolTable__RecordDesc, 11282)), 11289))+49);
  i0 = !i0;
  
  goto l4;
l3:
  i0=1u;
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
  i0=0u;
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
  i2=0u;
  goto l7;
l5:
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
  
l7:
  if (i2) goto l9;
  i2=0u;
  goto l13;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11968)))), &_td_OOC_SymbolTable__ArrayDesc, 11968)), 11974))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12025)))), &_td_OOC_SymbolTable__ArrayDesc, 12025)), 12031))+36);
  i2 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  
  goto l13;
l11:
  i2=1u;
l13:
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12063)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l17;
  i2=0u;
  goto l19;
l17:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12087)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
l19:
  if (i2) goto l21;
  i0=0u;
  goto l24;
l21:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12146)))), &_td_OOC_SymbolTable__FormalParsDesc, 12146)), (OOC_SymbolTable__FormalPars)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12165)))), &_td_OOC_SymbolTable__FormalParsDesc, 12165)), 0u);
  
  goto l24;
l23:
  i0=1u;
l24:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsExtensionOf(OOC_SymbolTable__Type type, OOC_SymbolTable__Type base) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12501)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12525)))), &_td_OOC_SymbolTable__PointerDesc);
  
l5:
  if (!i1) goto l8;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12569)))), &_td_OOC_SymbolTable__PointerDesc, 12569)), 12577))+32);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)base;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12612)))), &_td_OOC_SymbolTable__PointerDesc, 12612)), 12620))+32);
  base = (OOC_SymbolTable__Type)i1;
  
l8:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12653)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = (OOC_INT32)base;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12676)))), &_td_OOC_SymbolTable__RecordDesc);
  
l13:
  if (!i1) goto l35;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l17;
  i1=0u;
  goto l19;
l17:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12839)))), &_td_OOC_SymbolTable__RecordDesc);
  
l19:
  if (!i1) goto l35;
  i1 = (OOC_INT32)base;
  
l21_loop:
  i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  if (i2) goto l24;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12958)))), &_td_OOC_SymbolTable__RecordDesc, 12958)), 12965))+32);
  type = (OOC_SymbolTable__Type)i0;
  
  goto l25;
l24:
  return 1u;
  
l25:
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l28;
  i2=0u;
  goto l30;
l28:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12839)))), &_td_OOC_SymbolTable__RecordDesc);
  
l30:
  if (i2) goto l21_loop;
l35:
  return 0u;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__FormalParamsMatch(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars, OOC_CHAR8 allowSpecialization) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14245))+44);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14272))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14253)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14280)), 0);
  i1 = i1!=i3;
  if (i1) goto l142;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14329))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14361))+36);
  i1 = (i1==(OOC_INT32)0)!=(i3==(OOC_INT32)0);
  if (i1) goto l140;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14426))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = allowSpecialization;
  i1 = !i1;
  
l9:
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14515))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14538))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  i1 = !i1;
  
l13:
  if (i1) goto l138;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14596))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l17;
  i1=0u;
  goto l19;
l17:
  i1 = allowSpecialization;
  
l19:
  if (i1) goto l21;
  i1=0u;
  goto l27;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14682))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14705))+36);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14758))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14781))+36);
  i1 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  
  goto l25;
l24:
  i1=1u;
l25:
  i1 = !i1;
  
l27:
  if (i1) goto l136;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 14840))+48);
  i3 = *(OOC_UINT8*)((_check_pointer(i2, 14871))+48);
  i1 = i1!=i3;
  if (i1) goto l134;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14959))+44);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14967)), 0);
  i3 = 0<i1;
  if (!i3) goto l45;
  i3=0;
l33_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14996))+44);
  i4 = _check_pointer(i4, 15004);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15004))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15044))+44);
  i5 = _check_pointer(i5, 15052);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15052))*4);
  i4 = *(OOC_UINT8*)((_check_pointer(i4, 15007))+50);
  i5 = *(OOC_UINT8*)((_check_pointer(i5, 15055))+50);
  i4 = i4!=i5;
  if (i4) goto l36;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15105))+44);
  i4 = _check_pointer(i4, 15113);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15113))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15162))+44);
  i5 = _check_pointer(i5, 15170);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15170))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15116))+40);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15173))+40);
  i4 = OOC_SymbolTable_TypeRules__EqualTypes((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  i4 = !i4;
  
  goto l38;
l36:
  i4=1u;
l38:
  if (!i4) goto l40;
  return 0u;
l40:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l33_loop;
l45:
  i1 = allowSpecialization;
  if (i1) goto l104;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15926))+52);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15933)), 0);
  i3 = 0<i1;
  if (!i3) goto l75;
  i3=0;
l50_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15993))+52);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16000)), 0);
  i4 = 0!=i4;
  if (i4) goto l53;
  i4=0u;
  goto l55;
l53:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16041))+52);
  i4 = _check_pointer(i4, 16048);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 16048))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16093))+52);
  i5 = _check_pointer(i5, 16100);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 16100))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16051))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16103))+16);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15993))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16000)), 0);
  i5 = i4!=i5;
  if (i5) goto l61;
  i5=0u;
  goto l63;
l61:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16041))+52);
  i5 = _check_pointer(i5, 16048);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 16048))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16093))+52);
  i6 = _check_pointer(i6, 16100);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16100))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16051))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16103))+16);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l63:
  if (i5) goto l58_loop;
l67:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16179))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16186)), 0);
  i4 = i4==i5;
  if (!i4) goto l70;
  return 0u;
l70:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l50_loop;
l75:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16299))+52);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16306)), 0);
  i3 = 0<i1;
  if (!i3) goto l133;
  i3=0;
l78_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16366))+52);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16373)), 0);
  i4 = 0!=i4;
  if (i4) goto l81;
  i4=0u;
  goto l83;
l81:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16414))+52);
  i4 = _check_pointer(i4, 16421);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 16421))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16466))+52);
  i5 = _check_pointer(i5, 16473);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 16473))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16424))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16476))+16);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16366))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16373)), 0);
  i5 = i4!=i5;
  if (i5) goto l89;
  i5=0u;
  goto l91;
l89:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16414))+52);
  i5 = _check_pointer(i5, 16421);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 16421))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16466))+52);
  i6 = _check_pointer(i6, 16473);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 16473))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 16424))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16476))+16);
  i5 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l91:
  if (i5) goto l86_loop;
l95:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16552))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 16559)), 0);
  i4 = i4==i5;
  if (!i4) goto l98;
  return 0u;
l98:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l78_loop;
  goto l133;
l104:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15302))+52);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15309)), 0);
  i3 = 0<i1;
  if (!i3) goto l133;
  i3=0;
l107_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15369))+52);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15376)), 0);
  i4 = 0!=i4;
  if (i4) goto l110;
  i4=0u;
  goto l112;
l110:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15422))+52);
  i4 = _check_pointer(i4, 15429);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 15429))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15479))+52);
  i5 = _check_pointer(i5, 15486);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15486))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15432))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15489))+16);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15369))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15376)), 0);
  i5 = i4!=i5;
  if (i5) goto l118;
  i5=0u;
  goto l120;
l118:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15422))+52);
  i5 = _check_pointer(i5, 15429);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15429))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15479))+52);
  i6 = _check_pointer(i6, 15486);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 15486))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15432))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15489))+16);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l120:
  if (i5) goto l115_loop;
l124:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15565))+52);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15572)), 0);
  i4 = i4==i5;
  if (!i4) goto l127;
  return 0u;
l127:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l107_loop;
l133:
  return 1u;
  goto l143;
l134:
  return 0u;
  goto l143;
l136:
  return 0u;
  goto l143;
l138:
  return 0u;
  goto l143;
l140:
  return 0u;
  goto l143;
l142:
  return 0u;
l143:
  _failed_function(13056); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidRedefinition(OOC_SymbolTable__FormalPars baseFPars, OOC_SymbolTable__FormalPars procFPars) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)baseFPars;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16948))+32);
  i2 = (OOC_INT32)procFPars;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16982))+32);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 16958))+50);
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 16992))+50);
  i1 = i1==i3;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)i0, (OOC_SymbolTable__FormalPars)i2, 1u);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsValidForwardDecl(OOC_SymbolTable__FormalPars forward, OOC_SymbolTable__FormalPars proc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)forward;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17299))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)proc;
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)i1, (OOC_SymbolTable__FormalPars)i0, 0u);
  return i0;
  goto l4;
l3:
  i1 = (OOC_INT32)proc;
  i0 = OOC_SymbolTable_TypeRules__IsValidRedefinition((OOC_SymbolTable__FormalPars)i1, (OOC_SymbolTable__FormalPars)i0);
  return i0;
l4:
  _failed_function(17099); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsArrayType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  _assert((!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17611)))), &_td_OOC_SymbolTable__TypeNameDesc))), 127, 17596);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17647)))), &_td_OOC_SymbolTable__ArrayDesc));
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18195)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l5:
  if (!i1) goto l17;
  
l8_loop:
  i1 = (OOC_INT32)argType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18241)))), &_td_OOC_SymbolTable__ArrayDesc, 18241)), 18247))+36);
  argType = (OOC_SymbolTable__Type)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18293)))), &_td_OOC_SymbolTable__ArrayDesc, 18293)), 18299))+36);
  fparType = (OOC_SymbolTable__Type)i0;
  i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i0);
  if (i2) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18195)))), &_td_OOC_SymbolTable__ArrayDesc);
  
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
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19030)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l41;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19183)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i3) goto l17;
  return 0u;
  goto l46;
l17:
  i3 = i0!=(OOC_INT32)0;
  if (!i3) goto l39;
l20_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19320))+8);
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l34;
l23_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19386)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l29;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19449))+40);
  i4 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4, i2);
  if (!i4) goto l29;
  return 1u;
l29:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19619));
  field = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l23_loop;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19680)))), &_td_OOC_SymbolTable__RecordDesc, 19680)), 19687))+32);
  superType = (OOC_SymbolTable__Type)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l20_loop;
l39:
  return 0u;
  goto l46;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19100)))), &_td_OOC_SymbolTable__ArrayDesc, 19100)), 19106))+36);
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, i2);
  return i0;
  goto l46;
l43:
  return 1u;
  goto l46;
l45:
  return 1u;
l46:
  _failed_function(18398); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsByteCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19963)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 0u;
  goto l8;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 20001))+32);
  i1 = i1==1;
  if (i1) goto l6;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 20029))+32);
  i0 = i0==4;
  
  goto l7;
l6:
  i0=1u;
l7:
  return i0;
l8:
  _failed_function(19796); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsNilCompatible(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20355)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20449)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l9;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20495)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i0) goto l7;
  return 0u;
  goto l16;
l7:
  return 1u;
  goto l16;
l9:
  return 1u;
  goto l16;
l11:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 20393))+32);
  i1 = i1==12;
  if (i1) goto l14;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 20420))+32);
  i0 = i0==16;
  
  goto l15;
l14:
  i0=1u;
l15:
  return i0;
l16:
  _failed_function(20127); return 0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnly(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 20820))+24);
  i1 = i1==2;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20870)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)usingModule;
  i0 = i0!=i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_TypeRules__IsReadOnlyType(OOC_SymbolTable__Module usingModule, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21131)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21164)))), &_td_OOC_SymbolTable__ArrayDesc, 21164)), 21170))+34);
  
l5:
  if (i1) goto l7;
  i0=0u;
  goto l8;
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21201)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 22241))+24);
  i1 = i1==(-2);
  if (!i1) goto l75;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22397)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l73;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22775)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l60;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23182)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l54;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23496)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l11;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23490)))), 23490);
  goto l75;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23601))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23766))+32);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23802))+32);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 23812))+28);
  align = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23843))+32);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 23853))+24);
  size = i2;
  
  goto l15;
l14:
  align = 1;
  size = 0;
  i1=1;i2=0;
l15:
  maxAlign = 32767;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24269))+8);
  nested = (OOC_SymbolTable__Item)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l18;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l48;
l18:
  {register OOC_INT32 h0=i1;i1=i3;i3=i2;i2=h0;}
l19_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24337)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (!i4) goto l43;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24388))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24429))+40);
  i4 = *(OOC_INT16*)((_check_pointer(i4, 24435))+28);
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
  i5 = *(OOC_UINT8*)((_check_pointer(i0, 24757))+48);
  if (i5) goto l37;
  i5 = _mod(i3,i4);
  i6 = i5!=0;
  if (!i6) goto l36;
  i3 = i3+(i4-i5);
  size = i3;
  
l36:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25389)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25440))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 25446))+24);
  i3 = i3+i4;
  size = i3;
  
  goto l43;
l37:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24946)))), OOC_SymbolTable__FieldDeclDesc_SetOffset)),OOC_SymbolTable__FieldDeclDesc_SetOffset)((OOC_SymbolTable__FieldDecl)i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24987))+40);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 24993))+24);
  i4 = i4>i3;
  if (!i4) goto l43;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25043))+40);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 25049))+24);
  size = i3;
  
l43:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25540));
  nested = (OOC_SymbolTable__Item)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l19_loop;
l47:
  i1=i3;
l48:
  i3 = _mod(i1,i2);
  i4 = i3!=0;
  if (i4) goto l51;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25769)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i1, i2);
  goto l75;
l51:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25693)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, ((i1+i2)-i3), i2);
  goto l75;
l54:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23223))+36);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 23254))+32);
  if (i1) goto l57;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23397))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23447))+36);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 23384))+44);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 23410))+24);
  i2 = *(OOC_INT16*)((_check_pointer(i2, 23460))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23369)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (i3*i1), i2);
  goto l75;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23319))+36);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 23332))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23287)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, (-1), i1);
  goto l75;
l60:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 22836);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 22836))*4);
  i1 = _check_pointer(i1, 22896);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 22896))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 22848))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 22908))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22807)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22970))+32);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l63;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23021))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23031))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i1);
l63:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23084))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23092)), 0);
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l75;
  i2=0;
l66_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23128))+44);
  i3 = _check_pointer(i3, 23136);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 23136))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 23139))+40);
  OOC_SymbolTable_TypeRules__AllocateType((OOC_SymbolTable__Type)i3);
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l66_loop;
  goto l75;
l73:
  i1 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i1, 22455);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(12, i3, OOC_UINT8, 22455))*4);
  i1 = _check_pointer(i1, 22515);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(12, i3, OOC_UINT8, 22515))*4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 22467))+24);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 22527))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22426)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i0, i2, i1);
l75:
  return;
  ;
}

void OOC_OOC_SymbolTable_TypeRules_init(void) {

  return;
  ;
}

/* --- */
