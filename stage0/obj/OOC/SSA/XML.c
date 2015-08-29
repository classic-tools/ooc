#include <OOC/SSA/XML.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SSA_XML__InitWriter(OOC_SSA_XML__Writer w, IO__ByteChannel cw) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cw;
  i1 = (OOC_INT32)XML_UnicodeCodec_Latin1__factory;
  i2 = (OOC_INT32)w;
  XML_Writer__Init((XML_Writer__Writer)i2, (IO__ByteChannel)i0, (XML_UnicodeCodec__Factory)i1, OOC_TRUE, 2);
  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c0));
  *(OOC_INT32*)((_check_pointer(i2, 1562))+72) = i0;
  return;
  ;
}

OOC_SSA_XML__Writer OOC_SSA_XML__NewWriter(IO__ByteChannel cw) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_XML__Writer.baseTypes[0]);
  i1 = (OOC_INT32)cw;
  OOC_SSA_XML__InitWriter((OOC_SSA_XML__Writer)i0, (IO__ByteChannel)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2020))+76);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2020))+76);
  i3 = (OOC_INT32)result;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2027)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  return -1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2069))+76);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2069))+76);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2076)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i3);
  return (_abs(i0));
l4:
  _failed_function(1967); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2321))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2339))+72);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 2343))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2321))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2325)))), ADT_StringBuffer__StringBufferDesc_Delete)),ADT_StringBuffer__StringBufferDesc_Delete)((ADT_StringBuffer__StringBuffer)i3, 0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2359))+72);
  i2 = (OOC_INT32)result;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2397))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2359))+72);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2382)))), OOC_SSA_XML__WriterDesc_GetId)),OOC_SSA_XML__WriterDesc_GetId)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Result)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2363)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i4, (_abs(i3)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2432))+8);
  i1 = i2!=i1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2453))+72);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2453))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2457)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i3, (OOC_CHAR8)'.');
  i1 = *(OOC_INT8*)((_check_pointer(i2, 2511))+4);
  OOC_SSA_Result__GetName(i1, (void*)(OOC_INT32)str, 64);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2533))+72);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2533))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2537)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)str, 64);
  countSameId = 0;
  posSameId = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2625))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2632));
  res = (OOC_SSA__Result)i1;
  i3=0;i4=0;
l3_loop:
  i5 = i1==i2;
  if (!i5) goto l7;
  posSameId = i3;
  i4=i3;
l7:
  i5 = *(OOC_INT8*)((_check_pointer(i1, 2754))+4);
  i6 = *(OOC_INT8*)((_check_pointer(i2, 2770))+4);
  i5 = i5==i6;
  if (!i5) goto l11;
  i3 = i3+1;
  countSameId = i3;
  
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2843));
  res = (OOC_SSA__Result)i1;
  i5 = i1==(OOC_INT32)0;
  if (!i5) goto l3_loop;
l15:
  i1 = i3!=1;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2922))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2922))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2926)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'.');
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2961))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2961))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2965)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i2, i4);
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3032))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3032))+72);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3036)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3015)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, (Object__String)i1);
  return;
  ;
}

void OOC_SSA_XML__WriterDesc_AttrRef(OOC_SSA_XML__Writer w, OOC_SSA__Result res) {
  register OOC_INT32 i0,i1,i2;
  Object__String value;

  i0 = (OOC_INT32)res;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3241)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3460)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3552)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l9;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3656)))), OOC_SSA_XML__WriterDesc_AttrId)),OOC_SSA_XML__WriterDesc_AttrId)((OOC_SSA_XML__Writer)i1, ((OOC_CHAR16[]){97,114,103,114,101,102,0}), 7, (OOC_SSA__Result)i0);
  goto l20;
l9:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3615))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3621))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3627))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3615))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3621))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3627))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3632)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3578)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,100,100,114,101,115,115,45,111,102,0}), 11, (void*)(_check_pointer(i2, 3632)), i0);
  goto l20;
l11:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3520))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3526))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3532))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3520))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3526))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3532))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3537)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3486)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){100,101,99,108,114,101,102,0}), 8, (void*)(_check_pointer(i2, 3537)), i0);
  goto l20;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3271))+44);
  i2 = (OOC_INT32)OOC_SSA__nil;
  i1 = i1==i2;
  if (i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3356))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3356))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3363)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  value = (Object__String)i0;
  
  goto l17;
l16:
  i0 = (OOC_INT32)_c1;
  value = (Object__String)i0;
  
l17:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3399)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,111,110,115,116,45,118,97,108,117,101,0}), 12, (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3438)))), &_td_Object__String8Desc, 3438)));
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3186)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,114,103,114,101,102,0}), 7, ((OOC_CHAR16[]){78,73,76,0}), 4);
l20:
  return;
  ;
}

static OOC_CHAR8 OOC_SSA_XML__Omit(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3786)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
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
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4084))+36);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 4099))+5);
      OOC_SSA_Opcode__GetName(i1, i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4124)))), XML_Writer__WriterDesc_StartTagLatin1)),XML_Writer__WriterDesc_StartTagLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)str, 64, OOC_FALSE);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4278)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){114,101,115,0}), 4, OOC_FALSE);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)res;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4319)))), OOC_SSA_XML__WriterDesc_AttrId)),OOC_SSA_XML__WriterDesc_AttrId)((OOC_SSA_XML__Writer)i0, ((OOC_CHAR16[]){105,100,0}), 3, (OOC_SSA__Result)i1);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4373))+4);
      OOC_SSA_Result__GetName(i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4395)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(OOC_INT32)str, 64);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4444))+5);
      i0 = i0!=0;
      if (!i0) goto l3;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 4512))+5);
      OOC_SSA_Opcode__GetSubclassName(i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4539)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,117,98,99,108,97,115,115,0}), 9, (void*)(OOC_INT32)str, 64);
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4602)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[64];

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4741)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){111,112,110,100,0}), 5, OOC_FALSE);
      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4800))+4);
      OOC_SSA_Opnd__GetName(i1, (void*)(OOC_INT32)str, 64);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4822)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,108,97,115,115,0}), 6, (void*)(OOC_INT32)str, 64);
      i1 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4879));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4864)))), OOC_SSA_XML__WriterDesc_AttrRef)),OOC_SSA_XML__WriterDesc_AttrRef)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Result)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4894)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5237)))), OOC_SSA_XML__WriterDesc_GetId)),OOC_SSA_XML__WriterDesc_GetId)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Result)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5219)))), XML_Writer__WriterDesc_AttrInt)),XML_Writer__WriterDesc_AttrInt)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){105,100,0}), 3, i2);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5274)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5488)))), &_td_OOC_SSA__AddressDesc);
  if (!i2) goto l14;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5551))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5557))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5563))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5551))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5557))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5563))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5568)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5512)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){97,100,100,114,101,115,115,45,111,102,0}), 11, (void*)(_check_pointer(i2, 5568)), i3);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5304))+44);
  i3 = (OOC_INT32)OOC_SSA__nil;
  i2 = i2==i3;
  if (i2) goto l12;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5385))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5385))+44);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5392)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i3);
  value = (Object__String)i2;
  
  goto l13;
l12:
  i2 = (OOC_INT32)_c2;
  value = (Object__String)i2;
  
l13:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5432)))), XML_Writer__WriterDesc_AttrStr)),XML_Writer__WriterDesc_AttrStr)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, (Object__String)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5465)))), &_td_Object__String8Desc, 5465)));
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5595)))), OOC_SSA_XML__WriterDesc_WriteInstrAttr)),OOC_SSA_XML__WriterDesc_WriteInstrAttr)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5643))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l22;
l17_loop:
  OOC_SSA_XML__WriterDesc_WriteInstr_WriteOpnd((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)opnd;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5723))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l17_loop;
l22:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5764));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l30;
l25_loop:
  OOC_SSA_XML__WriterDesc_WriteInstr_WriteResult((OOC_SSA__Result)i0);
  i0 = (OOC_INT32)res;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5844));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l25_loop;
l30:
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5876)))), OOC_SSA_XML__WriterDesc_WriteInstrChildren)),OOC_SSA_XML__WriterDesc_WriteInstrChildren)((OOC_SSA_XML__Writer)i0, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5911)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6241))+76);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6241))+76);
      i2 = (OOC_INT32)instr;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6248)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2);
      i0 = !i0;
      if (!i0) goto l22;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6387))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l10;
l5_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6453));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6458))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6490))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5_loop;
l10:
      i0 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i2);
      i0 = !i0;
      if (!i0) goto l13;
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6564))+76);
      i3 = instrCount;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6564))+76);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6571)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2, (-i3));
      i0 = instrCount;
      instrCount = (i0+1);
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6670))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
l16_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6736));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6741))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6773))+8);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7011))+76);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7011))+76);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7018)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0);
      i2 = i1<0;
      id = i1;
      if (!i2) goto l18;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7112))+76);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7112))+76);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7119)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i0, (-i1));
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7183))+36);
      i1 = i1==10;
      if (i1) goto l15;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7692))+24);
      i2 = i1!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i1;
      if (!i2) goto l14;
l9_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7771));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7776))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7812))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9_loop;
l14:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7853)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Instr)i0);
      goto l18;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7411))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7421));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7426))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7449)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i1, (OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7504)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
      backwardFeed = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7564))+8);
      OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
l18:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7953)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 8113))+76) = i1;
  instrCount = 1;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8179));
  OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8206)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,114,111,99,101,100,117,114,101,45,98,111,100,121,0}), 15, OOC_FALSE);
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8279))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8289))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8295))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8279))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8289))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8295))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8300)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8249)))), XML_Writer__WriterDesc_AttrStringLatin1)),XML_Writer__WriterDesc_AttrStringLatin1)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i2, 8300)), i3);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8325));
  OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
  i0 = includeDeadCode;
  if (!i0) goto l14;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8494))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l14;
l5_loop:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8549))+76);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8549))+76);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8556)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0);
  i1 = !i1;
  if (!i1) goto l8;
  OOC_SSA_XML__WriterDesc_WriteProcBody_AssignId((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)instr;
  OOC_SSA_XML__WriterDesc_WriteProcBody_TraverseInstr((OOC_SSA__Instr)i0);
l8:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8674))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l5_loop;
l14:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8711)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8748)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_SSA_XML__Write(IO__ByteChannel cw, OOC_SSA__ProcBlock pb, OOC_CHAR8 includeDeadCode) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_XML__Writer w;

  i0 = (OOC_INT32)cw;
  i0 = (OOC_INT32)OOC_SSA_XML__NewWriter((IO__ByteChannel)i0);
  w = (OOC_SSA_XML__Writer)i0;
  i1 = (OOC_INT32)pb;
  i2 = includeDeadCode;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9248)))), OOC_SSA_XML__WriterDesc_WriteProcBody)),OOC_SSA_XML__WriterDesc_WriteProcBody)((OOC_SSA_XML__Writer)i0, (OOC_SSA__ProcBlock)i1, i2);
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9555)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9645)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,108,111,99,107,0}), 6, OOC_FALSE);
      goto l4;
l3:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9590)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,108,111,99,107,45,98,114,97,110,99,104,0}), 13, OOC_FALSE);
l4:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9707))+8);
      i2 = i1!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      if (!i2) goto l12;
l7_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9777))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9758)))), OOC_SSA_XML__WriterDesc_WriteInstr)),OOC_SSA_XML__WriterDesc_WriteInstr)((OOC_SSA_XML__Writer)i2, (OOC_SSA__Instr)i3);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9809));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l7_loop;
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9850))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l20;
l15_loop:
      OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9944));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l15_loop;
l20:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9973)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
      return;
      ;
    }

    
    void OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA_Schedule__Block nested;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10158))+8);
      i2 = i1!=(OOC_INT32)0;
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      if (!i2) goto l11;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10223))+12);
      i2 = OOC_SSA_XML__Omit((OOC_SSA__Instr)i2);
      i2 = !i2;
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10248))+76);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10248))+76);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10267))+12);
      i5 = instrCount;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10255)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i4, i5);
      i2 = instrCount;
      instrCount = (i2+1);
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10352));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10393))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l14_loop:
      OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10486));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l14_loop;
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10542)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i0, "1.0", 4, "no", 3);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 10579))+76) = i1;
  i0 = (OOC_INT32)domRoot;
  instrCount = 1;
  OOC_SSA_XML__WriterDesc_WriteSchedule_AssignIds((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10664)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){115,99,104,101,100,117,108,101,0}), 9, OOC_FALSE);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_XML__WriterDesc_WriteSchedule_WriteBlock((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10727)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10758)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
  return;
  ;
}

void OOC_SSA_XML__WriteSchedule(IO__ByteChannel cw, OOC_SSA_Schedule__Block domRoot) {
  register OOC_INT32 i0,i1;
  OOC_SSA_XML__Writer w;

  i0 = (OOC_INT32)cw;
  i0 = (OOC_INT32)OOC_SSA_XML__NewWriter((IO__ByteChannel)i0);
  w = (OOC_SSA_XML__Writer)i0;
  i1 = (OOC_INT32)domRoot;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10939)))), OOC_SSA_XML__WriterDesc_WriteSchedule)),OOC_SSA_XML__WriterDesc_WriteSchedule)((OOC_SSA_XML__Writer)i0, (OOC_SSA_Schedule__Block)i1);
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
