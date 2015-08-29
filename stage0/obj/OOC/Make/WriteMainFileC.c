#include "OOC/Make/WriteMainFileC.d"
#include "__oo2c.h"

void OOC_Make_WriteMainFileC__WriteFile(OOC_Repository__Module module, const OOC_Repository__Module imports__ref[], OOC_LEN imports_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(imports,OOC_Repository__Module ,imports_0d)
  Channel__Channel ch;
  TextRider__Writer w;
  auto void OOC_Make_WriteMainFileC__WriteFile_WriteModuleName(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, OOC_Repository__Module module, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d);
  auto void OOC_Make_WriteMainFileC__WriteFile_WriteModules(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d);
    
    void OOC_Make_WriteMainFileC__WriteFile_WriteModuleName(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, OOC_Repository__Module module, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(prefix,OOC_CHAR8 ,prefix_0d)
      OOC_ALLOCATE_VPAR(suffix,OOC_CHAR8 ,suffix_0d)
      OOC_CHAR8 str[1024];
      OOC_INT32 i;

      OOC_INITIALIZE_VPAR(prefix__ref,prefix,OOC_CHAR8 ,prefix_0d)
      OOC_INITIALIZE_VPAR(suffix__ref,suffix,OOC_CHAR8 ,suffix_0d)
      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1488))+4);
      _copy_8((const void*)(_check_pointer(i0, 1494)),(void*)(OOC_INT32)str,1024);
      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT32, 1533)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 1561)));
      i1 = i1==(OOC_CHAR8)':';
      if (!i1) goto l6;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 1580))) = (OOC_CHAR8)'_';
l6:
      i0 = i0+1;
      i = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 1533)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (i1) goto l3_loop;
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1630)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)prefix, prefix_0d);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1661)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 1024);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1689)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1720)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      return;
      ;
    }

    
    void OOC_Make_WriteMainFileC__WriteFile_WriteModules(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_ALLOCATE_VPAR(prefix,OOC_CHAR8 ,prefix_0d)
      OOC_ALLOCATE_VPAR(suffix,OOC_CHAR8 ,suffix_0d)
      OOC_INT32 i;

      OOC_INITIALIZE_VPAR(prefix__ref,prefix,OOC_CHAR8 ,prefix_0d)
      OOC_INITIALIZE_VPAR(suffix__ref,suffix,OOC_CHAR8 ,suffix_0d)
      i0 = imports_0d-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l11;
      i1 = (OOC_INT32)w;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i2, imports_0d, OOC_UINT32, 1931))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 1934))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i2, imports_0d, OOC_UINT32, 1931))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 1934))+12);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1941)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i4);
      i3 = !i3;
      if (!i3) goto l6;
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i2, imports_0d, OOC_UINT32, 2007))*4);
      OOC_Make_WriteMainFileC__WriteFile_WriteModuleName((TextRider__Writer)i1, (void*)(OOC_INT32)prefix, prefix_0d, (OOC_Repository__Module)i3, (void*)(OOC_INT32)suffix, suffix_0d);
l6:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l3_loop;
l11:
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(imports__ref,imports,OOC_Repository__Module ,(imports_0d*4))
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2094)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i0, 15, OOC_TRUE, (void*)(OOC_INT32)res);
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  ch = (Channel__Channel)i0;
  if (!i1) goto l10;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2232)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#include \"RT0.oh\"", 18);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2300)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_Make_WriteMainFileC__WriteFile_WriteModules((TextRider__Writer)i0, "extern void OOC_", 17, "_init0(void);", 14);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2379)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2404)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "int main (int argc, char *argv[]) {", 36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2466)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2478)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  RT0__argc = (OOC_INT32)argc;", 31);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2535)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2547)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  RT0__argv = (OOC_CHAR8**)argv;", 33);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2606)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_Make_WriteMainFileC__WriteFile_WriteModules((TextRider__Writer)i0, "  OOC_", 7, "_init0();", 10);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2671)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  return 0;  /* _program_exit_code */", 38);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2735)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2753)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "}", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2781)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2813));
  *res = (Msg__Msg)i0;
  i0 = (OOC_INT32)ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2835)))), &_td_Files__FileDesc, 2835)), 2840)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2835)))), &_td_Files__FileDesc, 2835)));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2864));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  
l7:
  if (!i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2913));
  *res = (Msg__Msg)i0;
l10:
  return;
  ;
}

void OOC_OOC_Make_WriteMainFileC_init(void) {

  return;
  ;
}

/* --- */
