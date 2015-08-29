#include "OOC/SymbolTable.d"
#include "__oo2c.h"

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(33401); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35303)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(35433); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36357)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable__InitPosition(OOC_SymbolTable__Position position, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)position;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 36619)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 36645))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 36673))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)position;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 36862));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36842)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 36895))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36875)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 36929))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36909)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)position;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37081)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 37100)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37113)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 37132))+4));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37146)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 37165))+8));
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
  *(OOC_INT32*)((_check_pointer(i3, 37378))+12) = i0;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37586))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37586))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 37591)), (OOC_INT32)0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 37591)), i2);
  len = i1;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37600)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37641))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37623)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 37646)), -1, 0, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37898)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 37944);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 37944))) = (OOC_CHAR8)'\000';
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37962)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 37978)), -1, 0, i2);
  *(OOC_INT32*)((_check_pointer(i0, 37998))+12) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l);
    
    void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)l;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38127));
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l7;
l2_loop:
      i0 = (OOC_INT32)l;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38162));
      l = (OOC_SymbolTable__Item)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38127));
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l2_loop;
l7:
      i0 = (OOC_INT32)l;
      i1 = (OOC_INT32)item;
      *(OOC_INT32*)(_check_pointer(i0, 38192)) = i1;
      return;
      ;
    }


  i0 = (OOC_INT32)item;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 38273)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 38302))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 38332))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 38360))+12) = (OOC_INT32)0;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38429)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38466)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=OOC_TRUE;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38505)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=OOC_TRUE;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38542)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l14;
l13:
  i2=OOC_TRUE;
l14:
  _assert(i2, 127, 38412);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38575))+8);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l17;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38667))+8);
  OOC_SymbolTable__InitItem_Append((OOC_SymbolTable__Item)i0);
  goto l19;
l17:
  *(OOC_INT32*)((_check_pointer(i1, 38613))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38814)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38853));
  item = (OOC_SymbolTable__Item)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38880)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)(OOC_INT32)0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39074)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=(OOC_INT32)0;
  goto l17;
l3:
  i1=(OOC_INT32)0;i2=(OOC_INT32)0;
l4_loop:
  i3 = (OOC_INT32)obj;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39131)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i4) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39122)))), 39122);
  
  goto l12;
l7:
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l10;
  list = (OOC_SymbolTable__Item)i3;
  i1=i3;
  goto l11;
l10:
  *(OOC_INT32*)(_check_pointer(i1, 39182)) = i3;
  i1=i2;
l11:
  last = (OOC_SymbolTable__Item)i3;
  i2=i1;i1=i3;
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39287)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39435))+8);
  i2 = (OOC_INT32)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39474))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39455)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 39635)) = (OOC_INT32)0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 39664))+8) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39703)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 39792))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39808)))), &_td_OOC_SymbolTable__ItemDesc, 39808));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 39757))+4) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 39831))+12) = (OOC_INT32)0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40122))+4);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l8;
l3_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40159))+4);
  item = (OOC_SymbolTable__Item)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40122))+4);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l3_loop;
l8:
  i0 = (OOC_INT32)item;
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40193)))), &_td_OOC_SymbolTable__ModuleDesc, 40193));
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40443))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40484)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=OOC_TRUE;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40567)))), &_td_OOC_SymbolTable__ProcDeclDesc, 40567));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l13:
  _failed_function(40239); return 0;
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
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 41006)));
      goto l4;
l3:
      i0 = (OOC_INT32)fl;
      *(OOC_INT32*)(_check_pointer(i0, 40938)) = (OOC_INT32)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41068))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41072)),(const void*)"NO_COPY"))==(OOC_INT32)0;
  if (i1) goto l35;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41131))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41135)),(const void*)"ABSTRACT"))==(OOC_INT32)0;
  if (i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41197))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41201)),(const void*)"NO_LENGTH_INFO"))==(OOC_INT32)0;
  if (i1) goto l31;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41273))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41277)),(const void*)"NO_DESCRIPTOR"))==(OOC_INT32)0;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41348))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41352)),(const void*)"NOT_EXTENSIBLE"))==(OOC_INT32)0;
  if (i1) goto l27;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41425))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41429)),(const void*)"CSTRING"))==(OOC_INT32)0;
  if (i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41489))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41493)),(const void*)"NIL_COMPAT"))==(OOC_INT32)0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41558))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41562)),(const void*)"UNION"))==(OOC_INT32)0;
  if (i1) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41618))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 41622)),(const void*)"READ_ONLY"))==(OOC_INT32)0;
  if (i1) goto l19;
  id = -1;
  i1=-1;
  goto l36;
l19:
  id = 8;
  i1=8;
  goto l36;
l21:
  id = 7;
  i1=7;
  goto l36;
l23:
  id = 6;
  i1=6;
  goto l36;
l25:
  id = 5;
  i1=5;
  goto l36;
l27:
  id = 4;
  i1=4;
  goto l36;
l29:
  id = 3;
  i1=3;
  goto l36;
l31:
  id = 2;
  i1=2;
  goto l36;
l33:
  id = 1;
  i1=1;
  goto l36;
l35:
  id = 0;
  i1=0;
l36:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 41737))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 41754))+8) = i0;
  i0 = (OOC_INT32)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 41783))+12));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i1, 42059))+16) = i0;
  i0 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i1, 42083))+20) = i0;
  i0 = exportMark;
  *(OOC_INT8*)((_check_pointer(i1, 42121))+24) = i0;
  i0 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i1, 42157))+28) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 42191))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 42218))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)decl;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42374))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42355)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 42445))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42429)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 42472))+24);
  i2 = i2!=0;
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42569)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)(OOC_INT32)0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42535))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42516)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42755)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 42783))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42797)))), &_td_OOC_SymbolTable__NameDesc, 42797));
  *(OOC_INT32*)((_check_pointer(i1, 42966))+20) = -3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43180)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i1, 43199))+24) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43239)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 43337))+28) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43360)))), &_td_OOC_Doc__DocumentDesc, 43360));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 43295))+28) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 43389))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 43416))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCount(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 43515))+36);
  *(OOC_INT32*)((_check_pointer(i0, 43515))+36) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43933)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43952))+20);
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
  *(OOC_INT32*)((_check_pointer(i1, 44113))+16) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 44145))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 44174))+24) = -2;
  *(OOC_INT16*)((_check_pointer(i1, 44205))+28) = 1;
  *(OOC_UINT8*)((_check_pointer(i1, 44227))+30) = OOC_TRUE;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)type;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44375))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44356)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (!i2) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44454))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44435)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
l4:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 44497))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44481)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i1, 44527))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44511)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 44559))+30);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44542)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44724)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 44817))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44837)))), &_td_OOC_SymbolTable__TypeDeclDesc, 44837));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 44778))+20) = (OOC_INT32)0;
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__importPosition;
  *(OOC_INT32*)((_check_pointer(i1, 44979))+16) = i2;
  goto l8;
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44901)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 44931))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44949)))), &_td_OOC_SymbolTable__PositionDesc, 44949));
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45023)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 45038))+24));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45052)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i1, 45075))+28) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45102)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 45118))+30));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)namingDecl;
  *(OOC_INT32*)((_check_pointer(i0, 45315))+20) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 45445))+24) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 45469))+28) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT32)type;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45733)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45782)))), &_td_OOC_SymbolTable__ArrayDesc, 45782)), 45788))+36);
  type = (OOC_SymbolTable__Type)i1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45733)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return i0;
  ;
}

static void OOC_SymbolTable__InitLinkDirective(OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 45935)) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 46063));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46047)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46187)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 46268)) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46282)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 46282));
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 46238)) = (OOC_INT32)0;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46496)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46520)))), BinaryRider__WriterDesc_WriteString)),BinaryRider__WriterDesc_WriteString)((BinaryRider__Writer)i0, (void*)(OOC_INT32)b, 1024);
      return;
      ;
    }


  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46604))+4);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i0, (URI__HierarchicalURI)i1);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46631))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46618)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46666))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46653)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__String str;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46784)))), BinaryRider__ReaderDesc_ReadStr)),BinaryRider__ReaderDesc_ReadStr)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&str);
  i0 = (OOC_INT32)str;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT32)0;
l4:
  _failed_function(46707); return 0;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47113)))), BinaryRider__ReaderDesc_ReadString)),BinaryRider__ReaderDesc_ReadString)((BinaryRider__Reader)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)b, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
      i1 = (OOC_INT32)res;
      u = (URI__URI)i0;
      _assert((i1==(OOC_INT32)0), 127, 47296);
      i1 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47411)))), &_td_URI__HierarchicalURIDesc, 47411)), 47427)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47411)))), &_td_URI__HierarchicalURIDesc, 47411)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47477)))), &_td_URI__HierarchicalURIDesc, 47477));
      return;
      ;
    }


  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 47558))+4));
  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 47572))+8) = i2;
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 47610))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47776))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47763)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47810))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47797)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47845))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47832)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47885))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 47899)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47867)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47928))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 47942)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47970))+8);
  i4 = _check_pointer(i4, 47984);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 47984))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47957)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i4);
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
  *(OOC_INT32*)((_check_pointer(i1, 48120))+4) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 48157))+12) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 48195))+16) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48233)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i1, 48260))+8) = ((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48316))+8);
  i4 = _check_pointer(i4, 48330);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 48330))*4) = i6;
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
  *(OOC_INT32*)((_check_pointer(i2, 48658))+40) = (OOC_INT32)0;
  i0 = _class;
  *(OOC_INT8*)((_check_pointer(i2, 48678))+44) = i0;
  i0 = callConv;
  *(OOC_INT8*)((_check_pointer(i2, 48703))+52) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 48734))+56) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 48766))+60) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 48793))+64) = (OOC_INT32)0;
  i0 = (OOC_INT32)moduleAST;
  *(OOC_INT32*)((_check_pointer(i2, 48824))+68) = i0;
  i0 = (OOC_INT32)bodyDecl;
  *(OOC_INT32*)((_check_pointer(i2, 48857))+72) = i0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)mod;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 49031))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49015)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49061))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49046)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 49097))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49081)))), BinaryRider__WriterDesc_WriteSInt)),BinaryRider__WriterDesc_WriteSInt)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49133))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49115)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)mod;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49284))+40) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49302)))), BinaryRider__ReaderDesc_ReadSInt)),BinaryRider__ReaderDesc_ReadSInt)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 49317))+44));
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT32*)((_check_pointer(i1, 49334))+48) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49371)))), BinaryRider__ReaderDesc_ReadSInt)),BinaryRider__ReaderDesc_ReadSInt)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 49386))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49404)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i2 = i0==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 49499))+56) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49523)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 49523));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 49457))+56) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 49554))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 49585))+68) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 49761))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 49865))+48) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 49980))+44);
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
    _failed_case(i0, 49972);
    goto l7;
  }
l7:
  _failed_function(49934); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 50242))+52);
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
    _failed_case(i0, 50234);
    goto l8;
  }
l8:
  _failed_function(50193); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)((_check_pointer(i0, 50688))+4) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 50709))+8) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 50746))+12) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 51056))+4) = i1;
  i1 = (OOC_INT32)dependencies;
  *(OOC_INT32*)((_check_pointer(i0, 51091))+8) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 51128))+12) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 51165))+16) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 51409)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 51341)) = (OOC_INT32)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  _assert((i0!=(OOC_INT32)0), 127, 51603);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)prefixOption;
  i3 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i2, (Object__String)i3);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 51649))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)libraryName;
  _assert((i0!=(OOC_INT32)0), 127, 51975);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)dependencies;
  i3 = (OOC_INT32)prefixOption;
  i4 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i2, (Object__String)i3, (Object__String)i4);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 52028))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 52681))+44);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 52710))+44);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l25;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52749))+56);
  i1 = i0!=(OOC_INT32)0;
  l = (OOC_SymbolTable__LinkDirective)i0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52794)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52824));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52794)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT32)0);
l25:
  _failed_function(52213); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 53354))+44);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 53382))+44);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  _assert(i1, 127, 53342);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53419))+56);
  i1 = i0!=(OOC_INT32)0;
  l = (OOC_SymbolTable__LinkDirective)i0;
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53463)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53491));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53463)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53572)))), &_td_OOC_SymbolTable__LinkFileDesc, 53572)), 53581))+4);
  _assert((i1!=(OOC_INT32)0), 127, 53562);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53604)))), &_td_OOC_SymbolTable__LinkFileDesc, 53604)), 53613))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53604)))), &_td_OOC_SymbolTable__LinkFileDesc, 53604)), 53613))+4);
  i3 = (OOC_INT32)rootURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53619)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53663)))), &_td_OOC_SymbolTable__LinkFileDesc, 53663)), 53672))+4);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT32)0;
l25:
  _failed_function(52948); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)str;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53785)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c9));
  if (i1) goto l7;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53839)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c10));
  if (i0) goto l5;
  return -1;
  goto l8;
l5:
  return 3;
  goto l8;
l7:
  return 2;
l8:
  _failed_function(53725); return 0;
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
  *(OOC_INT32*)((_check_pointer(i4, 54246))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i4, 54284))+44) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 54410))+44) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 54471))+60);
  *(OOC_INT32*)((_check_pointer(i0, 54448))+48) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)import;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54736))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54748))+12);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 54753)),(const void*)"SYSTEM"))==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)import;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54908))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54887)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 54947))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54928)))), BinaryRider__WriterDesc_WriteLInt)),BinaryRider__WriterDesc_WriteLInt)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)import;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55100)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 55130))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55150)))), &_td_OOC_SymbolTable__NameDesc, 55150));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55162)))), BinaryRider__ReaderDesc_ReadLInt)),BinaryRider__ReaderDesc_ReadLInt)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 55180))+48));
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
  *(OOC_INT32*)((_check_pointer(i5, 55647))+40) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 55678))+44) = i0;
  i0 = (OOC_INT32)constExpr;
  *(OOC_INT32*)((_check_pointer(i5, 55707))+48) = i0;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 55866))+40) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 55896))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)constDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56058))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56034)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56085))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56317))+44);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 56323))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56296)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56264)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, -1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56500)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 56598))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56619)))), &_td_Object_Boxed__ObjectDesc, 56619));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 56559))+40) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56641)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&id);
  i0 = id;
  i2 = i0==-1;
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 56811);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 56811))*4);
  *(OOC_INT32*)((_check_pointer(i1, 56787))+44) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56840))+44);
  _assert((i0!=(OOC_INT32)0), 127, 56823);
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 56748))+44) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i1, 56876))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57043)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57062)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=OOC_TRUE;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 57121))+40) = i1;
  i2 = _check_pointer(i0, 57148);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 57187))+48);
  if (i3) goto l3;
  i0=OOC_FALSE;
  goto l8;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 57219))+50);
  if (i0) goto l6;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i0=OOC_TRUE;
l8:
  *(OOC_UINT8*)(i2+51) = i0;
  i0 = (OOC_INT32)varDecl;
  i1 = _check_pointer(i0, 57272);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 57305))+48);
  if (i2) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 57337))+50);
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
  i1 = _check_pointer(i0, 57396);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 57427))+51);
  if (i2) goto l19;
  i2=OOC_FALSE;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 57466))+50);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=OOC_FALSE;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 57497))+52);
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
  *(OOC_INT32*)((_check_pointer(i5, 57925))+44) = i1;
  i2 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i5, 57959))+48) = i2;
  i2 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i5, 58000))+49) = i2;
  i3 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i5, 58039))+50) = i3;
  *(OOC_UINT8*)((_check_pointer(i5, 58078))+54) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i5, 58119))+55) = OOC_TRUE;
  if (!i2) goto l3;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58181)))), &_td_OOC_SymbolTable__FormalParsDesc, 58181)), 58192))+32) = i5;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 58234)))), OOC_SymbolTable__VarDeclDesc_SetType)),OOC_SymbolTable__VarDeclDesc_SetType)((OOC_SymbolTable__VarDecl)i5, (OOC_SymbolTable__Type)i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Store(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)varDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58430))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58408)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58471))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58451)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58512))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58492)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58552))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58532)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58592))+51);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58572)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58640))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58620)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58682))+53);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58662)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 58722))+54);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58702)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 58769))+55);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58749)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)varDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58928)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 58959))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58980)))), &_td_OOC_SymbolTable__TypeDesc, 58980));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59015))+44);
  *(OOC_INT32*)((_check_pointer(i1, 58998))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59035)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59054))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59075)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59094))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59114)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59133))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59153)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59172))+51));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59200)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59219))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59241)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59260))+53));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59280)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59299))+54));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59326)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 59345))+55));
  i0 = *(OOC_UINT8*)((_check_pointer(i1, 59383))+48);
  if (!i0) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 59495))+20) = -1;
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
  *(OOC_INT32*)((_check_pointer(i5, 59873))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 59901))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60107))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60084)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60265)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 60297))+44) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60318)))), &_td_OOC_SymbolTable__TypeDesc, 60318));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60355))+44);
  *(OOC_INT32*)((_check_pointer(i1, 60337))+40) = i0;
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
  *(OOC_INT32*)((_check_pointer(i2, 60581))+40) = i0;
  i0 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i2, 60610))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)redir;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60762))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60742)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60798))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60778)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)redir;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60945)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 60974))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 60990)))), &_td_OOC_SymbolTable__NameDesc, 60990));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61002)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 61031))+44) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61046)))), &_td_OOC_SymbolTable__NameDesc, 61046));
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
  *(OOC_INT32*)((_check_pointer(i5, 61379))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 61408))+44) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 61444))+48) = -1;
  *(OOC_UINT8*)((_check_pointer(i5, 61473))+52) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61694))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61670)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 61736))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61715)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 61774))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61752)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61943)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 61976))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 61997)))), &_td_OOC_SymbolTable__TypeDesc, 61997));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62036))+44);
  *(OOC_INT32*)((_check_pointer(i1, 62017))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62056)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 62076))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62092)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 62113))+52));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 62233))+48) = i1;
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
  *(OOC_INT16*)((_check_pointer(i2, 62492))+40) = i0;
  i0 = minArgs;
  *(OOC_INT16*)((_check_pointer(i2, 62512))+42) = i0;
  i0 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i2, 62542))+44) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(OOC_FALSE, 127, 62657);
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(OOC_FALSE, 127, 62755);
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
  *(OOC_UINT8*)((_check_pointer(i5, 63187))+40) = i0;
  i0 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i5, 63229))+41) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 63275))+42) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i5, 63310))+44) = -1;
  *(OOC_INT32*)((_check_pointer(i5, 63343))+48) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i5, 63368))+52) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i5, 63401))+56) = (OOC_INT32)0;
  i0 = (OOC_INT32)procAST;
  *(OOC_INT32*)((_check_pointer(i5, 63432))+60) = i0;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)procDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 63595))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63574)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 63637))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63616)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 63681))+42);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63660)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 63721))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63701)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63765))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63742)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63805))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63785)))), BinaryRider__WriterDesc_WriteStr)),BinaryRider__WriterDesc_WriteStr)((BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64001)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64021))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64042)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64062))+41));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64085)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64105))+42));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64125)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 64144))+44));
  *(OOC_INT32*)((_check_pointer(i0, 64172))+48) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64190)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 64291))+52) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64311)))), &_td_OOC_SymbolTable__FormalParsDesc, 64311));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 64248))+52) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 64344))+56) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 64385))+60) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 64578))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 64691))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)redefinition;
  i1 = (OOC_INT32)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 65060))+44);
  *(OOC_INT32*)((_check_pointer(i0, 65035))+44) = i1;
  return;
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable__ProcDeclDesc_Class(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item _class;

  i0 = (OOC_INT32)procDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 65386))+40);
  if (i1) goto l3;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65428))+52);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65440))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65450))+40);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65474)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65514)))), &_td_OOC_SymbolTable__PointerDesc, 65514)), 65522))+32);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65560)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65597)))), &_td_OOC_SymbolTable__RecordDesc, 65597));
l12:
  _failed_function(65129); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 65953))+20);
  *(OOC_INT32*)((_check_pointer(i0, 65929))+20) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 66168))+4);
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)ptype;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i1, 66333))+32) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(OOC_FALSE, 127, 66439);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(OOC_FALSE, 127, 66538);
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
  *(OOC_INT32*)((_check_pointer(i2, 66747))+32) = i0;
  i0 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i2, 66776))+36) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)tname;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 66927))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66907)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 66963))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66943)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)tname;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67109)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 67200))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67216)))), &_td_OOC_SymbolTable__NameDesc, 67216));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 67164))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67236)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 67265))+36) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67280)))), &_td_OOC_SymbolTable__NameDesc, 67280));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67426)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 67456))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67490))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 67456))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67460)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, OOC_FALSE);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67524)))), &_td_OOC_SymbolTable__ImportDesc, 67524));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)parent;
  i1 = (OOC_INT32)position;
  i2 = (OOC_INT32)record;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)i1);
  i0 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i2, 67723))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 67757))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 67798))+40) = -1;
  *(OOC_INT32*)((_check_pointer(i2, 67876))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i2, 67899))+48) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 67929))+49) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 67962))+50) = OOC_TRUE;
  *(OOC_INT32*)((_check_pointer(i2, 67996))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)record;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68191))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68170)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 68234))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68216)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 68274))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68255)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 68310))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68291)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 68349))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68330)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68392))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68371)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68571)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 68673))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 68698)))), &_td_OOC_SymbolTable__TypeDesc, 68698));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 68627))+36) = (OOC_INT32)0;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68743))+36);
  *(OOC_INT32*)((_check_pointer(i0, 68723))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68767)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 68784))+40));
  *(OOC_INT32*)((_check_pointer(i0, 68810))+44) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68828)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 68846))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68863)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 68881))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68901)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 68919))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68941)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 69037))+52) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69056)))), &_td_OOC_SymbolTable__NameDesc, 69056));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 68997))+52) = (OOC_INT32)0;
l8:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 69236))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 69560))+40);
  *(OOC_INT32*)((_check_pointer(i0, 69537))+44) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 69590))+40);
  *(OOC_INT32*)((_check_pointer(i1, 69590))+40) = (i0+1);
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
  *(OOC_INT32*)((_check_pointer(i2, 69810))+32) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 69845))+36) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 69887))+40) = OOC_FALSE;
  *(OOC_UINT8*)((_check_pointer(i2, 69929))+41) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)pointer;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70132))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70110)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 70177))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70157)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 70225))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70205)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)pointer;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70378)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 70409))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70434)))), &_td_OOC_SymbolTable__TypeDesc, 70434));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70473))+36);
  *(OOC_INT32*)((_check_pointer(i1, 70452))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70497)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 70516))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70544)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 70563))+41));
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
  *(OOC_UINT8*)((_check_pointer(i2, 70825))+32) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 70864))+33) = OOC_TRUE;
  *(OOC_UINT8*)((_check_pointer(i2, 70898))+34) = OOC_FALSE;
  i0 = (OOC_INT32)elementType;
  *(OOC_INT32*)((_check_pointer(i2, 70934))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 70973))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 71019))+44) = -1;
  i0 = (OOC_INT32)lengthExpr;
  *(OOC_INT32*)((_check_pointer(i2, 71044))+48) = i0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)array;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 71198))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71180)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 71237))+33);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71219)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 71278))+34);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71260)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 71367))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71347)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 71412))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71395)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)array;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71561)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 71578))+32));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71599)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 71616))+33));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71639)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 71656))+34));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71680)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i1, 71709))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71737)))), &_td_OOC_SymbolTable__TypeDesc, 71737));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 71775))+40);
  *(OOC_INT32*)((_check_pointer(i1, 71753))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71802)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 71818))+44));
  *(OOC_INT32*)((_check_pointer(i1, 71838))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 71944))+44) = i1;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72266)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72283)))), &_td_OOC_SymbolTable__ArrayDesc, 72283)), 72289))+32);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72342)))), &_td_OOC_SymbolTable__ArrayDesc, 72342)), 72348))+36);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72266)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72283)))), &_td_OOC_SymbolTable__ArrayDesc, 72283)), 72289))+32);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72618)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72635)))), &_td_OOC_SymbolTable__ArrayDesc, 72635)), 72641))+32);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72677)))), &_td_OOC_SymbolTable__ArrayDesc, 72677)), 72683))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72618)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72635)))), &_td_OOC_SymbolTable__ArrayDesc, 72635)), 72641))+32);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72955)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72987)))), &_td_OOC_SymbolTable__ArrayDesc, 72987)), 72993))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72955)))), &_td_OOC_SymbolTable__ArrayDesc);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73356)))), &_td_OOC_SymbolTable__ArrayDesc, 73356)), 73362))+36);
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
  *(OOC_INT32*)((_check_pointer(i2, 73645))+32) = (OOC_INT32)0;
  i0 = (OOC_INT32)resultType;
  *(OOC_INT32*)((_check_pointer(i2, 73678))+36) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 73720))+40) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 73769))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i2, 73800))+48) = OOC_FALSE;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 74034))+48) = OOC_TRUE;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)formalPars;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74245))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74220)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74337))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74312)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74377))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74464))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 74472)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74437)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74512))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 74520)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74562))+44);
  i4 = _check_pointer(i4, 74570);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 74570))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74537)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74405)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, -1);
l12:
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 74622))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74599)))), BinaryRider__WriterDesc_WriteBool)),BinaryRider__WriterDesc_WriteBool)((BinaryRider__Writer)i0, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74814)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 74917))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74935)))), &_td_OOC_SymbolTable__VarDeclDesc, 74935));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 74874))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74958)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i1, 75070))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75097)))), &_td_OOC_SymbolTable__TypeDesc, 75097));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i1, 75018))+40) = (OOC_INT32)0;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75152))+40);
  *(OOC_INT32*)((_check_pointer(i1, 75126))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75178)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l19;
  *(OOC_INT32*)((_check_pointer(i1, 75279))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i2));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l13_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75333)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75371))+44);
  i4 = _check_pointer(i4, 75379);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 75379))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 75390)))), &_td_OOC_SymbolTable__VarDeclDesc, 75390));
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l13_loop;
  goto l20;
l19:
  *(OOC_INT32*)((_check_pointer(i1, 75233))+44) = (OOC_INT32)0;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75423)))), BinaryRider__ReaderDesc_ReadBool)),BinaryRider__ReaderDesc_ReadBool)((BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 75445))+48));
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75831))+40);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75930))+48);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76027))+44);
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
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76564)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
      if (i2) goto l14;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76851)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i2) goto l9;
      i2=OOC_FALSE;
      goto l11;
l9:
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76870)))), &_td_OOC_SymbolTable__ImportDesc, 76870)), 76877)))), OOC_SymbolTable__ImportDesc_IsInternalImport)),OOC_SymbolTable__ImportDesc_IsInternalImport)((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76870)))), &_td_OOC_SymbolTable__ImportDesc, 76870)));
      i2 = !i2;
      
l11:
      if (!i2) goto l19;
      i2 = (OOC_INT32)prunedImports;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76927)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i0);
      goto l19;
l14:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 76610))+8));
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l17;
      *(OOC_INT32*)(_check_pointer(i1, 76759)) = i0;
      goto l18;
l17:
      *list = (OOC_SymbolTable__Item)i0;
l18:
      last = (OOC_SymbolTable__Item)i0;
      i1=i0;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 76990));
      _this = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l4_loop;
l23:
      i0=i1;
l24:
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l27;
      *(OOC_INT32*)(_check_pointer(i0, 77074)) = (OOC_INT32)0;
l27:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 77186))+8));
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 77243))+4);
  *(OOC_INT32*)((_check_pointer(i0, 77214))+64) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i2 = *(OOC_INT32*)((_check_pointer(i1, 77282))+4);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 77322));
  i4 = _check_pointer(i4, 77328);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 77328))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 77332)))), &_td_OOC_SymbolTable__ImportDesc, 77332);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 77379))+40);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 77390))+12);
  *(OOC_INT32*)(_check_pointer(i5, 77364)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 77426))+48);
  *(OOC_INT32*)((_check_pointer(i5, 77404))+4) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77450))+64);
  i4 = _check_pointer(i4, 77464);
  i6 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 77464))*4) = i5;
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
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78191)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78276)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return OOC_FALSE;
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78319))+40);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78236))+36);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return OOC_TRUE;
l12:
          _failed_function(78060); return 0;
          ;
        }


      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78468)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78488)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=OOC_TRUE;
l4:
      _assert(i1, 127, 78454);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78520)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=OOC_FALSE;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78542))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78551)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78637))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      goto l12;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78588))+4);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78597)))), &_td_OOC_SymbolTable__ProcDeclDesc, 78597));
l12:
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78676)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78709)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l17;
l15:
      i1=OOC_TRUE;
l17:
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78744)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l21;
l19:
      i1=OOC_TRUE;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78777)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l24;
l23:
      i1=OOC_TRUE;
l24:
      _assert(i1, 127, 78663);
      found = OOC_FALSE;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78832))+8);
      i1 = i0!=(OOC_INT32)0;
      ptr = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l51;
l27_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78890)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78969)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79049)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79128)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l36;
      found = OOC_FALSE;
      i0=OOC_FALSE;
      goto l43;
l36:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79175))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l38:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79095))+52);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79015))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l42:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78935))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l43:
      i1 = (OOC_INT32)ptr;
      if (!i0) goto l46;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79290)))), &_td_OOC_SymbolTable__DeclarationDesc, 79290));
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 79334));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l27_loop;
l51:
      _assert(OOC_FALSE, 127, 79364);
      _failed_function(77954); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT32)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 79505)),(const void*)""))==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 79579)), (OOC_INT32)0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 79579)), i1);
      i2 = (OOC_INT32)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 79599)), (OOC_INT32)0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 79599)), i3);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 79625)), (OOC_INT32)0);
      _copy_8((const void*)(_check_pointer(i0, 79621)),(void*)(_check_pointer(i1, 79625)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 79659)), (OOC_INT32)0);
      Strings__Append(".", 2, (void*)(_check_pointer(i1, 79659)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 79692)), (OOC_INT32)0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 79688)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i2, 79688)), i3, (void*)(_check_pointer(i1, 79692)), i0);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT32)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(79416); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79762))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79837)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79958)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79978)))), &_td_OOC_SymbolTable__ProcDeclDesc, 79978)), 79987))+40);
  
l9:
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80276)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80552)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80571)))), &_td_OOC_SymbolTable__VarDeclDesc, 80571)), 80579))+48);
  
l17:
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80880))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80880))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80889)))), &_td_OOC_SymbolTable__DeclarationDesc, 80889)), 80901)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 80889)))), &_td_OOC_SymbolTable__DeclarationDesc, 80889)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80916))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80922))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80750)))), &_td_OOC_SymbolTable__VarDeclDesc, 80750)), 80758))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80767)))), &_td_OOC_SymbolTable__FormalParsDesc, 80767)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80815)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80830))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80836))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80443)))), &_td_OOC_SymbolTable__FieldDeclDesc, 80443)), 80453))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80462)))), &_td_OOC_SymbolTable__RecordDesc, 80462)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80506)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80521))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80527))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l23:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80175)))), &_td_OOC_SymbolTable__ProcDeclDesc, 80175)), 80184)))), OOC_SymbolTable__ProcDeclDesc_Class)),OOC_SymbolTable__ProcDeclDesc_Class)((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80175)))), &_td_OOC_SymbolTable__ProcDeclDesc, 80175)));
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80230)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80245))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80251))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l25:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 79930);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 79930))) = (OOC_CHAR8)'\000';
  
l26:
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 80950))+32) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79802))+32);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l28:
  _failed_function(77528); return 0;
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
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81399)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l31;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81587)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81638)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81732)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81832)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81942)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82046)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82040)))), 82040);
      goto l32;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82079))+44);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l21:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81991))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82010))+40);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l23:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81783))+32);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81799))+36);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l27:
      _assert(OOC_FALSE, 127, 81662);
      goto l32;
l29:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
l32:
      _failed_function(81302); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82155)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82199)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82259)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82305)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82347)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82390)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82474)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82560)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82645)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82639)))), 82639);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82608))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82620))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82523))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82535))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82437))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82449))+44);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82290))+48);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82228))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82244))+40);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82184))+40);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(81036); return 0;
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
