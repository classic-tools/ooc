#include <OOC/IA32/Writer.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IA32_Writer__InitWriter(OOC_IA32_Writer__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)(_check_pointer(i0, 1542)) = i1;
  i1 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1559))+4) = i1;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 1610))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 1649))+12) = 1;
  return;
  ;
}

OOC_IA32_Writer__Writer OOC_IA32_Writer__NewWriter(Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IA32_Writer__Writer.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  OOC_IA32_Writer__InitWriter((OOC_IA32_Writer__Writer)i0, (Channel__Channel)i1);
  return (OOC_IA32_Writer__Writer)i0;
  ;
}

void OOC_IA32_Writer__WriterDesc_Newline(OOC_IA32_Writer__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1886))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1886))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1898)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Write(OOC_IA32_Writer__Writer w, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1989))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1989))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2001)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_WriteObject(OOC_IA32_Writer__Writer w, Object__String str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2099))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2099))+4);
  i2 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2111)))), TextRider__WriterDesc_WriteObject)),TextRider__WriterDesc_WriteObject)((TextRider__Writer)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Label(OOC_IA32_Writer__Writer w, Object__String label) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2211))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2211))+4);
  i3 = (OOC_INT32)label;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2223)))), TextRider__WriterDesc_WriteObject)),TextRider__WriterDesc_WriteObject)((TextRider__Writer)i2, (Object__Object)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2251))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2251))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2263)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)':');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2287))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2287))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2299)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Section(OOC_IA32_Writer__Writer w, const OOC_CHAR8 section__ref[], OOC_LEN section_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(section,OOC_CHAR8 ,section_0d)

  OOC_INITIALIZE_VPAR(section__ref,section,OOC_CHAR8 ,section_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2394))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2394))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2406)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)section, section_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2436))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2436))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2448)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Directive(OOC_IA32_Writer__Writer w, const OOC_CHAR8 dir__ref[], OOC_LEN dir_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(dir,OOC_CHAR8 ,dir_0d)

  OOC_INITIALIZE_VPAR(dir__ref,dir,OOC_CHAR8 ,dir_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2543))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2543))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2555)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2584))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2584))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2596)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)dir, dir_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2622))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2622))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2634)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Instr(OOC_IA32_Writer__Writer w, const OOC_CHAR8 instr__ref[], OOC_LEN instr_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(instr,OOC_CHAR8 ,instr_0d)

  OOC_INITIALIZE_VPAR(instr__ref,instr,OOC_CHAR8 ,instr_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2729))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2729))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2741)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2770))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2770))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2782)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)instr, instr_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2810))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2810))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2822)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_StringLiteral(OOC_IA32_Writer__Writer w, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2919))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2919))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2931)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2960))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2960))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2972)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ".string \"", 10);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3006))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3006))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3018)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3044))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3044))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3056)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\"", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3082))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3082))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3094)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

Object__String OOC_IA32_Writer__WriterDesc_GetStringLabel(OOC_IA32_Writer__Writer w, Object_Boxed__String value) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_CHAR8 label[32];
  Object__String s;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3286))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3286))+8);
  i3 = (OOC_INT32)value;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3298)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3420))+12);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)label, 32);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3459))+12);
  *(OOC_INT32*)((_check_pointer(i0, 3459))+12) = (i1+1);
  Strings__Insert(".LC", 4, 0, (void*)(OOC_INT32)label, 32);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)label, 32);
  s = (Object__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3562))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3562))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3574)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  return (Object__String)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3334))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3334))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3346)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3378)))), &_td_Object__StringDesc, 3378));
l4:
  _failed_function(3149); return 0;
  ;
}

void OOC_IA32_Writer__WriterDesc_PushInt(OOC_IA32_Writer__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3698))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3698))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3710)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011pushl $", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3751))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3751))+4);
  i3 = i;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3763)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3788))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3788))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3800)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_PushLabel(OOC_IA32_Writer__Writer w, const OOC_CHAR8 label__ref[], OOC_LEN label_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(label,OOC_CHAR8 ,label_0d)

  OOC_INITIALIZE_VPAR(label__ref,label,OOC_CHAR8 ,label_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3897))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3897))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3909)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011pushl $", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3950))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3950))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3962)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)label, label_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3990))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3990))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4002)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_PopBytes(OOC_IA32_Writer__Writer w, OOC_INT32 bytes) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4094))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4094))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4106)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011addl $", 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4146))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4146))+4);
  i3 = bytes;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4158)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4187))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4187))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4199)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ",%esp", 6);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4229))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4229))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4241)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_WriteStringData(OOC_IA32_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__ObjectArrayPtr strings;
  OOC_INT32 i;
  Object__Object label;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4440)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i0, ".data", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4466)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i0, ".section .rodata", 17);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4514))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4514))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4526)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i2);
  strings = (Object__ObjectArrayPtr)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4566)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4590))+8);
  i5 = _check_pointer(i1, 4616);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4590))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4616))*4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4602)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i7, (Object__Object)i5);
  label = (Object__Object)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4629)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i0, (Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4644)))), &_td_Object__StringDesc, 4644)));
  i4 = _check_pointer(i1, 4676);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 4676))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4686)))), &_td_Object_Boxed__StringDesc, 4686)), 4693));
  i5 = _check_pointer(i1, 4676);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4676))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4686)))), &_td_Object_Boxed__StringDesc, 4686)), 4693));
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4707)))), &_td_Object__String8Desc, 4707)), 4715)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4707)))), &_td_Object__String8Desc, 4707)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4760)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4738)))), OOC_IA32_Writer__WriterDesc_StringLiteral)),OOC_IA32_Writer__WriterDesc_StringLiteral)((OOC_IA32_Writer__Writer)i0, (void*)(_check_pointer(i4, 4760)), i5);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Close(OOC_IA32_Writer__Writer w, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5080))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5092));
  *res = (Msg__Msg)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5108));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5113)))), &_td_Files__FileDesc);
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5140));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5140));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5151)))), &_td_Files__FileDesc, 5151)), 5156)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5151)))), &_td_Files__FileDesc, 5151)));
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5186));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5190));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = i1==(OOC_INT32)0;
  
l8:
  if (!i2) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5236));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5240));
  *res = (Msg__Msg)i1;
  
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5260));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5260));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5264)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5284));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5288));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = i1==(OOC_INT32)0;
  
l16:
  if (!i1) goto l18;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5334));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5338));
  *res = (Msg__Msg)i0;
l18:
  return;
  ;
}

void OOC_OOC_IA32_Writer_init(void) {

  return;
  ;
}

/* --- */
