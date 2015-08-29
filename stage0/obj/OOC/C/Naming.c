#include "OOC/C/Naming.d"
#include "__oo2c.h"

Object__String OOC_C_Naming__NameOfDeclaration(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 relativeName;
  OOC_C_Naming__Buffer str;
  OOC_SymbolTable__Item m;
  OOC_INT32 i;
  OOC_Scanner_InputBuffer__CharArray relativeId;
  Object__String name;
  Object__Object obj;
  auto OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsReservedName(OOC_CHAR8 str[], OOC_LEN str_0d);
  auto OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsInterfaceModule(OOC_SymbolTable__Module module);
    
    OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsReservedName(OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1;

      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1186)));
      i0 = i0==(OOC_CHAR8)'i';
      if (i0) goto l3;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1204)));
      i0 = i0==(OOC_CHAR8)'w';
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1222)));
      i0 = i0==(OOC_CHAR8)'l';
      
      goto l9;
l7:
      i0=OOC_TRUE;
l9:
      if (i0) goto l11;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1249)));
      i0 = i0==(OOC_CHAR8)'f';
      
      goto l13;
l11:
      i0=OOC_TRUE;
l13:
      if (i0) goto l15;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1267)));
      i0 = i0==(OOC_CHAR8)'d';
      
      goto l17;
l15:
      i0=OOC_TRUE;
l17:
      if (i0) goto l19;
      return OOC_FALSE;
      goto l41;
l19:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT32, 1324)));
      i0 = (OOC_CHAR8)'0'<=i0;
      if (i0) goto l22;
      i0=OOC_FALSE;
      goto l24;
l22:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT32, 1335)));
      i0 = i0<=(OOC_CHAR8)'9';
      
l24:
      if (i0) goto l26;
      i0=1;
      goto l36;
l26:
      i0=1;
l27_loop:
      i0 = i0+1;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1324)));
      i1 = (OOC_CHAR8)'0'<=i1;
      if (i1) goto l30;
      i1=OOC_FALSE;
      goto l32;
l30:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1335)));
      i1 = i1<=(OOC_CHAR8)'9';
      
l32:
      if (i1) goto l27_loop;
l36:
      i1 = i0>1;
      if (i1) goto l39;
      i0=OOC_FALSE;
      goto l40;
l39:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1410)));
      i0 = i0==(OOC_CHAR8)'\000';
      
l40:
      return i0;
l41:
      _failed_function(992); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsInterfaceModule(OOC_SymbolTable__Module module) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)module;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 1581))+44);
      return (i0==3);
      ;
    }


  relativeName = OOC_FALSE;
  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1692)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l9;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1727)))), &_td_OOC_SymbolTable__VarDeclDesc, 1727)), 1735))+48);
  if (i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1758))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1767)))), &_td_OOC_SymbolTable__ModuleDesc));
  
  goto l9;
l6:
  i1=OOC_TRUE;
l9:
  if (i1) goto l30;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1917)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l28;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2180)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2209)))), &_td_OOC_SymbolTable__ProcDeclDesc, 2209)), 2218))+56);
  i1 = i1!=(OOC_INT32)0;
  
l17:
  if (i1) goto l26;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2454)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l21;
  i0=OOC_FALSE;
  goto l23;
l21:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2496)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i0 = OOC_C_Naming__NameOfDeclaration_IsInterfaceModule((OOC_SymbolTable__Module)i0);
  
l23:
  if (!i0) goto l31;
  relativeName = OOC_TRUE;
  goto l31;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2410)))), &_td_OOC_SymbolTable__ProcDeclDesc, 2410)), 2419))+56);
  return (Object__String)i0;
  goto l31;
l28:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2132)))), &_td_OOC_SymbolTable__FieldDeclDesc, 2132)), 2142))+52);
  relativeName = (!i0);
  goto l31;
l30:
  relativeName = OOC_TRUE;
l31:
  i0 = relativeName;
  if (i0) goto l66;
  i0 = (OOC_INT32)decl;
  m = (OOC_SymbolTable__Item)i0;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2803)))), &_td_OOC_SymbolTable__ModuleDesc));
  if (i1) goto l36;
  i1=i0;
  goto l42;
l36:
  i1=i0;
l37_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2835))+4);
  m = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2803)))), &_td_OOC_SymbolTable__ModuleDesc));
  if (i2) goto l37_loop;
l42:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2873)))), &_td_OOC_SymbolTable__ModuleDesc, 2873)), 2880))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2886))+12);
  _copy_8((const void*)(_check_pointer(i1, 2891)),(void*)(OOC_INT32)str,2048);
  i = 0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2048, OOC_UINT32, 2930)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l45;
  i1=0;
  goto l54;
l45:
  i1=0;
l46_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 2958)));
  i2 = i2==(OOC_CHAR8)':';
  if (!i2) goto l49;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 2977))) = (OOC_CHAR8)'_';
l49:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 2930)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l46_loop;
l54:
  Strings__Append("__", 3, (void*)(OOC_INT32)str, 2048);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3200)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  relativeId = (OOC_Scanner_InputBuffer__CharArray)i0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3243)), (OOC_INT32)0);
  Strings__Append((void*)(_check_pointer(i0, 3243)), i2, (void*)(OOC_INT32)str, 2048);
  i0 = i1+2;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3286)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l67;
l57_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3314)));
  i1 = i1==(OOC_CHAR8)'.';
  if (!i1) goto l60;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3333))) = (OOC_CHAR8)'_';
l60:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3286)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l57_loop;
  goto l67;
l66:
  i0 = (OOC_INT32)decl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2694))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2700))+12);
  _copy_8((const void*)(_check_pointer(i0, 2705)),(void*)(OOC_INT32)str,2048);
l67:
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 2048);
  name = (Object__String)i0;
  i1 = (OOC_INT32)OOC_C_Naming__keywords;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3435)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  if (i1) goto l74;
  i0 = OOC_C_Naming__NameOfDeclaration_IsReservedName((void*)(OOC_INT32)str, 2048);
  if (i0) goto l72;
  i0 = (OOC_INT32)name;
  return (Object__String)i0;
  goto l75;
l72:
  i0 = (OOC_INT32)OOC_C_Naming__rwPrefix;
  i1 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3577)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i0, (Object__String)i1);
  return (Object__String)i0;
  goto l75;
l74:
  i1 = (OOC_INT32)OOC_C_Naming__keywords;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3477)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  obj = (Object__Object)i0;
  return (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3508)))), &_td_Object__StringDesc, 3508));
l75:
  _failed_function(750); return 0;
  ;
}

Object__String OOC_C_Naming__NameOfModuleInit(OOC_SymbolTable__Module m, OOC_CHAR8 rtWrapper) {
  register OOC_INT32 i0,i1;
  OOC_C_Naming__Buffer str;

  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3809))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3815))+12);
  _copy_8((const void*)(_check_pointer(i0, 3820)),(void*)(OOC_INT32)str,2048);
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2048, OOC_UINT32, 3855)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3881)));
  i1 = i1==(OOC_CHAR8)':';
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3900))) = (OOC_CHAR8)'_';
l6:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3855)));
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
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 2048);
  return (Object__String)i0;
  ;
}

Object__String OOC_C_Naming__NameOfLengthParam(OOC_SymbolTable__VarDecl param, OOC_INT32 dim) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[16];

  i0 = dim;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, 16);
  i0 = (OOC_INT32)param;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
  return (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i0,(void*)((OOC_INT32)_c0))),(void*)i1)),(void*)((OOC_INT32)_c1)));
  ;
}

Object__String OOC_C_Naming__NameOfTypeTagParam(OOC_SymbolTable__VarDecl param) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)param;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  return (Object__String)((OOC_INT32)Object__Concat2((void*)i0,(void*)((OOC_INT32)_c2)));
  ;
}

Object__String OOC_C_Naming__NameOfType(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4669))+20);
  _assert((i1!=(OOC_INT32)0), 127, 4657);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4724))+20);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  return (Object__String)i0;
  ;
}

Object__String OOC_C_Naming__NameOfTypeDescriptor(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[32];
  OOC_CHAR8 str2[32];
  Object__String string;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4960)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5672))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1 = (OOC_INT32)OOC_C_Naming__tdPrefix;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5940)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i0);
  return (Object__String)i0;
  goto l23;
l5:
  i1 = (OOC_INT32)OOC_C_Naming__tdPrefix;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5756)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5723)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i2);
  string = (Object__String)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5799))+16);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 5809));
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5846)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i1, (Object__String)i0);
  return (Object__String)i0;
  goto l23;
l7:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 4995))+32);
  switch (i0) {
  case 0:
    _copy_8((const void*)"boolean",(void*)(OOC_INT32)str,32);
    goto l22;
  case 1:
    _copy_8((const void*)"char",(void*)(OOC_INT32)str,32);
    goto l22;
  case 2:
    _copy_8((const void*)"longchar",(void*)(OOC_INT32)str,32);
    goto l22;
  case 3:
    _copy_8((const void*)"ucs4char",(void*)(OOC_INT32)str,32);
    goto l22;
  case 4:
    _copy_8((const void*)"shortint",(void*)(OOC_INT32)str,32);
    goto l22;
  case 5:
    _copy_8((const void*)"integer",(void*)(OOC_INT32)str,32);
    goto l22;
  case 6:
    _copy_8((const void*)"longint",(void*)(OOC_INT32)str,32);
    goto l22;
  case 8:
    _copy_8((const void*)"real",(void*)(OOC_INT32)str,32);
    goto l22;
  case 9:
    _copy_8((const void*)"longreal",(void*)(OOC_INT32)str,32);
    goto l22;
  case 10:
    _copy_8((const void*)"set32",(void*)(OOC_INT32)str,32);
    goto l22;
  case 11:
    _copy_8((const void*)"byte",(void*)(OOC_INT32)str,32);
    goto l22;
  case 12:
    _copy_8((const void*)"ptr",(void*)(OOC_INT32)str,32);
    goto l22;
  default:
    _failed_case(i0, 4986);
    goto l22;
  }
l22:
  _copy_8((const void*)"RT0",(void*)(OOC_INT32)str2,32);
  Strings__Append("__", 3, (void*)(OOC_INT32)str2, 32);
  Strings__Append((void*)(OOC_INT32)str, 32, (void*)(OOC_INT32)str2, 32);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str2, 32);
  return (Object__String)i0;
l23:
  _failed_function(4768); return 0;
  ;
}

Object__String OOC_C_Naming__NameOfTypeBoundIndex(OOC_SymbolTable__ProcDecl proc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)proc;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  return (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)_c3),(void*)i0));
  ;
}

Object__String OOC_C_Naming__NameOfTypeBoundSignature(OOC_SymbolTable__ProcDecl proc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)proc;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  return (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)_c4),(void*)i0));
  ;
}

static void OOC_C_Naming__Init() {
  register OOC_INT32 i0;
  auto void OOC_C_Naming__Init_RW(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
    
    void OOC_C_Naming__Init_RW(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
      Object__String name;

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, str_0d);
      name = (Object__String)i0;
      i1 = (OOC_INT32)OOC_C_Naming__keywords;
      i2 = (OOC_INT32)OOC_C_Naming__rwPrefix;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6698)))), Object__StringDesc_Concat)),Object__StringDesc_Concat)((Object__String)i2, (Object__String)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6677)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)i2);
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  OOC_C_Naming__keywords = (ADT_Dictionary__Dictionary)i0;
  OOC_C_Naming__rwPrefix = (Object__String)((OOC_INT32)_c5);
  OOC_C_Naming__tdPrefix = (Object__String)((OOC_INT32)_c6);
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
  _c0 = Object__NewLatin1Char((OOC_CHAR8)'_');
  _c1 = Object__NewLatin1Char((OOC_CHAR8)'d');
  _c2 = Object__NewLatin1Region("__tag", 6, (OOC_INT32)0, 5);
  _c3 = Object__NewLatin1Region("_TBN_", 6, (OOC_INT32)0, 5);
  _c4 = Object__NewLatin1Region("_TBP_", 6, (OOC_INT32)0, 5);
  _c5 = Object__NewLatin1Char((OOC_CHAR8)'_');
  _c6 = Object__NewLatin1Region("_td_", 5, (OOC_INT32)0, 4);

  OOC_C_Naming__Init();
  return;
  ;
}

/* --- */
