#include <OOC/SymbolTable/Exports.d>
#include <__oo2c.h>
#include <setjmp.h>

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
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1634))+16);
      i1 = i1!=(OOC_INT32)0;
      
l5:
      if (!i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1781))+16);
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 1798))+4);
      i2 = 0<i1;
      if (!i2) goto l15;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)dict;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1834))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 1851));
      i4 = _check_pointer(i4, 1858);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 1858))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1824)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (Object__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 1866)))), &_td_OOC_SymbolTable__ImportDesc, 1866)), (Object__Object)(OOC_INT32)0);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
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
              register OOC_INT32 i0,i1,i2,i3,i4;
              OOC_INT32 i;

              i0 = (OOC_INT32)dict;
              i1 = (OOC_INT32)type;
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2201)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
              i0 = !i0;
              if (!i0) goto l53;
              i0 = (OOC_INT32)dict;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2238)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2277))+20);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l5;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2330))+20);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l5:
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2395)))), &_td_OOC_SymbolTable__PredefTypeDesc);
              if (i0) goto l53;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2461)))), &_td_OOC_SymbolTable__TypeNameDesc);
              if (i0) goto l43;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3133)))), &_td_OOC_SymbolTable__PointerDesc);
              if (i0) goto l41;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3215)))), &_td_OOC_SymbolTable__FormalParsDesc);
              if (i0) goto l25;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3637)))), &_td_OOC_SymbolTable__ArrayDesc);
              if (i0) goto l23;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3720)))), &_td_OOC_SymbolTable__RecordDesc);
              if (i0) goto l18;
              _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3714)))), 3714);
              goto l53;
l18:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3758))+36);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l21;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3818))+36);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l21:
              OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i1);
              goto l53;
l23:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3680))+40);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
              goto l53;
l25:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3257))+40);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l28;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3319))+40);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l28:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3381))+32);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l31;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3434))+32);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l31:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3501))+52);
              i = 0;
              i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3508)), 0);
              i2 = 0<i0;
              if (!i2) goto l39;
              i2=0;
l34_loop:
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3545))+52);
              i3 = _check_pointer(i3, 3552);
              i4 = OOC_ARRAY_LENGTH(i3, 0);
              i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3552))*4);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3555))+20);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i3);
              i2 = i2+1;
              i = i2;
              i3 = i2<i0;
              if (i3) goto l34_loop;
l39:
              OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i1);
              goto l53;
l41:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3178))+36);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
              goto l53;
l43:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2501))+32);
              i0 = i0==(OOC_INT32)0;
              if (i0) goto l46;
              i0 = (OOC_INT32)module;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2782))+40);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2782))+40);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2813))+32);
              i3 = (OOC_INT32)root;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2786)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i1, 1u);
              
              goto l47;
l46:
              i0 = (OOC_INT32)module;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2552))+40);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2583))+36);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2552))+40);
              i3 = (OOC_INT32)root;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2556)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i1, 1u);
              
l47:
              i1 = i0!=(OOC_INT32)0;
              if (!i1) goto l53;
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l53:
              return;
              ;
            }


          i0 = (OOC_INT32)dict;
          i1 = (OOC_INT32)item;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3967)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
          i0 = !i0;
          if (!i0) goto l31;
          i0 = (OOC_INT32)dict;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4002)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4069))+28);
          OOC_SymbolTable_Exports__GetExports_MarkReferencedImports((OOC_Doc__Document)i0);
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4113)))), &_td_OOC_SymbolTable__ImportDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4171)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i0) goto l28;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4245)))), &_td_OOC_SymbolTable__PredefProcDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4307)))), &_td_OOC_SymbolTable__ConstDeclDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4368)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i0) goto l24;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4442)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i0) goto l22;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4518)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (i0) goto l20;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4593)))), &_td_OOC_SymbolTable__RedirectDesc);
          if (i0) goto l31;
          Log__Type("-- [OOC:SymbolTable:Exports]: Unknown type of `item\047", 53, (void*)i1);
          _assert(0u, 127, 4782);
          goto l31;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4562))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4487))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l24:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4411))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l28:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4215))+52);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l31:
          return;
          ;
        }


      i0 = (OOC_INT32)root;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4872))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l50;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4930)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l45;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4968))+24);
      i1 = i1!=0;
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5026)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l10;
      i1=0u;
      goto l14;
l10:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5052)))), &_td_OOC_SymbolTable__VarDeclDesc, 5052)), 5060))+48);
      
      goto l14;
l12:
      i1=1u;
l14:
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5095)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l18;
      i1=0u;
      goto l26;
l18:
      i1 = (OOC_INT32)module;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5135))+44);
      i1 = i1!=0;
      if (i1) goto l21;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5183))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5188))+12);
      i1 = _check_pointer(i1, 5192);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 5192)));
      i1 = i1==45u;
      
      goto l26;
l21:
      i1=1u;
      goto l26;
l24:
      i1=1u;
l26:
      if (i1) goto l40;
      i1 = forSymbolFile;
      if (i1) goto l30;
      i1=0u;
      goto l42;
l30:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5276)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5316)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l35;
      i1=0u;
      goto l42;
l35:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5343)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5343)), 5352))+40);
      
      goto l42;
l37:
      i1=1u;
      goto l42;
l40:
      i1=1u;
l42:
      if (!i1) goto l45;
      OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l45:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5517));
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5631))+28);
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
