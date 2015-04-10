#include "Language.d"
#include "__oo2c.h"

void Language__InitValue(Language__Value v, Language__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)(_check_pointer(i0, 1156)) = i1;
  return;
  ;
}

OOC_CHAR8 Language__ValueDesc_Equals(Language__Value v, ADT_Object__Object y) {

  _failed_function(1221); return 0;
  ;
}

OOC_INT32 Language__ValueDesc_Compare(Language__Value v, ADT_Object__Object y) {

  _failed_function(1308); return 0;
  ;
}

OOC_INT32 Language__ValueDesc_HashCode(Language__Value v) {

  _failed_function(1394); return 0;
  ;
}

ADT_String__String Language__ValueDesc_ToString(Language__Value v) {

  _failed_function(1468); return 0;
  ;
}

void Language__ValueDesc_Store(Language__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1591));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1575)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void Language__ValueDesc_Load(Language__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1703)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)(_check_pointer(i0, 1728)) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1742)))), &_td_Language__TypeDesc, 1742));
  return;
  ;
}

void Language__InitType(Language__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)t;
  ADT_Object__Init((ADT_Object__Object)i0);
  return;
  ;
}

ADT_String__String Language__TypeDesc_ToString(Language__Type t) {

  _failed_function(1869); return 0;
  ;
}

Language__Value Language__TypeDesc_ValueOf(Language__Type t, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  _failed_function(1944); return 0;
  ;
}

void OOC_Language_init(void) {

  return;
  ;
}

/* --- */
