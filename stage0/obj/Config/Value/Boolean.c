#include <Config/Value/Boolean.d>
#include <__oo2c.h>
#include <setjmp.h>

void Config_Value_Boolean__ErrorContextDesc_GetTemplate(Config_Value_Boolean__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 569))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,116,32,97,32,98,111,111,108,101,97,110,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l4;
  default:
    _failed_case(i1, 561);
    goto l4;
  }
l4:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 652)))), Config_Value__ErrorContextDesc_WriteTemplate)),Config_Value__ErrorContextDesc_WriteTemplate)((Config_Value__ErrorContext)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

Config_Value_Boolean__Value Config_Value_Boolean__New(OOC_CHAR8 boolean) {
  register OOC_INT32 i0,i1;
  Config_Value_Boolean__Value s;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_Boolean__Value.baseTypes[0]);
  s = (Config_Value_Boolean__Value)i0;
  i1 = boolean;
  *(OOC_UINT8*)(_check_pointer(i0, 791)) = i1;
  return (Config_Value_Boolean__Value)i0;
  ;
}

void Config_Value_Boolean__ValueDesc_StringToValue(Config_Value_Boolean__Value v, const Config_Value__String str__ref, OOC_LEN str_0d, Msg__Msg *errMsg) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT16 i;
  OOC_INT16 len;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 1029)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 1045)));
  i0 = i0<=(OOC_CHAR8)' ';
  
l5:
  if (i0) goto l7;
  i0=(OOC_INT32)0;
  goto l17;
l7:
  i0=(OOC_INT32)0;
l8_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 1029)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 1045)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l13:
  if (i1) goto l8_loop;
l17:
  Strings__Delete((void*)(OOC_INT32)str, str_0d, (OOC_INT32)0, i0);
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  len = i0;
  i = i0;
  i1 = i0>(OOC_INT32)0;
  if (i1) goto l20;
  i1=OOC_FALSE;
  goto l22;
l20:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT16, 1238)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l22:
  if (i1) goto l24;
  i1=i0;
  goto l34;
l24:
  i1=i0;
l25_loop:
  i1 = i1-1;
  i = i1;
  i2 = i1>(OOC_INT32)0;
  if (i2) goto l28;
  i2=OOC_FALSE;
  goto l30;
l28:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i1-1), str_0d, OOC_UINT16, 1238)));
  i2 = i2<=(OOC_CHAR8)' ';
  
l30:
  if (i2) goto l25_loop;
l34:
  Strings__Delete((void*)(OOC_INT32)str, str_0d, i1, (i0-i1));
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)"TRUE"))==(OOC_INT32)0;
  if (i0) goto l41;
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)"FALSE"))==(OOC_INT32)0;
  if (i0) goto l39;
  i0 = (OOC_INT32)Config_Value_Boolean__booleanContext;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, 1);
  *errMsg = (Msg__Msg)i0;
  goto l42;
l39:
  i0 = (OOC_INT32)v;
  *(OOC_UINT8*)(_check_pointer(i0, 1430)) = OOC_FALSE;
  *errMsg = (Msg__Msg)(OOC_INT32)0;
  goto l42;
l41:
  i0 = (OOC_INT32)v;
  *(OOC_UINT8*)(_check_pointer(i0, 1353)) = OOC_TRUE;
  *errMsg = (Msg__Msg)(OOC_INT32)0;
l42:
  return;
  ;
}

void Config_Value_Boolean__ValueDesc_ValueToString(Config_Value_Boolean__Value v, Config_Value__String str, OOC_LEN str_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 1647));
  if (i0) goto l3;
  _copy_8((const void*)"FALSE",(void*)(OOC_INT32)str,str_0d);
  goto l4;
l3:
  _copy_8((const void*)"TRUE",(void*)(OOC_INT32)str,str_0d);
l4:
  return;
  ;
}

Config_Value_Boolean__Value Config_Value_Boolean__ValueDesc_Clone(Config_Value_Boolean__Value v) {
  register OOC_INT32 i0,i1,i2,i3;
  Config_Value_Boolean__Value clone;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_Boolean__Value.baseTypes[0]);
  clone = (Config_Value_Boolean__Value)i0;
  i1 = (OOC_INT32)v;
  i1 = _check_pointer(i1, 1855);
  i2 = (OOC_INT32)&_td_Config_Value_Boolean__ValueDesc;
  i2 = i2!=i2;
  i3 = _check_pointer(i0, 1849);
  if (!i2) goto l4;
  _failed_type_assert(1849);
l4:
  _copy_block(i1,i3,1);
  return (Config_Value_Boolean__Value)i0;
  ;
}

void Config_Value_Boolean__ValueDesc_DefiningModule(Config_Value_Boolean__Value v, Config_Value__String str, OOC_LEN str_0d) {

  _copy_8((const void*)"Config:Value:Boolean",(void*)(OOC_INT32)str,str_0d);
  return;
  ;
}

void OOC_Config_Value_Boolean_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value_Boolean__ErrorContext.baseTypes[0]);
  Config_Value_Boolean__booleanContext = (Config_Value_Boolean__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "Config:Value:Boolean", 21);
  return;
  ;
}

/* --- */
