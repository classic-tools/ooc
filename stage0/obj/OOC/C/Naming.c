#include "OOC/C/Naming.d"
#include "__oo2c.h"

ADT_String__String OOC_C_Naming__NameOfDeclaration(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 relativeName;
  OOC_C_Naming__Buffer str;
  OOC_SymbolTable__Item m;
  OOC_INT32 i;
  OOC_Scanner_InputBuffer__CharArray relativeId;
  ADT_String__String name;
  ADT_Object__Object obj;
  auto OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsReservedName(OOC_CHAR8 str[], OOC_LEN str_0d);
  auto OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsInterfaceModule(OOC_SymbolTable__Module module);
    
    OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsReservedName(OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1;

      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1210)));
      i0 = i0==(OOC_CHAR8)'i';
      if (i0) goto l3;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1228)));
      i0 = i0==(OOC_CHAR8)'w';
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1246)));
      i0 = i0==(OOC_CHAR8)'l';
      
      goto l9;
l7:
      i0=OOC_TRUE;
l9:
      if (i0) goto l11;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1273)));
      i0 = i0==(OOC_CHAR8)'f';
      
      goto l13;
l11:
      i0=OOC_TRUE;
l13:
      if (i0) goto l15;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1291)));
      i0 = i0==(OOC_CHAR8)'d';
      
      goto l17;
l15:
      i0=OOC_TRUE;
l17:
      if (i0) goto l19;
      return OOC_FALSE;
      goto l41;
l19:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT32, 1348)));
      i0 = (OOC_CHAR8)'0'<=i0;
      if (i0) goto l22;
      i0=OOC_FALSE;
      goto l24;
l22:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT32, 1359)));
      i0 = i0<=(OOC_CHAR8)'9';
      
l24:
      if (i0) goto l26;
      i0=1;
      goto l36;
l26:
      i0=1;
l27_loop:
      i0 = i0+1;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1348)));
      i1 = (OOC_CHAR8)'0'<=i1;
      if (i1) goto l30;
      i1=OOC_FALSE;
      goto l32;
l30:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1359)));
      i1 = i1<=(OOC_CHAR8)'9';
      
l32:
      if (i1) goto l27_loop;
l36:
      i1 = i0>1;
      if (i1) goto l39;
      i0=OOC_FALSE;
      goto l40;
l39:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1434)));
      i0 = i0==(OOC_CHAR8)'\000';
      
l40:
      return i0;
l41:
      _failed_function(1016); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsInterfaceModule(OOC_SymbolTable__Module module) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)module;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 1605))+44);
      return (i0==3);
      ;
    }


  relativeName = OOC_FALSE;
  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1716)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l9;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1751)))), &_td_OOC_SymbolTable__VarDeclDesc, 1751)), 1759))+48);
  if (i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1782))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1791)))), &_td_OOC_SymbolTable__ModuleDesc));
  
  goto l9;
l6:
  i1=OOC_TRUE;
l9:
  if (i1) goto l30;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1941)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l28;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2204)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2233)))), &_td_OOC_SymbolTable__ProcDeclDesc, 2233)), 2242))+56);
  i1 = i1!=(OOC_INT32)0;
  
l17:
  if (i1) goto l26;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2478)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l21;
  i0=OOC_FALSE;
  goto l23;
l21:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2520)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i0 = OOC_C_Naming__NameOfDeclaration_IsInterfaceModule((OOC_SymbolTable__Module)i0);
  
l23:
  if (!i0) goto l31;
  relativeName = OOC_TRUE;
  goto l31;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2434)))), &_td_OOC_SymbolTable__ProcDeclDesc, 2434)), 2443))+56);
  return (ADT_String__String)i0;
  goto l31;
l28:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2156)))), &_td_OOC_SymbolTable__FieldDeclDesc, 2156)), 2166))+52);
  relativeName = (!i0);
  goto l31;
l30:
  relativeName = OOC_TRUE;
l31:
  i0 = relativeName;
  if (i0) goto l66;
  i0 = (OOC_INT32)decl;
  m = (OOC_SymbolTable__Item)i0;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2827)))), &_td_OOC_SymbolTable__ModuleDesc));
  if (i1) goto l36;
  i1=i0;
  goto l42;
l36:
  i1=i0;
l37_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2859))+4);
  m = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2827)))), &_td_OOC_SymbolTable__ModuleDesc));
  if (i2) goto l37_loop;
l42:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2897)))), &_td_OOC_SymbolTable__ModuleDesc, 2897)), 2904))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2910))+12);
  _copy_8((_check_pointer(i1, 2915)),(OOC_INT32)str,2048);
  i = 0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2048, OOC_UINT32, 2954)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l45;
  i1=0;
  goto l54;
l45:
  i1=0;
l46_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 2982)));
  i2 = i2==(OOC_CHAR8)':';
  if (!i2) goto l49;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 3001))) = (OOC_CHAR8)'_';
l49:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 2954)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l46_loop;
l54:
  Strings__Append("__", 3, (void*)(OOC_INT32)str, 2048);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3224)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  relativeId = (OOC_Scanner_InputBuffer__CharArray)i0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3267)), 0);
  Strings__Append((void*)(_check_pointer(i0, 3267)), i2, (void*)(OOC_INT32)str, 2048);
  i0 = i1+2;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3310)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l67;
l57_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3338)));
  i1 = i1==(OOC_CHAR8)'.';
  if (!i1) goto l60;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3357))) = (OOC_CHAR8)'_';
l60:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3310)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l57_loop;
  goto l67;
l66:
  i0 = (OOC_INT32)decl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2718))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2724))+12);
  _copy_8((_check_pointer(i0, 2729)),(OOC_INT32)str,2048);
l67:
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 2048);
  name = (ADT_String__String)i0;
  i1 = (OOC_INT32)OOC_C_Naming__keywords;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3454)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0);
  if (i1) goto l74;
  i0 = OOC_C_Naming__NameOfDeclaration_IsReservedName((void*)(OOC_INT32)str, 2048);
  if (i0) goto l72;
  i0 = (OOC_INT32)name;
  return (ADT_String__String)i0;
  goto l75;
l72:
  i0 = (OOC_INT32)OOC_C_Naming__rwPrefix;
  i1 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3600)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i0, (ADT_String__String)i1);
  return (ADT_String__String)i0;
  goto l75;
l74:
  i1 = (OOC_INT32)OOC_C_Naming__keywords;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3496)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0);
  obj = (ADT_Object__Object)i0;
  return (ADT_String__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3534)))), &_td_ADT_String__StringDesc, 3534));
l75:
  _failed_function(780); return 0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfModuleInit(OOC_SymbolTable__Module m, OOC_CHAR8 rtWrapper) {
  register OOC_INT32 i0,i1;
  OOC_C_Naming__Buffer str;

  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3818))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3824))+12);
  _copy_8((_check_pointer(i0, 3829)),(OOC_INT32)str,2048);
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2048, OOC_UINT32, 3864)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3890)));
  i1 = i1==(OOC_CHAR8)':';
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3909))) = (OOC_CHAR8)'_';
l6:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3864)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3_loop;
l11:
  Strings__Insert("OOC_", 5, 0, (void*)(OOC_INT32)str, 2048);
  i0 = rtWrapper;
  if (i0) goto l14;
  Strings__Append("_init", 6, (void*)(OOC_INT32)str, 2048);
  goto l15;
l14:
  Strings__Append("_init0", 7, (void*)(OOC_INT32)str, 2048);
l15:
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 2048);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfLengthParam(OOC_SymbolTable__VarDecl param, OOC_INT32 dim) {
  register OOC_INT32 i0,i1;
  ADT_String__String name;
  OOC_C_Naming__Buffer str;

  i0 = (OOC_INT32)param;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (ADT_String__String)i0;
  i1 = dim;
  IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 2048);
  Strings__Insert("_", 2, 0, (void*)(OOC_INT32)str, 2048);
  Strings__Append("d", 2, (void*)(OOC_INT32)str, 2048);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4454))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4454))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4461)), 0);
  Strings__Insert((void*)(_check_pointer(i1, 4461)), i0, 0, (void*)(OOC_INT32)str, 2048);
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 2048);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfTypeTagParam(OOC_SymbolTable__VarDecl param) {
  register OOC_INT32 i0;
  ADT_String__String name;
  OOC_C_Naming__Buffer str;

  i0 = (OOC_INT32)param;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (ADT_String__String)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4703))+4);
  _copy_8((_check_pointer(i0, 4710)),(OOC_INT32)str,2048);
  Strings__Append("__tag", 6, (void*)(OOC_INT32)str, 2048);
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 2048);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4952))+20);
  _assert((i1!=(OOC_INT32)0), 127, 4940);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5007))+20);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfTypeDescriptor(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[32];
  OOC_CHAR8 str2[32];
  ADT_String__String name;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5255)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5919))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1 = (OOC_INT32)OOC_C_Naming__tdPrefix;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6149)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i1, (ADT_String__String)i0);
  return (ADT_String__String)i0;
  goto l22;
l5:
  i1 = (OOC_INT32)OOC_C_Naming__tdPrefix;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6001)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5968)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i1, (ADT_String__String)i2);
  name = (ADT_String__String)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6044))+16);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6054));
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6086)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i1, (ADT_String__String)i0);
  return (ADT_String__String)i0;
  goto l22;
l7:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5290))+32);
  switch (i0) {
  case 0:
    _copy_8("boolean",(OOC_INT32)str,32);
    goto l21;
  case 1:
    _copy_8("char",(OOC_INT32)str,32);
    goto l21;
  case 2:
    _copy_8("longchar",(OOC_INT32)str,32);
    goto l21;
  case 3:
    _copy_8("shortint",(OOC_INT32)str,32);
    goto l21;
  case 4:
    _copy_8("integer",(OOC_INT32)str,32);
    goto l21;
  case 5:
    _copy_8("longint",(OOC_INT32)str,32);
    goto l21;
  case 7:
    _copy_8("real",(OOC_INT32)str,32);
    goto l21;
  case 8:
    _copy_8("longreal",(OOC_INT32)str,32);
    goto l21;
  case 9:
    _copy_8("set32",(OOC_INT32)str,32);
    goto l21;
  case 10:
    _copy_8("byte",(OOC_INT32)str,32);
    goto l21;
  case 11:
    _copy_8("ptr",(OOC_INT32)str,32);
    goto l21;
  default:
    _failed_case(i0, 5281);
    goto l21;
  }
l21:
  _copy_8("RT0",(OOC_INT32)str2,32);
  Strings__Append("__", 3, (void*)(OOC_INT32)str2, 32);
  Strings__Append((void*)(OOC_INT32)str, 32, (void*)(OOC_INT32)str2, 32);
  i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str2, 32);
  return (ADT_String__String)i0;
l22:
  _failed_function(5051); return 0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfTypeBoundIndex(OOC_SymbolTable__ProcDecl proc) {
  register OOC_INT32 i0,i1;
  ADT_String__String name;

  i0 = (OOC_INT32)ADT_String__New("_TBN_", 6);
  name = (ADT_String__String)i0;
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6479)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i0, (ADT_String__String)i1);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String OOC_C_Naming__NameOfTypeBoundSignature(OOC_SymbolTable__ProcDecl proc) {
  register OOC_INT32 i0,i1;
  ADT_String__String name;

  i0 = (OOC_INT32)ADT_String__New("_TBP_", 6);
  name = (ADT_String__String)i0;
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6806)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i0, (ADT_String__String)i1);
  return (ADT_String__String)i0;
  ;
}

static void OOC_C_Naming__Init() {
  register OOC_INT32 i0;
  auto void OOC_C_Naming__Init_RW(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
    
    void OOC_C_Naming__Init_RW(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
      ADT_String__String name;

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i0 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)str, str_0d);
      name = (ADT_String__String)i0;
      i1 = (OOC_INT32)OOC_C_Naming__keywords;
      i2 = (OOC_INT32)OOC_C_Naming__rwPrefix;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7044)))), ADT_String__StringDesc_Concat)),ADT_String__StringDesc_Concat)((ADT_String__String)i2, (ADT_String__String)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7023)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0, (ADT_Object__Object)i2);
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  OOC_C_Naming__keywords = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)ADT_String__New("_", 2);
  OOC_C_Naming__rwPrefix = (ADT_String__String)i0;
  i0 = (OOC_INT32)ADT_String__New("_td_", 5);
  OOC_C_Naming__tdPrefix = (ADT_String__String)i0;
  OOC_C_Naming__Init_RW("auto", 5);
  OOC_C_Naming__Init_RW("break", 6);
  OOC_C_Naming__Init_RW("case", 5);
  OOC_C_Naming__Init_RW("char", 5);
  OOC_C_Naming__Init_RW("const", 6);
  OOC_C_Naming__Init_RW("continue", 9);
  OOC_C_Naming__Init_RW("default", 8);
  OOC_C_Naming__Init_RW("do", 3);
  OOC_C_Naming__Init_RW("double", 7);
  OOC_C_Naming__Init_RW("else", 5);
  OOC_C_Naming__Init_RW("enum", 5);
  OOC_C_Naming__Init_RW("extern", 7);
  OOC_C_Naming__Init_RW("float", 6);
  OOC_C_Naming__Init_RW("for", 4);
  OOC_C_Naming__Init_RW("goto", 5);
  OOC_C_Naming__Init_RW("if", 3);
  OOC_C_Naming__Init_RW("int", 4);
  OOC_C_Naming__Init_RW("long", 5);
  OOC_C_Naming__Init_RW("register", 9);
  OOC_C_Naming__Init_RW("return", 7);
  OOC_C_Naming__Init_RW("short", 6);
  OOC_C_Naming__Init_RW("signed", 7);
  OOC_C_Naming__Init_RW("sizeof", 7);
  OOC_C_Naming__Init_RW("static", 7);
  OOC_C_Naming__Init_RW("struct", 7);
  OOC_C_Naming__Init_RW("switch", 7);
  OOC_C_Naming__Init_RW("typedef", 8);
  OOC_C_Naming__Init_RW("union", 6);
  OOC_C_Naming__Init_RW("unsigned", 9);
  OOC_C_Naming__Init_RW("void", 5);
  OOC_C_Naming__Init_RW("volatile", 9);
  OOC_C_Naming__Init_RW("while", 6);
  OOC_C_Naming__Init_RW("fortran", 8);
  OOC_C_Naming__Init_RW("asm", 4);
  OOC_C_Naming__Init_RW("bool", 5);
  OOC_C_Naming__Init_RW("catch", 6);
  OOC_C_Naming__Init_RW("class", 6);
  OOC_C_Naming__Init_RW("delete", 7);
  OOC_C_Naming__Init_RW("false", 6);
  OOC_C_Naming__Init_RW("friend", 7);
  OOC_C_Naming__Init_RW("inline", 7);
  OOC_C_Naming__Init_RW("new", 4);
  OOC_C_Naming__Init_RW("operator", 9);
  OOC_C_Naming__Init_RW("private", 8);
  OOC_C_Naming__Init_RW("protected", 10);
  OOC_C_Naming__Init_RW("public", 7);
  OOC_C_Naming__Init_RW("template", 9);
  OOC_C_Naming__Init_RW("true", 5);
  OOC_C_Naming__Init_RW("try", 4);
  OOC_C_Naming__Init_RW("this", 5);
  OOC_C_Naming__Init_RW("virtual", 8);
  OOC_C_Naming__Init_RW("throw", 6);
  OOC_C_Naming__Init_RW("NULL", 5);
  return;
  ;
}

void OOC_OOC_C_Naming_init(void) {

  OOC_C_Naming__Init();
  return;
  ;
}

/* --- */
