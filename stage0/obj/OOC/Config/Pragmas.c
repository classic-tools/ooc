#include "OOC/Config/Pragmas.d"
#include "__oo2c.h"

static void OOC_Config_Pragmas__Init(OOC_Config_Pragmas__Section s, const Config_Parser__String id__ref, OOC_LEN id_0d, Config_Value__PrototypeList prototypeList) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(id,OOC_CHAR16 ,id_0d)

  OOC_INITIALIZE_VPAR(id__ref,id,OOC_CHAR16 ,(id_0d*2))
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)prototypeList;
  Config_Section_Options__Init((Config_Section_Options__Section)i0, (void*)(OOC_INT32)id, id_0d, (Config_Value__PrototypeList)i1);
  return;
  ;
}

OOC_Config_Pragmas__Section OOC_Config_Pragmas__New() {
  register OOC_INT32 i0,i1,i2;
  OOC_Config_Pragmas__Section s;
  Config_Value__PrototypeList prototypeList;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__Section.baseTypes[0]);
  s = (OOC_Config_Pragmas__Section)i0;
  i1 = (OOC_INT32)Config_Value__NewPrototypeList();
  prototypeList = (Config_Value__PrototypeList)i1;
  i2 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2089)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i1, "boolean", 8, (Config_Value__Value)i2);
  i2 = (OOC_INT32)Config_Value_Integer__New(0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2165)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i1, "integer", 8, (Config_Value__Value)i2);
  i2 = (OOC_INT32)Config_Value_String__New("", 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2237)))), Config_Value__PrototypeListDesc_RegisterPrototype)),Config_Value__PrototypeListDesc_RegisterPrototype)((Config_Value__PrototypeList)i1, "string", 7, (Config_Value__Value)i2);
  OOC_Config_Pragmas__Init((OOC_Config_Pragmas__Section)i0, ((OOC_CHAR16[]){112,114,97,103,109,97,115,0}), 8, (Config_Value__PrototypeList)i1);
  return (OOC_Config_Pragmas__Section)i0;
  ;
}

void OOC_Config_Pragmas__SectionDesc_Copy(OOC_Config_Pragmas__Section s, Config_Section_Options__Section dest) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)dest;
  Config_Section_Options__SectionDesc_Copy((Config_Section_Options__Section)i0, (Config_Section_Options__Section)i1);
  return;
  ;
}

OOC_Config_Pragmas__Section OOC_Config_Pragmas__SectionDesc_Clone(OOC_Config_Pragmas__Section s) {
  register OOC_INT32 i0,i1;
  OOC_Config_Pragmas__Section _new;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__Section.baseTypes[0]);
  _new = (OOC_Config_Pragmas__Section)i0;
  i1 = (OOC_INT32)s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2549)))), OOC_Config_Pragmas__SectionDesc_Copy)),OOC_Config_Pragmas__SectionDesc_Copy)((OOC_Config_Pragmas__Section)i1, (Config_Section_Options__Section)i0);
  return (OOC_Config_Pragmas__Section)i0;
  ;
}

static void OOC_Config_Pragmas__InitHistory(OOC_Config_Pragmas__History h, OOC_Config_Pragmas__Section startVariables) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)h;
  i1 = (OOC_INT32)startVariables;
  *(OOC_INT32*)(_check_pointer(i0, 2744)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2785))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2808))+8) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 2834))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2856))+16) = 0;
  return;
  ;
}

OOC_Config_Pragmas__History OOC_Config_Pragmas__NewHistory(OOC_Config_Pragmas__Section startVariables) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__History.baseTypes[0]);
  i1 = (OOC_INT32)startVariables;
  OOC_Config_Pragmas__InitHistory((OOC_Config_Pragmas__History)i0, (OOC_Config_Pragmas__Section)i1);
  return (OOC_Config_Pragmas__History)i0;
  ;
}

static Config_Value__Value OOC_Config_Pragmas__GetValue(OOC_Config_Pragmas__History h, OOC_Config_Pragmas__Variable var, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 l;
  OOC_INT32 r;
  OOC_INT32 m;

  i0 = (OOC_INT32)var;
  _assert((i0!=(OOC_INT32)0), 127, 3454);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3495))+12);
  i1 = _check_pointer(i1, 3505);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 3505))*4);
  i2 = charPos;
  i1 = i2<i1;
  if (i1) goto l16;
  l = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3782))+16);
  i3 = 1!=i1;
  r = i1;
  if (i3) goto l5;
  i1=0;
  goto l15;
l5:
  i3=i1;i1=0;
l6_loop:
  i4 = (i1+i3)>>1;
  m = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4011))+12);
  i5 = _check_pointer(i5, 4021);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4021))*4);
  i5 = i5<=i2;
  if (i5) goto l9;
  r = i4;
  i3=i4;
  goto l10;
l9:
  l = i4;
  i1=i4;
l10:
  i4 = (i1+1)!=i3;
  if (i4) goto l6_loop;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4128))+8);
  i0 = _check_pointer(i0, 4136);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 4136))*4);
  return (Config_Value__Value)i0;
  goto l17;
l16:
  i1 = (OOC_INT32)h;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3711));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3742))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3742))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3748)), (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3711));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3727)))), Config_Section_Options__SectionDesc_GetValue)),Config_Section_Options__SectionDesc_GetValue)((Config_Section_Options__Section)i1, (void*)(_check_pointer(i3, 3748)), i0);
  return (Config_Value__Value)i0;
l17:
  _failed_function(3325); return 0;
  ;
}

Config_Value__Value OOC_Config_Pragmas__HistoryDesc_GetValue(OOC_Config_Pragmas__History h, const Config_Value__String name__ref, OOC_LEN name_0d, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_Config_Pragmas__Variable var;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)h;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4330))+4);
  i2 = i1!=(OOC_INT32)0;
  var = (OOC_Config_Pragmas__Variable)i1;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4369))+4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 4375)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l5:
  if (!i2) goto l17;
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4404));
  var = (OOC_Config_Pragmas__Variable)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4369))+4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 4375)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l20;
  i2 = charPos;
  i0 = (OOC_INT32)OOC_Config_Pragmas__GetValue((OOC_Config_Pragmas__History)i0, (OOC_Config_Pragmas__Variable)i1, i2);
  return (Config_Value__Value)i0;
  goto l21;
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4458));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4458));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4474)))), Config_Section_Options__SectionDesc_GetValue)),Config_Section_Options__SectionDesc_GetValue)((Config_Section_Options__Section)i0, (void*)(OOC_INT32)name, name_0d);
  return (Config_Value__Value)i0;
l21:
  _failed_function(4188); return 0;
  ;
}

static void OOC_Config_Pragmas__LastCharPos(OOC_Config_Pragmas__History h, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)h;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4651))+8);
  i2 = charPos;
  _assert((i2>i1), 127, 4632);
  *(OOC_INT32*)((_check_pointer(i0, 4672))+8) = i2;
  return;
  ;
}

static void OOC_Config_Pragmas__SetValue(OOC_Config_Pragmas__Variable var, OOC_INT32 charPos, Config_Value__Value value) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  auto void OOC_Config_Pragmas__SetValue_Extend(OOC_Config_Pragmas__Variable var, OOC_INT32 size);
    
    void OOC_Config_Pragmas__SetValue_Extend(OOC_Config_Pragmas__Variable var, OOC_INT32 size) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      OOC_Config_Pragmas__ValueArray newValues;
      OOC_Config_Pragmas__CharPosArray newPos;
      OOC_INT32 i;

      i0 = size;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__ValueArray.baseTypes[0], i0);
      newValues = (OOC_Config_Pragmas__ValueArray)i1;
      i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__CharPosArray.baseTypes[0], i0);
      newPos = (OOC_Config_Pragmas__CharPosArray)i2;
      i3 = (OOC_INT32)var;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5078))+8);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 5086)), (OOC_INT32)0);
      i4 = i4-1;
      i5 = 0<=i4;
      i = 0;
      if (!i5) goto l8;
      i5=0;
l3_loop:
      i6 = _check_pointer(i1, 5111);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5121))+8);
      i8 = _check_pointer(i8, 5129);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 5129))*4);
      *(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 5111))*4) = i8;
      i6 = _check_pointer(i2, 5148);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5158))+12);
      i8 = _check_pointer(i8, 5168);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 5168))*4);
      *(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 5148))*4) = i8;
      i5 = i5+1;
      i6 = i5<=i4;
      i = i5;
      if (i6) goto l3_loop;
l8:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5206))+8);
      i0 = i0-1;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 5214)), (OOC_INT32)0);
      i5 = i4<=i0;
      i = i4;
      if (!i5) goto l16;
l11_loop:
      i5 = _check_pointer(i1, 5247);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5247))*4) = (OOC_INT32)0;
      i5 = _check_pointer(i2, 5273);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5273))*4) = -1;
      i4 = i4+1;
      i5 = i4<=i0;
      i = i4;
      if (i5) goto l11_loop;
l16:
      *(OOC_INT32*)((_check_pointer(i3, 5310))+8) = i1;
      *(OOC_INT32*)((_check_pointer(i3, 5342))+12) = i2;
      return;
      ;
    }


  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5424))+8);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5402))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5432)), (OOC_INT32)0);
  i1 = i2==i1;
  if (!i1) goto l4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5487))+16);
  OOC_Config_Pragmas__SetValue_Extend((OOC_Config_Pragmas__Variable)i0, (i1+4));
l4:
  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5535))+8);
  i1 = _check_pointer(i1, 5543);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5547))+16);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)value;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 5543))*4) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5577))+12);
  i1 = _check_pointer(i1, 5587);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5591))+16);
  i4 = charPos;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 5587))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5628))+16);
  *(OOC_INT32*)((_check_pointer(i0, 5628))+16) = (i1+1);
  return;
  ;
}

void OOC_Config_Pragmas__HistoryDesc_SetValue(OOC_Config_Pragmas__History h, const Config_Value__String name__ref, OOC_LEN name_0d, OOC_INT32 charPos, Config_Value__Value value) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_Config_Pragmas__Variable var;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)h;
  i1 = charPos;
  OOC_Config_Pragmas__LastCharPos((OOC_Config_Pragmas__History)i0, i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6180))+4);
  i3 = i2!=(OOC_INT32)0;
  var = (OOC_Config_Pragmas__Variable)i2;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l5;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6219))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 6225)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l5:
  if (!i3) goto l17;
l8_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6254));
  var = (OOC_Config_Pragmas__Variable)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6219))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 6225)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l13:
  if (i3) goto l8_loop;
l17:
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l20;
  i0=i2;
  goto l21;
l20:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__Variable.baseTypes[0]);
  var = (OOC_Config_Pragmas__Variable)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6435))+4);
  *(OOC_INT32*)(_check_pointer(i2, 6424)) = i3;
  i3 = (OOC_INT32)Config_Value__GetStringPtr((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i2, 6455))+4) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 6506))+8) = ((OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__ValueArray.baseTypes[0], 4));
  *(OOC_INT32*)((_check_pointer(i2, 6544))+12) = ((OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__CharPosArray.baseTypes[0], 4));
  *(OOC_INT32*)((_check_pointer(i2, 6579))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 6611))+4) = i2;
  i0=i2;
l21:
  i2 = (OOC_INT32)value;
  OOC_Config_Pragmas__SetValue((OOC_Config_Pragmas__Variable)i0, i1, (Config_Value__Value)i2);
  return;
  ;
}

void OOC_Config_Pragmas__HistoryDesc_Push(OOC_Config_Pragmas__History h) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_Config_Pragmas__CharPosArray _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)h;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6824))+12);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6902))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6910)), (OOC_INT32)0);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6882))+16);
  i1 = i2==i1;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6941))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6949)), (OOC_INT32)0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__CharPosArray.baseTypes[0], (i1*2));
  _new = (OOC_Config_Pragmas__CharPosArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6982))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6990)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l15;
  i3=0;
l7_loop:
  i4 = _check_pointer(i1, 7009);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7017))+12);
  i6 = _check_pointer(i6, 7025);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 7025))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7009))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l7_loop;
  goto l15;
l14:
  *(OOC_INT32*)((_check_pointer(i0, 6857))+12) = ((OOC_INT32)RT0__NewObject(_td_OOC_Config_Pragmas__CharPosArray.baseTypes[0], 4));
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7053))+12);
  i1 = _check_pointer(i1, 7061);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7063))+16);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = *(OOC_INT32*)((_check_pointer(i0, 7080))+8);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7061))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7105))+16);
  *(OOC_INT32*)((_check_pointer(i0, 7105))+16) = (i1+1);
  return;
  ;
}

void OOC_Config_Pragmas__HistoryDesc_Pop(OOC_Config_Pragmas__History h, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 pushPos;
  OOC_Config_Pragmas__Variable var;
  Config_Value__Value oldValue;

  i0 = charPos;
  i1 = (OOC_INT32)h;
  OOC_Config_Pragmas__LastCharPos((OOC_Config_Pragmas__History)i1, i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7312))+12);
  i2 = _check_pointer(i2, 7320);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7322))+16);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 7320))*4);
  pushPos = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7350))+4);
  i4 = i3!=(OOC_INT32)0;
  var = (OOC_Config_Pragmas__Variable)i3;
  if (!i4) goto l14;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7399))+12);
  i4 = _check_pointer(i4, 7409);
  i5 = *(OOC_INT32*)((_check_pointer(i3, 7413))+16);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_INT32*)(i4+(_check_index((i5-1), i6, OOC_UINT32, 7409))*4);
  i4 = i4>i2;
  if (!i4) goto l9;
  i4 = (OOC_INT32)OOC_Config_Pragmas__GetValue((OOC_Config_Pragmas__History)i1, (OOC_Config_Pragmas__Variable)i3, i2);
  oldValue = (Config_Value__Value)i4;
  i5 = i4!=(OOC_INT32)0;
  if (!i5) goto l9;
  OOC_Config_Pragmas__SetValue((OOC_Config_Pragmas__Variable)i3, i0, (Config_Value__Value)i4);
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7710));
  var = (OOC_Config_Pragmas__Variable)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l3_loop;
l14:
  i0 = *(OOC_INT32*)((_check_pointer(i1, 7741))+16);
  *(OOC_INT32*)((_check_pointer(i1, 7741))+16) = (i0-1);
  return;
  ;
}

void OOC_OOC_Config_Pragmas_init(void) {

  return;
  ;
}

/* --- */
