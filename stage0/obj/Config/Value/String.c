#include "Config/Value/String.d"
#include "__oo2c.h"

Config_Value_String__Value Config_Value_String__New(const Config_Value__String str__ref, OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  Config_Value_String__Value s;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_String__Value.baseTypes[0]);
  s = (Config_Value_String__Value)i0;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)str, str_0d);
  *(OOC_INT32*)(_check_pointer(i0, 316)) = i1;
  return (Config_Value_String__Value)i0;
  ;
}

void Config_Value_String__ValueDesc_StringToValue(Config_Value_String__Value v, const Config_Value__String str__ref, OOC_LEN str_0d, Msg__Msg *errMsg) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)str, str_0d);
  *(OOC_INT32*)(_check_pointer(i0, 482)) = i1;
  *errMsg = (Msg__Msg)(OOC_INT32)0;
  return;
  ;
}

void Config_Value_String__ValueDesc_ValueToString(Config_Value_String__Value v, Config_Value__String str, OOC_LEN str_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 652));
  _copy_8((_check_pointer(i0, 660)),(OOC_INT32)str,str_0d);
  return;
  ;
}

Config_Value_String__Value Config_Value_String__ValueDesc_Clone(Config_Value_String__Value v) {
  register OOC_INT32 i0,i1,i2,i3;
  Config_Value_String__Value clone;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_String__Value.baseTypes[0]);
  clone = (Config_Value_String__Value)i0;
  i1 = (OOC_INT32)v;
  i1 = _check_pointer(i1, 793);
  i2 = (OOC_INT32)&_td_Config_Value_String__ValueDesc;
  i2 = i2!=i2;
  i3 = _check_pointer(i0, 787);
  if (!i2) goto l4;
  _failed_type_assert(787);
l4:
  _copy_block(i1,i3,4);
  return (Config_Value_String__Value)i0;
  ;
}

void Config_Value_String__ValueDesc_DefiningModule(Config_Value_String__Value v, Config_Value__String str, OOC_LEN str_0d) {

  _copy_8("Config:Value:String",(OOC_INT32)str,str_0d);
  return;
  ;
}

void OOC_Config_Value_String_init(void) {

  return;
  ;
}

/* --- */
