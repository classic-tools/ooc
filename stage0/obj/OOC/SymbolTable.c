#include <OOC/SymbolTable.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable__WriterDesc_INIT(OOC_SymbolTable__Writer w, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)chDoc;
  _assert((i0!=(OOC_INT32)0), 127, 43688);
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)ch;
  ADT_Object_Storage__InitWriter((ADT_Object_Storage__Writer)i1, (IO__ByteChannel)i2);
  i0 = (OOC_INT32)ADT_Object_Storage__ConnectWriter((IO__ByteChannel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 43745))+280) = i0;
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
  *(OOC_INT32*)((_check_pointer(i0, 43965))+280) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 43930))+280) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(44141); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46043)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(46173); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47097)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__NamespaceDesc_GetSuperProcByIndex(OOC_SymbolTable__Namespace ns, OOC_INT32 index) {

  _assert(0u, 127, 47365);
  _failed_function(47206); return 0;
  ;
}

static void OOC_SymbolTable__WriteType(ADT_Storable__Writer w, OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)srcCodeType;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47504)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

static void OOC_SymbolTable__ReadType(ADT_Storable__Reader r, OOC_SymbolTable__Type *type, OOC_SymbolTable__Type *srcCodeType) {
  register OOC_INT32 i0,i1;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47677)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47798)))), &_td_OOC_SymbolTable__TypeDesc, 47798);
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
  *(OOC_INT32*)(_check_pointer(i0, 48005)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 48031))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 48059))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)position;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 48264));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48244)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 48297))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48277)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 48331))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48311)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)position;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48499)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 48518)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48531)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 48550))+4));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48564)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 48583))+8));
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
  *(OOC_INT32*)((_check_pointer(i0, 48796))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49020))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49020))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49025)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 49025)), i2);
  len = i1;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49034)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49075))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49057)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 49080)), (-1), 0, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49348)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 49394);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 49394))) = 0u;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49412)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 49428)), (-1), 0, i2);
  *(OOC_INT32*)((_check_pointer(i0, 49448))+12) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 49540)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 49569))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 49599))+12) = 0;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 49633))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 49661))+16) = 0;
  i2 = i1!=0;
  if (!i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49730)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49767)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49806)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=1u;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49843)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l15;
l13:
  i2=1u;
l15:
  if (i2) goto l17;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49884)))), &_td_OOC_SymbolTable__TypeParsDesc);
  
  goto l18;
l17:
  i2=1u;
l18:
  _assert(i2, 127, 49713);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49915))+8);
  i2 = i2==0;
  if (i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50000))+12);
  *(OOC_INT32*)(_check_pointer(i2, 50016)) = i0;
  goto l22;
l21:
  *(OOC_INT32*)((_check_pointer(i1, 49953))+8) = i0;
l22:
  *(OOC_INT32*)((_check_pointer(i1, 50060))+12) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50223)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 50262));
  item = (OOC_SymbolTable__Item)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50289)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)(OOC_INT32)0);
  return;
  ;
}

static void OOC_SymbolTable__ReadItemList(ADT_Storable__Reader r, OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;

  *list = (OOC_SymbolTable__Item)(OOC_INT32)0;
  *last = (OOC_SymbolTable__Item)(OOC_INT32)0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50511)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l16;
  i2=(OOC_INT32)0;
l3_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50568)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i3) goto l6;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50559)))), 50559);
  i1=i2;
  goto l11;
l6:
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l9;
  *list = (OOC_SymbolTable__Item)i1;
  goto l10;
l9:
  *(OOC_INT32*)(_check_pointer(i2, 50619)) = i1;
l10:
  *last = (OOC_SymbolTable__Item)i1;
  
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50724)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50872))+8);
  i2 = (OOC_INT32)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50911))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 50892)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 51087)) = 0;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 51132))+8), (void*)((_check_pointer(i0, 51151))+12));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51176)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 51265))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51281)))), &_td_OOC_SymbolTable__ItemDesc, 51281));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 51230))+4) = 0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 51304))+16) = 0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51636))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51659)))), &_td_OOC_SymbolTable__TypeDesc);
  
l5:
  if (!i1) goto l8;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51692)))), &_td_OOC_SymbolTable__TypeDesc, 51692)), 51697)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51692)))), &_td_OOC_SymbolTable__TypeDesc, 51692)));
  item = (OOC_SymbolTable__Item)i0;
  
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51771))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l25;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51807))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51830))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51853)))), &_td_OOC_SymbolTable__TypeDesc);
  
l17:
  if (!i1) goto l20;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51888)))), &_td_OOC_SymbolTable__TypeDesc, 51888)), 51893)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51888)))), &_td_OOC_SymbolTable__TypeDesc, 51888)));
  item = (OOC_SymbolTable__Item)i0;
  
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51771))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l12_loop;
l25:
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51980)))), &_td_OOC_SymbolTable__ModuleDesc, 51980));
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52230))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52271)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=1u;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52354)))), &_td_OOC_SymbolTable__ProcDeclDesc, 52354));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l13:
  _failed_function(52026); return 0;
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
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 52793)));
      goto l4;
l3:
      i0 = (OOC_INT32)fl;
      *(OOC_INT32*)(_check_pointer(i0, 52725)) = (OOC_INT32)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52855))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 52859)),(const void*)"NO_COPY"))==0;
  if (i1) goto l63;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52918))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 52922)),(const void*)"ABSTRACT"))==0;
  if (i1) goto l61;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52984))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 52988)),(const void*)"NO_LENGTH_INFO"))==0;
  if (i1) goto l59;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53060))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53064)),(const void*)"NO_DESCRIPTOR"))==0;
  if (i1) goto l57;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53135))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53139)),(const void*)"NOT_EXTENSIBLE"))==0;
  if (i1) goto l55;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53286))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53290)),(const void*)"CSTRING"))==0;
  if (i1) goto l53;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53350))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53354)),(const void*)"NIL_COMPAT"))==0;
  if (i1) goto l51;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53419))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53423)),(const void*)"UNION"))==0;
  if (i1) goto l49;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53479))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53483)),(const void*)"READ_ONLY"))==0;
  if (i1) goto l47;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53546))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53550)),(const void*)"NO_RETURN"))==0;
  if (i1) goto l45;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53613))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53617)),(const void*)"DEPRECATED"))==0;
  if (i1) goto l43;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53683))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53687)),(const void*)"OOC_EXTENSIONS"))==0;
  if (i1) goto l41;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53760))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53764)),(const void*)"ALIGN1"))==0;
  if (i1) goto l39;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53822))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53826)),(const void*)"ALIGN2"))==0;
  if (i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53884))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53888)),(const void*)"ALIGN4"))==0;
  if (i1) goto l35;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53946))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 53950)),(const void*)"ALIGN8"))==0;
  if (i1) goto l33;
  id = (-1);
  i1=(-1);
  goto l64;
l33:
  id = 16;
  i1=16;
  goto l64;
l35:
  id = 15;
  i1=15;
  goto l64;
l37:
  id = 14;
  i1=14;
  goto l64;
l39:
  id = 13;
  i1=13;
  goto l64;
l41:
  id = 11;
  i1=11;
  goto l64;
l43:
  id = 10;
  i1=10;
  goto l64;
l45:
  id = 9;
  i1=9;
  goto l64;
l47:
  id = 8;
  i1=8;
  goto l64;
l49:
  id = 7;
  i1=7;
  goto l64;
l51:
  id = 6;
  i1=6;
  goto l64;
l53:
  id = 5;
  i1=5;
  goto l64;
l55:
  id = 4;
  i1=4;
  goto l64;
l57:
  id = 3;
  i1=3;
  goto l64;
l59:
  id = 2;
  i1=2;
  goto l64;
l61:
  id = 1;
  i1=1;
  goto l64;
l63:
  id = 0;
  i1=0;
l64:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 54060))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 54077))+8) = i0;
  i0 = (OOC_INT32)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 54106))+16));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 54382))+20) = i1;
  i1 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i0, 54406))+24) = i1;
  i1 = exportMark;
  *(OOC_INT8*)((_check_pointer(i0, 54444))+28) = i1;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 54480))+32) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 54514))+36) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 54545))+40) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 54572))+44) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54744))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54725)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 54815))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54799)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 54842))+28);
  i2 = i2!=0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54953)))), &_td_OOC_SymbolTable__WriterDesc, 54953)), 54960))+280);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54953)))), &_td_OOC_SymbolTable__WriterDesc, 54953)), 54960))+280);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54970)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i3, (Object__Object)(OOC_INT32)0);
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54887)))), &_td_OOC_SymbolTable__WriterDesc, 54887)), 54894))+280);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54921))+32);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54887)))), &_td_OOC_SymbolTable__WriterDesc, 54887)), 54894))+280);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54904)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i4, (Object__Object)i3);
l4:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 55020))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55003)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55202)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 55230))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55244)))), &_td_OOC_SymbolTable__NameDesc, 55244));
  *(OOC_INT32*)((_check_pointer(i0, 55413))+24) = (-3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55627)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i0, 55646))+28) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55769)))), &_td_OOC_SymbolTable__ReaderDesc, 55769)), 55776))+280);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 55989))+32) = (OOC_INT32)0;
  goto l8;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55807)))), &_td_OOC_SymbolTable__ReaderDesc, 55807)), 55814))+280);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55807)))), &_td_OOC_SymbolTable__ReaderDesc, 55807)), 55814))+280);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55824)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i3, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l6;
  *(OOC_INT32*)((_check_pointer(i0, 55926))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55948)))), &_td_OOC_Doc__DocumentDesc, 55948));
  goto l8;
l6:
  *(OOC_INT32*)((_check_pointer(i0, 55882))+32) = (OOC_INT32)0;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56027)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 56043))+36));
  *(OOC_INT32*)((_check_pointer(i0, 56065))+40) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 56092))+44) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCounter(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 56193))+44);
  *(OOC_INT32*)((_check_pointer(i0, 56193))+44) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56613)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56632))+24);
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
  *(OOC_INT32*)((_check_pointer(i0, 56793))+20) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 56825))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 56854))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 56881))+32) = (-2);
  *(OOC_INT16*)((_check_pointer(i0, 56912))+36) = 1;
  *(OOC_UINT8*)((_check_pointer(i0, 56934))+38) = 1u;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDesc_PreciousTypePars(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57292))+28);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57316))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57325))+8);
  i0 = i0!=(OOC_INT32)0;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57493))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57474)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57519)))), OOC_SymbolTable__TypeDesc_PreciousTypePars)),OOC_SymbolTable__TypeDesc_PreciousTypePars)((OOC_SymbolTable__Type)i0);
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57596)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)(OOC_INT32)0);
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57568))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57551)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i0);
  if (!i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57688))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57669)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
l7:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 57731))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57715)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i0, 57761))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57745)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 57793))+38);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57776)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57972)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 58065))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58085)))), &_td_OOC_SymbolTable__TypeDeclDesc, 58085));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 58026))+24) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58109)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 58200))+28) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58218)))), &_td_OOC_SymbolTable__TypeParsDesc, 58218));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 58163))+28) = (OOC_INT32)0;
l8:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i0);
  if (i2) goto l11;
  i2 = (OOC_INT32)OOC_SymbolTable__importPosition;
  *(OOC_INT32*)((_check_pointer(i0, 58360))+20) = i2;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58282)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 58312))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58330)))), &_td_OOC_SymbolTable__PositionDesc, 58330));
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58404)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 58419))+32));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58433)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i0, 58456))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58483)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 58499))+38));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)namingDecl;
  *(OOC_INT32*)((_check_pointer(i0, 58696))+24) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetTypePars(OOC_SymbolTable__Type type, OOC_SymbolTable__TypePars typePars) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)typePars;
  *(OOC_INT32*)((_check_pointer(i0, 58886))+28) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 59011))+32) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 59035))+36) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59299)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59348)))), &_td_OOC_SymbolTable__ArrayDesc, 59348)), 59354))+44);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59299)))), &_td_OOC_SymbolTable__ArrayDesc);
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
  *(OOC_INT32*)(_check_pointer(i0, 60386)) = 0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 60530));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60514)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60668)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 60749)) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60763)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 60763));
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 60719)) = (OOC_INT32)0;
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61051)))), URI__URIDesc_ToString)),URI__URIDesc_ToString)((URI__URI)i0);
      str8 = (Object__String8)i0;
      i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
      chars = (Object__CharsLatin1)i0;
      i1 = (OOC_INT32)w;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 61124)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61106)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)(_check_pointer(i0, 61124)), i2);
      return;
      ;
    }


  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61194))+4);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i1, (URI__HierarchicalURI)i0);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61221))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61208)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61256))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61243)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__String str;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61390)))), IO_BinaryRider__ReaderDesc_ReadStr)),IO_BinaryRider__ReaderDesc_ReadStr)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&str);
  i0 = (OOC_INT32)str;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT32)0;
l4:
  _failed_function(61297); return 0;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61733)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)b, 1024);
      {
        Exception__PushContext(&_context0, &_target0);
        if (!setjmp(_target0)) goto l7;
        Exception__PopContext(1);
        i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_Exception__ParseErrorDesc);
        if (i0) goto l5;
        Exception__ActivateContext();
        goto l6;
l5:
        _assert(0u, 127, 61964);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62086)))), &_td_URI__HierarchicalURIDesc, 62086)), 62102)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62086)))), &_td_URI__HierarchicalURIDesc, 62086)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62152)))), &_td_URI__HierarchicalURIDesc, 62152));
      return;
      ;
    }


  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 62233))+4));
  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 62247))+8) = i2;
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 62285))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62467))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62454)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62501))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62488)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62536))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62523)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 62571))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62558)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62603))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 62617)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62585)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62646))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 62660)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62688))+8);
  i4 = _check_pointer(i4, 62702);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 62702))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62675)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i4);
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
  *(OOC_INT32*)((_check_pointer(i0, 62854))+4) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 62891))+12) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 62929))+16) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62967)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62979))+20));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62992)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 63019))+8) = ((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63075))+8);
  i4 = _check_pointer(i4, 63089);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 63089))*4) = i6;
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
  *(OOC_INT32*)((_check_pointer(i0, 63417))+48) = (OOC_INT32)0;
  i1 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 63437))+52) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 63462))+56) = (OOC_INT32)0;
  i1 = callConv;
  *(OOC_INT8*)((_check_pointer(i0, 63491))+60) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 63522))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 63554))+68) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 63581))+72) = (OOC_INT32)0;
  i1 = (OOC_INT32)moduleAST;
  *(OOC_INT32*)((_check_pointer(i0, 63612))+76) = i1;
  i1 = (OOC_INT32)bodyDecl;
  *(OOC_INT32*)((_check_pointer(i0, 63645))+80) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 63835))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63819)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63865))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63850)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 63901))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63885)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63937))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63919)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64102))+48) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64120)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64135))+52));
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64152))+56) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64189)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64204))+60));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64222)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 64317))+64) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64341)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 64341));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 64275))+64) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 64372))+72) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 64403))+76) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 64579))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 64683))+56) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 64798))+52);
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
    _failed_case(i0, 64790);
    goto l7;
  }
l7:
  _failed_function(64752); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 65060))+60);
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
    _failed_case(i0, 65052);
    goto l8;
  }
l8:
  _failed_function(65011); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)((_check_pointer(i0, 65506))+4) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 65527))+8) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 65564))+12) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 65911))+4) = i1;
  i1 = (OOC_INT32)dependencies;
  *(OOC_INT32*)((_check_pointer(i0, 65946))+8) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 65983))+12) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 66020))+16) = i1;
  i1 = type;
  *(OOC_INT32*)((_check_pointer(i0, 66057))+20) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 66285)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 66217)) = (OOC_INT32)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  _assert((i0!=(OOC_INT32)0), 127, 66479);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)prefixOption;
  i3 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i2, (Object__String)i3);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 66525))+64), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption, OOC_INT32 type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)libraryName;
  _assert((i0!=(OOC_INT32)0), 127, 66903);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)dependencies;
  i3 = (OOC_INT32)prefixOption;
  i4 = (OOC_INT32)suffixOption;
  i5 = type;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i2, (Object__String)i3, (Object__String)i4, i5);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 66956))+64), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 67615))+52);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 67644))+52);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  return 0u;
  goto l25;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67683))+64);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67728)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 67758));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67728)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT32)0);
l25:
  _failed_function(67147); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 68288))+52);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 68316))+52);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=1u;
l4:
  _assert(i1, 127, 68276);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68353))+64);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68397)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 68425));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68397)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68506)))), &_td_OOC_SymbolTable__LinkFileDesc, 68506)), 68515))+4);
  _assert((i1!=(OOC_INT32)0), 127, 68496);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68538)))), &_td_OOC_SymbolTable__LinkFileDesc, 68538)), 68547))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68538)))), &_td_OOC_SymbolTable__LinkFileDesc, 68538)), 68547))+4);
  i3 = (OOC_INT32)rootURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68553)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68597)))), &_td_OOC_SymbolTable__LinkFileDesc, 68597)), 68606))+4);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT32)0;
l25:
  _failed_function(67882); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)str;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68719)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c9));
  if (i1) goto l7;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68773)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c10));
  if (i0) goto l5;
  return (-1);
  goto l8;
l5:
  return 3;
  goto l8;
l7:
  return 2;
l8:
  _failed_function(68659); return 0;
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
  *(OOC_INT32*)((_check_pointer(i0, 69180))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 69218))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 69344))+52) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 69405))+68);
  *(OOC_INT32*)((_check_pointer(i0, 69382))+56) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)import;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69670))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69682))+12);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 69687)),(const void*)"SYSTEM"))==0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69858))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69837)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 69897))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69878)))), IO_BinaryRider__WriterDesc_WriteLInt)),IO_BinaryRider__WriterDesc_WriteLInt)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70064)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 70094))+48) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70114)))), &_td_OOC_SymbolTable__NameDesc, 70114));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70126)))), IO_BinaryRider__ReaderDesc_ReadLInt)),IO_BinaryRider__ReaderDesc_ReadLInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 70144))+56));
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
  *(OOC_INT32*)((_check_pointer(i0, 70611))+48) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 70642))+52) = i1;
  i1 = (OOC_INT32)constExpr;
  *(OOC_INT32*)((_check_pointer(i0, 70671))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 70830))+48) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 70860))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71038))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71014)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71065))+52);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71297))+52);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 71303))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71276)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71244)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71494)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 71592))+48) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71613)))), &_td_Object_Boxed__ObjectDesc, 71613));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 71553))+48) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71635)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&id);
  i1 = id;
  i2 = i1==(-1);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 71805);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 71805))*4);
  *(OOC_INT32*)((_check_pointer(i0, 71781))+52) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71834))+52);
  _assert((i1!=(OOC_INT32)0), 127, 71817);
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 71742))+52) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 71870))+56) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__InitExceptionName(OOC_SymbolTable__ExceptionName exceptionName, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 72083))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 72123))+20) = i1;
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Store(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72366))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72386))+24);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Load(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 72567))+20), (void*)((_check_pointer(i0, 72587))+24));
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72749)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72768)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=1u;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 72827))+48) = i1;
  i2 = _check_pointer(i0, 72854);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 72893))+56);
  if (i3) goto l3;
  i3=0u;
  goto l8;
l3:
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 72925))+59);
  if (i3) goto l6;
  i3 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i3=1u;
l8:
  *(OOC_UINT8*)(i2+60) = i3;
  i2 = _check_pointer(i0, 72978);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 73011))+56);
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 73043))+59);
  i3 = !i3;
  
l13:
  if (i3) goto l15;
  i1=0u;
  goto l16;
l15:
  i1 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
l16:
  *(OOC_UINT8*)(i2+61) = i1;
  i1 = _check_pointer(i0, 73102);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 73133))+60);
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 73172))+59);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=0u;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 73203))+61);
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
  *(OOC_INT32*)((_check_pointer(i0, 73631))+52) = i2;
  i3 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i0, 73665))+56) = i3;
  i3 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i0, 73706))+57) = i3;
  *(OOC_UINT8*)((_check_pointer(i0, 73745))+58) = 0u;
  i4 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i0, 73781))+59) = i4;
  *(OOC_UINT8*)((_check_pointer(i0, 73820))+63) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 73861))+64) = 1u;
  if (!i3) goto l3;
  *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73923)))), &_td_OOC_SymbolTable__FormalParsDesc, 73923)), 73934))+40) = i0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74145))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74159))+52);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74199))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74179)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74240))+57);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74220)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74280))+58);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74260)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74322))+59);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74302)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74362))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74342)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74410))+61);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74390)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74452))+62);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74432)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 74492))+63);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74472)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 74539))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74519)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 74700))+48), (void*)((_check_pointer(i0, 74714))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74734)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74753))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74774)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74793))+57));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74813)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74832))+58));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74854)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74873))+59));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74893)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74912))+60));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74940)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74959))+61));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74981)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75000))+62));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75020)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75039))+63));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75066)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75085))+64));
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 75123))+56);
  if (!i1) goto l4;
  *(OOC_INT32*)((_check_pointer(i0, 75235))+24) = (-1);
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
  *(OOC_INT32*)((_check_pointer(i0, 75664))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 75692))+52) = i1;
  i1 = isTypeParameter;
  *(OOC_UINT8*)((_check_pointer(i0, 75727))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75921))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75936))+52);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 75977))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75956)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 76143))+48), (void*)((_check_pointer(i0, 76158))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76178)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 76198))+56));
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDeclDesc_HasTypeParameters(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__TypePars typePars;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76355))+48);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76360))+28);
  typePars = (OOC_SymbolTable__TypePars)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76410))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76415))+4);
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDeclDesc_IsTypeParameter(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)typeDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76550))+4);
  return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76558)))), &_td_OOC_SymbolTable__TypeParsDesc));
  ;
}

OOC_SymbolTable__TypeDecl OOC_SymbolTable__TypeDeclDesc_ParametricType(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Item ptr;

  i0 = (OOC_INT32)typeDecl;
  i1 = OOC_SymbolTable__TypeDeclDesc_IsTypeParameter((OOC_SymbolTable__TypeDecl)i0);
  _assert(i1, 127, 76781);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76836))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76843))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76850))+8);
  ptr = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76880)))), &_td_OOC_SymbolTable__TypeDeclDesc));
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76911)))), &_td_OOC_SymbolTable__TypeDeclDesc, 76911)), 76920))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 76925))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76943))+4);
  i2 = i2!=i3;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (i2) goto l8_loop;
  i0=i1;
  goto l17;
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 76971));
  ptr = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76880)))), &_td_OOC_SymbolTable__TypeDeclDesc));
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76911)))), &_td_OOC_SymbolTable__TypeDeclDesc, 76911)), 76920))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 76925))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76943))+4);
  i2 = i2!=i3;
  
  goto l13;
l11:
  i2=1u;
l13:
  if (i2) goto l8_loop;
l16:
  i0=i1;
l17:
  return (OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77008)))), &_td_OOC_SymbolTable__TypeDeclDesc, 77008));
  ;
}

void OOC_SymbolTable__InitRedirect(OOC_SymbolTable__Redirect redir, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 77240))+48) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 77269))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77437))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77417)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77473))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77453)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77634)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 77663))+48) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 77679)))), &_td_OOC_SymbolTable__NameDesc, 77679));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77691)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 77720))+52) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77735)))), &_td_OOC_SymbolTable__NameDesc, 77735));
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
  *(OOC_INT32*)((_check_pointer(i0, 78068))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 78097))+52) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 78133))+56) = (-1);
  *(OOC_UINT8*)((_check_pointer(i0, 78162))+60) = 0u;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78354))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78370))+52);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 78411))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78390)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 78449))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78427)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 78622))+48), (void*)((_check_pointer(i0, 78638))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78658)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 78678))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78694)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 78715))+60));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 78835))+56) = i1;
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
  *(OOC_INT16*)((_check_pointer(i0, 79094))+48) = i1;
  i1 = minArgs;
  *(OOC_INT16*)((_check_pointer(i0, 79114))+50) = i1;
  i1 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i0, 79144))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(0u, 127, 79275);
  
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(0u, 127, 79389);
  
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
  *(OOC_INT8*)((_check_pointer(i0, 79829))+48) = i1;
  i1 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i0, 79867))+49) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 79913))+50) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 79948))+51) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 79985))+52) = 1u;
  *(OOC_INT32*)((_check_pointer(i0, 80023))+56) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 80056))+60) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 80081))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 80114))+68) = (OOC_INT32)0;
  i1 = (OOC_INT32)procAST;
  *(OOC_INT32*)((_check_pointer(i0, 80145))+72) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 80179))+76) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 80360))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80339)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 80400))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80379)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 80444))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80423)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 80485))+51);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80464)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 80528))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80507)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 80572))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80552)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80616))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80593)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80656))+68);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80636)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i0);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80866)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 80886))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80905)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 80925))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80948)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 80968))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80988)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 81008))+51));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81030)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 81050))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81074)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 81093))+56));
  *(OOC_INT32*)((_check_pointer(i0, 81121))+60) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81139)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 81240))+64) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81260)))), &_td_OOC_SymbolTable__FormalParsDesc, 81260));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 81197))+64) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 81293))+68) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 81334))+72) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 81364))+76) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 81563))+60) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 81676))+68) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)redefinition;
  i1 = (OOC_INT32)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 82045))+56);
  *(OOC_INT32*)((_check_pointer(i0, 82020))+56) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsTypeBound(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 82167))+48);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82546))+64);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82557))+40);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82566))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82546))+64);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82557))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82566))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82571)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82599)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82639)))), &_td_OOC_SymbolTable__PointerDesc, 82639)), 82647))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82639)))), &_td_OOC_SymbolTable__PointerDesc, 82639)), 82647))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82656)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82695)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82732)))), &_td_OOC_SymbolTable__RecordDesc, 82732));
l12:
  _failed_function(82246); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 83088))+24);
  *(OOC_INT32*)((_check_pointer(i0, 83064))+24) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83303))+4);
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ptype;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)(OOC_INT32)0);
  i1 = id;
  *(OOC_INT16*)((_check_pointer(i0, 83468))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(0u, 127, 83590);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(0u, 127, 83705);
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
  *(OOC_INT32*)((_check_pointer(i0, 83914))+40) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 83943))+44) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeNameDesc_IsPredefReference(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84065))+40);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84088))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84095))+12);
  i0 = _check_pointer(i0, 84099);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 84099)));
  i0 = i0==0u;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__TypeNameDesc_MarkAsPredefReference(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_SymbolTable__predefName;
  *(OOC_INT32*)((_check_pointer(i0, 84207))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84389))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84369)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84425))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84405)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84585)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 84676))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 84692)))), &_td_OOC_SymbolTable__NameDesc, 84692));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 84640))+40) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84712)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 84741))+44) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84756)))), &_td_OOC_SymbolTable__NameDesc, 84756));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84902)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84932))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84966))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84932))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 84936)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 0u);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85000)))), &_td_OOC_SymbolTable__ImportDesc, 85000));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 85199))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 85233))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 85274))+48) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 85352))+52) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 85375))+56) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 85405))+57) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 85438))+58) = 1u;
  *(OOC_INT16*)((_check_pointer(i0, 85472))+60) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 85501))+64) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85666))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85683))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 85725))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85707)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 85765))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85746)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 85801))+57);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85782)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 85840))+58);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85821)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i0, 85880))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85862)))), IO_BinaryRider__WriterDesc_WriteInt)),IO_BinaryRider__WriterDesc_WriteInt)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85921))+64);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85900)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 86131))+40), (void*)((_check_pointer(i0, 86148))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86172)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 86189))+48));
  *(OOC_INT32*)((_check_pointer(i0, 86215))+52) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86233)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 86251))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86268)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 86286))+57));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86306)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 86324))+58));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86346)))), IO_BinaryRider__ReaderDesc_ReadInt)),IO_BinaryRider__ReaderDesc_ReadInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 86363))+60));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86383)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 86479))+64) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86498)))), &_td_OOC_SymbolTable__NameDesc, 86498));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 86439))+64) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 86678))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 87002))+48);
  *(OOC_INT32*)((_check_pointer(i0, 86979))+56) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 87032))+48);
  *(OOC_INT32*)((_check_pointer(i1, 87032))+48) = (i0+1);
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
  *(OOC_INT32*)((_check_pointer(i0, 87248))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 87276))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeVarDesc_Store(OOC_SymbolTable__TypeVar typeVar, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)typeVar;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87449))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87464))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeVarDesc_Load(OOC_SymbolTable__TypeVar typeVar, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeVar;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 87620))+40), (void*)((_check_pointer(i0, 87635))+44));
  return;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeVarDesc_Bound(OOC_SymbolTable__TypeVar typeVar) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)typeVar;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87735))+40);
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitTypePars(OOC_SymbolTable__TypePars typePars, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typePars;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  *(OOC_INT32*)((_check_pointer(i0, 87870))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 87898))+24) = (OOC_INT32)0;
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
  *(OOC_INT32*)((_check_pointer(i0, 88212))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 88240))+24) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_SetNamespace(OOC_SymbolTable__TypePars typePars, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typePars;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 88425))+24) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88721)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

static void OOC_SymbolTable__LoadTypeRef(ADT_Storable__Reader r, struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag) {
  register OOC_INT32 i0;
  Object__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88925)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((OOC_INT32)typeRef+4) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88976)))), &_td_OOC_SymbolTable__TypeDesc, 88976));
  *(OOC_INT32*)(OOC_INT32)typeRef = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89007)))), &_td_OOC_SymbolTable__TypeDesc, 89007));
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
  *(OOC_INT32*)((_check_pointer(i0, 89268))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 89303))+44) = i1;
  i1 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i0, 89345))+48) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89843))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89862))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89908))+48);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 89918)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89886)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89953))+48);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 89963)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90001))+48);
  i5 = _check_pointer(i5, 90011);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90001))+48);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 90011)), 0);
  i7 = _check_index(i4, i7, OOC_UINT32, 90011);
  OOC_SymbolTable__StoreTypeRef((ADT_Storable__Writer)i1, (void*)(i5+(_check_index(i4, i6, OOC_UINT32, 90011))*8), (RT0__Struct)i3);
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
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 90197))+40), (void*)((_check_pointer(i0, 90216))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 90240)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 90271))+48) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90345))+48);
  i5 = _check_pointer(i5, 90355);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90345))+48);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 90355)), 0);
  i7 = _check_index(i4, i7, OOC_UINT32, 90355);
  OOC_SymbolTable__LoadTypeRef((ADT_Storable__Reader)i1, (void*)(i5+(_check_index(i4, i6, OOC_UINT32, 90355))*8), (RT0__Struct)i3);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90459))+40);
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
  *(OOC_INT32*)((_check_pointer(i0, 90665))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 90700))+44) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 90742))+48) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 90784))+49) = 0u;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90956))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90974))+44);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 91018))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 90998)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 91066))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91046)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 91221))+40), (void*)((_check_pointer(i0, 91239))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91263)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 91282))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91310)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 91329))+49));
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
  *(OOC_UINT8*)((_check_pointer(i0, 91591))+40) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 91630))+41) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 91664))+42) = 0u;
  i1 = (OOC_INT32)elementType;
  *(OOC_INT32*)((_check_pointer(i0, 91700))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 91739))+48) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 91785))+52) = (-1);
  i1 = (OOC_INT32)lengthExpr;
  *(OOC_INT32*)((_check_pointer(i0, 91810))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 91980))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91962)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 92019))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92001)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 92060))+42);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92042)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92101))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92120))+48);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 92164))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92147)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92297)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 92314))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92335)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 92352))+41));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92375)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 92392))+42));
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 92432))+44), (void*)((_check_pointer(i0, 92451))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92478)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 92494))+52));
  *(OOC_INT32*)((_check_pointer(i0, 92514))+56) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 92620))+52) = i1;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92942)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92959)))), &_td_OOC_SymbolTable__ArrayDesc, 92959)), 92965))+40);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93017)))), &_td_OOC_SymbolTable__ArrayDesc, 93017)), 93023))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93017)))), &_td_OOC_SymbolTable__ArrayDesc, 93017)), 93023))+44);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93035)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92942)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92959)))), &_td_OOC_SymbolTable__ArrayDesc, 92959)), 92965))+40);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93303)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93320)))), &_td_OOC_SymbolTable__ArrayDesc, 93320)), 93326))+40);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93361)))), &_td_OOC_SymbolTable__ArrayDesc, 93361)), 93367))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93361)))), &_td_OOC_SymbolTable__ArrayDesc, 93361)), 93367))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93379)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93303)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93320)))), &_td_OOC_SymbolTable__ArrayDesc, 93320)), 93326))+40);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93649)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
  
l4_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93681)))), &_td_OOC_SymbolTable__ArrayDesc, 93681)), 93687))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93681)))), &_td_OOC_SymbolTable__ArrayDesc, 93681)), 93687))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93699)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93649)))), &_td_OOC_SymbolTable__ArrayDesc);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94060)))), &_td_OOC_SymbolTable__ArrayDesc, 94060)), 94066))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94060)))), &_td_OOC_SymbolTable__ArrayDesc, 94060)), 94066))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 94078)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
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
  *(OOC_INT32*)((_check_pointer(i0, 94340))+40) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 94373))+44) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 94408))+48) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 94450))+52) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 94481))+56) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 94525))+57) = 0u;
  *(OOC_INT8*)((_check_pointer(i0, 94560))+58) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 94605))+60) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 94636))+64) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 94854))+56) = 1u;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_SetResultType(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Type resultType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)resultType;
  *(OOC_INT32*)((_check_pointer(i0, 95002))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 95043))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_SetNamespace(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 95274))+64) = i1;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95475))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95450)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95515))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95538))+48);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 95587))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95564)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 95637))+57);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95614)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 95678))+58);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95655)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95709))+60);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95796))+60);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 95804)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95769)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95844))+60);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 95852)), 0);
  i3 = 0<i2;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95894))+60);
  i4 = _check_pointer(i4, 95902);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 95902))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95869)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95737)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96138)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 96241))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 96259)))), &_td_OOC_SymbolTable__VarDeclDesc, 96259));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 96198))+40) = (OOC_INT32)0;
l4:
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 96303))+44), (void*)((_check_pointer(i0, 96326))+48));
  *(OOC_INT32*)((_check_pointer(i0, 96361))+52) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96383)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 96405))+56));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96432)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 96454))+57));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96472)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 96494))+58));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96517)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l15;
  *(OOC_INT32*)((_check_pointer(i0, 96618))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l16;
  i3=0;
l9_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96672)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96710))+60);
  i4 = _check_pointer(i4, 96718);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 96718))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 96729)))), &_td_OOC_SymbolTable__ExceptionNameDesc, 96729));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l9_loop;
  goto l16;
l15:
  *(OOC_INT32*)((_check_pointer(i0, 96572))+60) = (OOC_INT32)0;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 96777))+64) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_SymbolTable__InitTypeClosure(OOC_SymbolTable__TypeClosure tc, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeVarArray params, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)params;
  i1 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 97038)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 97056)), 0);
  _assert((i2==i3), 127, 97021);
  i2 = (OOC_INT32)tc;
  i3 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)i3);
  i3 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 97100))+40) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 97129))+44) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 97154))+48) = i1;
  i0 = i3!=(OOC_INT32)0;
  if (i0) goto l3;
  *(OOC_INT32*)((_check_pointer(i2, 97291))+32) = (-1);
  *(OOC_INT16*)((_check_pointer(i2, 97312))+36) = (-1);
  goto l4;
l3:
  i0 = *(OOC_INT32*)((_check_pointer(i3, 97233))+32);
  *(OOC_INT32*)((_check_pointer(i2, 97216))+32) = i0;
  i0 = *(OOC_INT16*)((_check_pointer(i3, 97266))+36);
  *(OOC_INT16*)((_check_pointer(i2, 97248))+36) = i0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97769))+40);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Lookup(OOC_SymbolTable__TypeClosure typeClosure, OOC_SymbolTable__TypeVar tv, OOC_SymbolTable__TypeVar _default) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)typeClosure;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98060))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98087))+48);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 98067)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 98097)), 0);
  _assert((i1==i2), 127, 98038);
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98144))+44);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 98151)), 0);
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98169))+44);
  i1 = _check_pointer(i1, 98176);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 98176))*4);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98144))+44);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 98151)), 0);
  i3 = i2!=i3;
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98169))+44);
  i3 = _check_pointer(i3, 98176);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 98176))*4);
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l16:
  i1=i2;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98240))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 98247)), 0);
  i2 = i1==i2;
  if (i2) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98505))+48);
  i0 = _check_pointer(i0, 98515);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 98515))*8);
  return (OOC_SymbolTable__Type)i0;
  goto l21;
l20:
  i0 = (OOC_INT32)_default;
  return (OOC_SymbolTable__Type)i0;
l21:
  _failed_function(97833); return 0;
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
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98845)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99297)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i2) goto l13;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99510))+28);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98882))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98905))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 98914))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 98923))+20);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 98930)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 98892)), 0);
  _assert((i2==i3), 127, 98867);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98961))+40);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 98970))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 98979))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 98986)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  args = (OOC_SymbolTable__TypeRefArray)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 99021)), 0);
  i4 = 0<i3;
  if (!i4) goto l27;
  i4 = (OOC_INT32)closure;
  i5=0;
l22_loop:
  i6 = _check_pointer(i2, 99055);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i2, 99055)), 0);
  i8 = _check_index(i5, i8, OOC_UINT32, 99055);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99080))+48);
  i8 = _check_pointer(i8, 99090);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 99090))*8);
  i8 = (OOC_INT32)OOC_SymbolTable__TypeClosureDesc_Closure((OOC_SymbolTable__TypeClosure)i4, (OOC_SymbolTable__Type)i8);
  OOC_SymbolTable__InitTypeRef((void*)(i6+(_check_index(i5, i7, OOC_UINT32, 99055))*8), (RT0__Struct)i1, (OOC_SymbolTable__Type)i8);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l22_loop;
l27:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99207))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 99216))+28);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99153))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 99225))+20);
  i2 = (OOC_INT32)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)(OOC_INT32)0, (OOC_SymbolTable__TypeVarArray)i3, (OOC_SymbolTable__TypeRefArray)i2);
  closure = (OOC_SymbolTable__TypeClosure)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99265))+40);
  nextType = (OOC_SymbolTable__Type)i0;
l28:
  i0 = (OOC_INT32)nextType;
  type = (OOC_SymbolTable__Type)i0;
  
  goto l4_loop;
l29:
  i1 = (OOC_INT32)closure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99753))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99803))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99819))+48);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100337)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l5;
  i0 = (OOC_INT32)closure;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100719))+48);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 100729)), 0);
  return (i0==0);
  goto l36;
l5:
  i1 = (OOC_INT32)closure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100384))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 100391)), 0);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l33;
  i3=0;
l8_loop:
  j = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100446))+48);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 100456)), 0);
  i4 = 0!=i4;
  if (i4) goto l11;
  i4=0u;
  goto l13;
l11:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100483))+48);
  i4 = _check_pointer(i4, 100493);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100511))+44);
  i6 = _check_pointer(i6, 100518);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT32, 100493))*8);
  i5 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 100518))*4);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100446))+48);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 100456)), 0);
  i5 = i4!=i5;
  if (i5) goto l19;
  i5=0u;
  goto l21;
l19:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100483))+48);
  i5 = _check_pointer(i5, 100493);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100511))+44);
  i7 = _check_pointer(i7, 100518);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 100493))*8);
  i6 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 100518))*4);
  i5 = i5!=i6;
  
l21:
  if (i5) goto l16_loop;
l25:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100587))+48);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 100597)), 0);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100294))+48);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 100304)), 0);
  return (i0==0);
l36:
  _failed_function(99881); return 0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102376))+48);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102475))+60);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__FormalParsDesc_Namespace(OOC_SymbolTable__FormalPars item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102576))+64);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102673))+52);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__TypeParsDesc_Namespace(OOC_SymbolTable__TypePars item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102772))+24);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__QualTypeDesc_Namespace(OOC_SymbolTable__QualType item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102871))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102871))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102880)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i0);
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103722)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l8;
      i1=0u;
      goto l10;
l8:
      i1 = OOC_SymbolTable__ImportDesc_IsInternalImport((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103741)))), &_td_OOC_SymbolTable__ImportDesc, 103741)));
      i1 = !i1;
      
l10:
      if (!i1) goto l18;
      i1 = (OOC_INT32)prunedImports;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103798)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
      goto l18;
l13:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 103458))+8), (void*)((_check_pointer(i0, 103477))+12));
      i1 = (OOC_INT32)*last;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l16;
      *(OOC_INT32*)(_check_pointer(i1, 103630)) = i0;
      goto l17;
l16:
      *list = (OOC_SymbolTable__Item)i0;
l17:
      *last = (OOC_SymbolTable__Item)i0;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 103861));
      _this = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l23:
      i0 = (OOC_INT32)*last;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l26;
      *(OOC_INT32*)(_check_pointer(i0, 103945)) = (OOC_INT32)0;
l26:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 104057))+8), (void*)((_check_pointer(i0, 104076))+12));
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 104137))+4);
  *(OOC_INT32*)((_check_pointer(i0, 104108))+72) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 104176))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 104216));
  i4 = _check_pointer(i4, 104222);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 104222))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 104226)))), &_td_OOC_SymbolTable__ImportDesc, 104226);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 104273))+48);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 104284))+12);
  *(OOC_INT32*)(_check_pointer(i5, 104258)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 104320))+56);
  *(OOC_INT32*)((_check_pointer(i5, 104298))+4) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104344))+72);
  i4 = _check_pointer(i4, 104358);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 104358))*4) = i5;
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
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105108)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105193)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return 0u;
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105236))+48);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105153))+44);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return 1u;
l12:
          _failed_function(104977); return 0;
          ;
        }


      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105385)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105405)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=1u;
l4:
      _assert(i1, 127, 105371);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105437)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105459))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105468)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l15;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105554))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105580)))), &_td_OOC_SymbolTable__TypeParsDesc);
      if (!i1) goto l16;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105618))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105505))+4);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105514)))), &_td_OOC_SymbolTable__ProcDeclDesc, 105514));
l16:
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105670)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105703)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l21;
l19:
      i1=1u;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105738)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l25;
l23:
      i1=1u;
l25:
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105771)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l28;
l27:
      i1=1u;
l28:
      _assert(i1, 127, 105657);
      found = 0u;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105826))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l55;
l31_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105884)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105963)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106043)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106122)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l40;
      found = 0u;
      i0=0u;
      goto l47;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106169))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l42:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106089))+64);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l44:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106009))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105929))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l47:
      i1 = (OOC_INT32)ptr;
      if (!i0) goto l50;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106284)))), &_td_OOC_SymbolTable__DeclarationDesc, 106284));
l50:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 106328));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l31_loop;
l55:
      _assert(0u, 127, 106358);
      _failed_function(104871); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT32)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 106499)),(const void*)""))==0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 106573)), 0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 106573)), i1);
      i2 = (OOC_INT32)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 106593)), 0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 106593)), i3);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 106619)), 0);
      _copy_8((const void*)(_check_pointer(i0, 106615)),(void*)(_check_pointer(i1, 106619)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 106653)), 0);
      Strings__Append(".", 2, (void*)(_check_pointer(i1, 106653)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 106686)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 106682)), 0);
      Strings__Append((void*)(_check_pointer(i2, 106682)), i3, (void*)(_check_pointer(i1, 106686)), i0);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT32)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(106410); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106756))+40);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l44;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106831)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l42;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106952)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106972)))), &_td_OOC_SymbolTable__ProcDeclDesc, 106972)));
  
l9:
  if (i1) goto l40;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107271)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l38;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107547)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107566)))), &_td_OOC_SymbolTable__VarDeclDesc, 107566)), 107574))+56);
  
l17:
  if (i1) goto l36;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107856)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1=0u;
  goto l23;
l21:
  i1 = OOC_SymbolTable__TypeDeclDesc_IsTypeParameter((OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107876)))), &_td_OOC_SymbolTable__TypeDeclDesc, 107876)));
  
l23:
  if (i1) goto l34;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108180))+4);
  parent = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108212)))), &_td_OOC_SymbolTable__DeclarationDesc));
  if (!i2) goto l33;
l28_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 108257))+4);
  parent = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108212)))), &_td_OOC_SymbolTable__DeclarationDesc));
  if (i2) goto l28_loop;
l33:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108308)))), &_td_OOC_SymbolTable__DeclarationDesc, 108308)), 108320)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108308)))), &_td_OOC_SymbolTable__DeclarationDesc, 108308)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108334))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108339))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l34:
  i1 = (OOC_INT32)OOC_SymbolTable__TypeDeclDesc_ParametricType((OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108059)))), &_td_OOC_SymbolTable__TypeDeclDesc, 108059)));
  ptr = (OOC_SymbolTable__Item)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108112)))), &_td_OOC_SymbolTable__TypeDeclDesc, 108112)), 108121)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108112)))), &_td_OOC_SymbolTable__TypeDeclDesc, 108112)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108135))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108140))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l36:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107745)))), &_td_OOC_SymbolTable__VarDeclDesc, 107745)), 107753))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107762)))), &_td_OOC_SymbolTable__FormalParsDesc, 107762)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107810)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 107825))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 107831))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l38:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107438)))), &_td_OOC_SymbolTable__FieldDeclDesc, 107438)), 107448))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107457)))), &_td_OOC_SymbolTable__RecordDesc, 107457)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107501)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 107516))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 107522))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l40:
  i0 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107170)))), &_td_OOC_SymbolTable__ProcDeclDesc, 107170)));
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107225)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 107240))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 107246))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l42:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 106924);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 106924))) = 0u;
  
l43:
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 108367))+40) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l45;
l44:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106796))+40);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l45:
  _failed_function(104422); return 0;
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
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108816)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l39;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109004)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109055)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109154)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109254)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l31;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109364)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109468)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109520)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109603)))), &_td_OOC_SymbolTable__QualTypeDesc);
      if (i1) goto l23;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109597)))), 109597);
      goto l40;
l23:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109655))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109671))+44);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l25:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109571))+40);
      i1 = (OOC_INT32)srcType;
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l27:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109501))+52);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l29:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109413))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109432))+48);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l40;
l33:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109205))+40);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109221))+44);
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
      _failed_function(108719); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109761)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109805)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109865)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109911)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109953)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109996)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110080)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110166)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110251)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110245)))), 110245);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110214))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110226))+52);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110129))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110141))+52);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110043))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110055))+52);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109896))+60);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109834))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109850))+48);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109790))+48);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(108453); return 0;
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 110817)), 0);
  _copy_8((const void*)"",(void*)(_check_pointer(i0, 110817)),i1);
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
