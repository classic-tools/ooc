#include <OOC/C/DeclWriter.d>
#include <__oo2c.h>

static void OOC_C_DeclWriter__InitWriter(OOC_C_DeclWriter__Writer w, Channel__Channel ch, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_C_DeclWriter__InitWriter_CreateBasicType(OOC_INT8 id, const OOC_CHAR8 repr__ref[], OOC_LEN repr_0d);
    
    void OOC_C_DeclWriter__InitWriter_CreateBasicType(OOC_INT8 id, const OOC_CHAR8 repr__ref[], OOC_LEN repr_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(repr,OOC_CHAR8 ,repr_0d)

      OOC_INITIALIZE_VPAR(repr__ref,repr,OOC_CHAR8 ,repr_0d)
      i0 = (OOC_INT32)w;
      i1 = id;
      i2 = (OOC_INT32)OOC_C_DeclWriter__NewBasicType(i1, (void*)(OOC_INT32)repr, repr_0d);
      *(OOC_INT32*)(((_check_pointer(i0, 9552))+24)+(_check_index(i1, 17, OOC_UINT8, 9563))*4) = i2;
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)(_check_pointer(i0, 9636)) = i1;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 9653))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 9680))+20) = 0;
  i1 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 9710))+8) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 9761))+12) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(16);
  *(OOC_INT32*)((_check_pointer(i0, 9799))+16) = i1;
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

OOC_C_DeclWriter__Writer OOC_C_DeclWriter__NewWriter(Channel__Channel ch, URI__HierarchicalURI baseURI) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__Writer.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)baseURI;
  OOC_C_DeclWriter__InitWriter((OOC_C_DeclWriter__Writer)i0, (Channel__Channel)i1, (URI__HierarchicalURI)i2);
  return (OOC_C_DeclWriter__Writer)i0;
  ;
}

void OOC_C_DeclWriter__WriterDesc_CopyTo(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Writer dest) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)dest;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11304));
  *(OOC_INT32*)(_check_pointer(i0, 11295)) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11332))+4);
  *(OOC_INT32*)((_check_pointer(i0, 11318))+4) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11368))+8);
  *(OOC_INT32*)((_check_pointer(i0, 11351))+8) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11405))+12);
  *(OOC_INT32*)((_check_pointer(i0, 11390))+12) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11444))+16);
  *(OOC_INT32*)((_check_pointer(i0, 11425))+16) = i2;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 11486))+20);
  *(OOC_INT32*)((_check_pointer(i0, 11468))+20) = i2;
  _copy_block(((_check_pointer(i1, 11525))+24),((_check_pointer(i0, 11509))+24),68);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteString(OOC_C_DeclWriter__Writer w, const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11632))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11632))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11644)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, str_0d);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteStr(OOC_C_DeclWriter__Writer w, Object__String str) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11744))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11744))+8);
  i2 = (OOC_INT32)str;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11755)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i0, (Object__String)i2);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteChar(OOC_C_DeclWriter__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11846))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11846))+8);
  i2 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11858)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, i2);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteLn(OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11938))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11938))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11950)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteLInt(OOC_C_DeclWriter__Writer w, OOC_INT32 lint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12050))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12050))+8);
  i2 = lint;
  i3 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12062)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i2, i3);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_Indent(OOC_C_DeclWriter__Writer w, OOC_INT32 delta) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12228))+20);
  i2 = delta;
  *(OOC_INT32*)((_check_pointer(i0, 12228))+20) = (i1+i2);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_Newline(OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12333)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12363))+20);
  i2 = 1<=i1;
  i = 1;
  if (!i2) goto l8;
  i2=1;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12387)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "  ", 3);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12600)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#include <", 11);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12635)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)includePath, includePath_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12669)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ">", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12695)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_Close(OOC_C_DeclWriter__Writer w, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13011))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13023));
  *res = (Msg__Msg)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13039));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13044)))), &_td_Files__FileDesc);
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13071));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13071));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13082)))), &_td_Files__FileDesc, 13082)), 13087)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13082)))), &_td_Files__FileDesc, 13082)));
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13117));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13121));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = i1==(OOC_INT32)0;
  
l8:
  if (!i2) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13167));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13171));
  *res = (Msg__Msg)i1;
  
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13191));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13191));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13195)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13215));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13219));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = i1==(OOC_INT32)0;
  
l16:
  if (!i1) goto l18;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13265));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13269));
  *res = (Msg__Msg)i0;
l18:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteConst(OOC_C_DeclWriter__Writer w, Object_Boxed__Object value, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__String s;
  OOC_INT32 charValue;
  OOC_INT32 i;
  OOC_INT32 len;
  auto void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct(OOC_INT32 ch);
  auto void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(OOC_INT32 charValue);
    
    void OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct(OOC_INT32 ch) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      i1 = ch;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13743)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (i1+48));
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
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i1 = i0==39;
      
      goto l9;
l7:
      i1=OOC_TRUE;
l9:
      if (i1) goto l11;
      i1 = i0==92;
      
      goto l13;
l11:
      i1=OOC_TRUE;
l13:
      if (i1) goto l15;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14129)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
      goto l16;
l15:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13979)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'\134');
      OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct((i0>>6));
      OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct((_mod((i0>>3),8)));
      OOC_C_DeclWriter__WriterDesc_WriteConst_WriteOct((_mod(i0,8)));
l16:
      return;
      ;
    }


  i0 = (OOC_INT32)value;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l99;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14275)))), &_td_Object_Boxed__BooleanDesc);
  if (i1) goto l93;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14449)))), &_td_Object_Boxed__StringDesc);
  if (i1) goto l26;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17048)))), &_td_Object_Boxed__LongRealDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17224)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17677)))), &_td_Object_Boxed__SetDesc);
  if (i1) goto l13;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17670)))), 17670);
  goto l100;
l13:
  i1 = (OOC_INT32)w;
  i0 = *(OOC_UINT32*)(_check_pointer(i0, 17752));
  i0 = (OOC_INT32)Object_BigInt__NewInt((_type_cast_fast(OOC_INT32, OOC_UINT32, i0)));
  i2 = (OOC_INT32)type;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17701)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, (OOC_SymbolTable__Type)i2);
  goto l100;
l15:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17260)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i0);
  i1 = i1==(-2147483647-1);
  if (i1) goto l18;
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17628)))), Object_BigInt__BigIntDesc_ToString)),Object_BigInt__BigIntDesc_ToString)((Object_BigInt__BigInt)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17612)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i1, (Object__String)i0);
  goto l100;
l18:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17489)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(-", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17522)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, 2147483647, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17565)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "-1)", 4);
  goto l100;
l21:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17093)))), Object_Boxed__LongRealDesc_ToString)),Object_Boxed__LongRealDesc_ToString)((Object_Boxed__LongReal)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17077)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i1, (Object__String)i0);
  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 8);
  if (!i0) goto l100;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17169)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "f", 2);
  goto l100;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14485));
  s = (Object__String)i0;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 1);
  if (i2) goto l74;
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  if (i2) goto l51;
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16374)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16374)), 16385))+32);
  i2 = (OOC_INT32)w;
  switch (i1) {
  case 14:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16444)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "((OOC_CHAR16[]){", 17);
    goto l35;
  case 15:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16532)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "((OOC_CHAR32[]){", 17);
    goto l35;
  default:
    _failed_case(i1, 16360);
    goto l35;
  }
l35:
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16613));
  len = i1;
  i3 = 0!=i1;
  if (i3) goto l38;
  i0=0;
  goto l47;
l38:
  i3=0;
l39_loop:
  i4 = i3!=0;
  if (!i4) goto l42;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16700)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)',');
l42:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16753))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16753))+8);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16783)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16765)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i5, i6, 0);
  i3 = i3+1;
  i4 = i3!=i1;
  i = i3;
  if (i4) goto l39_loop;
l46:
  i0=i3;
l47:
  i0 = i0!=0;
  if (!i0) goto l50;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16882)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)',');
l50:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16931))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16931))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16943)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, 0, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16976)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "})", 3);
  goto l100;
l51:
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15486)))), &_td_OOC_SymbolTable__PredefTypeDesc, 15486)), 15497))+32);
  switch (i1) {
  case 2:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15550)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR16)", 13);
    goto l56;
  case 3:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15628)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR32)", 13);
    goto l56;
  default:
    _failed_case(i1, 15472);
    goto l56;
  }
l56:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15707)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
  i1 = i0<32;
  charValue = i0;
  if (i1) goto l59;
  i1 = i0>=127;
  
  goto l61;
l59:
  i1=OOC_TRUE;
l61:
  if (i1) goto l63;
  i1 = i0==39;
  
  goto l65;
l63:
  i1=OOC_TRUE;
l65:
  if (i1) goto l67;
  i1 = i0==92;
  
  goto l69;
l67:
  i1=OOC_TRUE;
l69:
  if (i1) goto l71;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15947)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'\047');
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15981)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16027)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'\047');
  goto l100;
l71:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15875))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15875))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15887)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
  goto l100;
l74:
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14584)))), &_td_OOC_SymbolTable__PredefTypeDesc, 14584)), 14595))+32);
  i1 = i1==1;
  if (i1) goto l89;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15006)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'"');
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15055));
  len = i0;
  i0 = 0!=i0;
  if (!i0) goto l88;
  i0=0;
l79_loop:
  i1 = (OOC_INT32)s;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15115)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
  i2 = i2==(OOC_CHAR8)'"';
  if (i2) goto l82;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15288)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, i0);
  OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(i0);
  goto l83;
l82:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15157)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "\134\"", 3);
l83:
  i0 = i;
  i0 = i0+1;
  i1 = len;
  i1 = i0!=i1;
  i = i0;
  if (i1) goto l79_loop;
l88:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15372)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'"');
  goto l100;
l89:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14854)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
  charValue = i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14880)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(OOC_CHAR8)\047", 13);
  OOC_C_DeclWriter__WriterDesc_WriteConst_WriteChar(i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14959)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'\047');
  goto l100;
l93:
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 14310));
  if (i0) goto l96;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14384)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_FALSE", 10);
  goto l100;
l96:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14334)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_TRUE", 9);
  goto l100;
l99:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14229)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
l100:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteDeclaration(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Declaration d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17935)))), OOC_C_DeclWriter__DeclarationDesc_Write)),OOC_C_DeclWriter__DeclarationDesc_Write)((OOC_C_DeclWriter__Declaration)i0, (OOC_C_DeclWriter__Writer)i1);
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_AddDeclaration(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Declaration d) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)d;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18258)))), &_td_OOC_C_DeclWriter__IncludeModuleDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18323))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18323))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18337)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18284))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18284))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18294)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
l4:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList(OOC_C_DeclWriter__Writer w) {
  auto void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteIncludes();
  auto void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteDeclarations();
    
    void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteIncludes() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18754))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18754))+12);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18764)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l8;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18787))+12);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18797));
      i3 = _check_pointer(i3, 18804);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 18804))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18787))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 18797));
      i4 = _check_pointer(i4, 18804);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 18804))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18808)))), &_td_OOC_C_DeclWriter__IncludeModuleDesc, 18808)), 18822)))), OOC_C_DeclWriter__DeclarationDesc_Write)),OOC_C_DeclWriter__DeclarationDesc_Write)((OOC_C_DeclWriter__Declaration)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18808)))), &_td_OOC_C_DeclWriter__IncludeModuleDesc, 18808)), (OOC_C_DeclWriter__Writer)i2);
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_C_DeclWriter__WriterDesc_WriteDeclarationList_WriteDeclarations() {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;
      OOC_C_DeclWriter__Declaration d;

      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18980))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18980))+16);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18994)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l11;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19022))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19036));
      i3 = _check_pointer(i3, 19043);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 19043))*4);
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19047)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 19047);
      d = (OOC_C_DeclWriter__Declaration)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19070)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i3);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19109)))), &_td_OOC_C_DeclWriter__DefineDesc));
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19136)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)';');
l6:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19177)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i2);
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
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

  _assert(OOC_FALSE, 127, 19505);
  return -1;
  ;
}

void OOC_C_DeclWriter__TypeDesc_WriteLeft(OOC_C_DeclWriter__Type t, OOC_C_DeclWriter__Writer w) {

  _assert(OOC_FALSE, 127, 19604);
  return;
  ;
}

void OOC_C_DeclWriter__TypeDesc_WriteRight(OOC_C_DeclWriter__Type t, OOC_C_DeclWriter__Writer w) {

  _assert(OOC_FALSE, 127, 19694);
  return;
  ;
}

static void OOC_C_DeclWriter__WriteLeft(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t, OOC_INT8 callerPri) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19805)))), OOC_C_DeclWriter__TypeDesc_WriteLeft)),OOC_C_DeclWriter__TypeDesc_WriteLeft)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19843)))), OOC_C_DeclWriter__TypeDesc_Priority)),OOC_C_DeclWriter__TypeDesc_Priority)((OOC_C_DeclWriter__Type)i0);
  i2 = callerPri;
  i0 = i2<i0;
  if (!i0) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19869)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'(');
l4:
  return;
  ;
}

static void OOC_C_DeclWriter__WriteRight(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t, OOC_INT8 callerPri) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)t;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20007)))), OOC_C_DeclWriter__TypeDesc_Priority)),OOC_C_DeclWriter__TypeDesc_Priority)((OOC_C_DeclWriter__Type)i0);
  i2 = callerPri;
  i1 = i2<i1;
  i2 = (OOC_INT32)w;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20033)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)')');
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20065)))), OOC_C_DeclWriter__TypeDesc_WriteRight)),OOC_C_DeclWriter__TypeDesc_WriteRight)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i2);
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
  *(OOC_INT8*)(_check_pointer(i0, 20216)) = i1;
  _copy_8((const void*)(OOC_INT32)repr,(void*)((_check_pointer(i0, 20246))+1),32);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20622)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 20639))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20653)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)' ');
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
  *(OOC_INT8*)(_check_pointer(i0, 20876)) = i1;
  i1 = (OOC_INT32)base;
  *(OOC_INT32*)((_check_pointer(i0, 20915))+4) = i1;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21321))+4);
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21347)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, (OOC_CHAR8)'*');
  return;
  ;
}

void OOC_C_DeclWriter__PointerDesc_WriteRight(OOC_C_DeclWriter__Pointer p, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21457))+4);
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
  *(OOC_INT32*)(_check_pointer(i0, 21589)) = i1;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 21610))+4) = i1;
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
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21974));
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, 2);
  return;
  ;
}

void OOC_C_DeclWriter__ArrayDesc_WriteRight(OOC_C_DeclWriter__Array a, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22068)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'[');
  i1 = (OOC_INT32)a;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 22096))+4);
  i2 = i2>=0;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 22135))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22121)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i2, 0);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22161)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)']');
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22200));
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 2);
  return;
  ;
}

static void OOC_C_DeclWriter__InitFunction(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Type resultType, OOC_CHAR8 restParameters) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)resultType;
  *(OOC_INT32*)(_check_pointer(i0, 22338)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 22373))+4) = i1;
  i1 = restParameters;
  *(OOC_UINT8*)((_check_pointer(i0, 22415))+8) = i1;
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

void OOC_C_DeclWriter__FunctionDesc_AddParameter(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Declaration param) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fct;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22774))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22774))+4);
  i2 = (OOC_INT32)param;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22786)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  return;
  ;
}

OOC_INT8 OOC_C_DeclWriter__FunctionDesc_Priority(OOC_C_DeclWriter__Function fct) {

  return 2;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_WriteLeft(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fct;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23000));
  i1 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Type)i0, 2);
  return;
  ;
}

void OOC_C_DeclWriter__FunctionDesc_WriteRight(OOC_C_DeclWriter__Function fct, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23131)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'(');
  i1 = (OOC_INT32)fct;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23170))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23170))+4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23182)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i3);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l11;
  i3=0;
l3_loop:
  i4 = i3!=0;
  if (!i4) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23227)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
l6:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23289))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 23301));
  i4 = _check_pointer(i4, 23308);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 23308))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23266)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 23312)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 23312)));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 23345))+8);
  if (!i2) goto l14;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23374)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ...", 6);
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23413)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)')');
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23453));
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 2);
  return;
  ;
}

static void OOC_C_DeclWriter__InitStruct(OOC_C_DeclWriter__Struct _struct, OOC_CHAR8 isUnion, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_struct;
  i1 = isUnion;
  *(OOC_UINT8*)(_check_pointer(i0, 23604)) = i1;
  i1 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)((_check_pointer(i0, 23636))+8) = i1;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 23678))+4) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23994))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23994))+8);
  i2 = (OOC_INT32)param;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24003)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_C_DeclWriter__StructDesc_AddPadding(OOC_C_DeclWriter__Struct _struct, OOC_C_DeclWriter__Writer w, OOC_INT32 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 str[32];

  i0 = offset;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)str, 32);
  Strings__Insert("__pad", 6, 0, (void*)(OOC_INT32)str, 32);
  i0 = (OOC_INT32)_struct;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 32);
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 24347))+24)+(_check_index(10, 17, OOC_UINT8, 24358))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24245)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i1, (Object__String)i2, 0, 0, (OOC_C_DeclWriter__Type)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24231)))), OOC_C_DeclWriter__StructDesc_AddMember)),OOC_C_DeclWriter__StructDesc_AddMember)((OOC_C_DeclWriter__Struct)i0, (OOC_C_DeclWriter__Declaration)i1);
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
  i1 = *(OOC_UINT8*)(_check_pointer(i0, 24577));
  i2 = (OOC_INT32)w;
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24640)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "struct", 7);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24599)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "union", 6);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24689))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24715)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, " ", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24761))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24743)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i2, (Object__String)i1);
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24784)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, " {", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24811)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i2, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24849))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24849))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24858)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i3);
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l15;
  i3=0;
l10_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24879)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i2);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24923))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 24932));
  i4 = _check_pointer(i4, 24939);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 24939))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24897)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 24943)))), &_td_OOC_C_DeclWriter__DeclarationDesc, 24943)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24965)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ";", 2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l10_loop;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25008))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25008))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25017)))), ADT_ArrayList__ArrayListDesc_Size)),ADT_ArrayList__ArrayListDesc_Size)((ADT_ArrayList__ArrayList)i0);
  i0 = i0==0;
  if (!i0) goto l18;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25141)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25159)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "char __dummy;", 14);
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25206)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i2, -1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25226)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25242)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "} ", 3);
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
  *(OOC_INT8*)(_check_pointer(i0, 25472)) = i1;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 25501))+4) = i1;
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
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)typeRef;
  i1 = *(OOC_INT8*)(_check_pointer(i0, 25922));
  i2 = (OOC_INT32)w;
  switch (i1) {
  case 0:
    goto l6;
  case 1:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25970)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "struct ", 8);
    goto l6;
  case 2:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26016)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "union ", 7);
    goto l6;
  default:
    _failed_case(i1, 25910);
    goto l6;
  }
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26075))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26056)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i2, (Object__String)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26089)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, (OOC_CHAR8)' ');
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26264)))), OOC_C_DeclWriter__TypeDesc_WriteLeft)),OOC_C_DeclWriter__TypeDesc_WriteLeft)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26286)))), OOC_C_DeclWriter__TypeDesc_WriteRight)),OOC_C_DeclWriter__TypeDesc_WriteRight)((OOC_C_DeclWriter__Type)i0, (OOC_C_DeclWriter__Writer)i1);
  return;
  ;
}

static void OOC_C_DeclWriter__InitDeclaration(OOC_C_DeclWriter__Declaration d, Object__String name, OOC_INT8 typeQualifier, OOC_INT8 storageClass, OOC_C_DeclWriter__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 26615))+8) = i1;
  i1 = typeQualifier;
  *(OOC_INT8*)(_check_pointer(i0, 26636)) = i1;
  i1 = storageClass;
  *(OOC_INT8*)((_check_pointer(i0, 26675))+1) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 26712))+4) = i1;
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
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27236)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "const ", 7);
        goto l6;
      case 2:
        i0 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27282)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "volatile ", 10);
        goto l6;
      default:
        _failed_case(i0, 27173);
        goto l6;
      }
l6:
      return;
      ;
    }


  i0 = (OOC_INT32)d;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27367))+1);
  i2 = (OOC_INT32)w;
  switch (i1) {
  case 0:
    goto l10;
  case 1:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27422)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "typedef ", 9);
    goto l10;
  case 2:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27468)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "extern ", 8);
    goto l10;
  case 3:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27513)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "static ", 8);
    goto l10;
  case 4:
    goto l10;
  case 5:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27576)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "register ", 10);
    goto l10;
  case 6:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27624)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "auto ", 6);
    goto l10;
  default:
    _failed_case(i1, 27361);
    goto l10;
  }
l10:
  i0 = *(OOC_INT8*)(_check_pointer(i0, 27685));
  OOC_C_DeclWriter__DeclarationDesc_Write_WriteTypeQualifier((OOC_C_DeclWriter__Writer)i2, i0);
  i0 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27722))+4);
  i2 = (OOC_INT32)w;
  OOC_C_DeclWriter__WriteLeft((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i1, 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27765))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27752)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i2, (Object__String)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27794))+4);
  OOC_C_DeclWriter__WriteRight((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i0, 3);
  return;
  ;
}

static void OOC_C_DeclWriter__InitIncludeModule(OOC_C_DeclWriter__IncludeModule d, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)d;
  OOC_C_DeclWriter__InitDeclaration((OOC_C_DeclWriter__Declaration)i0, (Object__String)(OOC_INT32)0, 0, 4, (OOC_C_DeclWriter__Type)(OOC_INT32)0);
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 27973))+12) = i1;
  return;
  ;
}

OOC_C_DeclWriter__IncludeModule OOC_C_DeclWriter__WriterDesc_NewIncludeModule(OOC_C_DeclWriter__Writer w, OOC_Repository__Module module) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)module;
  _assert((i0!=(OOC_INT32)0), 127, 28143);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_C_DeclWriter__IncludeModule.baseTypes[0]);
  OOC_C_DeclWriter__InitIncludeModule((OOC_C_DeclWriter__IncludeModule)i1, (OOC_Repository__Module)i0);
  return (OOC_C_DeclWriter__IncludeModule)i1;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteModuleInclude(OOC_C_DeclWriter__Writer w, OOC_Repository__Module m, OOC_INT8 fileId) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Repository__URIBuffer path;
  OOC_INT32 i;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28452));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28452));
  i3 = fileId;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28459)))), OOC_Repository__RepositoryDesc_GetDefaultSuffix)),OOC_Repository__RepositoryDesc_GetDefaultSuffix)((OOC_Repository__Repository)i2, i3, (void*)(OOC_INT32)path, 1024);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28512))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28512))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 28517)), (OOC_INT32)0);
  Strings__Insert((void*)(_check_pointer(i1, 28517)), i0, (OOC_INT32)0, (void*)(OOC_INT32)path, 1024);
  i = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(0, 1024, OOC_UINT32, 28557)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l11;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, 1024, OOC_UINT32, 28584)));
  i1 = i1==(OOC_CHAR8)':';
  if (!i1) goto l6;
  *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, 1024, OOC_UINT32, 28612))) = (OOC_CHAR8)'/';
l6:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)path+(_check_index(i0, 1024, OOC_UINT32, 28557)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3_loop;
l11:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28663)))), OOC_C_DeclWriter__WriterDesc_WriteInclude)),OOC_C_DeclWriter__WriterDesc_WriteInclude)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)path, 1024);
  return;
  ;
}

void OOC_C_DeclWriter__IncludeModuleDesc_Write(OOC_C_DeclWriter__IncludeModule d, OOC_C_DeclWriter__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)d;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28794))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28773)))), OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)),OOC_C_DeclWriter__WriterDesc_WriteModuleInclude)((OOC_C_DeclWriter__Writer)i0, (OOC_Repository__Module)i1, 13);
  return;
  ;
}

static void OOC_C_DeclWriter__InitDefine(OOC_C_DeclWriter__Define d, Object__String name, Object_Boxed__Object _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)d;
  OOC_C_DeclWriter__InitDeclaration((OOC_C_DeclWriter__Declaration)i1, (Object__String)i0, 0, 4, (OOC_C_DeclWriter__Type)(OOC_INT32)0);
  i0 = (OOC_INT32)_const;
  *(OOC_INT32*)((_check_pointer(i1, 29002))+12) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29311)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "#define ", 9);
  i1 = (OOC_INT32)d;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29357))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29344)))), OOC_C_DeclWriter__WriterDesc_WriteStr)),OOC_C_DeclWriter__WriterDesc_WriteStr)((OOC_C_DeclWriter__Writer)i0, (Object__String)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29371)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ", 2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29401))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29504))+12);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29489)))), OOC_C_DeclWriter__WriterDesc_WriteConst)),OOC_C_DeclWriter__WriterDesc_WriteConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i2);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29428)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " 0", 3);
l4:
  return;
  ;
}

void OOC_C_DeclWriter__WriterDesc_WriteTypeCast(OOC_C_DeclWriter__Writer w, OOC_C_DeclWriter__Type t) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29636)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)'(');
  i1 = (OOC_INT32)t;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29660)))), OOC_C_DeclWriter__TypeDesc_WriteLeft)),OOC_C_DeclWriter__TypeDesc_WriteLeft)((OOC_C_DeclWriter__Type)i1, (OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29682)))), OOC_C_DeclWriter__TypeDesc_WriteRight)),OOC_C_DeclWriter__TypeDesc_WriteRight)((OOC_C_DeclWriter__Type)i1, (OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29705)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, (OOC_CHAR8)')');
  return;
  ;
}

static void OOC_C_DeclWriter__Test() {
  register OOC_INT32 i0,i1;
  OOC_C_DeclWriter__Writer w;
  Msg__Msg res;
  TextRider__Reader r;
  OOC_C_DeclWriter__Type fct;
  auto void OOC_C_DeclWriter__Test_Cmp(OOC_C_DeclWriter__Type t, const OOC_CHAR8 expected__ref[], OOC_LEN expected_0d);
    
    void OOC_C_DeclWriter__Test_Cmp(OOC_C_DeclWriter__Type t, const OOC_CHAR8 expected__ref[], OOC_LEN expected_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(expected,OOC_CHAR8 ,expected_0d)
      OOC_CHAR8 result[4096];

      OOC_INITIALIZE_VPAR(expected__ref,expected,OOC_CHAR8 ,expected_0d)
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)t;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30007)))), OOC_C_DeclWriter__WriterDesc_NewDeclaration)),OOC_C_DeclWriter__WriterDesc_NewDeclaration)((OOC_C_DeclWriter__Writer)i0, (Object__String)((OOC_INT32)_c0), 0, 4, (OOC_C_DeclWriter__Type)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29986)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Declaration)i1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30058)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30083)))), TextRider__ReaderDesc_ReadLine)),TextRider__ReaderDesc_ReadLine)((TextRider__Reader)i0, (void*)(OOC_INT32)result, 4096);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30119));
      _assert((i0==(OOC_INT32)0), 127, 30110);
      i0 = (
      _cmp8((const void*)(OOC_INT32)result,(const void*)(OOC_INT32)expected))!=(OOC_INT32)0;
      if (i0) goto l3;
      Err__String("done: ", 7);
      Err__String((void*)(OOC_INT32)result, 4096);
      Err__Ln();
      goto l4;
l3:
      Err__String("expected: ", 11);
      Err__String((void*)(OOC_INT32)expected, expected_0d);
      Err__Ln();
      Err__String("but got : ", 11);
      Err__String((void*)(OOC_INT32)result, 4096);
      Err__Ln();
      _halt(1);
l4:
      return;
      ;
    }


  Err__String("Running OOC:C:WriteDecl.Test...", 32);
  Err__Ln();
  i0 = (OOC_INT32)IO_Memory__Tmp("", 1, 3, (void*)(OOC_INT32)&res);
  i0 = (OOC_INT32)OOC_C_DeclWriter__NewWriter((Channel__Channel)i0, (URI__HierarchicalURI)(OOC_INT32)0);
  w = (OOC_C_DeclWriter__Writer)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30579));
  _assert((i1!=(OOC_INT32)0), 127, 30570);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30627));
  i1 = (OOC_INT32)TextRider__ConnectReader((Channel__Channel)i1);
  r = (TextRider__Reader)i1;
  _assert((i1!=(OOC_INT32)0), 127, 30638);
  i1 = (OOC_INT32)OOC_C_DeclWriter__NewBasicType(4, "int", 4);
  *(OOC_INT32*)(((_check_pointer(i0, 30662))+24)+(_check_index(4, 17, OOC_UINT8, 30672))*4) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 30747))+24)+(_check_index(4, 17, OOC_UINT8, 30757))*4);
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x", 6);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 30808))+24)+(_check_index(4, 17, OOC_UINT8, 30818))*4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30785)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int *x", 7);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 30861))+24)+(_check_index(4, 17, OOC_UINT8, 30871))*4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30848)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x[8]", 9);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 30942))+24)+(_check_index(4, 17, OOC_UINT8, 30952))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30919)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30906)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int *x[8]", 10);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31025))+24)+(_check_index(4, 17, OOC_UINT8, 31035))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31012)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30989)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int (*x)[8]", 12);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31100))+24)+(_check_index(4, 17, OOC_UINT8, 31110))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31087)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31074)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 4);
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x[4][8]", 12);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31176))+24)+(_check_index(4, 17, OOC_UINT8, 31186))*4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31160)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x()", 8);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31280))+24)+(_check_index(4, 17, OOC_UINT8, 31290))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31257)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31241)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int *x()", 9);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31376))+24)+(_check_index(4, 17, OOC_UINT8, 31386))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31363)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31347)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x()[8]", 11);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31492))+24)+(_check_index(4, 17, OOC_UINT8, 31502))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31476)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31453)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int (*x)()", 11);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31623))+24)+(_check_index(4, 17, OOC_UINT8, 31633))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31600)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31584)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31561)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int *(*x)()", 12);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31746))+24)+(_check_index(4, 17, OOC_UINT8, 31756))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31733)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31717)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31694)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int (*x)()[8]", 14);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31856))+24)+(_check_index(4, 17, OOC_UINT8, 31866))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31840)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31827)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 4);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x[4]()", 11);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 31980))+24)+(_check_index(4, 17, OOC_UINT8, 31990))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31957)))), OOC_C_DeclWriter__WriterDesc_NewPointer)),OOC_C_DeclWriter__WriterDesc_NewPointer)((OOC_C_DeclWriter__Writer)i0, 0, (OOC_C_DeclWriter__Type)i1);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31941)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31928)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 4);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int *x[4]()", 12);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 32096))+24)+(_check_index(4, 17, OOC_UINT8, 32106))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32083)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32067)))), OOC_C_DeclWriter__WriterDesc_NewFunction)),OOC_C_DeclWriter__WriterDesc_NewFunction)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, OOC_FALSE);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32054)))), OOC_C_DeclWriter__WriterDesc_NewArray)),OOC_C_DeclWriter__WriterDesc_NewArray)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1, 4);
  fct = (OOC_C_DeclWriter__Type)i0;
  OOC_C_DeclWriter__Test_Cmp((OOC_C_DeclWriter__Type)i0, "int x[4]()[8]", 14);
  Err__String("no errors", 10);
  Err__Ln();
  return;
  ;
}

void OOC_OOC_C_DeclWriter_init(void) {
  _c0 = Object__NewLatin1Char((OOC_CHAR8)'x');

  return;
  ;
}

/* --- */
