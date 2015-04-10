#include "OOC/Make/LinkProgramC.d"
#include "__oo2c.h"

static ADT_String__StringArrayPtr OOC_Make_LinkProgramC__GetExternalLibs(const OOC_Repository__Module moduleList__ref[], OOC_LEN moduleList_0d, ADT_String__String thisLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_ALLOCATE_VPAR(moduleList,OOC_Repository__Module ,moduleList_0d)
  ADT_Dictionary__Dictionary libDeps;
  ADT_Dictionary__Dictionary option;
  OOC_INT32 i;
  OOC_SymbolTable__LinkDirective linkDirective;
  ADT_ArrayList__ArrayList depArray;
  OOC_INT32 j;
  ADT_String__String prev;
  ADT_String__String _new;
  ADT_String__StringArrayPtr extLibs;
  ADT_Dictionary__Dictionary visited;
  auto ADT_ArrayList__ArrayList OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray(ADT_String__String libName);
  auto void OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary(ADT_String__String libName, OOC_INT32 *pos);
  auto OOC_CHAR8 OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule(OOC_Repository__Module module);
  auto ADT_String__String OOC_Make_LinkProgramC__GetExternalLibs_Option(ADT_String__String libraryName);
  auto ADT_String__String OOC_Make_LinkProgramC__GetExternalLibs_LookupValue(ADT_String__String optionName);
    
    ADT_ArrayList__ArrayList OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray(ADT_String__String libName) {
      register OOC_INT32 i0,i1,i2;
      ADT_Object__Object obj;
      ADT_ArrayList__ArrayList list;

      i0 = (OOC_INT32)libDeps;
      i1 = (OOC_INT32)libName;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1795)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      if (i0) goto l3;
      i0 = (OOC_INT32)ADT_ArrayList__New(4);
      list = (ADT_ArrayList__ArrayList)i0;
      i2 = (OOC_INT32)libDeps;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1955)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i1, (ADT_Object__Object)i0);
      return (ADT_ArrayList__ArrayList)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)libDeps;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1839)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      obj = (ADT_Object__Object)i0;
      return (ADT_ArrayList__ArrayList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1883)))), &_td_ADT_ArrayList__ArrayListDesc, 1883));
l4:
      _failed_function(1643); return 0;
      ;
    }

    
    void OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary(ADT_String__String libName, OOC_INT32 *pos) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      ADT_ArrayList__ArrayList depArray;
      OOC_INT32 i;
      ADT_Object__Object obj;

      i0 = (OOC_INT32)visited;
      i1 = (OOC_INT32)libName;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2213)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      i0 = !i0;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)libDeps;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2239)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      
l5:
      if (!i0) goto l15;
      i0 = (OOC_INT32)visited;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2276)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1, (ADT_Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray((ADT_String__String)i1);
      depArray = (ADT_ArrayList__ArrayList)i0;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 2368))+4);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l14;
      i3=0;
l9_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2408));
      i4 = _check_pointer(i4, 2414);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2414))*4);
      OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary((ADT_String__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2425)))), &_td_ADT_String__StringDesc, 2425)), (void*)(OOC_INT32)pos);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l9_loop;
l14:
      i0 = (OOC_INT32)option;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2474)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      obj = (ADT_Object__Object)i0;
      i1 = (OOC_INT32)extLibs;
      i1 = _check_pointer(i1, 2504);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = *pos;
      *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 2504))*4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2524)))), &_td_ADT_String__StringDesc, 2524));
      *pos = (i3+1);
l15:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2677))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2684))+48);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2723))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2730))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2723))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2730))+48);
      i2 = (OOC_INT32)thisLibrary;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2742)))), ADT_String__StringDesc_Equals)),ADT_String__StringDesc_Equals)((ADT_String__String)i0, (ADT_Object__Object)i2);
      
      goto l4;
l3:
      i0=OOC_TRUE;
l4:
      return i0;
      ;
    }

    
    ADT_String__String OOC_Make_LinkProgramC__GetExternalLibs_Option(ADT_String__String libraryName) {
      register OOC_INT32 i0,i1,i2;
      ADT_Object__Object obj;
      ADT_String__String str;

      i0 = (OOC_INT32)option;
      i1 = (OOC_INT32)libraryName;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2936)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      if (i0) goto l3;
      i0 = (OOC_INT32)ADT_String__New(" -l", 4);
      str = (ADT_String__String)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3100)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i0, (ADT_String__String)i1);
      str = (ADT_String__String)i0;
      i2 = (OOC_INT32)option;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3136)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i1, (ADT_Object__Object)i0);
      return (ADT_String__String)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)option;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2983)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
      obj = (ADT_Object__Object)i0;
      return (ADT_String__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3028)))), &_td_ADT_String__StringDesc, 3028));
l4:
      _failed_function(2800); return 0;
      ;
    }

    
    ADT_String__String OOC_Make_LinkProgramC__GetExternalLibs_LookupValue(ADT_String__String optionName) {
      register OOC_INT32 i0,i1,i2;
      Config_Value__Value v;

      i0 = (OOC_INT32)OOC_Config__options;
      i1 = (OOC_INT32)optionName;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3360))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3360))+4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3366)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3340)))), Config_Section_Options__SectionDesc_GetValue)),Config_Section_Options__SectionDesc_GetValue)((Config_Section_Options__Section)i0, (void*)(_check_pointer(i2, 3366)), i1);
      i1 = i0!=(OOC_INT32)0;
      v = (Config_Value__Value)i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3394)))), &_td_Config_Value_String__ValueDesc);
      
l5:
      if (i1) goto l7;
      i0 = (OOC_INT32)OOC_Make_LinkProgramC__empty;
      return (ADT_String__String)i0;
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3461)))), &_td_Config_Value_String__ValueDesc, 3461)), 3467));
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3461)))), &_td_Config_Value_String__ValueDesc, 3461)), 3467));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3474)), 0);
      i0 = (OOC_INT32)ADT_String__New((void*)(_check_pointer(i1, 3474)), i0);
      return (ADT_String__String)i0;
l8:
      _failed_function(3220); return 0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i2, moduleList_0d, OOC_UINT32, 3871))*4);
  i2 = OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule((OOC_Repository__Module)i2);
  if (!i2) goto l31;
  i2 = i;
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i2, moduleList_0d, OOC_UINT32, 3980))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3983))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3990))+56);
  linkDirective = (OOC_SymbolTable__LinkDirective)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l31;
l8_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4074)))), &_td_OOC_SymbolTable__LinkLibDesc);
  if (!i3) goto l25;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4140))+4);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray((ADT_String__String)i2);
  depArray = (ADT_ArrayList__ArrayList)i2;
  i3 = (OOC_INT32)linkDirective;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4198))+8);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4211)), 0);
  i4 = i4-1;
  i5 = 0<=i4;
  j = 0;
  if (!i5) goto l18;
  i5=0;
l13_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4262))+8);
  i6 = _check_pointer(i6, 4275);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 4275))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4241)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (ADT_Object__Object)i5);
  i5 = j;
  i5 = i5+1;
  i6 = i5<=i4;
  j = i5;
  if (i6) goto l13_loop;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4338))+4);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_Option((ADT_String__String)i2);
  prev = (ADT_String__String)i2;
  i2 = (OOC_INT32)linkDirective;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4382))+12);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l21;
  i3 = (OOC_INT32)OOC_Make_LinkProgramC__space;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4467))+12);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_LookupValue((ADT_String__String)i2);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4434)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i3, (ADT_String__String)i2);
  _new = (ADT_String__String)i2;
  i3 = (OOC_INT32)option;
  i4 = (OOC_INT32)linkDirective;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4522))+4);
  i6 = (OOC_INT32)prev;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4539)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i2, (ADT_String__String)i6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4504)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (ADT_Object__Object)i5, (ADT_Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4597))+4);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_Option((ADT_String__String)i2);
  prev = (ADT_String__String)i2;
l21:
  i2 = (OOC_INT32)linkDirective;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4672))+16);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l25;
  i3 = (OOC_INT32)OOC_Make_LinkProgramC__space;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4757))+16);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_LookupValue((ADT_String__String)i2);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4724)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i3, (ADT_String__String)i2);
  _new = (ADT_String__String)i2;
  i3 = (OOC_INT32)option;
  i4 = (OOC_INT32)linkDirective;
  i5 = (OOC_INT32)prev;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4812))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4830)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i5, (ADT_String__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4794)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (ADT_Object__Object)i4, (ADT_Object__Object)i2);
l25:
  i2 = (OOC_INT32)linkDirective;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4969));
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5254)))), ADT_Dictionary__DictionaryDesc_Size)),ADT_Dictionary__DictionaryDesc_Size)((ADT_Dictionary__Dictionary)i2);
  extLibs = (ADT_String__StringArrayPtr)((OOC_INT32)RT0__NewObject(_td_ADT_String__StringArrayPtr.baseTypes[0], i2));
  i2 = (OOC_INT32)ADT_Dictionary__New();
  visited = (ADT_Dictionary__Dictionary)i2;
  j = 0;
  i = 0;
  if (!i1) goto l58;
  i1=0;
l39_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i1, moduleList_0d, OOC_UINT32, 5381))*4);
  i1 = OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule((OOC_Repository__Module)i1);
  if (!i1) goto l53;
  i1 = i;
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i1, moduleList_0d, OOC_UINT32, 5490))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5493))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5500))+56);
  linkDirective = (OOC_SymbolTable__LinkDirective)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l53;
l44_loop:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5584)))), &_td_OOC_SymbolTable__LinkLibDesc);
  if (!i2) goto l47;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5637))+4);
  OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary((ADT_String__String)i1, (void*)(OOC_INT32)&j);
l47:
  i1 = (OOC_INT32)linkDirective;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5762));
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5828)), 0);
  i2 = j;
  _assert((i2==i1), 127, 5806);
  return (ADT_String__StringArrayPtr)i0;
  ;
}

OOC_CHAR8 OOC_Make_LinkProgramC__Run(OOC_Repository__Module module, const OOC_Repository__Module imports__ref[], OOC_LEN imports_0d, ADT_String__String forLibrary) {
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
  ADT_String__String libraryName;
  URI__URI uri;
  OOC_Repository__URIBuffer path;
  OOC_Repository__Module import;
  ADT_String__StringArrayPtr extLibs;

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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6701)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i4, i2, (void*)(OOC_INT32)&res);
  i5 = (OOC_INT32)res;
  i5 = i5==(OOC_INT32)0;
  if (!i5) goto l52;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6810)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, i2, OOC_TRUE);
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
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7010))*4);
  i7 = *(OOC_INT8*)((_check_pointer(i7, 7013))+16);
  _assert((i7==4), 127, 6996);
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7087))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7090))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7097))+48);
  libraryName = (ADT_String__String)i7;
  i8 = i7!=(OOC_INT32)0;
  if (i8) goto l12;
  i8=OOC_FALSE;
  goto l14;
l12:
  i8 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7156)))), ADT_String__StringDesc_Equals)),ADT_String__StringDesc_Equals)((ADT_String__String)i7, (ADT_Object__Object)i0);
  i8 = !i8;
  
l14:
  if (i8) goto l19;
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7529))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7532))+12);
  i8 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7529))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7532))+12);
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7539)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i8);
  i7 = !i7;
  if (!i7) goto l23;
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7584))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7584))*4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7587)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i8, i3, OOC_TRUE);
  uri = (URI__URI)i7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7635)))), &_td_URI_Scheme_File__URIDesc, 7635)), 7639)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7635)))), &_td_URI_Scheme_File__URIDesc, 7635)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
  goto l23;
l19:
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7351)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i7);
  i7 = !i7;
  if (!i7) goto l23;
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7413))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7416))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7423))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7401)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i7, (ADT_Object__Object)(OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i6, imports_0d, OOC_UINT32, 7486))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7471)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (ADT_Object__Object)i7);
l23:
  i6 = i6+1;
  i7 = i6<=i5;
  i = i6;
  if (i7) goto l9_loop;
l28:
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l31;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7855)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 17, OOC_TRUE);
  uri = (URI__URI)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7919)))), &_td_URI_Scheme_File__URIDesc, 7919)), 7923)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7919)))), &_td_URI_Scheme_File__URIDesc, 7919)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
l31:
  i1 = *(OOC_INT32*)((_check_pointer(i2, 8060))+4);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l43;
  i3=0;
l34_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8105));
  i4 = _check_pointer(i4, 8111);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 8111))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8126)))), &_td_OOC_Repository__ModuleDesc, 8126);
  import = (OOC_Repository__Module)i4;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8152)))), OOC_Repository__ModuleDesc_FileExists)),OOC_Repository__ModuleDesc_FileExists)((OOC_Repository__Module)i4, 19);
  if (i5) goto l37;
  Strings__Append(" -l", 4, (void*)(OOC_INT32)str, 16384);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8615))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8622))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8634))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8615))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8622))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8634))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 8640)), 0);
  Strings__Append((void*)(_check_pointer(i5, 8640)), i4, (void*)(OOC_INT32)str, 16384);
  goto l38;
l37:
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8265)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 19, OOC_TRUE);
  uri = (URI__URI)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8322)))), &_td_URI_Scheme_File__URIDesc, 8322)), 8326)))), URI_Scheme_File__URIDesc_GetPath)),URI_Scheme_File__URIDesc_GetPath)((URI_Scheme_File__URI)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8322)))), &_td_URI_Scheme_File__URIDesc, 8322)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
l38:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l34_loop;
l43:
  i0 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs((void*)(OOC_INT32)imports, imports_0d, (ADT_String__String)i0);
  extLibs = (ADT_String__StringArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8856)), 0);
  i1 = i1-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l51;
l46_loop:
  i2 = _check_pointer(i0, 8906);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 8906))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8909))+4);
  i3 = _check_pointer(i0, 8906);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 8906))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8909))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8916)), 0);
  Strings__Append((void*)(_check_pointer(i2, 8916)), i3, (void*)(OOC_INT32)str, 16384);
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l46_loop;
l51:
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  i0 = (OOC_INT32)OOC_Config_CCompiler__libs;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9005))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9024)))), &_td_Config_Value_String__ValueDesc, 9024)), 9030));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9005))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9024)))), &_td_Config_Value_String__ValueDesc, 9024)), 9030));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9037)), 0);
  Strings__Append((void*)(_check_pointer(i1, 9037)), i0, (void*)(OOC_INT32)str, 16384);
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

  i0 = (OOC_INT32)ADT_String__New("", 1);
  OOC_Make_LinkProgramC__empty = (ADT_String__String)i0;
  i0 = (OOC_INT32)ADT_String__New(" ", 2);
  OOC_Make_LinkProgramC__space = (ADT_String__String)i0;
  return;
  ;
}

/* --- */
