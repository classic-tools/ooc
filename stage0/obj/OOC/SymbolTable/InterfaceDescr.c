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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1472)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.dtd", 30);
  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 1527);
  return (URI__URI)i0;
l4:
  _failed_function(1340); return 0;
  ;
}

void OOC_SymbolTable_InterfaceDescr__Write(IO__ByteChannel cw, URI__HierarchicalURI baseURI, OOC_SymbolTable__Module module, OOC_Config_Repositories__Section repositories, ADT_Dictionary__Dictionary extensionDict) {
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2784)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tagName, tagName_0d, 0u);
      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2837)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      baseModule = (OOC_SymbolTable__Module)i1;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2896))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2902))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2896))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2902))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2907)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2856)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 2907)), i4);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2950))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2956))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2950))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 2956))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 2961)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2918)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 2961)), i4);
      i2 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
      className = (OOC_SymbolTable__Name)i2;
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3055))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3055))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3060)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3017)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i4, 3060)), i2);
      i2 = (OOC_INT32)module;
      i2 = i2==i1;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3159))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3165))+12);
      _copy_8((const void*)(_check_pointer(i2, 3170)),(void*)(OOC_INT32)href,2048);
      goto l4;
l3:
      _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
      Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3240)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3275)), 0);
      Strings__Append((void*)(_check_pointer(i0, 3275)), i2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3292)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3334)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      i0 = (OOC_INT32)module;
      i0 = i0!=i1;
      if (!i0) goto l10;
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3443))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3449))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3443))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3449))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3454)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3420)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 3454)), i1);
      repModule = (OOC_Repository__Module)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l10;
      i1 = (OOC_INT32)moduleDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3512)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3989))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
          goto l12;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4041))+32);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4056)))), &_td_OOC_SymbolTable__RecordDesc, 4056);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4091))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4091))+44);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4095)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, 0u);
          baseDef = (OOC_SymbolTable__Declaration)i1;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l6;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4169))+28);
          i2 = i2==(OOC_INT32)0;
          
          goto l8;
l6:
          i2=1u;
l8:
          if (i2) goto l10;
          return (OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4290)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4290));
          goto l12;
l10:
          i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Name)i4);
          return (OOC_SymbolTable__ProcDecl)i0;
l12:
          _failed_function(3777); return 0;
          ;
        }


      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4418))+28);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4588)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4616)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4616)), 4625))+40);
      
l7:
      if (!i1) goto l22;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4850)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4850)), 4859)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4850)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4850)));
      _class = (OOC_SymbolTable__Record)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4919))+16);
      i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
      baseDef = (OOC_SymbolTable__ProcDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){100,111,99,45,105,110,104,101,114,105,116,101,100,45,102,114,111,109,0}), 19, (OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)ADT_Dictionary__New();
      rewriteMap = (ADT_Dictionary__Dictionary)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5105))+52);
      i3 = (OOC_INT32)decl;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5165)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5165)), 5174))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5117))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5186))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5091)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i2, (Object__Object)i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5235))+52);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5247))+44);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5255)), 0);
      i4 = 0<i2;
      if (!i4) goto l18;
      i4=0;
l13_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5299))+52);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5311))+44);
      i5 = _check_pointer(i5, 5319);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5362)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5362)), 5371))+52);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 5383))+44);
      i7 = _check_pointer(i7, 5391);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5319))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 5391))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5285)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i5, (Object__Object)i6);
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l13_loop;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5465))+28);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)module;
      i4 = (OOC_INT32)repositories;
      i5 = (OOC_INT32)moduleDict;
      OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i2, (OOC_Doc__Document)i0, (OOC_SymbolTable__Module)i3, (ADT_Dictionary__Dictionary)i1, (OOC_Config_Repositories__Section)i4, (ADT_Dictionary__Dictionary)i5);
      goto l22;
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4480))+28);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5732))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5738))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5732))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5738))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5743)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5700)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 5743)), i3);
      i0 = (OOC_INT32)declDict;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5765)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6109)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i1);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = (OOC_INT32)w;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6157)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6129)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,100,0}), 3, (void*)(_check_pointer(i0, 6157)), i3);
      i0 = (OOC_INT32)declDict;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6177)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6484)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, 0u);
          i0 = (OOC_INT32)decl;
          OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
          i0 = *(OOC_INT8*)((_check_pointer(i0, 6557))+24);
          switch (i0) {
          case 0:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6615)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){110,111,0}), 3);
            goto l6;
          case 1:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6684)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){121,101,115,0}), 4);
            goto l6;
          case 2:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6756)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){114,101,97,100,45,111,110,108,121,0}), 10);
            goto l6;
          default:
            _failed_case(i0, 6548);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7196)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8628)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8799)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l51;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9089)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l38;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9376)))), &_td_OOC_SymbolTable__FormalParsDesc);
          if (i1) goto l11;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9370)))), 9370);
          goto l88;
l11:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9407)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){102,111,114,109,97,108,45,112,97,114,97,109,101,116,101,114,115,0}), 18, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9466))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9516))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i1);
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9577))+44);
          j = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9585)), 0);
          i2 = 0<i1;
          if (!i2) goto l22;
          i2=0;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9620))+44);
          i3 = _check_pointer(i3, 9628);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9628))*4);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          j = i2;
          i3 = i2<i1;
          if (i3) goto l17_loop;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9666))+40);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9765))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9740))+40);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){114,101,115,117,108,116,45,116,121,112,101,0}), 12, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
l25:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9816))+52);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9823)), 0);
          i1 = i1!=0;
          if (!i1) goto l36;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9849)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,120,99,101,112,116,105,111,110,115,0}), 11, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9915))+52);
          j = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9922)), 0);
          i2 = 0<i1;
          if (!i2) goto l35;
          i2=0;
l30_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9967))+52);
          i3 = _check_pointer(i3, 9974);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9974))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10028))+52);
          i4 = _check_pointer(i4, 10035);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10035))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9977))+20);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10038))+16);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
          i2 = i2+1;
          j = i2;
          i3 = i2<i1;
          if (i3) goto l30_loop;
l35:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10076)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l36:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10111)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l38:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9116)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,101,99,111,114,100,0}), 7, 0u);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9165))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l49;
l41_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9227)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l44;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l44:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9313));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l41_loop;
l49:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9352)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l51:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8825)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,114,114,97,121,0}), 6, 0u);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 8872))+32);
          i1 = !i1;
          if (!i1) goto l54;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8904)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,101,110,103,116,104,0}), 7, 0u);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8947)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l54:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9012))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9038))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){101,108,101,109,101,110,116,45,116,121,112,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9065)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l56:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8656)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,111,105,110,116,101,114,0}), 8, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8728))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8751))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){112,111,105,110,116,101,114,45,98,97,115,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8775)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l88;
l58:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7225)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,110,97,109,101,0}), 10, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7276))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l68;
          i1 = (OOC_INT32)resolvedType;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l63;
          i2=0u;
          goto l65;
l63:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7413)))), &_td_OOC_SymbolTable__PredefTypeDesc);
          
l65:
          if (!i2) goto l69;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7746)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7807))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7813))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7807))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7813))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7818)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7771)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 7818)), i1);
          goto l69;
l68:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7344))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7352))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7344))+32);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7352))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7357)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7310)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 7357)), i3);
l69:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7879))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7886))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7879))+36);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7886))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7891)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7847)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 7891)), i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7924))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l72;
          i1 = (OOC_INT32)resolvedType;
          i1 = i1==(OOC_INT32)0;
          
          goto l74;
l72:
          i1=1u;
l74:
          if (i1) goto l76;
          i1 = (OOC_INT32)resolvedType;
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7995)))), &_td_OOC_SymbolTable__PredefTypeDesc));
          
          goto l78;
l76:
          i1=1u;
l78:
          if (!i1) goto l87;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8039))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l82;
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
          goto l86;
l82:
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8088)))), OOC_SymbolTable__TypeNameDesc_GetImport)),OOC_SymbolTable__TypeNameDesc_GetImport)((OOC_SymbolTable__TypeName)i0);
          import = (OOC_SymbolTable__Import)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8129))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8145))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8151))+12);
          _copy_8((const void*)(_check_pointer(i2, 8156)),(void*)(OOC_INT32)href,2048);
          i2 = (OOC_INT32)repositories;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8224))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8240))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8246))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8224))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8240))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8246))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8251)), 0);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8205)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i3, 8251)), i1);
          repModule = (OOC_Repository__Module)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l86;
          i2 = (OOC_INT32)moduleDict;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8321)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l86:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8499))+36);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8506))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8499))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8506))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8511)), 0);
          Strings__Append((void*)(_check_pointer(i1, 8511)), i0, (void*)(OOC_INT32)href, 2048);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8534)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
l87:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8594)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l88:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(const OOC_CHAR16 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR16 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR16 ,(tag_0d*2))
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10267)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, 0u);
          i0 = (OOC_INT32)type;
          i1 = (OOC_INT32)resolvedType;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10350)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Record _class;

          i0 = (OOC_INT32)superClass;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10567))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10619))+32);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10634)))), &_td_OOC_SymbolTable__RecordDesc, 10634);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10669))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10669))+44);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10673)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, 0u);
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10961)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l48;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11797)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12077)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12259)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12456)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12981)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13490)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l64;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 13526))+41);
      i1 = !i1;
      if (!i1) goto l64;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("procedure", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13660))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13678))+52);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 13712))+40);
      if (!i1) goto l21;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13771)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13786))+16);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
l21:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13824)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l24:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 13018))+24);
      i1 = i1!=0;
      if (!i1) goto l64;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("field-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13401))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13420))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13442)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l29:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12490))+49);
      if (i1) goto l36;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12567))+48);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12744))+48);
      if (!i1) goto l40;
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 12814))+50);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12776)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,45,112,97,114,97,109,101,116,101,114,0}), 19, i2);
l40:
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12908))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12927))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12947)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l42:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("type-decl", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12383))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12402))+40);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12422)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l44:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("const-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12149)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, ((OOC_CHAR16[]){117,110,107,110,111,119,110,0}), 8);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12227)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l46:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("import-decl", 12, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11901))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11913))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11901))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11913))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11918)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11867)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 11918)), i3);
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11981))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11993))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11981))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11993))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11998)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11964)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 11998)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12045)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l64;
l48:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("module-interface", 17, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11046)))), OOC_SymbolTable__ModuleDesc_ClassToString)),OOC_SymbolTable__ModuleDesc_ClassToString)((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11127)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (Object__String)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11204))+48);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l51;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11275))+48);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11242)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,105,98,114,97,114,121,45,110,97,109,101,0}), 13, (Object__String)i2);
l51:
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11337)))), OOC_SymbolTable__ModuleDesc_CallConvToString)),OOC_SymbolTable__ModuleDesc_CallConvToString)((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11420)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,45,99,111,110,118,0}), 10, (Object__String)i1);
      i1 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11531))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11537))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11531))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11537))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 11542)), 0);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11514)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i1, (void*)(_check_pointer(i2, 11542)), i3);
      moduleRepository = (OOC_Repository__Module)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11576))+8);
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l62;
l54_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11638)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l57;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l57:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11726));
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l54_loop;
l62:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11765)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l64:
      return;
      ;
    }

    
    void OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList(OOC_SymbolTable__Item list, OOC_SymbolTable__Name className) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Name itemClass;

      i0 = (OOC_INT32)list;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i1 = (OOC_INT32)className;
      
l3_loop:
      i2 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
      itemClass = (OOC_SymbolTable__Name)i2;
      i2 = i2==i1;
      if (!i2) goto l6;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14193));
      list = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14581))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14587))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14581))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14587))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14592)), 0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14562)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 14592)), i1);
      thisModule = (OOC_Repository__Module)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14623)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, 0u);
      baseURI = (URI__HierarchicalURI)i0;
      i1 = (OOC_INT32)modList;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14698)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i1);
      keys = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 14737)), 0);
      i3 = 0<i2;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 14770);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14770))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14785)))), &_td_OOC_Repository__ModuleDesc, 14785);
      remoteMod = (OOC_Repository__Module)i4;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14804)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,0}), 11, 0u);
      i5 = (OOC_INT32)w;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14884))+4);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14884))+4);
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 14890)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14847)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i6, 14890)), i7);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14904)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){114,101,102,45,116,97,114,103,101,116,0}), 11, 0u);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14947)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,121,112,101,0}), 5, "html", 5);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15014)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 5, 0u);
      remoteURI = (URI__URI)i4;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15093)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i4, (URI__HierarchicalURI)i0);
      relativeURI = (URI__URI)i4;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15138)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i4, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15166)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,101,108,97,116,105,118,101,45,117,114,105,0}), 13, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15217)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15237)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
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
              i = 0;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 15738))+4);
              i2 = 0<i1;
              if (!i2) goto l11;
              i2 = (OOC_INT32)method;
              i3=0;
l3_loop:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15776));
              i4 = _check_pointer(i4, 15783);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 15783))*4);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15791)))), &_td_OOC_SymbolTable__DeclarationDesc, 15791)), 15803))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15809))+12);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15840))+16);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 15846))+12);
              i4 = (
              _cmp8((const void*)(_check_pointer(i4, 15814)),(const void*)(_check_pointer(i5, 15851))))==0;
              if (!i4) goto l6;
              return 0u;
l6:
              i3 = i3+1;
              i = i3;
              i4 = i3<i1;
              if (i4) goto l3_loop;
l11:
              return 1u;
              ;
            }


          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15990)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){98,97,115,101,45,99,108,97,115,115,0}), 11, 0u);
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16048)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16105))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16111))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16105))+16);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16111))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16116)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16069)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 16116)), i4);
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16164))+52);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16175))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16164))+52);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 16175))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16180)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16129)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i3, 16180)), i4);
          i2 = (OOC_INT32)topRecord;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16205)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
          i2 = i2==i1;
          if (i2) goto l3;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16292))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16298))+12);
          _copy_8((const void*)(_check_pointer(i1, 16303)),(void*)(OOC_INT32)href,2048);
          goto l4;
l3:
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16391))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16402))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16391))+52);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16402))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 16407)), 0);
          Strings__Append((void*)(_check_pointer(i1, 16407)), i2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16426)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16490))+44);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16505)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 16505);
          ns = (OOC_SymbolTable_Namespace__Namespace)i0;
          i = 0;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 16541))+4);
          i1 = 0<i0;
          if (!i1) goto l31;
          i1=0;
l7_loop:
          i2 = (OOC_INT32)ns;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16579));
          i2 = _check_pointer(i2, 16590);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 16590))*4);
          item = (OOC_SymbolTable__Item)i1;
          i2 = *(OOC_INT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16618)))), &_td_OOC_SymbolTable__DeclarationDesc, 16618)), 16630))+24);
          i2 = i2!=0;
          if (i2) goto l10;
          i1=0u;
          goto l16;
l10:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16688)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i2) goto l13;
          i1 = OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord_NewMethod((OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16729)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16729)));
          
          goto l16;
l13:
          i1=1u;
l16:
          if (!i1) goto l26;
          i1 = (OOC_INT32)item;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16767)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i2) goto l24;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16859)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i2) goto l22;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16853)))), 16853);
          goto l26;
l22:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,109,101,116,104,111,100,0}), 17, (OOC_SymbolTable__Declaration)i1);
          i2 = (OOC_INT32)omitMethod;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16958)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i1);
          goto l26;
l24:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,102,105,101,108,100,0}), 16, (OOC_SymbolTable__Declaration)i1);
l26:
          i1 = i;
          i1 = i1+1;
          i = i1;
          i2 = i1<i0;
          if (i2) goto l7_loop;
l31:
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17044))+32);
          i1 = i1!=0;
          if (!i1) goto l34;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17096))+32);
          OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17111)))), &_td_OOC_SymbolTable__RecordDesc, 17111)));
l34:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17151)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)ADT_ArrayList__New(16);
      omitMethod = (ADT_ArrayList__ArrayList)i0;
      i0 = (OOC_INT32)topRecord;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17257))+32);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17310))+32);
      OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17325)))), &_td_OOC_SymbolTable__RecordDesc, 17325)));
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
      i0=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)type;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17592)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      
l5:
      if (!i0) goto l32;
      i0 = (OOC_INT32)extensionDict;
      i1 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17641)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17685)))), &_td_ADT_ArrayList__ArrayListDesc, 17685);
      list = (ADT_ArrayList__ArrayList)i0;
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 17723))+4);
      i2 = 0<i1;
      if (!i2) goto l32;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17757));
      i3 = _check_pointer(i3, 17764);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 17764))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17772)))), &_td_OOC_SymbolTable__RecordDesc, 17772)), 17779))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17787))+8);
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17826)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l12;
      i4=0u;
      goto l13;
l12:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17895));
      i4 = _check_pointer(i4, 17902);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17873)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17873)), 17882))+40);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17902))*4);
      i4 = i6==i4;
      
l13:
      i4 = !i4;
      if (!i4) goto l26;
l17_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17935));
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17826)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l20;
      i4=0u;
      goto l21;
l20:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17895));
      i4 = _check_pointer(i4, 17902);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17873)))), &_td_OOC_SymbolTable__TypeDeclDesc, 17873)), 17882))+40);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 17902))*4);
      i4 = i6==i4;
      
l21:
      i4 = !i4;
      if (i4) goto l17_loop;
l26:
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){107,110,111,119,110,45,101,120,116,101,110,115,105,111,110,0}), 16, (OOC_SymbolTable__Declaration)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18017)))), &_td_OOC_SymbolTable__TypeDeclDesc, 18017)));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18065));
      i3 = _check_pointer(i3, 18072);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 18072))*4);
      OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions((Object__Object)i3);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
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
  i0 = (OOC_INT32)XML_Writer__New((IO__ByteChannel)i0, (XML_UnicodeCodec__Factory)i1, 1u, 2);
  w = (XML_Writer__Writer)i0;
  i1 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18264)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i0, (URI__HierarchicalURI)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18293)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18329)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18345)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<!DOCTYPE interface-description SYSTEM \047", 41);
  i1 = (OOC_INT32)repositories;
  i1 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__GetSystemId((OOC_Config_Repositories__Section)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18405)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i0, (URI__URI)i1, 0u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18458)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047>", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18729)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,110,116,101,114,102,97,99,101,45,100,101,115,99,114,105,112,116,105,111,110,0}), 22, 0u);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18850))+8);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)(OOC_INT32)0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18888))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18942)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18979)))), &_td_OOC_SymbolTable__TypeDeclDesc, 18979)), 18988))+44);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19002)))), &_td_OOC_SymbolTable__RecordDesc);
  
l8:
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19037)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19037)), 19046))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19064)))), &_td_OOC_SymbolTable__RecordDesc, 19064)), 19071))+52);
  i1 = i1!=(OOC_INT32)0;
  
l12:
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19279)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19353)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19353)), 19362))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19380)))), &_td_OOC_SymbolTable__RecordDesc, 19380)), 19387))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19398))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19353)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19353)), 19362))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19380)))), &_td_OOC_SymbolTable__RecordDesc, 19380)), 19387))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19398))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19403)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19317)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 19403)), i3);
  i1 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19481)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19481)), 19490))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19436))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19508)))), &_td_OOC_SymbolTable__RecordDesc, 19508)), 19515))+52);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0);
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19563)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19563)), 19572))+44);
  OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19590)))), &_td_OOC_SymbolTable__RecordDesc, 19590)));
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19638)))), &_td_OOC_SymbolTable__TypeDeclDesc, 19638)), 19647))+44);
  OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions((Object__Object)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19665)))), &_td_OOC_SymbolTable__RecordDesc, 19665)));
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19684)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l14:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19720));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)moduleDict;
  OOC_SymbolTable_InterfaceDescr__Write_WriteModuleRef((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19780)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19800)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_SymbolTable_InterfaceDescr_init(void) {

  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)(OOC_INT32)0;
  return;
  ;
}

/* --- */
