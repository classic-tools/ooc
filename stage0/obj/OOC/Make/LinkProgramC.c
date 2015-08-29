#include <OOC/Make/LinkProgramC.d>
#include <__oo2c.h>

static Object__StringArrayPtr OOC_Make_LinkProgramC__GetExternalLibs(const OOC_Repository__Module moduleList__ref[], OOC_LEN moduleList_0d, Object__String thisLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_ALLOCATE_VPAR(moduleList,OOC_Repository__Module ,moduleList_0d)
  ADT_Dictionary__Dictionary libDeps;
  ADT_Dictionary__Dictionary option;
  OOC_INT32 i;
  OOC_SymbolTable__LinkDirective linkDirective;
  ADT_ArrayList__ArrayList depArray;
  OOC_INT32 j;
  Object__String prev;
  Object__String _new;
  Object__StringArrayPtr extLibs;
  ADT_Dictionary__Dictionary visited;
  auto ADT_ArrayList__ArrayList OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray(Object__String libName);
  auto void OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary(Object__String libName, OOC_INT32 *pos);
  auto OOC_CHAR8 OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule(OOC_Repository__Module module);
  auto Object__String OOC_Make_LinkProgramC__GetExternalLibs_Option(Object__String libraryName);
  auto Object__String OOC_Make_LinkProgramC__GetExternalLibs_LookupValue(Object__String optionName);
    
    ADT_ArrayList__ArrayList OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray(Object__String libName) {
      register OOC_INT32 i0,i1,i2;
      Object__Object obj;
      ADT_ArrayList__ArrayList list;

      i0 = (OOC_INT32)libDeps;
      i1 = (OOC_INT32)libName;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1752)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l3;
      i0 = (OOC_INT32)ADT_ArrayList__New(4);
      list = (ADT_ArrayList__ArrayList)i0;
      i2 = (OOC_INT32)libDeps;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1912)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i0);
      return (ADT_ArrayList__ArrayList)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)libDeps;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1796)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      return (ADT_ArrayList__ArrayList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1840)))), &_td_ADT_ArrayList__ArrayListDesc, 1840));
l4:
      _failed_function(1607); return 0;
      ;
    }

    
    void OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary(Object__String libName, OOC_INT32 *pos) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      ADT_ArrayList__ArrayList depArray;
      OOC_INT32 i;
      Object__Object obj;

      i0 = (OOC_INT32)visited;
      i1 = (OOC_INT32)libName;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2163)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)libDeps;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2189)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      
l5:
      if (!i0) goto l15;
      i0 = (OOC_INT32)visited;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2226)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray((Object__String)i1);
      depArray = (ADT_ArrayList__ArrayList)i0;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 2318))+4);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l14;
      i3=0;
l9_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2358));
      i4 = _check_pointer(i4, 2364);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2364))*4);
      OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary((Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2375)))), &_td_Object__StringDesc, 2375)), (void*)(OOC_INT32)pos);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l9_loop;
l14:
      i0 = (OOC_INT32)option;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2424)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      i1 = (OOC_INT32)extLibs;
      i1 = _check_pointer(i1, 2454);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = *pos;
      *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 2454))*4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2467)))), &_td_Object__StringDesc, 2467));
      *pos = (i3+1);
l15:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2620))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2627))+48);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2666))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2673))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2666))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2673))+48);
      i2 = (OOC_INT32)thisLibrary;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2685)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i2);
      
      goto l4;
l3:
      i0=OOC_TRUE;
l4:
      return i0;
      ;
    }

    
    Object__String OOC_Make_LinkProgramC__GetExternalLibs_Option(Object__String libraryName) {
      register OOC_INT32 i0,i1,i2;
      Object__Object obj;
      Object__String str;

      i0 = (OOC_INT32)option;
      i1 = (OOC_INT32)libraryName;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2858)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l3;
      i0 = (OOC_INT32)Object__Concat2((void*)((OOC_INT32)_c0),(void*)i1);
      str = (Object__String)i0;
      i2 = (OOC_INT32)option;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3011)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i0);
      return (Object__String)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)option;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2905)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      return (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2943)))), &_td_Object__StringDesc, 2943));
l4:
      _failed_function(2743); return 0;
      ;
    }

    
    Object__String OOC_Make_LinkProgramC__GetExternalLibs_LookupValue(Object__String optionName) {
      register OOC_INT32 i0,i1,i2;
      Object__CharsLatin1 chars;
      Config_Value__Value v;

      i0 = (OOC_INT32)optionName;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3242)))), &_td_Object__String8Desc, 3242)), 3250)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3242)))), &_td_Object__String8Desc, 3242)));
      chars = (Object__CharsLatin1)i0;
      i1 = (OOC_INT32)OOC_Config__options;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3306)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3291)))), Config_Section_Options__SectionDesc_GetValue)),Config_Section_Options__SectionDesc_GetValue)((Config_Section_Options__Section)i1, (void*)(_check_pointer(i0, 3306)), i2);
      i1 = i0!=(OOC_INT32)0;
      v = (Config_Value__Value)i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3334)))), &_td_Config_Value_String__ValueDesc);
      
l5:
      if (i1) goto l7;
      i0 = (OOC_INT32)OOC_Make_LinkProgramC__empty;
      return (Object__String)i0;
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3407)))), &_td_Config_Value_String__ValueDesc, 3407)), 3413));
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3407)))), &_td_Config_Value_String__ValueDesc, 3407)), 3413));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3420)), (OOC_INT32)0);
      i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 3420)), i0);
      return (Object__String)i0;
l8:
      _failed_function(3095); return 0;
      ;
    }


  OOC_INITIALIZE_VPAR(moduleList__ref,moduleList,OOC_Repository__Module ,(moduleList_0d*4))
  i0 = (OOC_INT32)ADT_Dictionary__New();
  libDeps = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)ADT_Dictionary__New();
  option = (ADT_Dictionary__Dictionary)i0;
  i0 = moduleList_0d-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l36;
  i2=0;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i2, moduleList_0d, OOC_UINT32, 3817))*4);
  i2 = OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule((OOC_Repository__Module)i2);
  if (!i2) goto l31;
  i2 = i;
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i2, moduleList_0d, OOC_UINT32, 3926))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3929))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3936))+56);
  linkDirective = (OOC_SymbolTable__LinkDirective)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l31;
l8_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4020)))), &_td_OOC_SymbolTable__LinkLibDesc);
  if (!i3) goto l25;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4086))+4);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray((Object__String)i2);
  depArray = (ADT_ArrayList__ArrayList)i2;
  i3 = (OOC_INT32)linkDirective;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4144))+8);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4157)), (OOC_INT32)0);
  i4 = i4-1;
  i5 = 0<=i4;
  j = 0;
  if (!i5) goto l18;
  i5=0;
l13_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4208))+8);
  i6 = _check_pointer(i6, 4221);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 4221))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4187)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i5);
  i5 = j;
  i5 = i5+1;
  i6 = i5<=i4;
  j = i5;
  if (i6) goto l13_loop;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4284))+4);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_Option((Object__String)i2);
  prev = (Object__String)i2;
  i2 = (OOC_INT32)linkDirective;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4328))+12);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l21;
  i3 = (OOC_INT32)OOC_Make_LinkProgramC__space;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4413))+12);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_LookupValue((Object__String)i2);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4380)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i3, (Object__String)i2);
  _new = (Object__String)i2;
  i3 = (OOC_INT32)option;
  i4 = (OOC_INT32)linkDirective;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4468))+4);
  i6 = (OOC_INT32)prev;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4485)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i2, (Object__String)i6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4450)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (Object__Object)i5, (Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4543))+4);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_Option((Object__String)i2);
  prev = (Object__String)i2;
l21:
  i2 = (OOC_INT32)linkDirective;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4618))+16);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l25;
  i3 = (OOC_INT32)OOC_Make_LinkProgramC__space;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4703))+16);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_LookupValue((Object__String)i2);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4670)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i3, (Object__String)i2);
  _new = (Object__String)i2;
  i3 = (OOC_INT32)option;
  i4 = (OOC_INT32)linkDirective;
  i5 = (OOC_INT32)prev;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4758))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4776)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i5, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4740)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4, (Object__Object)i2);
l25:
  i2 = (OOC_INT32)linkDirective;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4915));
  linkDirective = (OOC_SymbolTable__LinkDirective)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l8_loop;
l31:
  i2 = i;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l36:
  i2 = (OOC_INT32)libDeps;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5200)))), ADT_Dictionary__DictionaryDesc_Size)),ADT_Dictionary__DictionaryDesc_Size)((ADT_Dictionary__Dictionary)i2);
  extLibs = (Object__StringArrayPtr)((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i2 = (OOC_INT32)ADT_Dictionary__New();
  visited = (ADT_Dictionary__Dictionary)i2;
  j = 0;
  i = 0;
  if (!i1) goto l58;
  i1=0;
l39_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i1, moduleList_0d, OOC_UINT32, 5327))*4);
  i1 = OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule((OOC_Repository__Module)i1);
  if (!i1) goto l53;
  i1 = i;
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i1, moduleList_0d, OOC_UINT32, 5436))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5439))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5446))+56);
  linkDirective = (OOC_SymbolTable__LinkDirective)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l53;
l44_loop:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5530)))), &_td_OOC_SymbolTable__LinkLibDesc);
  if (!i2) goto l47;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5583))+4);
  OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary((Object__String)i1, (void*)(OOC_INT32)&j);
l47:
  i1 = (OOC_INT32)linkDirective;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5708));
  linkDirective = (OOC_SymbolTable__LinkDirective)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l44_loop;
l53:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l39_loop;
l58:
  i0 = (OOC_INT32)extLibs;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5774)), (OOC_INT32)0);
  i2 = j;
  _assert((i2==i1), 127, 5752);
  return (Object__StringArrayPtr)i0;
  ;
}

OOC_CHAR8 OOC_Make_LinkProgramC__Run(OOC_Repository__Module module, const OOC_Repository__Module imports__ref[], OOC_LEN imports_0d, Object__String forLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_ALLOCATE_VPAR(imports,OOC_Repository__Module ,imports_0d)
  OOC_INT32 exit;
  OOC_INT8 objectFile;
  OOC_INT8 outputFile;
  Msg__Msg res;
  OOC_CHAR8 str[16384];
  ADT_Dictionary__Dictionary importedLibs;
  ADT_ArrayList__ArrayList importedLibsList;
  OOC_INT32 i;
  Object__String libraryName;
  URI__URI uri;
  OOC_Repository__URIBuffer path;
  OOC_Repository__Module import;
  Object__CharsLatin1 chars;
  Object__StringArrayPtr extLibs;

  OOC_INITIALIZE_VPAR(imports__ref,imports,OOC_Repository__Module ,(imports_0d*4))
  i0 = (OOC_INT32)forLibrary;
  i1 = i0!=(OOC_INT32)0;
  exit = 0;
  if (i1) goto l3;
  objectFile = 7;
  outputFile = 18;
  i2=18;i3=7;
  goto l4;
l3:
  objectFile = 8;
  outputFile = 19;
  i2=19;i3=8;
l4:
  i4 = (OOC_INT32)module;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6664)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i4, i2, (void*)(OOC_INT32)&res);
  i5 = (OOC_INT32)res;
  i5 = i5==(OOC_INT32)0;
  if (!i5) goto l52;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6773)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, i2, OOC_TRUE);
  OOC_Config_CCompiler__LinkProgramCmd((URI__URI)i2, i1, (void*)(OOC_INT32)str, 16384);
  i1 = (OOC_INT32)ADT_Dictionary__New();
  importedLibs = (ADT_Dictionary__Dictionary)i1;
  i2 = (OOC_INT32)ADT_ArrayList__New(4);
  importedLibsList = (ADT_ArrayList__ArrayList)i2;
  i5 = imports_0d-1;
  i6 = 0<=i5;
  i = 0;
  if (!i6) goto l28;
  i6=0;
l9_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 6973))*4);
  i7 = *(OOC_INT8*)((_check_pointer(i7, 6976))+16);
  _assert((i7==4), 127, 6959);
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7050))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7053))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7060))+48);
  libraryName = (Object__String)i7;
  i8 = i7!=(OOC_INT32)0;
  if (i8) goto l12;
  i8=OOC_FALSE;
  goto l14;
l12:
  i8 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7119)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i7, (Object__Object)i0);
  i8 = !i8;
  
l14:
  if (i8) goto l19;
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7492))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7495))+12);
  i8 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7492))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7495))+12);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7502)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i8);
  i7 = !i7;
  if (!i7) goto l23;
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7547))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7547))*4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7550)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i8, i3, OOC_TRUE);
  uri = (URI__URI)i7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7598)))), &_td_URI_Scheme_File__URIDesc, 7598)), 7602)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7598)))), &_td_URI_Scheme_File__URIDesc, 7598)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
  goto l23;
l19:
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7314)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i7);
  i7 = !i7;
  if (!i7) goto l23;
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7376))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7379))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7386))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7364)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i7, (Object__Object)(OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7449))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7434)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i7);
l23:
  i6 = i6+1;
  i7 = i6<=i5;
  i = i6;
  if (i7) goto l9_loop;
l28:
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l31;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7818)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 17, OOC_TRUE);
  uri = (URI__URI)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7882)))), &_td_URI_Scheme_File__URIDesc, 7882)), 7886)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7882)))), &_td_URI_Scheme_File__URIDesc, 7882)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
l31:
  i1 = *(OOC_INT32*)((_check_pointer(i2, 8023))+4);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l43;
  i3=0;
l34_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8068));
  i4 = _check_pointer(i4, 8074);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8074))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8089)))), &_td_OOC_Repository__ModuleDesc, 8089);
  import = (OOC_Repository__Module)i4;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8115)))), OOC_Repository__ModuleDesc_FileExists)),OOC_Repository__ModuleDesc_FileExists)((OOC_Repository__Module)i4, 19);
  if (i5) goto l37;
  Strings__Append(" -l", 4, (void*)(OOC_INT32)str, 16384);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8572))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8579))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8572))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8579))+48);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8599)))), &_td_Object__String8Desc, 8599)), 8607)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8599)))), &_td_Object__String8Desc, 8599)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 8653)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i4, 8653)), i5, (void*)(OOC_INT32)str, 16384);
  goto l38;
l37:
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8228)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 19, OOC_TRUE);
  uri = (URI__URI)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8285)))), &_td_URI_Scheme_File__URIDesc, 8285)), 8289)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8285)))), &_td_URI_Scheme_File__URIDesc, 8285)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
l38:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l34_loop;
l43:
  i0 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs((void*)(OOC_INT32)imports, imports_0d, (Object__String)i0);
  extLibs = (Object__StringArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8869)), (OOC_INT32)0);
  i1 = i1-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l51;
l46_loop:
  i2 = _check_pointer(i0, 8912);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 8912))*4);
  i3 = _check_pointer(i0, 8912);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 8912))*4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8923)))), &_td_Object__String8Desc, 8923)), 8931)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8923)))), &_td_Object__String8Desc, 8923)));
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8976)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i2, 8976)), i3, (void*)(OOC_INT32)str, 16384);
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l46_loop;
l51:
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  i0 = (OOC_INT32)OOC_Config_CCompiler__libs;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9065))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9084)))), &_td_Config_Value_String__ValueDesc, 9084)), 9090));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9065))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9084)))), &_td_Config_Value_String__ValueDesc, 9084)), 9090));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9097)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i1, 9097)), i0, (void*)(OOC_INT32)str, 16384);
l52:
  i0 = (OOC_INT32)res;
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l55;
  i0=0;
  goto l56;
l55:
  Out__String((void*)(OOC_INT32)str, 16384);
  Out__Ln();
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 16384);
  
l56:
  i1 = (OOC_INT32)res;
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l59;
  i0=OOC_FALSE;
  goto l60;
l59:
  i0 = i0==0;
  
l60:
  return i0;
  ;
}

void OOC_OOC_Make_LinkProgramC_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region(" -l", 4, (OOC_INT32)0, 3);
  _c1 = Object__NewLatin1Char((OOC_CHAR8)' ');

  i0 = (OOC_INT32)Object__emptyString;
  OOC_Make_LinkProgramC__empty = (Object__String)i0;
  OOC_Make_LinkProgramC__space = (Object__String)((OOC_INT32)_c1);
  return;
  ;
}

/* --- */
