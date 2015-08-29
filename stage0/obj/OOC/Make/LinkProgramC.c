#include <OOC/Make/LinkProgramC.d>
#include <__oo2c.h>
#include <setjmp.h>

static Object__StringArrayPtr OOC_Make_LinkProgramC__GetExternalLibs(const OOC_Repository__Module moduleList__ref[], OOC_LEN moduleList_0d, Object__String thisLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
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

      i0 = (OOC_INT32)libDeps;
      i1 = (OOC_INT32)libName;
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l3;
      i0 = (OOC_INT32)ADT_ArrayList__New(4);
      i2 = (OOC_INT32)libDeps;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i0);
      return (ADT_ArrayList__ArrayList)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)libDeps;
      i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      return (ADT_ArrayList__ArrayList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1839)))), &_td_ADT_ArrayList__ArrayListDesc, 1839));
l4:
      _failed_function(1606); return 0;
      ;
    }

    
    void OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary(Object__String libName, OOC_INT32 *pos) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      ADT_ArrayList__ArrayList depArray;
      OOC_INT32 i;
      Object__Object obj;

      i0 = (OOC_INT32)visited;
      i1 = (OOC_INT32)libName;
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = (OOC_INT32)libDeps;
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      
l5:
      if (!i0) goto l15;
      i0 = (OOC_INT32)visited;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
      i0 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray((Object__String)i1);
      depArray = (ADT_ArrayList__ArrayList)i0;
      i = 0;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 2317))+4);
      i3 = 0<i2;
      if (!i3) goto l14;
      i3=0;
l9_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2357));
      i4 = _check_pointer(i4, 2363);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2363))*4);
      OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary((Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2374)))), &_td_Object__StringDesc, 2374)), (void*)(OOC_INT32)pos);
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l9_loop;
l14:
      i0 = (OOC_INT32)option;
      i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      i1 = (OOC_INT32)extLibs;
      i1 = _check_pointer(i1, 2453);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = *pos;
      *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 2453))*4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2466)))), &_td_Object__StringDesc, 2466));
      *pos = (i3+1);
l15:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule(OOC_Repository__Module module) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2619))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2626))+48);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2665))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2672))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2665))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2672))+48);
      i2 = (OOC_INT32)thisLibrary;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2684)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i2);
      
      goto l4;
l3:
      i0=1u;
l4:
      return i0;
      ;
    }

    
    Object__String OOC_Make_LinkProgramC__GetExternalLibs_Option(Object__String libraryName) {
      register OOC_INT32 i0,i1,i2;
      Object__Object obj;

      i0 = (OOC_INT32)option;
      i1 = (OOC_INT32)libraryName;
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (i0) goto l3;
      i0 = (OOC_INT32)Object__Concat2((void*)((OOC_INT32)_c0),(void*)i1);
      i2 = (OOC_INT32)option;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i0);
      return (Object__String)i0;
      goto l4;
l3:
      i0 = (OOC_INT32)option;
      i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      return (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2942)))), &_td_Object__StringDesc, 2942));
l4:
      _failed_function(2742); return 0;
      ;
    }

    
    Object__String OOC_Make_LinkProgramC__GetExternalLibs_LookupValue(Object__String optionName) {
      register OOC_INT32 i0,i1,i2;
      Object__CharsLatin1 chars;
      Config_Value__Value v;

      i0 = (OOC_INT32)optionName;
      i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3241)))), &_td_Object__String8Desc, 3241)));
      chars = (Object__CharsLatin1)i0;
      i1 = (OOC_INT32)OOC_Config__options;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3305)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3290)))), Config_Section_Options__SectionDesc_GetValue)),Config_Section_Options__SectionDesc_GetValue)((Config_Section_Options__Section)i1, (void*)(_check_pointer(i0, 3305)), i2);
      v = (Config_Value__Value)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3333)))), &_td_Config_Value_String__ValueDesc);
      
l5:
      if (i1) goto l7;
      i0 = (OOC_INT32)OOC_Make_LinkProgramC__empty;
      return (Object__String)i0;
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3406)))), &_td_Config_Value_String__ValueDesc, 3406)), 3412));
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3406)))), &_td_Config_Value_String__ValueDesc, 3406)), 3412));
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3419)), 0);
      i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i1, 3419)), i0);
      return (Object__String)i0;
l8:
      _failed_function(3094); return 0;
      ;
    }


  OOC_INITIALIZE_VPAR(moduleList__ref,moduleList,OOC_Repository__Module ,(moduleList_0d*4))
  i0 = (OOC_INT32)ADT_Dictionary__New();
  libDeps = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)ADT_Dictionary__New();
  option = (ADT_Dictionary__Dictionary)i0;
  i = 0;
  i0 = 0<moduleList_0d;
  if (!i0) goto l36;
  i1=0;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i1, moduleList_0d, OOC_UINT32, 3816))*4);
  i1 = OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule((OOC_Repository__Module)i1);
  if (!i1) goto l31;
  i1 = i;
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i1, moduleList_0d, OOC_UINT32, 3925))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3928))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3935))+56);
  linkDirective = (OOC_SymbolTable__LinkDirective)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l31;
l8_loop:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4019)))), &_td_OOC_SymbolTable__LinkLibDesc);
  if (!i2) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4085))+4);
  i1 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_GetDepArray((Object__String)i1);
  depArray = (ADT_ArrayList__ArrayList)i1;
  i2 = (OOC_INT32)linkDirective;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4143))+8);
  j = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4156)), 0);
  i4 = 0<i3;
  if (!i4) goto l18;
  i4=0;
l13_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4207))+8);
  i5 = _check_pointer(i5, 4220);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4220))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4186)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i4);
  i4 = j;
  i4 = i4+1;
  j = i4;
  i5 = i4<i3;
  if (i5) goto l13_loop;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4283))+4);
  i1 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_Option((Object__String)i1);
  prev = (Object__String)i1;
  i1 = (OOC_INT32)linkDirective;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4327))+12);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4412))+12);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__space;
  i1 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_LookupValue((Object__String)i1);
  i1 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i2, (Object__String)i1);
  _new = (Object__String)i1;
  i2 = (OOC_INT32)linkDirective;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4467))+4);
  i4 = (OOC_INT32)prev;
  i1 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i1, (Object__String)i4);
  i4 = (OOC_INT32)option;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i4, (Object__Object)i3, (Object__Object)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4542))+4);
  i1 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_Option((Object__String)i1);
  prev = (Object__String)i1;
l21:
  i1 = (OOC_INT32)linkDirective;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4617))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4702))+16);
  i2 = (OOC_INT32)OOC_Make_LinkProgramC__space;
  i1 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs_LookupValue((Object__String)i1);
  i1 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i2, (Object__String)i1);
  _new = (Object__String)i1;
  i2 = (OOC_INT32)linkDirective;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4757))+4);
  i3 = (OOC_INT32)prev;
  i1 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i3, (Object__String)i1);
  i3 = (OOC_INT32)option;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i3, (Object__Object)i2, (Object__Object)i1);
l25:
  i1 = (OOC_INT32)linkDirective;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4914));
  linkDirective = (OOC_SymbolTable__LinkDirective)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l8_loop;
l31:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<moduleList_0d;
  if (i2) goto l3_loop;
l36:
  i1 = (OOC_INT32)libDeps;
  i1 = ADT_Dictionary__DictionaryDesc_Size((ADT_Dictionary__Dictionary)i1);
  extLibs = (Object__StringArrayPtr)((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i1));
  i1 = (OOC_INT32)ADT_Dictionary__New();
  visited = (ADT_Dictionary__Dictionary)i1;
  j = 0;
  i = 0;
  if (!i0) goto l58;
  i0=0;
l39_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i0, moduleList_0d, OOC_UINT32, 5326))*4);
  i0 = OOC_Make_LinkProgramC__GetExternalLibs_IncludeModule((OOC_Repository__Module)i0);
  if (!i0) goto l53;
  i0 = i;
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)moduleList+(_check_index(i0, moduleList_0d, OOC_UINT32, 5435))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5438))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5445))+56);
  linkDirective = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l53;
l44_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5529)))), &_td_OOC_SymbolTable__LinkLibDesc);
  if (!i1) goto l47;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5582))+4);
  OOC_Make_LinkProgramC__GetExternalLibs_AddLibrary((Object__String)i0, (void*)(OOC_INT32)&j);
l47:
  i0 = (OOC_INT32)linkDirective;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5707));
  linkDirective = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l44_loop;
l53:
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = i0<moduleList_0d;
  if (i1) goto l39_loop;
l58:
  i0 = (OOC_INT32)extLibs;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5773)), 0);
  i2 = j;
  _assert((i2==i1), 127, 5751);
  return (Object__StringArrayPtr)i0;
  ;
}

OOC_CHAR8 OOC_Make_LinkProgramC__Run(OOC_Repository__Module module, const OOC_Repository__Module imports__ref[], OOC_LEN imports_0d, Object__String forLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_ALLOCATE_VPAR(imports,OOC_Repository__Module ,imports_0d)
  OOC_INT32 exit;
  OOC_INT8 objectFile;
  OOC_INT8 outputFile;
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
  exit = 0;
  i0 = (OOC_INT32)forLibrary;
  i1 = i0!=(OOC_INT32)0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6659)))), OOC_Repository__ModuleDesc_CreateOutputDir)),OOC_Repository__ModuleDesc_CreateOutputDir)((OOC_Repository__Module)i4, i2);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6735)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, i2, 1u);
  OOC_Config_CCompiler__LinkProgramCmd((URI__URI)i2, i1, (void*)(OOC_INT32)str, 16384);
  i1 = (OOC_INT32)ADT_Dictionary__New();
  importedLibs = (ADT_Dictionary__Dictionary)i1;
  i2 = (OOC_INT32)ADT_ArrayList__New(4);
  importedLibsList = (ADT_ArrayList__ArrayList)i2;
  i = 0;
  i5 = 0<imports_0d;
  if (!i5) goto l26;
  i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 6927))*4);
  i6 = *(OOC_INT8*)((_check_pointer(i6, 6930))+16);
  _assert((i6==4), 127, 6913);
  i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 7002))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7005))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7012))+48);
  libraryName = (Object__String)i6;
  i7 = i6!=(OOC_INT32)0;
  if (i7) goto l10;
  i7=0u;
  goto l12;
l10:
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7069)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i6, (Object__Object)i0);
  i7 = !i7;
  
l12:
  if (i7) goto l17;
  i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 7428))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7431))+12);
  i6 = OOC_SymbolTable__ModuleDesc_NoObjectFile((OOC_SymbolTable__Module)i6);
  i6 = !i6;
  if (!i6) goto l21;
  i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 7481))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 7481))*4);
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7484)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i7, i3, 1u);
  uri = (URI__URI)i6;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7530)))), &_td_URI_Scheme_File__URIDesc, 7530)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
  goto l21;
l17:
  i6 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i6);
  i6 = !i6;
  if (!i6) goto l21;
  i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 7318))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7321))+12);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7328))+48);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i6, (Object__Object)(OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i5, imports_0d, OOC_UINT32, 7389))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7374)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i6);
l21:
  i5 = i5+1;
  i = i5;
  i6 = i5<imports_0d;
  if (i6) goto l7_loop;
l26:
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l29;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7736)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 17, 1u);
  uri = (URI__URI)i1;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7798)))), &_td_URI_Scheme_File__URIDesc, 7798)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
l29:
  i1 = *(OOC_INT32*)((_check_pointer(i2, 7931))+4);
  i = 0;
  i3 = 0<i1;
  if (!i3) goto l41;
  i3=0;
l32_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7974));
  i4 = _check_pointer(i4, 7980);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7980))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7995)))), &_td_OOC_Repository__ModuleDesc, 7995);
  import = (OOC_Repository__Module)i4;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8019)))), OOC_Repository__ModuleDesc_FileExists)),OOC_Repository__ModuleDesc_FileExists)((OOC_Repository__Module)i4, 19);
  if (i5) goto l35;
  Strings__Append(" -l", 4, (void*)(OOC_INT32)str, 16384);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8456))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8463))+48);
  i4 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8483)))), &_td_Object__String8Desc, 8483)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 8535)), 0);
  Strings__Append((void*)(_check_pointer(i4, 8535)), i5, (void*)(OOC_INT32)str, 16384);
  goto l36;
l35:
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8128)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 19, 1u);
  uri = (URI__URI)i4;
  URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8183)))), &_td_URI_Scheme_File__URIDesc, 8183)), (void*)(OOC_INT32)path, 1024);
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  Strings__Append((void*)(OOC_INT32)path, 1024, (void*)(OOC_INT32)str, 16384);
l36:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l32_loop;
l41:
  i0 = (OOC_INT32)OOC_Make_LinkProgramC__GetExternalLibs((void*)(OOC_INT32)imports, imports_0d, (Object__String)i0);
  extLibs = (Object__StringArrayPtr)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8737)), 0);
  i1 = i1-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l49;
l44_loop:
  i2 = _check_pointer(i0, 8778);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 8778))*4);
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8789)))), &_td_Object__String8Desc, 8789)));
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8840)), 0);
  Strings__Append((void*)(_check_pointer(i2, 8840)), i3, (void*)(OOC_INT32)str, 16384);
  i1 = i1+(-1);
  i = i1;
  i2 = i1>=0;
  if (i2) goto l44_loop;
l49:
  Strings__Append(" ", 2, (void*)(OOC_INT32)str, 16384);
  i0 = (OOC_INT32)OOC_Config_CCompiler__libs;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8923))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8942)))), &_td_Config_Value_String__ValueDesc, 8942)), 8948));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8923))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8942)))), &_td_Config_Value_String__ValueDesc, 8942)), 8948));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8955)), 0);
  Strings__Append((void*)(_check_pointer(i1, 8955)), i0, (void*)(OOC_INT32)str, 16384);
  Out__String((void*)(OOC_INT32)str, 16384);
  Out__Ln();
  i0 = OS_ProcessManagement__system((void*)(OOC_INT32)str, 16384);
  return (i0==0);
  ;
}

void OOC_OOC_Make_LinkProgramC_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region(" -l", 4, 0, 3);
  _c1 = Object__NewLatin1Char(32u);

  i0 = (OOC_INT32)Object__emptyString;
  OOC_Make_LinkProgramC__empty = (Object__String)i0;
  OOC_Make_LinkProgramC__space = (Object__String)((OOC_INT32)_c1);
  return;
  ;
}

/* --- */
