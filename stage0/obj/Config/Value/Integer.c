#include <Config/Value/Integer.d>
#include <__oo2c.h>
#include <setjmp.h>

void Config_Value_Integer__ErrorContextDesc_GetTemplate(Config_Value_Integer__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 669))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,103,101,114,32,118,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,102,111,114,109,97,116,32,102,111,114,32,105,110,116,101,103,101,114,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,105,115,32,101,109,112,116,121,0}),(void*)(OOC_INT32)t,128);
    goto l6;
  default:
    _failed_case(i1, 661);
    goto l6;
  }
l6:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 872)))), Config_Value__ErrorContextDesc_WriteTemplate)),Config_Value__ErrorContextDesc_WriteTemplate)((Config_Value__ErrorContext)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

Config_Value_Integer__Value Config_Value_Integer__New(OOC_INT32 _int) {
  register OOC_INT32 i0,i1;
  Config_Value_Integer__Value s;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_Integer__Value.baseTypes[0]);
  s = (Config_Value_Integer__Value)i0;
  i1 = _int;
  *(OOC_INT32*)(_check_pointer(i0, 1007)) = i1;
  return (Config_Value_Integer__Value)i0;
  ;
}

void Config_Value_Integer__ValueDesc_StringToValue(Config_Value_Integer__Value v, const Config_Value__String str__ref, OOC_LEN str_0d, Msg__Msg *errMsg) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT16 i;
  OOC_INT16 len;
  OOC_INT32 _int;
  OOC_INT8 res;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 1285)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 1301)));
  i0 = (OOC_UINT8)i0<=(OOC_UINT8)32u;
  
l5:
  if (i0) goto l7;
  i0=0;
  goto l17;
l7:
  i0=0;
l8_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 1285)));
  i1 = i1!=0u;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 1301)));
  i1 = (OOC_UINT8)i1<=(OOC_UINT8)32u;
  
l13:
  if (i1) goto l8_loop;
l17:
  Strings__Delete((void*)(OOC_INT32)str, str_0d, 0, i0);
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  len = i0;
  i = i0;
  i1 = i0>0;
  if (i1) goto l20;
  i1=0u;
  goto l22;
l20:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT16, 1494)));
  i1 = (OOC_UINT8)i1<=(OOC_UINT8)32u;
  
l22:
  if (i1) goto l24;
  i1=i0;
  goto l34;
l24:
  i1=i0;
l25_loop:
  i1 = i1-1;
  i = i1;
  i2 = i1>0;
  if (i2) goto l28;
  i2=0u;
  goto l30;
l28:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1-1), str_0d, OOC_UINT16, 1494)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l30:
  if (i2) goto l25_loop;
l34:
  Strings__Delete((void*)(OOC_INT32)str, str_0d, i1, (i0-i1));
  IntStr__StrToInt((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)&_int, (void*)(OOC_INT32)&res);
  i0 = res;
  switch (i0) {
  case 0:
    i0 = (OOC_INT32)v;
    i1 = _int;
    *(OOC_INT32*)(_check_pointer(i0, 1661)) = i1;
    *errMsg = (Msg__Msg)0;
    goto l38;
  default:
    i1 = (OOC_INT32)Config_Value_Integer__integerContext;
    i0 = (OOC_INT32)Msg__New((Msg__Context)i1, i0);
    *errMsg = (Msg__Msg)i0;
    goto l38;
  }
l38:
  return;
  ;
}

void Config_Value_Integer__ValueDesc_ValueToString(Config_Value_Integer__Value v, Config_Value__String str, OOC_LEN str_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 1881));
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

Config_Value_Integer__Value Config_Value_Integer__ValueDesc_Clone(Config_Value_Integer__Value v) {
  register OOC_INT32 i0,i1,i2,i3;
  Config_Value_Integer__Value clone;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_Integer__Value.baseTypes[0]);
  clone = (Config_Value_Integer__Value)i0;
  i1 = (OOC_INT32)v;
  i1 = _check_pointer(i1, 2022);
  i2 = _check_pointer(i0, 2016);
  i3 = (OOC_INT32)&_td_Config_Value_Integer__ValueDesc;
  i3 = i3!=i3;
  if (!i3) goto l4;
  _failed_type_assert(2016);
l4:
  _copy_block(i1,i2,4);
  return (Config_Value_Integer__Value)i0;
  ;
}

void Config_Value_Integer__ValueDesc_DefiningModule(Config_Value_Integer__Value v, Config_Value__String str, OOC_LEN str_0d) {

  _copy_8((const void*)"Config:Value:Integer",(void*)(OOC_INT32)str,str_0d);
  return;
  ;
}

void OOC_Config_Value_Integer_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_Integer__ErrorContext.baseTypes[0]);
  Config_Value_Integer__integerContext = (Config_Value_Integer__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "Config:Value:Integer", 21);
  return;
  ;
}

/* --- */
