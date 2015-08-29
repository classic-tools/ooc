#include <OOC/IA32/Writer.d>
#include <__oo2c.h>

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

void OOC_IA32_Writer__WriterDesc_WriteStr(OOC_IA32_Writer__Writer w, Object__String str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2096))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2096))+4);
  i2 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2108)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i0, (Object__String)i2);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Label(OOC_IA32_Writer__Writer w, Object__String label) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2202))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2202))+4);
  i3 = (OOC_INT32)label;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2214)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i2, (Object__String)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2239))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2239))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2251)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)':');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2275))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2275))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2287)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Section(OOC_IA32_Writer__Writer w, const OOC_CHAR8 section__ref[], OOC_LEN section_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(section,OOC_CHAR8 ,section_0d)

  OOC_INITIALIZE_VPAR(section__ref,section,OOC_CHAR8 ,section_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2382))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2382))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2394)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)section, section_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2424))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2424))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2436)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Directive(OOC_IA32_Writer__Writer w, const OOC_CHAR8 dir__ref[], OOC_LEN dir_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(dir,OOC_CHAR8 ,dir_0d)

  OOC_INITIALIZE_VPAR(dir__ref,dir,OOC_CHAR8 ,dir_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2531))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2531))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2543)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2572))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2572))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2584)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)dir, dir_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2610))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2610))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2622)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_Instr(OOC_IA32_Writer__Writer w, const OOC_CHAR8 instr__ref[], OOC_LEN instr_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(instr,OOC_CHAR8 ,instr_0d)

  OOC_INITIALIZE_VPAR(instr__ref,instr,OOC_CHAR8 ,instr_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2717))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2717))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2729)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2758))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2758))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2770)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)instr, instr_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2798))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2798))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2810)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_StringLiteral(OOC_IA32_Writer__Writer w, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2907))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2907))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2919)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'\011');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2948))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2948))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2960)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ".string \"", 10);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2994))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2994))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3006)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)str, str_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3032))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3032))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3044)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\"", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3070))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3070))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3082)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

Object__String OOC_IA32_Writer__WriterDesc_GetStringLabel(OOC_IA32_Writer__Writer w, Object_Boxed__String value) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_CHAR8 label[32];
  Object__String s;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3274))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3274))+8);
  i3 = (OOC_INT32)value;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3286)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3408))+12);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)label, 32);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3447))+12);
  *(OOC_INT32*)((_check_pointer(i0, 3447))+12) = (i1+1);
  Strings__Insert(".LC", 4, 0, (void*)(OOC_INT32)label, 32);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)label, 32);
  s = (Object__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3550))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3550))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3562)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  return (Object__String)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3322))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3322))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3334)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3366)))), &_td_Object__StringDesc, 3366));
l4:
  _failed_function(3137); return 0;
  ;
}

void OOC_IA32_Writer__WriterDesc_PushInt(OOC_IA32_Writer__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3686))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3686))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3698)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011pushl $", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3739))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3739))+4);
  i3 = i;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3751)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3776))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3776))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3788)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_PushLabel(OOC_IA32_Writer__Writer w, const OOC_CHAR8 label__ref[], OOC_LEN label_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(label,OOC_CHAR8 ,label_0d)

  OOC_INITIALIZE_VPAR(label__ref,label,OOC_CHAR8 ,label_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3885))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3885))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3897)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011pushl $", 9);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3938))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3938))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3950)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)label, label_0d);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3978))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3978))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3990)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_IA32_Writer__WriterDesc_PopBytes(OOC_IA32_Writer__Writer w, OOC_INT32 bytes) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4082))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4082))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4094)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "\011addl $", 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4134))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4134))+4);
  i3 = bytes;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4146)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4175))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4175))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4187)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, ",%esp", 6);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4217))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4217))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4229)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4428)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i0, ".data", 6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4454)))), OOC_IA32_Writer__WriterDesc_Section)),OOC_IA32_Writer__WriterDesc_Section)((OOC_IA32_Writer__Writer)i0, ".section .rodata", 17);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4502))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4502))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4514)))), ADT_Dictionary__DictionaryDesc_Keys)),ADT_Dictionary__DictionaryDesc_Keys)((ADT_Dictionary__Dictionary)i2);
  strings = (Object__ObjectArrayPtr)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4554)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4578))+8);
  i5 = _check_pointer(i1, 4604);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4578))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4604))*4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4590)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i7, (Object__Object)i5);
  label = (Object__Object)i4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4617)))), OOC_IA32_Writer__WriterDesc_Label)),OOC_IA32_Writer__WriterDesc_Label)((OOC_IA32_Writer__Writer)i0, (Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4632)))), &_td_Object__StringDesc, 4632)));
  i4 = _check_pointer(i1, 4664);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 4664))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4674)))), &_td_Object_Boxed__StringDesc, 4674)), 4681));
  i5 = _check_pointer(i1, 4664);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 4664))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4674)))), &_td_Object_Boxed__StringDesc, 4674)), 4681));
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4695)))), &_td_Object__String8Desc, 4695)), 4703)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 4695)))), &_td_Object__String8Desc, 4695)));
  chars = (Object__CharsLatin1)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4748)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4726)))), OOC_IA32_Writer__WriterDesc_StringLiteral)),OOC_IA32_Writer__WriterDesc_StringLiteral)((OOC_IA32_Writer__Writer)i0, (void*)(_check_pointer(i4, 4748)), i5);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5068))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5080));
  *res = (Msg__Msg)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5096));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5101)))), &_td_Files__FileDesc);
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5128));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5128));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5139)))), &_td_Files__FileDesc, 5139)), 5144)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5139)))), &_td_Files__FileDesc, 5139)));
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5174));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5178));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = i1==(OOC_INT32)0;
  
l8:
  if (!i2) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5224));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5228));
  *res = (Msg__Msg)i1;
  
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5248));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5248));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5252)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5272));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5276));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = i1==(OOC_INT32)0;
  
l16:
  if (!i1) goto l18;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5322));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5326));
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
