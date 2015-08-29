#include <OOC/Doc/Output/XML.d>
#include <__oo2c.h>

void OOC_Doc_Output_XML__WriteOberonDoc(XML_Writer__Writer w, OOC_Doc__Document document, OOC_SymbolTable__Module localModule, ADT_Dictionary__Dictionary rewriteMap, OOC_Config_Repositories__Section repositories, ADT_Dictionary__Dictionary moduleDict) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_Doc_Output_XML__WriteOberonDoc_AttrExternalHref(OOC_Scanner_InputBuffer__CharArray module, OOC_Scanner_InputBuffer__CharArray id);
  auto void OOC_Doc_Output_XML__WriteOberonDoc_AttrHref(OOC_SymbolTable__Declaration target);
  auto void OOC_Doc_Output_XML__WriteOberonDoc_InlineList(OOC_Doc__InlineElement inlineList);
  auto void OOC_Doc_Output_XML__WriteOberonDoc_BlockList(OOC_Doc__BlockElement blockList);
    
    void OOC_Doc_Output_XML__WriteOberonDoc_AttrExternalHref(OOC_Scanner_InputBuffer__CharArray module, OOC_Scanner_InputBuffer__CharArray id) {
      register OOC_INT32 i0,i1,i2;
      OOC_CHAR8 str[2048];
      OOC_Repository__Module repModule;

      i0 = (OOC_INT32)localModule;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1744))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1750))+12);
      i1 = (OOC_INT32)module;
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 1755)),(const void*)(_check_pointer(i1, 1765))))==(OOC_INT32)0;
      
l5:
      if (i0) goto l17;
      i0 = (OOC_INT32)moduleDict;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l9;
      i0=OOC_FALSE;
      goto l10;
l9:
      i0 = (OOC_INT32)repositories;
      i0 = i0!=(OOC_INT32)0;
      
l10:
      i1 = (OOC_INT32)module;
      if (!i0) goto l16;
      i0 = (OOC_INT32)repositories;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1919)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1900)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i1, 1919)), i2);
      repModule = (OOC_Repository__Module)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l16;
      i2 = (OOC_INT32)moduleDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1981)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
l16:
      _copy_8((const void*)(_check_pointer(i1, 2051)),(void*)(OOC_INT32)str,2048);
      goto l18;
l17:
      _copy_8((const void*)"",(void*)(OOC_INT32)str,2048);
l18:
      Strings__Append("#", 2, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)id;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2127)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i0, 2127)), i1, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2143)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)str, 2048);
      return;
      ;
    }

    
    void OOC_Doc_Output_XML__WriteOberonDoc_AttrHref(OOC_SymbolTable__Declaration target) {
      register OOC_INT32 i0,i1;
      OOC_SymbolTable__Module module;

      i0 = (OOC_INT32)target;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2319)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      module = (OOC_SymbolTable__Module)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2361))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2367))+12);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2380)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
      OOC_Doc_Output_XML__WriteOberonDoc_AttrExternalHref((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
      return;
      ;
    }

    
    void OOC_Doc_Output_XML__WriteOberonDoc_InlineList(OOC_Doc__InlineElement inlineList) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_Doc__InlineElement _inline;
      OOC_CHAR8 name[32];
      Object__Object rewrittenTo;
      auto OOC_INT32 OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix(OOC_CHAR8 str[], OOC_LEN str_0d);
        
        OOC_INT32 OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix(OOC_CHAR8 str[], OOC_LEN str_0d) {
          register OOC_INT32 i0,i1;

          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2718)));
          i0 = i0!=(OOC_CHAR8)'\000';
          if (i0) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2734)));
          i0 = i0<=(OOC_CHAR8)' ';
          
l5:
          if (i0) goto l7;
          i0=0;
          goto l17;
l7:
          i0=0;
l8_loop:
          i0 = i0+1;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2718)));
          i1 = i1!=(OOC_CHAR8)'\000';
          if (i1) goto l11;
          i1=OOC_FALSE;
          goto l13;
l11:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2734)));
          i1 = i1<=(OOC_CHAR8)' ';
          
l13:
          if (i1) goto l8_loop;
l17:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2795)));
          i1 = i1==(OOC_CHAR8)'*';
          if (i1) goto l20;
          return -1;
          goto l21;
l20:
          return (i0+1);
l21:
          _failed_function(2592); return 0;
          ;
        }


      i0 = (OOC_INT32)inlineList;
      _inline = (OOC_Doc__InlineElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l77;
l3_loop:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2990)))), OOC_Doc__ElementDesc_NodeName)),OOC_Doc__ElementDesc_NodeName)((OOC_Doc__Element)i0, (void*)(OOC_INT32)name, 32);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3029)))), &_td_OOC_Doc__TextDesc));
      if (!i1) goto l6;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3058)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, 32, OOC_TRUE);
l6:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3120)))), &_td_OOC_Doc__GlyphDesc);
      if (i1) goto l69;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3190)))), &_td_OOC_Doc__OberonRefDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4459)))), &_td_OOC_Doc__MarkedInlineDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4540)))), &_td_OOC_Doc__TextDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4614)))), &_td_OOC_Doc__UrefDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5094)))), &_td_OOC_Doc__EmailDesc);
      if (i1) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5086)))), 5086);
      goto l69;
l19:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5120)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,109,97,105,108,45,97,100,100,114,101,115,115,0}), 14, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5184))+16);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5207)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5237))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l69;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5274)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,109,97,105,108,45,100,105,115,112,108,97,121,101,100,45,116,101,120,116,0}), 21, OOC_TRUE);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5347))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5374)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l69;
l24:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4639)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){117,114,101,102,45,117,114,108,0}), 9, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4698))+16);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4717)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4747))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l27;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4779)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){117,114,101,102,45,116,101,120,116,0}), 10, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4841))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4863)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4907))+24);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l69;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4946)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){117,114,101,102,45,114,101,112,108,97,99,101,109,101,110,116,0}), 17, OOC_TRUE);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5015))+24);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5044)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l69;
l32:
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4586))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4586))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4594)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4565)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (void*)(_check_pointer(i2, 4594)), i0);
      goto l69;
l34:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4509))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      goto l69;
l36:
      rewrittenTo = (Object__Object)(OOC_INT32)0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3259))+24);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l42;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3648))+28);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l41;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3713))+28);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3737))+32);
      OOC_Doc_Output_XML__WriteOberonDoc_AttrExternalHref((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i2);
l41:
      i1=(OOC_INT32)0;
      goto l51;
l42:
      i1 = (OOC_INT32)rewriteMap;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l45;
      i1=OOC_FALSE;
      goto l47;
l45:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3342))+24);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3326)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
      
l47:
      if (i1) goto l49;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3582))+24);
      OOC_Doc_Output_XML__WriteOberonDoc_AttrHref((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3595)))), &_td_OOC_SymbolTable__DeclarationDesc, 3595)));
      i1=(OOC_INT32)0;
      goto l51;
l49:
      i1 = (OOC_INT32)rewriteMap;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3470))+24);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3457)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
      rewrittenTo = (Object__Object)i1;
      OOC_Doc_Output_XML__WriteOberonDoc_AttrHref((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3521)))), &_td_OOC_SymbolTable__DeclarationDesc, 3521)));
      
l51:
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3908))+20);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l56;
      i1=OOC_FALSE;
      goto l58;
l56:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3951))+20);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3964)))), &_td_OOC_Doc__TextDesc);
      
l58:
      if (i1) goto l60;
      i0=OOC_FALSE;
      goto l62;
l60:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4015))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4032)))), &_td_OOC_Doc__TextDesc, 4032)), 4037))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4015))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4032)))), &_td_OOC_Doc__TextDesc, 4032)), 4037))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4045)), (OOC_INT32)0);
      i0 = OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix((void*)(_check_pointer(i1, 4045)), i0);
      i0 = i0>=0;
      
l62:
      if (i0) goto l64;
      i0 = (OOC_INT32)_inline;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4406))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      goto l69;
l64:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)_inline;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4168))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4185)))), &_td_OOC_Doc__TextDesc, 4185)), 4190))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4168))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4185)))), &_td_OOC_Doc__TextDesc, 4185)), 4190))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4247))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4264)))), &_td_OOC_Doc__TextDesc, 4264)), 4269))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4247))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4264)))), &_td_OOC_Doc__TextDesc, 4264)), 4269))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4277)), (OOC_INT32)0);
      i1 = OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix((void*)(_check_pointer(i4, 4277)), i1);
      i4 = (OOC_INT32)_inline;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4327))+20);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4344)))), &_td_OOC_Doc__TextDesc, 4344)), 4349))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4327))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4344)))), &_td_OOC_Doc__TextDesc, 4344)), 4349))+16);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4357)), (OOC_INT32)0);
      i4 = Strings__Length((void*)(_check_pointer(i5, 4357)), i4);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4198)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4146)))), XML_Writer__WriterDesc_WriteLatin1I)),XML_Writer__WriterDesc_WriteLatin1I)((XML_Writer__Writer)i0, (void*)(_check_pointer(i2, 4198)), i3, i1, i4);
      goto l69;
l66:
      i0 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3859)))), &_td_OOC_SymbolTable__DeclarationDesc, 3859)), 3871))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3877))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3859)))), &_td_OOC_SymbolTable__DeclarationDesc, 3859)), 3871))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3877))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3882)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3828)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(_check_pointer(i2, 3882)), i1);
l69:
      i0 = (OOC_INT32)_inline;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5431)))), &_td_OOC_Doc__TextDesc));
      if (!i1) goto l72;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5460)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l72:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5506))+12);
      _inline = (OOC_Doc__InlineElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l77:
      return;
      ;
    }

    
    void OOC_Doc_Output_XML__WriteOberonDoc_BlockList(OOC_Doc__BlockElement blockList) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Doc__BlockElement block;
      OOC_CHAR8 name[32];

      i0 = (OOC_INT32)blockList;
      block = (OOC_Doc__BlockElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l55;
l3_loop:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5750)))), OOC_Doc__ElementDesc_NodeName)),OOC_Doc__ElementDesc_NodeName)((OOC_Doc__Element)i0, (void*)(OOC_INT32)name, 32);
      i1 = (OOC_INT32)w;
      i2 = _check_pointer(i1, 5778);
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5809)))), &_td_OOC_Doc__ParagraphDesc);
      if (i3) goto l6;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5870)))), &_td_OOC_Doc__ExampleDesc);
      
      goto l8;
l6:
      i3=OOC_TRUE;
l8:
      if (i3) goto l10;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5929)))), &_td_OOC_Doc__FirstColumnDesc);
      
      goto l11;
l10:
      i3=OOC_TRUE;
l11:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG(i2)), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, 32, i3);
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 5990))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5960)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,97,100,45,97,102,116,101,114,0}), 10, i2);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6021)))), &_td_OOC_Doc__ParagraphDesc);
      if (i1) goto l49;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6151)))), &_td_OOC_Doc__ExampleDesc);
      if (i1) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6225)))), &_td_OOC_Doc__PreCondDesc);
      if (i1) goto l45;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6297)))), &_td_OOC_Doc__PostCondDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6370)))), &_td_OOC_Doc__ItemDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6439)))), &_td_OOC_Doc__ItemizeDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6785)))), &_td_OOC_Doc__FirstColumnDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6863)))), &_td_OOC_Doc__TableRowDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6977)))), &_td_OOC_Doc__TableDesc);
      if (i1) goto l30;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6970)))), 6970);
      goto l50;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7018))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6907))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6953))+24);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6833))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      goto l50;
l36:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6467)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){105,116,101,109,105,122,101,45,109,97,114,107,0}), 13, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6529))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6549)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6578))+24);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l39;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6610)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){105,116,101,109,105,122,101,45,116,101,120,116,0}), 13, OOC_FALSE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6674))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6680))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6707)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l39:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6757))+28);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l41:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6410))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l43:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6341))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l45:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6268))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l47:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6195))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      goto l50;
l49:
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 6081))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6051)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,111,45,105,110,100,101,110,116,0}), 10, i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6121))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
l50:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7051)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7083))+12);
      block = (OOC_Doc__BlockElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l55:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7138)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){111,98,101,114,111,110,45,100,111,99,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)document;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7188))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7217)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,117,109,109,97,114,121,0}), 8, OOC_TRUE);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7273))+4);
  OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7292)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l3:
  i0 = (OOC_INT32)document;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7333));
  OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7352)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_Doc_Output_XML__Write(Channel__Writer cw, OOC_Doc__Document document, OOC_SymbolTable__Module localModule, ADT_Dictionary__Dictionary rewriteMap, OOC_Config_Repositories__Section repositories, ADT_Dictionary__Dictionary moduleDict) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  XML_Writer__Writer w;

  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7742)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)document;
  i2 = (OOC_INT32)localModule;
  i3 = (OOC_INT32)rewriteMap;
  i4 = (OOC_INT32)repositories;
  i5 = (OOC_INT32)moduleDict;
  OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i0, (OOC_Doc__Document)i1, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)i3, (OOC_Config_Repositories__Section)i4, (ADT_Dictionary__Dictionary)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7884)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_Doc_Output_XML_init(void) {

  return;
  ;
}

/* --- */
