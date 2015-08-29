#include <OOC/C/RuntimeData.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_C_RuntimeData__Write(OOC_C_DeclWriter__Writer declWriter, OOC_SymbolTable__Module symTab, OOC_C_Naming__QualTypeData qtdData, OOC_CHAR8 writeHeader) {
  register OOC_INT32 i0,i1;
  IO_TextRider__Writer w;
  ADT_ArrayList__ArrayList tdNames;
  auto void OOC_C_RuntimeData__Write_Nli(void);
  auto void OOC_C_RuntimeData__Write_CNli(void);
  auto void OOC_C_RuntimeData__Write_WriteForm(const OOC_CHAR8 form__ref[], OOC_LEN form_0d);
  auto void OOC_C_RuntimeData__Write_WriteDescrVariable(OOC_SymbolTable__Type type);
  auto void OOC_C_RuntimeData__Write_WriteName(OOC_SymbolTable__Type type);
  auto void OOC_C_RuntimeData__Write_WriteTDRef(OOC_SymbolTable__Type type);
  auto void OOC_C_RuntimeData__Write_ArrayTypeDescr(OOC_SymbolTable__Array array);
  auto void OOC_C_RuntimeData__Write_TBProcs(OOC_SymbolTable__Record record, OOC_INT32 tbProcCount);
  auto void OOC_C_RuntimeData__Write_RecordTypeDescr(OOC_SymbolTable__Record record);
  auto void OOC_C_RuntimeData__Write_PointerTypeDescr(OOC_SymbolTable__Pointer pointer);
  auto void OOC_C_RuntimeData__Write_Traverse(OOC_SymbolTable__Item item, OOC_SymbolTable__ProcDecl proc);
  auto void OOC_C_RuntimeData__Write_QualTypeDescr(OOC_C_Naming__QualTypeData qtdData);
  auto void OOC_C_RuntimeData__Write_ModuleDescr(OOC_SymbolTable__Module module, ADT_ArrayList__ArrayList tdNames);
  auto void OOC_C_RuntimeData__Write_ModuleInit(OOC_SymbolTable__Module module);
    
    void OOC_C_RuntimeData__Write_Nli(void) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1519)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 32u);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_CNli(void) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1710)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, ", ", 3);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteForm(const OOC_CHAR8 form__ref[], OOC_LEN form_0d) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(form,OOC_CHAR8 ,form_0d)

      OOC_INITIALIZE_VPAR(form__ref,form,OOC_CHAR8 ,form_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1811)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "RT0__", 6);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1861)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(OOC_INT32)form, form_0d);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteDescrVariable(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1,i2;
      Object__String name;

      i0 = (OOC_INT32)type;
      i1 = (OOC_INT32)qtdData;
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i1);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2065)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i2);
      i2 = writeHeader;
      if (i2) goto l10;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2155))+24);
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l5;
      i0=0u;
      goto l7;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2194))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2206))+4);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2215)))), &_td_OOC_SymbolTable__ModuleDesc);
      
l7:
      if (!i0) goto l11;
      i0 = (OOC_INT32)tdNames;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2250)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      goto l11;
l10:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2111)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "extern ", 8);
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2284)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "RT0__StructDesc", 16);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2323)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " ", 2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2351)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i0, (Object__Object)i1);
      i0 = writeHeader;
      if (i0) goto l14;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2449)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " = {", 5);
      OOC_C_RuntimeData__Write_Nli();
      goto l15;
l14:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2408)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, ";", 2);
l15:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteName(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1,i2;

      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)type;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2602))+24);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2680)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 34u);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2727))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2739))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2745))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2727))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2739))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2745))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2750)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2708)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (void*)(_check_pointer(i2, 2750)), i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2763)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 34u);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2636)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "NULL", 5);
l4:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_WriteTDRef(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;
      Object__String name;

      i0 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2909)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      type = (OOC_SymbolTable__Type)i0;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 2934))+38);
      if (i1) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3091)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "NULL", 5);
      goto l4;
l3:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2963)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "&", 2);
      i1 = (OOC_INT32)qtdData;
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i1);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3051)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i1, (Object__Object)i0);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 3311))+40);
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3961)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "(RT0__Struct[]){", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4039))+44);
      OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4065)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 125u);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4101)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4156)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4212)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 4336))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4319)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i2, 0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 4394))+52);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4376)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strArray", 9);
      goto l6;
l5:
      i1 = (OOC_INT32)OOC_SymbolTable__ArrayDesc_GetNonOpenElementType((OOC_SymbolTable__Array)i0);
      base = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3391)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "(RT0__Struct[]){", 17);
      OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i1);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3482)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 125u);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3518)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3573)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3629)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      i2 = *(OOC_INT32*)((_check_pointer(i1, 3740))+32);
      _assert((i2>=0), 127, 3729);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 3787))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3770)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i2, i1, 0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3827)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strOpenArray", 13);
l6:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4492)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " };", 4);
l7:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_TBProcs(OOC_SymbolTable__Record record, OOC_INT32 tbProcCount) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;
      OOC_SymbolTable__ProcDecl proc;
      Object__String name;

      i = 0;
      i0 = tbProcCount;
      i1 = 0<i0;
      if (!i1) goto l11;
      i1 = (OOC_INT32)record;
      i2=0;
l3_loop:
      i3 = i2!=0;
      if (!i3) goto l6;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4771)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i3, 44u);
l6:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4825))+52);
      i3 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex((OOC_SymbolTable_Namespace__Extended)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4840)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 4840)), i2);
      proc = (OOC_SymbolTable__ProcDecl)i3;
      _assert((i3!=(OOC_INT32)0), 127, 4881);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4911)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i4, "(void*)", 8);
      i3 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i3);
      name = (Object__String)i3;
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4996)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i4, (Object__Object)i3);
      i2 = i2+1;
      i = i2;
      i3 = i2<i0;
      if (i3) goto l3_loop;
l11:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_RecordTypeDescr(OOC_SymbolTable__Record record) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT32 len;
      auto OOC_INT32 OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes(OOC_SymbolTable__Type t);
        
        OOC_INT32 OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes(OOC_SymbolTable__Type t) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 len;
          Object__String name;

          i0 = (OOC_INT32)t;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l6;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5318)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
          t = (OOC_SymbolTable__Type)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5364)))), &_td_OOC_SymbolTable__RecordDesc, 5364)), 5371))+40);
          i1 = OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes((OOC_SymbolTable__Type)i1);
          len = i1;
          i2 = (OOC_INT32)qtdData;
          i2 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i2);
          name = (Object__String)i2;
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5455)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i3, 38u);
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5485)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i3, (Object__Object)i2);
          i2 = (OOC_INT32)record;
          i0 = i0!=i2;
          if (!i0) goto l5;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5550)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 44u);
l5:
          return (i1+1);
          goto l7;
l6:
          return (-1);
l7:
          _failed_function(5142); return 0;
          ;
        }


      i0 = (OOC_INT32)record;
      OOC_C_RuntimeData__Write_WriteDescrVariable((OOC_SymbolTable__Type)i0);
      i1 = writeHeader;
      i1 = !i1;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5724)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "(RT0__Struct[]){", 17);
      i0 = OOC_C_RuntimeData__Write_RecordTypeDescr_BaseTypes((OOC_SymbolTable__Type)i0);
      len = i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5820)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 125u);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5854)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "(void*[]){", 11);
      i1 = (OOC_INT32)record;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5930))+48);
      OOC_C_RuntimeData__Write_TBProcs((OOC_SymbolTable__Record)i1, i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5954)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 125u);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5988)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6044)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i1);
      OOC_C_RuntimeData__Write_CNli();
      i2 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6169))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6150)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i2, i1, 0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6207)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strRecord", 10);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6304)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " };", 4);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6501)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "(RT0__Struct[]){", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6579))+40);
      OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6600)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 125u);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6634)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6689)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "NULL", 5);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6745)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "&_mid", 6);
      OOC_C_RuntimeData__Write_WriteName((OOC_SymbolTable__Type)i0);
      OOC_C_RuntimeData__Write_CNli();
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 6871))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6851)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6909)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i0, (-1), 0);
      OOC_C_RuntimeData__Write_CNli();
      OOC_C_RuntimeData__Write_WriteForm("strPointer", 11);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7006)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " };", 4);
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
          i2=0u;
          goto l9;
l3:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7278)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i2) goto l6;
          i2=0u;
          goto l7;
l6:
          i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7305)))), &_td_OOC_SymbolTable__VarDeclDesc, 7305)), 7313))+56);
          
l7:
          i2 = !i2;
          
l9:
          if (!i2) goto l25;
l12_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7353))+4);
          item = (OOC_SymbolTable__Item)i0;
          i2 = i0!=i1;
          if (i2) goto l15;
          i2=0u;
          goto l21;
l15:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7278)))), &_td_OOC_SymbolTable__VarDeclDesc);
          if (i2) goto l18;
          i2=0u;
          goto l19;
l18:
          i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7305)))), &_td_OOC_SymbolTable__VarDeclDesc, 7305)), 7313))+56);
          
l19:
          i2 = !i2;
          
l21:
          if (i2) goto l12_loop;
l25:
          return (i0!=i1);
          ;
        }


      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7455)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7586)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7705)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l10;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7826)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (!i1) goto l28;
      proc = (OOC_SymbolTable__ProcDecl)i0;
      goto l28;
l10:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7737))+38);
      if (!i1) goto l28;
      OOC_C_RuntimeData__Write_PointerTypeDescr((OOC_SymbolTable__Pointer)i0);
      goto l28;
l15:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7617))+38);
      if (!i1) goto l28;
      OOC_C_RuntimeData__Write_RecordTypeDescr((OOC_SymbolTable__Record)i0);
      goto l28;
l20:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7485))+38);
      if (i1) goto l23;
      i1=0u;
      goto l25;
l23:
      i1 = OOC_C_RuntimeData__Write_Traverse_IsParameter((OOC_SymbolTable__Item)i0);
      i1 = !i1;
      
l25:
      if (!i1) goto l28;
      OOC_C_RuntimeData__Write_ArrayTypeDescr((OOC_SymbolTable__Array)i0);
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8010))+8);
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l36;
      i1 = (OOC_INT32)proc;
      
l31_loop:
      OOC_C_RuntimeData__Write_Traverse((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__ProcDecl)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8112));
      nested = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l31_loop;
l36:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_QualTypeDescr(OOC_C_Naming__QualTypeData qtdData) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;
      auto Object__String OOC_C_RuntimeData__Write_QualTypeDescr_QualTypeName(OOC_SymbolTable__Type t);
      auto OOC_INT32 OOC_C_RuntimeData__Write_QualTypeDescr_BaseTypes(OOC_SymbolTable__Type record, OOC_SymbolTable__Type t);
      auto void OOC_C_RuntimeData__Write_QualTypeDescr_WriteQualTypeDescr(OOC_C_Naming__QualTypeDescr qtd);
        
        Object__String OOC_C_RuntimeData__Write_QualTypeDescr_QualTypeName(OOC_SymbolTable__Type t) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          ADT_StringBuffer__StringBuffer sb;
          OOC_INT32 i;
          OOC_SymbolTable__Module module;

          i0 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
          ADT_StringBuffer__StringBufferDesc_INIT((ADT_StringBuffer__StringBuffer)i0, 128);
          sb = (ADT_StringBuffer__StringBuffer)i0;
          i1 = (OOC_INT32)t;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8463)))), &_td_OOC_SymbolTable__TypeClosureDesc);
          if (i2) goto l3;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8812)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
          module = (OOC_SymbolTable__Module)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8855))+20);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8860))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8855))+20);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8860))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8864)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8835)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i3, 8864)), i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8880)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c0));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8921))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8932))+20);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8937))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8921))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8932))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8937))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8941)), 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8906)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i2, 8941)), i1);
          goto l15;
l3:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8518))+40);
          i2 = (OOC_INT32)OOC_C_RuntimeData__Write_QualTypeDescr_QualTypeName((OOC_SymbolTable__Type)i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8496)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8543)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c1));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8586))+48);
          i = 0;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8596)), 0);
          i3 = 0<i2;
          if (!i3) goto l14;
          i3 = (OOC_INT32)_c2;
          i4=0;
l6_loop:
          i5 = i4!=0;
          if (!i5) goto l9;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8648)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i3);
l9:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8715))+48);
          i5 = _check_pointer(i5, 8725);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8725))*8);
          i5 = (OOC_INT32)OOC_C_RuntimeData__Write_QualTypeDescr_QualTypeName((OOC_SymbolTable__Type)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8693)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i5);
          i4 = i4+1;
          i = i4;
          i5 = i4<i2;
          if (i5) goto l6_loop;
l14:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8764)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c3));
l15:
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8975)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
          return (Object__String)i0;
          ;
        }

        
        OOC_INT32 OOC_C_RuntimeData__Write_QualTypeDescr_BaseTypes(OOC_SymbolTable__Type record, OOC_SymbolTable__Type t) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_INT32 len;
          Object__String name;

          i0 = (OOC_INT32)t;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l6;
          i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__RecordBaseType((OOC_SymbolTable__Type)i0);
          i2 = (OOC_INT32)record;
          i1 = OOC_C_RuntimeData__Write_QualTypeDescr_BaseTypes((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
          len = i1;
          i3 = (OOC_INT32)qtdData;
          i3 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i3);
          name = (Object__String)i3;
          i4 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9338)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i4, 38u);
          i4 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9368)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i4, (Object__Object)i3);
          i0 = i0!=i2;
          if (!i0) goto l5;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9433)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 44u);
l5:
          return (i1+1);
          goto l7;
l6:
          return (-1);
l7:
          _failed_function(9031); return 0;
          ;
        }

        
        void OOC_C_RuntimeData__Write_QualTypeDescr_WriteQualTypeDescr(OOC_C_Naming__QualTypeDescr qtd) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 len;
          OOC_SymbolTable__Record record;
          Object__String name;
          OOC_INT32 i;

          i0 = (OOC_INT32)tdNames;
          i1 = (OOC_INT32)qtd;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9710));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9699)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9773)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9792)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "static ", 8);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9826)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "RT0__StructDesc", 16);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9865)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " ", 2);
          i0 = (OOC_INT32)w;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9909));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9893)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i0, (Object__Object)i2);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9926)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " = {", 5);
          OOC_C_RuntimeData__Write_Nli();
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9977))+4);
          i0 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Deparam((OOC_SymbolTable__TypeClosure)i0);
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9993)))), &_td_OOC_SymbolTable__RecordDesc);
          if (i0) goto l3;
          len = 0;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10421)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "(RT0__Struct[]){", 17);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10484)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "&", 2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10571))+4);
          i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i0);
          i2 = (OOC_INT32)qtdData;
          i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i2);
          name = (Object__String)i0;
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10646)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i2, (Object__Object)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10677)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 125u);
          OOC_C_RuntimeData__Write_CNli();
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10713)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "NULL", 5);
          i0=0;
          goto l4;
l3:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10024)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "(RT0__Struct[]){", 17);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10107))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10117))+4);
          i0 = OOC_C_RuntimeData__Write_QualTypeDescr_BaseTypes((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
          len = i0;
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10136)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 125u);
          OOC_C_RuntimeData__Write_CNli();
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10183)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "(void*[]){", 11);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10250))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10255))+40);
          i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10269)))), &_td_OOC_SymbolTable__RecordDesc, 10269);
          record = (OOC_SymbolTable__Record)i2;
          i3 = *(OOC_INT32*)((_check_pointer(i2, 10310))+48);
          OOC_C_RuntimeData__Write_TBProcs((OOC_SymbolTable__Record)i2, i3);
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10336)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 125u);
          
l4:
          OOC_C_RuntimeData__Write_CNli();
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10788)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "(RT0__Struct[]){", 17);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10859))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10864))+40);
          OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10905))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10910))+48);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10920)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l12;
          i3=0;
l7_loop:
          OOC_C_RuntimeData__Write_CNli();
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10968))+4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10973))+48);
          i4 = _check_pointer(i4, 10983);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10983))*8);
          OOC_C_RuntimeData__Write_WriteTDRef((OOC_SymbolTable__Type)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l7_loop;
l12:
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11016)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, ", NULL}", 8);
          OOC_C_RuntimeData__Write_CNli();
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11065)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, "&_mid", 6);
          OOC_C_RuntimeData__Write_CNli();
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11128)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 34u);
          i2 = (OOC_INT32)w;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11203))+4);
          i3 = (OOC_INT32)OOC_C_RuntimeData__Write_QualTypeDescr_QualTypeName((OOC_SymbolTable__Type)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11174)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i2, (Object__Object)i3);
          i2 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11221)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 34u);
          OOC_C_RuntimeData__Write_CNli();
          i2 = (OOC_INT32)w;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11276))+4);
          i1 = *(OOC_INT32*)((_check_pointer(i1, 11281))+32);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11262)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i2, i1, 0);
          OOC_C_RuntimeData__Write_CNli();
          i1 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11318)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
          OOC_C_RuntimeData__Write_CNli();
          OOC_C_RuntimeData__Write_WriteForm("strQualType", 12);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11425)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, " };", 4);
          return;
          ;
        }


      i0 = (OOC_INT32)qtdData;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11518));
      i = 0;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 11523))+4);
      i1 = 0<i0;
      if (!i1) goto l8;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)qtdData;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11568));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11573));
      i2 = _check_pointer(i2, 11579);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 11579))*4);
      OOC_C_RuntimeData__Write_QualTypeDescr_WriteQualTypeDescr((OOC_C_Naming__QualTypeDescr)i1);
      i1 = i;
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_ModuleDescr(OOC_SymbolTable__Module module, ADT_ArrayList__ArrayList tdNames) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11741)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11759)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "static RT0__ModuleDesc _mid = {", 32);
      OOC_C_RuntimeData__Write_Nli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11828)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "(OOC_CHAR8*)\"", 14);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)module;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11889))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11895))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11889))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11895))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11900)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11868)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(_check_pointer(i2, 11900)), i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11911)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "\"", 2);
      OOC_C_RuntimeData__Write_CNli();
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11951)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "(RT0__Struct[]) {", 18);
      OOC_C_RuntimeData__Write_Nli();
      i0 = (OOC_INT32)tdNames;
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 12026))+4);
      i2 = 0<i1;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12047)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i3, "&", 2);
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12099));
      i4 = _check_pointer(i4, 12106);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 12106))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12077)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i3, (Object__Object)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12110)))), &_td_Object__StringDesc, 12110)));
      OOC_C_RuntimeData__Write_CNli();
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l3_loop;
l8:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12152)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "NULL } };", 10);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12188)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      return;
      ;
    }

    
    void OOC_C_RuntimeData__Write_ModuleInit(OOC_SymbolTable__Module module) {
      register OOC_INT32 i0,i1,i2,i3;
      Object__String name0;
      Object__String name;

      i0 = (OOC_INT32)module;
      i1 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i0, 1u);
      name0 = (Object__String)i1;
      i2 = (OOC_INT32)OOC_C_Naming__NameOfModuleInit((OOC_SymbolTable__Module)i0, 0u);
      name = (Object__String)i2;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12428)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12446)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i3, "extern void ", 13);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12485)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i3, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12515)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, "() {", 5);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12555))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12561))+12);
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 12566)),(const void*)"RT0"))!=0;
      if (!i0) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12681)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12701)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "  RT0__RegisterModule(&_mid);", 30);
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12768)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12786)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "  ", 3);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12815)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i0, (Object__Object)i2);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12844)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "();", 4);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12874)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12892)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "}", 2);
      return;
      ;
    }


  i0 = (OOC_INT32)declWriter;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12963))+8);
  w = (IO_TextRider__Writer)i0;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  tdNames = (ADT_ArrayList__ArrayList)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13017)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13033)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "/* run-time meta data */", 25);
  i1 = writeHeader;
  i1 = !i1;
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13109)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13127)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "static RT0__ModuleDesc _mid;", 29);
l3:
  i0 = (OOC_INT32)symTab;
  OOC_C_RuntimeData__Write_Traverse((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__ProcDecl)(OOC_INT32)0);
  i0 = writeHeader;
  i0 = !i0;
  if (!i0) goto l6;
  i0 = (OOC_INT32)qtdData;
  OOC_C_RuntimeData__Write_QualTypeDescr((OOC_C_Naming__QualTypeData)i0);
  i0 = (OOC_INT32)symTab;
  i1 = (OOC_INT32)tdNames;
  OOC_C_RuntimeData__Write_ModuleDescr((OOC_SymbolTable__Module)i0, (ADT_ArrayList__ArrayList)i1);
  i0 = (OOC_INT32)symTab;
  OOC_C_RuntimeData__Write_ModuleInit((OOC_SymbolTable__Module)i0);
l6:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13389)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  return;
  ;
}

void OOC_OOC_C_RuntimeData_init(void) {
  _c0 = Object__NewLatin1Char(46u);
  _c1 = Object__NewLatin1Char(40u);
  _c2 = Object__NewLatin1Char(44u);
  _c3 = Object__NewLatin1Char(41u);

  return;
  ;
}

/* --- */
