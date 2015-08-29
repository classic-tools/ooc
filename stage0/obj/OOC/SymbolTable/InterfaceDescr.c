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
  i0 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetResource((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/interface-description.dtd", 30);
  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 1742);
  return (URI__URI)i0;
l4:
  _failed_function(1555); return 0;
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

      OOC_INITIALIZE_VPAR(tagName__ref,tagName,OOC_CHAR16 ,(tagName_0d*2))
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2999)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tagName, tagName_0d, 0u);
      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3052)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      baseModule = (OOC_SymbolTable__Module)i1;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3111))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3117))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3111))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3117))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 3122)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3071)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 3122)), i4);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3165))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3171))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3165))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 3171))+12);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 3176)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3133)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i3, 3176)), i4);
      i2 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
      className = (OOC_SymbolTable__Name)i2;
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3270))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3270))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3275)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3232)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i4, 3275)), i2);
      i2 = (OOC_INT32)module;
      i2 = i2==i1;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3374))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3380))+12);
      _copy_8((const void*)(_check_pointer(i2, 3385)),(void*)(OOC_INT32)href,2048);
      goto l4;
l3:
      _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
      Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3455)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3490)), 0);
      Strings__Append((void*)(_check_pointer(i0, 3490)), i2, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3507)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3549)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      i0 = (OOC_INT32)module;
      i0 = i0!=i1;
      if (!i0) goto l10;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3658))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3664))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3658))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3664))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3669)), 0);
      i2 = (OOC_INT32)repositories;
      i0 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i0, 3669)), i1);
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l10;
      i1 = (OOC_INT32)moduleDict;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4204))+36);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l3;
          return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
          goto l12;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4256))+36);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4271)))), &_td_OOC_SymbolTable__RecordDesc, 4271);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4306))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4306))+48);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4310)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, 0u);
          baseDef = (OOC_SymbolTable__Declaration)i1;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l6;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4384))+28);
          i2 = i2==(OOC_INT32)0;
          
          goto l8;
l6:
          i2=1u;
l8:
          if (i2) goto l10;
          return (OOC_SymbolTable__ProcDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4505)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4505));
          goto l12;
l10:
          i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Name)i4);
          return (OOC_SymbolTable__ProcDecl)i0;
l12:
          _failed_function(3992); return 0;
          ;
        }


      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4633))+28);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4803)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4831)))), &_td_OOC_SymbolTable__ProcDeclDesc, 4831)));
      
l7:
      if (!i1) goto l22;
      i1 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5066)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5066)));
      _class = (OOC_SymbolTable__Record)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5135))+16);
      i0 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__Write_DeclDocString_GetBaseDefinition((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
      baseDef = (OOC_SymbolTable__ProcDecl)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){100,111,99,45,105,110,104,101,114,105,116,101,100,45,102,114,111,109,0}), 19, (OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)ADT_Dictionary__New();
      rewriteMap = (ADT_Dictionary__Dictionary)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5321))+60);
      i3 = (OOC_INT32)decl;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5381)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5381)), 5390))+60);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5333))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5402))+36);
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i2, (Object__Object)i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5451))+60);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5463))+48);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5471)), 0);
      i4 = 0<i2;
      if (!i4) goto l18;
      i4=0;
l13_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5515))+60);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5527))+48);
      i5 = _check_pointer(i5, 5535);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5578)))), &_td_OOC_SymbolTable__ProcDeclDesc, 5578)), 5587))+60);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 5599))+48);
      i7 = _check_pointer(i7, 5607);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5535))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 5607))*4);
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i5, (Object__Object)i6);
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l13_loop;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5681))+28);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)module;
      i4 = (OOC_INT32)repositories;
      i5 = (OOC_INT32)moduleDict;
      OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i2, (OOC_Doc__Document)i0, (OOC_SymbolTable__Module)i3, (ADT_Dictionary__Dictionary)i1, (OOC_Config_Repositories__Section)i4, (ADT_Dictionary__Dictionary)i5);
      goto l22;
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4695))+28);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5948))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5954))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5948))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5954))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5959)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5916)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 5959)), i3);
      i0 = (OOC_INT32)declDict;
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      i0 = !i0;
      if (!i0) goto l4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6325)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i1);
      id = (OOC_Scanner_InputBuffer__CharArray)i0;
      i2 = (OOC_INT32)w;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6373)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6345)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,100,0}), 3, (void*)(_check_pointer(i0, 6373)), i3);
      i0 = (OOC_INT32)declDict;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
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
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteAliasList(OOC_SymbolTable__VarDecl receiver);
      auto void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypePars(OOC_SymbolTable__TypePars typePars);
        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR8 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR8 ,tag_0d)
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6700)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, 0u);
          i0 = (OOC_INT32)decl;
          OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
          i0 = *(OOC_INT8*)((_check_pointer(i0, 6773))+24);
          switch (i0) {
          case 0:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6831)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){110,111,0}), 3);
            goto l6;
          case 1:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6900)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){121,101,115,0}), 4);
            goto l6;
          case 2:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6972)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){114,101,97,100,45,111,110,108,121,0}), 10);
            goto l6;
          default:
            _failed_case(i0, 6764);
            goto l6;
          }
l6:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent(OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_SymbolTable__Module module;
          OOC_Scanner_InputBuffer__CharArray id;
          OOC_CHAR8 href[2048];
          OOC_SymbolTable__Import import;
          OOC_Repository__Module repModule;
          OOC_SymbolTable__Item i;
          OOC_INT32 j;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7440)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l70;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9106)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l68;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9277)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l63;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9567)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l50;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9854)))), &_td_OOC_SymbolTable__FormalParsDesc);
          if (i1) goto l23;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10614)))), &_td_OOC_SymbolTable__QualTypeDesc);
          if (i1) goto l13;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10608)))), 10608);
          goto l104;
l13:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10643)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){113,117,97,108,105,102,105,101,100,45,116,121,112,101,0}), 15, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10711))+40);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10733))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10756)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,97,114,103,117,109,101,110,116,115,0}), 15, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10824))+44);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10834)), 0);
          j = 0;
          i2 = 0<i1;
          if (!i2) goto l21;
          i2=0;
l16_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10877))+44);
          i3 = _check_pointer(i3, 10887);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10939))+44);
          i5 = _check_pointer(i5, 10949);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)((i3+(_check_index(i2, i4, OOC_UINT32, 10887))*8)+4);
          i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 10949))*8);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
          i2 = i2+1;
          j = i2;
          i3 = i2<i1;
          if (i3) goto l16_loop;
l21:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10986)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11008)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l104;
l23:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9885)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){102,111,114,109,97,108,45,112,97,114,97,109,101,116,101,114,115,0}), 18, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9944))+36);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l26;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9994))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i1);
l26:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10055))+48);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10063)), 0);
          j = 0;
          i2 = 0<i1;
          if (!i2) goto l34;
          i2=0;
l29_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10098))+48);
          i3 = _check_pointer(i3, 10106);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10106))*4);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          j = i2;
          i3 = i2<i1;
          if (i3) goto l29_loop;
l34:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10144))+44);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l37;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10243))+40);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10218))+44);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){114,101,115,117,108,116,45,116,121,112,101,0}), 12, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
l37:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10294))+56);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10301)), 0);
          i1 = i1!=0;
          if (!i1) goto l48;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10327)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,120,99,101,112,116,105,111,110,115,0}), 11, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10393))+56);
          j = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10400)), 0);
          i2 = 0<i1;
          if (!i2) goto l47;
          i2=0;
l42_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10445))+56);
          i3 = _check_pointer(i3, 10452);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10452))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10506))+56);
          i4 = _check_pointer(i4, 10513);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 10513))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10455))+20);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10516))+16);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
          i2 = i2+1;
          j = i2;
          i3 = i2<i1;
          if (i3) goto l42_loop;
l47:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10554)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l48:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10589)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l104;
l50:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9594)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,101,99,111,114,100,0}), 7, 0u);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9643))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l61;
l53_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9705)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l56;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l56:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9791));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l53_loop;
l61:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9830)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l104;
l63:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9303)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,114,114,97,121,0}), 6, 0u);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 9350))+36);
          i1 = !i1;
          if (!i1) goto l66;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9382)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,101,110,103,116,104,0}), 7, 0u);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9425)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l66:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9490))+44);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9516))+40);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){101,108,101,109,101,110,116,45,116,121,112,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9543)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l104;
l68:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9134)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,111,105,110,116,101,114,0}), 8, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9206))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9229))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){112,111,105,110,116,101,114,45,98,97,115,101,0}), 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9253)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l104;
l70:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7469)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,110,97,109,101,0}), 10, 0u);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7520))+36);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l80;
          i1 = (OOC_INT32)resolvedType;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l75;
          i2=0u;
          goto l77;
l75:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7657)))), &_td_OOC_SymbolTable__PredefTypeDesc);
          
l77:
          if (!i2) goto l81;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7990)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8051))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8057))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8051))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8057))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8062)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8015)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 8062)), i1);
          goto l81;
l80:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7588))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7596))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7588))+36);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7596))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7601)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7554)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 7601)), i3);
l81:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8123))+40);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8130))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8123))+40);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8130))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8135)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8091)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 8135)), i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8168))+36);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l84;
          i1 = (OOC_INT32)resolvedType;
          i1 = i1==(OOC_INT32)0;
          
          goto l86;
l84:
          i1=1u;
l86:
          if (i1) goto l88;
          i1 = (OOC_INT32)resolvedType;
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8239)))), &_td_OOC_SymbolTable__PredefTypeDesc));
          
          goto l90;
l88:
          i1=1u;
l90:
          if (!i1) goto l103;
          i1 = (OOC_INT32)resolvedType;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8292)))), &_td_OOC_SymbolTable__TypeVarDesc);
          if (i2) goto l101;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8478))+36);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l96;
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
          goto l100;
l96:
          i1 = (OOC_INT32)OOC_SymbolTable__TypeNameDesc_GetImport((OOC_SymbolTable__TypeName)i0);
          import = (OOC_SymbolTable__Import)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8572))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8588))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8594))+12);
          _copy_8((const void*)(_check_pointer(i2, 8599)),(void*)(OOC_INT32)href,2048);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8669))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8685))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8691))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8669))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8685))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8691))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8696)), 0);
          i3 = (OOC_INT32)repositories;
          i1 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i2, 8696)), i1);
          repModule = (OOC_Repository__Module)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l100;
          i2 = (OOC_INT32)moduleDict;
          ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l100:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8960))+40);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8967))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8960))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8967))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8972)), 0);
          Strings__Append((void*)(_check_pointer(i1, 8972)), i0, (void*)(OOC_INT32)href, 2048);
          goto l102;
l101:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8345))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8345))+20);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8356)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i1);
          id = (OOC_Scanner_InputBuffer__CharArray)i0;
          _copy_8((const void*)"#",(void*)(OOC_INT32)href,2048);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 8429)), 0);
          Strings__Append((void*)(_check_pointer(i0, 8429)), i1, (void*)(OOC_INT32)href, 2048);
l102:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9012)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
l103:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9072)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l104:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(const OOC_CHAR16 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR16 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR16 ,(tag_0d*2))
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11166)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, 0u);
          i0 = (OOC_INT32)type;
          i1 = (OOC_INT32)resolvedType;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11249)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions(OOC_SymbolTable__Record superClass, OOC_SymbolTable__Name name) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Record _class;

          i0 = (OOC_INT32)superClass;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11466))+36);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11518))+36);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11533)))), &_td_OOC_SymbolTable__RecordDesc, 11533);
          _class = (OOC_SymbolTable__Record)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11568))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11568))+48);
          i3 = (OOC_INT32)module;
          i4 = (OOC_INT32)name;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11572)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i4, 0u);
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l5;
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){114,101,100,101,102,105,110,101,100,45,109,101,116,104,111,100,0}), 17, (OOC_SymbolTable__Declaration)i1);
l5:
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions((OOC_SymbolTable__Record)i0, (OOC_SymbolTable__Name)i4);
l6:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteAliasList(OOC_SymbolTable__VarDecl receiver) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__Item i;
          OOC_Scanner_InputBuffer__CharArray id;

          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11935)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){116,121,112,101,45,97,108,105,97,115,45,108,105,115,116,0}), 16, 0u);
          i0 = (OOC_INT32)receiver;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11993))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12005)))), &_td_OOC_SymbolTable__FormalParsDesc, 12005)), 12016))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l11;
l3_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12073)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (!i1) goto l6;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12104)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,97,108,105,97,115,0}), 11, 0u);
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12176))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12181))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12176))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12181))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 12185)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12149)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 12185)), i3);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12208)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
          id = (OOC_Scanner_InputBuffer__CharArray)i1;
          i2 = (OOC_INT32)w;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12259)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12231)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){105,100,0}), 3, (void*)(_check_pointer(i1, 12259)), i3);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12276)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12358));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l11:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12393)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypePars(OOC_SymbolTable__TypePars typePars) {
          register OOC_INT32 i0,i1;
          OOC_SymbolTable__Item i;

          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12540)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){116,121,112,101,45,112,97,114,97,109,101,116,101,114,115,0}), 16, 0u);
          i0 = (OOC_INT32)typePars;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12598))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l11;
l3_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12655)))), &_td_OOC_SymbolTable__TypeDeclDesc);
          if (!i1) goto l6;
          OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12770));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l11:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12805)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l74;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12900)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13736)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14016)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (i1) goto l54;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14198)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l45;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14724)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15334)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15843)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l74;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 15879))+45);
      i1 = !i1;
      if (!i1) goto l74;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("procedure", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16013))+60);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16031))+60);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
      if (!i1) goto l21;
      i1 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16140))+16);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteBaseDefinitions((OOC_SymbolTable__Record)i1, (OOC_SymbolTable__Name)i0);
l21:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16178)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l74;
l24:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15371))+24);
      i1 = i1!=0;
      if (!i1) goto l74;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("field-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15754))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15773))+44);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15795)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l74;
l29:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 14758))+53);
      if (i1) goto l36;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 14835))+52);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 15012))+52);
      if (!i1) goto l40;
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 15082))+55);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15044)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,45,112,97,114,97,109,101,116,101,114,0}), 19, i2);
l40:
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15176))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15195))+44);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 15221))+54);
      if (!i1) goto l43;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteAliasList((OOC_SymbolTable__VarDecl)i0);
l43:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15300)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l74;
l45:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("type-decl", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14307))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14313)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i1) goto l48;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14531))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14550))+44);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      goto l49;
l48:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14394))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14454))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14404)))), &_td_OOC_SymbolTable__TypeVarDesc, 14404)), 14412))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14464)))), &_td_OOC_SymbolTable__TypeVarDesc, 14464)), 14472))+36);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteType(((OOC_CHAR16[]){116,121,112,101,0}), 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
l49:
      i0 = (OOC_INT32)item;
      i1 = OOC_SymbolTable__TypeDeclDesc_HasTypeParameters((OOC_SymbolTable__TypeDecl)i0);
      if (!i1) goto l52;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14647))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14652))+24);
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_WriteTypePars((OOC_SymbolTable__TypePars)i0);
l52:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14690)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l74;
l54:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("const-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14088)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, ((OOC_CHAR16[]){117,110,107,110,111,119,110,0}), 8);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14166)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l74;
l56:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("import-decl", 12, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13840))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13852))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13840))+44);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13852))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13857)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13806)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 13857)), i3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13920))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13932))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13920))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13932))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 13937)), 0);
      i3 = (OOC_INT32)repositories;
      i0 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i0, 13937)), i2);
      moduleRepository = (OOC_Repository__Module)i0;
      OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13984)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l74;
l58:
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem_StartDecl("module-interface", 17, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)OOC_SymbolTable__ModuleDesc_ClassToString((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13066)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (Object__String)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13143))+52);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l61;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13214))+52);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13181)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,105,98,114,97,114,121,45,110,97,109,101,0}), 13, (Object__String)i2);
l61:
      i1 = (OOC_INT32)OOC_SymbolTable__ModuleDesc_CallConvToString((OOC_SymbolTable__Module)i0);
      str = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13359)))), XML_Writer__WriterDesc_AttrObject)),XML_Writer__WriterDesc_AttrObject)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,97,108,108,45,99,111,110,118,0}), 10, (Object__String)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13470))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13476))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13470))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13476))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 13481)), 0);
      i3 = (OOC_INT32)repositories;
      i1 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i1, 13481)), i2);
      moduleRepository = (OOC_Repository__Module)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13515))+8);
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l72;
l64_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13577)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l67;
      OOC_SymbolTable_InterfaceDescr__Write_WriteItem((OOC_SymbolTable__Item)i0);
l67:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13665));
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l64_loop;
l72:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13704)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l74:
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
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16547));
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

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16935))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16941))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16935))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16941))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16946)), 0);
      i2 = (OOC_INT32)repositories;
      i0 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i1, 16946)), i0);
      thisModule = (OOC_Repository__Module)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16977)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 5, 0u);
      baseURI = (URI__HierarchicalURI)i0;
      i1 = (OOC_INT32)modList;
      i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Keys((ADT_Dictionary__Dictionary)i1);
      keys = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17091)), 0);
      i3 = 0<i2;
      if (!i3) goto l8;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 17124);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17124))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17139)))), &_td_OOC_Repository__ModuleDesc, 17139);
      remoteMod = (OOC_Repository__Module)i4;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17158)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){109,111,100,117,108,101,45,114,101,102,0}), 11, 0u);
      i5 = (OOC_INT32)w;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17238))+4);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17238))+4);
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 17244)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17201)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i6, 17244)), i7);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17258)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){114,101,102,45,116,97,114,103,101,116,0}), 11, 0u);
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17301)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i5, ((OOC_CHAR16[]){116,121,112,101,0}), 5, "html", 5);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17368)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i4, 5, 0u);
      remoteURI = (URI__URI)i4;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17447)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i4, (URI__HierarchicalURI)i0);
      relativeURI = (URI__URI)i4;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17492)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i4, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17520)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){114,101,108,97,116,105,118,101,45,117,114,105,0}), 13, (void*)(OOC_INT32)str, 2048);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17571)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17591)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i4);
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
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
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
              i1 = *(OOC_INT32*)((_check_pointer(i0, 18092))+4);
              i2 = 0<i1;
              if (!i2) goto l11;
              i2 = (OOC_INT32)method;
              i3=0;
l3_loop:
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18130));
              i4 = _check_pointer(i4, 18137);
              i5 = OOC_ARRAY_LENGTH(i4, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 18137))*4);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18145)))), &_td_OOC_SymbolTable__DeclarationDesc, 18145)), 18157))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18163))+12);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18194))+16);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18200))+12);
              i4 = (
              _cmp8((const void*)(_check_pointer(i4, 18168)),(const void*)(_check_pointer(i5, 18205))))==0;
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18344)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){98,97,115,101,45,99,108,97,115,115,0}), 11, 0u);
          i0 = (OOC_INT32)record;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18402)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18459))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18465))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18459))+16);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18465))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18470)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18423)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 18470)), i4);
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18518))+56);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18529))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18518))+56);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18529))+12);
          i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18534)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18483)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i3, 18534)), i4);
          i2 = (OOC_INT32)topRecord;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18559)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
          i2 = i2==i1;
          if (i2) goto l3;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18646))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18652))+12);
          _copy_8((const void*)(_check_pointer(i1, 18657)),(void*)(OOC_INT32)href,2048);
          goto l4;
l3:
          _copy_8((const void*)"",(void*)(OOC_INT32)href,2048);
l4:
          Strings__Append("#", 2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18745))+56);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18756))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18745))+56);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18756))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18761)), 0);
          Strings__Append((void*)(_check_pointer(i1, 18761)), i2, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18780)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){104,114,101,102,0}), 5, (void*)(OOC_INT32)href, 2048);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18844))+48);
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18859)))), &_td_OOC_SymbolTable_Namespace__NamespaceDesc, 18859);
          ns = (OOC_SymbolTable_Namespace__Namespace)i1;
          i = 0;
          i2 = *(OOC_INT32*)((_check_pointer(i1, 18895))+4);
          i3 = 0<i2;
          if (!i3) goto l31;
          i3=0;
l7_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18933));
          i4 = _check_pointer(i4, 18944);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 18944))*4);
          item = (OOC_SymbolTable__Item)i4;
          i5 = *(OOC_INT8*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18972)))), &_td_OOC_SymbolTable__DeclarationDesc, 18972)), 18984))+24);
          i5 = i5!=0;
          if (i5) goto l10;
          i5=0u;
          goto l16;
l10:
          i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19042)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i5) goto l13;
          i5 = OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord_NewMethod((OOC_SymbolTable__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19083)))), &_td_OOC_SymbolTable__ProcDeclDesc, 19083)));
          
          goto l16;
l13:
          i5=1u;
l16:
          if (!i5) goto l26;
          i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19121)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (i5) goto l24;
          i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19213)))), &_td_OOC_SymbolTable__ProcDeclDesc);
          if (i5) goto l22;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19207)))), 19207);
          goto l26;
l22:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,109,101,116,104,111,100,0}), 17, (OOC_SymbolTable__Declaration)i4);
          i5 = (OOC_INT32)omitMethod;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 19312)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i4);
          goto l26;
l24:
          OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){105,110,104,101,114,105,116,101,100,45,102,105,101,108,100,0}), 16, (OOC_SymbolTable__Declaration)i4);
l26:
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l7_loop;
l31:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19398))+36);
          i1 = i1!=0;
          if (!i1) goto l34;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19450))+36);
          OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19465)))), &_td_OOC_SymbolTable__RecordDesc, 19465)));
l34:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19505)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)ADT_ArrayList__New(16);
      omitMethod = (ADT_ArrayList__ArrayList)i0;
      i0 = (OOC_INT32)topRecord;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19611))+36);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19664))+36);
      OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses_WriteRecord((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19679)))), &_td_OOC_SymbolTable__RecordDesc, 19679)));
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
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      
l5:
      if (!i0) goto l32;
      i0 = (OOC_INT32)type;
      i1 = (OOC_INT32)extensionDict;
      i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      obj = (Object__Object)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20039)))), &_td_ADT_ArrayList__ArrayListDesc, 20039);
      list = (ADT_ArrayList__ArrayList)i0;
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 20077))+4);
      i2 = 0<i1;
      if (!i2) goto l32;
      i2=0;
l9_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20111));
      i3 = _check_pointer(i3, 20118);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 20118))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20126)))), &_td_OOC_SymbolTable__RecordDesc, 20126)), 20133))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 20141))+8);
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20180)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l12;
      i4=0u;
      goto l13;
l12:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20249));
      i4 = _check_pointer(i4, 20256);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20227)))), &_td_OOC_SymbolTable__TypeDeclDesc, 20227)), 20236))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 20256))*4);
      i4 = i6==i4;
      
l13:
      i4 = !i4;
      if (!i4) goto l26;
l17_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 20289));
      item = (OOC_SymbolTable__Item)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20180)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i4) goto l20;
      i4=0u;
      goto l21;
l20:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20249));
      i4 = _check_pointer(i4, 20256);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20227)))), &_td_OOC_SymbolTable__TypeDeclDesc, 20227)), 20236))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 20256))*4);
      i4 = i6==i4;
      
l21:
      i4 = !i4;
      if (i4) goto l17_loop;
l26:
      OOC_SymbolTable_InterfaceDescr__Write_WriteReference(((OOC_CHAR16[]){107,110,111,119,110,45,101,120,116,101,110,115,105,111,110,0}), 16, (OOC_SymbolTable__Declaration)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20371)))), &_td_OOC_SymbolTable__TypeDeclDesc, 20371)));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20419));
      i3 = _check_pointer(i3, 20426);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 20426))*4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20618)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i0, (URI__HierarchicalURI)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20647)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20683)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20699)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<!DOCTYPE interface-description SYSTEM \047", 41);
  i1 = (OOC_INT32)repositories;
  i1 = (OOC_INT32)OOC_SymbolTable_InterfaceDescr__GetSystemId((OOC_Config_Repositories__Section)i1);
  i2 = OOC_SymbolTable_InterfaceDescr__absoluteDtdSystemId;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20759)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i0, (URI__URI)i1, i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20826)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047>", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21097)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,110,116,101,114,102,97,99,101,45,100,101,115,99,114,105,112,116,105,111,110,0}), 22, 0u);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclAttr((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  OOC_SymbolTable_InterfaceDescr__Write_DeclDocString((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21218))+8);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)(OOC_INT32)0);
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21256))+8);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21310)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21347)))), &_td_OOC_SymbolTable__TypeDeclDesc, 21347)), 21356))+48);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21370)))), &_td_OOC_SymbolTable__RecordDesc);
  
l8:
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21405)))), &_td_OOC_SymbolTable__TypeDeclDesc, 21405)), 21414))+48);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21432)))), &_td_OOC_SymbolTable__RecordDesc, 21432)), 21439))+56);
  i1 = i1!=(OOC_INT32)0;
  
l12:
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21647)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, 0u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21721)))), &_td_OOC_SymbolTable__TypeDeclDesc, 21721)), 21730))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21748)))), &_td_OOC_SymbolTable__RecordDesc, 21748)), 21755))+56);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21766))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21721)))), &_td_OOC_SymbolTable__TypeDeclDesc, 21721)), 21730))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21748)))), &_td_OOC_SymbolTable__RecordDesc, 21748)), 21755))+56);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21766))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 21771)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21685)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 21771)), i3);
  i1 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21849)))), &_td_OOC_SymbolTable__TypeDeclDesc, 21849)), 21858))+48);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21804))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21876)))), &_td_OOC_SymbolTable__RecordDesc, 21876)), 21883))+56);
  OOC_SymbolTable_InterfaceDescr__Write_WriteDeclList((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0);
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21931)))), &_td_OOC_SymbolTable__TypeDeclDesc, 21931)), 21940))+48);
  OOC_SymbolTable_InterfaceDescr__Write_WriteBaseClasses((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21958)))), &_td_OOC_SymbolTable__RecordDesc, 21958)));
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22006)))), &_td_OOC_SymbolTable__TypeDeclDesc, 22006)), 22015))+48);
  OOC_SymbolTable_InterfaceDescr__Write_WriteKnownExtensions((Object__Object)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22033)))), &_td_OOC_SymbolTable__RecordDesc, 22033)));
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22052)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l14:
  i0 = (OOC_INT32)ptr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22088));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)moduleDict;
  OOC_SymbolTable_InterfaceDescr__Write_WriteModuleRef((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22148)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22168)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_SymbolTable_InterfaceDescr_init(void) {

  OOC_SymbolTable_InterfaceDescr__dtdSystemId = (URI__URI)(OOC_INT32)0;
  OOC_SymbolTable_InterfaceDescr__absoluteDtdSystemId = 1u;
  return;
  ;
}

/* --- */
