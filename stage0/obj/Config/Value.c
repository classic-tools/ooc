#include <Config/Value.d>
#include <__oo2c.h>

void Config_Value__ErrorContextDesc_WriteTemplate(Config_Value__ErrorContext ec, Msg__Msg msg, Msg__LString text, OOC_LEN text_0d, Msg__LString templ, OOC_LEN templ_0d) {

  _copy_16((const void*)(OOC_INT32)text,(void*)(OOC_INT32)templ,templ_0d);
  return;
  ;
}

void Config_Value__ValueDesc_StringToValue(Config_Value__Value v, const Config_Value__String str__ref, OOC_LEN str_0d, Msg__Msg *errMsg) {
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  return;
  ;
}

void Config_Value__ValueDesc_ValueToString(Config_Value__Value v, Config_Value__String str, OOC_LEN str_0d) {

  return;
  ;
}

Config_Value__Value Config_Value__ValueDesc_Clone(Config_Value__Value v) {

  _failed_function(1014); return 0;
  ;
}

void Config_Value__ValueDesc_DefiningModule(Config_Value__Value v, Config_Value__String str, OOC_LEN str_0d) {

  return;
  ;
}

Config_Value__StringPtr Config_Value__GetStringPtr(Config_Value__String str, OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  Config_Value__StringPtr s;

  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value__StringPtr.baseTypes[0], (i0+1));
  s = (Config_Value__StringPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1275)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 1275)),i1);
  return (Config_Value__StringPtr)i0;
  ;
}

Config_Value__PrototypeList Config_Value__NewPrototypeList() {
  register OOC_INT32 i0;
  Config_Value__PrototypeList tl;

  i0 = (OOC_INT32)RT0__NewObject(_td_Config_Value__PrototypeList.baseTypes[0]);
  tl = (Config_Value__PrototypeList)i0;
  *(OOC_INT32*)(_check_pointer(i0, 1418)) = (OOC_INT32)0;
  return (Config_Value__PrototypeList)i0;
  ;
}

void Config_Value__PrototypeListDesc_RegisterPrototype(Config_Value__PrototypeList tl, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Config_Value__Value prototype) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  Config_Value__Prototype prev;
  Config_Value__Prototype ptr;
  Config_Value__Prototype newPrototype;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  prev = (Config_Value__Prototype)(OOC_INT32)0;
  i0 = (OOC_INT32)tl;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1643));
  ptr = (Config_Value__Prototype)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1679))+4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 1685)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l5:
  if (i2) goto l8_loop;
  i2=(OOC_INT32)0;
  goto l17;
l8_loop:
  prev = (Config_Value__Prototype)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1727));
  ptr = (Config_Value__Prototype)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1679))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 1685)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l13:
  if (!i3) goto l16;
  i1=i2;
  goto l8_loop;
l16:
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l17:
  _assert((i1==(OOC_INT32)0), 127, 1747);
  i1 = (OOC_INT32)RT0__NewObject(_td_Config_Value__Prototype.baseTypes[0]);
  newPrototype = (Config_Value__Prototype)i1;
  *(OOC_INT32*)(_check_pointer(i1, 1812)) = (OOC_INT32)0;
  i3 = Strings__Length((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i1, 1848))+4) = ((OOC_INT32)RT0__NewObject(_td_Config_Value__PrototypeName.baseTypes[0], (i3+1)));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1910))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1910))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 1916)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)name,(void*)(_check_pointer(i3, 1916)),i4);
  i3 = (OOC_INT32)prototype;
  *(OOC_INT32*)((_check_pointer(i1, 1936))+8) = i3;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l20;
  *(OOC_INT32*)(_check_pointer(i2, 2042)) = i1;
  goto l21;
l20:
  *(OOC_INT32*)(_check_pointer(i0, 2000)) = i1;
l21:
  return;
  ;
}

Config_Value__Value Config_Value__PrototypeListDesc_GetClone(Config_Value__PrototypeList tl, const OOC_CHAR8 prototypeName__ref[], OOC_LEN prototypeName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(prototypeName,OOC_CHAR8 ,prototypeName_0d)
  Config_Value__Prototype ptr;

  OOC_INITIALIZE_VPAR(prototypeName__ref,prototypeName,OOC_CHAR8 ,prototypeName_0d)
  i0 = (OOC_INT32)tl;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2225));
  i1 = i0!=(OOC_INT32)0;
  ptr = (Config_Value__Prototype)i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2261))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 2267)),(const void*)(OOC_INT32)prototypeName))!=(OOC_INT32)0;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2305));
  ptr = (Config_Value__Prototype)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2261))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 2267)),(const void*)(OOC_INT32)prototypeName))!=(OOC_INT32)0;
  
l13:
  if (i1) goto l8_loop;
l17:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2387))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2387))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2398)))), Config_Value__ValueDesc_Clone)),Config_Value__ValueDesc_Clone)((Config_Value__Value)i0);
  return (Config_Value__Value)i0;
  goto l21;
l20:
  return (Config_Value__Value)(OOC_INT32)0;
l21:
  _failed_function(2129); return 0;
  ;
}

void OOC_Config_Value_init(void) {

  return;
  ;
}

/* --- */
