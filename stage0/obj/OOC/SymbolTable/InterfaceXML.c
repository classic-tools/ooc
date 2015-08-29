#include <OOC/SymbolTable/InterfaceXML.d>
#include <__oo2c.h>
#include <setjmp.h>

static URI__URI OOC_SymbolTable_InterfaceXML__GetSystemId(OOC_Config_Repositories__Section repositories) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_InterfaceXML__dtdSystemId;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (URI__URI)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)repositories;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1420)))), OOC_Config_Repositories__SectionDesc_GetResource)),OOC_Config_Repositories__SectionDesc_GetResource)((OOC_Config_Repositories__Section)i0, "OOC", 4, "xml/module-interface.dtd", 25);
  OOC_SymbolTable_InterfaceXML__dtdSystemId = (URI__URI)i0;
  _assert((i0!=(OOC_INT32)0), 127, 1475);
  return (URI__URI)i0;
l4:
  _failed_function(1288); return 0;
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2322)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)w;
          i1 = (OOC_INT32)decl;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2394))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2400))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2394))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2400))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2405)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2362)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 2405)), i3);
          i0 = *(OOC_INT8*)((_check_pointer(i1, 2426))+24);
          switch (i0) {
          case 0:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2484)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){110,111,0}), 3);
            goto l6;
          case 1:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2553)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){121,101,115,0}), 4);
            goto l6;
          case 2:
            i0 = (OOC_INT32)w;
            OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2625)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){101,120,112,111,114,116,0}), 7, ((OOC_CHAR16[]){114,101,97,100,45,111,110,108,121,0}), 10);
            goto l6;
          default:
            _failed_case(i0, 2417);
            goto l6;
          }
l6:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString(OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)decl;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2781))+28);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l4;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2845))+28);
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
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3213))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3213))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3218)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3179)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i2, 3218)), i0);
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
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3579)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){98,97,115,101,45,99,108,97,115,115,0}), 11, OOC_FALSE);
              i0 = (OOC_INT32)w;
              i1 = (OOC_INT32)baseType;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3885))+52);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3896))+12);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3885))+52);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3896))+12);
              i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3901)), (OOC_INT32)0);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3848)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(_check_pointer(i2, 3901)), i3);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3944)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
              module = (OOC_SymbolTable__Module)i0;
              i2 = (OOC_INT32)w;
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4003))+16);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4009))+12);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4003))+16);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4009))+12);
              i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4014)), (OOC_INT32)0);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3967)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 4014)), i4);
              i2 = (OOC_INT32)repositories;
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4090))+16);
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4096))+12);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4090))+16);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4096))+12);
              i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4101)), (OOC_INT32)0);
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4071)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i2, (void*)(_check_pointer(i3, 4101)), i0);
              i2 = i0!=(OOC_INT32)0;
              moduleRepository = (OOC_Repository__Module)i0;
              if (!i2) goto l3;
              i2 = (OOC_INT32)w;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4238));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4246))+4);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4192)))), XML_Writer__WriterDesc_AttrURI)),XML_Writer__WriterDesc_AttrURI)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,45,98,97,115,101,0}), 16, (URI__URI)i0, OOC_FALSE);
l3:
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4312))+32);
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l6;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4371))+32);
              OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent_WriteBaseClass((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4386)))), &_td_OOC_SymbolTable__RecordDesc, 4386)));
l6:
              i0 = (OOC_INT32)w;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4421)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
              return;
              ;
            }


          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4494)))), &_td_OOC_SymbolTable__TypeNameDesc);
          if (i1) goto l61;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4953)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i1) goto l59;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5152)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l54;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5442)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i1) goto l38;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5952)))), &_td_OOC_SymbolTable__FormalParsDesc);
          if (i1) goto l11;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5946)))), 5946);
          goto l73;
l11:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5983)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){102,111,114,109,97,108,45,112,97,114,97,109,101,116,101,114,115,0}), 18, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6042))+32);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l14;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6092))+32);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i1);
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6153))+44);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6161)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          j = 0;
          if (!i2) goto l22;
          i2=0;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6196))+44);
          i3 = _check_pointer(i3, 6204);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6204))*4);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          j = i2;
          if (i3) goto l17_loop;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6242))+40);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l25;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6341))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6316))+40);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("result-type", 12, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
l25:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6392))+52);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6399)), (OOC_INT32)0);
          i1 = i1!=0;
          if (!i1) goto l36;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6425)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,97,105,115,101,115,0}), 7, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6487))+52);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6494)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          j = 0;
          if (!i2) goto l35;
          i2=0;
l30_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6530))+52);
          i3 = _check_pointer(i3, 6537);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6537))*4);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          j = i2;
          if (i3) goto l30_loop;
l35:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6573)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l36:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6608)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l73;
l38:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5469)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){114,101,99,111,114,100,0}), 7, OOC_FALSE);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5545))+36);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l41;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5638))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5615))+36);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("base-type", 10, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5683))+32);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent_WriteBaseClass((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5698)))), &_td_OOC_SymbolTable__RecordDesc, 5698)));
l41:
          i0 = (OOC_INT32)type;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5741))+8);
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l52;
l44_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5803)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l47;
          OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i0);
l47:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5889));
          i = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l44_loop;
l52:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5928)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l73;
l54:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5178)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,114,114,97,121,0}), 6, OOC_FALSE);
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 5225))+32);
          i1 = !i1;
          if (!i1) goto l57;
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5257)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,101,110,103,116,104,0}), 7, OOC_FALSE);
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5300)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l57:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5365))+40);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5391))+36);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("element-type", 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5418)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l73;
l59:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4981)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,111,105,110,116,101,114,0}), 8, OOC_FALSE);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr((OOC_SymbolTable__Item)i0);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5081))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5104))+32);
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("pointer-base", 13, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5128)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          goto l73;
l61:
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4523)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,45,110,97,109,101,0}), 10, OOC_FALSE);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4574))+32);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l71;
          i1 = (OOC_INT32)resolvedType;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l66;
          i2=OOC_FALSE;
          goto l68;
l66:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4711)))), &_td_OOC_SymbolTable__PredefTypeDesc);
          
l68:
          if (!i2) goto l72;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4769)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4830))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4836))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4830))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4836))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4841)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4794)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i3, 4841)), i1);
          goto l72;
l71:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4642))+32);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4650))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4642))+32);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4650))+12);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4655)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4608)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 4655)), i3);
l72:
          i1 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4902))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4909))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4902))+36);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4909))+12);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4914)), (OOC_INT32)0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4870)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 4914)), i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4929)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l73:
          return;
          ;
        }

        
        void OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType(const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, OOC_SymbolTable__Type type, OOC_SymbolTable__Type resolvedType) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(tag,OOC_CHAR8 ,tag_0d)

          OOC_INITIALIZE_VPAR(tag__ref,tag,OOC_CHAR8 ,tag_0d)
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6757)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)tag, tag_0d, OOC_FALSE);
          i0 = (OOC_INT32)type;
          i1 = (OOC_INT32)resolvedType;
          OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6846)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l65;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6935)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l49;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7530)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7984)))), &_td_OOC_SymbolTable__ConstDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8166)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8363)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8888)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9085)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9370)))), &_td_OOC_SymbolTable__ExceptionNameDesc);
      if (!i1) goto l65;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9430))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9448))+16);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("exception", 10, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      goto l65;
l20:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 9121))+41);
      i1 = !i1;
      if (!i1) goto l65;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("procedure", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_ClassAttr((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9285))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9303))+52);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteTypeComponent((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9331)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l65;
l25:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("field-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9014))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9033))+40);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("type", 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9053)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l65;
l27:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8397))+49);
      if (i1) goto l34;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8474))+48);
      if (i1) goto l32;
      _copy_8((const void*)"var-decl",(void*)(OOC_INT32)element,32);
      goto l35;
l32:
      _copy_8((const void*)"parameter-decl",(void*)(OOC_INT32)element,32);
      goto l35;
l34:
      _copy_8((const void*)"receiver-decl",(void*)(OOC_INT32)element,32);
l35:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl((void*)(OOC_INT32)element, 32, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 8651))+48);
      if (!i1) goto l38;
      i1 = (OOC_INT32)w;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 8721))+50);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8683)))), XML_Writer__WriterDesc_AttrBool)),XML_Writer__WriterDesc_AttrBool)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){118,97,114,105,97,98,108,101,45,112,97,114,97,109,101,116,101,114,0}), 19, i2);
l38:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8815))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8834))+40);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("type", 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8854)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l65;
l40:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("type-decl", 10, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)item;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8290))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8309))+40);
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_WriteType("type", 5, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8329)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l65;
l42:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("const-decl", 11, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8056)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, ((OOC_CHAR16[]){117,110,107,110,111,119,110,0}), 8);
      i0 = (OOC_INT32)item;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8134)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l65;
l44:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("import-decl", 12, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7634))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7646))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7634))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7646))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7651)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7600)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){109,111,100,117,108,101,0}), 7, (void*)(_check_pointer(i2, 7651)), i3);
      i0 = (OOC_INT32)repositories;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7714))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7726))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7714))+40);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7726))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7731)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7697)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 7731)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l47;
      i2 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7868));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7876))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7822)))), XML_Writer__WriterDesc_AttrURI)),XML_Writer__WriterDesc_AttrURI)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,45,98,97,115,101,0}), 16, (URI__URI)i0, OOC_FALSE);
l47:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7952)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      goto l65;
l49:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_StartDecl("module-interface", 17, (OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)repositories;
      i1 = (OOC_INT32)item;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7058))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7064))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7058))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7064))+12);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7069)), (OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7041)))), OOC_Config_Repositories__SectionDesc_GetModule)),OOC_Config_Repositories__SectionDesc_GetModule)((OOC_Config_Repositories__Section)i0, (void*)(_check_pointer(i2, 7069)), i3);
      moduleRepository = (OOC_Repository__Module)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l52;
      i2 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7206));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7214))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7160)))), XML_Writer__WriterDesc_AttrURI)),XML_Writer__WriterDesc_AttrURI)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){114,101,112,111,115,105,116,111,114,121,45,98,97,115,101,0}), 16, (URI__URI)i0, OOC_FALSE);
l52:
      OOC_SymbolTable_InterfaceXML__Write_WriteItem_DeclDocString((OOC_SymbolTable__Declaration)i1);
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7309))+8);
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l63;
l55_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7371)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l58;
      OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i0);
l58:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7459));
      i = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l55_loop;
l63:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7498)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l65:
      return;
      ;
    }


  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i0 = (OOC_INT32)XML_Writer__New((Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  w = (XML_Writer__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9581)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "yes", 4);
  i1 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9618)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i0, (URI__HierarchicalURI)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9647)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9663)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "<!DOCTYPE module-interface SYSTEM \047", 36);
  i1 = (OOC_INT32)repositories;
  i1 = (OOC_INT32)OOC_SymbolTable_InterfaceXML__GetSystemId((OOC_Config_Repositories__Section)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9718)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i0, (URI__URI)i1, OOC_FALSE);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9771)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, "\047>", 3);
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i0, OOC_FALSE);
  OOC_SymbolTable__Prune((OOC_SymbolTable__Module)i0, (ADT_Dictionary__Dictionary)i1);
  OOC_SymbolTable_InterfaceXML__Write_WriteItem((OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9877)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_OOC_SymbolTable_InterfaceXML_init(void) {

  OOC_SymbolTable_InterfaceXML__dtdSystemId = (URI__URI)(OOC_INT32)0;
  return;
  ;
}

/* --- */
