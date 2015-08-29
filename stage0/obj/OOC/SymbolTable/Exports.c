#include <OOC/SymbolTable/Exports.d>
#include <__oo2c.h>

ADT_Dictionary__Dictionary OOC_SymbolTable_Exports__GetExports(OOC_SymbolTable__Module module, OOC_CHAR8 forSymbolFile) {
  register OOC_INT32 i0;
  ADT_Dictionary__Dictionary dict;
  auto void OOC_SymbolTable_Exports__GetExports_MarkReferencedImports(OOC_Doc__Document doc);
  auto void OOC_SymbolTable_Exports__GetExports_MarkList(OOC_SymbolTable__Item root);
    
    void OOC_SymbolTable_Exports__GetExports_MarkReferencedImports(OOC_Doc__Document doc) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)doc;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1634))+16);
      i1 = i1!=(OOC_INT32)0;
      
l5:
      if (!i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1781))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 1798))+4);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l15;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)dict;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1834))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 1851));
      i4 = _check_pointer(i4, 1858);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 1858))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1824)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (Object__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 1866)))), &_td_OOC_SymbolTable__ImportDesc, 1866)), (Object__Object)(OOC_INT32)0);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l9_loop;
l15:
      return;
      ;
    }

    
    void OOC_SymbolTable_Exports__GetExports_MarkList(OOC_SymbolTable__Item root) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item ptr;
      auto void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl(OOC_SymbolTable__Declaration item);
        
        void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl(OOC_SymbolTable__Declaration item) {
          register OOC_INT32 i0,i1;
          auto void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType(OOC_SymbolTable__Type type);
            
            void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType(OOC_SymbolTable__Type type) {
              register OOC_INT32 i0,i1,i2,i3;

              i0 = (OOC_INT32)dict;
              i1 = (OOC_INT32)type;
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2179)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
              i0 = !i0;
              if (!i0) goto l45;
              i0 = (OOC_INT32)dict;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2216)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2255))+20);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l5;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2308))+20);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l5:
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2373)))), &_td_OOC_SymbolTable__PredefTypeDesc);
              if (i0) goto l45;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2439)))), &_td_OOC_SymbolTable__TypeNameDesc);
              if (i0) goto l35;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3111)))), &_td_OOC_SymbolTable__PointerDesc);
              if (i0) goto l33;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3193)))), &_td_OOC_SymbolTable__FormalParsDesc);
              if (i0) goto l25;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3491)))), &_td_OOC_SymbolTable__ArrayDesc);
              if (i0) goto l23;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3574)))), &_td_OOC_SymbolTable__RecordDesc);
              if (i0) goto l18;
              _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3568)))), 3568);
              goto l45;
l18:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3612))+36);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l21;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3672))+36);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l21:
              OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i1);
              goto l45;
l23:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3534))+40);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
              goto l45;
l25:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3235))+40);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l28;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3297))+40);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l28:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3359))+32);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l31;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3412))+32);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l31:
              OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i1);
              goto l45;
l33:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3156))+36);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
              goto l45;
l35:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2479))+32);
              i0 = i0==(OOC_INT32)0;
              if (i0) goto l38;
              i0 = (OOC_INT32)module;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2760))+40);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2760))+40);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2791))+32);
              i3 = (OOC_INT32)root;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2764)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i1, OOC_TRUE);
              
              goto l39;
l38:
              i0 = (OOC_INT32)module;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2530))+40);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2561))+36);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2530))+40);
              i3 = (OOC_INT32)root;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2534)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i1, OOC_TRUE);
              
l39:
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l45;
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l45:
              return;
              ;
            }


          i0 = (OOC_INT32)dict;
          i1 = (OOC_INT32)item;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3821)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
          i0 = !i0;
          if (!i0) goto l31;
          i0 = (OOC_INT32)dict;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3856)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3923))+28);
          OOC_SymbolTable_Exports__GetExports_MarkReferencedImports((OOC_Doc__Document)i0);
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3967)))), &_td_OOC_SymbolTable__ImportDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4025)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i0) goto l28;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4099)))), &_td_OOC_SymbolTable__PredefProcDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4161)))), &_td_OOC_SymbolTable__ConstDeclDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4222)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i0) goto l24;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4296)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i0) goto l22;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4372)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (i0) goto l20;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4447)))), &_td_OOC_SymbolTable__RedirectDesc);
          if (i0) goto l31;
          Log__Type("-- [OOC:SymbolTable:Exports]: Unknown type of `item\047", 53, (void*)i1);
          _assert(OOC_FALSE, 127, 4636);
          goto l31;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4416))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4341))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l24:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4265))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l28:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4069))+52);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l31:
          return;
          ;
        }


      i0 = (OOC_INT32)root;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4726))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l50;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4784)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l45;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4822))+24);
      i1 = i1!=0;
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4880)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l10;
      i1=OOC_FALSE;
      goto l14;
l10:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4906)))), &_td_OOC_SymbolTable__VarDeclDesc, 4906)), 4914))+48);
      
      goto l14;
l12:
      i1=OOC_TRUE;
l14:
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4949)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l18;
      i1=OOC_FALSE;
      goto l26;
l18:
      i1 = (OOC_INT32)module;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 4989))+44);
      i1 = i1!=0;
      if (i1) goto l21;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5037))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5042))+12);
      i1 = _check_pointer(i1, 5046);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 5046)));
      i1 = i1==(OOC_CHAR8)'-';
      
      goto l26;
l21:
      i1=OOC_TRUE;
      goto l26;
l24:
      i1=OOC_TRUE;
l26:
      if (i1) goto l40;
      i1 = forSymbolFile;
      if (i1) goto l30;
      i1=OOC_FALSE;
      goto l42;
l30:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5130)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5170)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l35;
      i1=OOC_FALSE;
      goto l42;
l35:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5197)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5197)), 5206))+40);
      
      goto l42;
l37:
      i1=OOC_TRUE;
      goto l42;
l40:
      i1=OOC_TRUE;
l42:
      if (!i1) goto l45;
      OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l45:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5371));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l50:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  dict = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5485))+28);
  OOC_SymbolTable_Exports__GetExports_MarkReferencedImports((OOC_Doc__Document)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)dict;
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

void OOC_OOC_SymbolTable_Exports_init(void) {

  return;
  ;
}

/* --- */
