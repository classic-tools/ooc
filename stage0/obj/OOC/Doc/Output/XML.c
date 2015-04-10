#include "OOC/Doc/Output/XML.d"
#include "__oo2c.h"

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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1748))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1754))+12);
      i1 = (OOC_INT32)module;
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 1759)),(const void*)(_check_pointer(i1, 1769))))==0;
      
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
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1923)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1904)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i1, 1923)), i2);
      repModule = (OOC_Repository__Module)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l16;
      i2 = (OOC_INT32)moduleDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1985)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i0, (ADT_Object__Object)(OOC_INT32)0);
l16:
      _copy_8((_check_pointer(i1, 2055)),(OOC_INT32)str,2048);
      goto l18;
l17:
      _copy_8("",(OOC_INT32)str,2048);
l18:
      Strings__Append("#", 2, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)id;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2131)), 0);
      Strings__Append((void*)(_check_pointer(i0, 2131)), i1, (void*)(OOC_INT32)str, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2147)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)str, 2048);
      return;
      ;
    }

    
    void OOC_Doc_Output_XML__WriteOberonDoc_AttrHref(OOC_SymbolTable__Declaration target) {
      register OOC_INT32 i0,i1;
      OOC_SymbolTable__Module module;

      i0 = (OOC_INT32)target;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2323)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      module = (OOC_SymbolTable__Module)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2365))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2371))+12);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2384)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
      OOC_Doc_Output_XML__WriteOberonDoc_AttrExternalHref((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
      return;
      ;
    }

    
    void OOC_Doc_Output_XML__WriteOberonDoc_InlineList(OOC_Doc__InlineElement inlineList) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_Doc__InlineElement _inline;
      OOC_CHAR8 name[32];
      ADT_Object__Object rewrittenTo;
      auto OOC_INT32 OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix(OOC_CHAR8 str[], OOC_LEN str_0d);
        
        OOC_INT32 OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix(OOC_CHAR8 str[], OOC_LEN str_0d) {
          register OOC_INT32 i0,i1;

          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2722)));
          i0 = i0!=(OOC_CHAR8)'\000';
          if (i0) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2738)));
          i0 = i0<=(OOC_CHAR8)' ';
          
l5:
          if (i0) goto l7;
          i0=0;
          goto l17;
l7:
          i0=0;
l8_loop:
          i0 = i0+1;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2722)));
          i1 = i1!=(OOC_CHAR8)'\000';
          if (i1) goto l11;
          i1=OOC_FALSE;
          goto l13;
l11:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2738)));
          i1 = i1<=(OOC_CHAR8)' ';
          
l13:
          if (i1) goto l8_loop;
l17:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2799)));
          i1 = i1==(OOC_CHAR8)'*';
          if (i1) goto l20;
          return -1;
          goto l21;
l20:
          return (i0+1);
l21:
          _failed_function(2596); return 0;
          ;
        }


      i0 = (OOC_INT32)inlineList;
      _inline = (OOC_Doc__InlineElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l77;
l3_loop:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2994)))), OOC_Doc__ElementDesc_NodeName)),OOC_Doc__ElementDesc_NodeName)((OOC_Doc__Element)i0, (void*)(OOC_INT32)name, 32);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3033)))), &_td_OOC_Doc__TextDesc));
      if (!i1) goto l6;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3062)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, 32, OOC_TRUE);
l6:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3124)))), &_td_OOC_Doc__GlyphDesc);
      if (i1) goto l69;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3194)))), &_td_OOC_Doc__OberonRefDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4463)))), &_td_OOC_Doc__MarkedInlineDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4544)))), &_td_OOC_Doc__TextDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4618)))), &_td_OOC_Doc__UrefDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5098)))), &_td_OOC_Doc__EmailDesc);
      if (i1) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5090)))), 5090);
      goto l69;
l19:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5124)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,109,97,105,108,45,97,100,100,114,101,115,115,0}), 14, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5188))+16);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5211)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5241))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l69;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5278)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,109,97,105,108,45,100,105,115,112,108,97,121,101,100,45,116,101,120,116,0}), 21, OOC_TRUE);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5351))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5378)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l69;
l24:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4643)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){117,114,101,102,45,117,114,108,0}), 9, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4702))+16);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4721)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4751))+20);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l27;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4783)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){117,114,101,102,45,116,101,120,116,0}), 10, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4845))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4867)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4911))+24);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l69;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4950)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){117,114,101,102,45,114,101,112,108,97,99,101,109,101,110,116,0}), 17, OOC_TRUE);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5019))+24);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5048)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l69;
l32:
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4590))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4590))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4598)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4569)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (void*)(_check_pointer(i2, 4598)), i0);
      goto l69;
l34:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4513))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      goto l69;
l36:
      rewrittenTo = (ADT_Object__Object)(OOC_INT32)0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3263))+24);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l42;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3652))+28);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l41;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3717))+28);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3741))+32);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3346))+24);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3330)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i2);
      
l47:
      if (i1) goto l49;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3586))+24);
      OOC_Doc_Output_XML__WriteOberonDoc_AttrHref((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3599)))), &_td_OOC_SymbolTable__DeclarationDesc, 3599)));
      i1=(OOC_INT32)0;
      goto l51;
l49:
      i1 = (OOC_INT32)rewriteMap;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3474))+24);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3461)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i2);
      rewrittenTo = (ADT_Object__Object)i1;
      OOC_Doc_Output_XML__WriteOberonDoc_AttrHref((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3525)))), &_td_OOC_SymbolTable__DeclarationDesc, 3525)));
      
l51:
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3912))+20);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l56;
      i1=OOC_FALSE;
      goto l58;
l56:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3955))+20);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3968)))), &_td_OOC_Doc__TextDesc);
      
l58:
      if (i1) goto l60;
      i0=OOC_FALSE;
      goto l62;
l60:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4019))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4036)))), &_td_OOC_Doc__TextDesc, 4036)), 4041))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4019))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4036)))), &_td_OOC_Doc__TextDesc, 4036)), 4041))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4049)), 0);
      i0 = OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix((void*)(_check_pointer(i1, 4049)), i0);
      i0 = i0>=0;
      
l62:
      if (i0) goto l64;
      i0 = (OOC_INT32)_inline;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4410))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
      goto l69;
l64:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)_inline;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4172))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4189)))), &_td_OOC_Doc__TextDesc, 4189)), 4194))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4172))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4189)))), &_td_OOC_Doc__TextDesc, 4189)), 4194))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4251))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4268)))), &_td_OOC_Doc__TextDesc, 4268)), 4273))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4251))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4268)))), &_td_OOC_Doc__TextDesc, 4268)), 4273))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4281)), 0);
      i1 = OOC_Doc_Output_XML__WriteOberonDoc_InlineList_AsteriskPrefix((void*)(_check_pointer(i4, 4281)), i1);
      i4 = (OOC_INT32)_inline;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4331))+20);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4348)))), &_td_OOC_Doc__TextDesc, 4348)), 4353))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4331))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4348)))), &_td_OOC_Doc__TextDesc, 4348)), 4353))+16);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4361)), 0);
      i4 = Strings__Length((void*)(_check_pointer(i5, 4361)), i4);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4202)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4150)))), XML_Writer__WriterDesc_WriteLatin1I)),XML_Writer__WriterDesc_WriteLatin1I)((XML_Writer__Writer)i0, (void*)(_check_pointer(i2, 4202)), i3, i1, i4);
      goto l69;
l66:
      i0 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3863)))), &_td_OOC_SymbolTable__DeclarationDesc, 3863)), 3875))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3881))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3863)))), &_td_OOC_SymbolTable__DeclarationDesc, 3863)), 3875))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3881))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3886)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3832)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(_check_pointer(i2, 3886)), i1);
l69:
      i0 = (OOC_INT32)_inline;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5435)))), &_td_OOC_Doc__TextDesc));
      if (!i1) goto l72;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5464)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l72:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5510))+12);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5754)))), OOC_Doc__ElementDesc_NodeName)),OOC_Doc__ElementDesc_NodeName)((OOC_Doc__Element)i0, (void*)(OOC_INT32)name, 32);
      i1 = (OOC_INT32)w;
      i2 = _check_pointer(i1, 5782);
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5813)))), &_td_OOC_Doc__ParagraphDesc);
      if (i3) goto l6;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5874)))), &_td_OOC_Doc__ExampleDesc);
      
      goto l8;
l6:
      i3=OOC_TRUE;
l8:
      if (i3) goto l10;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5933)))), &_td_OOC_Doc__FirstColumnDesc);
      
      goto l11;
l10:
      i3=OOC_TRUE;
l11:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG(i2)), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, 32, i3);
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 5994))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5964)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,97,100,45,97,102,116,101,114,0}), 10, i2);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6025)))), &_td_OOC_Doc__ParagraphDesc);
      if (i1) goto l49;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6155)))), &_td_OOC_Doc__ExampleDesc);
      if (i1) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6229)))), &_td_OOC_Doc__PreCondDesc);
      if (i1) goto l45;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6301)))), &_td_OOC_Doc__PostCondDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6374)))), &_td_OOC_Doc__ItemDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6443)))), &_td_OOC_Doc__ItemizeDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6789)))), &_td_OOC_Doc__FirstColumnDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6867)))), &_td_OOC_Doc__TableRowDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6981)))), &_td_OOC_Doc__TableDesc);
      if (i1) goto l30;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6974)))), 6974);
      goto l50;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7022))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l32:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6911))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6957))+24);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6837))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      goto l50;
l36:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6471)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){105,116,101,109,105,122,101,45,109,97,114,107,0}), 13, OOC_TRUE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6533))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6553)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6582))+24);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l39;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6614)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){105,116,101,109,105,122,101,45,116,101,120,116,0}), 13, OOC_FALSE);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6678))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6684))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6711)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l39:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6761))+28);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l41:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6414))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l43:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6345))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l45:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6272))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i1);
      goto l50;
l47:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6199))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
      goto l50;
l49:
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 6085))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6055)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,111,45,105,110,100,101,110,116,0}), 10, i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6125))+20);
      OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i1);
l50:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7055)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7087))+12);
      block = (OOC_Doc__BlockElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l55:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7142)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){111,98,101,114,111,110,45,100,111,99,0}), 11, OOC_FALSE);
  i1 = (OOC_INT32)document;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7192))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7221)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,117,109,109,97,114,121,0}), 8, OOC_TRUE);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7277))+4);
  OOC_Doc_Output_XML__WriteOberonDoc_InlineList((OOC_Doc__InlineElement)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7296)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l3:
  i0 = (OOC_INT32)document;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7337));
  OOC_Doc_Output_XML__WriteOberonDoc_BlockList((OOC_Doc__BlockElement)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7356)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7746)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)document;
  i2 = (OOC_INT32)localModule;
  i3 = (OOC_INT32)rewriteMap;
  i4 = (OOC_INT32)repositories;
  i5 = (OOC_INT32)moduleDict;
  OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i0, (OOC_Doc__Document)i1, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)i3, (OOC_Config_Repositories__Section)i4, (ADT_Dictionary__Dictionary)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7888)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_Doc_Output_XML_init(void) {

  return;
  ;
}

/* --- */
