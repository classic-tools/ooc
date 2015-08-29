#include <OOC/SymbolTable/InterfaceDescr.d>
#include <__oo2c.h>
#include <setjmp.h>

static URI__URI OOC_SymbolTable_InterfaceDescr__GetSystemId(OOC_Config_Repositories__Section repositories) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__dtdSystemId;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (URI__URI)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1473)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.dtd", 30);
  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 1528);
  return (URI__URI)i0;
l4:
  _failed_function(1341); return 0;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2769)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tagName, tagName_0d, OOC_FALSE);
      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2822)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      baseModule = (OOC_SymbolTable__Module)i1;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2881))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2887))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2881))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2887))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2892)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2841)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 2892)), i4);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2935))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2941))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2935))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2941))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2946)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2903)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2946)), i4);
      i2 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
      className = (OOC_SymbolTable__Name)i2;
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3040))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3040))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3045)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3002)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i4, 3045)), i2);
      i2 = (OOC_INT32)module;
      i2 = i2==i1;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3144))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3150))+12);
      _copy_8((const void*)(_check_pointer(i2, 3155)),(void*)(OOC_INT32)href,2048);
      goto l4;
l3:
      _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
      Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3225)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3260)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i0, 3260)), i2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3277)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3319)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      i0 = (OOC_INT32)module;
      i0 = i0!=i1;
      if (!i0) goto l10;
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3428))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3434))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3428))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3434))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3439)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3405)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 3439)), i1);
      i1 = i0!=(OOC_INT32)0;
      repModule = (OOC_Repository__Module)i0;
      if (!i1) goto l10;
      i1 = (OOC_INT32)moduleDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3497)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3974))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
          goto l12;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4026))+32);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4041)))), &_td_OOC_SymbolTable__RecordDesc, 4041);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4076))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4076))+44);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4080)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, OOC_FALSE);
          baseDef = (OOC_SymbolTable__Declaration)i1;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l6;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4154))+28);
          i2 = i2==(OOC_INT32)0;
          
          goto l8;
l6:
          i2=OOC_TRUE;
l8:
          if (i2) goto l10;
          return (OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4275)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4275));
          goto l12;
l10:
          i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Name)i4);
          return (OOC_SymbolTable__ProcDecl)i0;
l12:
          _failed_function(3762); return 0;
          ;
        }


      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4403))+28);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4573)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4601)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4601)), 4610))+40);
      
l7:
      if (!i1) goto l22;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4835)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4835)), 4844)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4835)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4835)));
      _class = (OOC_SymbolTable__Record)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4904))+16);
      i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
      baseDef = (OOC_SymbolTable__ProcDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){100,111,99,45,105,110,104,101,114,105,116,101,100,45,102,114,111,109,0}), 19, (OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)ADT_Dictionary__New();
      rewriteMap = (ADT_Dictionary__Dictionary)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5090))+52);
      i3 = (OOC_INT32)decl;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5150)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5150)), 5159))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5102))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5171))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5076)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2, (Object__Object)i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5220))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5232))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5240)), (OOC_INT32)0);
      i2 = i2-1;
      i4 = 0<=i2;
      i = 0;
      if (!i4) goto l18;
      i4=0;
l13_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5284))+52);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5296))+44);
      i5 = _check_pointer(i5, 5304);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5347)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5347)), 5356))+52);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 5368))+44);
      i7 = _check_pointer(i7, 5376);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5304))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 5376))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5270)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i5, (Object__Object)i6);
      i4 = i4+1;
      i5 = i4<=i2;
      i = i4;
      if (i5) goto l13_loop;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5450))+28);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)module;
      i4 = (OOC_INT32)repositories;
      i5 = (OOC_INT32)moduleDict;
      OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i2, (OOC_Doc__Document)i0, (OOC_SymbolTable__Module)i3, (ADT_Dictionary__Dictionary)i1, (OOC_Config_Repositories__Section)i4, (ADT_Dictionary__Dictionary)i5);
      goto l22;
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4465))+28);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5717))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5723))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5717))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5723))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5728)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5685)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 5728)), i3);
      i0 = (OOC_INT32)declDict;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5750)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6094)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i1);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = (OOC_INT32)w;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6142)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6114)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,100,0}), 3, (void*)(_check_pointer(i0, 6142)), i3);
      i0 = (OOC_INT32)declDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6162)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6469)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)decl;
          OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
          i0 = *(OOC_INT8*)((_check_pointer(i0, 6542))+24);
          switch (i0) {
          case 0:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6600)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){110,111,0}), 3);
            goto l6;
          case 1:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6669)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){121,101,115,0}), 4);
            goto l6;
          case 2:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6741)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){114,101,97,100,45,111,110,108,121,0}), 10);
            goto l6;
          default:
            _failed_case(i0, 6533);
            goto l6;
          }
l6:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent(OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SymbolTable__Module module;
          OOC_SymbolTable__Import import;
          OOC_CHAR8 href[2048];
          OOC_Repository__Module repModule;
          OOC_SymbolTable__Item i;
          OOC_INT32 j;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7181)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8613)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8784)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l51;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9074)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l38;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9361)))), &_td_OOC_SymbolTable__FormalParsDesc);
          if (i1) goto l11;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9355)))), 9355);
          goto l88;
l11:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9392)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){102,111,114,109,97,108,45,112,97,114,97,109,101,116,101,114,115,0}), 18, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9451))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9501))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i1);
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9562))+44);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9570)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          j = 0;
          if (!i2) goto l22;
          i2=0;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9605))+44);
          i3 = _check_pointer(i3, 9613);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9613))*4);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          j = i2;
          if (i3) goto l17_loop;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9651))+40);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9750))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9725))+40);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){114,101,115,117,108,116,45,116,121,112,101,0}), 12, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
l25:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9801))+52);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9808)), (OOC_INT32)0);
          i1 = i1!=0;
          if (!i1) goto l36;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9834)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,120,99,101,112,116,105,111,110,115,0}), 11, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9900))+52);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9907)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          j = 0;
          if (!i2) goto l35;
          i2=0;
l30_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9952))+52);
          i3 = _check_pointer(i3, 9959);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9959))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10013))+52);
          i4 = _check_pointer(i4, 10020);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10020))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9962))+20);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10023))+16);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
          i2 = i2+1;
          i3 = i2<=i1;
          j = i2;
          if (i3) goto l30_loop;
l35:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10061)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l36:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10096)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l38:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9101)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,101,99,111,114,100,0}), 7, OOC_FALSE);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9150))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l49;
l41_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9212)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l44;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l44:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9298));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l41_loop;
l49:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9337)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l51:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8810)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,114,114,97,121,0}), 6, OOC_FALSE);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 8857))+32);
          i1 = !i1;
          if (!i1) goto l54;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8889)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,101,110,103,116,104,0}), 7, OOC_FALSE);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8932)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l54:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8997))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9023))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){101,108,101,109,101,110,116,45,116,121,112,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9050)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l56:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8641)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,111,105,110,116,101,114,0}), 8, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8713))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8736))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){112,111,105,110,116,101,114,45,98,97,115,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8760)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l58:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7210)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,110,97,109,101,0}), 10, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7261))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l68;
          i1 = (OOC_INT32)resolvedType;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l63;
          i2=OOC_FALSE;
          goto l65;
l63:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7398)))), &_td_OOC_SymbolTable__PredefTypeDesc);
          
l65:
          if (!i2) goto l69;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7731)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7792))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7798))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7792))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7798))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7803)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7756)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 7803)), i1);
          goto l69;
l68:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7329))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7337))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7329))+32);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7337))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7342)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7295)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 7342)), i3);
l69:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7864))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7871))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7864))+36);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7871))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7876)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7832)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 7876)), i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7909))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l72;
          i1 = (OOC_INT32)resolvedType;
          i1 = i1==(OOC_INT32)0;
          
          goto l74;
l72:
          i1=OOC_TRUE;
l74:
          if (i1) goto l76;
          i1 = (OOC_INT32)resolvedType;
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7980)))), &_td_OOC_SymbolTable__PredefTypeDesc));
          
          goto l78;
l76:
          i1=OOC_TRUE;
l78:
          if (!i1) goto l87;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8024))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l82;
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
          goto l86;
l82:
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8073)))), OOC_SymbolTable__TypeNameDesc_GetImport)),OOC_SymbolTable__TypeNameDesc_GetImport)((OOC_SymbolTable__TypeName)i0);
          import = (OOC_SymbolTable__Import)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8114))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8130))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8136))+12);
          _copy_8((const void*)(_check_pointer(i2, 8141)),(void*)(OOC_INT32)href,2048);
          i2 = (OOC_INT32)repositories;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8209))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8225))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8231))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8209))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8225))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8231))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8236)), (OOC_INT32)0);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8190)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i3, 8236)), i1);
          repModule = (OOC_Repository__Module)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l86;
          i2 = (OOC_INT32)moduleDict;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8306)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l86:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8484))+36);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8491))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8484))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8491))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8496)), (OOC_INT32)0);
          Strings__Append((void*)(_check_pointer(i1, 8496)), i0, (void*)(OOC_INT32)href, 2048);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8519)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
l87:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8579)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l88:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(const OOC_CHAR16 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR16 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR16 ,(tag_0d*2))
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10252)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)type;
          i1 = (OOC_INT32)resolvedType;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10335)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Record _class;

          i0 = (OOC_INT32)superClass;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10552))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10604))+32);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10619)))), &_td_OOC_SymbolTable__RecordDesc, 10619);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10654))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10654))+44);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10658)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, OOC_FALSE);
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10946)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l48;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11773)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12053)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12235)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12432)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12957)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13466)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l64;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 13502))+41);
      i1 = !i1;
      if (!i1) goto l64;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("procedure", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13636))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13654))+52);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 13688))+40);
      if (!i1) goto l21;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13747)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13762))+16);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
l21:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13800)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l24:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12994))+24);
      i1 = i1!=0;
      if (!i1) goto l64;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("field-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13377))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13396))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13418)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l29:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12466))+49);
      if (i1) goto l36;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12543))+48);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12720))+48);
      if (!i1) goto l40;
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 12790))+50);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12752)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,45,112,97,114,97,109,101,116,101,114,0}), 19, i2);
l40:
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12884))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12903))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12923)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l42:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("type-decl", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12359))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12378))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12398)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l44:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("const-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12125)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, ((OOC_CHAR16[]){117,110,107,110,111,119,110,0}), 8);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12203)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l46:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("import-decl", 12, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11877))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11889))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11877))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11889))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11894)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11843)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 11894)), i3);
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11957))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11969))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11957))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11969))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11974)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11940)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 11974)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12021)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l48:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("module-interface", 17, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11031)))), OOC_SymbolTable__ModuleDesc_ClassToString)),OOC_SymbolTable__ModuleDesc_ClassToString)((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11112)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (Object__String)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11186))+48);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l51;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11254))+48);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11224)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,105,98,114,97,114,121,45,110,97,109,101,0}), 13, (Object__String)i2);
l51:
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11316)))), OOC_SymbolTable__ModuleDesc_CallConvToString)),OOC_SymbolTable__ModuleDesc_CallConvToString)((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11399)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,45,99,111,110,118,0}), 10, (Object__String)i1);
      i1 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11507))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11513))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11507))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11513))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11518)), (OOC_INT32)0);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11490)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i1, (void*)(_check_pointer(i2, 11518)), i3);
      moduleRepository = (OOC_Repository__Module)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11552))+8);
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l62;
l54_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11614)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l57;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l57:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11702));
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l54_loop;
l62:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11741)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14169));
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14557))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14563))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14557))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14563))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14568)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14538)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 14568)), i1);
      thisModule = (OOC_Repository__Module)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14599)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, OOC_FALSE);
      baseURI = (URI__HierarchicalURI)i0;
      i1 = (OOC_INT32)modList;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14674)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i1);
      keys = (Object__ObjectArrayPtr)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14713)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 14746);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14746))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14761)))), &_td_OOC_Repository__ModuleDesc, 14761);
      remoteMod = (OOC_Repository__Module)i4;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14780)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,0}), 11, OOC_FALSE);
      i5 = (OOC_INT32)w;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14860))+4);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14860))+4);
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 14866)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14823)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i6, 14866)), i7);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14880)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){114,101,102,45,116,97,114,103,101,116,0}), 11, OOC_FALSE);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14923)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,121,112,101,0}), 5, "html", 5);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14990)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 5, OOC_FALSE);
      remoteURI = (URI__URI)i4;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15069)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i4, (URI__HierarchicalURI)i0);
      relativeURI = (URI__URI)i4;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15114)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i4, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15142)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,101,108,97,116,105,118,101,45,117,114,105,0}), 13, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15193)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15213)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
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
              i1 = *(OOC_INT32*)((_check_pointer(i0, 15714))+4);
              i1 = i1-1;
              i2 = 0<=i1;
              i = 0;
              if (!i2) goto l11;
              i2 = (OOC_INT32)method;
              i3=0;
l3_loop:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15752));
              i4 = _check_pointer(i4, 15759);
              i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15759))*4);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15767)))), &_td_OOC_SymbolTable__DeclarationDesc, 15767)), 15779))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15785))+12);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15816))+16);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15822))+12);
              i4 = (
              _cmp8((const void*)(_check_pointer(i4, 15790)),(const void*)(_check_pointer(i5, 15827))))==(OOC_INT32)0;
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15966)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){98,97,115,101,45,99,108,97,115,115,0}), 11, OOC_FALSE);
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16024)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16081))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16087))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16081))+16);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16087))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16092)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16045)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 16092)), i4);
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16140))+52);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16151))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16140))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16151))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16156)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16105)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i3, 16156)), i4);
          i2 = (OOC_INT32)topRecord;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16181)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
          i2 = i2==i1;
          if (i2) goto l3;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16268))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16274))+12);
          _copy_8((const void*)(_check_pointer(i1, 16279)),(void*)(OOC_INT32)href,2048);
          goto l4;
l3:
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16367))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16378))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16367))+52);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16378))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16383)), (OOC_INT32)0);
          Strings__Append((void*)(_check_pointer(i1, 16383)), i2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16402)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16466))+44);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16481)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 16481);
          ns = (OOC_SymbolTable_Namespace__Namespace)i0;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 16517))+4);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l31;
          i1=0;
l7_loop:
          i2 = (OOC_INT32)ns;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16555));
          i2 = _check_pointer(i2, 16566);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 16566))*4);
          item = (OOC_SymbolTable__Item)i1;
          i2 = *(OOC_INT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16594)))), &_td_OOC_SymbolTable__DeclarationDesc, 16594)), 16606))+24);
          i2 = i2!=0;
          if (i2) goto l10;
          i1=OOC_FALSE;
          goto l16;
l10:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16664)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i2) goto l13;
          i1 = OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord_NewMethod((OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16705)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16705)));
          
          goto l16;
l13:
          i1=OOC_TRUE;
l16:
          if (!i1) goto l26;
          i1 = (OOC_INT32)item;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16743)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i2) goto l24;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16835)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i2) goto l22;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16829)))), 16829);
          goto l26;
l22:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,109,101,116,104,111,100,0}), 17, (OOC_SymbolTable__Declaration)i1);
          i2 = (OOC_INT32)omitMethod;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16934)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i1);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17020))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l34;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17072))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17087)))), &_td_OOC_SymbolTable__RecordDesc, 17087)));
l34:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17127)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)ADT_ArrayList__New(16);
      omitMethod = (ADT_ArrayList__ArrayList)i0;
      i0 = (OOC_INT32)topRecord;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17233))+32);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17286))+32);
      OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17301)))), &_td_OOC_SymbolTable__RecordDesc, 17301)));
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
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17568)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      
l5:
      if (!i0) goto l32;
      i0 = (OOC_INT32)extensionDict;
      i1 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17617)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17661)))), &_td_ADT_ArrayList__ArrayListDesc, 17661);
      list = (ADT_ArrayList__ArrayList)i0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 17699))+4);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l32;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17733));
      i3 = _check_pointer(i3, 17740);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17740))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17748)))), &_td_OOC_SymbolTable__RecordDesc, 17748)), 17755))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17763))+8);
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17802)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l12;
      i4=OOC_FALSE;
      goto l13;
l12:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17871));
      i4 = _check_pointer(i4, 17878);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17849)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17849)), 17858))+40);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17878))*4);
      i4 = i6==i4;
      
l13:
      i4 = !i4;
      if (!i4) goto l26;
l17_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17911));
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17802)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l20;
      i4=OOC_FALSE;
      goto l21;
l20:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17871));
      i4 = _check_pointer(i4, 17878);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17849)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17849)), 17858))+40);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17878))*4);
      i4 = i6==i4;
      
l21:
      i4 = !i4;
      if (i4) goto l17_loop;
l26:
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){107,110,111,119,110,45,101,120,116,101,110,115,105,111,110,0}), 16, (OOC_SymbolTable__Declaration)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17993)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17993)));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18041));
      i3 = _check_pointer(i3, 18048);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 18048))*4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18240)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i0, (URI__HierarchicalURI)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18269)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18305)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18321)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<!DOCTYPE interface-description SYSTEM \047", 41);
  i1 = (OOC_INT32)repositories;
  i1 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__GetSystemId((OOC_Config_Repositories__Section)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18381)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i0, (URI__URI)i1, OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18434)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047>", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18705)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,110,116,101,114,102,97,99,101,45,100,101,115,99,114,105,112,116,105,111,110,0}), 22, OOC_FALSE);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18826))+8);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)(OOC_INT32)0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18864))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18918)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18955)))), &_td_OOC_SymbolTable__TypeDeclDesc, 18955)), 18964))+44);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18978)))), &_td_OOC_SymbolTable__RecordDesc);
  
l8:
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19013)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19013)), 19022))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19040)))), &_td_OOC_SymbolTable__RecordDesc, 19040)), 19047))+52);
  i1 = i1!=(OOC_INT32)0;
  
l12:
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19255)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, OOC_FALSE);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19329)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19329)), 19338))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19356)))), &_td_OOC_SymbolTable__RecordDesc, 19356)), 19363))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19374))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19329)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19329)), 19338))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19356)))), &_td_OOC_SymbolTable__RecordDesc, 19356)), 19363))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19374))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19379)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19293)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 19379)), i3);
  i1 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19457)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19457)), 19466))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19412))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19484)))), &_td_OOC_SymbolTable__RecordDesc, 19484)), 19491))+52);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0);
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19539)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19539)), 19548))+44);
  OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19566)))), &_td_OOC_SymbolTable__RecordDesc, 19566)));
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19614)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19614)), 19623))+44);
  OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions((Object__Object)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19641)))), &_td_OOC_SymbolTable__RecordDesc, 19641)));
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19660)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l14:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19696));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)moduleDict;
  OOC_SymbolTable_InterfaceDescr__Write_WriteModuleRef((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19756)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19776)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_SymbolTable_InterfaceDescr_init(void) {

  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)(OOC_INT32)0;
  return;
  ;
}

/* --- */
