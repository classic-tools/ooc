#include <OOC/C/RuntimeData.d>
#include <__oo2c.h>

void OOC_C_RuntimeData__Write(OOC_C_DeclWriter__Writer declWriter, OOC_SymbolTable__Module symTab, OOC_CHAR8 writeHeader) {
  register OOC_INT32 i0,i1;
  TextRider__Writer w;
  ADT_ArrayList__ArrayList tdNames;
  auto void OOC_C_RuntimeData__Write_Nli();
  auto void OOC_C_RuntimeData__Write_CNli();
  auto void OOC_C_RuntimeData__Write_WriteForm(const OOC_CHAR8 form__ref[], OOC_LEN form_0d);
  auto void OOC_C_RuntimeData__Write_WriteDescrVariable(OOC_SymbolTable__Type type);
  auto void OOC_C_RuntimeData__Write_WriteName(OOC_SymbolTable__Type type);
  auto void OOC_C_RuntimeData__Write_WriteTDRef(OOC_SymbolTable__Type type);
  auto void OOC_C_RuntimeData__Write_ArrayTypeDescr(OOC_SymbolTable__Array array);
  auto void OOC_C_RuntimeData__Write_RecordTypeDescr(OOC_SymbolTable__Record record);
  auto void OOC_C_RuntimeData__Write_PointerTypeDescr(OOC_SymbolTable__Pointer pointer);
  auto void OOC_C_RuntimeData__Write_Traverse(OOC_SymbolTable__Item item, OOC_SymbolTable__ProcDecl proc);
  auto void OOC_C_RuntimeData__Write_ModuleDescr(OOC_SymbolTable__Module module, ADT_ArrayList__ArrayList tdNames);
  auto void OOC_C_RuntimeData__Write_ModuleInit(OOC_SymbolTable__Module module);
    
    void OOC_C_RuntimeData__Write_Nli() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1441)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)' ');
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_CNli() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1651)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ", ", 3);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteForm(const OOC_CHAR8 form__ref[], OOC_LEN form_0d) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(form,OOC_CHAR8 ,form_0d)

      OOC_INITIALIZE_VPAR(form__ref,form,OOC_CHAR8 ,form_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1752)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "RT0__", 6);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1802)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)form, form_0d);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteDescrVariable(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1,i2;
      Object__String name;

      i0 = (OOC_INT32)type;
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1997)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i2);
      i2 = writeHeader;
      if (i2) goto l10;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2087))+20);
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l5;
      i0=OOC_FALSE;
      goto l7;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2126))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2138))+4);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2147)))), &_td_OOC_SymbolTable__ModuleDesc);
      
l7:
      if (!i0) goto l11;
      i0 = (OOC_INT32)tdNames;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2182)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      goto l11;
l10:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2043)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "extern ", 8);
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2216)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "RT0__StructDesc", 16);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2255)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " ", 2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2283)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i0, (Object__String)i1);
      i0 = writeHeader;
      if (i0) goto l14;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2378)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " = {", 5);
      OOC_C_RuntimeData__Write_Nli();
      goto l15;
l14:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2337)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ";", 2);
l15:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteName(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1,i2;

      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)type;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2531))+20);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2609)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'"');
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2656))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2668))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2674))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2656))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2668))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2674))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2679)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2637)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(_check_pointer(i2, 2679)), i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2692)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'"');
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2565)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "NULL", 5);
l4:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteTDRef(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;
      Object__String name;

      i0 = (OOC_INT32)type;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 2833))+30);
      if (i1) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2978)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "NULL", 5);
      goto l4;
l3:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2862)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&", 2);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2941)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i1, (Object__String)i0);
l4:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_ArrayTypeDescr(OOC_SymbolTable__Array array) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Type base;

      i0 = (OOC_INT32)array;
      OOC_C_RuntimeData__Write_WriteDescrVariable((OOC_SymbolTable__Type)i0);
      i1 = writeHeader;
      i1 = !i1;
      if (!i1) goto l7;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 3198))+32);
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3792)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "(RT0__Struct[]){", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3870))+36);
      OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3896)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'}');
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3932)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3987)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 4111))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4094)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i2, 0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 4169))+44);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4151)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strArray", 9);
      goto l6;
l5:
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3240)))), OOC_SymbolTable__ArrayDesc_GetNonOpenElementType)),OOC_SymbolTable__ArrayDesc_GetNonOpenElementType)((OOC_SymbolTable__Array)i0);
      base = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3278)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "(RT0__Struct[]){", 17);
      OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i1);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3369)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'}');
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3405)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3460)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      i2 = *(OOC_INT32*)((_check_pointer(i1, 3571))+24);
      _assert((i2>=0), 127, 3560);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 3618))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3601)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i1, 0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3676)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3658)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strOpenArray", 13);
l6:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4267)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " };", 4);
l7:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_RecordTypeDescr(OOC_SymbolTable__Record record) {
      register OOC_INT32 i0,i1;
      OOC_INT32 len;
      auto OOC_INT32 OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes(OOC_SymbolTable__Type t);
      auto void OOC_C_RuntimeData__Write_RecordTypeDescr_TBProcs(OOC_INT32 tbProcCount);
        
        OOC_INT32 OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes(OOC_SymbolTable__Type t) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 len;
          Object__String name;

          i0 = (OOC_INT32)t;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l6;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4615)))), &_td_OOC_SymbolTable__RecordDesc, 4615)), 4622))+32);
          i1 = OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes((OOC_SymbolTable__Type)i1);
          len = i1;
          i2 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0);
          name = (Object__String)i2;
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4697)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i3, (OOC_CHAR8)'&');
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4727)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i3, (Object__String)i2);
          i2 = (OOC_INT32)record;
          i0 = i0!=i2;
          if (!i0) goto l5;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4789)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)',');
l5:
          return (i1+1);
          goto l7;
l6:
          return -1;
l7:
          _failed_function(4421); return 0;
          ;
        }

        
        void OOC_C_RuntimeData__Write_RecordTypeDescr_TBProcs(OOC_INT32 tbProcCount) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 i;
          OOC_SymbolTable__ProcDecl proc;
          Object__String name;

          i0 = tbProcCount;
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l11;
          i1=0;
l3_loop:
          i2 = i1!=0;
          if (!i2) goto l6;
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5098)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)',');
l6:
          i2 = (OOC_INT32)record;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5156))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5156))+44);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5171)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 5171)), 5180)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5171)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 5171)), i1);
          proc = (OOC_SymbolTable__ProcDecl)i2;
          _assert((i2!=(OOC_INT32)0), 127, 5214);
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5246)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i3, "(void*)", 8);
          i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i2);
          name = (Object__String)i2;
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5335)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i3, (Object__String)i2);
          i1 = i1+1;
          i2 = i1<=i0;
          i = i1;
          if (i2) goto l3_loop;
l11:
          return;
          ;
        }


      i0 = (OOC_INT32)record;
      OOC_C_RuntimeData__Write_WriteDescrVariable((OOC_SymbolTable__Type)i0);
      i1 = writeHeader;
      i1 = !i1;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5472)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "(RT0__Struct[]){", 17);
      i0 = OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes((OOC_SymbolTable__Type)i0);
      len = i0;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5568)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'}');
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5602)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "(void*[]){", 11);
      i0 = (OOC_INT32)record;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 5671))+40);
      OOC_C_RuntimeData__Write_RecordTypeDescr_TBProcs(i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5696)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'}');
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5730)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&_mid", 6);
      i0 = (OOC_INT32)record;
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 5855))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5836)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      i1 = len;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5893)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strRecord", 10);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5990)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " };", 4);
l4:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_PointerTypeDescr(OOC_SymbolTable__Pointer pointer) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)pointer;
      OOC_C_RuntimeData__Write_WriteDescrVariable((OOC_SymbolTable__Type)i0);
      i1 = writeHeader;
      i1 = !i1;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6187)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "(RT0__Struct[]){", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6265))+32);
      OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6286)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'}');
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6320)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6375)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 6501))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6481)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6539)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, -1, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strPointer", 11);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6636)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " };", 4);
l4:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_Traverse(OOC_SymbolTable__Item item, OOC_SymbolTable__ProcDecl proc) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item nested;
      auto OOC_CHAR8 OOC_C_RuntimeData__Write_Traverse_IsParameter(OOC_SymbolTable__Item item);
        
        OOC_CHAR8 OOC_C_RuntimeData__Write_Traverse_IsParameter(OOC_SymbolTable__Item item) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)item;
          i1 = (OOC_INT32)proc;
          i2 = i0!=i1;
          if (i2) goto l3;
          i0=OOC_FALSE;
          goto l9;
l3:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6908)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i2) goto l6;
          i0=OOC_FALSE;
          goto l7;
l6:
          i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6935)))), &_td_OOC_SymbolTable__VarDeclDesc, 6935)), 6943))+48);
          
l7:
          i0 = !i0;
          
l9:
          if (!i0) goto l24;
l11_loop:
          i0 = (OOC_INT32)item;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6983))+4);
          i2 = i0!=i1;
          item = (OOC_SymbolTable__Item)i0;
          if (i2) goto l14;
          i0=OOC_FALSE;
          goto l20;
l14:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6908)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i2) goto l17;
          i0=OOC_FALSE;
          goto l18;
l17:
          i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6935)))), &_td_OOC_SymbolTable__VarDeclDesc, 6935)), 6943))+48);
          
l18:
          i0 = !i0;
          
l20:
          if (i0) goto l11_loop;
l24:
          i0 = (OOC_INT32)item;
          return (i0!=i1);
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7085)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7216)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7335)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l10;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7456)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l28;
      proc = (OOC_SymbolTable__ProcDecl)i0;
      goto l28;
l10:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7367))+30);
      if (!i1) goto l28;
      OOC_C_RuntimeData__Write_PointerTypeDescr((OOC_SymbolTable__Pointer)i0);
      goto l28;
l15:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7247))+30);
      if (!i1) goto l28;
      OOC_C_RuntimeData__Write_RecordTypeDescr((OOC_SymbolTable__Record)i0);
      goto l28;
l20:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7115))+30);
      if (i1) goto l23;
      i0=OOC_FALSE;
      goto l25;
l23:
      i0 = OOC_C_RuntimeData__Write_Traverse_IsParameter((OOC_SymbolTable__Item)i0);
      i0 = !i0;
      
l25:
      if (!i0) goto l28;
      i0 = (OOC_INT32)item;
      OOC_C_RuntimeData__Write_ArrayTypeDescr((OOC_SymbolTable__Array)i0);
l28:
      i0 = (OOC_INT32)item;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7640))+8);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l36;
      i1 = (OOC_INT32)proc;
      
l31_loop:
      OOC_C_RuntimeData__Write_Traverse((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__ProcDecl)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7742));
      nested = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l31_loop;
l36:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_ModuleDescr(OOC_SymbolTable__Module module, ADT_ArrayList__ArrayList tdNames) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7905)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7923)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "static RT0__ModuleDesc _mid = {", 32);
      OOC_C_RuntimeData__Write_Nli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7992)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "(OOC_CHAR8*)\"", 14);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8053))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8059))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8053))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8059))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8064)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8032)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 8064)), i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8075)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\"", 2);
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8115)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "(RT0__Struct[]) {", 18);
      OOC_C_RuntimeData__Write_Nli();
      i0 = (OOC_INT32)tdNames;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 8190))+4);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8211)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i3, "&", 2);
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8260));
      i4 = _check_pointer(i4, 8267);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 8267))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8241)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i3, (Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8271)))), &_td_Object__StringDesc, 8271)));
      OOC_C_RuntimeData__Write_CNli();
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l3_loop;
l8:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8313)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "NULL } };", 10);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8349)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_ModuleInit(OOC_SymbolTable__Module module) {
      register OOC_INT32 i0,i1,i2,i3;
      Object__String name0;
      Object__String name;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i0, OOC_TRUE);
      name0 = (Object__String)i1;
      i2 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i0, OOC_FALSE);
      name = (Object__String)i2;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8589)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8607)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i3, "extern void ", 13);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8646)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i3, (Object__String)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8673)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "() {", 5);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8713))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8719))+12);
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 8724)),(const void*)"RT0"))!=(OOC_INT32)0;
      if (!i0) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8839)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8859)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  RT0__RegisterModule(&_mid);", 30);
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8926)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8944)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  ", 3);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8973)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i0, (Object__String)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8999)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "();", 4);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9029)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9047)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "}", 2);
      return;
      ;
    }


  i0 = (OOC_INT32)declWriter;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9118))+8);
  w = (TextRider__Writer)i0;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  tdNames = (ADT_ArrayList__ArrayList)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9172)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9188)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "/* run-time meta data */", 25);
  i1 = writeHeader;
  i1 = !i1;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9264)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9282)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "static RT0__ModuleDesc _mid;", 29);
l3:
  i0 = (OOC_INT32)symTab;
  OOC_C_RuntimeData__Write_Traverse((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__ProcDecl)(OOC_INT32)0);
  i0 = writeHeader;
  i0 = !i0;
  if (!i0) goto l6;
  i0 = (OOC_INT32)tdNames;
  i1 = (OOC_INT32)symTab;
  OOC_C_RuntimeData__Write_ModuleDescr((OOC_SymbolTable__Module)i1, (ADT_ArrayList__ArrayList)i0);
  i0 = (OOC_INT32)symTab;
  OOC_C_RuntimeData__Write_ModuleInit((OOC_SymbolTable__Module)i0);
l6:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9514)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_OOC_C_RuntimeData_init(void) {

  return;
  ;
}

/* --- */
