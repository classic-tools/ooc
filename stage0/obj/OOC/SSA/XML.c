#include "OOC/SSA/XML.d"
#include "__oo2c.h"

void OOC_SSA_XML__InitWriter(OOC_SSA_XML__Writer w, Channel__Writer cw) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i2 = (OOC_INT32)w;
  XML_Writer__Init((XML_Writer__Writer)i2, (Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  i0 = (OOC_INT32)ADT_StringBuffer__New("", 1);
  *(OOC_INT32*)((_check_pointer(i2, 1565))+68) = i0;
  return;
  ;
}

OOC_SSA_XML__Writer OOC_SSA_XML__NewWriter(Channel__Writer cw) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_XML__Writer.baseTypes[0]);
  i1 = (OOC_INT32)cw;
  OOC_SSA_XML__InitWriter((OOC_SSA_XML__Writer)i0, (Channel__Writer)i1);
  return (OOC_SSA_XML__Writer)i0;
  ;
}

void OOC_SSA_XML__WriterDesc_WriteInstrAttr(OOC_SSA_XML__Writer w, OOC_SSA__Instr instr) {

  return;
  ;
}

void OOC_SSA_XML__WriterDesc_WriteInstrChildren(OOC_SSA_XML__Writer w, OOC_SSA__Instr instr) {

  return;
  ;
}

OOC_INT32 OOC_SSA_XML__WriterDesc_GetId(OOC_SSA_XML__Writer w, OOC_SSA__Result result) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2023))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2023))+72);
  i3 = (OOC_INT32)result;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2030)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i2, (ADT_Object__Object)i3);
  if (i1) goto l3;
  return -1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2072))+72);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2072))+72);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2079)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i0, (ADT_Object__Object)i3);
  return (_abs(i0));
l4:
  _failed_function(1970); return 0;
  ;
}

void OOC_SSA_XML__WriterDesc_AttrId(OOC_SSA_XML__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, OOC_SSA__Result result) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)
  OOC_CHAR8 str[64];
  OOC_INT32 countSameId;
  OOC_INT32 posSameId;
  OOC_SSA__Result res;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2324))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2342))+68);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 2346));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2324))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2328)))), ADT_StringBuffer__StringBufferDesc_Delete)),ADT_StringBuffer__StringBufferDesc_Delete)((ADT_StringBuffer__StringBuffer)i3, 0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2362))+68);
  i2 = (OOC_INT32)result;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2404))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2362))+68);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2389)))), OOC_SSA_XML__WriterDesc_GetId)),OOC_SSA_XML__WriterDesc_GetId)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Result)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2366)))), ADT_StringBuffer__StringBufferDesc_AppendLongInt)),ADT_StringBuffer__StringBufferDesc_AppendLongInt)((ADT_StringBuffer__StringBuffer)i4, (_abs(i3)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2439))+8);
  i1 = i2!=i1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2460))+68);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2460))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2464)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i3, (OOC_CHAR8)'.');
  i1 = *(OOC_INT8*)((_check_pointer(i2, 2512))+4);
  OOC_SSA_Result__GetName(i1, (void*)(OOC_INT32)str, 64);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2534))+68);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2534))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2538)))), ADT_StringBuffer__StringBufferDesc_AppendString)),ADT_StringBuffer__StringBufferDesc_AppendString)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)str, 64);
  countSameId = 0;
  posSameId = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2626))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2633));
  res = (OOC_SSA__Result)i1;
  i3=0;i4=0;
l3_loop:
  i5 = i1==i2;
  if (!i5) goto l7;
  posSameId = i3;
  i4=i3;
l7:
  i5 = *(OOC_INT8*)((_check_pointer(i1, 2755))+4);
  i6 = *(OOC_INT8*)((_check_pointer(i2, 2771))+4);
  i5 = i5==i6;
  if (!i5) goto l11;
  i3 = i3+1;
  countSameId = i3;
  
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2844));
  res = (OOC_SSA__Result)i1;
  i5 = i1==(OOC_INT32)0;
  if (!i5) goto l3_loop;
l15:
  i1 = i3!=1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2923))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2923))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2927)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'.');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2956))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2956))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2960)))), ADT_StringBuffer__StringBufferDesc_AppendLongInt)),ADT_StringBuffer__StringBufferDesc_AppendLongInt)((ADT_StringBuffer__StringBuffer)i2, i4);
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3041))+68);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3045))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3041))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3045))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3052)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3014)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (void*)(_check_pointer(i1, 3052)), i2);
  return;
  ;
}

void OOC_SSA_XML__WriterDesc_AttrRef(OOC_SSA_XML__Writer w, OOC_SSA__Result res) {
  register OOC_INT32 i0,i1,i2;
  ADT_String__String value;

  i0 = (OOC_INT32)res;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3247)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3480)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3572)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l9;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3676)))), OOC_SSA_XML__WriterDesc_AttrId)),OOC_SSA_XML__WriterDesc_AttrId)((OOC_SSA_XML__Writer)i1, ((OOC_CHAR16[]){97,114,103,114,101,102,0}), 7, (OOC_SSA__Result)i0);
  goto l20;
l9:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3635))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3641))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3647))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3635))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3641))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3647))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3652)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3598)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,100,100,114,101,115,115,45,111,102,0}), 11, (void*)(_check_pointer(i2, 3652)), i0);
  goto l20;
l11:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3540))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3546))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3552))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3540))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3546))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3552))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3557)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3506)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){100,101,99,108,114,101,102,0}), 8, (void*)(_check_pointer(i2, 3557)), i0);
  goto l20;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3277))+44);
  i2 = (OOC_INT32)OOC_SSA__nil;
  i1 = i1==i2;
  if (i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3375))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3375))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3382)))), Language__ValueDesc_ToString)),Language__ValueDesc_ToString)((Language__Value)i0);
  value = (ADT_String__String)i0;
  
  goto l17;
l16:
  i0 = (OOC_INT32)ADT_String__New("NIL", 4);
  value = (ADT_String__String)i0;
  
l17:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3458))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3458))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3465)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3418)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,111,110,115,116,45,118,97,108,117,101,0}), 12, (void*)(_check_pointer(i2, 3465)), i0);
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3192)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,114,103,114,101,102,0}), 7, ((OOC_CHAR16[]){78,73,76,0}), 4);
l20:
  return;
  ;
}

static OOC_CHAR8 OOC_SSA_XML__Omit(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3806)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
  return i0;
  ;
}

void OOC_SSA_XML__WriterDesc_WriteInstr(OOC_SSA_XML__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_String__String value;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Result res;
  auto void OOC_SSA_XML__WriterDesc_WriteInstr_StartTagInstr(XML_Writer__Writer w, OOC_SSA__Instr instr);
  auto void OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult(OOC_SSA__Result res);
  auto void OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd(OOC_SSA__Opnd opnd);
    
    void OOC_SSA_XML__WriterDesc_WriteInstr_StartTagInstr(XML_Writer__Writer w, OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4104))+36);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 4119))+5);
      OOC_SSA_Opcode__GetName(i1, i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4144)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, 64, OOC_FALSE);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4298)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,115,0}), 4, OOC_FALSE);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4339)))), OOC_SSA_XML__WriterDesc_AttrId)),OOC_SSA_XML__WriterDesc_AttrId)((OOC_SSA_XML__Writer)i0, ((OOC_CHAR16[]){105,100,0}), 3, (OOC_SSA__Result)i1);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4393))+4);
      OOC_SSA_Result__GetName(i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4415)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(OOC_INT32)str, 64);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4464))+5);
      i0 = i0!=0;
      if (!i0) goto l3;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4532))+5);
      OOC_SSA_Opcode__GetSubclassName(i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4559)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,117,98,99,108,97,115,115,0}), 9, (void*)(OOC_INT32)str, 64);
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4622)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4761)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){111,112,110,100,0}), 5, OOC_FALSE);
      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4820))+4);
      OOC_SSA_Opnd__GetName(i1, (void*)(OOC_INT32)str, 64);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4842)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(OOC_INT32)str, 64);
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4899));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4884)))), OOC_SSA_XML__WriterDesc_AttrRef)),OOC_SSA_XML__WriterDesc_AttrRef)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Result)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4914)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i0);
  if (!i1) goto l3;
  return;
l3:
  i1 = (OOC_INT32)w;
  OOC_SSA_XML__WriterDesc_WriteInstr_StartTagInstr((XML_Writer__Writer)i1, (OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)instr;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5257)))), OOC_SSA_XML__WriterDesc_GetId)),OOC_SSA_XML__WriterDesc_GetId)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Result)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5239)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,100,0}), 3, i2);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5294)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5522)))), &_td_OOC_SSA__AddressDesc);
  if (!i2) goto l14;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5585))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5591))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5597))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5585))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5591))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5597))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5602)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5546)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,100,100,114,101,115,115,45,111,102,0}), 11, (void*)(_check_pointer(i2, 5602)), i3);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5324))+44);
  i3 = (OOC_INT32)OOC_SSA__nil;
  i2 = i2==i3;
  if (i2) goto l12;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5418))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5418))+44);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5425)))), Language__ValueDesc_ToString)),Language__ValueDesc_ToString)((Language__Value)i3);
  value = (ADT_String__String)i2;
  
  goto l13;
l12:
  i2 = (OOC_INT32)ADT_String__New("NIL", 4);
  value = (ADT_String__String)i2;
  
l13:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5499))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5499))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5506)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5465)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, (void*)(_check_pointer(i3, 5506)), i2);
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5629)))), OOC_SSA_XML__WriterDesc_WriteInstrAttr)),OOC_SSA_XML__WriterDesc_WriteInstrAttr)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5677))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l22;
l17_loop:
  OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)opnd;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5757))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l17_loop;
l22:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5798));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l30;
l25_loop:
  OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult((OOC_SSA__Result)i0);
  i0 = (OOC_INT32)res;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5878));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l25_loop;
l30:
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5910)))), OOC_SSA_XML__WriterDesc_WriteInstrChildren)),OOC_SSA_XML__WriterDesc_WriteInstrChildren)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5945)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_SSA_XML__WriterDesc_WriteProcBody(OOC_SSA_XML__Writer w, OOC_SSA__ProcBlock pb, OOC_CHAR8 includeDeadCode) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 instrCount;
  OOC_SSA__Instr instr;
  auto void OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId(OOC_SSA__Instr instr);
  auto void OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr(OOC_SSA__Instr instr);
    
    void OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6259))+72);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6259))+72);
      i2 = (OOC_INT32)instr;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6266)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i0, (ADT_Object__Object)i2);
      i0 = !i0;
      if (!i0) goto l22;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6405))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l10;
l5_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6471));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6476))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6508))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5_loop;
l10:
      i0 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i2);
      i0 = !i0;
      if (!i0) goto l13;
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6582))+72);
      i3 = instrCount;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6582))+72);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6589)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i0, (ADT_Object__Object)i2, (-i3));
      i0 = instrCount;
      instrCount = (i0+1);
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6688))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
l16_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6754));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6759))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6791))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l16_loop;
l22:
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 id;
      OOC_SSA__Result backwardFeed;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      i1 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i0);
      i1 = !i1;
      if (!i1) goto l18;
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7029))+72);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7029))+72);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7036)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i1, (ADT_Object__Object)i0);
      i2 = i1<0;
      id = i1;
      if (!i2) goto l18;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7130))+72);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7130))+72);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7137)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i2, (ADT_Object__Object)i0, (-i1));
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7201))+36);
      i1 = i1==10;
      if (i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7710))+24);
      i2 = i1!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i1;
      if (!i2) goto l14;
l9_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7789));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7794))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7830))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9_loop;
l14:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7871)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Instr)i0);
      goto l18;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7429))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7439));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7444))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7467)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7522)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
      backwardFeed = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7582))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
l18:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7971)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 8131))+72) = i1;
  instrCount = 1;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8197));
  OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8224)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,45,98,111,100,121,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8297))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8307))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8313))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8297))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8307))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8313))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8318)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8267)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 8318)), i3);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8343));
  OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
  i0 = includeDeadCode;
  if (!i0) goto l14;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8512))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l14;
l5_loop:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8567))+72);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8567))+72);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8574)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i1, (ADT_Object__Object)i0);
  i1 = !i1;
  if (!i1) goto l8;
  OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)instr;
  OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
l8:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8692))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l5_loop;
l14:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8729)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8766)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_SSA_XML__Write(Channel__Writer cw, OOC_SSA__ProcBlock pb, OOC_CHAR8 includeDeadCode) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_XML__Writer w;

  i0 = (OOC_INT32)cw;
  i0 = (OOC_INT32)OOC_SSA_XML__NewWriter((Channel__Writer)i0);
  w = (OOC_SSA_XML__Writer)i0;
  i1 = (OOC_INT32)pb;
  i2 = includeDeadCode;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9250)))), OOC_SSA_XML__WriterDesc_WriteProcBody)),OOC_SSA_XML__WriterDesc_WriteProcBody)((OOC_SSA_XML__Writer)i0, (OOC_SSA__ProcBlock)i1, i2);
  return;
  ;
}

void OOC_SSA_XML__WriterDesc_WriteSchedule(OOC_SSA_XML__Writer w, OOC_SSA_Schedule__Block domRoot) {
  register OOC_INT32 i0,i1;
  OOC_INT32 instrCount;
  auto void OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds(OOC_SSA_Schedule__Block b);
    
    void OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA_Schedule__Block nested;

      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9541)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9631)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,108,111,99,107,0}), 6, OOC_FALSE);
      goto l4;
l3:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9576)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,108,111,99,107,45,98,114,97,110,99,104,0}), 13, OOC_FALSE);
l4:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9693))+8);
      i2 = i1!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      if (!i2) goto l12;
l7_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9763))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9744)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i2, (OOC_SSA__Instr)i3);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9795));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l7_loop;
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9836))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l20;
l15_loop:
      OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9930));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l15_loop;
l20:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9959)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA_Schedule__Block nested;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10144))+8);
      i2 = i1!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      if (!i2) goto l11;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10209))+12);
      i2 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i2);
      i2 = !i2;
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10234))+72);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10234))+72);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10253))+12);
      i5 = instrCount;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10241)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i2, (ADT_Object__Object)i4, i5);
      i2 = instrCount;
      instrCount = (i2+1);
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10338));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10379))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l14_loop:
      OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10472));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l14_loop;
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10528)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 10565))+72) = i1;
  i0 = (OOC_INT32)domRoot;
  instrCount = 1;
  OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10650)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,99,104,101,100,117,108,101,0}), 9, OOC_FALSE);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10713)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10744)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_SSA_XML__WriteSchedule(Channel__Writer cw, OOC_SSA_Schedule__Block domRoot) {
  register OOC_INT32 i0,i1;
  OOC_SSA_XML__Writer w;

  i0 = (OOC_INT32)cw;
  i0 = (OOC_INT32)OOC_SSA_XML__NewWriter((Channel__Writer)i0);
  w = (OOC_SSA_XML__Writer)i0;
  i1 = (OOC_INT32)domRoot;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10909)))), OOC_SSA_XML__WriterDesc_WriteSchedule)),OOC_SSA_XML__WriterDesc_WriteSchedule)((OOC_SSA_XML__Writer)i0, (OOC_SSA_Schedule__Block)i1);
  return;
  ;
}

void OOC_OOC_SSA_XML_init(void) {

  return;
  ;
}

/* --- */
