#include "Language/Set.d"
#include "__oo2c.h"

Language_Set__Value Language_Set__New(OOC_UINT32 value) {
  register OOC_INT32 i0,i1;
  Language_Set__Value v;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Set__Value.baseTypes[0]);
  v = (Language_Set__Value)i0;
  i1 = (OOC_INT32)Language_Set__type;
  Language__InitValue((Language__Value)i0, (Language__Type)i1);
  i1 = value;
  *(OOC_UINT32*)((_check_pointer(i0, 419))+4) = i1;
  return (Language_Set__Value)i0;
  ;
}

OOC_CHAR8 Language_Set__ValueDesc_Equals(Language_Set__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 534)))), &_td_Language_Set__ValueDesc);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i0 = *(OOC_UINT32*)((_check_pointer(i0, 557))+4);
  i1 = *(OOC_UINT32*)((_check_pointer(i1, 567))+4);
  return (i0==i1);
l4:
  _failed_function(480); return 0;
  ;
}

OOC_INT32 Language_Set__ValueDesc_Compare(Language_Set__Value v, ADT_Object__Object y) {

  _assert(OOC_FALSE, 127, 690);
  return -1;
  ;
}

OOC_INT32 Language_Set__ValueDesc_HashCode(Language_Set__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT32*)((_check_pointer(i0, 821))+4);
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, i0));
  ;
}

Language_Set__Value Language_Set__TypeDesc_ValueOf(Language_Set__Type t, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_UINT32 s;
  OOC_INT16 pos;
  OOC_CHAR8 c;
  auto void Language_Set__TypeDesc_ValueOf_GetChar();
  auto OOC_CHAR8 Language_Set__TypeDesc_ValueOf_IsDigit();
  auto void Language_Set__TypeDesc_ValueOf_ReadInteger();
    
    void Language_Set__TypeDesc_ValueOf_GetChar() {
      register OOC_INT32 i0,i1;

      i0 = pos;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 993)));
      c = i1;
      pos = (i0+1);
      return;
      ;
    }

    
    OOC_CHAR8 Language_Set__TypeDesc_ValueOf_IsDigit() {
      register OOC_INT32 i0,i1;

      i0 = c;
      i1 = i0>=(OOC_CHAR8)'0';
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l4;
l3:
      i0 = i0<=(OOC_CHAR8)'9';
      
l4:
      return i0;
      ;
    }

    
    void Language_Set__TypeDesc_ValueOf_ReadInteger() {
      register OOC_INT32 i0,i1,i2;

      i0 = Language_Set__TypeDesc_ValueOf_IsDigit();
      if (i0) goto l3;
      i0=0;
      goto l9;
l3:
      i0=0;
l4_loop:
      i1 = c;
      Language_Set__TypeDesc_ValueOf_GetChar();
      i2 = Language_Set__TypeDesc_ValueOf_IsDigit();
      i0 = ((i0*10)+i1)-48;
      if (i2) goto l4_loop;
l9:
      i1 = s;
      s = (i1|(_bit_range(i0,i0)));
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  s = 0;
  pos = 0;
  Language_Set__TypeDesc_ValueOf_GetChar();
  i0 = c;
  i0 = i0==(OOC_CHAR8)'{';
  if (!i0) goto l19;
  Language_Set__TypeDesc_ValueOf_GetChar();
  i0 = Language_Set__TypeDesc_ValueOf_IsDigit();
  if (!i0) goto l12;
  Language_Set__TypeDesc_ValueOf_ReadInteger();
  i0 = c;
  i0 = i0==(OOC_CHAR8)',';
  if (!i0) goto l12;
l6_loop:
  Language_Set__TypeDesc_ValueOf_GetChar();
  Language_Set__TypeDesc_ValueOf_ReadInteger();
  i0 = c;
  i0 = i0==(OOC_CHAR8)',';
  if (i0) goto l6_loop;
l12:
  i0 = c;
  i0 = i0==(OOC_CHAR8)'}';
  if (!i0) goto l19;
  Language_Set__TypeDesc_ValueOf_GetChar();
  i0 = c;
  i0 = i0==(OOC_CHAR8)'\000';
  if (!i0) goto l19;
  i0 = s;
  i0 = (OOC_INT32)Language_Set__New(i0);
  return (Language_Set__Value)i0;
l19:
  return (Language_Set__Value)(OOC_INT32)0;
  ;
}

ADT_String__String Language_Set__TypeDesc_ToString(Language_Set__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_Set__typeName;
  return (ADT_String__String)i0;
  ;
}

ADT_String__String Language_Set__ValueDesc_ToString(Language_Set__Value v) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer b;

  i0 = (OOC_INT32)ADT_StringBuffer__New("", 1);
  b = (ADT_StringBuffer__StringBuffer)i0;
  i1 = (OOC_INT32)v;
  i1 = *(OOC_UINT32*)((_check_pointer(i1, 1903))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1891)))), ADT_StringBuffer__StringBufferDesc_AppendSet)),ADT_StringBuffer__StringBufferDesc_AppendSet)((ADT_StringBuffer__StringBuffer)i0, i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1922)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (ADT_String__String)i0;
  ;
}

OOC_INT32 Language_Set__ValueDesc_ToLInt(Language_Set__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT32*)((_check_pointer(i0, 2030))+4);
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, i0));
  ;
}

void Language_Set__ValueDesc_Store(Language_Set__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  i1 = *(OOC_UINT32*)((_check_pointer(i1, 2122))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2111)))), BinaryRider__WriterDesc_WriteSet)),BinaryRider__WriterDesc_WriteSet)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void Language_Set__ValueDesc_Load(Language_Set__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2201)))), BinaryRider__ReaderDesc_ReadSet)),BinaryRider__ReaderDesc_ReadSet)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 2211))+4));
  return;
  ;
}

void OOC_Language_Set_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_Set__Type.baseTypes[0]);
  Language_Set__type = (Language_Set__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("Set", 4);
  Language_Set__typeName = (ADT_String__String)i0;
  return;
  ;
}

/* --- */
