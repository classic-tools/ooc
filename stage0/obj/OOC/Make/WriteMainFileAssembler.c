#include "OOC/Make/WriteMainFileAssembler.d"
#include "__oo2c.h"

void OOC_Make_WriteMainFileAssembler__WriteFile(OOC_Repository__Module module, const OOC_Repository__Module imports__ref[], OOC_LEN imports_0d, Msg__Msg *res) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(imports,OOC_Repository__Module ,imports_0d)
  Channel__Channel ch;
  TextRider__Writer w;
  auto void OOC_Make_WriteMainFileAssembler__WriteFile_WriteModuleName(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, OOC_Repository__Module module, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d);
  auto void OOC_Make_WriteMainFileAssembler__WriteFile_WriteModules(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d);
  auto void OOC_Make_WriteMainFileAssembler__WriteFile_Directive(const OOC_CHAR8 cmd__ref[], OOC_LEN cmd_0d);
  auto void OOC_Make_WriteMainFileAssembler__WriteFile_Instr(const OOC_CHAR8 instr__ref[], OOC_LEN instr_0d);
    
    void OOC_Make_WriteMainFileAssembler__WriteFile_WriteModuleName(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, OOC_Repository__Module module, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(prefix,OOC_CHAR8 ,prefix_0d)
      OOC_ALLOCATE_VPAR(suffix,OOC_CHAR8 ,suffix_0d)
      OOC_CHAR8 str[1024];
      OOC_INT32 i;

      OOC_INITIALIZE_VPAR(prefix__ref,prefix,OOC_CHAR8 ,prefix_0d)
      OOC_INITIALIZE_VPAR(suffix__ref,suffix,OOC_CHAR8 ,suffix_0d)
      i0 = (OOC_INT32)module;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1527))+4);
      _copy_8((_check_pointer(i0, 1533)),(OOC_INT32)str,1024);
      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT32, 1572)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 1600)));
      i1 = i1==(OOC_CHAR8)':';
      if (!i1) goto l6;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 1619))) = (OOC_CHAR8)'_';
l6:
      i0 = i0+1;
      i = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 1572)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (i1) goto l3_loop;
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1669)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)prefix, prefix_0d);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1700)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 1024);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1728)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1759)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      return;
      ;
    }

    
    void OOC_Make_WriteMainFileAssembler__WriteFile_WriteModules(TextRider__Writer w, const OOC_CHAR8 prefix__ref[], OOC_LEN prefix_0d, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d) {
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
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i2, imports_0d, OOC_UINT32, 1970))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 1973))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i2, imports_0d, OOC_UINT32, 1970))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 1973))+12);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1980)))), OOC_SymbolTable__ModuleDesc_NoObjectFile)),OOC_SymbolTable__ModuleDesc_NoObjectFile)((OOC_SymbolTable__Module)i4);
      i3 = !i3;
      if (!i3) goto l6;
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)imports+(_check_index(i2, imports_0d, OOC_UINT32, 2046))*4);
      OOC_Make_WriteMainFileAssembler__WriteFile_WriteModuleName((TextRider__Writer)i1, (void*)(OOC_INT32)prefix, prefix_0d, (OOC_Repository__Module)i3, (void*)(OOC_INT32)suffix, suffix_0d);
l6:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l3_loop;
l11:
      return;
      ;
    }

    
    void OOC_Make_WriteMainFileAssembler__WriteFile_Directive(const OOC_CHAR8 cmd__ref[], OOC_LEN cmd_0d) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(cmd,OOC_CHAR8 ,cmd_0d)

      OOC_INITIALIZE_VPAR(cmd__ref,cmd,OOC_CHAR8 ,cmd_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2168)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)cmd, cmd_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2196)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      return;
      ;
    }

    
    void OOC_Make_WriteMainFileAssembler__WriteFile_Instr(const OOC_CHAR8 instr__ref[], OOC_LEN instr_0d) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(instr,OOC_CHAR8 ,instr_0d)

      OOC_INITIALIZE_VPAR(instr__ref,instr,OOC_CHAR8 ,instr_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2286)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'\011');
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2317)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)instr, instr_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2347)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      return;
      ;
    }


  OOC_INITIALIZE_VPAR(imports__ref,imports,OOC_Repository__Module ,(imports_0d*4))
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2400)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i0, 16, OOC_TRUE, (void*)(OOC_INT32)res);
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  ch = (Channel__Channel)i0;
  if (!i1) goto l10;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive(".text", 6);
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive(".Ltext0:", 9);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr(".align 4", 9);
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive(".globl main", 12);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr(".type \011 main,@function", 23);
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive("main:", 6);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("pushl %ebp", 11);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("movl %esp,%ebp", 15);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("subl $8,%esp", 13);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("movl 8(%ebp),%eax", 18);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("movl %eax,RT0__argc", 20);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("movl 12(%ebp),%eax", 19);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("movl %eax,RT0__argv", 20);
  i0 = (OOC_INT32)w;
  OOC_Make_WriteMainFileAssembler__WriteFile_WriteModules((TextRider__Writer)i0, "\011call OOC_", 11, "_init0", 7);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("xorl %eax,%eax", 15);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("leave", 6);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr("ret", 4);
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive(".Lfe1:", 7);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr(".size\011 main,.Lfe1-main", 23);
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive(".Lscope0:", 10);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr(".text", 6);
  OOC_Make_WriteMainFileAssembler__WriteFile_Directive("Letext:", 8);
  OOC_Make_WriteMainFileAssembler__WriteFile_Instr(".ident\011\"OOC: 0.1\"", 18);
  i0 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3490));
  *res = (Msg__Msg)i0;
  i0 = (OOC_INT32)ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3512)))), &_td_Files__FileDesc, 3512)), 3517)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3512)))), &_td_Files__FileDesc, 3512)));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3541));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*res;
  i1 = i1==(OOC_INT32)0;
  
l7:
  if (!i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3590));
  *res = (Msg__Msg)i0;
l10:
  return;
  ;
}

void OOC_OOC_Make_WriteMainFileAssembler_init(void) {

  return;
  ;
}

/* --- */
