#include <OOC/SymbolTable/GetClass.d>
#include <__oo2c.h>

OOC_SymbolTable__Name OOC_SymbolTable_GetClass__GetClass(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;
  auto OOC_CHAR8 OOC_SymbolTable_GetClass__GetClass_SameModule(OOC_SymbolTable__Item a, OOC_SymbolTable__Item b);
  auto OOC_SymbolTable__Name OOC_SymbolTable_GetClass__GetClass_InitProcClass(OOC_SymbolTable__ProcDecl procDecl);
    
    OOC_CHAR8 OOC_SymbolTable_GetClass__GetClass_SameModule(OOC_SymbolTable__Item a, OOC_SymbolTable__Item b) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)a;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1455)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      i1 = (OOC_INT32)b;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1469)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
      return (i0==i1);
      ;
    }

    
    OOC_SymbolTable__Name OOC_SymbolTable_GetClass__GetClass_InitProcClass(OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR8 found;
      OOC_INT16 pos;

      i0 = (OOC_INT32)procDecl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1666))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1672))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1666))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1672))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 1677)), (OOC_INT32)0);
      Strings__FindNext("Init", 5, (void*)(_check_pointer(i1, 1677)), i2, (OOC_INT32)0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
      i1 = found;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = pos;
      i1 = i1==(OOC_INT32)0;
      
l5:
      if (i1) goto l7;
      i1=OOC_FALSE;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1749))+52);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1761))+44);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1769)), (OOC_INT32)0);
      i1 = i1>=1;
      
l9:
      if (i1) goto l11;
      i1=OOC_FALSE;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1798))+52);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1810))+36);
      i1 = i1==(OOC_INT32)0;
      
l13:
      if (i1) goto l15;
      i1=OOC_FALSE;
      goto l17;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1871))+52);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1883))+44);
      i1 = _check_pointer(i1, 1891);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 1891))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1894))+40);
      i1 = OOC_SymbolTable_GetClass__GetClass_SameModule((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      
l17:
      if (i1) goto l19;
      return (OOC_SymbolTable__Name)(OOC_INT32)0;
      goto l20;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1940))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1952))+44);
      i0 = _check_pointer(i0, 1960);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 1960))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1963))+40);
      i0 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
      return (OOC_SymbolTable__Name)i0;
l20:
      _failed_function(1516); return 0;
      ;
    }


  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2058)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2120)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2335)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2535)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2620)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l11;
  return (OOC_SymbolTable__Name)(OOC_INT32)0;
  goto l44;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 2651))+40);
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2746))+52);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2758))+36);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l16;
  i0=OOC_FALSE;
  goto l18;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2814))+52);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2826))+36);
  i0 = OOC_SymbolTable_GetClass__GetClass_SameModule((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  
l18:
  if (i0) goto l20;
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass_InitProcClass((OOC_SymbolTable__ProcDecl)i0);
  return (OOC_SymbolTable__Name)i0;
  goto l44;
l20:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2874))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2886))+36);
  i0 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Name)i0;
  goto l44;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2699))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2711))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2721))+40);
  i0 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Name)i0;
  goto l44;
l25:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2571))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2584)))), &_td_OOC_SymbolTable__RecordDesc, 2584)), 2591))+52);
  return (OOC_SymbolTable__Name)i0;
  goto l44;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2384))+40);
  i0 = OOC_SymbolTable_GetClass__GetClass_SameModule((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  if (i0) goto l30;
  return (OOC_SymbolTable__Name)(OOC_INT32)0;
  goto l44;
l30:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2426))+40);
  i0 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Name)i0;
  goto l44;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2151))+32);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2162)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l36;
  i0=OOC_FALSE;
  goto l38;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2210))+32);
  i0 = OOC_SymbolTable_GetClass__GetClass_SameModule((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  
l38:
  if (i0) goto l40;
  return (OOC_SymbolTable__Name)(OOC_INT32)0;
  goto l44;
l40:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2246))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2261)))), &_td_OOC_SymbolTable__RecordDesc, 2261)), 2268))+52);
  return (OOC_SymbolTable__Name)i0;
  goto l44;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2091))+52);
  return (OOC_SymbolTable__Name)i0;
l44:
  _failed_function(89); return 0;
  ;
}

void OOC_OOC_SymbolTable_GetClass_init(void) {

  return;
  ;
}

/* --- */
