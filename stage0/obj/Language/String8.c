#include "Language/String8.d"
#include "__oo2c.h"

static void Language_String8__Init(Language_String8__Value v, ADT_String__String value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Language_String8__type;
  i1 = (OOC_INT32)v;
  Language__InitValue((Language__Value)i1, (Language__Type)i0);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 490))+4) = i0;
  return;
  ;
}

Language_String8__Value Language_String8__New(ADT_String__String value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)value;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 607));
  i1 = i1==0;
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String8__Value.baseTypes[0]);
  Language_String8__Init((Language_String8__Value)i1, (ADT_String__String)i0);
  return (Language_String8__Value)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)Language_String8__empty;
  return (Language_String8__Value)i0;
l4:
  _failed_function(530); return 0;
  ;
}

Language_String8__Value Language_String8__NewRegion(const OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos) {
  register OOC_INT32 i0,i1;

  i0 = pos;
  i1 = endPos;
  i0 = (OOC_INT32)ADT_String__NewRegion((void*)(OOC_INT32)source, source_0d, i0, i1);
  i0 = (OOC_INT32)Language_String8__New((ADT_String__String)i0);
  return (Language_String8__Value)i0;
  ;
}

Language_String8__Value Language_String8__NewString(const OOC_CHAR8 source[], OOC_LEN source_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(0, source_0d, OOC_UINT32, 1013)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 1013)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Language_String8__NewRegion((void*)(OOC_INT32)source, source_0d, 0, i0);
  return (Language_String8__Value)i0;
  ;
}

Language_String8__Value Language_String8__NewChar(OOC_CHAR8 source) {
  register OOC_INT32 i0;
  OOC_CHAR8 str[1];

  i0 = source;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1, OOC_UINT8, 1192))) = i0;
  i0 = (OOC_INT32)Language_String8__NewRegion((void*)(OOC_INT32)str, 1, 0, 1);
  return (Language_String8__Value)i0;
  ;
}

OOC_INT32 Language_String8__ValueDesc_Length(Language_String8__Value v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1317))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 1324));
  return i0;
  ;
}

OOC_CHAR8 Language_String8__ValueDesc_CharAt(Language_String8__Value v, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2;

  i0 = i;
  i1 = 0<=i0;
  i2 = (OOC_INT32)v;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1434))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 1441));
  i1 = i0<i1;
  
l4:
  _assert(i1, 127, 1409);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1465))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1472))+4);
  i1 = _check_pointer(i1, 1479);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 1479)));
  return i0;
  ;
}

OOC_INT32 Language_String8__ValueDesc_Compare(Language_String8__Value v, ADT_Object__Object str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1579))+4);
  i2 = (OOC_INT32)str;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1579))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1598)))), &_td_Language_String8__ValueDesc, 1598)), 1604))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1585)))), ADT_String__StringDesc_Compare)),ADT_String__StringDesc_Compare)((ADT_String__String)i0, (ADT_String__String)i2);
  return i0;
  ;
}

Language_String8__Value Language_String8__ValueDesc_Concat(Language_String8__Value v, Language_String8__Value str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1700))+4);
  i2 = (OOC_INT32)str;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1700))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1717))+4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1706)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i0, (ADT_String__String)i2);
  i0 = (OOC_INT32)Language_String8__New((ADT_String__String)i0);
  return (Language_String8__Value)i0;
  ;
}

OOC_CHAR8 Language_String8__ValueDesc_Equals(Language_String8__Value v, ADT_Object__Object y) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)y;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1820)))), &_td_Language_String8__ValueDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1833))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1833))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1851)))), &_td_Language_String8__ValueDesc, 1851)), 1857))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1840)))), ADT_String__StringDesc_Equals)),ADT_String__StringDesc_Equals)((ADT_String__String)i1, (ADT_Object__Object)i0);
  
l4:
  return i0;
  ;
}

OOC_INT32 Language_String8__ValueDesc_HashCode(Language_String8__Value v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1947))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1947))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1954)))), ADT_String__StringDesc_HashCode)),ADT_String__StringDesc_HashCode)((ADT_String__String)i0);
  return i0;
  ;
}

ADT_String__String Language_String8__ValueDesc_ToString(Language_String8__Value v) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;
  OOC_CHAR8 delim[2];
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2140))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2140))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2147)))), ADT_String__StringDesc_IndexOf)),ADT_String__StringDesc_IndexOf)((ADT_String__String)i2, (OOC_CHAR8)'"', 0);
  i = i1;
  i1 = i1<0;
  if (i1) goto l3;
  _copy_8("\047",(OOC_INT32)delim,2);
  goto l4;
l3:
  _copy_8("\"",(OOC_INT32)delim,2);
l4:
  i1 = (OOC_INT32)ADT_StringBuffer__New((void*)(OOC_INT32)delim, 2);
  sb = (ADT_StringBuffer__StringBuffer)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2296))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2285)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (ADT_String__String)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2312)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i1, (void*)(OOC_INT32)delim, 2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2349)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i1);
  return (ADT_String__String)i0;
  ;
}

void Language_String8__ValueDesc_Store(Language_String8__Value v, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Store((Language__Value)i1, (ADT_Object__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2475))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2459)))), ADT_Object__WriterDesc_WriteObject)),ADT_Object__WriterDesc_WriteObject)((ADT_Object__Writer)i0, (ADT_Object__Object)i1);
  return;
  ;
}

void Language_String8__ValueDesc_Load(Language_String8__Value v, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Object__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)v;
  Language__ValueDesc_Load((Language__Value)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2607)))), ADT_Object__ReaderDesc_ReadObject)),ADT_Object__ReaderDesc_ReadObject)((ADT_Object__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 2632))+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2654)))), &_td_ADT_String__StringDesc, 2654));
  return;
  ;
}

Language_String8__Value Language_String8__TypeDesc_Value(Language_String8__Type t, ADT_String__String value) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)Language_String8__New((ADT_String__String)i0);
  return (Language_String8__Value)i0;
  ;
}

Language_String8__Value Language_String8__TypeDesc_ValueOf(Language_String8__Type t, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2904)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2904)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = i0>=2;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 2962)));
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 2971)));
  i1 = i1==i2;
  
l14:
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l22;
l16:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 2985)));
  i1 = i1==(OOC_CHAR8)'"';
  if (i1) goto l19;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 3003)));
  i1 = i1==(OOC_CHAR8)'\047';
  
  goto l22;
l19:
  i1=OOC_TRUE;
l22:
  if (i1) goto l24;
  return (Language_String8__Value)(OOC_INT32)0;
  goto l25;
l24:
  i0 = (OOC_INT32)Language_String8__NewRegion((void*)(OOC_INT32)str, str_0d, 1, (i0-1));
  return (Language_String8__Value)i0;
l25:
  _failed_function(2801); return 0;
  ;
}

ADT_String__String Language_String8__TypeDesc_ToString(Language_String8__Type t) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_String8__typeName;
  return (ADT_String__String)i0;
  ;
}

void OOC_Language_String8_init(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String8__Type.baseTypes[0]);
  Language_String8__type = (Language_String8__Type)i0;
  Language__InitType((Language__Type)i0);
  i0 = (OOC_INT32)ADT_String__New("String8", 8);
  Language_String8__typeName = (ADT_String__String)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String8__Value.baseTypes[0]);
  Language_String8__empty = (Language_String8__Value)i0;
  i1 = (OOC_INT32)ADT_String__New("", 1);
  Language_String8__Init((Language_String8__Value)i0, (ADT_String__String)i1);
  return;
  ;
}

/* --- */
