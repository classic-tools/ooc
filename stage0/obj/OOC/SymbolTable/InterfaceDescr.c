#include <OOC/SymbolTable/InterfaceDescr.d>
#include <__oo2c.h>

static URI__URI OOC_SymbolTable_InterfaceDescr__GetSystemId(OOC_Config_Repositories__Section repositories) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__dtdSystemId;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (URI__URI)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1472)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.dtd", 30);
  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 1527);
  return (URI__URI)i0;
l4:
  _failed_function(1340); return 0;
  ;
}

void OOC_SymbolTable_InterfaceDescr__Write(Channel__Writer cw, URI__HierarchicalURI baseURI, OOC_SymbolTable__Module module, OOC_Config_Repositories__Section repositories, ADT_Dictionary__Dictionary extensionDict) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Dictionary__Dictionary moduleDict;
  ADT_Dictionary__Dictionary declDict;
  XML_Writer__Writer w;
  OOC_SymbolTable__Item ptr;
  auto void OOC_SymbolTable_InterfaceDescr__Write_WriteReference(const OOC_CHAR16 tagName__ref[], OOC_LEN tagName_0d, OOC_SymbolTable__Declaration decl);
  auto void OOC_SymbolTable_InterfaceDescr__Write_DeclDocString(OOC_SymbolTable__Declaration decl);
  auto void OOC_SymbolTable_InterfaceDescr__Write_DeclAttr(OOC_SymbolTable__Declaration decl);
  auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem(OOC_SymbolTable__Item item);
  auto void OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList(OOC_SymbolTable__Item list, OOC_SymbolTable__Name className);
  auto void OOC_SymbolTable_InterfaceDescr__Write_WriteModuleRef(ADT_Dictionary__Dictionary modList);
  auto void OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses(OOC_SymbolTable__Record topRecord);
  auto void OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions(Object__Object type);
    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteReference(const OOC_CHAR16 tagName__ref[], OOC_LEN tagName_0d, OOC_SymbolTable__Declaration decl) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_ALLOCATE_VPAR(tagName,OOC_CHAR16 ,tagName_0d)
      OOC_SymbolTable__Module baseModule;
      OOC_SymbolTable__Name className;
      OOC_CHAR8 href[2048];
      OOC_Scanner_InputBuffer__CharArray id;
      OOC_Repository__Module repModule;

      OOC_INITIALIZE_VPAR(tagName__ref,tagName,OOC_CHAR16 ,(tagName_0d*2))
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2768)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tagName, tagName_0d, OOC_FALSE);
      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2821)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      baseModule = (OOC_SymbolTable__Module)i1;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2880))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2886))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2880))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2886))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2891)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2840)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 2891)), i4);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2934))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2940))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2934))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2940))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2945)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2902)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2945)), i4);
      i2 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
      className = (OOC_SymbolTable__Name)i2;
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3039))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3039))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3044)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3001)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i4, 3044)), i2);
      i2 = (OOC_INT32)module;
      i2 = i2==i1;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3143))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3149))+12);
      _copy_8((const void*)(_check_pointer(i2, 3154)),(void*)(OOC_INT32)href,2048);
      goto l4;
l3:
      _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
      Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3224)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3259)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i0, 3259)), i2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3276)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3318)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      i0 = (OOC_INT32)module;
      i0 = i0!=i1;
      if (!i0) goto l10;
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3427))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3433))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3427))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3433))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3438)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3404)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 3438)), i1);
      i1 = i0!=(OOC_INT32)0;
      repModule = (OOC_Repository__Module)i0;
      if (!i1) goto l10;
      i1 = (OOC_INT32)moduleDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3496)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
l10:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_DeclDocString(OOC_SymbolTable__Declaration decl) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_SymbolTable__Record _class;
      OOC_SymbolTable__ProcDecl baseDef;
      ADT_Dictionary__Dictionary rewriteMap;
      OOC_INT32 i;
      auto OOC_SymbolTable__ProcDecl OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name);
        
        OOC_SymbolTable__ProcDecl OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Record _class;
          OOC_SymbolTable__Declaration baseDef;

          i0 = (OOC_INT32)superClass;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3973))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
          goto l12;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4025))+32);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4040)))), &_td_OOC_SymbolTable__RecordDesc, 4040);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4075))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4075))+44);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4079)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, OOC_FALSE);
          baseDef = (OOC_SymbolTable__Declaration)i1;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l6;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4153))+28);
          i2 = i2==(OOC_INT32)0;
          
          goto l8;
l6:
          i2=OOC_TRUE;
l8:
          if (i2) goto l10;
          return (OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4274)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4274));
          goto l12;
l10:
          i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Name)i4);
          return (OOC_SymbolTable__ProcDecl)i0;
l12:
          _failed_function(3761); return 0;
          ;
        }


      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4402))+28);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4572)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4600)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4600)), 4609))+40);
      
l7:
      if (!i1) goto l22;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4834)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4834)), 4843)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4834)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4834)));
      _class = (OOC_SymbolTable__Record)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4903))+16);
      i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
      baseDef = (OOC_SymbolTable__ProcDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){100,111,99,45,105,110,104,101,114,105,116,101,100,45,102,114,111,109,0}), 19, (OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)ADT_Dictionary__New();
      rewriteMap = (ADT_Dictionary__Dictionary)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5089))+52);
      i3 = (OOC_INT32)decl;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5149)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5149)), 5158))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5101))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5170))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5075)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2, (Object__Object)i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5219))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5231))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5239)), (OOC_INT32)0);
      i2 = i2-1;
      i4 = 0<=i2;
      i = 0;
      if (!i4) goto l18;
      i4=0;
l13_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5283))+52);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5295))+44);
      i5 = _check_pointer(i5, 5303);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5346)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5346)), 5355))+52);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 5367))+44);
      i7 = _check_pointer(i7, 5375);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5303))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 5375))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5269)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i5, (Object__Object)i6);
      i4 = i4+1;
      i5 = i4<=i2;
      i = i4;
      if (i5) goto l13_loop;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5449))+28);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)module;
      i4 = (OOC_INT32)repositories;
      i5 = (OOC_INT32)moduleDict;
      OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i2, (OOC_Doc__Document)i0, (OOC_SymbolTable__Module)i3, (ADT_Dictionary__Dictionary)i1, (OOC_Config_Repositories__Section)i4, (ADT_Dictionary__Dictionary)i5);
      goto l22;
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4464))+28);
      i1 = (OOC_INT32)moduleDict;
      i2 = (OOC_INT32)repositories;
      i3 = (OOC_INT32)module;
      i4 = (OOC_INT32)w;
      OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i4, (OOC_Doc__Document)i0, (OOC_SymbolTable__Module)i3, (ADT_Dictionary__Dictionary)(OOC_INT32)0, (OOC_Config_Repositories__Section)i2, (ADT_Dictionary__Dictionary)i1);
l22:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_DeclAttr(OOC_SymbolTable__Declaration decl) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray id;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)decl;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5716))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5722))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5716))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5722))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5727)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5684)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 5727)), i3);
      i0 = (OOC_INT32)declDict;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5749)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6093)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i1);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = (OOC_INT32)w;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6141)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6113)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,100,0}), 3, (void*)(_check_pointer(i0, 6141)), i3);
      i0 = (OOC_INT32)declDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6161)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l4:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteItem(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2,i3;
      Object__String str;
      OOC_Repository__Module moduleRepository;
      OOC_SymbolTable__Item i;
      OOC_CHAR8 element[32];
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Declaration decl);
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(const OOC_CHAR16 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType);
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent(OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType);
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(const OOC_CHAR16 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType);
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name);
        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR8 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR8 ,tag_0d)
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6468)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)decl;
          OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
          i0 = *(OOC_INT8*)((_check_pointer(i0, 6541))+24);
          switch (i0) {
          case 0:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6599)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){110,111,0}), 3);
            goto l6;
          case 1:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6668)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){121,101,115,0}), 4);
            goto l6;
          case 2:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6740)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){114,101,97,100,45,111,110,108,121,0}), 10);
            goto l6;
          default:
            _failed_case(i0, 6532);
            goto l6;
          }
l6:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent(OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Module module;
          OOC_SymbolTable__Import import;
          OOC_CHAR8 href[2048];
          OOC_Repository__Module repModule;
          OOC_SymbolTable__Item i;
          OOC_INT32 j;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7180)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l47;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8612)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l45;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8783)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l40;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9073)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l27;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9360)))), &_td_OOC_SymbolTable__FormalParsDesc);
          if (i1) goto l11;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9354)))), 9354);
          goto l77;
l11:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9391)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){102,111,114,109,97,108,45,112,97,114,97,109,101,116,101,114,115,0}), 18, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9450))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9500))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i1);
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9561))+44);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9569)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          j = 0;
          if (!i2) goto l22;
          i2=0;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9604))+44);
          i3 = _check_pointer(i3, 9612);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9612))*4);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          j = i2;
          if (i3) goto l17_loop;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9650))+40);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9749))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9724))+40);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){114,101,115,117,108,116,45,116,121,112,101,0}), 12, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
l25:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9789)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l77;
l27:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9100)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,101,99,111,114,100,0}), 7, OOC_FALSE);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9149))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l38;
l30_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9211)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l33;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l33:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9297));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l30_loop;
l38:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9336)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l77;
l40:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8809)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,114,114,97,121,0}), 6, OOC_FALSE);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 8856))+32);
          i1 = !i1;
          if (!i1) goto l43;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8888)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,101,110,103,116,104,0}), 7, OOC_FALSE);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8931)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l43:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8996))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9022))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){101,108,101,109,101,110,116,45,116,121,112,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9049)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l77;
l45:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8640)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,111,105,110,116,101,114,0}), 8, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8712))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8735))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){112,111,105,110,116,101,114,45,98,97,115,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8759)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l77;
l47:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7209)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,110,97,109,101,0}), 10, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7260))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l57;
          i1 = (OOC_INT32)resolvedType;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l52;
          i2=OOC_FALSE;
          goto l54;
l52:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7397)))), &_td_OOC_SymbolTable__PredefTypeDesc);
          
l54:
          if (!i2) goto l58;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7730)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7791))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7797))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7791))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7797))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7802)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7755)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 7802)), i1);
          goto l58;
l57:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7328))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7336))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7328))+32);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7336))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7341)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7294)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 7341)), i3);
l58:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7863))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7870))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7863))+36);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7870))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7875)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7831)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 7875)), i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7908))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l61;
          i1 = (OOC_INT32)resolvedType;
          i1 = i1==(OOC_INT32)0;
          
          goto l63;
l61:
          i1=OOC_TRUE;
l63:
          if (i1) goto l65;
          i1 = (OOC_INT32)resolvedType;
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7979)))), &_td_OOC_SymbolTable__PredefTypeDesc));
          
          goto l67;
l65:
          i1=OOC_TRUE;
l67:
          if (!i1) goto l76;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8023))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l71;
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
          goto l75;
l71:
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8072)))), OOC_SymbolTable__TypeNameDesc_GetImport)),OOC_SymbolTable__TypeNameDesc_GetImport)((OOC_SymbolTable__TypeName)i0);
          import = (OOC_SymbolTable__Import)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8113))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8129))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8135))+12);
          _copy_8((const void*)(_check_pointer(i2, 8140)),(void*)(OOC_INT32)href,2048);
          i2 = (OOC_INT32)repositories;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8208))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8224))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8230))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8208))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8224))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8230))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8235)), (OOC_INT32)0);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8189)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i3, 8235)), i1);
          repModule = (OOC_Repository__Module)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l75;
          i2 = (OOC_INT32)moduleDict;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8305)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l75:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8483))+36);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8490))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8483))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8490))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8495)), (OOC_INT32)0);
          Strings__Append((void*)(_check_pointer(i1, 8495)), i0, (void*)(OOC_INT32)href, 2048);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8518)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
l76:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8578)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l77:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(const OOC_CHAR16 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR16 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR16 ,(tag_0d*2))
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9945)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)type;
          i1 = (OOC_INT32)resolvedType;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10028)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Record _class;

          i0 = (OOC_INT32)superClass;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10245))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10297))+32);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10312)))), &_td_OOC_SymbolTable__RecordDesc, 10312);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10347))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10347))+44);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10351)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, OOC_FALSE);
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l5;
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){114,101,100,101,102,105,110,101,100,45,109,101,116,104,111,100,0}), 17, (OOC_SymbolTable__Declaration)i1);
l5:
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Name)i4);
l6:
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l64;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10639)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l48;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11466)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11746)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11928)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12125)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12650)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13159)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l64;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 13195))+41);
      i1 = !i1;
      if (!i1) goto l64;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("procedure", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13329))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13347))+52);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 13381))+40);
      if (!i1) goto l21;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13440)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13455))+16);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
l21:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13493)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l24:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12687))+24);
      i1 = i1!=0;
      if (!i1) goto l64;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("field-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13070))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13089))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13111)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l29:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12159))+49);
      if (i1) goto l36;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12236))+48);
      if (i1) goto l34;
      _copy_8((const void*)"var-decl",(void*)(OOC_INT32)element,32);
      goto l37;
l34:
      _copy_8((const void*)"parameter-decl",(void*)(OOC_INT32)element,32);
      goto l37;
l36:
      _copy_8((const void*)"receiver-decl",(void*)(OOC_INT32)element,32);
l37:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl((void*)(OOC_INT32)element, 32, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12413))+48);
      if (!i1) goto l40;
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 12483))+50);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12445)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,45,112,97,114,97,109,101,116,101,114,0}), 19, i2);
l40:
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12577))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12596))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12616)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l42:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("type-decl", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12052))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12071))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12091)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l44:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("const-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11818)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, ((OOC_CHAR16[]){117,110,107,110,111,119,110,0}), 8);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11896)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l46:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("import-decl", 12, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11570))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11582))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11570))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11582))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11587)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11536)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 11587)), i3);
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11650))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11662))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11650))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11662))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11667)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11633)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 11667)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11714)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l48:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("module-interface", 17, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10724)))), OOC_SymbolTable__ModuleDesc_ClassToString)),OOC_SymbolTable__ModuleDesc_ClassToString)((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10805)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (Object__String)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10879))+48);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l51;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10947))+48);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10917)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,105,98,114,97,114,121,45,110,97,109,101,0}), 13, (Object__String)i2);
l51:
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11009)))), OOC_SymbolTable__ModuleDesc_CallConvToString)),OOC_SymbolTable__ModuleDesc_CallConvToString)((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11092)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,45,99,111,110,118,0}), 10, (Object__String)i1);
      i1 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11200))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11206))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11200))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11206))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11211)), (OOC_INT32)0);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11183)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i1, (void*)(_check_pointer(i2, 11211)), i3);
      moduleRepository = (OOC_Repository__Module)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11245))+8);
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l62;
l54_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11307)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l57;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l57:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11395));
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l54_loop;
l62:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11434)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l64:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList(OOC_SymbolTable__Item list, OOC_SymbolTable__Name className) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Name itemClass;

      i0 = (OOC_INT32)list;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l11;
      i0 = (OOC_INT32)className;
l3_loop:
      i1 = (OOC_INT32)list;
      i2 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i1);
      i3 = i2==i0;
      itemClass = (OOC_SymbolTable__Name)i2;
      if (!i3) goto l6;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i1);
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13862));
      list = (OOC_SymbolTable__Item)i1;
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l11:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteModuleRef(ADT_Dictionary__Dictionary modList) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_Repository__Module thisModule;
      URI__HierarchicalURI baseURI;
      Object__ObjectArrayPtr keys;
      OOC_INT32 i;
      OOC_Repository__Module remoteMod;
      URI__URI remoteURI;
      URI__URI relativeURI;
      OOC_CHAR8 str[2048];

      i0 = (OOC_INT32)repositories;
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14250))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14256))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14250))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14256))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14261)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14231)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 14261)), i1);
      thisModule = (OOC_Repository__Module)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14292)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, OOC_FALSE);
      baseURI = (URI__HierarchicalURI)i0;
      i1 = (OOC_INT32)modList;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14367)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i1);
      keys = (Object__ObjectArrayPtr)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14406)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 14439);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14439))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14454)))), &_td_OOC_Repository__ModuleDesc, 14454);
      remoteMod = (OOC_Repository__Module)i4;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14473)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,0}), 11, OOC_FALSE);
      i5 = (OOC_INT32)w;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14553))+4);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14553))+4);
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 14559)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14516)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i6, 14559)), i7);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14573)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){114,101,102,45,116,97,114,103,101,116,0}), 11, OOC_FALSE);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14616)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,121,112,101,0}), 5, "html", 5);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14683)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 5, OOC_FALSE);
      remoteURI = (URI__URI)i4;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14762)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i4, (URI__HierarchicalURI)i0);
      relativeURI = (URI__URI)i4;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14807)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i4, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14835)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,101,108,97,116,105,118,101,45,117,114,105,0}), 13, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14886)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14906)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses(OOC_SymbolTable__Record topRecord) {
      register OOC_INT32 i0,i1;
      ADT_ArrayList__ArrayList omitMethod;
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord(OOC_SymbolTable__Record record);
        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord(OOC_SymbolTable__Record record) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Module module;
          OOC_CHAR8 href[2048];
          OOC_SymbolTable_Namespace__Namespace ns;
          OOC_INT32 i;
          OOC_SymbolTable__Item item;
          auto OOC_CHAR8 OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord_NewMethod(OOC_SymbolTable__ProcDecl method);
            
            OOC_CHAR8 OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord_NewMethod(OOC_SymbolTable__ProcDecl method) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5;
              OOC_INT32 i;

              i0 = (OOC_INT32)omitMethod;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 15407))+4);
              i1 = i1-1;
              i2 = 0<=i1;
              i = 0;
              if (!i2) goto l11;
              i2 = (OOC_INT32)method;
              i3=0;
l3_loop:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15445));
              i4 = _check_pointer(i4, 15452);
              i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15452))*4);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15460)))), &_td_OOC_SymbolTable__DeclarationDesc, 15460)), 15472))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15478))+12);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15509))+16);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15515))+12);
              i4 = (
              _cmp8((const void*)(_check_pointer(i4, 15483)),(const void*)(_check_pointer(i5, 15520))))==(OOC_INT32)0;
              if (!i4) goto l6;
              return OOC_FALSE;
l6:
              i3 = i3+1;
              i4 = i3<=i1;
              i = i3;
              if (i4) goto l3_loop;
l11:
              return OOC_TRUE;
              ;
            }


          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15659)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){98,97,115,101,45,99,108,97,115,115,0}), 11, OOC_FALSE);
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15717)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15774))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15780))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15774))+16);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15780))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15785)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15738)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 15785)), i4);
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15833))+52);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15844))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15833))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15844))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15849)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15798)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i3, 15849)), i4);
          i2 = (OOC_INT32)topRecord;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15874)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
          i2 = i2==i1;
          if (i2) goto l3;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15961))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15967))+12);
          _copy_8((const void*)(_check_pointer(i1, 15972)),(void*)(OOC_INT32)href,2048);
          goto l4;
l3:
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16060))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16071))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16060))+52);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16071))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16076)), (OOC_INT32)0);
          Strings__Append((void*)(_check_pointer(i1, 16076)), i2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16095)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16159))+44);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16174)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 16174);
          ns = (OOC_SymbolTable_Namespace__Namespace)i0;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 16210))+4);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l31;
          i1=0;
l7_loop:
          i2 = (OOC_INT32)ns;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16248));
          i2 = _check_pointer(i2, 16259);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 16259))*4);
          item = (OOC_SymbolTable__Item)i1;
          i2 = *(OOC_INT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16287)))), &_td_OOC_SymbolTable__DeclarationDesc, 16287)), 16299))+24);
          i2 = i2!=0;
          if (i2) goto l10;
          i1=OOC_FALSE;
          goto l16;
l10:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16357)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i2) goto l13;
          i1 = OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord_NewMethod((OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16398)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16398)));
          
          goto l16;
l13:
          i1=OOC_TRUE;
l16:
          if (!i1) goto l26;
          i1 = (OOC_INT32)item;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16436)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i2) goto l24;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16528)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i2) goto l22;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16522)))), 16522);
          goto l26;
l22:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,109,101,116,104,111,100,0}), 17, (OOC_SymbolTable__Declaration)i1);
          i2 = (OOC_INT32)omitMethod;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16627)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i1);
          goto l26;
l24:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,102,105,101,108,100,0}), 16, (OOC_SymbolTable__Declaration)i1);
l26:
          i1 = i;
          i1 = i1+1;
          i2 = i1<=i0;
          i = i1;
          if (i2) goto l7_loop;
l31:
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16713))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l34;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16765))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16780)))), &_td_OOC_SymbolTable__RecordDesc, 16780)));
l34:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16820)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)ADT_ArrayList__New(16);
      omitMethod = (ADT_ArrayList__ArrayList)i0;
      i0 = (OOC_INT32)topRecord;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16926))+32);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16979))+32);
      OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16994)))), &_td_OOC_SymbolTable__RecordDesc, 16994)));
l4:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions(Object__Object type) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      Object__Object obj;
      ADT_ArrayList__ArrayList list;
      OOC_INT32 i;
      OOC_SymbolTable__Item item;

      i0 = (OOC_INT32)extensionDict;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)type;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17261)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      
l5:
      if (!i0) goto l32;
      i0 = (OOC_INT32)extensionDict;
      i1 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17310)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17354)))), &_td_ADT_ArrayList__ArrayListDesc, 17354);
      list = (ADT_ArrayList__ArrayList)i0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 17392))+4);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l32;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17426));
      i3 = _check_pointer(i3, 17433);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17433))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17441)))), &_td_OOC_SymbolTable__RecordDesc, 17441)), 17448))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17456))+8);
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17495)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l12;
      i4=OOC_FALSE;
      goto l13;
l12:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17564));
      i4 = _check_pointer(i4, 17571);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17542)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17542)), 17551))+40);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17571))*4);
      i4 = i6==i4;
      
l13:
      i4 = !i4;
      if (!i4) goto l26;
l17_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17604));
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17495)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l20;
      i4=OOC_FALSE;
      goto l21;
l20:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17564));
      i4 = _check_pointer(i4, 17571);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17542)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17542)), 17551))+40);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17571))*4);
      i4 = i6==i4;
      
l21:
      i4 = !i4;
      if (i4) goto l17_loop;
l26:
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){107,110,111,119,110,45,101,120,116,101,110,115,105,111,110,0}), 16, (OOC_SymbolTable__Declaration)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17686)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17686)));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17734));
      i3 = _check_pointer(i3, 17741);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17741))*4);
      OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions((Object__Object)i3);
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l9_loop;
l32:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  moduleDict = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)ADT_Dictionary__New();
  declDict = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  i1 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17933)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i0, (URI__HierarchicalURI)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17962)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17998)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18014)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<!DOCTYPE interface-description SYSTEM \047", 41);
  i1 = (OOC_INT32)repositories;
  i1 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__GetSystemId((OOC_Config_Repositories__Section)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18074)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i0, (URI__URI)i1, OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18127)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047>", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18398)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,110,116,101,114,102,97,99,101,45,100,101,115,99,114,105,112,116,105,111,110,0}), 22, OOC_FALSE);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18519))+8);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)(OOC_INT32)0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18557))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18611)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18648)))), &_td_OOC_SymbolTable__TypeDeclDesc, 18648)), 18657))+44);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18671)))), &_td_OOC_SymbolTable__RecordDesc);
  
l8:
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18706)))), &_td_OOC_SymbolTable__TypeDeclDesc, 18706)), 18715))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18733)))), &_td_OOC_SymbolTable__RecordDesc, 18733)), 18740))+52);
  i1 = i1!=(OOC_INT32)0;
  
l12:
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18948)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19022)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19022)), 19031))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19049)))), &_td_OOC_SymbolTable__RecordDesc, 19049)), 19056))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19067))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19022)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19022)), 19031))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19049)))), &_td_OOC_SymbolTable__RecordDesc, 19049)), 19056))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19067))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19072)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18986)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 19072)), i3);
  i1 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19150)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19150)), 19159))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19105))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19177)))), &_td_OOC_SymbolTable__RecordDesc, 19177)), 19184))+52);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0);
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19232)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19232)), 19241))+44);
  OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19259)))), &_td_OOC_SymbolTable__RecordDesc, 19259)));
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19307)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19307)), 19316))+44);
  OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions((Object__Object)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19334)))), &_td_OOC_SymbolTable__RecordDesc, 19334)));
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19353)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l14:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19389));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)moduleDict;
  OOC_SymbolTable_InterfaceDescr__Write_WriteModuleRef((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19449)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19469)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_SymbolTable_InterfaceDescr_init(void) {

  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)(OOC_INT32)0;
  return;
  ;
}

/* --- */
