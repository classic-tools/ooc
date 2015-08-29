#include "OOC/SymbolTable/InterfaceXML.d"
#include "__oo2c.h"

static URI__URI OOC_SymbolTable_InterfaceXML__GetSystemId(OOC_Config_Repositories__Section repositories) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_InterfaceXML__dtdSystemId;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (URI__URI)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1414)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/module-interface.dtd", 25);
  OOC_SymbolTable_InterfaceXML__dtdSystemId = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 1469);
  return (URI__URI)i0;
l4:
  _failed_function(1282); return 0;
  ;
}

void OOC_SymbolTable_InterfaceXML__Write(Channel__Writer cw, URI__HierarchicalURI baseURI, OOC_SymbolTable__Module module, OOC_Config_Repositories__Section repositories) {
  register OOC_INT32 i0,i1;
  XML_Writer__Writer w;
  auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem(OOC_SymbolTable__Item item);
    
    void OOC_SymbolTable_InterfaceXML__Write_WriteItem(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Repository__Module moduleRepository;
      OOC_SymbolTable__Item i;
      OOC_CHAR8 element[32];
      auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Declaration decl);
      auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString(OOC_SymbolTable__Declaration decl);
      auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType);
      auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr(OOC_SymbolTable__Item item);
      auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent(OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType);
      auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType);
        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR8 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR8 ,tag_0d)
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2316)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)w;
          i1 = (OOC_INT32)decl;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2388))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2394))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2388))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2394))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2399)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2356)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 2399)), i3);
          i0 = *(OOC_INT8*)((_check_pointer(i1, 2420))+24);
          switch (i0) {
          case 0:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2478)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){110,111,0}), 3);
            goto l6;
          case 1:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2547)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){121,101,115,0}), 4);
            goto l6;
          case 2:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2619)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){114,101,97,100,45,111,110,108,121,0}), 10);
            goto l6;
          default:
            _failed_case(i0, 2411);
            goto l6;
          }
l6:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString(OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)decl;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2775))+28);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l4;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2839))+28);
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)module;
          OOC_Doc_Output_XML__WriteOberonDoc((XML_Writer__Writer)i1, (OOC_Doc__Document)i0, (OOC_SymbolTable__Module)i2, (ADT_Dictionary__Dictionary)(OOC_INT32)0, (OOC_Config_Repositories__Section)(OOC_INT32)0, (ADT_Dictionary__Dictionary)(OOC_INT32)0);
l4:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;
          OOC_SymbolTable__Name _class;

          i0 = (OOC_INT32)item;
          i0 = (OOC_INT32)OOC_SymbolTable_GetClass__GetClass((OOC_SymbolTable__Item)i0);
          i1 = i0!=(OOC_INT32)0;
          _class = (OOC_SymbolTable__Name)i0;
          if (!i1) goto l4;
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3207))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3207))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3212)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3173)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i2, 3212)), i0);
l4:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent(OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Module module;
          OOC_SymbolTable__Item i;
          OOC_INT32 j;
          auto void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent_WriteBaseClass(OOC_SymbolTable__Record baseType);
            
            void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent_WriteBaseClass(OOC_SymbolTable__Record baseType) {
              register OOC_INT32 i0,i1,i2,i3,i4;
              OOC_SymbolTable__Module module;
              OOC_Repository__Module moduleRepository;

              i0 = (OOC_INT32)w;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3573)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){98,97,115,101,45,99,108,97,115,115,0}), 11, OOC_FALSE);
              i0 = (OOC_INT32)w;
              i1 = (OOC_INT32)baseType;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3879))+52);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3890))+12);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3879))+52);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3890))+12);
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3895)), (OOC_INT32)0);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3842)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i2, 3895)), i3);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3938)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
              module = (OOC_SymbolTable__Module)i0;
              i2 = (OOC_INT32)w;
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3997))+16);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4003))+12);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3997))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4003))+12);
              i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4008)), (OOC_INT32)0);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3961)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 4008)), i4);
              i2 = (OOC_INT32)repositories;
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4084))+16);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4090))+12);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4084))+16);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4090))+12);
              i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4095)), (OOC_INT32)0);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4065)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i3, 4095)), i0);
              i2 = i0!=(OOC_INT32)0;
              moduleRepository = (OOC_Repository__Module)i0;
              if (!i2) goto l3;
              i2 = (OOC_INT32)w;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4232));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4240))+4);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4186)))), XML_Writer__WriterDesc_AttrURI)),XML_Writer__WriterDesc_AttrURI)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,45,98,97,115,101,0}), 16, (URI__URI)i0, OOC_FALSE);
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4306))+32);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l6;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4365))+32);
              OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent_WriteBaseClass((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4380)))), &_td_OOC_SymbolTable__RecordDesc, 4380)));
l6:
              i0 = (OOC_INT32)w;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4415)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
              return;
              ;
            }


          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4488)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l50;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4947)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l48;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5146)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5436)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l27;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5946)))), &_td_OOC_SymbolTable__FormalParsDesc);
          if (i1) goto l11;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5940)))), 5940);
          goto l62;
l11:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5977)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){102,111,114,109,97,108,45,112,97,114,97,109,101,116,101,114,115,0}), 18, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6036))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6086))+32);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i1);
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6147))+44);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6155)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          j = 0;
          if (!i2) goto l22;
          i2=0;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6190))+44);
          i3 = _check_pointer(i3, 6198);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6198))*4);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          j = i2;
          if (i3) goto l17_loop;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6236))+40);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6335))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6310))+40);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("result-type", 12, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
l25:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6375)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l62;
l27:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5463)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,101,99,111,114,100,0}), 7, OOC_FALSE);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5539))+36);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l30;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5632))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5609))+36);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("base-type", 10, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5677))+32);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent_WriteBaseClass((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5692)))), &_td_OOC_SymbolTable__RecordDesc, 5692)));
l30:
          i0 = (OOC_INT32)type;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5735))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l41;
l33_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5797)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l36;
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i0);
l36:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5883));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l33_loop;
l41:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5922)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l62;
l43:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5172)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,114,114,97,121,0}), 6, OOC_FALSE);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 5219))+32);
          i1 = !i1;
          if (!i1) goto l46;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5251)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,101,110,103,116,104,0}), 7, OOC_FALSE);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5294)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l46:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5359))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5385))+36);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("element-type", 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5412)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l62;
l48:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4975)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,111,105,110,116,101,114,0}), 8, OOC_FALSE);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5075))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5098))+32);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("pointer-base", 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5122)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l62;
l50:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4517)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,110,97,109,101,0}), 10, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4568))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l60;
          i1 = (OOC_INT32)resolvedType;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l55;
          i2=OOC_FALSE;
          goto l57;
l55:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4705)))), &_td_OOC_SymbolTable__PredefTypeDesc);
          
l57:
          if (!i2) goto l61;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4763)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4824))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4830))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4824))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4830))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4835)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4788)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 4835)), i1);
          goto l61;
l60:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4636))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4644))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4636))+32);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4644))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4649)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4602)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 4649)), i3);
l61:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4896))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4903))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4896))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4903))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4908)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4864)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 4908)), i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4923)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l62:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR8 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR8 ,tag_0d)
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6524)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)type;
          i1 = (OOC_INT32)resolvedType;
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6613)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l61;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6702)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l45;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7297)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7751)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7933)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l36;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8130)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8655)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8852)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l61;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8888))+41);
      i1 = !i1;
      if (!i1) goto l61;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("procedure", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9052))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9070))+52);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9098)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l61;
l21:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("field-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8781))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8800))+40);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("type", 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8820)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l61;
l23:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8164))+49);
      if (i1) goto l30;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8241))+48);
      if (i1) goto l28;
      _copy_8((const void*)"var-decl",(void*)(OOC_INT32)element,32);
      goto l31;
l28:
      _copy_8((const void*)"parameter-decl",(void*)(OOC_INT32)element,32);
      goto l31;
l30:
      _copy_8((const void*)"receiver-decl",(void*)(OOC_INT32)element,32);
l31:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl((void*)(OOC_INT32)element, 32, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8418))+48);
      if (!i1) goto l34;
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 8488))+50);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8450)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,45,112,97,114,97,109,101,116,101,114,0}), 19, i2);
l34:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8582))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8601))+40);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("type", 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8621)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l61;
l36:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("type-decl", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8057))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8076))+40);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("type", 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8096)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l61;
l38:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("const-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7823)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, ((OOC_CHAR16[]){117,110,107,110,111,119,110,0}), 8);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7901)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l61;
l40:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("import-decl", 12, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7401))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7413))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7401))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7413))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7418)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7367)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 7418)), i3);
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7481))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7493))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7481))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7493))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7498)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7464)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 7498)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l43;
      i2 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7635));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7643))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7589)))), XML_Writer__WriterDesc_AttrURI)),XML_Writer__WriterDesc_AttrURI)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,45,98,97,115,101,0}), 16, (URI__URI)i0, OOC_FALSE);
l43:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7719)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l61;
l45:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("module-interface", 17, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)repositories;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6825))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6831))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6825))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6831))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 6836)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6808)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 6836)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l48;
      i2 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6973));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6981))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6927)))), XML_Writer__WriterDesc_AttrURI)),XML_Writer__WriterDesc_AttrURI)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,45,98,97,115,101,0}), 16, (URI__URI)i0, OOC_FALSE);
l48:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7076))+8);
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l59;
l51_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7138)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l54;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i0);
l54:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7226));
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l51_loop;
l59:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7265)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l61:
      return;
      ;
    }


  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9246)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9283)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i0, (URI__HierarchicalURI)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9312)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9328)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<!DOCTYPE module-interface SYSTEM \047", 36);
  i1 = (OOC_INT32)repositories;
  i1 = (OOC_INT32)OOC_SymbolTable_InterfaceXML__GetSystemId((OOC_Config_Repositories__Section)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9383)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i0, (URI__URI)i1, OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9436)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047>", 3);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i0, OOC_FALSE);
  OOC_SymbolTable__Prune((OOC_SymbolTable__Module)i0, (ADT_Dictionary__Dictionary)i1);
  OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9542)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_SymbolTable_InterfaceXML_init(void) {

  OOC_SymbolTable_InterfaceXML__dtdSystemId = (URI__URI)(OOC_INT32)0;
  return;
  ;
}

/* --- */
