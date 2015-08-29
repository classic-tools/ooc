#include <OOC/SymbolTable.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(34770); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = OOC_FALSE;
  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36672)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(36802); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = OOC_FALSE;
  i0 = (OOC_INT32)ns;
  i1 = (OOC_INT32)sourceContext;
  i2 = (OOC_INT32)name;
  i3 = ignorePosition;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37726)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable__InitPosition(OOC_SymbolTable__Position position, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)position;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 37988)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 38014))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 38042))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)position;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 38231));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38211)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 38264))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38244)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 38298))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38278)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)position;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38450)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 38469)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38482)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 38501))+4));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38515)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 38534))+8));
  return;
  ;
}

void OOC_SymbolTable__InitName(OOC_SymbolTable__Name name, OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = pos;
  i1 = line;
  i2 = column;
  i3 = (OOC_INT32)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i3, i0, i1, i2);
  i0 = (OOC_INT32)str;
  *(OOC_INT32*)((_check_pointer(i3, 38747))+12) = i0;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38955))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38955))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 38960)), (OOC_INT32)0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 38960)), i2);
  len = i1;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38969)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39010))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38992)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 39015)), -1, 0, i1);
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Load(OOC_SymbolTable__Name name, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_Scanner_InputBuffer__CharArray str;

  i0 = (OOC_INT32)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, -2, -1, -1);
  i1 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39267)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 39313);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 39313))) = (OOC_CHAR8)'\000';
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39331)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 39347)), -1, 0, i2);
  *(OOC_INT32*)((_check_pointer(i0, 39367))+12) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l);
    
    void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)l;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39496));
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l7;
l2_loop:
      i0 = (OOC_INT32)l;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39531));
      l = (OOC_SymbolTable__Item)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39496));
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l2_loop;
l7:
      i0 = (OOC_INT32)l;
      i1 = (OOC_INT32)item;
      *(OOC_INT32*)(_check_pointer(i0, 39561)) = i1;
      return;
      ;
    }


  i0 = (OOC_INT32)item;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 39642)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 39671))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 39701))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 39729))+12) = (OOC_INT32)0;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39798)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39835)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=OOC_TRUE;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39874)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=OOC_TRUE;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39911)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l14;
l13:
  i2=OOC_TRUE;
l14:
  _assert(i2, 127, 39781);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39944))+8);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l17;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40036))+8);
  OOC_SymbolTable__InitItem_Append((OOC_SymbolTable__Item)i0);
  goto l19;
l17:
  *(OOC_INT32*)((_check_pointer(i1, 39982))+8) = i0;
l19:
  return;
  ;
}

static void OOC_SymbolTable__WriteItemList(ADT_Storable__Writer w, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i0 = i0!=(OOC_INT32)0;
  i1 = (OOC_INT32)w;
  if (!i0) goto l8;
l3_loop:
  i0 = (OOC_INT32)item;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40183)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40222));
  item = (OOC_SymbolTable__Item)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40249)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)(OOC_INT32)0);
  return;
  ;
}

static OOC_SymbolTable__Item OOC_SymbolTable__ReadItemList(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Item list;
  OOC_SymbolTable__Item last;
  ADT_Storable__Object obj;

  list = (OOC_SymbolTable__Item)(OOC_INT32)0;
  last = (OOC_SymbolTable__Item)(OOC_INT32)0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40443)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=(OOC_INT32)0;
  goto l17;
l3:
  i1=(OOC_INT32)0;i2=(OOC_INT32)0;
l4_loop:
  i3 = (OOC_INT32)obj;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40500)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i4) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40491)))), 40491);
  
  goto l12;
l7:
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l10;
  list = (OOC_SymbolTable__Item)i3;
  i1=i3;
  goto l11;
l10:
  *(OOC_INT32*)(_check_pointer(i1, 40551)) = i3;
  i1=i2;
l11:
  last = (OOC_SymbolTable__Item)i3;
  i2=i1;i1=i3;
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40656)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i3 = (OOC_INT32)obj;
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l4_loop;
l16:
  i0=i2;
l17:
  return (OOC_SymbolTable__Item)i0;
  ;
}

void OOC_SymbolTable__ItemDesc_Store(OOC_SymbolTable__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40804))+8);
  i2 = (OOC_INT32)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40843))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 40824)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 41004)) = (OOC_INT32)0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 41033))+8) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41072)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 41161))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41177)))), &_td_OOC_SymbolTable__ItemDesc, 41177));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 41126))+4) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 41200))+12) = (OOC_INT32)0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41491))+4);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l7;
l2_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41528))+4);
  item = (OOC_SymbolTable__Item)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41491))+4);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l2_loop;
l7:
  i0 = (OOC_INT32)item;
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41562)))), &_td_OOC_SymbolTable__ModuleDesc, 41562));
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41812))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41853)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=OOC_TRUE;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41936)))), &_td_OOC_SymbolTable__ProcDeclDesc, 41936));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l13:
  _failed_function(41608); return 0;
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
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 42375)));
      goto l4;
l3:
      i0 = (OOC_INT32)fl;
      *(OOC_INT32*)(_check_pointer(i0, 42307)) = (OOC_INT32)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42437))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42441)),(const void*)"NO_COPY"))==(OOC_INT32)0;
  if (i1) goto l39;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42500))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42504)),(const void*)"ABSTRACT"))==(OOC_INT32)0;
  if (i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42566))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42570)),(const void*)"NO_LENGTH_INFO"))==(OOC_INT32)0;
  if (i1) goto l35;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42642))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42646)),(const void*)"NO_DESCRIPTOR"))==(OOC_INT32)0;
  if (i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42717))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42721)),(const void*)"NOT_EXTENSIBLE"))==(OOC_INT32)0;
  if (i1) goto l31;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42794))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42798)),(const void*)"CSTRING"))==(OOC_INT32)0;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42858))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42862)),(const void*)"NIL_COMPAT"))==(OOC_INT32)0;
  if (i1) goto l27;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42927))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42931)),(const void*)"UNION"))==(OOC_INT32)0;
  if (i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42987))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 42991)),(const void*)"READ_ONLY"))==(OOC_INT32)0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43054))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43058)),(const void*)"NO_RETURN"))==(OOC_INT32)0;
  if (i1) goto l21;
  id = -1;
  i1=-1;
  goto l40;
l21:
  id = 9;
  i1=9;
  goto l40;
l23:
  id = 8;
  i1=8;
  goto l40;
l25:
  id = 7;
  i1=7;
  goto l40;
l27:
  id = 6;
  i1=6;
  goto l40;
l29:
  id = 5;
  i1=5;
  goto l40;
l31:
  id = 4;
  i1=4;
  goto l40;
l33:
  id = 3;
  i1=3;
  goto l40;
l35:
  id = 2;
  i1=2;
  goto l40;
l37:
  id = 1;
  i1=1;
  goto l40;
l39:
  id = (OOC_INT32)0;
  i1=(OOC_INT32)0;
l40:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 43173))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 43190))+8) = i0;
  i0 = (OOC_INT32)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 43219))+12));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i1, 43495))+16) = i0;
  i0 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i1, 43519))+20) = i0;
  i0 = exportMark;
  *(OOC_INT8*)((_check_pointer(i1, 43557))+24) = i0;
  i0 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i1, 43593))+28) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 43627))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 43654))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43810))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43791)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 43881))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43865)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 43908))+24);
  i2 = i2!=0;
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44005)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43971))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43952)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
l4:
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Load(OOC_SymbolTable__Declaration decl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44191)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 44219))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44233)))), &_td_OOC_SymbolTable__NameDesc, 44233));
  *(OOC_INT32*)((_check_pointer(i1, 44402))+20) = -3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44616)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i1, 44635))+24) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44675)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 44773))+28) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44796)))), &_td_OOC_Doc__DocumentDesc, 44796));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 44731))+28) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 44825))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 44852))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCount(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 44951))+36);
  *(OOC_INT32*)((_check_pointer(i0, 44951))+36) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45369)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45388))+20);
  i0 = i0==(OOC_INT32)0;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__InitType(OOC_SymbolTable__Type type, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)position;
  *(OOC_INT32*)((_check_pointer(i1, 45549))+16) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 45581))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 45610))+24) = -2;
  *(OOC_INT16*)((_check_pointer(i1, 45641))+28) = 1;
  *(OOC_UINT8*)((_check_pointer(i1, 45663))+30) = OOC_TRUE;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45811))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45792)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (!i2) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45890))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45871)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
l4:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 45933))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45917)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i1, 45963))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45947)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 45995))+30);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45978)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Load(OOC_SymbolTable__Type type, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46160)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 46253))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46273)))), &_td_OOC_SymbolTable__TypeDeclDesc, 46273));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 46214))+20) = (OOC_INT32)0;
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__importPosition;
  *(OOC_INT32*)((_check_pointer(i1, 46415))+16) = i2;
  goto l8;
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46337)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 46367))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46385)))), &_td_OOC_SymbolTable__PositionDesc, 46385));
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46459)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 46474))+24));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46488)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i1, 46511))+28) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46538)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 46554))+30));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)namingDecl;
  *(OOC_INT32*)((_check_pointer(i0, 46751))+20) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 46881))+24) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 46905))+28) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT32)type;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47169)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47218)))), &_td_OOC_SymbolTable__ArrayDesc, 47218)), 47224))+36);
  type = (OOC_SymbolTable__Type)i1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47169)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return i0;
  ;
}

static void OOC_SymbolTable__InitLinkDirective(OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 47371)) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 47499));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47483)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47623)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 47704)) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47718)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 47718));
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 47674)) = (OOC_INT32)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Store(OOC_SymbolTable__LinkFile l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri);
    
    void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri) {
      register OOC_INT32 i0;
      OOC_CHAR8 b[1024];

      i0 = (OOC_INT32)uri;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47932)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47956)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i0, (void*)(OOC_INT32)b, 1024);
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48040))+4);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i0, (URI__HierarchicalURI)i1);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48067))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48054)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48102))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48089)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__String str;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48220)))), BinaryRider__ReaderDesc_ReadStr)),BinaryRider__ReaderDesc_ReadStr)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&str);
  i0 = (OOC_INT32)str;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT32)0;
l4:
  _failed_function(48143); return 0;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Load(OOC_SymbolTable__LinkFile l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(ADT_Storable__Reader r, URI__HierarchicalURI *uri);
    
    void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(ADT_Storable__Reader r, URI__HierarchicalURI *uri) {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 b[1024];
      URI__URI u;
      Msg__Msg res;

      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48549)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)b, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
      i1 = (OOC_INT32)res;
      u = (URI__URI)i0;
      _assert((i1==(OOC_INT32)0), 127, 48732);
      i1 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48847)))), &_td_URI__HierarchicalURIDesc, 48847)), 48863)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48847)))), &_td_URI__HierarchicalURIDesc, 48847)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48913)))), &_td_URI__HierarchicalURIDesc, 48913));
      return;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 48994))+4));
  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49008))+8) = i2;
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49046))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49212))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49199)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49246))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49233)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49281))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49268)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49321))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49335)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49303)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49364))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 49378)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49406))+8);
  i4 = _check_pointer(i4, 49420);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 49420))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49393)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Load(OOC_SymbolTable__LinkLib l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49556))+4) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49593))+12) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49631))+16) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49669)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 49696))+8) = ((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49752))+8);
  i4 = _check_pointer(i4, 49766);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 49766))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__InitModule(OOC_SymbolTable__Module mod, OOC_SymbolTable__Name name, OOC_Doc__Document docString, OOC_INT8 _class, OOC_INT8 callConv, OOC_AST__Node moduleAST, OOC_SymbolTable__ProcDecl bodyDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)docString;
  i2 = (OOC_INT32)mod;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i0, 0, 1, (OOC_Doc__Document)i1);
  *(OOC_INT32*)((_check_pointer(i2, 50094))+40) = (OOC_INT32)0;
  i0 = _class;
  *(OOC_INT8*)((_check_pointer(i2, 50114))+44) = i0;
  i0 = callConv;
  *(OOC_INT8*)((_check_pointer(i2, 50139))+52) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 50170))+56) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 50202))+60) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 50229))+64) = (OOC_INT32)0;
  i0 = (OOC_INT32)moduleAST;
  *(OOC_INT32*)((_check_pointer(i2, 50260))+68) = i0;
  i0 = (OOC_INT32)bodyDecl;
  *(OOC_INT32*)((_check_pointer(i2, 50293))+72) = i0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)mod;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 50467))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50451)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50497))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50482)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 50533))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50517)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50569))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50551)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)mod;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 50720))+40) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50738)))), BinaryRider__ReaderDesc_ReadSInt)),BinaryRider__ReaderDesc_ReadSInt)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 50753))+44));
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 50770))+48) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50807)))), BinaryRider__ReaderDesc_ReadSInt)),BinaryRider__ReaderDesc_ReadSInt)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 50822))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50840)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 50935))+56) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50959)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 50959));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 50893))+56) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 50990))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 51021))+68) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 51197))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 51301))+48) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 51416))+44);
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
    _failed_case(i0, 51408);
    goto l7;
  }
l7:
  _failed_function(51370); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 51678))+52);
  switch (i0) {
  case -1:
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
    _failed_case(i0, 51670);
    goto l8;
  }
l8:
  _failed_function(51629); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)((_check_pointer(i0, 52124))+4) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52145))+8) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52182))+12) = i1;
  return (OOC_SymbolTable__LinkFile)i0;
  ;
}

static OOC_SymbolTable__LinkLib OOC_SymbolTable__NewLinkLib(Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkLib l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkLib.baseTypes[0]);
  l = (OOC_SymbolTable__LinkLib)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)libraryName;
  *(OOC_INT32*)((_check_pointer(i0, 52492))+4) = i1;
  i1 = (OOC_INT32)dependencies;
  *(OOC_INT32*)((_check_pointer(i0, 52527))+8) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52564))+12) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 52601))+16) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 52845)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 52777)) = (OOC_INT32)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  _assert((i0!=(OOC_INT32)0), 127, 53039);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)prefixOption;
  i3 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i2, (Object__String)i3);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 53085))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)libraryName;
  _assert((i0!=(OOC_INT32)0), 127, 53411);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)dependencies;
  i3 = (OOC_INT32)prefixOption;
  i4 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i2, (Object__String)i3, (Object__String)i4);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 53464))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 54117))+44);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 54146))+44);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l25;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54185))+56);
  i1 = i0!=(OOC_INT32)0;
  l = (OOC_SymbolTable__LinkDirective)i0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54230)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54260));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54230)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT32)0);
l25:
  _failed_function(53649); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 54790))+44);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 54818))+44);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  _assert(i1, 127, 54778);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54855))+56);
  i1 = i0!=(OOC_INT32)0;
  l = (OOC_SymbolTable__LinkDirective)i0;
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54899)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54927));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54899)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55008)))), &_td_OOC_SymbolTable__LinkFileDesc, 55008)), 55017))+4);
  _assert((i1!=(OOC_INT32)0), 127, 54998);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55040)))), &_td_OOC_SymbolTable__LinkFileDesc, 55040)), 55049))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55040)))), &_td_OOC_SymbolTable__LinkFileDesc, 55040)), 55049))+4);
  i3 = (OOC_INT32)rootURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55055)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55099)))), &_td_OOC_SymbolTable__LinkFileDesc, 55099)), 55108))+4);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT32)0;
l25:
  _failed_function(54384); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)str;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55221)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c9));
  if (i1) goto l7;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55275)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c10));
  if (i0) goto l5;
  return -1;
  goto l8;
l5:
  return 3;
  goto l8;
l7:
  return 2;
l8:
  _failed_function(55161); return 0;
  ;
}

void OOC_SymbolTable__InitImport(OOC_SymbolTable__Import import, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_Doc__Document docString, OOC_SymbolTable__Name moduleName) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = (OOC_INT32)docString;
  i4 = (OOC_INT32)import;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i4, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, 0, (OOC_Doc__Document)i3);
  i0 = (OOC_INT32)moduleName;
  *(OOC_INT32*)((_check_pointer(i4, 55682))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i4, 55720))+44) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 55846))+44) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 55907))+60);
  *(OOC_INT32*)((_check_pointer(i0, 55884))+48) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)import;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56172))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56184))+12);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 56189)),(const void*)"SYSTEM"))==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)import;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56344))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56323)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 56383))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56364)))), BinaryRider__WriterDesc_WriteLInt)),BinaryRider__WriterDesc_WriteLInt)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)import;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56536)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 56566))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56586)))), &_td_OOC_SymbolTable__NameDesc, 56586));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56598)))), BinaryRider__ReaderDesc_ReadLInt)),BinaryRider__ReaderDesc_ReadLInt)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 56616))+48));
  return;
  ;
}

void OOC_SymbolTable__InitConstDecl(OOC_SymbolTable__ConstDecl constDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, Object_Boxed__Object value, OOC_SymbolTable__PredefType type, OOC_AST__Node constExpr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)constDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i5, 57083))+40) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 57114))+44) = i0;
  i0 = (OOC_INT32)constExpr;
  *(OOC_INT32*)((_check_pointer(i5, 57143))+48) = i0;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 57302))+40) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 57332))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)constDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57494))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57470)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57521))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57753))+44);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 57759))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57732)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57700)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, -1);
l4:
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Load(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;
  OOC_INT32 id;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)constDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57936)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 58034))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58055)))), &_td_Object_Boxed__ObjectDesc, 58055));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 57995))+40) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58077)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&id);
  i0 = id;
  i2 = i0==-1;
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 58247);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 58247))*4);
  *(OOC_INT32*)((_check_pointer(i1, 58223))+44) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58276))+44);
  _assert((i0!=(OOC_INT32)0), 127, 58259);
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 58184))+44) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i1, 58312))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__InitExceptionName(OOC_SymbolTable__ExceptionName exceptionName, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)exceptionName;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i1, 58525))+20) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 58565))+16) = i0;
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Store(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)exceptionName;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58795))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58767)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Load(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)exceptionName;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58969)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 59006))+20) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59027)))), &_td_OOC_SymbolTable__TypeDesc, 59027));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59074))+20);
  *(OOC_INT32*)((_check_pointer(i1, 59051))+16) = i0;
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59236)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59255)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=OOC_TRUE;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 59314))+40) = i1;
  i2 = _check_pointer(i0, 59341);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 59380))+48);
  if (i3) goto l3;
  i0=OOC_FALSE;
  goto l8;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 59412))+50);
  if (i0) goto l6;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i0=OOC_TRUE;
l8:
  *(OOC_UINT8*)(i2+51) = i0;
  i0 = (OOC_INT32)varDecl;
  i1 = _check_pointer(i0, 59465);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 59498))+48);
  if (i2) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 59530))+50);
  i0 = !i0;
  
l13:
  if (i0) goto l15;
  i0=OOC_FALSE;
  goto l16;
l15:
  i0 = (OOC_INT32)type;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i0);
  
l16:
  *(OOC_UINT8*)(i1+52) = i0;
  i0 = (OOC_INT32)varDecl;
  i1 = _check_pointer(i0, 59589);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 59620))+51);
  if (i2) goto l19;
  i2=OOC_FALSE;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 59659))+50);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=OOC_FALSE;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 59690))+52);
  i0 = !i0;
  
l24:
  *(OOC_UINT8*)(i1+53) = i0;
  return;
  ;
}

void OOC_SymbolTable__InitVarDecl(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isParameter, OOC_CHAR8 isReceiver, OOC_CHAR8 isVarParam, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)varDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 60118))+44) = i1;
  i2 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i5, 60152))+48) = i2;
  i2 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i5, 60193))+49) = i2;
  i3 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i5, 60232))+50) = i3;
  *(OOC_UINT8*)((_check_pointer(i5, 60271))+54) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i5, 60312))+55) = OOC_TRUE;
  if (!i2) goto l3;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60374)))), &_td_OOC_SymbolTable__FormalParsDesc, 60374)), 60385))+32) = i5;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 60427)))), OOC_SymbolTable__VarDeclDesc_SetType)),OOC_SymbolTable__VarDeclDesc_SetType)((OOC_SymbolTable__VarDecl)i5, (OOC_SymbolTable__Type)i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Store(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)varDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60623))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60601)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60664))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60644)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60705))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60685)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60745))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60725)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60785))+51);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60765)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60833))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60813)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60875))+53);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60855)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 60915))+54);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60895)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 60962))+55);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60942)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)varDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61121)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 61152))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 61173)))), &_td_OOC_SymbolTable__TypeDesc, 61173));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61208))+44);
  *(OOC_INT32*)((_check_pointer(i1, 61191))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61228)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61247))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61268)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61287))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61307)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61326))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61346)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61365))+51));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61393)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61412))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61434)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61453))+53));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61473)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61492))+54));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61519)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61538))+55));
  i0 = *(OOC_UINT8*)((_check_pointer(i1, 61576))+48);
  if (!i0) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 61688))+20) = -1;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitTypeDecl(OOC_SymbolTable__TypeDecl typeDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 62066))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 62094))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62300))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62277)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62458)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 62490))+44) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62511)))), &_td_OOC_SymbolTable__TypeDesc, 62511));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62548))+44);
  *(OOC_INT32*)((_check_pointer(i1, 62530))+40) = i0;
  return;
  ;
}

void OOC_SymbolTable__InitRedirect(OOC_SymbolTable__Redirect redir, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)redir;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i0 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i2, 62774))+40) = i0;
  i0 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i2, 62803))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)redir;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62955))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62935)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62991))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62971)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)redir;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63138)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 63167))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 63183)))), &_td_OOC_SymbolTable__NameDesc, 63183));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63195)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 63224))+44) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63239)))), &_td_OOC_SymbolTable__NameDesc, 63239));
  return;
  ;
}

void OOC_SymbolTable__InitFieldDecl(OOC_SymbolTable__FieldDecl fieldDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 63572))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 63601))+44) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 63637))+48) = -1;
  *(OOC_UINT8*)((_check_pointer(i5, 63666))+52) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63887))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63863)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 63929))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63908)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 63967))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63945)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64136)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 64169))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64190)))), &_td_OOC_SymbolTable__TypeDesc, 64190));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64229))+44);
  *(OOC_INT32*)((_check_pointer(i1, 64210))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64249)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 64269))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64285)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 64306))+52));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 64426))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitPredefProc(OOC_SymbolTable__PredefProc proc, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT16 id, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)proc;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i2, 64685))+40) = i0;
  i0 = minArgs;
  *(OOC_INT16*)((_check_pointer(i2, 64705))+42) = i0;
  i0 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i2, 64735))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(OOC_FALSE, 127, 64850);
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(OOC_FALSE, 127, 64948);
  return;
  ;
}

void OOC_SymbolTable__InitProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isTypeBound, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)name;
  i2 = visibleFrom;
  i3 = exportMark;
  i4 = (OOC_INT32)docString;
  i5 = (OOC_INT32)procDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  i0 = isTypeBound;
  *(OOC_UINT8*)((_check_pointer(i5, 65380))+40) = i0;
  i0 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i5, 65422))+41) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 65468))+42) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i5, 65503))+44) = -1;
  *(OOC_INT32*)((_check_pointer(i5, 65536))+48) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i5, 65561))+52) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i5, 65594))+56) = (OOC_INT32)0;
  i0 = (OOC_INT32)procAST;
  *(OOC_INT32*)((_check_pointer(i5, 65625))+60) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 65659))+64) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)procDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 65824))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65803)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 65866))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65845)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 65910))+42);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65889)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 65950))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65930)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 65994))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65971)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 66034))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66014)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66230)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66250))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66271)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66291))+41));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66314)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66334))+42));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66354)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 66373))+44));
  *(OOC_INT32*)((_check_pointer(i0, 66401))+48) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66419)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 66520))+52) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 66540)))), &_td_OOC_SymbolTable__FormalParsDesc, 66540));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 66477))+52) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 66573))+56) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 66614))+60) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 66644))+64) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 66843))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 66956))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)redefinition;
  i1 = (OOC_INT32)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 67325))+44);
  *(OOC_INT32*)((_check_pointer(i0, 67300))+44) = i1;
  return;
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable__ProcDeclDesc_Class(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item _class;

  i0 = (OOC_INT32)procDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 67651))+40);
  if (i1) goto l3;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67693))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67705))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67715))+40);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67739)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67779)))), &_td_OOC_SymbolTable__PointerDesc, 67779)), 67787))+32);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67825)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67862)))), &_td_OOC_SymbolTable__RecordDesc, 67862));
l12:
  _failed_function(67394); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 68218))+20);
  *(OOC_INT32*)((_check_pointer(i0, 68194))+20) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68433))+4);
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)ptype;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i1, 68598))+32) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(OOC_FALSE, 127, 68704);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(OOC_FALSE, 127, 68803);
  return;
  ;
}

void OOC_SymbolTable__InitTypeName(OOC_SymbolTable__TypeName tname, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)tname;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i2, 69012))+32) = i0;
  i0 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i2, 69041))+36) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)tname;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69192))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69172)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69228))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69208)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)tname;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69374)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 69465))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69481)))), &_td_OOC_SymbolTable__NameDesc, 69481));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 69429))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69501)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 69530))+36) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69545)))), &_td_OOC_SymbolTable__NameDesc, 69545));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69691)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69721))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69755))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69721))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69725)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, OOC_FALSE);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69789)))), &_td_OOC_SymbolTable__ImportDesc, 69789));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)record;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 69988))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 70022))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 70063))+40) = -1;
  *(OOC_INT32*)((_check_pointer(i2, 70141))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i2, 70164))+48) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 70194))+49) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 70227))+50) = OOC_TRUE;
  *(OOC_INT32*)((_check_pointer(i2, 70261))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)record;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70456))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70435)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 70499))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70481)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 70539))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70520)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 70575))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70556)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 70614))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70595)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70657))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70636)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70836)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 70938))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70963)))), &_td_OOC_SymbolTable__TypeDesc, 70963));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 70892))+36) = (OOC_INT32)0;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71008))+36);
  *(OOC_INT32*)((_check_pointer(i0, 70988))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71032)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71049))+40));
  *(OOC_INT32*)((_check_pointer(i0, 71075))+44) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71093)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71111))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71128)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71146))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71166)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 71184))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71206)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 71302))+52) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71321)))), &_td_OOC_SymbolTable__NameDesc, 71321));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 71262))+52) = (OOC_INT32)0;
l8:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 71501))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 71825))+40);
  *(OOC_INT32*)((_check_pointer(i0, 71802))+44) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 71855))+40);
  *(OOC_INT32*)((_check_pointer(i1, 71855))+40) = (i0+1);
  return;
  ;
}

void OOC_SymbolTable__InitPointer(OOC_SymbolTable__Pointer pointer, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)pointer;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 72075))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 72110))+36) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 72152))+40) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 72194))+41) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pointer;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 72397))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72375)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 72442))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72422)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 72490))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72470)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)pointer;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72643)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 72674))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72699)))), &_td_OOC_SymbolTable__TypeDesc, 72699));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 72738))+36);
  *(OOC_INT32*)((_check_pointer(i1, 72717))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72762)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 72781))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72809)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 72828))+41));
  return;
  ;
}

void OOC_SymbolTable__InitArray(OOC_SymbolTable__Array array, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_CHAR8 isOpenArray, OOC_SymbolTable__Type elementType, OOC_AST__Node lengthExpr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)array;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = isOpenArray;
  *(OOC_UINT8*)((_check_pointer(i2, 73090))+32) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 73129))+33) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i2, 73163))+34) = OOC_FALSE;
  i0 = (OOC_INT32)elementType;
  *(OOC_INT32*)((_check_pointer(i2, 73199))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 73238))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 73284))+44) = -1;
  i0 = (OOC_INT32)lengthExpr;
  *(OOC_INT32*)((_check_pointer(i2, 73309))+48) = i0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)array;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 73463))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73445)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 73502))+33);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73484)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 73543))+34);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73525)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73632))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73612)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 73677))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73660)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)array;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73826)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 73843))+32));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73864)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 73881))+33));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73904)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 73921))+34));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73945)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 73974))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74002)))), &_td_OOC_SymbolTable__TypeDesc, 74002));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74040))+40);
  *(OOC_INT32*)((_check_pointer(i1, 74018))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74067)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 74083))+44));
  *(OOC_INT32*)((_check_pointer(i1, 74103))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 74209))+44) = i1;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74531)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74548)))), &_td_OOC_SymbolTable__ArrayDesc, 74548)), 74554))+32);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74607)))), &_td_OOC_SymbolTable__ArrayDesc, 74607)), 74613))+36);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74531)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74548)))), &_td_OOC_SymbolTable__ArrayDesc, 74548)), 74554))+32);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74883)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74900)))), &_td_OOC_SymbolTable__ArrayDesc, 74900)), 74906))+32);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74942)))), &_td_OOC_SymbolTable__ArrayDesc, 74942)), 74948))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74883)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74900)))), &_td_OOC_SymbolTable__ArrayDesc, 74900)), 74906))+32);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75220)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75252)))), &_td_OOC_SymbolTable__ArrayDesc, 75252)), 75258))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75220)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNthElementType(OOC_SymbolTable__Array array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)array;
  i1 = dim;
  i1 = i1>0;
  type = (OOC_SymbolTable__Type)i0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75621)))), &_td_OOC_SymbolTable__ArrayDesc, 75621)), 75627))+36);
  i1 = dim;
  i1 = i1-1;
  type = (OOC_SymbolTable__Type)i0;
  dim = i1;
  i1 = i1>0;
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitFormalPars(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type resultType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)formalPars;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  *(OOC_INT32*)((_check_pointer(i2, 75910))+32) = (OOC_INT32)0;
  i0 = (OOC_INT32)resultType;
  *(OOC_INT32*)((_check_pointer(i2, 75943))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 75985))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 76034))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i2, 76065))+48) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 76109))+49) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i2, 76144))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 76366))+48) = OOC_TRUE;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)formalPars;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76577))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76552)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76669))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76644)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76709))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76796))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 76804)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76769)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76844))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 76852)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76894))+44);
  i4 = _check_pointer(i4, 76902);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 76902))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76869)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76737)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, -1);
l12:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 76954))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76931)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77004))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76981)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77035))+52);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l23;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77122))+52);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 77130)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77095)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77170))+52);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 77178)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l24;
  i3=0;
l17_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77220))+52);
  i4 = _check_pointer(i4, 77228);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 77228))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77195)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l17_loop;
  goto l24;
l23:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77063)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, -1);
l24:
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Load(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_Storable__Object obj;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)formalPars;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77422)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 77525))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 77543)))), &_td_OOC_SymbolTable__VarDeclDesc, 77543));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 77482))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77566)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i1, 77678))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 77705)))), &_td_OOC_SymbolTable__TypeDesc, 77705));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 77626))+40) = (OOC_INT32)0;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77760))+40);
  *(OOC_INT32*)((_check_pointer(i1, 77734))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77786)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l19;
  *(OOC_INT32*)((_check_pointer(i1, 77887))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l13_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77941)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77979))+44);
  i4 = _check_pointer(i4, 77987);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 77987))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 77998)))), &_td_OOC_SymbolTable__VarDeclDesc, 77998));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l13_loop;
  goto l20;
l19:
  *(OOC_INT32*)((_check_pointer(i1, 77841))+44) = (OOC_INT32)0;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78031)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78053))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78080)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78102))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78125)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l31;
  *(OOC_INT32*)((_check_pointer(i1, 78226))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l32;
  i3=0;
l25_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78280)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78318))+52);
  i4 = _check_pointer(i4, 78326);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 78326))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 78337)))), &_td_OOC_SymbolTable__ExceptionNameDesc, 78337));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l25_loop;
  goto l32;
l31:
  *(OOC_INT32*)((_check_pointer(i1, 78180))+52) = (OOC_INT32)0;
l32:
  return;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ItemDesc_Namespace(OOC_SymbolTable__Item item) {

  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ModuleDesc_Namespace(OOC_SymbolTable__Module item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78736))+40);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78835))+48);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78932))+44);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

void OOC_SymbolTable__Prune(OOC_SymbolTable__Module root, ADT_Dictionary__Dictionary keep) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_ArrayList__ArrayList prunedImports;
  OOC_INT32 i;
  OOC_SymbolTable__Import import;
  OOC_SymbolTable__ModuleRef mr;
  auto void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list);
    
    void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item _this;
      OOC_SymbolTable__Item last;

      i0 = (OOC_INT32)*list;
      _this = (OOC_SymbolTable__Item)i0;
      last = (OOC_SymbolTable__Item)(OOC_INT32)0;
      i1 = i0!=(OOC_INT32)0;
      *list = (OOC_SymbolTable__Item)(OOC_INT32)0;
      if (i1) goto l3;
      i0=(OOC_INT32)0;
      goto l24;
l3:
      i1=(OOC_INT32)0;
l4_loop:
      i2 = (OOC_INT32)keep;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79469)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
      if (i2) goto l14;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79756)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i2) goto l9;
      i2=OOC_FALSE;
      goto l11;
l9:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79775)))), &_td_OOC_SymbolTable__ImportDesc, 79775)), 79782)))), OOC_SymbolTable__ImportDesc_IsInternalImport)),OOC_SymbolTable__ImportDesc_IsInternalImport)((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79775)))), &_td_OOC_SymbolTable__ImportDesc, 79775)));
      i2 = !i2;
      
l11:
      if (!i2) goto l19;
      i2 = (OOC_INT32)prunedImports;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79832)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i0);
      goto l19;
l14:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 79515))+8));
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l17;
      *(OOC_INT32*)(_check_pointer(i1, 79664)) = i0;
      goto l18;
l17:
      *list = (OOC_SymbolTable__Item)i0;
l18:
      last = (OOC_SymbolTable__Item)i0;
      i1=i0;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 79895));
      _this = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l4_loop;
l23:
      i0=i1;
l24:
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l27;
      *(OOC_INT32*)(_check_pointer(i0, 79979)) = (OOC_INT32)0;
l27:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 80091))+8));
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 80148))+4);
  *(OOC_INT32*)((_check_pointer(i0, 80119))+64) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 80187))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 80227));
  i4 = _check_pointer(i4, 80233);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 80233))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 80237)))), &_td_OOC_SymbolTable__ImportDesc, 80237);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 80284))+40);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 80295))+12);
  *(OOC_INT32*)(_check_pointer(i5, 80269)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 80331))+48);
  *(OOC_INT32*)((_check_pointer(i5, 80309))+4) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80355))+64);
  i4 = _check_pointer(i4, 80369);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 80369))*4) = i5;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  OOC_Scanner_InputBuffer__CharArray id;
  OOC_SymbolTable__Declaration declWithType;
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
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81096)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81181)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return OOC_FALSE;
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81224))+40);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81141))+36);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return OOC_TRUE;
l12:
          _failed_function(80965); return 0;
          ;
        }


      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81373)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81393)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=OOC_TRUE;
l4:
      _assert(i1, 127, 81359);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81425)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=OOC_FALSE;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81447))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81456)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81542))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      goto l12;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81493))+4);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81502)))), &_td_OOC_SymbolTable__ProcDeclDesc, 81502));
l12:
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81581)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81614)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l17;
l15:
      i1=OOC_TRUE;
l17:
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81649)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l21;
l19:
      i1=OOC_TRUE;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81682)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l24;
l23:
      i1=OOC_TRUE;
l24:
      _assert(i1, 127, 81568);
      found = OOC_FALSE;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81737))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l51;
l27_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81795)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81874)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81954)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82033)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l36;
      found = OOC_FALSE;
      i0=OOC_FALSE;
      goto l43;
l36:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82080))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l38:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82000))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81920))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l42:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81840))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l43:
      i1 = (OOC_INT32)ptr;
      if (!i0) goto l46;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82195)))), &_td_OOC_SymbolTable__DeclarationDesc, 82195));
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 82239));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l27_loop;
l51:
      _assert(OOC_FALSE, 127, 82269);
      _failed_function(80859); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT32)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 82410)),(const void*)""))==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 82484)), (OOC_INT32)0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 82484)), i1);
      i2 = (OOC_INT32)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 82504)), (OOC_INT32)0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 82504)), i3);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 82530)), (OOC_INT32)0);
      _copy_8((const void*)(_check_pointer(i0, 82526)),(void*)(_check_pointer(i1, 82530)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 82564)), (OOC_INT32)0);
      Strings__Append(".", 2, (void*)(_check_pointer(i1, 82564)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 82597)), (OOC_INT32)0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 82593)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i2, 82593)), i3, (void*)(_check_pointer(i1, 82597)), i0);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT32)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(82321); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82667))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82742)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82863)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82883)))), &_td_OOC_SymbolTable__ProcDeclDesc, 82883)), 82892))+40);
  
l9:
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83181)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83457)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83476)))), &_td_OOC_SymbolTable__VarDeclDesc, 83476)), 83484))+48);
  
l17:
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83785))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83785))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83794)))), &_td_OOC_SymbolTable__DeclarationDesc, 83794)), 83806)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83794)))), &_td_OOC_SymbolTable__DeclarationDesc, 83794)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83821))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83827))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83655)))), &_td_OOC_SymbolTable__VarDeclDesc, 83655)), 83663))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83672)))), &_td_OOC_SymbolTable__FormalParsDesc, 83672)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83720)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83735))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83741))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83348)))), &_td_OOC_SymbolTable__FieldDeclDesc, 83348)), 83358))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83367)))), &_td_OOC_SymbolTable__RecordDesc, 83367)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83411)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83426))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83432))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l23:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83080)))), &_td_OOC_SymbolTable__ProcDeclDesc, 83080)), 83089)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83080)))), &_td_OOC_SymbolTable__ProcDeclDesc, 83080)));
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83135)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83150))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83156))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l25:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 82835);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 82835))) = (OOC_CHAR8)'\000';
  
l26:
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 83855))+32) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82707))+32);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l28:
  _failed_function(80433); return 0;
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
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)srcType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84304)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l31;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84492)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84543)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84637)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84737)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84847)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84951)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84945)))), 84945);
      goto l32;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84984))+44);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l21:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84896))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84915))+40);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l23:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84688))+32);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84704))+36);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l27:
      _assert(OOC_FALSE, 127, 84567);
      goto l32;
l29:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
l32:
      _failed_function(84207); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85060)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85104)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85164)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85210)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85252)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85295)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85379)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85465)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85550)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85544)))), 85544);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85513))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85525))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85428))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85440))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85342))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85354))+44);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85195))+48);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85133))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85149))+40);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85089))+40);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(83941); return 0;
  ;
}

void OOC_OOC_SymbolTable_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region("standard", 9, (OOC_INT32)0, 8);
  _c1 = Object__NewLatin1Region("internal", 9, (OOC_INT32)0, 8);
  _c2 = Object__NewLatin1Region("foreign", 8, (OOC_INT32)0, 7);
  _c3 = Object__NewLatin1Region("interface", 10, (OOC_INT32)0, 9);
  _c4 = Object__NewLatin1Region("--invalid--", 12, (OOC_INT32)0, 11);
  _c5 = Object__NewLatin1Region("default", 8, (OOC_INT32)0, 7);
  _c6 = Object__NewLatin1Region("internal", 9, (OOC_INT32)0, 8);
  _c7 = Object__NewLatin1Char((OOC_CHAR8)'C');
  _c8 = Object__NewLatin1Region("Pascal", 7, (OOC_INT32)0, 6);
  _c9 = Object__NewLatin1Char((OOC_CHAR8)'C');
  _c10 = Object__NewLatin1Region("Pascal", 7, (OOC_INT32)0, 6);

  OOC_SymbolTable__predefIdToType = (void*)(OOC_INT32)0;
  i0 = (OOC_INT32)URI_Scheme_File__ToURI("/", 2);
  OOC_SymbolTable__emptyBaseURI = (URI__HierarchicalURI)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  OOC_SymbolTable__importPosition = (OOC_SymbolTable__Position)i0;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, -2, -1, -1);
  return;
  ;
}

/* --- */
