#include "OOC/IA32/Writer.d"
#include "__oo2c.h"

static void OOC_IA32_Writer__InitWriter(OOC_IA32_Writer__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)(_check_pointer(i0, 1592)) = i1;
  i1 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1609))+4) = i1;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 1660))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 1699))+12) = 1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1936))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1936))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1948)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Write(OOC_IA32_Writer__Writer w, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2039))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2039))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2051)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Label(OOC_IA32_Writer__Writer w, const OOC_CHAR8 label__ref[], OOC_LEN label_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(label,OOC_CHAR8 ,label_0d)

  OOC_INITIALIZE_VPAR(label__ref,label,OOC_CHAR8 ,label_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2152))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2152))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2164)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)label, label_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2192))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2192))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2204)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)':');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2228))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2228))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2240)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Section(OOC_IA32_Writer__Writer w, const OOC_CHAR8 section__ref[], OOC_LEN section_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(section,OOC_CHAR8 ,section_0d)

  OOC_INITIALIZE_VPAR(section__ref,section,OOC_CHAR8 ,section_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2335))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2335))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2347)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)section, section_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2377))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2377))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2389)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Directive(OOC_IA32_Writer__Writer w, const OOC_CHAR8 dir__ref[], OOC_LEN dir_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(dir,OOC_CHAR8 ,dir_0d)

  OOC_INITIALIZE_VPAR(dir__ref,dir,OOC_CHAR8 ,dir_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2484))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2484))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2496)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2525))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2525))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2537)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)dir, dir_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2563))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2563))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2575)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Instr(OOC_IA32_Writer__Writer w, const OOC_CHAR8 instr__ref[], OOC_LEN instr_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(instr,OOC_CHAR8 ,instr_0d)

  OOC_INITIALIZE_VPAR(instr__ref,instr,OOC_CHAR8 ,instr_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2670))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2670))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2682)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2711))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2711))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2723)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)instr, instr_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2751))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2751))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2763)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_StringLiteral(OOC_IA32_Writer__Writer w, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2860))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2860))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2872)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2901))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2901))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2913)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ".string \"", 10);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2947))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2947))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2959)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2985))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2985))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2997)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\"", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3023))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3023))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3035)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

ADT_String__String OOC_IA32_Writer__WriterDesc_GetStringLabel(OOC_IA32_Writer__Writer w, Language_String__Value value) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Object__Object obj;
  OOC_CHAR8 label[32];
  ADT_String__String s;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3242))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3242))+8);
  i3 = (OOC_INT32)value;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3254)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i3);
  if (i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3383))+12);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)label, 32);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3422))+12);
  *(OOC_INT32*)((_check_pointer(i0, 3422))+12) = (i1+1);
  Strings__Insert(".LC", 4, 0, (void*)(OOC_INT32)label, 32);
  i1 = (OOC_INT32)ADT_String__New((void*)(OOC_INT32)label, 32);
  s = (ADT_String__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3520))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3520))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3532)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i3, (ADT_Object__Object)i1);
  return (ADT_String__String)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3290))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3290))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3302)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (ADT_Object__Object)i3);
  obj = (ADT_Object__Object)i0;
  return (ADT_String__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3341)))), &_td_ADT_String__StringDesc, 3341));
l4:
  _failed_function(3090); return 0;
  ;
}

void OOC_IA32_Writer__WriterDesc_PushInt(OOC_IA32_Writer__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3656))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3656))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3668)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011pushl $", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3709))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3709))+4);
  i3 = i;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3721)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3746))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3746))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3758)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_PushLabel(OOC_IA32_Writer__Writer w, const OOC_CHAR8 label__ref[], OOC_LEN label_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(label,OOC_CHAR8 ,label_0d)

  OOC_INITIALIZE_VPAR(label__ref,label,OOC_CHAR8 ,label_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3855))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3855))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3867)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011pushl $", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3908))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3908))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3920)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)label, label_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3948))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3948))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3960)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_PopBytes(OOC_IA32_Writer__Writer w, OOC_INT32 bytes) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4052))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4052))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4064)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011addl $", 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4104))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4104))+4);
  i3 = bytes;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4116)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4145))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4145))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4157)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ",%esp", 6);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4187))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4187))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4199)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_WriteStringData(OOC_IA32_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_Object__ObjectArrayPtr strings;
  OOC_INT32 i;
  ADT_Object__Object label;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4367)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i0, ".data", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4393)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i0, ".section .rodata", 17);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4441))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4441))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4453)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i2);
  strings = (ADT_Object__ObjectArrayPtr)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4493)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4517))+8);
  i5 = _check_pointer(i1, 4543);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4517))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4543))*4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4529)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i7, (ADT_Object__Object)i5);
  label = (ADT_Object__Object)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4578)))), &_td_ADT_String__StringDesc, 4578)), 4585))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4578)))), &_td_ADT_String__StringDesc, 4578)), 4585))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4592)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4556)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i0, (void*)(_check_pointer(i5, 4592)), i4);
  i4 = _check_pointer(i1, 4627);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 4627))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4639)))), &_td_Language_String8__ValueDesc, 4639)), 4645))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 4652))+4);
  i5 = _check_pointer(i1, 4627);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4627))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4639)))), &_td_Language_String8__ValueDesc, 4639)), 4645))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 4652))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 4659)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4603)))), OOC_IA32_Writer__WriterDesc_StringLiteral)),OOC_IA32_Writer__WriterDesc_StringLiteral)((OOC_IA32_Writer__Writer)i0, (void*)(_check_pointer(i4, 4659)), i5);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4979))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4991));
  *res = (Msg__Msg)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5007));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5012)))), &_td_Files__FileDesc);
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5039));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5039));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5050)))), &_td_Files__FileDesc, 5050)), 5055)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5050)))), &_td_Files__FileDesc, 5050)));
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5085));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5089));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = i1==(OOC_INT32)0;
  
l8:
  if (!i2) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5135));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5139));
  *res = (Msg__Msg)i1;
  
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5159));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5159));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5163)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5183));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5187));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = i1==(OOC_INT32)0;
  
l16:
  if (!i1) goto l18;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5233));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5237));
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
