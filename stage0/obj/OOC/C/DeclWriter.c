#include <OOC/C/DeclWriter.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_C_DeclWriter__InitWriter(OOC_C_DeclWriter__Writer w, IO__ByteChannel ch, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_C_DeclWriter__InitWriter_CreateBasicType(OOC_INT8 id, const OOC_CHAR8 repr__ref[], OOC_LEN repr_0d);
    
    void OOC_C_DeclWriter__InitWriter_CreateBasicType(OOC_INT8 id, const OOC_CHAR8 repr__ref[], OOC_LEN repr_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(repr,OOC_CHAR8 ,repr_0d)

      OOC_INITIALIZE_VPAR(repr__ref,repr,OOC_CHAR8 ,repr_0d)
      i0 = (OOC_INT32)w;
      i1 = id;
      i2 = (OOC_INT32)OOC_C_DeclWriter__NewBasicType(i1, (void*)(OOC_INT32)repr, repr_0d);
      *(OOC_INT32*)(((_check_pointer(i0, 9603))+24)+(_check_index(i1, 17, OOC_UINT8, 9614))*4) = i2;
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)(_check_pointer(i0, 9687)) = i1;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 9704))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 9731))+20) = 0;
  i1 = (OOC_INT32)IO_TextRider__ConnectWriter((IO__ByteChannel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 9761))+8) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 9812))+12) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 9850))+16) = i1;
  OOC_C_DeclWriter__InitWriter_CreateBasicType(0, "void", 5);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(1, "OOC_PTR", 8);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(2, "OOC_INT8", 9);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(3, "OOC_INT16", 10);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(4, "OOC_INT32", 10);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(5, "OOC_INT64", 10);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(6, "OOC_UINT8", 10);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(7, "OOC_UINT16", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(8, "OOC_UINT32", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(9, "OOC_UINT64", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(10, "OOC_CHAR8", 10);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(11, "OOC_CHAR16", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(12, "OOC_CHAR32", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(13, "OOC_REAL32", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(14, "OOC_REAL64", 11);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(15, "OOC_LEN", 8);
  OOC_C_DeclWriter__InitWriter_CreateBasicType(16, "RT0__Struct", 12);
  return;
  ;
}

OOC_C_DeclWriter__Writer OOC_C_DeclWriter__NewWriter(IO__ByteChannel ch, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Writer.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)baseURI;
  OOC_C_DeclWriter__InitWriter((OOC_C_DeclWriter__Writer)i0, (IO__ByteChannel)i1, (URI__HierarchicalURI)i2);
  return (OOC_C_DeclWriter__Writer)i0;
  ;
}

void OOC_C_DeclWriter__WriterDesc_CopyTo(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Writer dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)dest;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11354));
  *(OOC_INT32*)(_check_pointer(i0, 11345)) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11382))+4);
  *(OOC_INT32*)((_check_pointer(i0, 11368))+4) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11418))+8);
  *(OOC_INT32*)((_check_pointer(i0, 11401))+8) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11455))+12);
  *(OOC_INT32*)((_check_pointer(i0, 11440))+12) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11494))+16);
  *(OOC_INT32*)((_check_pointer(i0, 11475))+16) = i2;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11536))+20);
  *(OOC_INT32*)((_check_pointer(i0, 11518))+20) = i2;
  _copy_block(((_check_pointer(i1, 11575))+24),((_check_pointer(i0, 11559))+24),68);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteString(OOC_C_DeclWriter__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11682))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11682))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11694)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteObject(OOC_C_DeclWriter__Writer w, Object__Object obj) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11804))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11804))+8);
  i2 = (OOC_INT32)obj;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11815)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteChar(OOC_C_DeclWriter__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11912))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11912))+8);
  i2 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11924)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, i2);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteLn(OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12006))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12006))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12018)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteLInt(OOC_C_DeclWriter__Writer w, OOC_INT32 lint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12118))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12118))+8);
  i2 = lint;
  i3 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12130)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i0, i2, i3);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_Indent(OOC_C_DeclWriter__Writer w, OOC_INT32 delta) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12296))+20);
  i2 = delta;
  *(OOC_INT32*)((_check_pointer(i0, 12296))+20) = (i1+i2);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_Newline(OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12403)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i = 1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12433))+20);
  i2 = 1<=i1;
  if (!i2) goto l8;
  i2=1;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12457)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "  ", 3);
  i2 = i2+1;
  i = i2;
  i3 = i2<=i1;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteInclude(OOC_C_DeclWriter__Writer w, const OOC_CHAR8 includePath__ref[], OOC_LEN includePath_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(includePath,OOC_CHAR8 ,includePath_0d)

  OOC_INITIALIZE_VPAR(includePath__ref,includePath,OOC_CHAR8 ,includePath_0d)
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12670)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include <", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12705)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)includePath, includePath_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12739)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12765)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_Close(OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12903));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12903));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12906)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i0);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteConst(OOC_C_DeclWriter__Writer w, Object_Boxed__Object value, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  register OOC_REAL64 d0;
  Object__String s;
  OOC_INT32 charValue;
  OOC_INT32 i;
  OOC_INT32 len;
  OOC_CHAR8 paren;
  auto void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct(OOC_INT32 ch);
  auto void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(OOC_INT32 charValue);
    
    void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct(OOC_INT32 ch) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      i1 = ch;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13538)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (i1+48));
      return;
      ;
    }

    
    void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(OOC_INT32 charValue) {
      register OOC_INT32 i0,i1;

      i0 = charValue;
      i1 = i0<32;
      if (i1) goto l3;
      i1 = i0>=127;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = i0==39;
      
      goto l9;
l7:
      i1=1u;
l9:
      if (i1) goto l11;
      i1 = i0==92;
      
      goto l13;
l11:
      i1=1u;
l13:
      if (i1) goto l15;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13924)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
      goto l16;
l15:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13774)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 92u);
      OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct((i0>>6));
      OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct((_mod((i0>>3),8)));
      OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct((_mod(i0,8)));
l16:
      return;
      ;
    }


  i0 = (OOC_INT32)value;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l111;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14070)))), &_td_Object_Boxed__BooleanDesc);
  if (i1) goto l105;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14244)))), &_td_Object_Boxed__StringDesc);
  if (i1) goto l38;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16823)))), &_td_Object_Boxed__LongRealDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17130)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17721)))), &_td_Object_Boxed__SetDesc);
  if (i1) goto l13;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17714)))), 17714);
  goto l112;
l13:
  i1 = (OOC_INT32)w;
  i0 = *(OOC_UINT32*)(_check_pointer(i0, 17796));
  i0 = (OOC_INT32)Object_BigInt__NewInt((_type_cast_fast(OOC_INT32, OOC_UINT32, i0)));
  i2 = (OOC_INT32)type;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17745)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, (OOC_SymbolTable__Type)i2);
  goto l112;
l15:
  i1 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)i0);
  i1 = i1==(-2147483647-1);
  if (i1) goto l24;
  i1 = Object_BigInt__BigIntDesc_Sign((Object_BigInt__BigInt)i0);
  paren = (i1<0);
  if (!(i1<0)) goto l20;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17571)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(", 2);
l20:
  i2 = (OOC_INT32)w;
  i0 = (OOC_INT32)Object_BigInt__BigIntDesc_ToString((Object_BigInt__BigInt)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17605)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  if (!(i1<0)) goto l112;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17663)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ")", 2);
  goto l112;
l24:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17395)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(-", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17428)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, 2147483647, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17471)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "-1)", 4);
  goto l112;
l27:
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 16866));
  paren = (d0<0.0000000000000000);
  if (!(d0<0.0000000000000000)) goto l30;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16902)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
l30:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16953)))), Object_Boxed__LongRealDesc_ToString)),Object_Boxed__LongRealDesc_ToString)((Object_Boxed__LongReal)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16934)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 8);
  if (!i0) goto l34;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17029)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "f", 2);
l34:
  if (!(d0<0.0000000000000000)) goto l112;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17085)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
  goto l112;
l38:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14280));
  s = (Object__String)i0;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 1);
  if (i2) goto l86;
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  if (i2) goto l63;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16169)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16169)), 16180))+40);
  switch (i1) {
  case 14:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16239)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "((OOC_CHAR16[]){", 17);
    goto l47;
  case 15:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16327)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "((OOC_CHAR32[]){", 17);
    goto l47;
  default:
    _failed_case(i1, 16155);
    goto l47;
  }
l47:
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16408));
  len = i1;
  i2 = (OOC_INT32)w;
  i3 = 0!=i1;
  if (i3) goto l50;
  i0=0;
  goto l59;
l50:
  i3=0;
l51_loop:
  i3 = i3!=0;
  if (!i3) goto l54;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16495)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
l54:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16548))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16548))+8);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16578)))), Object__StringDesc_NextChar)),Object__StringDesc_NextChar)((Object__String)i0, (void*)(OOC_INT32)&i);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16560)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i4, i5, 0);
  i3 = i;
  i4 = i3!=i1;
  if (i4) goto l51_loop;
l58:
  i0=i3;
l59:
  i0 = i0!=0;
  if (!i0) goto l62;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16657)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
l62:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16706))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16706))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16718)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, 0, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16751)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "})", 3);
  goto l112;
l63:
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15281)))), &_td_OOC_SymbolTable__PredefTypeDesc, 15281)), 15292))+40);
  switch (i1) {
  case 2:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15345)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR16)", 13);
    goto l68;
  case 3:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15423)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR32)", 13);
    goto l68;
  default:
    _failed_case(i1, 15267);
    goto l68;
  }
l68:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15502)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
  charValue = i0;
  i1 = (OOC_UINT32)i0<(OOC_UINT32)32;
  if (i1) goto l71;
  i1 = (OOC_UINT32)i0>=(OOC_UINT32)127;
  
  goto l73;
l71:
  i1=1u;
l73:
  if (i1) goto l75;
  i1 = i0==39;
  
  goto l77;
l75:
  i1=1u;
l77:
  if (i1) goto l79;
  i1 = i0==92;
  
  goto l81;
l79:
  i1=1u;
l81:
  if (i1) goto l83;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15742)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 39u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15776)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15822)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 39u);
  goto l112;
l83:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15670))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15670))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15682)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
  goto l112;
l86:
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14379)))), &_td_OOC_SymbolTable__PredefTypeDesc, 14379)), 14390))+40);
  i1 = i1==1;
  if (i1) goto l101;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14801)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 34u);
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14850));
  len = i0;
  i0 = 0!=i0;
  if (!i0) goto l100;
  i0=0;
l91_loop:
  i1 = (OOC_INT32)s;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14910)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
  i0 = i0==34u;
  if (i0) goto l94;
  i0 = i;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15083)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
  OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(i0);
  goto l95;
l94:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14952)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "\134\"", 3);
l95:
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = len;
  i1 = i0!=i1;
  if (i1) goto l91_loop;
l100:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15167)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 34u);
  goto l112;
l101:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14649)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
  charValue = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14675)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR8)\047", 13);
  OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14754)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 39u);
  goto l112;
l105:
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 14105));
  if (i0) goto l108;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14179)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_FALSE", 10);
  goto l112;
l108:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14129)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_TRUE", 9);
  goto l112;
l111:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14024)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
l112:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteBasicConst(OOC_C_DeclWriter__Writer w, Object_Boxed__Object value, OOC_INT8 type) {
  register OOC_INT32 i0,i1,i2,i3;
  register OOC_REAL64 d0;
  Object__String s;
  OOC_INT32 charValue;
  OOC_CHAR8 paren;
  OOC_CHAR8 _signed;
  auto void OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteOct(OOC_INT32 ch);
  auto void OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteChar(OOC_INT32 charValue);
    
    void OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteOct(OOC_INT32 ch) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      i1 = ch;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18427)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (i1+48));
      return;
      ;
    }

    
    void OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteChar(OOC_INT32 charValue) {
      register OOC_INT32 i0,i1;

      i0 = charValue;
      i1 = i0<32;
      if (i1) goto l3;
      i1 = i0>=127;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = i0==39;
      
      goto l9;
l7:
      i1=1u;
l9:
      if (i1) goto l11;
      i1 = i0==92;
      
      goto l13;
l11:
      i1=1u;
l13:
      if (i1) goto l15;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18813)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
      goto l16;
l15:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18663)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 92u);
      OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteOct((i0>>6));
      OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteOct((_mod((i0>>3),8)));
      OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteOct((_mod(i0,8)));
l16:
      return;
      ;
    }


  i0 = (OOC_INT32)value;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l81;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18959)))), &_td_Object_Boxed__BooleanDesc);
  if (i1) goto l75;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19133)))), &_td_Object_Boxed__StringDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20170)))), &_td_Object_Boxed__LongRealDesc);
  if (i1) goto l34;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20458)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21165)))), &_td_Object_Boxed__SetDesc);
  if (i1) goto l13;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21158)))), 21158);
  goto l82;
l13:
  i1 = (OOC_INT32)w;
  i0 = *(OOC_UINT32*)(_check_pointer(i0, 21245));
  i0 = (OOC_INT32)Object_BigInt__NewInt((_type_cast_fast(OOC_INT32, OOC_UINT32, i0)));
  i2 = type;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21189)))), OOC_C_DeclWriter__WriterDesc_WriteBasicConst)),OOC_C_DeclWriter__WriterDesc_WriteBasicConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, i2);
  goto l82;
l15:
  i1 = type;
  i1 = i1<6;
  _signed = i1;
  if (i1) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)i0);
  i2 = i2==(-2147483647-1);
  
l20:
  if (i2) goto l31;
  i2 = Object_BigInt__BigIntDesc_Sign((Object_BigInt__BigInt)i0);
  paren = (i2<0);
  i3 = (OOC_INT32)w;
  if (!(i2<0)) goto l24;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20942)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "(", 2);
l24:
  i0 = (OOC_INT32)Object_BigInt__BigIntDesc_ToString((Object_BigInt__BigInt)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20976)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i0);
  i0 = !i1;
  if (!i0) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21048)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "u", 2);
l28:
  if (!(i2<0)) goto l82;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21107)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ")", 2);
  goto l82;
l31:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20766)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(-", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20799)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, 2147483647, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20842)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "-1)", 4);
  goto l82;
l34:
  d0 = *(OOC_REAL64*)(_check_pointer(i0, 20213));
  paren = (d0<0.0000000000000000);
  if (!(d0<0.0000000000000000)) goto l37;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20249)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
l37:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20300)))), Object_Boxed__LongRealDesc_ToString)),Object_Boxed__LongRealDesc_ToString)((Object_Boxed__LongReal)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20281)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  i0 = type;
  i0 = i0==13;
  if (!i0) goto l41;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20357)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "f", 2);
l41:
  if (!(d0<0.0000000000000000)) goto l82;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20413)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
  goto l82;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19169));
  s = (Object__String)i0;
  i1 = type;
  i2 = i1==10;
  if (i2) goto l48;
  i2 = i1==6;
  
  goto l50;
l48:
  i2=1u;
l50:
  if (i2) goto l72;
  switch (i1) {
  case 7:
  case 11:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19647)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR16)", 13);
    goto l55;
  case 8:
  case 12:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19720)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR32)", 13);
    goto l55;
  default:
    _failed_case(i1, 19593);
    goto l55;
  }
l55:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19795)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
  charValue = i0;
  i1 = (OOC_UINT32)i0<(OOC_UINT32)32;
  if (i1) goto l58;
  i1 = (OOC_UINT32)i0>=(OOC_UINT32)127;
  
  goto l60;
l58:
  i1=1u;
l60:
  if (i1) goto l62;
  i1 = i0==39;
  
  goto l64;
l62:
  i1=1u;
l64:
  if (i1) goto l66;
  i1 = i0==92;
  
  goto l68;
l66:
  i1=1u;
l68:
  if (i1) goto l70;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20025)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 39u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20057)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20101)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 39u);
  goto l82;
l70:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19957))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19957))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19969)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
  goto l82;
l72:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19452)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
  charValue = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19476)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR8)\047", 13);
  OOC_C_DeclWriter__WriterDesc_WriteBasicConst_WriteChar(i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19551)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 39u);
  goto l82;
l75:
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 18994));
  if (i0) goto l78;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19068)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_FALSE", 10);
  goto l82;
l78:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19018)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_TRUE", 9);
  goto l82;
l81:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18913)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
l82:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteStringConst(OOC_C_DeclWriter__Writer w, Object_Boxed__Object value, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object__String s;
  OOC_INT32 i;
  OOC_INT32 len;
  auto void OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteOct(OOC_INT32 ch);
  auto void OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteChar(OOC_INT32 charValue);
    
    void OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteOct(OOC_INT32 ch) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      i1 = ch;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21772)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (i1+48));
      return;
      ;
    }

    
    void OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteChar(OOC_INT32 charValue) {
      register OOC_INT32 i0,i1;

      i0 = charValue;
      i1 = i0<32;
      if (i1) goto l3;
      i1 = i0>=127;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = i0==39;
      
      goto l9;
l7:
      i1=1u;
l9:
      if (i1) goto l11;
      i1 = i0==92;
      
      goto l13;
l11:
      i1=1u;
l13:
      if (i1) goto l15;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22158)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
      goto l16;
l15:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22008)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 92u);
      OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteOct((i0>>6));
      OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteOct((_mod((i0>>3),8)));
      OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteOct((_mod(i0,8)));
l16:
      return;
      ;
    }


  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22246)))), &_td_Object_Boxed__StringDesc, 22246)), 22253));
  s = (Object__String)i0;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 1);
  if (i2) goto l23;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22941)))), &_td_OOC_SymbolTable__PredefTypeDesc, 22941)), 22952))+40);
  switch (i1) {
  case 14:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22999)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "((OOC_CHAR16[]){", 17);
    goto l7;
  case 15:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23075)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "((OOC_CHAR32[]){", 17);
    goto l7;
  default:
    _failed_case(i1, 22927);
    goto l7;
  }
l7:
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 23144));
  len = i1;
  i2 = (OOC_INT32)w;
  i3 = 0!=i1;
  if (i3) goto l10;
  i0=0;
  goto l19;
l10:
  i3=0;
l11_loop:
  i3 = i3!=0;
  if (!i3) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23213)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
l14:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23254))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23254))+8);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23284)))), Object__StringDesc_NextChar)),Object__StringDesc_NextChar)((Object__String)i0, (void*)(OOC_INT32)&i);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23266)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i4, i5, 0);
  i3 = i;
  i4 = i3!=i1;
  if (i4) goto l11_loop;
l18:
  i0=i3;
l19:
  i0 = i0!=0;
  if (!i0) goto l22;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23345)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23382))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23382))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23394)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, 0, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23421)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "})", 3);
  goto l36;
l23:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22332)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 34u);
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 22375));
  len = i0;
  i0 = 0!=i0;
  if (!i0) goto l35;
  i0=0;
l26_loop:
  i1 = (OOC_INT32)s;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22423)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
  i0 = i0==34u;
  if (i0) goto l29;
  i0 = i;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22578)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
  OOC_C_DeclWriter__WriterDesc_WriteStringConst_WriteChar(i0);
  goto l30;
l29:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22459)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "\134\"", 3);
l30:
  i0 = i;
  i0 = i0+1;
  i = i0;
  i1 = len;
  i1 = i0!=i1;
  if (i1) goto l26_loop;
l35:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22638)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 34u);
l36:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteDeclaration(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Declaration d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23604)))), OOC_C_DeclWriter__DeclarationDesc_Write)),OOC_C_DeclWriter__DeclarationDesc_Write)((OOC_C_DeclWriter__Declaration)i0, (OOC_C_DeclWriter__Writer)i1);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_AddDeclaration(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Declaration d) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)d;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23927)))), &_td_OOC_C_DeclWriter__IncludeModuleDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23992))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23992))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24006)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23953))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23953))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23963)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
l4:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList(OOC_C_DeclWriter__Writer w) {
  auto void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteIncludes(void);
  auto void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteDeclarations(void);
    
    void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteIncludes(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24427))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24427))+12);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24437)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l8;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24460))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 24470));
      i3 = _check_pointer(i3, 24477);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 24477))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24460))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 24470));
      i4 = _check_pointer(i4, 24477);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 24477))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24481)))), &_td_OOC_C_DeclWriter__IncludeModuleDesc, 24481)), 24495)))), OOC_C_DeclWriter__DeclarationDesc_Write)),OOC_C_DeclWriter__DeclarationDesc_Write)((OOC_C_DeclWriter__Declaration)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 24481)))), &_td_OOC_C_DeclWriter__IncludeModuleDesc, 24481)), (OOC_C_DeclWriter__Writer)i2);
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteDeclarations(void) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;
      OOC_C_DeclWriter__Declaration d;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24655))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24655))+16);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24669)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l11;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24697))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 24711));
      i3 = _check_pointer(i3, 24718);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 24718))*4);
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24722)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 24722);
      d = (OOC_C_DeclWriter__Declaration)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24745)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i3);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24784)))), &_td_OOC_C_DeclWriter__DefineDesc));
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24811)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 59u);
l6:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24852)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i2);
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l3_loop;
l11:
      return;
      ;
    }


  OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteIncludes();
  OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteDeclarations();
  return;
  ;
}

static void OOC_C_DeclWriter__InitType(OOC_C_DeclWriter__Type t) {

  return;
  ;
}

OOC_INT8 OOC_C_DeclWriter__TypeDesc_Priority(OOC_C_DeclWriter__Type t) {

  _assert(0u, 127, 25207);
  _failed_function(25145); return 0;
  ;
}

void OOC_C_DeclWriter__TypeDesc_WriteLeft(OOC_C_DeclWriter__Type t, OOC_C_DeclWriter__Writer w) {

  _assert(0u, 127, 25303);
  return;
  ;
}

void OOC_C_DeclWriter__TypeDesc_WriteRight(OOC_C_DeclWriter__Type t, OOC_C_DeclWriter__Writer w) {

  _assert(0u, 127, 25393);
  return;
  ;
}

static void OOC_C_DeclWriter__WriteLeft(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t, OOC_INT8 callerPri) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25504)))), OOC_C_DeclWriter__TypeDesc_WriteLeft)),OOC_C_DeclWriter__TypeDesc_WriteLeft)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25542)))), OOC_C_DeclWriter__TypeDesc_Priority)),OOC_C_DeclWriter__TypeDesc_Priority)((OOC_C_DeclWriter__Type)i0);
  i2 = callerPri;
  i0 = i2<i0;
  if (!i0) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25568)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 40u);
l4:
  return;
  ;
}

static void OOC_C_DeclWriter__WriteRight(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t, OOC_INT8 callerPri) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)t;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25706)))), OOC_C_DeclWriter__TypeDesc_Priority)),OOC_C_DeclWriter__TypeDesc_Priority)((OOC_C_DeclWriter__Type)i0);
  i2 = callerPri;
  i1 = i2<i1;
  if (!i1) goto l4;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25732)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
l4:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25764)))), OOC_C_DeclWriter__TypeDesc_WriteRight)),OOC_C_DeclWriter__TypeDesc_WriteRight)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  return;
  ;
}

static void OOC_C_DeclWriter__InitBasicType(OOC_C_DeclWriter__BasicType bt, OOC_INT8 id, const OOC_CHAR8 repr__ref[], OOC_LEN repr_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(repr,OOC_CHAR8 ,repr_0d)

  OOC_INITIALIZE_VPAR(repr__ref,repr,OOC_CHAR8 ,repr_0d)
  i0 = (OOC_INT32)bt;
  OOC_C_DeclWriter__InitType((OOC_C_DeclWriter__Type)i0);
  i1 = id;
  *(OOC_INT8*)(_check_pointer(i0, 25915)) = i1;
  _copy_8((const void*)(OOC_INT32)repr,(void*)((_check_pointer(i0, 25945))+1),32);
  return;
  ;
}

static OOC_C_DeclWriter__BasicType OOC_C_DeclWriter__NewBasicType(OOC_INT8 id, const OOC_CHAR8 repr__ref[], OOC_LEN repr_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(repr,OOC_CHAR8 ,repr_0d)

  OOC_INITIALIZE_VPAR(repr__ref,repr,OOC_CHAR8 ,repr_0d)
  i0 = id;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__BasicType.baseTypes[0]);
  OOC_C_DeclWriter__InitBasicType((OOC_C_DeclWriter__BasicType)i1, i0, (void*)(OOC_INT32)repr, repr_0d);
  return (OOC_C_DeclWriter__BasicType)i1;
  ;
}

OOC_INT8 OOC_C_DeclWriter__BasicTypeDesc_Priority(OOC_C_DeclWriter__BasicType bt) {

  return 0;
  ;
}

void OOC_C_DeclWriter__BasicTypeDesc_WriteLeft(OOC_C_DeclWriter__BasicType bt, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)bt;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26321)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 26338))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26352)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 32u);
  return;
  ;
}

void OOC_C_DeclWriter__BasicTypeDesc_WriteRight(OOC_C_DeclWriter__BasicType bt, OOC_C_DeclWriter__Writer w) {

  return;
  ;
}

static void OOC_C_DeclWriter__InitPointer(OOC_C_DeclWriter__Pointer p, OOC_INT8 typeQualifier, OOC_C_DeclWriter__Type base) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  OOC_C_DeclWriter__InitType((OOC_C_DeclWriter__Type)i0);
  i1 = typeQualifier;
  *(OOC_INT8*)(_check_pointer(i0, 26575)) = i1;
  i1 = (OOC_INT32)base;
  *(OOC_INT32*)((_check_pointer(i0, 26614))+4) = i1;
  return;
  ;
}

OOC_C_DeclWriter__Pointer OOC_C_DeclWriter__WriterDesc_NewPointer(OOC_C_DeclWriter__Writer w, OOC_INT8 typeQualifier, OOC_C_DeclWriter__Type base) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Pointer.baseTypes[0]);
  i1 = typeQualifier;
  i2 = (OOC_INT32)base;
  OOC_C_DeclWriter__InitPointer((OOC_C_DeclWriter__Pointer)i0, i1, (OOC_C_DeclWriter__Type)i2);
  return (OOC_C_DeclWriter__Pointer)i0;
  ;
}

OOC_INT8 OOC_C_DeclWriter__PointerDesc_Priority(OOC_C_DeclWriter__Pointer p) {

  return 1;
  ;
}

void OOC_C_DeclWriter__PointerDesc_WriteLeft(OOC_C_DeclWriter__Pointer p, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27020))+4);
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27046)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 42u);
  return;
  ;
}

void OOC_C_DeclWriter__PointerDesc_WriteRight(OOC_C_DeclWriter__Pointer p, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27156))+4);
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, 1);
  return;
  ;
}

static void OOC_C_DeclWriter__InitArray(OOC_C_DeclWriter__Array a, OOC_C_DeclWriter__Type base, OOC_INT32 size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  OOC_C_DeclWriter__InitType((OOC_C_DeclWriter__Type)i0);
  i1 = (OOC_INT32)base;
  *(OOC_INT32*)(_check_pointer(i0, 27288)) = i1;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 27309))+4) = i1;
  return;
  ;
}

OOC_C_DeclWriter__Array OOC_C_DeclWriter__WriterDesc_NewArray(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type base, OOC_INT32 size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Array.baseTypes[0]);
  i1 = (OOC_INT32)base;
  i2 = size;
  OOC_C_DeclWriter__InitArray((OOC_C_DeclWriter__Array)i0, (OOC_C_DeclWriter__Type)i1, i2);
  return (OOC_C_DeclWriter__Array)i0;
  ;
}

OOC_INT8 OOC_C_DeclWriter__ArrayDesc_Priority(OOC_C_DeclWriter__Array a) {

  return 2;
  ;
}

void OOC_C_DeclWriter__ArrayDesc_WriteLeft(OOC_C_DeclWriter__Array a, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)a;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27673));
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, 2);
  return;
  ;
}

void OOC_C_DeclWriter__ArrayDesc_WriteRight(OOC_C_DeclWriter__Array a, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27767)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 91u);
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 27795))+4);
  i2 = i2>=0;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 27834))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27820)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i2, 0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27860)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 93u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27899));
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 2);
  return;
  ;
}

static void OOC_C_DeclWriter__InitFunction(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Type resultType, OOC_CHAR8 restParameters) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)resultType;
  *(OOC_INT32*)(_check_pointer(i0, 28037)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 28072))+4) = i1;
  i1 = restParameters;
  *(OOC_UINT8*)((_check_pointer(i0, 28114))+8) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 28157))+9) = 0u;
  *(OOC_INT8*)((_check_pointer(i0, 28185))+10) = 0;
  return;
  ;
}

OOC_C_DeclWriter__Function OOC_C_DeclWriter__WriterDesc_NewFunction(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type resultType, OOC_CHAR8 restParameters) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Function.baseTypes[0]);
  i1 = (OOC_INT32)resultType;
  i2 = restParameters;
  OOC_C_DeclWriter__InitFunction((OOC_C_DeclWriter__Function)i0, (OOC_C_DeclWriter__Type)i1, i2);
  return (OOC_C_DeclWriter__Function)i0;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_SetNoReturn(OOC_C_DeclWriter__Function fct, OOC_CHAR8 noReturn) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fct;
  i1 = noReturn;
  *(OOC_UINT8*)((_check_pointer(i0, 28541))+9) = i1;
  return;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_SetCallConv(OOC_C_DeclWriter__Function fct, OOC_INT8 callConv) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fct;
  i1 = callConv;
  *(OOC_INT8*)((_check_pointer(i0, 28664))+10) = i1;
  return;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_AddParameter(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Declaration param) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28784))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28784))+4);
  i2 = (OOC_INT32)param;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28796)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_MakeParametersVolatile(OOC_C_DeclWriter__Function fct) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;
  OOC_C_DeclWriter__Declaration param;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28962))+4);
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 28973))+4);
  i2 = 0<i1;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29002))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 29013));
  i3 = _check_pointer(i3, 29019);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 29019))*4);
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 29023)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 29023);
  param = (OOC_C_DeclWriter__Declaration)i3;
  i4 = *(OOC_INT8*)(_check_pointer(i3, 29052));
  i4 = i4==0;
  if (!i4) goto l6;
  *(OOC_INT8*)(_check_pointer(i3, 29095)) = 2;
l6:
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l11:
  return;
  ;
}

OOC_INT8 OOC_C_DeclWriter__FunctionDesc_Priority(OOC_C_DeclWriter__Function fct) {

  return 2;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_WriteLeft(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29352));
  i2 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i1, 2);
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 29390))+9);
  if (!i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29412)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "NORETURN ", 10);
l3:
  i0 = *(OOC_INT8*)((_check_pointer(i0, 29460))+10);
  switch (i0) {
  case 2:
    goto l8;
  case 3:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29582)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "__attribute__ ((stdcall)) ", 27);
    goto l8;
  default:
    goto l8;
  }
l8:
  return;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_WriteRight(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29753))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29753))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29764)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i2);
  i1 = i1==0;
  if (i1) goto l17;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29830)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 40u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29871))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29871))+4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29883)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i3);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l13;
  i3=0;
l5_loop:
  i4 = i3!=0;
  if (!i4) goto l8;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29932)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29998))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 30010));
  i4 = _check_pointer(i4, 30017);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 30017))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29975)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 30021)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 30021)));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l13:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 30058))+8);
  if (!i2) goto l16;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30089)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ...", 6);
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30132)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
  
  goto l18;
l17:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29789)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(void)", 7);
  
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30181));
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i2, 2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 30219))+9);
  if (!i0) goto l21;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30241)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " NORETURN2", 11);
l21:
  return;
  ;
}

static void OOC_C_DeclWriter__InitStruct(OOC_C_DeclWriter__Struct _struct, OOC_CHAR8 isUnion, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_struct;
  i1 = isUnion;
  *(OOC_UINT8*)(_check_pointer(i0, 30402)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 30434))+8) = i1;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 30476))+4) = i1;
  return;
  ;
}

OOC_C_DeclWriter__Struct OOC_C_DeclWriter__WriterDesc_NewStruct(OOC_C_DeclWriter__Writer w, OOC_CHAR8 isUnion, Object__String name) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Struct.baseTypes[0]);
  i1 = isUnion;
  i2 = (OOC_INT32)name;
  OOC_C_DeclWriter__InitStruct((OOC_C_DeclWriter__Struct)i0, i1, (Object__String)i2);
  return (OOC_C_DeclWriter__Struct)i0;
  ;
}

void OOC_C_DeclWriter__StructDesc_AddMember(OOC_C_DeclWriter__Struct _struct, OOC_C_DeclWriter__Declaration param) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_struct;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30792))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30792))+8);
  i2 = (OOC_INT32)param;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30801)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_C_DeclWriter__StructDesc_AddPadding(OOC_C_DeclWriter__Struct _struct, OOC_C_DeclWriter__Writer w, OOC_INT32 offset) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 str[32];

  i0 = offset;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, 32);
  Strings__Insert("__pad", 6, 0, (void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 32);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31145))+24)+(_check_index(10, 17, OOC_UINT8, 31156))*4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31043)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)i1, 0, 0, (OOC_C_DeclWriter__Type)i2);
  i1 = (OOC_INT32)_struct;
  OOC_C_DeclWriter__StructDesc_AddMember((OOC_C_DeclWriter__Struct)i1, (OOC_C_DeclWriter__Declaration)i0);
  return;
  ;
}

OOC_INT8 OOC_C_DeclWriter__StructDesc_Priority(OOC_C_DeclWriter__Struct _struct) {

  return 1;
  ;
}

void OOC_C_DeclWriter__StructDesc_WriteLeft(OOC_C_DeclWriter__Struct _struct, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)_struct;
  i1 = *(OOC_UINT8*)(_check_pointer(i0, 31375));
  if (i1) goto l3;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31438)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "struct", 7);
  
  goto l4;
l3:
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31397)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "union", 6);
  
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31487))+4);
  i2 = i2!=0;
  if (!i2) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31513)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " ", 2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31562))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31541)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i2);
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31585)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " {", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31612)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, 1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31650))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31650))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31659)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i3);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l15;
  i3=0;
l10_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31680)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31724))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 31733));
  i4 = _check_pointer(i4, 31740);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 31740))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31698)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 31744)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 31744)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31766)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l10_loop;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31809))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31809))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31818)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
  i0 = i0==0;
  if (!i0) goto l18;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31942)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31960)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "char __dummy;", 14);
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32007)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, (-1));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32027)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32043)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "} ", 3);
  return;
  ;
}

void OOC_C_DeclWriter__StructDesc_WriteRight(OOC_C_DeclWriter__Struct _struct, OOC_C_DeclWriter__Writer w) {

  return;
  ;
}

static void OOC_C_DeclWriter__InitTypeRef(OOC_C_DeclWriter__TypeRef typeRef, OOC_INT8 _class, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeRef;
  i1 = _class;
  *(OOC_INT8*)(_check_pointer(i0, 32273)) = i1;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 32302))+4) = i1;
  return;
  ;
}

OOC_C_DeclWriter__TypeRef OOC_C_DeclWriter__WriterDesc_NewTypeRef(OOC_C_DeclWriter__Writer w, OOC_INT8 _class, Object__String name) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__TypeRef.baseTypes[0]);
  i1 = _class;
  i2 = (OOC_INT32)name;
  OOC_C_DeclWriter__InitTypeRef((OOC_C_DeclWriter__TypeRef)i0, i1, (Object__String)i2);
  return (OOC_C_DeclWriter__TypeRef)i0;
  ;
}

OOC_INT8 OOC_C_DeclWriter__TypeRefDesc_Priority(OOC_C_DeclWriter__TypeRef typeRef) {

  return 0;
  ;
}

void OOC_C_DeclWriter__TypeRefDesc_WriteLeft(OOC_C_DeclWriter__TypeRef typeRef, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeRef;
  i1 = *(OOC_INT8*)(_check_pointer(i0, 32723));
  switch (i1) {
  case 0:
    goto l6;
  case 1:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32771)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "struct ", 8);
    goto l6;
  case 2:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32817)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "union ", 7);
    goto l6;
  default:
    _failed_case(i1, 32711);
    goto l6;
  }
l6:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32879))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32857)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32893)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 32u);
  return;
  ;
}

void OOC_C_DeclWriter__TypeRefDesc_WriteRight(OOC_C_DeclWriter__TypeRef typeRef, OOC_C_DeclWriter__Writer w) {

  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteType(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33068)))), OOC_C_DeclWriter__TypeDesc_WriteLeft)),OOC_C_DeclWriter__TypeDesc_WriteLeft)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33090)))), OOC_C_DeclWriter__TypeDesc_WriteRight)),OOC_C_DeclWriter__TypeDesc_WriteRight)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  return;
  ;
}

static void OOC_C_DeclWriter__InitDeclaration(OOC_C_DeclWriter__Declaration d, Object__String name, OOC_INT8 typeQualifier, OOC_INT8 storageClass, OOC_C_DeclWriter__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 33419))+8) = i1;
  i1 = typeQualifier;
  *(OOC_INT8*)(_check_pointer(i0, 33440)) = i1;
  i1 = storageClass;
  *(OOC_INT8*)((_check_pointer(i0, 33479))+1) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 33516))+4) = i1;
  return;
  ;
}

OOC_C_DeclWriter__Declaration OOC_C_DeclWriter__WriterDesc_NewDeclaration(OOC_C_DeclWriter__Writer w, Object__String name, OOC_INT8 typeQualifier, OOC_INT8 storageClass, OOC_C_DeclWriter__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Declaration.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = typeQualifier;
  i3 = storageClass;
  i4 = (OOC_INT32)type;
  OOC_C_DeclWriter__InitDeclaration((OOC_C_DeclWriter__Declaration)i0, (Object__String)i1, i2, i3, (OOC_C_DeclWriter__Type)i4);
  return (OOC_C_DeclWriter__Declaration)i0;
  ;
}

void OOC_C_DeclWriter__DeclarationDesc_SetTypeQualifier(OOC_C_DeclWriter__Declaration d, OOC_INT8 typeQualifier) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  i1 = typeQualifier;
  *(OOC_INT8*)(_check_pointer(i0, 33930)) = i1;
  return;
  ;
}

void OOC_C_DeclWriter__DeclarationDesc_Write(OOC_C_DeclWriter__Declaration d, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_C_DeclWriter__DeclarationDesc_Write_WriteTypeQualifier(OOC_C_DeclWriter__Writer w, OOC_INT8 typeQualifier);
    
    void OOC_C_DeclWriter__DeclarationDesc_Write_WriteTypeQualifier(OOC_C_DeclWriter__Writer w, OOC_INT8 typeQualifier) {
      register OOC_INT32 i0;

      i0 = typeQualifier;
      switch (i0) {
      case 0:
        goto l6;
      case 1:
        i0 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34187)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "const ", 7);
        goto l6;
      case 2:
        i0 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34233)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "volatile ", 10);
        goto l6;
      default:
        _failed_case(i0, 34124);
        goto l6;
      }
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)d;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 34318))+1);
  switch (i1) {
  case 0:
    goto l10;
  case 1:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34373)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "typedef ", 9);
    goto l10;
  case 2:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34419)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "extern ", 8);
    goto l10;
  case 3:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34464)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "static ", 8);
    goto l10;
  case 4:
    goto l10;
  case 5:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34527)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "register ", 10);
    goto l10;
  case 6:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34575)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "auto ", 6);
    goto l10;
  default:
    _failed_case(i1, 34312);
    goto l10;
  }
l10:
  i0 = *(OOC_INT8*)(_check_pointer(i0, 34636));
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__DeclarationDesc_Write_WriteTypeQualifier((OOC_C_DeclWriter__Writer)i1, i0);
  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34673))+4);
  i2 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i1, 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34719))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34703)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34748))+4);
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i0, 3);
  return;
  ;
}

static void OOC_C_DeclWriter__InitIncludeModule(OOC_C_DeclWriter__IncludeModule d, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  OOC_C_DeclWriter__InitDeclaration((OOC_C_DeclWriter__Declaration)i0, (Object__String)(OOC_INT32)0, 0, 4, (OOC_C_DeclWriter__Type)(OOC_INT32)0);
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 34927))+12) = i1;
  return;
  ;
}

OOC_C_DeclWriter__IncludeModule OOC_C_DeclWriter__WriterDesc_NewIncludeModule(OOC_C_DeclWriter__Writer w, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)module;
  _assert((i0!=(OOC_INT32)0), 127, 35097);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__IncludeModule.baseTypes[0]);
  OOC_C_DeclWriter__InitIncludeModule((OOC_C_DeclWriter__IncludeModule)i1, (OOC_Repository__Module)i0);
  return (OOC_C_DeclWriter__IncludeModule)i1;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteModuleInclude(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String path;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35443))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35443))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 35448)), 0);
  i1 = (OOC_INT32)OOC_Repository_FileSystem__ModuleToFileName((void*)(_check_pointer(i1, 35448)), i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35461));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35461));
  i3 = fileId;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35468)))), OOC_Repository__RepositoryDesc_GetDefaultSuffix)),OOC_Repository__RepositoryDesc_GetDefaultSuffix)((OOC_Repository__Repository)i0, i3);
  i0 = (OOC_INT32)Object__Concat2((void*)i1,(void*)i0);
  path = (Object__String)i0;
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35520)))), &_td_Object__String8Desc, 35520)));
  chars = (Object__CharsLatin1)i0;
  i1 = (OOC_INT32)w;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 35569)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35549)))), OOC_C_DeclWriter__WriterDesc_WriteInclude)),OOC_C_DeclWriter__WriterDesc_WriteInclude)((OOC_C_DeclWriter__Writer)i1, (void*)(_check_pointer(i0, 35569)), i2);
  return;
  ;
}

void OOC_C_DeclWriter__IncludeModuleDesc_Write(OOC_C_DeclWriter__IncludeModule d, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35682))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35661)))), OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)),OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, 13);
  return;
  ;
}

static void OOC_C_DeclWriter__InitDefine(OOC_C_DeclWriter__Define d, Object__String name, Object_Boxed__Object _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)name;
  OOC_C_DeclWriter__InitDeclaration((OOC_C_DeclWriter__Declaration)i0, (Object__String)i1, 0, 4, (OOC_C_DeclWriter__Type)(OOC_INT32)0);
  i1 = (OOC_INT32)_const;
  *(OOC_INT32*)((_check_pointer(i0, 35890))+12) = i1;
  return;
  ;
}

OOC_C_DeclWriter__Define OOC_C_DeclWriter__WriterDesc_NewDefine(OOC_C_DeclWriter__Writer w, Object__String name, Object_Boxed__Object _const) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Define.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)_const;
  OOC_C_DeclWriter__InitDefine((OOC_C_DeclWriter__Define)i0, (Object__String)i1, (Object_Boxed__Object)i2);
  return (OOC_C_DeclWriter__Define)i0;
  ;
}

void OOC_C_DeclWriter__DefineDesc_Write(OOC_C_DeclWriter__Define d, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36199)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#define ", 9);
  i1 = (OOC_INT32)d;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36248))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36232)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36262)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ", 2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36292))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36395))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36380)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i2);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36319)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " 0", 3);
l4:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteTypeCast(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36527)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 40u);
  i1 = (OOC_INT32)t;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36551)))), OOC_C_DeclWriter__TypeDesc_WriteLeft)),OOC_C_DeclWriter__TypeDesc_WriteLeft)((OOC_C_DeclWriter__Type)i1, (OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36573)))), OOC_C_DeclWriter__TypeDesc_WriteRight)),OOC_C_DeclWriter__TypeDesc_WriteRight)((OOC_C_DeclWriter__Type)i1, (OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36596)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 41u);
  return;
  ;
}

void OOC_OOC_C_DeclWriter_init(void) {

  return;
  ;
}

/* --- */
