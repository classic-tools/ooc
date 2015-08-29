#include <OOC/C/Naming.d>
#include <__oo2c.h>
#include <setjmp.h>

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
      i0 = i0==105u;
      if (i0) goto l3;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1204)));
      i0 = i0==119u;
      
      goto l5;
l3:
      i0=1u;
l5:
      if (i0) goto l7;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1222)));
      i0 = i0==108u;
      
      goto l9;
l7:
      i0=1u;
l9:
      if (i0) goto l11;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1249)));
      i0 = i0==102u;
      
      goto l13;
l11:
      i0=1u;
l13:
      if (i0) goto l15;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 1267)));
      i0 = i0==100u;
      
      goto l17;
l15:
      i0=1u;
l17:
      if (i0) goto l19;
      return 0u;
      goto l41;
l19:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT32, 1324)));
      i0 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
      if (i0) goto l22;
      i0=0u;
      goto l24;
l22:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT32, 1335)));
      i0 = (OOC_UINT8)i0<=(OOC_UINT8)57u;
      
l24:
      if (i0) goto l26;
      i0=1;
      goto l36;
l26:
      i0=1;
l27_loop:
      i0 = i0+1;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1324)));
      i1 = (OOC_UINT8)48u<=(OOC_UINT8)i1;
      if (i1) goto l30;
      i1=0u;
      goto l32;
l30:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1335)));
      i1 = (OOC_UINT8)i1<=(OOC_UINT8)57u;
      
l32:
      if (i1) goto l27_loop;
l36:
      i1 = i0>1;
      if (i1) goto l39;
      i0=0u;
      goto l40;
l39:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 1410)));
      i0 = i0==0u;
      
l40:
      return i0;
l41:
      _failed_function(992); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_C_Naming__NameOfDeclaration_IsInterfaceModule(OOC_SymbolTable__Module module) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)module;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 1581))+52);
      return (i0==3);
      ;
    }


  relativeName = 0u;
  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1692)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i1=0u;
  goto l13;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1727)))), &_td_OOC_SymbolTable__VarDeclDesc, 1727)), 1735))+56);
  if (i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1766))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1775)))), &_td_OOC_SymbolTable__ModuleDesc));
  
  goto l8;
l6:
  i1=1u;
l8:
  if (i1) goto l10;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1824)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = OOC_C_Naming__NameOfDeclaration_IsInterfaceModule((OOC_SymbolTable__Module)i1);
  
  goto l13;
l10:
  i1=1u;
l13:
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2035)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2298)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l19;
  i1=0u;
  goto l21;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2327)))), &_td_OOC_SymbolTable__ProcDeclDesc, 2327)), 2336))+68);
  i1 = i1!=(OOC_INT32)0;
  
l21:
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2572)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l25;
  i1=0u;
  goto l27;
l25:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2614)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i1 = OOC_C_Naming__NameOfDeclaration_IsInterfaceModule((OOC_SymbolTable__Module)i1);
  
l27:
  if (i1) goto l29;
  i1=0u;
  goto l37;
l29:
  relativeName = 1u;
  i1=1u;
  goto l37;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2528)))), &_td_OOC_SymbolTable__ProcDeclDesc, 2528)), 2537))+68);
  return (Object__String)i1;
  i1=0u;
  goto l37;
l33:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2250)))), &_td_OOC_SymbolTable__FieldDeclDesc, 2250)), 2260))+60);
  i1 = !i1;
  relativeName = i1;
  
  goto l37;
l35:
  relativeName = 1u;
  i1=1u;
l37:
  if (i1) goto l71;
  m = (OOC_SymbolTable__Item)i0;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2921)))), &_td_OOC_SymbolTable__ModuleDesc));
  if (i1) goto l41;
  i1=i0;
  goto l47;
l41:
  i1=i0;
l42_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2953))+4);
  m = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2921)))), &_td_OOC_SymbolTable__ModuleDesc));
  if (i2) goto l42_loop;
l47:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2991)))), &_td_OOC_SymbolTable__ModuleDesc, 2991)), 2998))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3004))+12);
  _copy_8((const void*)(_check_pointer(i1, 3009)),(void*)(OOC_INT32)str,2048);
  i = 0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2048, OOC_UINT32, 3048)));
  i1 = i1!=0u;
  if (i1) goto l50;
  i1=0;
  goto l59;
l50:
  i1=0;
l51_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 3076)));
  i2 = i2==58u;
  if (!i2) goto l54;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 3095))) = 95u;
l54:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 2048, OOC_UINT32, 3048)));
  i2 = i2!=0u;
  if (i2) goto l51_loop;
l59:
  Strings__Append("__", 3, (void*)(OOC_INT32)str, 2048);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3318)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  relativeId = (OOC_Scanner_InputBuffer__CharArray)i0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3361)), 0);
  Strings__Append((void*)(_check_pointer(i0, 3361)), i2, (void*)(OOC_INT32)str, 2048);
  i0 = i1+2;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3404)));
  i1 = i1!=0u;
  if (!i1) goto l72;
l62_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3432)));
  i1 = i1==46u;
  if (!i1) goto l65;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3451))) = 95u;
l65:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3404)));
  i1 = i1!=0u;
  if (i1) goto l62_loop;
  goto l72;
l71:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2812))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2818))+12);
  _copy_8((const void*)(_check_pointer(i0, 2823)),(void*)(OOC_INT32)str,2048);
l72:
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 2048);
  name = (Object__String)i0;
  i1 = (OOC_INT32)OOC_C_Naming__keywords;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  if (i1) goto l79;
  i1 = OOC_C_Naming__NameOfDeclaration_IsReservedName((void*)(OOC_INT32)str, 2048);
  if (i1) goto l77;
  return (Object__String)i0;
  goto l80;
l77:
  i1 = (OOC_INT32)OOC_C_Naming__rwPrefix;
  i0 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i1, (Object__String)i0);
  return (Object__String)i0;
  goto l80;
l79:
  i1 = (OOC_INT32)OOC_C_Naming__keywords;
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  obj = (Object__Object)i0;
  return (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3626)))), &_td_Object__StringDesc, 3626));
l80:
  _failed_function(750); return 0;
  ;
}

Object__String OOC_C_Naming__NameOfModuleInit(OOC_SymbolTable__Module m, OOC_CHAR8 rtWrapper) {
  register OOC_INT32 i0,i1;
  OOC_C_Naming__Buffer str;

  i0 = (OOC_INT32)m;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3927))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3933))+12);
  _copy_8((const void*)(_check_pointer(i0, 3938)),(void*)(OOC_INT32)str,2048);
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2048, OOC_UINT32, 3973)));
  i0 = i0!=0u;
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3999)));
  i1 = i1==58u;
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 4018))) = 95u;
l6:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 2048, OOC_UINT32, 3973)));
  i1 = i1!=0u;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4784)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l20;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4864))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4891)))), &_td_OOC_SymbolTable__QualTypeDesc);
  
l7:
  if (!i1) goto l19;
l10_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4988)))), &_td_OOC_SymbolTable__QualTypeDesc, 4988)), 4997))+40);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4864))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l13;
  i1=0u;
  goto l15;
l13:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4891)))), &_td_OOC_SymbolTable__QualTypeDesc);
  
l15:
  if (i1) goto l10_loop;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5037))+24);
  _assert((i1!=(OOC_INT32)0), 127, 5025);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5094))+24);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  return (Object__String)i0;
  goto l21;
l20:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4829))+40);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  return (Object__String)i0;
l21:
  _failed_function(4661); return 0;
  ;
}

Object__String OOC_C_Naming__NameOfTypeDescriptor(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[32];
  OOC_CHAR8 str2[32];
  Object__String string;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5342)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5367)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6079))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1 = (OOC_INT32)OOC_C_Naming__tdPrefix;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i1, (Object__String)i0);
  return (Object__String)i0;
  goto l23;
l5:
  i1 = (OOC_INT32)OOC_C_Naming__tdPrefix;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6163)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i2);
  i1 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i1, (Object__String)i2);
  string = (Object__String)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6206))+20);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6216));
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i1, (Object__String)i0);
  return (Object__String)i0;
  goto l23;
l7:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 5402))+40);
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
    _failed_case(i0, 5393);
    goto l22;
  }
l22:
  _copy_8((const void*)"RT0",(void*)(OOC_INT32)str2,32);
  Strings__Append("__", 3, (void*)(OOC_INT32)str2, 32);
  Strings__Append((void*)(OOC_INT32)str, 32, (void*)(OOC_INT32)str2, 32);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str2, 32);
  return (Object__String)i0;
l23:
  _failed_function(5147); return 0;
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

static void OOC_C_Naming__Init(void) {
  register OOC_INT32 i0;
  auto void OOC_C_Naming__Init_RW(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
    
    void OOC_C_Naming__Init_RW(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, str_0d);
      i1 = (OOC_INT32)OOC_C_Naming__keywords;
      i2 = (OOC_INT32)OOC_C_Naming__rwPrefix;
      i2 = (OOC_INT32)Object__StringDesc_Concat((Object__String)i2, (Object__String)i0);
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)i2);
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
  _c0 = Object__NewLatin1Char(95u);
  _c1 = Object__NewLatin1Char(100u);
  _c2 = Object__NewLatin1Region("__tag", 6, 0, 5);
  _c3 = Object__NewLatin1Region("_TBN_", 6, 0, 5);
  _c4 = Object__NewLatin1Region("_TBP_", 6, 0, 5);
  _c5 = Object__NewLatin1Char(95u);
  _c6 = Object__NewLatin1Region("_td_", 5, 0, 4);

  OOC_C_Naming__Init();
  return;
  ;
}

/* --- */
