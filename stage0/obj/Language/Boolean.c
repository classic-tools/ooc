#include "Language/Boolean.d"
#include "__oo2c.h"

Language_Boolean__Value Language_Boolean__New(OOC_CHAR8 value) {
  register OOC_INT32 i0,i1;
  Language_Boolean__Value v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Boolean__Value.baseTypes[0]);
  v = (Language_Boolean__Value)i0;
  i1 = (OOC_INT32)Language_Boolean__type;
  Language__InitValue((Language__Value)i0, (Language__Type)i1);
  i1 = value;
  *(OOC_UINT8*)((_check_pointer(i0, 426))+4) = i1;
  return (Language_Boolean__Value)i0;
  ;
}

OOC_CHAR8 Language_Boolean__ValueDesc_Equals(Language_Boolean__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 545)))), &_td_Language_Boolean__ValueDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 559))+4);
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 571)))), &_td_Language_Boolean__ValueDesc, 571)), 577))+4);
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

OOC_INT32 Language_Boolean__ValueDesc_Compare(Language_Boolean__Value v, ADT_Object__Object y) {

  _assert(OOC_FALSE, 127, 674);
  return -1;
  ;
}

OOC_INT32 Language_Boolean__ValueDesc_HashCode(Language_Boolean__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 779))+4);
  if (i0) goto l3;
  return 2;
  goto l4;
l3:
  return 1;
l4:
  _failed_function(740); return 0;
  ;
}

ADT_String__String Language_Boolean__ValueDesc_ToString(Language_Boolean__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 923))+4);
  if (i0) goto l3;
  i0 = (OOC_INT32)ADT_String__New("FALSE", 6);
  return (ADT_String__String)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)ADT_String__New("TRUE", 5);
  return (ADT_String__String)i0;
l4:
  _failed_function(881); return 0;
  ;
}

Language_Boolean__Value Language_Boolean__TypeDesc_Value(Language_Boolean__Type t, OOC_CHAR8 value) {
  register OOC_INT32 i0;

  i0 = value;
  i0 = (OOC_INT32)Language_Boolean__New(i0);
  return (Language_Boolean__Value)i0;
  ;
}

Language_Boolean__Value Language_Boolean__TypeDesc_ValueOf(Language_Boolean__Type t, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)"TRUE"))==0;
  if (i0) goto l7;
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)"FALSE"))==0;
  if (i0) goto l5;
  return (Language_Boolean__Value)(OOC_INT32)0;
  goto l8;
l5:
  i0 = (OOC_INT32)Language_Boolean__false;
  return (Language_Boolean__Value)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)Language_Boolean__true;
  return (Language_Boolean__Value)i0;
l8:
  _failed_function(1144); return 0;
  ;
}

ADT_String__String Language_Boolean__TypeDesc_ToString(Language_Boolean__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_Boolean__typeName;
  return (ADT_String__String)i0;
  ;
}

void OOC_Language_Boolean_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Boolean__Type.baseTypes[0]);
  Language_Boolean__type = (Language_Boolean__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("BOOLEAN", 8);
  Language_Boolean__typeName = (ADT_String__String)i0;
  i0 = (OOC_INT32)Language_Boolean__New(OOC_TRUE);
  Language_Boolean__true = (Language_Boolean__Value)i0;
  i0 = (OOC_INT32)Language_Boolean__New(OOC_FALSE);
  Language_Boolean__false = (Language_Boolean__Value)i0;
  return;
  ;
}

/* --- */
