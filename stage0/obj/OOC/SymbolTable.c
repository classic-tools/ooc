#include <OOC/SymbolTable.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(35298); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37200)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(37330); return 0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38254)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT32)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

void OOC_SymbolTable__InitPosition(OOC_SymbolTable__Position position, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)position;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 38516)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 38542))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 38570))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)position;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 38775));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38755)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 38808))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38788)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 38842))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38822)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)position;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39010)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i1, 39029)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39042)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 39061))+4));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39075)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 39094))+8));
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
  *(OOC_INT32*)((_check_pointer(i0, 39307))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39531))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39531))+12);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 39536)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i1, 39536)), i2);
  len = i1;
  i2 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39545)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39586))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39568)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 39591)), (-1), 0, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39859)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 39905);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 39905))) = 0u;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39923)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 39939)), (-1), 0, i2);
  *(OOC_INT32*)((_check_pointer(i0, 39959))+12) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l);
    
    void OOC_SymbolTable__InitItem_Append(OOC_SymbolTable__Item l) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)l;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40088));
      i1 = i1!=0;
      if (!i1) goto l9;
l4_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40123));
      l = (OOC_SymbolTable__Item)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40088));
      i1 = i1!=0;
      if (i1) goto l4_loop;
l9:
      i1 = (OOC_INT32)item;
      *(OOC_INT32*)(_check_pointer(i0, 40153)) = i1;
      return;
      ;
    }


  i0 = (OOC_INT32)item;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 40234)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 40263))+8) = 0;
  i1 = (OOC_INT32)parent;
  *(OOC_INT32*)((_check_pointer(i0, 40293))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 40321))+12) = 0;
  i2 = i1!=0;
  if (!i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40390)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40427)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40466)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=1u;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40503)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l14;
l13:
  i2=1u;
l14:
  _assert(i2, 127, 40373);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40536))+8);
  i2 = i2==0;
  if (i2) goto l17;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40628))+8);
  OOC_SymbolTable__InitItem_Append((OOC_SymbolTable__Item)i0);
  goto l19;
l17:
  *(OOC_INT32*)((_check_pointer(i1, 40574))+8) = i0;
l19:
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40790)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40829));
  item = (OOC_SymbolTable__Item)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40856)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)(OOC_INT32)0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41064)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i0=(OOC_INT32)0;
  goto l17;
l3:
  i2=(OOC_INT32)0;i3=(OOC_INT32)0;
l4_loop:
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41121)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i4) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41112)))), 41112);
  i1=i2;i2=i3;
  goto l12;
l7:
  i4 = i2!=(OOC_INT32)0;
  if (i4) goto l10;
  list = (OOC_SymbolTable__Item)i1;
  i2=i1;
  goto l11;
l10:
  *(OOC_INT32*)(_check_pointer(i2, 41172)) = i1;
  i2=i3;
l11:
  last = (OOC_SymbolTable__Item)i1;
  
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41277)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i3 = (OOC_INT32)obj;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l16;
  {register OOC_INT32 h0=i1;i1=i3;i3=i2;i2=h0;}
  goto l4_loop;
l16:
  i0=i2;
l17:
  return (OOC_SymbolTable__Item)i0;
  ;
}

void OOC_SymbolTable__ItemDesc_Store(OOC_SymbolTable__Item item, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41441))+8);
  i2 = (OOC_INT32)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41480))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 41461)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)item;
  *(OOC_INT32*)(_check_pointer(i0, 41657)) = 0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 41686))+8) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41725)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 41814))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41830)))), &_td_OOC_SymbolTable__ItemDesc, 41830));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 41779))+4) = 0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 41853))+12) = 0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)item;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42144))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42181))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42144))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42215)))), &_td_OOC_SymbolTable__ModuleDesc, 42215));
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42465))+4);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42506)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=1u;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42589)))), &_td_OOC_SymbolTable__ProcDeclDesc, 42589));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
l13:
  _failed_function(42261); return 0;
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
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 43028)));
      goto l4;
l3:
      i0 = (OOC_INT32)fl;
      *(OOC_INT32*)(_check_pointer(i0, 42960)) = (OOC_INT32)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43090))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43094)),(const void*)"NO_COPY"))==0;
  if (i1) goto l39;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43153))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43157)),(const void*)"ABSTRACT"))==0;
  if (i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43219))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43223)),(const void*)"NO_LENGTH_INFO"))==0;
  if (i1) goto l35;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43295))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43299)),(const void*)"NO_DESCRIPTOR"))==0;
  if (i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43370))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43374)),(const void*)"NOT_EXTENSIBLE"))==0;
  if (i1) goto l31;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43447))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43451)),(const void*)"CSTRING"))==0;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43511))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43515)),(const void*)"NIL_COMPAT"))==0;
  if (i1) goto l27;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43580))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43584)),(const void*)"UNION"))==0;
  if (i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43640))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43644)),(const void*)"READ_ONLY"))==0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43707))+12);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 43711)),(const void*)"NO_RETURN"))==0;
  if (i1) goto l21;
  id = (-1);
  i1=(-1);
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
  id = 0;
  i1=0;
l40:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 43826))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 43843))+8) = i0;
  i0 = (OOC_INT32)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 43872))+12));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 44148))+16) = i1;
  i1 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i0, 44172))+20) = i1;
  i1 = exportMark;
  *(OOC_INT8*)((_check_pointer(i0, 44210))+24) = i1;
  i1 = (OOC_INT32)docString;
  *(OOC_INT32*)((_check_pointer(i0, 44246))+28) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 44280))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 44307))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44479))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44460)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44550))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44534)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44577))+24);
  i2 = i2!=0;
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44674)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)(OOC_INT32)0);
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44640))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44621)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
l4:
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Load(OOC_SymbolTable__Declaration decl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44876)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 44904))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44918)))), &_td_OOC_SymbolTable__NameDesc, 44918));
  *(OOC_INT32*)((_check_pointer(i0, 45087))+20) = (-3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45301)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i0, 45320))+24) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45360)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 45458))+28) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45481)))), &_td_OOC_Doc__DocumentDesc, 45481));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 45416))+28) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 45510))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 45537))+36) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCount(OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 45636))+36);
  *(OOC_INT32*)((_check_pointer(i0, 45636))+36) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46054)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46073))+20);
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
  *(OOC_INT32*)((_check_pointer(i0, 46234))+16) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 46266))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 46295))+24) = (-2);
  *(OOC_INT16*)((_check_pointer(i0, 46326))+28) = 1;
  *(OOC_UINT8*)((_check_pointer(i0, 46348))+30) = 1u;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46512))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46493)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i0);
  if (!i2) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46591))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46572)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
l4:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 46634))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46618)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i0, 46664))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46648)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 46696))+30);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46679)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Load(OOC_SymbolTable__Type type, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46877)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 46970))+20) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46990)))), &_td_OOC_SymbolTable__TypeDeclDesc, 46990));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 46931))+20) = (OOC_INT32)0;
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i0);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__importPosition;
  *(OOC_INT32*)((_check_pointer(i0, 47132))+16) = i2;
  goto l8;
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47054)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 47084))+16) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47102)))), &_td_OOC_SymbolTable__PositionDesc, 47102));
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47176)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 47191))+24));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47205)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i0, 47228))+28) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47255)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 47271))+30));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)namingDecl;
  *(OOC_INT32*)((_check_pointer(i0, 47468))+20) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 47598))+24) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 47622))+28) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47886)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47935)))), &_td_OOC_SymbolTable__ArrayDesc, 47935)), 47941))+36);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47886)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

static void OOC_SymbolTable__InitLinkDirective(OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  ADT_Storable__Init((ADT_Storable__Object)i0);
  *(OOC_INT32*)(_check_pointer(i0, 48088)) = 0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 48232));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48216)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (ADT_Storable__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48372)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&obj);
  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i1, 48453)) = (_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48467)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 48467));
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 48423)) = (OOC_INT32)0;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48715)))), URI__URIDesc_GetString)),URI__URIDesc_GetString)((URI__URI)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48739)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)b, 1024);
      return;
      ;
    }


  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48823))+4);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i1, (URI__HierarchicalURI)i0);
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48850))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48837)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48885))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48872)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  Object__String str;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49019)))), IO_BinaryRider__ReaderDesc_ReadStr)),IO_BinaryRider__ReaderDesc_ReadStr)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&str);
  i0 = (OOC_INT32)str;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT32)0;
l4:
  _failed_function(48926); return 0;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49382)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)b, 1024);
      i0 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)URI_Parser__NewURI((void*)(OOC_INT32)b, 1024, (URI__HierarchicalURI)i0, (void*)(OOC_INT32)&res);
      i1 = (OOC_INT32)res;
      u = (URI__URI)i0;
      _assert((i1==(OOC_INT32)0), 127, 49565);
      i1 = (OOC_INT32)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49680)))), &_td_URI__HierarchicalURIDesc, 49680)), 49696)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49680)))), &_td_URI__HierarchicalURIDesc, 49680)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49746)))), &_td_URI__HierarchicalURIDesc, 49746));
      return;
      ;
    }


  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Reader)i1);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 49827))+4));
  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49841))+8) = i2;
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49879))+12) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50061))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50048)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50095))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50082)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50130))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50117)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50170))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50184)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50152)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50213))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50227)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50255))+8);
  i4 = _check_pointer(i4, 50269);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 50269))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50242)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i4);
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
  *(OOC_INT32*)((_check_pointer(i0, 50421))+4) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 50458))+12) = i2;
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 50496))+16) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50534)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 50561))+8) = ((OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50617))+8);
  i4 = _check_pointer(i4, 50631);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 50631))*4) = i6;
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
  *(OOC_INT32*)((_check_pointer(i0, 50959))+40) = (OOC_INT32)0;
  i1 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 50979))+44) = i1;
  i1 = callConv;
  *(OOC_INT8*)((_check_pointer(i0, 51004))+52) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 51035))+56) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 51067))+60) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 51094))+64) = (OOC_INT32)0;
  i1 = (OOC_INT32)moduleAST;
  *(OOC_INT32*)((_check_pointer(i0, 51125))+68) = i1;
  i1 = (OOC_INT32)bodyDecl;
  *(OOC_INT32*)((_check_pointer(i0, 51158))+72) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 51348))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51332)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51378))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51363)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i0, 51414))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51398)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51450))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51432)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 51617))+40) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51635)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 51650))+44));
  i2 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 51667))+48) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51704)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 51719))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51737)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 51832))+56) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51856)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 51856));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 51790))+56) = (OOC_INT32)0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 51887))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 51918))+68) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 52094))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)mod;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 52198))+48) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 52313))+44);
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
    _failed_case(i0, 52305);
    goto l7;
  }
l7:
  _failed_function(52267); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 52575))+52);
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
    _failed_case(i0, 52567);
    goto l8;
  }
l8:
  _failed_function(52526); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT32)file;
  *(OOC_INT32*)((_check_pointer(i0, 53021))+4) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 53042))+8) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 53079))+12) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 53389))+4) = i1;
  i1 = (OOC_INT32)dependencies;
  *(OOC_INT32*)((_check_pointer(i0, 53424))+8) = i1;
  i1 = (OOC_INT32)prefixOption;
  *(OOC_INT32*)((_check_pointer(i0, 53461))+12) = i1;
  i1 = (OOC_INT32)suffixOption;
  *(OOC_INT32*)((_check_pointer(i0, 53498))+16) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)*list;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 53742)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 53674)) = (OOC_INT32)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)file;
  _assert((i0!=(OOC_INT32)0), 127, 53936);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)prefixOption;
  i3 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i2, (Object__String)i3);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 53982))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)libraryName;
  _assert((i0!=(OOC_INT32)0), 127, 54308);
  i1 = (OOC_INT32)mod;
  i2 = (OOC_INT32)dependencies;
  i3 = (OOC_INT32)prefixOption;
  i4 = (OOC_INT32)suffixOption;
  i0 = (OOC_INT32)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i2, (Object__String)i3, (Object__String)i4);
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 54361))+56), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 55014))+44);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 55043))+44);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  return 0u;
  goto l25;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55082))+56);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55127)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55157));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55127)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT32)0);
l25:
  _failed_function(54546); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT32)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 55687))+44);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 55715))+44);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=1u;
l4:
  _assert(i1, 127, 55675);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55752))+56);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55796)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55824));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55796)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55905)))), &_td_OOC_SymbolTable__LinkFileDesc, 55905)), 55914))+4);
  _assert((i1!=(OOC_INT32)0), 127, 55895);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55937)))), &_td_OOC_SymbolTable__LinkFileDesc, 55937)), 55946))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55937)))), &_td_OOC_SymbolTable__LinkFileDesc, 55937)), 55946))+4);
  i3 = (OOC_INT32)rootURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55952)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55996)))), &_td_OOC_SymbolTable__LinkFileDesc, 55996)), 56005))+4);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT32)0;
l25:
  _failed_function(55281); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)str;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56118)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c9));
  if (i1) goto l7;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56172)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT32)_c10));
  if (i0) goto l5;
  return (-1);
  goto l8;
l5:
  return 3;
  goto l8;
l7:
  return 2;
l8:
  _failed_function(56058); return 0;
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
  *(OOC_INT32*)((_check_pointer(i0, 56579))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 56617))+44) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)symTab;
  *(OOC_INT32*)((_check_pointer(i0, 56743))+44) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 56804))+60);
  *(OOC_INT32*)((_check_pointer(i0, 56781))+48) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)import;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57069))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57081))+12);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 57086)),(const void*)"SYSTEM"))==0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57257))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57236)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 57296))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57277)))), IO_BinaryRider__WriterDesc_WriteLInt)),IO_BinaryRider__WriterDesc_WriteLInt)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)import;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57465)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 57495))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 57515)))), &_td_OOC_SymbolTable__NameDesc, 57515));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57527)))), IO_BinaryRider__ReaderDesc_ReadLInt)),IO_BinaryRider__ReaderDesc_ReadLInt)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 57545))+48));
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
  *(OOC_INT32*)((_check_pointer(i0, 58012))+40) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 58043))+44) = i1;
  i1 = (OOC_INT32)constExpr;
  *(OOC_INT32*)((_check_pointer(i0, 58072))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 58231))+40) = i1;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 58261))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58439))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58415)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58466))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58698))+44);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 58704))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58677)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58645)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
l4:
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Load(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;
  OOC_INT32 id;

  i0 = (OOC_INT32)constDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58897)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 58995))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59016)))), &_td_Object_Boxed__ObjectDesc, 59016));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 58956))+40) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59038)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&id);
  i1 = id;
  i2 = i1==(-1);
  if (i2) goto l7;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 59208);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 59208))*4);
  *(OOC_INT32*)((_check_pointer(i0, 59184))+44) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59237))+44);
  _assert((i1!=(OOC_INT32)0), 127, 59220);
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 59145))+44) = (OOC_INT32)0;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 59273))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__InitExceptionName(OOC_SymbolTable__ExceptionName exceptionName, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 59486))+20) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 59526))+16) = i1;
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Store(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59772))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59744)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Load(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)exceptionName;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59962)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 59999))+20) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60020)))), &_td_OOC_SymbolTable__TypeDesc, 60020));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60067))+20);
  *(OOC_INT32*)((_check_pointer(i0, 60044))+16) = i1;
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60229)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60248)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=1u;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 60307))+40) = i1;
  i2 = _check_pointer(i0, 60334);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 60373))+48);
  if (i3) goto l3;
  i3=0u;
  goto l8;
l3:
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 60405))+50);
  if (i3) goto l6;
  i3 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i3=1u;
l8:
  *(OOC_UINT8*)(i2+51) = i3;
  i2 = _check_pointer(i0, 60458);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 60491))+48);
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 60523))+50);
  i3 = !i3;
  
l13:
  if (i3) goto l15;
  i1=0u;
  goto l16;
l15:
  i1 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
l16:
  *(OOC_UINT8*)(i2+52) = i1;
  i1 = _check_pointer(i0, 60582);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 60613))+51);
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 60652))+50);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=0u;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 60683))+52);
  i0 = !i0;
  
l24:
  *(OOC_UINT8*)(i1+53) = i0;
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
  *(OOC_INT32*)((_check_pointer(i0, 61111))+44) = i2;
  i3 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i0, 61145))+48) = i3;
  i3 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i0, 61186))+49) = i3;
  i4 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i0, 61225))+50) = i4;
  *(OOC_UINT8*)((_check_pointer(i0, 61264))+54) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 61305))+55) = 1u;
  if (!i3) goto l3;
  *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61367)))), &_td_OOC_SymbolTable__FormalParsDesc, 61367)), 61378))+32) = i0;
l3:
  OOC_SymbolTable__VarDeclDesc_SetType((OOC_SymbolTable__VarDecl)i0, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Store(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61632))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61610)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61673))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61653)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61714))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61694)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61754))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61734)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61794))+51);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61774)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61842))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61822)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61884))+53);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61864)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 61924))+54);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61904)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 61971))+55);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 61951)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62146)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 62177))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 62198)))), &_td_OOC_SymbolTable__TypeDesc, 62198));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62233))+44);
  *(OOC_INT32*)((_check_pointer(i0, 62216))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62253)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62272))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62293)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62312))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62332)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62351))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62371)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62390))+51));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62418)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62437))+52));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62459)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62478))+53));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62498)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62517))+54));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62544)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 62563))+55));
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 62601))+48);
  if (!i1) goto l4;
  *(OOC_INT32*)((_check_pointer(i0, 62713))+20) = (-1);
l4:
  return;
  ;
}

void OOC_SymbolTable__InitTypeDecl(OOC_SymbolTable__TypeDecl typeDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 63091))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 63119))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63341))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63318)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63515)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 63547))+44) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63568)))), &_td_OOC_SymbolTable__TypeDesc, 63568));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63605))+44);
  *(OOC_INT32*)((_check_pointer(i0, 63587))+40) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitRedirect(OOC_SymbolTable__Redirect redir, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0);
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)((_check_pointer(i0, 63831))+40) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 63860))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64028))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64008)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64064))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64044)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)redir;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64227)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 64256))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64272)))), &_td_OOC_SymbolTable__NameDesc, 64272));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64284)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 64313))+44) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64328)))), &_td_OOC_SymbolTable__NameDesc, 64328));
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
  *(OOC_INT32*)((_check_pointer(i0, 64661))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 64690))+44) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 64726))+48) = (-1);
  *(OOC_UINT8*)((_check_pointer(i0, 64755))+52) = 0u;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64992))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64968)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 65034))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65013)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 65072))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65050)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)fieldDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65257)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 65290))+44) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 65311)))), &_td_OOC_SymbolTable__TypeDesc, 65311));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65350))+44);
  *(OOC_INT32*)((_check_pointer(i0, 65331))+40) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65370)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 65390))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65406)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 65427))+52));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 65547))+48) = i1;
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
  *(OOC_INT16*)((_check_pointer(i0, 65806))+40) = i1;
  i1 = minArgs;
  *(OOC_INT16*)((_check_pointer(i0, 65826))+42) = i1;
  i1 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i0, 65856))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(0u, 127, 65987);
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(0u, 127, 66101);
  return;
  ;
}

void OOC_SymbolTable__InitProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isTypeBound, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)name;
  i3 = visibleFrom;
  i4 = exportMark;
  i5 = (OOC_INT32)docString;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, i4, (OOC_Doc__Document)i5);
  i1 = isTypeBound;
  *(OOC_UINT8*)((_check_pointer(i0, 66533))+40) = i1;
  i1 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i0, 66575))+41) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 66621))+42) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 66656))+43) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 66693))+44) = 1u;
  *(OOC_INT32*)((_check_pointer(i0, 66731))+48) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 66764))+52) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 66789))+56) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 66822))+60) = (OOC_INT32)0;
  i1 = (OOC_INT32)procAST;
  *(OOC_INT32*)((_check_pointer(i0, 66853))+64) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 66887))+68) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 67068))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67047)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 67110))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67089)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 67154))+42);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67133)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 67195))+43);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67174)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 67238))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67217)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 67282))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67262)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67326))+56);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67303)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67366))+60);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67346)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i0);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67578)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67598))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67619)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67639))+41));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67662)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67682))+42));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67702)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67722))+43));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67744)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67764))+44));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67788)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 67807))+48));
  *(OOC_INT32*)((_check_pointer(i0, 67835))+52) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67853)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 67954))+56) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67974)))), &_td_OOC_SymbolTable__FormalParsDesc, 67974));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 67911))+56) = (OOC_INT32)0;
l4:
  i1 = (OOC_INT32)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT32*)((_check_pointer(i0, 68007))+60) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 68048))+64) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 68078))+68) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 68277))+52) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 68390))+60) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)redefinition;
  i1 = (OOC_INT32)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 68759))+48);
  *(OOC_INT32*)((_check_pointer(i0, 68734))+48) = i1;
  return;
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable__ProcDeclDesc_Class(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1;
  OOC_SymbolTable__Item _class;

  i0 = (OOC_INT32)procDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 69085))+40);
  if (i1) goto l3;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69127))+56);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69139))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69149))+40);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69173)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69213)))), &_td_OOC_SymbolTable__PointerDesc, 69213)), 69221))+32);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69259)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT32)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69296)))), &_td_OOC_SymbolTable__RecordDesc, 69296));
l12:
  _failed_function(68828); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 69652))+20);
  *(OOC_INT32*)((_check_pointer(i0, 69628))+20) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69867))+4);
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ptype;
  i1 = (OOC_INT32)parent;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)(OOC_INT32)0);
  i1 = id;
  *(OOC_INT16*)((_check_pointer(i0, 70032))+32) = i1;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(0u, 127, 70154);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(0u, 127, 70269);
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
  *(OOC_INT32*)((_check_pointer(i0, 70478))+32) = i1;
  i1 = (OOC_INT32)ident;
  *(OOC_INT32*)((_check_pointer(i0, 70507))+36) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70674))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70654)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70710))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70690)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70872)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 70963))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70979)))), &_td_OOC_SymbolTable__NameDesc, 70979));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 70927))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70999)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 71028))+36) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71043)))), &_td_OOC_SymbolTable__NameDesc, 71043));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)tname;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71189)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 71219))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71253))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 71219))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71223)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 0u);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71287)))), &_td_OOC_SymbolTable__ImportDesc, 71287));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 71486))+32) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 71520))+36) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 71561))+40) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 71639))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 71662))+48) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 71692))+49) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 71725))+50) = 1u;
  *(OOC_INT32*)((_check_pointer(i0, 71759))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71970))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71949)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 72013))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71995)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 72053))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72034)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 72089))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72070)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 72128))+50);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72109)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72171))+52);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72150)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72366)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 72468))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72493)))), &_td_OOC_SymbolTable__TypeDesc, 72493));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 72422))+36) = (OOC_INT32)0;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72538))+36);
  *(OOC_INT32*)((_check_pointer(i0, 72518))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72562)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 72579))+40));
  *(OOC_INT32*)((_check_pointer(i0, 72605))+44) = (OOC_INT32)0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72623)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 72641))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72658)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 72676))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72696)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 72714))+50));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72736)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i1 = (OOC_INT32)obj;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 72832))+52) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72851)))), &_td_OOC_SymbolTable__NameDesc, 72851));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 72792))+52) = (OOC_INT32)0;
l8:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)ns;
  *(OOC_INT32*)((_check_pointer(i0, 73031))+44) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 73355))+40);
  *(OOC_INT32*)((_check_pointer(i0, 73332))+48) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 73385))+40);
  *(OOC_INT32*)((_check_pointer(i1, 73385))+40) = (i0+1);
  return;
  ;
}

void OOC_SymbolTable__InitPointer(OOC_SymbolTable__Pointer pointer, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  i1 = (OOC_INT32)baseType;
  *(OOC_INT32*)((_check_pointer(i0, 73605))+32) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 73640))+36) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 73682))+40) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 73724))+41) = 0u;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73943))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73921)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 73988))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73968)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 74036))+41);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74016)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74205)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 74236))+36) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74261)))), &_td_OOC_SymbolTable__TypeDesc, 74261));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74300))+36);
  *(OOC_INT32*)((_check_pointer(i0, 74279))+32) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74324)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74343))+40));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74371)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 74390))+41));
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
  *(OOC_UINT8*)((_check_pointer(i0, 74652))+32) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 74691))+33) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 74725))+34) = 0u;
  i1 = (OOC_INT32)elementType;
  *(OOC_INT32*)((_check_pointer(i0, 74761))+36) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 74800))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 74846))+44) = (-1);
  i1 = (OOC_INT32)lengthExpr;
  *(OOC_INT32*)((_check_pointer(i0, 74871))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 75041))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75023)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 75080))+33);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75062)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 75121))+34);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75103)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75210))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75190)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 75255))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75238)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2;
  ADT_Storable__Object obj;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75420)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75437))+32));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75458)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75475))+33));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75498)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75515))+34));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75539)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 75568))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75596)))), &_td_OOC_SymbolTable__TypeDesc, 75596));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75634))+40);
  *(OOC_INT32*)((_check_pointer(i0, 75612))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75661)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 75677))+44));
  *(OOC_INT32*)((_check_pointer(i0, 75697))+48) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 75803))+44) = i1;
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76125)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76142)))), &_td_OOC_SymbolTable__ArrayDesc, 76142)), 76148))+32);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76201)))), &_td_OOC_SymbolTable__ArrayDesc, 76201)), 76207))+36);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76125)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76142)))), &_td_OOC_SymbolTable__ArrayDesc, 76142)), 76148))+32);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76477)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76494)))), &_td_OOC_SymbolTable__ArrayDesc, 76494)), 76500))+32);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76536)))), &_td_OOC_SymbolTable__ArrayDesc, 76536)), 76542))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76477)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76494)))), &_td_OOC_SymbolTable__ArrayDesc, 76494)), 76500))+32);
  
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76814)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
  
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76846)))), &_td_OOC_SymbolTable__ArrayDesc, 76846)), 76852))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76814)))), &_td_OOC_SymbolTable__ArrayDesc);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77215)))), &_td_OOC_SymbolTable__ArrayDesc, 77215)), 77221))+36);
  type = (OOC_SymbolTable__Type)i0;
  i1 = i1-1;
  dim = i1;
  i2 = i1>0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitFormalPars(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type resultType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)parent;
  i2 = (OOC_INT32)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
  *(OOC_INT32*)((_check_pointer(i0, 77504))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)resultType;
  *(OOC_INT32*)((_check_pointer(i0, 77537))+36) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 77579))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 77628))+44) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 77659))+48) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 77703))+49) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 77738))+52) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 77960))+48) = 1u;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)w;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i0, (ADT_Storable__Writer)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78187))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78162)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78279))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78254)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78319))+44);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78406))+44);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 78414)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78379)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78454))+44);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 78462)), 0);
  i3 = 0<i2;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78504))+44);
  i4 = _check_pointer(i4, 78512);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 78512))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78479)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78347)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
l12:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 78564))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78541)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 78614))+49);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78591)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78645))+52);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l23;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78732))+52);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 78740)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78705)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78780))+52);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 78788)), 0);
  i3 = 0<i2;
  if (!i3) goto l24;
  i3=0;
l17_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78830))+52);
  i4 = _check_pointer(i4, 78838);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 78838))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78805)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (ADT_Storable__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l17_loop;
  goto l24;
l23:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78673)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-1));
l24:
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Load(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_Storable__Object obj;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)r;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i0, (ADT_Storable__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79048)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 79151))+32) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79169)))), &_td_OOC_SymbolTable__VarDeclDesc, 79169));
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 79108))+32) = (OOC_INT32)0;
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79192)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i2 = (OOC_INT32)obj;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 79304))+40) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79331)))), &_td_OOC_SymbolTable__TypeDesc, 79331));
  goto l8;
l7:
  *(OOC_INT32*)((_check_pointer(i0, 79252))+40) = (OOC_INT32)0;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79386))+40);
  *(OOC_INT32*)((_check_pointer(i0, 79360))+36) = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79412)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l19;
  *(OOC_INT32*)((_check_pointer(i0, 79513))+44) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l20;
  i3=0;
l13_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79567)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79605))+44);
  i4 = _check_pointer(i4, 79613);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 79613))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 79624)))), &_td_OOC_SymbolTable__VarDeclDesc, 79624));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l13_loop;
  goto l20;
l19:
  *(OOC_INT32*)((_check_pointer(i0, 79467))+44) = (OOC_INT32)0;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79657)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 79679))+48));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79706)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 79728))+49));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79751)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT32)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l31;
  *(OOC_INT32*)((_check_pointer(i0, 79852))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l32;
  i3=0;
l25_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79906)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT32)&obj);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79944))+52);
  i4 = _check_pointer(i4, 79952);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)obj;
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 79952))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 79963)))), &_td_OOC_SymbolTable__ExceptionNameDesc, 79963));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l25_loop;
  goto l32;
l31:
  *(OOC_INT32*)((_check_pointer(i0, 79806))+52) = (OOC_INT32)0;
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80362))+40);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80461))+52);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80558))+44);
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
      *list = (OOC_SymbolTable__Item)(OOC_INT32)0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=(OOC_INT32)0;
      goto l24;
l3:
      i1=(OOC_INT32)0;
l4_loop:
      i2 = (OOC_INT32)keep;
      i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
      if (i2) goto l14;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81382)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i2) goto l9;
      i2=0u;
      goto l11;
l9:
      i2 = OOC_SymbolTable__ImportDesc_IsInternalImport((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81401)))), &_td_OOC_SymbolTable__ImportDesc, 81401)));
      i2 = !i2;
      
l11:
      if (!i2) goto l19;
      i2 = (OOC_INT32)prunedImports;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81458)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i0);
      goto l19;
l14:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 81141))+8));
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l17;
      *(OOC_INT32*)(_check_pointer(i1, 81290)) = i0;
      goto l18;
l17:
      *list = (OOC_SymbolTable__Item)i0;
l18:
      last = (OOC_SymbolTable__Item)i0;
      i1=i0;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 81521));
      _this = (OOC_SymbolTable__Item)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l4_loop;
l23:
      i0=i1;
l24:
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l27;
      *(OOC_INT32*)(_check_pointer(i0, 81605)) = (OOC_INT32)0;
l27:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT32)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 81717))+8));
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 81774))+4);
  *(OOC_INT32*)((_check_pointer(i0, 81745))+64) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 81813))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 81853));
  i4 = _check_pointer(i4, 81859);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 81859))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 81863)))), &_td_OOC_SymbolTable__ImportDesc, 81863);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 81910))+40);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 81921))+12);
  *(OOC_INT32*)(_check_pointer(i5, 81895)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 81957))+48);
  *(OOC_INT32*)((_check_pointer(i5, 81935))+4) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81981))+64);
  i4 = _check_pointer(i4, 81995);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 81995))*4) = i5;
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
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82722)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82807)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return 0u;
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82850))+40);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82767))+36);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return 1u;
l12:
          _failed_function(82591); return 0;
          ;
        }


      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82999)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83019)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=1u;
l4:
      _assert(i1, 127, 82985);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83051)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83073))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83082)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l11;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83168))+4);
      ptr = (OOC_SymbolTable__Item)i0;
      goto l12;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83119))+4);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83128)))), &_td_OOC_SymbolTable__ProcDeclDesc, 83128));
l12:
      i0 = (OOC_INT32)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83207)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83240)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l17;
l15:
      i1=1u;
l17:
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83275)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l21;
l19:
      i1=1u;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83308)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l24;
l23:
      i1=1u;
l24:
      _assert(i1, 127, 83194);
      found = 0u;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83363))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l51;
l27_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83421)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83500)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l40;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83580)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83659)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l36;
      found = 0u;
      i0=0u;
      goto l43;
l36:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83706))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l38:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83626))+56);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l40:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83546))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l43;
l42:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83466))+44);
      i1 = (OOC_INT32)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l43:
      i1 = (OOC_INT32)ptr;
      if (!i0) goto l46;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83821)))), &_td_OOC_SymbolTable__DeclarationDesc, 83821));
l46:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 83865));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l27_loop;
l51:
      _assert(0u, 127, 83895);
      _failed_function(82485); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT32)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 84036)),(const void*)""))==0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 84110)), 0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 84110)), i1);
      i2 = (OOC_INT32)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 84130)), 0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 84130)), i3);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 84156)), 0);
      _copy_8((const void*)(_check_pointer(i0, 84152)),(void*)(_check_pointer(i1, 84156)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 84190)), 0);
      Strings__Append(".", 2, (void*)(_check_pointer(i1, 84190)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 84223)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 84219)), 0);
      Strings__Append((void*)(_check_pointer(i2, 84219)), i3, (void*)(_check_pointer(i1, 84223)), i0);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT32)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(83947); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84293))+32);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84368)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84489)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84509)))), &_td_OOC_SymbolTable__ProcDeclDesc, 84509)), 84518))+40);
  
l9:
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84807)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85083)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85102)))), &_td_OOC_SymbolTable__VarDeclDesc, 85102)), 85110))+48);
  
l17:
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85411))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85411))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 85420)))), &_td_OOC_SymbolTable__DeclarationDesc, 85420)), 85432)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 85420)))), &_td_OOC_SymbolTable__DeclarationDesc, 85420)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85447))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85453))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85281)))), &_td_OOC_SymbolTable__VarDeclDesc, 85281)), 85289))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85298)))), &_td_OOC_SymbolTable__FormalParsDesc, 85298)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85346)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85361))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85367))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84974)))), &_td_OOC_SymbolTable__FieldDeclDesc, 84974)), 84984))+4);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84993)))), &_td_OOC_SymbolTable__RecordDesc, 84993)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85037)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85052))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85058))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l23:
  i0 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84706)))), &_td_OOC_SymbolTable__ProcDeclDesc, 84706)));
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84761)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i1 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84776))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84782))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l26;
l25:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 84461);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 84461))) = 0u;
  
l26:
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 85481))+32) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l28;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84333))+32);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l28:
  _failed_function(82059); return 0;
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
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85930)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l31;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86118)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86169)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86263)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86363)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86473)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l21;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86577)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86571)))), 86571);
      goto l32;
l19:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86610))+44);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l21:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86522))+36);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86541))+40);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l23:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l25:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86314))+32);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86330))+36);
      i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Namespace)i0;
      goto l32;
l27:
      _assert(0u, 127, 86193);
      goto l32;
l29:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
      goto l32;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
l32:
      _failed_function(85833); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86686)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86730)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86790)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86836)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86878)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86921)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87005)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87091)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87176)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87170)))), 87170);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT32)0;
  goto l36;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87139))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87151))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87054))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87066))+44);
  i0 = (OOC_INT32)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86968))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86980))+44);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86821))+52);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86759))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86775))+40);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86715))+40);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(85567); return 0;
  ;
}

void OOC_OOC_SymbolTable_init(void) {
  register OOC_INT32 i0;
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

  OOC_SymbolTable__predefIdToType = (void*)(OOC_INT32)0;
  i0 = (OOC_INT32)URI_Scheme_File__ToURI("/", 2);
  OOC_SymbolTable__emptyBaseURI = (URI__HierarchicalURI)i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  OOC_SymbolTable__importPosition = (OOC_SymbolTable__Position)i0;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, (-2), (-1), (-1));
  return;
  ;
}

/* --- */
