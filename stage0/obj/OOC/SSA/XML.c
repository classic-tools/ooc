#include <OOC/SSA/XML.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SSA_XML__InitWriter(OOC_SSA_XML__Writer w, Channel__Writer cw) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i2 = (OOC_INT32)w;
  XML_Writer__Init((XML_Writer__Writer)i2, (Channel__Writer)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c0));
  *(OOC_INT32*)((_check_pointer(i2, 1561))+68) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2019))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2019))+72);
  i3 = (OOC_INT32)result;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2026)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  return -1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2068))+72);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2068))+72);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2075)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i3);
  return (_abs(i0));
l4:
  _failed_function(1966); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2320))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2338))+68);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 2342))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2320))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2324)))), ADT_StringBuffer__StringBufferDesc_Delete)),ADT_StringBuffer__StringBufferDesc_Delete)((ADT_StringBuffer__StringBuffer)i3, 0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2358))+68);
  i2 = (OOC_INT32)result;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2396))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2358))+68);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2381)))), OOC_SSA_XML__WriterDesc_GetId)),OOC_SSA_XML__WriterDesc_GetId)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Result)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2362)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i4, (_abs(i3)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2431))+8);
  i1 = i2!=i1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2452))+68);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2452))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2456)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i3, (OOC_CHAR8)'.');
  i1 = *(OOC_INT8*)((_check_pointer(i2, 2510))+4);
  OOC_SSA_Result__GetName(i1, (void*)(OOC_INT32)str, 64);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2532))+68);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2532))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2536)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)str, 64);
  countSameId = 0;
  posSameId = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2624))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2631));
  res = (OOC_SSA__Result)i1;
  i3=0;i4=0;
l3_loop:
  i5 = i1==i2;
  if (!i5) goto l7;
  posSameId = i3;
  i4=i3;
l7:
  i5 = *(OOC_INT8*)((_check_pointer(i1, 2753))+4);
  i6 = *(OOC_INT8*)((_check_pointer(i2, 2769))+4);
  i5 = i5==i6;
  if (!i5) goto l11;
  i3 = i3+1;
  countSameId = i3;
  
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2842));
  res = (OOC_SSA__Result)i1;
  i5 = i1==(OOC_INT32)0;
  if (!i5) goto l3_loop;
l15:
  i1 = i3!=1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2921))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2921))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2925)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'.');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2960))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2960))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2964)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i2, i4);
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3031))+68);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3031))+68);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3035)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3014)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (Object__String)i1);
  return;
  ;
}

void OOC_SSA_XML__WriterDesc_AttrRef(OOC_SSA_XML__Writer w, OOC_SSA__Result res) {
  register OOC_INT32 i0,i1,i2;
  Object__String value;

  i0 = (OOC_INT32)res;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3240)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3459)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3551)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l9;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3655)))), OOC_SSA_XML__WriterDesc_AttrId)),OOC_SSA_XML__WriterDesc_AttrId)((OOC_SSA_XML__Writer)i1, ((OOC_CHAR16[]){97,114,103,114,101,102,0}), 7, (OOC_SSA__Result)i0);
  goto l20;
l9:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3614))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3620))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3626))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3614))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3620))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3626))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3631)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3577)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,100,100,114,101,115,115,45,111,102,0}), 11, (void*)(_check_pointer(i2, 3631)), i0);
  goto l20;
l11:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3519))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3525))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3531))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3519))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3525))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3531))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3536)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3485)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){100,101,99,108,114,101,102,0}), 8, (void*)(_check_pointer(i2, 3536)), i0);
  goto l20;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3270))+44);
  i2 = (OOC_INT32)OOC_SSA__nil;
  i1 = i1==i2;
  if (i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3355))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3355))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3362)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  value = (Object__String)i0;
  
  goto l17;
l16:
  i0 = (OOC_INT32)_c1;
  value = (Object__String)i0;
  
l17:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3398)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,111,110,115,116,45,118,97,108,117,101,0}), 12, (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3437)))), &_td_Object__String8Desc, 3437)));
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3185)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,114,103,114,101,102,0}), 7, ((OOC_CHAR16[]){78,73,76,0}), 4);
l20:
  return;
  ;
}

static OOC_CHAR8 OOC_SSA_XML__Omit(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3785)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
  return i0;
  ;
}

void OOC_SSA_XML__WriterDesc_WriteInstr(OOC_SSA_XML__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String value;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Result res;
  auto void OOC_SSA_XML__WriterDesc_WriteInstr_StartTagInstr(XML_Writer__Writer w, OOC_SSA__Instr instr);
  auto void OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult(OOC_SSA__Result res);
  auto void OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd(OOC_SSA__Opnd opnd);
    
    void OOC_SSA_XML__WriterDesc_WriteInstr_StartTagInstr(XML_Writer__Writer w, OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4083))+36);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 4098))+5);
      OOC_SSA_Opcode__GetName(i1, i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4123)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, 64, OOC_FALSE);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4277)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,115,0}), 4, OOC_FALSE);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4318)))), OOC_SSA_XML__WriterDesc_AttrId)),OOC_SSA_XML__WriterDesc_AttrId)((OOC_SSA_XML__Writer)i0, ((OOC_CHAR16[]){105,100,0}), 3, (OOC_SSA__Result)i1);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4372))+4);
      OOC_SSA_Result__GetName(i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4394)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(OOC_INT32)str, 64);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4443))+5);
      i0 = i0!=0;
      if (!i0) goto l3;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4511))+5);
      OOC_SSA_Opcode__GetSubclassName(i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4538)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,117,98,99,108,97,115,115,0}), 9, (void*)(OOC_INT32)str, 64);
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4601)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4740)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){111,112,110,100,0}), 5, OOC_FALSE);
      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4799))+4);
      OOC_SSA_Opnd__GetName(i1, (void*)(OOC_INT32)str, 64);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4821)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(OOC_INT32)str, 64);
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4878));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4863)))), OOC_SSA_XML__WriterDesc_AttrRef)),OOC_SSA_XML__WriterDesc_AttrRef)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Result)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4893)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5236)))), OOC_SSA_XML__WriterDesc_GetId)),OOC_SSA_XML__WriterDesc_GetId)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Result)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5218)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,100,0}), 3, i2);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5273)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5487)))), &_td_OOC_SSA__AddressDesc);
  if (!i2) goto l14;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5550))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5556))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5562))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5550))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5556))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5562))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5567)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5511)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,100,100,114,101,115,115,45,111,102,0}), 11, (void*)(_check_pointer(i2, 5567)), i3);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5303))+44);
  i3 = (OOC_INT32)OOC_SSA__nil;
  i2 = i2==i3;
  if (i2) goto l12;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5384))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5384))+44);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5391)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i3);
  value = (Object__String)i2;
  
  goto l13;
l12:
  i2 = (OOC_INT32)_c2;
  value = (Object__String)i2;
  
l13:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5431)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, (Object__String)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5464)))), &_td_Object__String8Desc, 5464)));
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5594)))), OOC_SSA_XML__WriterDesc_WriteInstrAttr)),OOC_SSA_XML__WriterDesc_WriteInstrAttr)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5642))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l22;
l17_loop:
  OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)opnd;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5722))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l17_loop;
l22:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5763));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l30;
l25_loop:
  OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult((OOC_SSA__Result)i0);
  i0 = (OOC_INT32)res;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5843));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l25_loop;
l30:
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5875)))), OOC_SSA_XML__WriterDesc_WriteInstrChildren)),OOC_SSA_XML__WriterDesc_WriteInstrChildren)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5910)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6224))+72);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6224))+72);
      i2 = (OOC_INT32)instr;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6231)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2);
      i0 = !i0;
      if (!i0) goto l22;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6370))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l10;
l5_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6436));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6441))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6473))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5_loop;
l10:
      i0 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i2);
      i0 = !i0;
      if (!i0) goto l13;
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6547))+72);
      i3 = instrCount;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6547))+72);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6554)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2, (-i3));
      i0 = instrCount;
      instrCount = (i0+1);
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6653))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
l16_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6719));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6724))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6756))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6994))+72);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6994))+72);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7001)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0);
      i2 = i1<0;
      id = i1;
      if (!i2) goto l18;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7095))+72);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7095))+72);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7102)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i0, (-i1));
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7166))+36);
      i1 = i1==10;
      if (i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7675))+24);
      i2 = i1!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i1;
      if (!i2) goto l14;
l9_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7754));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7759))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7795))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9_loop;
l14:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7836)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Instr)i0);
      goto l18;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7394))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7404));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7409))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7432)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7487)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
      backwardFeed = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7547))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
l18:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7936)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 8096))+72) = i1;
  instrCount = 1;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8162));
  OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8189)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,45,98,111,100,121,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8262))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8272))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8278))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8262))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8272))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8278))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8283)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8232)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 8283)), i3);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8308));
  OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
  i0 = includeDeadCode;
  if (!i0) goto l14;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8477))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l14;
l5_loop:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8532))+72);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8532))+72);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8539)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0);
  i1 = !i1;
  if (!i1) goto l8;
  OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)instr;
  OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
l8:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8657))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l5_loop;
l14:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8694)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8731)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9215)))), OOC_SSA_XML__WriterDesc_WriteProcBody)),OOC_SSA_XML__WriterDesc_WriteProcBody)((OOC_SSA_XML__Writer)i0, (OOC_SSA__ProcBlock)i1, i2);
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9506)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9596)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,108,111,99,107,0}), 6, OOC_FALSE);
      goto l4;
l3:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9541)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,108,111,99,107,45,98,114,97,110,99,104,0}), 13, OOC_FALSE);
l4:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9658))+8);
      i2 = i1!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      if (!i2) goto l12;
l7_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9728))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9709)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i2, (OOC_SSA__Instr)i3);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9760));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l7_loop;
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9801))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l20;
l15_loop:
      OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9895));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l15_loop;
l20:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9924)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA_Schedule__Block nested;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10109))+8);
      i2 = i1!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      if (!i2) goto l11;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10174))+12);
      i2 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i2);
      i2 = !i2;
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10199))+72);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10199))+72);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10218))+12);
      i5 = instrCount;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10206)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i4, i5);
      i2 = instrCount;
      instrCount = (i2+1);
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10303));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10344))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l14_loop:
      OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10437));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l14_loop;
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10493)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 10530))+72) = i1;
  i0 = (OOC_INT32)domRoot;
  instrCount = 1;
  OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10615)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,99,104,101,100,117,108,101,0}), 9, OOC_FALSE);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10678)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10709)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10874)))), OOC_SSA_XML__WriterDesc_WriteSchedule)),OOC_SSA_XML__WriterDesc_WriteSchedule)((OOC_SSA_XML__Writer)i0, (OOC_SSA_Schedule__Block)i1);
  return;
  ;
}

void OOC_OOC_SSA_XML_init(void) {
  _c0 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c1 = Object__NewLatin1Region("NIL", 4, (OOC_INT32)0, 3);
  _c2 = Object__NewLatin1Region("NIL", 4, (OOC_INT32)0, 3);

  return;
  ;
}

/* --- */
