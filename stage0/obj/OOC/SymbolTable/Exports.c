#include "OOC/SymbolTable/Exports.d"
#include "__oo2c.h"

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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1607))+16);
      i1 = i1!=(OOC_INT32)0;
      
l5:
      if (!i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1754))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 1771))+4);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l15;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)dict;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1807))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 1824));
      i4 = _check_pointer(i4, 1831);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 1831))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1797)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i3, (ADT_Object__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 1839)))), &_td_OOC_SymbolTable__ImportDesc, 1839)), (ADT_Object__Object)(OOC_INT32)0);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l9_loop;
l15:
      return;
      ;
    }

    
    void OOC_SymbolTable_Exports__GetExports_MarkList(OOC_SymbolTable__Item root) {
      register OOC_INT32 i0,i1;
      OOC_SymbolTable__Item ptr;
      auto void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl(OOC_SymbolTable__Declaration item);
        
        void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl(OOC_SymbolTable__Declaration item) {
          register OOC_INT32 i0,i1;
          auto void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType(OOC_SymbolTable__Type type);
            
            void OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType(OOC_SymbolTable__Type type) {
              register OOC_INT32 i0,i1,i2,i3;

              i0 = (OOC_INT32)dict;
              i1 = (OOC_INT32)type;
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2152)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
              i0 = !i0;
              if (!i0) goto l45;
              i0 = (OOC_INT32)dict;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2189)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1, (ADT_Object__Object)(OOC_INT32)0);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2228))+20);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l5;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2281))+20);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l5:
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2346)))), &_td_OOC_SymbolTable__PredefTypeDesc);
              if (i0) goto l45;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2412)))), &_td_OOC_SymbolTable__TypeNameDesc);
              if (i0) goto l35;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3084)))), &_td_OOC_SymbolTable__PointerDesc);
              if (i0) goto l33;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3166)))), &_td_OOC_SymbolTable__FormalParsDesc);
              if (i0) goto l25;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3464)))), &_td_OOC_SymbolTable__ArrayDesc);
              if (i0) goto l23;
              i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3547)))), &_td_OOC_SymbolTable__RecordDesc);
              if (i0) goto l18;
              _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3541)))), 3541);
              goto l45;
l18:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3585))+36);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l21;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3645))+36);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l21:
              OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i1);
              goto l45;
l23:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3507))+40);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
              goto l45;
l25:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3208))+40);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l28;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3270))+40);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l28:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3332))+32);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l31;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3385))+32);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l31:
              OOC_SymbolTable_Exports__GetExports_MarkList((OOC_SymbolTable__Item)i1);
              goto l45;
l33:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3129))+36);
              OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
              goto l45;
l35:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2452))+32);
              i0 = i0==(OOC_INT32)0;
              if (i0) goto l38;
              i0 = (OOC_INT32)module;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2733))+40);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2733))+40);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2764))+32);
              i3 = (OOC_INT32)root;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2737)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i1, OOC_TRUE);
              
              goto l39;
l38:
              i0 = (OOC_INT32)module;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2503))+40);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2534))+36);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2503))+40);
              i3 = (OOC_INT32)root;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2507)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i1, OOC_TRUE);
              
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
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3794)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1);
          i0 = !i0;
          if (!i0) goto l31;
          i0 = (OOC_INT32)dict;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3829)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i1, (ADT_Object__Object)(OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3896))+28);
          OOC_SymbolTable_Exports__GetExports_MarkReferencedImports((OOC_Doc__Document)i0);
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3940)))), &_td_OOC_SymbolTable__ImportDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3998)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i0) goto l28;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4072)))), &_td_OOC_SymbolTable__PredefProcDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4134)))), &_td_OOC_SymbolTable__ConstDeclDesc);
          if (i0) goto l31;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4195)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i0) goto l24;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4269)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i0) goto l22;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4345)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (i0) goto l20;
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4420)))), &_td_OOC_SymbolTable__RedirectDesc);
          if (i0) goto l31;
          Log__Type("-- [OOC:SymbolTable:Exports]: Unknown type of `item\047", 53, (void*)i1);
          _assert(OOC_FALSE, 127, 4609);
          goto l31;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4389))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4314))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l24:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4238))+44);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
          goto l31;
l28:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4042))+52);
          OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl_MarkType((OOC_SymbolTable__Type)i0);
l31:
          return;
          ;
        }


      i0 = (OOC_INT32)root;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4699))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l38;
l3_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4757)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l33;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4795))+24);
      i1 = i1!=0;
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4853)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l10;
      i1=OOC_FALSE;
      goto l14;
l10:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4879)))), &_td_OOC_SymbolTable__VarDeclDesc, 4879)), 4887))+48);
      
      goto l14;
l12:
      i1=OOC_TRUE;
l14:
      if (i1) goto l28;
      i1 = forSymbolFile;
      if (i1) goto l18;
      i1=OOC_FALSE;
      goto l30;
l18:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4952)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4992)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l23;
      i1=OOC_FALSE;
      goto l30;
l23:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5019)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5019)), 5028))+40);
      
      goto l30;
l25:
      i1=OOC_TRUE;
      goto l30;
l28:
      i1=OOC_TRUE;
l30:
      if (!i1) goto l33;
      OOC_SymbolTable_Exports__GetExports_MarkList_MarkDecl((OOC_SymbolTable__Declaration)i0);
l33:
      i0 = (OOC_INT32)ptr;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5193));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l38:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  dict = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5307))+28);
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
