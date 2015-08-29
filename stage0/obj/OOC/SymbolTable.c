#include <OOC/SymbolTable.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable__WriterDesc_INIT(OOC_SymbolTable__Writer w, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)chDoc;
  _assert((i0!=(OOC_INT32)0), 127, 44545);
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)ch;
  ADT_Object_Storage__InitWriter((ADT_Object_Storage__Writer)i1, (IO__ByteChannel)i2);
  i0 = (OOC_INT32)ADT_Object_Storage__ConnectWriter((IO__ByteChannel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 44602))+280) = i0;
  return;
  ;
}

void OOC_SymbolTable__ReaderDesc_INIT(OOC_SymbolTable__Reader r, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  ADT_Object_Storage__InitReader((ADT_Object_Storage__Reader)i0, (IO__ByteChannel)i1);
  i1 = (OOC_INT32)chDoc;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)ADT_Object_Storage__ConnectReader((IO__ByteChannel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 44822))+280) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 44787))+280) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(44998); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = 0u;
  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46900)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(47030); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = 0u;
  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47954)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__NamespaceDesc_GetSuperProcByIndex(OOC_SymbolTable__Namespace ns, OOC_INT32 index) {

  _assert(0u, 127, 48222);
  _failed_function(48063); return 0;
  ;
}

static void OOC_SymbolTable__WriteType(ADT_Storable__Writer w, OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)srcCodeType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48361)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

static void OOC_SymbolTable__ReadType(ADT_Storable__Reader r, OOC_SymbolTable__Type *type, OOC_SymbolTable__Type *srcCodeType) {
  register OOC_INT32 i0,i1;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48534)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48655)))), &_td_OOC_SymbolTable__TypeDesc, 48655);
  *srcCodeType = (OOC_SymbolTable__Type)i0;
  *type = (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  *srcCodeType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  *type = (OOC_SymbolTable__Type)(OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitPosition(OOC_SymbolTable__Position position, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)position;
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 48862)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 48888))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 48916))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)position;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 49121));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49101)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49154))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49134)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 49188))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49168)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)position;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49356)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 49375)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49388)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 49407))+4));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49421)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 49440))+8));
  return;
  ;
}

void OOC_SymbolTable__InitName(OOC_SymbolTable__Name name, OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)name;
  i1 = pos;
  i2 = line;
  i3 = column;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, i1, i2, i3);
  i1 = (OOC_INT32)str;
  *(OOC_INT32*)((_check_pointer(i0, 49653))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49877))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49877))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49882)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 49882)), i2);
  len = i1;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49891)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49932))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49914)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 49937)), (-1), 0, i1);
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Load(OOC_SymbolTable__Name name, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_Scanner_InputBuffer__CharArray str;

  i0 = (OOC_INT32)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, (-2), (-1), (-1));
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50205)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 50251);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 50251))) = 0u;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50269)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 50285)), (-1), 0, i2);
  *(OOC_INT32*)((_check_pointer(i0, 50305))+12) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 50397)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 50426))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 50456))+12) = 0;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 50490))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 50518))+16) = 0;
  i2 = i1!=0;
  if (!i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50587)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50624)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50663)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=1u;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50700)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l15;
l13:
  i2=1u;
l15:
  if (i2) goto l17;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50741)))), &_td_OOC_SymbolTable__TypeParsDesc);
  
  goto l18;
l17:
  i2=1u;
l18:
  _assert(i2, 127, 50570);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50772))+8);
  i2 = i2==0;
  if (i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50857))+12);
  *(OOC_INT32*)(_check_pointer(i2, 50873)) = i0;
  goto l22;
l21:
  *(OOC_INT32*)((_check_pointer(i1, 50810))+8) = i0;
l22:
  *(OOC_INT32*)((_check_pointer(i1, 50917))+12) = i0;
l23:
  return;
  ;
}

static void OOC_SymbolTable__WriteItemList(ADT_Storable__Writer w, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)w;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l8;
  
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51080)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51119));
  item = (OOC_SymbolTable__Item)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51146)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)(OOC_INT32)0);
  return;
  ;
}

static void OOC_SymbolTable__ReadItemList(ADT_Storable__Reader r, OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;

  *list = (OOC_SymbolTable__Item)(OOC_INT32)0;
  *last = (OOC_SymbolTable__Item)(OOC_INT32)0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51368)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l16;
  i2=(OOC_INT32)0;
l3_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51425)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i3) goto l6;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51416)))), 51416);
  i1=i2;
  goto l11;
l6:
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l9;
  *list = (OOC_SymbolTable__Item)i1;
  goto l10;
l9:
  *(OOC_INT32*)(_check_pointer(i2, 51476)) = i1;
l10:
  *last = (OOC_SymbolTable__Item)i1;
  
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51581)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l16;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l3_loop;
l16:
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Store(OOC_SymbolTable__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51729))+8);
  i2 = (OOC_INT32)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51768))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 51749)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 51944)) = 0;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 51989))+8), (void*)((_check_pointer(i0, 52008))+12));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52033)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 52122))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52138)))), &_td_OOC_SymbolTable__ItemDesc, 52138));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 52087))+4) = 0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 52161))+16) = 0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52647))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52670)))), &_td_OOC_SymbolTable__TypeDesc);
  
l5:
  if (!i1) goto l8;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52703)))), &_td_OOC_SymbolTable__TypeDesc, 52703)), 52708)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52703)))), &_td_OOC_SymbolTable__TypeDesc, 52703)));
  item = (OOC_SymbolTable__Item)i0;
  
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52782))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l25;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52818))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52841))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52864)))), &_td_OOC_SymbolTable__TypeDesc);
  
l17:
  if (!i1) goto l20;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52899)))), &_td_OOC_SymbolTable__TypeDesc, 52899)), 52904)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52899)))), &_td_OOC_SymbolTable__TypeDesc, 52899)));
  item = (OOC_SymbolTable__Item)i0;
  
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52782))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l12_loop;
l25:
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52991)))), &_td_OOC_SymbolTable__ModuleDesc, 52991));
  ;
}

OOC_CHAR8 OOC_SymbolTable__ItemDesc_InStandardModule(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Module module;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53263))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53366)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i0;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 53397))+52);
  return (i0==0);
  goto l4;
l3:
  return 1u;
l4:
  _failed_function(53037); return 0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53682))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53723)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=1u;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53806)))), &_td_OOC_SymbolTable__ProcDeclDesc, 53806));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l13:
  _failed_function(53478); return 0;
  ;
}

void OOC_SymbolTable__ItemDesc_AddFlag(OOC_SymbolTable__Item item, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT16 id;
  OOC_SymbolTable__Flag fl;
  auto void OOC_SymbolTable__ItemDesc_AddFlag_Append(OOC_SymbolTable__Flag *list);
    
    void OOC_SymbolTable__ItemDesc_AddFlag_Append(OOC_SymbolTable__Flag *list) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 54245)));
      goto l4;
l3:
      i0 = (OOC_INT32)fl;
      *(OOC_INT32*)(_check_pointer(i0, 54177)) = (OOC_INT32)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54307))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54311)),(const void*)"NO_COPY"))==0;
  if (i1) goto l71;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54370))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54374)),(const void*)"ABSTRACT"))==0;
  if (i1) goto l69;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54436))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54440)),(const void*)"NO_LENGTH_INFO"))==0;
  if (i1) goto l67;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54512))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54516)),(const void*)"NO_DESCRIPTOR"))==0;
  if (i1) goto l65;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54587))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54591)),(const void*)"NOT_EXTENSIBLE"))==0;
  if (i1) goto l63;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54738))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54742)),(const void*)"UNCHECKED_EXCEPTION"))==0;
  if (i1) goto l61;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54825))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54829)),(const void*)"CSTRING"))==0;
  if (i1) goto l59;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54889))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54893)),(const void*)"NIL_COMPAT"))==0;
  if (i1) goto l57;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54958))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 54962)),(const void*)"UNION"))==0;
  if (i1) goto l55;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55018))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55022)),(const void*)"READ_ONLY"))==0;
  if (i1) goto l53;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55085))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55089)),(const void*)"NO_RETURN"))==0;
  if (i1) goto l51;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55152))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55156)),(const void*)"DEPRECATED"))==0;
  if (i1) goto l49;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55222))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55226)),(const void*)"OOC_EXTENSIONS"))==0;
  if (i1) goto l47;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55299))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55303)),(const void*)"ALIGN1"))==0;
  if (i1) goto l45;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55361))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55365)),(const void*)"ALIGN2"))==0;
  if (i1) goto l43;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55423))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55427)),(const void*)"ALIGN4"))==0;
  if (i1) goto l41;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55485))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55489)),(const void*)"ALIGN8"))==0;
  if (i1) goto l39;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55547))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55551)),(const void*)"VTABLE"))==0;
  if (i1) goto l37;
  id = (-1);
  i1=(-1);
  goto l72;
l37:
  id = 17;
  i1=17;
  goto l72;
l39:
  id = 16;
  i1=16;
  goto l72;
l41:
  id = 15;
  i1=15;
  goto l72;
l43:
  id = 14;
  i1=14;
  goto l72;
l45:
  id = 13;
  i1=13;
  goto l72;
l47:
  id = 11;
  i1=11;
  goto l72;
l49:
  id = 10;
  i1=10;
  goto l72;
l51:
  id = 9;
  i1=9;
  goto l72;
l53:
  id = 8;
  i1=8;
  goto l72;
l55:
  id = 7;
  i1=7;
  goto l72;
l57:
  id = 6;
  i1=6;
  goto l72;
l59:
  id = 5;
  i1=5;
  goto l72;
l61:
  id = 18;
  i1=18;
  goto l72;
l63:
  id = 4;
  i1=4;
  goto l72;
l65:
  id = 3;
  i1=3;
  goto l72;
l67:
  id = 2;
  i1=2;
  goto l72;
l69:
  id = 1;
  i1=1;
  goto l72;
l71:
  id = 0;
  i1=0;
l72:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 55661))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 55678))+8) = i0;
  i0 = (OOC_INT32)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 55707))+16));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 55983))+20) = i1;
  i1 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i0, 56007))+24) = i1;
  i1 = exportMark;
  *(OOC_INT8*)((_check_pointer(i0, 56045))+28) = i1;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 56081))+32) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 56115))+36) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 56146))+40) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 56173))+44) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56345))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56326)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 56416))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56400)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 56443))+28);
  i2 = i2!=0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56554)))), &_td_OOC_SymbolTable__WriterDesc, 56554)), 56561))+280);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56554)))), &_td_OOC_SymbolTable__WriterDesc, 56554)), 56561))+280);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56571)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i3, (Object__Object)(OOC_INT32)0);
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56488)))), &_td_OOC_SymbolTable__WriterDesc, 56488)), 56495))+280);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56522))+32);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56488)))), &_td_OOC_SymbolTable__WriterDesc, 56488)), 56495))+280);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56505)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i4, (Object__Object)i3);
l4:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 56621))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56604)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Load(OOC_SymbolTable__Declaration decl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56803)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 56831))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56845)))), &_td_OOC_SymbolTable__NameDesc, 56845));
  *(OOC_INT32*)((_check_pointer(i0, 57014))+24) = (-3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57228)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i0, 57247))+28) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57370)))), &_td_OOC_SymbolTable__ReaderDesc, 57370)), 57377))+280);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 57590))+32) = (OOC_INT32)0;
  goto l8;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57408)))), &_td_OOC_SymbolTable__ReaderDesc, 57408)), 57415))+280);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57408)))), &_td_OOC_SymbolTable__ReaderDesc, 57408)), 57415))+280);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 57425)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i3, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l6;
  *(OOC_INT32*)((_check_pointer(i0, 57527))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 57549)))), &_td_OOC_Doc__DocumentDesc, 57549));
  goto l8;
l6:
  *(OOC_INT32*)((_check_pointer(i0, 57483))+32) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57628)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 57644))+36));
  *(OOC_INT32*)((_check_pointer(i0, 57666))+40) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 57693))+44) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCounter(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 57794))+44);
  *(OOC_INT32*)((_check_pointer(i0, 57794))+44) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58214)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58233))+24);
  i0 = i0==(OOC_INT32)0;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__InitType(OOC_SymbolTable__Type type, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)position;
  *(OOC_INT32*)((_check_pointer(i0, 58394))+20) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 58426))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 58455))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 58482))+32) = (-2);
  *(OOC_INT16*)((_check_pointer(i0, 58513))+36) = 1;
  *(OOC_UINT8*)((_check_pointer(i0, 58535))+38) = 1u;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDesc_PreciousTypePars(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58893))+28);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58917))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58926))+8);
  i0 = i0!=(OOC_INT32)0;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDesc_IsCheckedException(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59069)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  return 1u;
  goto l8;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59103)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59132)))), &_td_OOC_SymbolTable__PointerDesc, 59132)), 59140))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59132)))), &_td_OOC_SymbolTable__PointerDesc, 59132)), 59140))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59149)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i0;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59180)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l6;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59199)))), &_td_OOC_SymbolTable__RecordDesc, 59199)), 59206))+59);
  i0 = !i0;
  
  goto l7;
l6:
  i0=1u;
l7:
  return i0;
l8:
  _failed_function(58995); return 0;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59415))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59396)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59441)))), OOC_SymbolTable__TypeDesc_PreciousTypePars)),OOC_SymbolTable__TypeDesc_PreciousTypePars)((OOC_SymbolTable__Type)i0);
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59518)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)(OOC_INT32)0);
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59490))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59473)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i0);
  if (!i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59610))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59591)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
l7:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 59653))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59637)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i0, 59683))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59667)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 59715))+38);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59698)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Load(OOC_SymbolTable__Type type, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59894)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 59987))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 60007)))), &_td_OOC_SymbolTable__TypeDeclDesc, 60007));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 59948))+24) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60031)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 60122))+28) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 60140)))), &_td_OOC_SymbolTable__TypeParsDesc, 60140));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 60085))+28) = (OOC_INT32)0;
l8:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i0);
  if (i2) goto l11;
  i2 = (OOC_INT32)OOC_SymbolTable__importPosition;
  *(OOC_INT32*)((_check_pointer(i0, 60282))+20) = i2;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60204)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 60234))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 60252)))), &_td_OOC_SymbolTable__PositionDesc, 60252));
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60326)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 60341))+32));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60355)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i0, 60378))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60405)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 60421))+38));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)namingDecl;
  *(OOC_INT32*)((_check_pointer(i0, 60618))+24) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetTypePars(OOC_SymbolTable__Type type, OOC_SymbolTable__TypePars typePars) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)typePars;
  *(OOC_INT32*)((_check_pointer(i0, 60808))+28) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 60933))+32) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 60957))+36) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61221)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61270)))), &_td_OOC_SymbolTable__ArrayDesc, 61270)), 61276))+44);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61221)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeDesc_Deparam(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeDesc_Bound(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeDesc_Closure(OOC_SymbolTable__Type type, OOC_SymbolTable__Type subType) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)subType;
  i0 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Type)i0;
  ;
}

static void OOC_SymbolTable__InitLinkDirective(OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 62308)) = 0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62452));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62436)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62590)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 62671)) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62685)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 62685));
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 62641)) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Store(OOC_SymbolTable__LinkFile l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri);
    
    void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri) {
      register OOC_INT32 i0,i1,i2;
      Object__String8 str8;
      Object__CharsLatin1 chars;

      i0 = (OOC_INT32)uri;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62973)))), URI__URIDesc_ToString)),URI__URIDesc_ToString)((URI__URI)i0);
      str8 = (Object__String8)i0;
      i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
      chars = (Object__CharsLatin1)i0;
      i1 = (OOC_INT32)w;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 63046)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63028)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)(_check_pointer(i0, 63046)), i2);
      return;
      ;
    }


  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63116))+4);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i1, (URI__HierarchicalURI)i0);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63143))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63130)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63178))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63165)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__String str;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63312)))), IO_BinaryRider__ReaderDesc_ReadStr)),IO_BinaryRider__ReaderDesc_ReadStr)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&str);
  i0 = (OOC_INT32)str;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT32)0;
l4:
  _failed_function(63219); return 0;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Load(OOC_SymbolTable__LinkFile l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(volatile ADT_Storable__Reader r, volatile URI__HierarchicalURI *uri);
    
    void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(volatile ADT_Storable__Reader r, volatile URI__HierarchicalURI *uri) {
      register OOC_INT32 i0,i1;
      volatile OOC_CHAR8 b[1024];
      volatile URI__URI u;
      jmp_buf _target0;
      Exception__Context _context0;

      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63655)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)b, 1024);
      {
        Exception__PushContext(&_context0, &_target0);
        if (!setjmp(_target0)) goto l7;
        Exception__PopContext(1);
        i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_Exception__ParseErrorDesc);
        if (i0) goto l5;
        Exception__ActivateContext();
        goto l6;
l5:
        _assert(0u, 127, 63886);
l6:
        Exception__Clear();
        goto l8;
l7:
        i0 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
        i0 = (OOC_INT32)URI_Parser__NewURILatin1((void*)(OOC_INT32)b, 1024, (URI__HierarchicalURI)i0);
        u = (URI__URI)i0;
        Exception__PopContext(1);
l8:;
      }
      i0 = (OOC_INT32)u;
      i1 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64008)))), &_td_URI__HierarchicalURIDesc, 64008)), 64024)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64008)))), &_td_URI__HierarchicalURIDesc, 64008)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64074)))), &_td_URI__HierarchicalURIDesc, 64074));
      return;
      ;
    }


  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 64155))+4));
  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64169))+8) = i2;
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64207))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64389))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64376)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64423))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64410)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64458))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64445)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 64493))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64480)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64525))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 64539)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64507)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64568))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 64582)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64610))+8);
  i4 = _check_pointer(i4, 64624);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 64624))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64597)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Load(OOC_SymbolTable__LinkLib l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Reader)i1);
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64776))+4) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64813))+12) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64851))+16) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64889)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64901))+20));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64914)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 64941))+8) = ((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64997))+8);
  i4 = _check_pointer(i4, 65011);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 65011))*4) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__InitModule(OOC_SymbolTable__Module mod, OOC_SymbolTable__Name name, OOC_Doc__Document docString, OOC_INT8 _class, OOC_INT8 callConv, OOC_AST__Node moduleAST, OOC_SymbolTable__ProcDecl bodyDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)i2);
  *(OOC_INT32*)((_check_pointer(i0, 65339))+48) = (OOC_INT32)0;
  i1 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 65359))+52) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 65384))+56) = (OOC_INT32)0;
  i1 = callConv;
  *(OOC_INT8*)((_check_pointer(i0, 65413))+60) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 65444))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 65476))+68) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 65503))+72) = (OOC_INT32)0;
  i1 = (OOC_INT32)moduleAST;
  *(OOC_INT32*)((_check_pointer(i0, 65534))+76) = i1;
  i1 = (OOC_INT32)bodyDecl;
  *(OOC_INT32*)((_check_pointer(i0, 65567))+80) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 65757))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65741)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65787))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65772)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 65823))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65807)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65859))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65841)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 66024))+48) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66042)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66057))+52));
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 66074))+56) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66111)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66126))+60));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66144)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 66239))+64) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66263)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 66263));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 66197))+64) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 66294))+72) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 66325))+76) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 66501))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 66605))+56) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 66720))+52);
  switch (i0) {
  case 0:
    return (Object__String)((OOC_INT32)_c0);
    goto l7;
  case 1:
    return (Object__String)((OOC_INT32)_c1);
    goto l7;
  case 2:
    return (Object__String)((OOC_INT32)_c2);
    goto l7;
  case 3:
    return (Object__String)((OOC_INT32)_c3);
    goto l7;
  default:
    _failed_case(i0, 66712);
    goto l7;
  }
l7:
  _failed_function(66674); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 66982))+60);
  switch (i0) {
  case (-1):
    return (Object__String)((OOC_INT32)_c4);
    goto l8;
  case 0:
    return (Object__String)((OOC_INT32)_c5);
    goto l8;
  case 1:
    return (Object__String)((OOC_INT32)_c6);
    goto l8;
  case 2:
    return (Object__String)((OOC_INT32)_c7);
    goto l8;
  case 3:
    return (Object__String)((OOC_INT32)_c8);
    goto l8;
  default:
    _failed_case(i0, 66974);
    goto l8;
  }
l8:
  _failed_function(66933); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)((_check_pointer(i0, 67428))+4) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 67449))+8) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 67486))+12) = i1;
  return (OOC_SymbolTable__LinkFile)i0;
  ;
}

static OOC_SymbolTable__LinkLib OOC_SymbolTable__NewLinkLib(Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption, OOC_INT32 type) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkLib l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkLib.baseTypes[0]);
  l = (OOC_SymbolTable__LinkLib)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)libraryName;
  *(OOC_INT32*)((_check_pointer(i0, 67833))+4) = i1;
  i1 = (OOC_INT32)dependencies;
  *(OOC_INT32*)((_check_pointer(i0, 67868))+8) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 67905))+12) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 67942))+16) = i1;
  i1 = type;
  *(OOC_INT32*)((_check_pointer(i0, 67979))+20) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 68207)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 68139)) = (OOC_INT32)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  _assert((i0!=(OOC_INT32)0), 127, 68401);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)prefixOption;
  i3 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i2, (Object__String)i3);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 68447))+64), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption, OOC_INT32 type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)libraryName;
  _assert((i0!=(OOC_INT32)0), 127, 68825);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)dependencies;
  i3 = (OOC_INT32)prefixOption;
  i4 = (OOC_INT32)suffixOption;
  i5 = type;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i2, (Object__String)i3, (Object__String)i4, i5);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 68878))+64), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 69537))+52);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 69566))+52);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  return 0u;
  goto l25;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69605))+64);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69650)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 69680));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69650)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT32)0);
l25:
  _failed_function(69069); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 70210))+52);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 70238))+52);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=1u;
l4:
  _assert(i1, 127, 70198);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70275))+64);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70319)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 70347));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70319)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70428)))), &_td_OOC_SymbolTable__LinkFileDesc, 70428)), 70437))+4);
  _assert((i1!=(OOC_INT32)0), 127, 70418);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70460)))), &_td_OOC_SymbolTable__LinkFileDesc, 70460)), 70469))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70460)))), &_td_OOC_SymbolTable__LinkFileDesc, 70460)), 70469))+4);
  i3 = (OOC_INT32)rootURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70475)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70519)))), &_td_OOC_SymbolTable__LinkFileDesc, 70519)), 70528))+4);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT32)0;
l25:
  _failed_function(69804); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)str;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70641)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c9));
  if (i1) goto l7;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70695)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c10));
  if (i0) goto l5;
  return (-1);
  goto l8;
l5:
  return 3;
  goto l8;
l7:
  return 2;
l8:
  _failed_function(70581); return 0;
  ;
}

void OOC_SymbolTable__InitImport(OOC_SymbolTable__Import import, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_Doc__Document docString, OOC_SymbolTable__Name moduleName) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, 0, (OOC_Doc__Document)i4);
  i1 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i0, 71102))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 71140))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 71266))+52) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 71327))+68);
  *(OOC_INT32*)((_check_pointer(i0, 71304))+56) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)import;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71592))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71604))+12);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 71609)),(const void*)"SYSTEM"))==0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71780))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71759)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 71819))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71800)))), IO_BinaryRider__WriterDesc_WriteLInt)),IO_BinaryRider__WriterDesc_WriteLInt)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71986)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 72016))+48) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72036)))), &_td_OOC_SymbolTable__NameDesc, 72036));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72048)))), IO_BinaryRider__ReaderDesc_ReadLInt)),IO_BinaryRider__ReaderDesc_ReadLInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 72066))+56));
  return;
  ;
}

void OOC_SymbolTable__InitConstDecl(OOC_SymbolTable__ConstDecl constDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, Object_Boxed__Object value, OOC_SymbolTable__PredefType type, OOC_AST__Node constExpr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 72533))+48) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 72564))+52) = i1;
  i1 = (OOC_INT32)constExpr;
  *(OOC_INT32*)((_check_pointer(i0, 72593))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 72752))+48) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 72782))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72960))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72936)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72987))+52);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73219))+52);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 73225))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73198)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73166)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
l4:
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Load(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_INT32 id;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73416)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 73514))+48) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73535)))), &_td_Object_Boxed__ObjectDesc, 73535));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 73475))+48) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73557)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&id);
  i1 = id;
  i2 = i1==(-1);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 73727);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 73727))*4);
  *(OOC_INT32*)((_check_pointer(i0, 73703))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73756))+52);
  _assert((i1!=(OOC_INT32)0), 127, 73739);
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 73664))+52) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 73792))+56) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__InitExceptionName(OOC_SymbolTable__ExceptionName exceptionName, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 74005))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 74045))+20) = i1;
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Store(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74288))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74308))+24);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Load(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 74489))+20), (void*)((_check_pointer(i0, 74509))+24));
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74671)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74690)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=1u;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 74749))+48) = i1;
  i2 = _check_pointer(i0, 74776);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 74815))+56);
  if (i3) goto l3;
  i3=0u;
  goto l8;
l3:
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 74847))+59);
  if (i3) goto l6;
  i3 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i3=1u;
l8:
  *(OOC_UINT8*)(i2+60) = i3;
  i2 = _check_pointer(i0, 74900);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 74933))+56);
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 74965))+59);
  i3 = !i3;
  
l13:
  if (i3) goto l15;
  i1=0u;
  goto l16;
l15:
  i1 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
l16:
  *(OOC_UINT8*)(i2+61) = i1;
  i1 = _check_pointer(i0, 75024);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 75055))+60);
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 75094))+59);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=0u;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 75125))+61);
  i0 = !i0;
  
l24:
  *(OOC_UINT8*)(i1+62) = i0;
  return;
  ;
}

void OOC_SymbolTable__InitVarDecl(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isParameter, OOC_CHAR8 isReceiver, OOC_CHAR8 isVarParam, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i2 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 75553))+52) = i2;
  i3 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i0, 75587))+56) = i3;
  i3 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i0, 75628))+57) = i3;
  *(OOC_UINT8*)((_check_pointer(i0, 75667))+58) = 0u;
  i4 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i0, 75703))+59) = i4;
  *(OOC_UINT8*)((_check_pointer(i0, 75742))+63) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 75783))+64) = 1u;
  if (!i3) goto l3;
  *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75845)))), &_td_OOC_SymbolTable__FormalParsDesc, 75845)), 75856))+40) = i0;
l3:
  OOC_SymbolTable__VarDeclDesc_SetType((OOC_SymbolTable__VarDecl)i0, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Store(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76067))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76081))+52);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76121))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76101)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76162))+57);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76142)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76202))+58);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76182)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76244))+59);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76224)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76284))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76264)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76332))+61);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76312)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76374))+62);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76354)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76414))+63);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76394)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 76461))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76441)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 76622))+48), (void*)((_check_pointer(i0, 76636))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76656)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76675))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76696)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76715))+57));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76735)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76754))+58));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76776)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76795))+59));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76815)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76834))+60));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76862)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76881))+61));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76903)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76922))+62));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76942)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76961))+63));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76988)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 77007))+64));
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 77045))+56);
  if (!i1) goto l4;
  *(OOC_INT32*)((_check_pointer(i0, 77157))+24) = (-1);
l4:
  return;
  ;
}

void OOC_SymbolTable__InitTypeDecl(OOC_SymbolTable__TypeDecl typeDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type, OOC_CHAR8 isTypeParameter) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 77586))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 77614))+52) = i1;
  i1 = isTypeParameter;
  *(OOC_UINT8*)((_check_pointer(i0, 77649))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77843))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77858))+52);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 77899))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77878)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 78065))+48), (void*)((_check_pointer(i0, 78080))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78100)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 78120))+56));
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDeclDesc_HasTypeParameters(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__TypePars typePars;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78277))+48);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78282))+28);
  typePars = (OOC_SymbolTable__TypePars)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78332))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78337))+4);
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDeclDesc_IsTypeParameter(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)typeDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78472))+4);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78480)))), &_td_OOC_SymbolTable__TypeParsDesc));
  ;
}

OOC_SymbolTable__TypeDecl OOC_SymbolTable__TypeDeclDesc_ParametricType(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Item ptr;

  i0 = (OOC_INT32)typeDecl;
  i1 = OOC_SymbolTable__TypeDeclDesc_IsTypeParameter((OOC_SymbolTable__TypeDecl)i0);
  _assert(i1, 127, 78703);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78758))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78765))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78772))+8);
  ptr = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78802)))), &_td_OOC_SymbolTable__TypeDeclDesc));
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78833)))), &_td_OOC_SymbolTable__TypeDeclDesc, 78833)), 78842))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 78847))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78865))+4);
  i2 = i2!=i3;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (i2) goto l8_loop;
  i0=i1;
  goto l17;
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 78893));
  ptr = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78802)))), &_td_OOC_SymbolTable__TypeDeclDesc));
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78833)))), &_td_OOC_SymbolTable__TypeDeclDesc, 78833)), 78842))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 78847))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78865))+4);
  i2 = i2!=i3;
  
  goto l13;
l11:
  i2=1u;
l13:
  if (i2) goto l8_loop;
l16:
  i0=i1;
l17:
  return (OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78930)))), &_td_OOC_SymbolTable__TypeDeclDesc, 78930));
  ;
}

void OOC_SymbolTable__InitRedirect(OOC_SymbolTable__Redirect redir, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 79162))+48) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 79191))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79359))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79339)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79395))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79375)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79556)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 79585))+48) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79601)))), &_td_OOC_SymbolTable__NameDesc, 79601));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79613)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 79642))+52) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79657)))), &_td_OOC_SymbolTable__NameDesc, 79657));
  return;
  ;
}

void OOC_SymbolTable__InitFieldDecl(OOC_SymbolTable__FieldDecl fieldDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 79990))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 80019))+52) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 80055))+56) = (-1);
  *(OOC_UINT8*)((_check_pointer(i0, 80084))+60) = 0u;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80276))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80292))+52);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 80333))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80312)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 80371))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80349)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 80544))+48), (void*)((_check_pointer(i0, 80560))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80580)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 80600))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80616)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 80637))+60));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 80757))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitPredefProc(OOC_SymbolTable__PredefProc proc, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT16 id, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)proc;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i1 = id;
  *(OOC_INT16*)((_check_pointer(i0, 81016))+48) = i1;
  i1 = minArgs;
  *(OOC_INT16*)((_check_pointer(i0, 81036))+50) = i1;
  i1 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i0, 81066))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(0u, 127, 81197);
  
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(0u, 127, 81311);
  
  ;
}

void OOC_SymbolTable__InitProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_INT8 procClass, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i1 = procClass;
  *(OOC_INT8*)((_check_pointer(i0, 81751))+48) = i1;
  i1 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i0, 81789))+49) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 81835))+50) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 81870))+51) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 81907))+52) = 1u;
  *(OOC_INT32*)((_check_pointer(i0, 81945))+56) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 81978))+60) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 82003))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 82036))+68) = (OOC_INT32)0;
  i1 = (OOC_INT32)procAST;
  *(OOC_INT32*)((_check_pointer(i0, 82067))+72) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 82101))+76) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 82282))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82261)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 82322))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82301)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 82366))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82345)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 82407))+51);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82386)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 82450))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82429)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 82494))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82474)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82538))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82515)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82578))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82558)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i0);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82788)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 82808))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82827)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 82847))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82870)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 82890))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82910)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 82930))+51));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82952)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 82972))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82996)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 83015))+56));
  *(OOC_INT32*)((_check_pointer(i0, 83043))+60) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83061)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 83162))+64) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83182)))), &_td_OOC_SymbolTable__FormalParsDesc, 83182));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 83119))+64) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 83215))+68) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 83256))+72) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 83286))+76) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 83485))+60) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 83598))+68) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)redefinition;
  i1 = (OOC_INT32)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 83967))+56);
  *(OOC_INT32*)((_check_pointer(i0, 83942))+56) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsTypeBound(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 84089))+48);
  return (i0!=0);
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable__ProcDeclDesc_Class(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item _class;

  i0 = (OOC_INT32)procDecl;
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
  if (i1) goto l3;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84468))+64);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84479))+40);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84488))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84468))+64);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84479))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84488))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84493)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84521)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84561)))), &_td_OOC_SymbolTable__PointerDesc, 84561)), 84569))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84561)))), &_td_OOC_SymbolTable__PointerDesc, 84561)), 84569))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84578)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84617)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84654)))), &_td_OOC_SymbolTable__RecordDesc, 84654));
l12:
  _failed_function(84168); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 85010))+24);
  *(OOC_INT32*)((_check_pointer(i0, 84986))+24) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85225))+4);
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ptype;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)(OOC_INT32)0);
  i1 = id;
  *(OOC_INT16*)((_check_pointer(i0, 85390))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(0u, 127, 85512);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(0u, 127, 85627);
  return;
  ;
}

void OOC_SymbolTable__InitTypeName(OOC_SymbolTable__TypeName tname, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 85836))+40) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 85865))+44) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeNameDesc_IsPredefReference(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85987))+40);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86010))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86017))+12);
  i0 = _check_pointer(i0, 86021);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 86021)));
  i0 = i0==0u;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__TypeNameDesc_MarkAsPredefReference(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_SymbolTable__predefName;
  *(OOC_INT32*)((_check_pointer(i0, 86129))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86311))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86291)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86347))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86327)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86507)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 86598))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 86614)))), &_td_OOC_SymbolTable__NameDesc, 86614));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 86562))+40) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86634)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 86663))+44) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86678)))), &_td_OOC_SymbolTable__NameDesc, 86678));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86824)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 86854))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86888))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 86854))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 86858)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 0u);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86922)))), &_td_OOC_SymbolTable__ImportDesc, 86922));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 87121))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 87155))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 87196))+48) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 87274))+52) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 87297))+56) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 87327))+57) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 87360))+58) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 87394))+59) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 87437))+60) = 0u;
  *(OOC_INT16*)((_check_pointer(i0, 87468))+62) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 87497))+64) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87662))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87679))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 87721))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87703)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 87761))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87742)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 87797))+57);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87778)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 87836))+58);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87817)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 87877))+59);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87858)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 87926))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87907)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i0, 87962))+62);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87944)))), IO_BinaryRider__WriterDesc_WriteInt)),IO_BinaryRider__WriterDesc_WriteInt)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88003))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87982)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 88213))+40), (void*)((_check_pointer(i0, 88230))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88254)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88271))+48));
  *(OOC_INT32*)((_check_pointer(i0, 88297))+52) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88315)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88333))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88350)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88368))+57));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88388)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88406))+58));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88428)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88446))+59));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88476)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88494))+60));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88512)))), IO_BinaryRider__ReaderDesc_ReadInt)),IO_BinaryRider__ReaderDesc_ReadInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 88529))+62));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88549)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 88645))+64) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88664)))), &_td_OOC_SymbolTable__NameDesc, 88664));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 88605))+64) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 88844))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 89168))+48);
  *(OOC_INT32*)((_check_pointer(i0, 89145))+56) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 89198))+48);
  *(OOC_INT32*)((_check_pointer(i1, 89198))+48) = (i0+1);
  return;
  ;
}

void OOC_SymbolTable__InitTypeVar(OOC_SymbolTable__TypeVar typeVar, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type bound) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)typeVar;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)bound;
  *(OOC_INT32*)((_check_pointer(i0, 89414))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 89442))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeVarDesc_Store(OOC_SymbolTable__TypeVar typeVar, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)typeVar;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89615))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89630))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeVarDesc_Load(OOC_SymbolTable__TypeVar typeVar, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeVar;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 89786))+40), (void*)((_check_pointer(i0, 89801))+44));
  return;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeVarDesc_Bound(OOC_SymbolTable__TypeVar typeVar) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)typeVar;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89901))+40);
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitTypePars(OOC_SymbolTable__TypePars typePars, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typePars;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  *(OOC_INT32*)((_check_pointer(i0, 90036))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 90064))+24) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_Store(OOC_SymbolTable__TypePars typePars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typePars;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_Load(OOC_SymbolTable__TypePars typePars, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typePars;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 90378))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 90406))+24) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_SetNamespace(OOC_SymbolTable__TypePars typePars, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typePars;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 90591))+24) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitTypeRef(struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)type;
  *(OOC_INT32*)(OOC_INT32)typeRef = i0;
  *(OOC_INT32*)((OOC_INT32)typeRef+4) = i0;
  return;
  ;
}

static void OOC_SymbolTable__StoreTypeRef(ADT_Storable__Writer w, struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)typeRef+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90887)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

static void OOC_SymbolTable__LoadTypeRef(ADT_Storable__Reader r, struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag) {
  register OOC_INT32 i0;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91091)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((OOC_INT32)typeRef+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91142)))), &_td_OOC_SymbolTable__TypeDesc, 91142));
  *(OOC_INT32*)(OOC_INT32)typeRef = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91173)))), &_td_OOC_SymbolTable__TypeDesc, 91173));
  return;
  ;
}

void OOC_SymbolTable__InitQualType(OOC_SymbolTable__QualType qualType, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)qualType;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 91434))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 91469))+44) = i1;
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 91511))+48) = i1;
  return;
  ;
}

OOC_SymbolTable__QualType OOC_SymbolTable__NewQualType(OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__QualType.baseTypes[0]);
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  i3 = (OOC_INT32)baseType;
  i4 = (OOC_INT32)arguments;
  OOC_SymbolTable__InitQualType((OOC_SymbolTable__QualType)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypeRefArray)i4);
  return (OOC_SymbolTable__QualType)i0;
  ;
}

void OOC_SymbolTable__QualTypeDesc_Store(OOC_SymbolTable__QualType qualType, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)qualType;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92009))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92028))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92074))+48);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 92084)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92052)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92119))+48);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 92129)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92167))+48);
  i5 = _check_pointer(i5, 92177);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92167))+48);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 92177)), 0);
  i7 = _check_index(i4, i7, OOC_UINT32, 92177);
  OOC_SymbolTable__StoreTypeRef((ADT_Storable__Writer)i1, (void*)(i5+(_check_index(i4, i6, OOC_UINT32, 92177))*8), (RT0__Struct)i3);
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__QualTypeDesc_Load(OOC_SymbolTable__QualType qualType, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)qualType;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 92363))+40), (void*)((_check_pointer(i0, 92382))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92406)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 92437))+48) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92511))+48);
  i5 = _check_pointer(i5, 92521);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92511))+48);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 92521)), 0);
  i7 = _check_index(i4, i7, OOC_UINT32, 92521);
  OOC_SymbolTable__LoadTypeRef((ADT_Storable__Reader)i1, (void*)(i5+(_check_index(i4, i6, OOC_UINT32, 92521))*8), (RT0__Struct)i3);
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__QualTypeDesc_Deparam(OOC_SymbolTable__QualType qualType) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)qualType;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92625))+40);
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitPointer(OOC_SymbolTable__Pointer pointer, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 92831))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 92866))+44) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 92908))+48) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 92950))+49) = 0u;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93122))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93140))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 93184))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93164)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 93232))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93212)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 93387))+40), (void*)((_check_pointer(i0, 93405))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93429)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 93448))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93476)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 93495))+49));
  return;
  ;
}

void OOC_SymbolTable__InitArray(OOC_SymbolTable__Array array, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_CHAR8 isOpenArray, OOC_SymbolTable__Type elementType, OOC_AST__Node lengthExpr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = isOpenArray;
  *(OOC_UINT8*)((_check_pointer(i0, 93757))+40) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 93796))+41) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 93830))+42) = 0u;
  i1 = (OOC_INT32)elementType;
  *(OOC_INT32*)((_check_pointer(i0, 93866))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 93905))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 93951))+52) = (-1);
  i1 = (OOC_INT32)lengthExpr;
  *(OOC_INT32*)((_check_pointer(i0, 93976))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 94146))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94128)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 94185))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94167)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 94226))+42);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94208)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94267))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94286))+48);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 94330))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94313)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94463)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 94480))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94501)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 94518))+41));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94541)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 94558))+42));
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 94598))+44), (void*)((_check_pointer(i0, 94617))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94644)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 94660))+52));
  *(OOC_INT32*)((_check_pointer(i0, 94680))+56) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 94786))+52) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__ArrayDesc_GetOpenDimensions(OOC_SymbolTable__Array array) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 dim;
  OOC_SymbolTable__Type type;

  dim = 0;
  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95108)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95125)))), &_td_OOC_SymbolTable__ArrayDesc, 95125)), 95131))+40);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95183)))), &_td_OOC_SymbolTable__ArrayDesc, 95183)), 95189))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95183)))), &_td_OOC_SymbolTable__ArrayDesc, 95183)), 95189))+44);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 95201)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95108)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95125)))), &_td_OOC_SymbolTable__ArrayDesc, 95125)), 95131))+40);
  
l13:
  if (i2) goto l8_loop;
l17:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNonOpenElementType(OOC_SymbolTable__Array array) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95469)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95486)))), &_td_OOC_SymbolTable__ArrayDesc, 95486)), 95492))+40);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95527)))), &_td_OOC_SymbolTable__ArrayDesc, 95527)), 95533))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95527)))), &_td_OOC_SymbolTable__ArrayDesc, 95527)), 95533))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95545)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95469)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95486)))), &_td_OOC_SymbolTable__ArrayDesc, 95486)), 95492))+40);
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetInnermostElementType(OOC_SymbolTable__Array array) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95815)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
  
l4_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95847)))), &_td_OOC_SymbolTable__ArrayDesc, 95847)), 95853))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95847)))), &_td_OOC_SymbolTable__ArrayDesc, 95847)), 95853))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95865)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95815)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNthElementType(OOC_SymbolTable__Array array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = dim;
  i2 = i1>0;
  if (!i2) goto l9;
  
l4_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96226)))), &_td_OOC_SymbolTable__ArrayDesc, 96226)), 96232))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96226)))), &_td_OOC_SymbolTable__ArrayDesc, 96226)), 96232))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 96244)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = i1-1;
  dim = i1;
  i2 = i1>0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitFormalPars(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  *(OOC_INT32*)((_check_pointer(i0, 96506))+40) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 96539))+44) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 96574))+48) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 96616))+52) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 96647))+56) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 96691))+57) = 0u;
  *(OOC_INT8*)((_check_pointer(i0, 96726))+58) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 96771))+60) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 96802))+64) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 97020))+56) = 1u;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_SetResultType(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Type resultType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)resultType;
  *(OOC_INT32*)((_check_pointer(i0, 97168))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 97209))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_SetNamespace(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 97440))+64) = i1;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97641))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97616)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97681))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97704))+48);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 97753))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97730)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 97803))+57);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97780)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 97844))+58);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97821)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97875))+60);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97962))+60);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 97970)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97935)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98010))+60);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 98018)), 0);
  i3 = 0<i2;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98060))+60);
  i4 = _check_pointer(i4, 98068);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 98068))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98035)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97903)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
l12:
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Load(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__Object obj;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98304)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 98407))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98425)))), &_td_OOC_SymbolTable__VarDeclDesc, 98425));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 98364))+40) = (OOC_INT32)0;
l4:
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 98469))+44), (void*)((_check_pointer(i0, 98492))+48));
  *(OOC_INT32*)((_check_pointer(i0, 98527))+52) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98549)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 98571))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98598)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 98620))+57));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98638)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 98660))+58));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98683)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l15;
  *(OOC_INT32*)((_check_pointer(i0, 98784))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l16;
  i3=0;
l9_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98838)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98876))+60);
  i4 = _check_pointer(i4, 98884);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 98884))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 98895)))), &_td_OOC_SymbolTable__ExceptionNameDesc, 98895));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l9_loop;
  goto l16;
l15:
  *(OOC_INT32*)((_check_pointer(i0, 98738))+60) = (OOC_INT32)0;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 98943))+64) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_SymbolTable__InitTypeClosure(OOC_SymbolTable__TypeClosure tc, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeVarArray params, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)params;
  i1 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 99204)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 99222)), 0);
  _assert((i2==i3), 127, 99187);
  i2 = (OOC_INT32)tc;
  i3 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)i3);
  i3 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 99266))+40) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 99295))+44) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 99320))+48) = i1;
  i0 = i3!=(OOC_INT32)0;
  if (i0) goto l3;
  *(OOC_INT32*)((_check_pointer(i2, 99457))+32) = (-1);
  *(OOC_INT16*)((_check_pointer(i2, 99478))+36) = (-1);
  goto l4;
l3:
  i0 = *(OOC_INT32*)((_check_pointer(i3, 99399))+32);
  *(OOC_INT32*)((_check_pointer(i2, 99382))+32) = i0;
  i0 = *(OOC_INT16*)((_check_pointer(i3, 99432))+36);
  *(OOC_INT16*)((_check_pointer(i2, 99414))+36) = i0;
l4:
  return;
  ;
}

OOC_SymbolTable__TypeClosure OOC_SymbolTable__NewTypeClosure(OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeVarArray params, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeClosure.baseTypes[0]);
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)baseType;
  i3 = (OOC_INT32)params;
  i4 = (OOC_INT32)arguments;
  OOC_SymbolTable__InitTypeClosure((OOC_SymbolTable__TypeClosure)i0, (OOC_SymbolTable__Position)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__TypeVarArray)i3, (OOC_SymbolTable__TypeRefArray)i4);
  return (OOC_SymbolTable__TypeClosure)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Deparam(OOC_SymbolTable__TypeClosure typeClosure) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)typeClosure;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99935))+40);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Lookup(OOC_SymbolTable__TypeClosure typeClosure, OOC_SymbolTable__TypeVar tv, OOC_SymbolTable__TypeVar _default) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)typeClosure;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100226))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100253))+48);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 100233)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 100263)), 0);
  _assert((i1==i2), 127, 100204);
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100310))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 100317)), 0);
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100335))+44);
  i1 = _check_pointer(i1, 100342);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 100342))*4);
  i2 = (OOC_INT32)tv;
  i1 = i1!=i2;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1 = (OOC_INT32)tv;
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100310))+44);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 100317)), 0);
  i3 = i2!=i3;
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100335))+44);
  i3 = _check_pointer(i3, 100342);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 100342))*4);
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l16:
  i1=i2;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100406))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 100413)), 0);
  i2 = i1==i2;
  if (i2) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100671))+48);
  i0 = _check_pointer(i0, 100681);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 100681))*8);
  return (OOC_SymbolTable__Type)i0;
  goto l21;
l20:
  i0 = (OOC_INT32)_default;
  return (OOC_SymbolTable__Type)i0;
l21:
  _failed_function(99999); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Closure(OOC_SymbolTable__TypeClosure closure, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__TypeRefArray args;
  OOC_INT32 i;
  OOC_SymbolTable__Type nextType;

  i0 = (OOC_INT32)type;
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l3;
  return (OOC_SymbolTable__Type)(OOC_INT32)0;
l3:
  i1 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  
l4_loop:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101011)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101463)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101676))+28);
  i2 = i2==(OOC_INT32)0;
  if (!i2) goto l29;
  return (OOC_SymbolTable__Type)i0;
  goto l28;
l13:
  i2 = (OOC_INT32)closure;
  i2 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Lookup((OOC_SymbolTable__TypeClosure)i2, (OOC_SymbolTable__TypeVar)i0, (OOC_SymbolTable__TypeVar)(OOC_INT32)0);
  nextType = (OOC_SymbolTable__Type)i2;
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l16;
  i0 = (OOC_INT32)OOC_SymbolTable__emptyClosure;
  closure = (OOC_SymbolTable__TypeClosure)i0;
  goto l28;
l16:
  return (OOC_SymbolTable__Type)i0;
  goto l28;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101048))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101071))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 101080))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 101089))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 101096)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 101058)), 0);
  _assert((i2==i3), 127, 101033);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101127))+40);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 101136))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 101145))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 101152)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  args = (OOC_SymbolTable__TypeRefArray)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 101187)), 0);
  i4 = 0<i3;
  if (!i4) goto l27;
  i4 = (OOC_INT32)closure;
  i5=0;
l22_loop:
  i6 = _check_pointer(i2, 101221);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i2, 101221)), 0);
  i8 = _check_index(i5, i8, OOC_UINT32, 101221);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101246))+48);
  i8 = _check_pointer(i8, 101256);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 101256))*8);
  i8 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Closure((OOC_SymbolTable__TypeClosure)i4, (OOC_SymbolTable__Type)i8);
  OOC_SymbolTable__InitTypeRef((void*)(i6+(_check_index(i5, i7, OOC_UINT32, 101221))*8), (RT0__Struct)i1, (OOC_SymbolTable__Type)i8);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l22_loop;
l27:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101373))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 101382))+28);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101319))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 101391))+20);
  i2 = (OOC_INT32)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)(OOC_INT32)0, (OOC_SymbolTable__TypeVarArray)i3, (OOC_SymbolTable__TypeRefArray)i2);
  closure = (OOC_SymbolTable__TypeClosure)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101431))+40);
  nextType = (OOC_SymbolTable__Type)i0;
l28:
  i0 = (OOC_INT32)nextType;
  type = (OOC_SymbolTable__Type)i0;
  
  goto l4_loop;
l29:
  i1 = (OOC_INT32)closure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101919))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101969))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101985))+48);
  i0 = (OOC_INT32)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i2, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__TypeVarArray)i3, (OOC_SymbolTable__TypeRefArray)i1);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeClosureDesc_ArgumentsInduced(OOC_SymbolTable__TypeClosure closure, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)type;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102503)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)closure;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102885))+48);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 102895)), 0);
  return (i0==0);
  goto l36;
l5:
  i1 = (OOC_INT32)closure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102550))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 102557)), 0);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l33;
  i3=0;
l8_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102612))+48);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 102622)), 0);
  i4 = 0!=i4;
  if (i4) goto l11;
  i4=0u;
  goto l13;
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102649))+48);
  i4 = _check_pointer(i4, 102659);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102677))+44);
  i6 = _check_pointer(i6, 102684);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 102659))*8);
  i5 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 102684))*4);
  i4 = i4!=i5;
  
l13:
  if (i4) goto l15;
  i4=0;
  goto l25;
l15:
  i4=0;
l16_loop:
  i4 = i4+1;
  j = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102612))+48);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 102622)), 0);
  i5 = i4!=i5;
  if (i5) goto l19;
  i5=0u;
  goto l21;
l19:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102649))+48);
  i5 = _check_pointer(i5, 102659);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102677))+44);
  i7 = _check_pointer(i7, 102684);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 102659))*8);
  i6 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 102684))*4);
  i5 = i5!=i6;
  
l21:
  if (i5) goto l16_loop;
l25:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102753))+48);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 102763)), 0);
  i4 = i4==i5;
  if (!i4) goto l28;
  return 0u;
l28:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l8_loop;
l33:
  return 1u;
  goto l36;
l35:
  i0 = (OOC_INT32)closure;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102460))+48);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 102470)), 0);
  return (i0==0);
l36:
  _failed_function(102047); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__Expand(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable__emptyClosure;
  i1 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Closure((OOC_SymbolTable__TypeClosure)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ItemDesc_Namespace(OOC_SymbolTable__Item item) {

  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ModuleDesc_Namespace(OOC_SymbolTable__Module item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104542))+48);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104641))+60);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__FormalParsDesc_Namespace(OOC_SymbolTable__FormalPars item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104742))+64);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104839))+52);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__TypeParsDesc_Namespace(OOC_SymbolTable__TypePars item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104938))+24);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__QualTypeDesc_Namespace(OOC_SymbolTable__QualType item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105037))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105037))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105046)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

void OOC_SymbolTable__Prune(OOC_SymbolTable__Module root, ADT_Dictionary_AddressKey__Dictionary keep) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_ArrayList__ArrayList prunedImports;
  OOC_INT32 i;
  OOC_SymbolTable__Import import;
  OOC_SymbolTable__ModuleRef mr;
  auto void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last);
    
    void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item _this;

      i0 = (OOC_INT32)*list;
      _this = (OOC_SymbolTable__Item)i0;
      *last = (OOC_SymbolTable__Item)(OOC_INT32)0;
      *list = (OOC_SymbolTable__Item)(OOC_INT32)0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l23;
l3_loop:
      i1 = (OOC_INT32)keep;
      i1 = ADT_Dictionary_AddressKey__DictionaryDesc_HasKey((ADT_Dictionary_AddressKey__Dictionary)i1, (Object__Object)i0);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105888)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l8;
      i1=0u;
      goto l10;
l8:
      i1 = OOC_SymbolTable__ImportDesc_IsInternalImport((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105907)))), &_td_OOC_SymbolTable__ImportDesc, 105907)));
      i1 = !i1;
      
l10:
      if (!i1) goto l18;
      i1 = (OOC_INT32)prunedImports;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105964)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
      goto l18;
l13:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 105624))+8), (void*)((_check_pointer(i0, 105643))+12));
      i1 = (OOC_INT32)*last;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l16;
      *(OOC_INT32*)(_check_pointer(i1, 105796)) = i0;
      goto l17;
l16:
      *list = (OOC_SymbolTable__Item)i0;
l17:
      *last = (OOC_SymbolTable__Item)i0;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 106027));
      _this = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l23:
      i0 = (OOC_INT32)*last;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l26;
      *(OOC_INT32*)(_check_pointer(i0, 106111)) = (OOC_INT32)0;
l26:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 106223))+8), (void*)((_check_pointer(i0, 106242))+12));
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 106303))+4);
  *(OOC_INT32*)((_check_pointer(i0, 106274))+72) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 106342))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 106382));
  i4 = _check_pointer(i4, 106388);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 106388))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 106392)))), &_td_OOC_SymbolTable__ImportDesc, 106392);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 106439))+48);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 106450))+12);
  *(OOC_INT32*)(_check_pointer(i5, 106424)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 106486))+56);
  *(OOC_INT32*)((_check_pointer(i5, 106464))+4) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106510))+72);
  i4 = _check_pointer(i4, 106524);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 106524))*4) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  OOC_Scanner_InputBuffer__CharArray id;
  OOC_SymbolTable__Declaration declWithType;
  OOC_SymbolTable__Item ptr;
  OOC_SymbolTable__Item parent;
  auto OOC_SymbolTable__Declaration OOC_SymbolTable__DeclarationDesc_GetId_GetContainer(OOC_SymbolTable__Type type);
  auto OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b);
    
    OOC_SymbolTable__Declaration OOC_SymbolTable__DeclarationDesc_GetId_GetContainer(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;
      OOC_SymbolTable__Item ptr;
      OOC_CHAR8 found;
      auto OOC_CHAR8 OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains(OOC_SymbolTable__Item ptr, OOC_SymbolTable__Item type);
        
        OOC_CHAR8 OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains(OOC_SymbolTable__Item ptr, OOC_SymbolTable__Item type) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)ptr;
          i1 = (OOC_INT32)type;
          i2 = i0==i1;
          if (i2) goto l11;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107274)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107359)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return 0u;
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107402))+48);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107319))+44);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return 1u;
l12:
          _failed_function(107143); return 0;
          ;
        }


      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107551)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107571)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=1u;
l4:
      _assert(i1, 127, 107537);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107603)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107625))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 107634)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l15;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107720))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107746)))), &_td_OOC_SymbolTable__TypeParsDesc);
      if (!i1) goto l16;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107784))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107671))+4);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107680)))), &_td_OOC_SymbolTable__ProcDeclDesc, 107680));
l16:
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107836)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107869)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l21;
l19:
      i1=1u;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107904)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l25;
l23:
      i1=1u;
l25:
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107937)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l28;
l27:
      i1=1u;
l28:
      _assert(i1, 127, 107823);
      found = 0u;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107992))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l55;
l31_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108050)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108129)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108209)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108288)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l40;
      found = 0u;
      i0=0u;
      goto l47;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108335))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l42:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108255))+64);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l44:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108175))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108095))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l47:
      i1 = (OOC_INT32)ptr;
      if (!i0) goto l50;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108450)))), &_td_OOC_SymbolTable__DeclarationDesc, 108450));
l50:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 108494));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l31_loop;
l55:
      _assert(0u, 127, 108524);
      _failed_function(107037); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT32)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 108665)),(const void*)""))==0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 108739)), 0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 108739)), i1);
      i2 = (OOC_INT32)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 108759)), 0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 108759)), i3);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 108785)), 0);
      _copy_8((const void*)(_check_pointer(i0, 108781)),(void*)(_check_pointer(i1, 108785)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 108819)), 0);
      Strings__Append(".", 2, (void*)(_check_pointer(i1, 108819)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 108852)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 108848)), 0);
      Strings__Append((void*)(_check_pointer(i2, 108848)), i3, (void*)(_check_pointer(i1, 108852)), i0);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT32)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(108576); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108922))+40);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l44;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108997)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l42;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109118)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109138)))), &_td_OOC_SymbolTable__ProcDeclDesc, 109138)));
  
l9:
  if (i1) goto l40;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109437)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l38;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109713)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109732)))), &_td_OOC_SymbolTable__VarDeclDesc, 109732)), 109740))+56);
  
l17:
  if (i1) goto l36;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110022)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1=0u;
  goto l23;
l21:
  i1 = OOC_SymbolTable__TypeDeclDesc_IsTypeParameter((OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110042)))), &_td_OOC_SymbolTable__TypeDeclDesc, 110042)));
  
l23:
  if (i1) goto l34;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110346))+4);
  parent = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110378)))), &_td_OOC_SymbolTable__DeclarationDesc));
  if (!i2) goto l33;
l28_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110423))+4);
  parent = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110378)))), &_td_OOC_SymbolTable__DeclarationDesc));
  if (i2) goto l28_loop;
l33:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110474)))), &_td_OOC_SymbolTable__DeclarationDesc, 110474)), 110486)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110474)))), &_td_OOC_SymbolTable__DeclarationDesc, 110474)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110500))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110505))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l34:
  i1 = (OOC_INT32)OOC_SymbolTable__TypeDeclDesc_ParametricType((OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110225)))), &_td_OOC_SymbolTable__TypeDeclDesc, 110225)));
  ptr = (OOC_SymbolTable__Item)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110278)))), &_td_OOC_SymbolTable__TypeDeclDesc, 110278)), 110287)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110278)))), &_td_OOC_SymbolTable__TypeDeclDesc, 110278)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110301))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110306))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l36:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109911)))), &_td_OOC_SymbolTable__VarDeclDesc, 109911)), 109919))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109928)))), &_td_OOC_SymbolTable__FormalParsDesc, 109928)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109976)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109991))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109997))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l38:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109604)))), &_td_OOC_SymbolTable__FieldDeclDesc, 109604)), 109614))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109623)))), &_td_OOC_SymbolTable__RecordDesc, 109623)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109667)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109682))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109688))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l40:
  i0 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109336)))), &_td_OOC_SymbolTable__ProcDeclDesc, 109336)));
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109391)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109406))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109412))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l42:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 109090);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 109090))) = 0u;
  
l43:
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 110533))+40) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l45;
l44:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108962))+40);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l45:
  _failed_function(106588); return 0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace(OOC_SymbolTable__Declaration decl, OOC_CHAR8 followTypeNames) {
  register OOC_INT32 i0,i1;
  auto OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcType);
    
    OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcType) {
      register OOC_INT32 i0,i1;

      i0 = followTypeNames;
      i0 = !i0;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = (OOC_INT32)srcType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110982)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l39;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111170)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111221)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111320)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111420)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l31;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111530)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111634)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111686)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111769)))), &_td_OOC_SymbolTable__QualTypeDesc);
      if (i1) goto l23;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111763)))), 111763);
      goto l40;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111821))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111837))+44);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l25:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111737))+40);
      i1 = (OOC_INT32)srcType;
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l27:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111667))+52);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l29:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111579))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111598))+48);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l40;
l33:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111371))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111387))+44);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l35:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l40;
l37:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l40;
l39:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
l40:
      _failed_function(110885); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111927)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111971)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112031)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112077)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112119)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112162)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112246)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112332)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112417)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112411)))), 112411);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112380))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112392))+52);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112295))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112307))+52);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112209))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112221))+52);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l27:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l29:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l31:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112062))+60);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112000))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112016))+48);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111956))+48);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(110619); return 0;
  ;
}

static void OOC_SymbolTable__Init(void) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__TypeVarArray params;
  OOC_SymbolTable__TypeRefArray arguments;
  OOC_Scanner_InputBuffer__CharArray nameString;

  i0 = (OOC_INT32)URI_Scheme_File__NewPrototype();
  URI__RegisterScheme((URI__URI)i0);
  OOC_SymbolTable__predefIdToType = (void*)(OOC_INT32)0;
  i0 = (OOC_INT32)URI_Scheme_File__ToURI("/", 2);
  OOC_SymbolTable__emptyBaseURI = (URI__HierarchicalURI)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  OOC_SymbolTable__importPosition = (OOC_SymbolTable__Position)i0;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, (-2), (-1), (-1));
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeVarArray.baseTypes[0], 0);
  params = (OOC_SymbolTable__TypeVarArray)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], 0);
  arguments = (OOC_SymbolTable__TypeRefArray)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeClosure.baseTypes[0]);
  OOC_SymbolTable__emptyClosure = (OOC_SymbolTable__TypeClosure)i2;
  OOC_SymbolTable__InitTypeClosure((OOC_SymbolTable__TypeClosure)i2, (OOC_SymbolTable__Position)(OOC_INT32)0, (OOC_SymbolTable__Type)(OOC_INT32)0, (OOC_SymbolTable__TypeVarArray)i0, (OOC_SymbolTable__TypeRefArray)i1);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  nameString = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 112983)), 0);
  _copy_8((const void*)"",(void*)(_check_pointer(i0, 112983)),i1);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  OOC_SymbolTable__predefName = (OOC_SymbolTable__Name)i1;
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i0, 0, 0, 0);
  return;
  ;
}

void OOC_OOC_SymbolTable_init(void) {
  _c0 = Object__NewLatin1Region("standard", 9, 0, 8);
  _c1 = Object__NewLatin1Region("internal", 9, 0, 8);
  _c2 = Object__NewLatin1Region("foreign", 8, 0, 7);
  _c3 = Object__NewLatin1Region("interface", 10, 0, 9);
  _c4 = Object__NewLatin1Region("--invalid--", 12, 0, 11);
  _c5 = Object__NewLatin1Region("default", 8, 0, 7);
  _c6 = Object__NewLatin1Region("internal", 9, 0, 8);
  _c7 = Object__NewLatin1Char(67u);
  _c8 = Object__NewLatin1Region("Pascal", 7, 0, 6);
  _c9 = Object__NewLatin1Char(67u);
  _c10 = Object__NewLatin1Region("Pascal", 7, 0, 6);

  OOC_SymbolTable__Init();
  return;
  ;
}

/* --- */
