#include <OOC/SSA/Blocker.d>
#include <__oo2c.h>

static void OOC_SSA_Blocker__InitProxy(OOC_SSA_Blocker__Proxy p, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  *(OOC_INT32*)(_check_pointer(i0, 7112)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 7137))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 7162))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 7185))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 7207))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 7232))+20) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 7262))+24) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 7293))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 7326))+32) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7346))+36) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 7367))+40) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7389))+44) = 0;
  return;
  ;
}

static OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__NewProxy(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__Proxy.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  OOC_SSA_Blocker__InitProxy((OOC_SSA_Blocker__Proxy)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Proxy)i0;
  ;
}

static void OOC_SSA_Blocker__ClearMarkers(OOC_SSA_Blocker__Region r) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Blocker__Proxy proxy;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)((_check_pointer(i0, 7643))+32) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7672))+48);
  i1 = i0!=(OOC_INT32)0;
  proxy = (OOC_SSA_Blocker__Proxy)i0;
  if (!i1) goto l11;
l3_loop:
  *(OOC_INT32*)((_check_pointer(i0, 7719))+32) = 0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7750)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i1) goto l6;
  OOC_SSA_Blocker__ClearMarkers((OOC_SSA_Blocker__Region)i0);
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7877));
  proxy = (OOC_SSA_Blocker__Proxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l11:
  return;
  ;
}

static void OOC_SSA_Blocker__InitRegion(OOC_SSA_Blocker__Region r, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)r;
  OOC_SSA_Blocker__InitProxy((OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Instr)i0);
  *(OOC_INT32*)((_check_pointer(i1, 8101))+48) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 8122))+52) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 8142))+56) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 8168))+32) = 0;
  return;
  ;
}

static OOC_SSA_Blocker__Region OOC_SSA_Blocker__NewRegion(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__Region.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  OOC_SSA_Blocker__InitRegion((OOC_SSA_Blocker__Region)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Region)i0;
  ;
}

void OOC_SSA_Blocker__RegionDesc_Append(OOC_SSA_Blocker__Region r, OOC_SSA_Blocker__Proxy p) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8412))+12);
  _assert((i1==(OOC_INT32)0), 127, 8403);
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8455))+52);
  *(OOC_INT32*)((_check_pointer(i0, 8439))+4) = i2;
  *(OOC_INT32*)(_check_pointer(i0, 8468)) = (OOC_INT32)0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8497))+52);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 8563))+48) = i0;
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8523))+52);
  *(OOC_INT32*)(_check_pointer(i2, 8529)) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 8591))+52) = i0;
  *(OOC_INT32*)((_check_pointer(i0, 8614))+12) = i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8639)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i2) goto l7;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8689))+56);
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8663)))), &_td_OOC_SSA_Blocker__RegionDesc, 8663)), 8670))+56) = (i1+1);
l7:
  return;
  ;
}

void OOC_SSA_Blocker__RegionDesc_Insert(OOC_SSA_Blocker__Region r, OOC_SSA_Blocker__Proxy p) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8792))+12);
  _assert((i1==(OOC_INT32)0), 127, 8783);
  *(OOC_INT32*)((_check_pointer(i0, 8819))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8860))+48);
  *(OOC_INT32*)(_check_pointer(i0, 8844)) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8878))+48);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i1, 8946))+52) = i0;
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8905))+48);
  *(OOC_INT32*)((_check_pointer(i2, 8912))+4) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 8973))+48) = i0;
  *(OOC_INT32*)((_check_pointer(i0, 8997))+12) = i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9022)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i2) goto l7;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 9072))+56);
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9046)))), &_td_OOC_SSA_Blocker__RegionDesc, 9046)), 9053))+56) = (i1+1);
l7:
  return;
  ;
}

void OOC_SSA_Blocker__RegionDesc_Remove(OOC_SSA_Blocker__Region r, OOC_SSA_Blocker__Proxy p) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9175))+12);
  i2 = (OOC_INT32)r;
  _assert((i1==i2), 127, 9166);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9199))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9298));
  *(OOC_INT32*)((_check_pointer(i2, 9286))+48) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9230))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9257));
  *(OOC_INT32*)(_check_pointer(i1, 9241)) = i3;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9329));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9427))+4);
  *(OOC_INT32*)((_check_pointer(i2, 9416))+52) = i1;
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9360));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9387))+4);
  *(OOC_INT32*)((_check_pointer(i1, 9371))+4) = i2;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 9459))+12) = (OOC_INT32)0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9486)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i1) goto l11;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9510)))), &_td_OOC_SSA_Blocker__RegionDesc, 9510)), 9517))+56) = 0;
l11:
  return;
  ;
}

static void OOC_SSA_Blocker__InitSelect(OOC_SSA_Blocker__Select r, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)r;
  OOC_SSA_Blocker__InitRegion((OOC_SSA_Blocker__Region)i1, (OOC_SSA__Instr)i0);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9785)))), OOC_SSA__InstrDesc_SizeOpndList)),OOC_SSA__InstrDesc_SizeOpndList)((OOC_SSA__Instr)i0);
  *(OOC_INT32*)((_check_pointer(i1, 9771))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__5550.baseTypes[0], (i0>>1)));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9834))+60);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9841)), (OOC_INT32)0);
  i0 = i0-1;
  i2 = 0<=i0;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9856))+60);
  i3 = _check_pointer(i3, 9863);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9863))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

static OOC_SSA_Blocker__Select OOC_SSA_Blocker__NewSelect(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__Select.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  OOC_SSA_Blocker__InitSelect((OOC_SSA_Blocker__Select)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Select)i0;
  ;
}

static void OOC_SSA_Blocker__InitLoop(OOC_SSA_Blocker__Loop r, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)r;
  OOC_SSA_Blocker__InitRegion((OOC_SSA_Blocker__Region)i1, (OOC_SSA__Instr)i0);
  *(OOC_INT32*)((_check_pointer(i1, 10227))+64) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 10251))+60) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 10278))+68) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 10304))+72) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i1, 10334))+76) = OOC_FALSE;
  return;
  ;
}

static OOC_SSA_Blocker__Loop OOC_SSA_Blocker__NewLoop(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__Loop.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  OOC_SSA_Blocker__InitLoop((OOC_SSA_Blocker__Loop)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Loop)i0;
  ;
}

void OOC_SSA_Blocker__LoopDesc_AppendLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA_Blocker__Loop nestedLoop) {
  register OOC_INT32 i0,i1;
  auto void OOC_SSA_Blocker__LoopDesc_AppendLoop_App(OOC_SSA_Blocker__Loop *list);
    
    void OOC_SSA_Blocker__LoopDesc_AppendLoop_App(OOC_SSA_Blocker__Loop *list) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)nestedLoop;
      i1 = (OOC_INT32)*list;
      _assert((i0!=i1), 127, 10615);
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l3;
      OOC_SSA_Blocker__LoopDesc_AppendLoop_App((void*)((_check_pointer(i1, 10763))+64));
      goto l4;
l3:
      *(OOC_INT32*)((_check_pointer(i0, 10688))+64) = (OOC_INT32)0;
      *list = (OOC_SSA_Blocker__Loop)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)loop;
  OOC_SSA_Blocker__LoopDesc_AppendLoop_App((void*)((_check_pointer(i0, 10824))+60));
  i0 = (OOC_INT32)nestedLoop;
  i1 = (OOC_INT32)loop;
  *(OOC_INT32*)((_check_pointer(i0, 10854))+68) = i1;
  return;
  ;
}

static OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__GetProxy(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Blocker__Proxy p;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10986))+16);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l9;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11063))+36);
  switch (i1) {
  case 8:
    i1 = (OOC_INT32)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  case 5:
    i1 = (OOC_INT32)OOC_SSA_Blocker__NewSelect((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  case 11:
    i1 = (OOC_INT32)OOC_SSA_Blocker__NewLoop((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  default:
    i1 = (OOC_INT32)OOC_SSA_Blocker__NewProxy((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  }
l8:
  *(OOC_INT32*)((_check_pointer(i0, 11309))+16) = i1;
  return (OOC_SSA_Blocker__Proxy)i1;
  goto l10;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11023))+16);
  return (OOC_SSA_Blocker__Proxy)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11030)))), &_td_OOC_SSA_Blocker__ProxyDesc, 11030));
l10:
  _failed_function(10907); return 0;
  ;
}

static OOC_CHAR8 OOC_SSA_Blocker__Dominates(OOC_SSA_Blocker__Region dom, OOC_SSA_Blocker__Region child) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)child;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)dom;
  i0 = i0!=i1;
  
l5:
  if (!i0) goto l16;
  i0 = (OOC_INT32)dom;
l7_loop:
  i1 = (OOC_INT32)child;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11486))+12);
  child = (OOC_SSA_Blocker__Region)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = i1!=i0;
  
l12:
  if (i1) goto l7_loop;
l16:
  i0 = (OOC_INT32)child;
  return (i0!=(OOC_INT32)0);
  ;
}

static void OOC_SSA_Blocker__WriteBlocks(Channel__Channel c, OOC_SSA__ProcBlock pb, OOC_SSA_Blocker__Region root, ADT_Dictionary__Dictionary marker) {
  register OOC_INT32 i0,i1,i2;
  ADT_Dictionary_IntValue__Dictionary idMap;
  OOC_INT32 instrCount;
  TextRider__Writer w;
  auto void OOC_SSA_Blocker__WriteBlocks_AssignId(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteResultId(OOC_SSA__Result res);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteOpnd(OOC_SSA__Opnd opnd);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteInstr(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteRegion(OOC_SSA_Blocker__Region r);
    
    void OOC_SSA_Blocker__WriteBlocks_AssignId(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Blocker__Proxy n;

      i0 = (OOC_INT32)p;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11857)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (!i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11883))+48);
      n = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l11;
l5_loop:
      OOC_SSA_Blocker__WriteBlocks_AssignId((OOC_SSA_Blocker__Proxy)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11959));
      n = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12019))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l14;
      i1=OOC_FALSE;
      goto l16;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12038))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12038))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12045)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i2);
      i1 = !i1;
      
l16:
      if (!i1) goto l18;
      i1 = (OOC_INT32)idMap;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12083))+8);
      i2 = instrCount;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12075)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
      i0 = instrCount;
      instrCount = (i0+1);
l18:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr instr;
      OOC_INT32 d;
      OOC_SSA_Blocker__Region r;
      OOC_INT32 i;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12298))+8);
      i2 = i1==(OOC_INT32)0;
      instr = (OOC_SSA__Instr)i1;
      if (i2) goto l3;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12477)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i2, (_type_cast_fast(OOC_INT32, OOC_PTR, i1)), 8);
      goto l4;
l3:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12416)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i1, (_type_cast_fast(OOC_INT32, OOC_PTR, i0)), 8);
l4:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12548)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "  ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13169))+12);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l28;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13204))+12);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 13212))+56);
      d = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13242))+12);
      r = (OOC_SSA_Blocker__Region)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l10_loop;
      i0=i1;
      goto l19;
l10_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13295)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (!i2) goto l14;
      i1 = i1-1;
      d = i1;
      
l14:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13363))+12);
      r = (OOC_SSA_Blocker__Region)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l10_loop;
l18:
      i0=i1;
l19:
      i1 = 1<=i0;
      i = 1;
      if (!i1) goto l28;
      i1=1;
l22_loop:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13424)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, "  ", 3);
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l22_loop;
l28:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteResultId(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1,i2,i3;
      Object__Object obj;
      OOC_SSA__Instr instr;
      Object__String value;
      OOC_INT32 id;
      OOC_INT32 count;
      OOC_SSA__Result ptr;

      i0 = (OOC_INT32)marker;
      i1 = (OOC_INT32)res;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13697)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      if (!i0) goto l3;
      i0 = (OOC_INT32)marker;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13738)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
      obj = (Object__Object)i0;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13760)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'[');
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13788)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i2, (Object__String)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13804)))), &_td_Object__StringDesc, 13804)));
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13823)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)']');
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13878))+8);
      instr = (OOC_SSA__Instr)i0;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13901)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
      if (i2) goto l18;
      i0 = (OOC_INT32)idMap;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14934))+8);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14924)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2);
      id = i0;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14953)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)'(');
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14981)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i2, i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15017))+8);
      i0 = i0!=i1;
      if (!i0) goto l17;
      count = 1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15079))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15086));
      i2 = i0!=i1;
      ptr = (OOC_SSA__Result)i0;
      if (i2) goto l10;
      i0=1;
      goto l16;
l10:
      i2=i0;i0=1;
l11_loop:
      i0 = i0+1;
      count = i0;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15178));
      i3 = i2!=i1;
      ptr = (OOC_SSA__Result)i2;
      if (i3) goto l11_loop;
l16:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15218)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'.');
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15248)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
l17:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15294)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)')');
      goto l43;
l18:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13936)))), &_td_OOC_SSA__ConstDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14155)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14239)))), &_td_OOC_SSA__TypeRefDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14311)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l31;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14443))+36);
      switch (i1) {
      case 56:
      case 57:
        i1 = (OOC_INT32)w;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14545))+24);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14555))+8);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14565))+8);
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14575));
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14613)))), &_td_OOC_SSA__DeclRefDesc, 14613)), 14621))+44);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14627))+16);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14633))+12);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14545))+24);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14555))+8);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14565))+8);
        i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 14575));
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14613)))), &_td_OOC_SSA__DeclRefDesc, 14613)), 14621))+44);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14627))+16);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14633))+12);
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 14638)), (OOC_INT32)0);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14525)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(_check_pointer(i2, 14638)), i3);
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14655)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "/dim", 5);
        i1 = (OOC_INT32)w;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14710))+24);
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14720));
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14730)))), &_td_OOC_SSA__ConstDesc, 14730)), 14736))+44);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14710))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14720));
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14730)))), &_td_OOC_SSA__ConstDesc, 14730)), 14736))+44);
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14751)))), &_td_Object_BigInt__BigIntDesc, 14751)), 14758)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14751)))), &_td_Object_BigInt__BigIntDesc, 14751)));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14692)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
        goto l43;
      default:
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14809)))), OOC_SSA__InstrDesc_LogOpcode)),OOC_SSA__InstrDesc_LogOpcode)((OOC_SSA__Instr)i0, "instr.opcode", 13);
        _assert(OOC_FALSE, 127, 14851);
        goto l43;
      }
l31:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14339)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'&');
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14389))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14395))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14401))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14389))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14395))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14401))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14406)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14369)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(_check_pointer(i2, 14406)), i0);
      goto l43;
l33:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14267)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<typeref>", 10);
      goto l43;
l35:
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14203))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14209))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14215))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14203))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14209))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14215))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14220)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14183)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(_check_pointer(i2, 14220)), i0);
      goto l43;
l37:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13970))+44);
      i2 = (OOC_INT32)OOC_SSA__nil;
      i1 = i1==i2;
      if (i1) goto l40;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14071))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14071))+44);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14078)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
      value = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14105)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i1, (Object__String)i0);
      goto l43;
l40:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14007)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "NIL", 4);
l43:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteOpnd(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15413))+4);
      switch (i1) {
      case 18:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15462)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "*ad*", 5);
        goto l6;
      case 20:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15526)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "*rd*", 5);
        goto l6;
      case 17:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15589)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "*led*", 6);
        goto l6;
      default:
        goto l6;
      }
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15766));
      OOC_SSA_Blocker__WriteBlocks_WriteResultId((OOC_SSA__Result)i0);
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteInstr(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Instr instr;
      OOC_INT32 resCount;
      OOC_SSA__Result res;
      OOC_CHAR8 str[64];
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15995))+8);
      instr = (OOC_SSA__Instr)i1;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16019)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i1);
      i2 = !i2;
      if (!i2) goto l40;
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      resCount = 0;
      res = (OOC_SSA__Result)i1;
      i0 = i1!=(OOC_INT32)0;
      if (i0) goto l5;
      i0=0;
      goto l22;
l5:
      i0=i1;i2=0;
l6_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16166))+12);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l9;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 16192))+36);
      i3 = i3==8;
      
      goto l11;
l9:
      i3=OOC_TRUE;
l11:
      if (!i3) goto l17;
      i3 = i2!=0;
      if (!i3) goto l16;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16279)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i3, (OOC_CHAR8)',');
l16:
      OOC_SSA_Blocker__WriteBlocks_WriteResultId((OOC_SSA__Result)i0);
      i2 = i2+1;
      resCount = i2;
      
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16411));
      res = (OOC_SSA__Result)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l6_loop;
l21:
      i0=i2;
l22:
      i0 = i0==0;
      if (!i0) goto l25;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16480)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "(--)", 5);
l25:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16535)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " := ", 5);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 16603))+5);
      i2 = *(OOC_INT8*)((_check_pointer(i1, 16588))+36);
      OOC_SSA_Opcode__GetName(i2, i0, (void*)(OOC_INT32)str, 64);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16630)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 64);
      i0 = *(OOC_INT32*)((_check_pointer(i1, 16668))+40);
      i0 = i0>=0;
      if (!i0) goto l28;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16696)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "@", 2);
      i0 = (OOC_INT32)w;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 16746))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16728)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i2, 0);
l28:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16779)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)' ');
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16828))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l39;
l31_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16896))+24);
      i2 = i0!=i2;
      if (!i2) goto l34;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16926)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i2, (OOC_CHAR8)',');
l34:
      OOC_SSA_Blocker__WriteBlocks_WriteOpnd((OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17010))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l31_loop;
l39:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17043)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l40:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteRegion(OOC_SSA_Blocker__Region r) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      auto void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody(OOC_SSA_Blocker__Proxy p);
      auto void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBranchHead(OOC_SSA__Opnd select, OOC_SSA__Opnd opnd);
        
        void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody(OOC_SSA_Blocker__Proxy p) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)p;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l12;
l3_loop:
          i0 = (OOC_INT32)p;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17269)))), &_td_OOC_SSA_Blocker__RegionDesc);
          if (i1) goto l6;
          OOC_SSA_Blocker__WriteBlocks_WriteInstr((OOC_SSA_Blocker__Proxy)i0);
          goto l7;
l6:
          OOC_SSA_Blocker__WriteBlocks_WriteRegion((OOC_SSA_Blocker__Region)i0);
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17384));
          p = (OOC_SSA_Blocker__Proxy)i0;
          i0 = i0!=(OOC_INT32)0;
          if (i0) goto l3_loop;
l12:
          return;
          ;
        }

        
        void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBranchHead(OOC_SSA__Opnd select, OOC_SSA__Opnd opnd) {
          register OOC_INT32 i0;

          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17509)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "IF ", 4);
          i0 = (OOC_INT32)select;
          OOC_SSA_Blocker__WriteBlocks_WriteOpnd((OOC_SSA__Opnd)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17569)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " = ", 4);
          i0 = (OOC_INT32)opnd;
          OOC_SSA_Blocker__WriteBlocks_WriteOpnd((OOC_SSA__Opnd)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17627)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, " THEN", 6);
          return;
          ;
        }


      i0 = (OOC_INT32)r;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17706)))), &_td_OOC_SSA_Blocker__LoopDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17893)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (i1) goto l5;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18429))+48);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody((OOC_SSA_Blocker__Proxy)i0);
      goto l16;
l5:
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17936)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "SELECT", 7);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17963)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17991))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17998))+24);
      opnd = (OOC_SSA__Opnd)i1;
      i = 0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18051))+60);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18058)), (OOC_INT32)0);
      i0 = 0!=i0;
      if (!i0) goto l13;
      i0=i1;i1=0;
l8_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18087))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = (OOC_INT32)r;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18128))+60);
      i3 = _check_pointer(i3, 18135);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 18135))*4);
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18169))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18176))+24);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBranchHead((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18206)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18239))+60);
      i0 = _check_pointer(i0, 18246);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = i;
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 18246))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18249))+48);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18281))+8);
      i1 = i;
      i1 = i1+1;
      opnd = (OOC_SSA__Opnd)i0;
      i = i1;
      i2 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18051))+60);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18058)), (OOC_INT32)0);
      i2 = i1!=i2;
      if (i2) goto l8_loop;
l13:
      i0 = (OOC_INT32)r;
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18356)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "END SELECT", 11);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18387)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
      goto l16;
l15:
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17747)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "LOOP", 5);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17772)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17803))+48);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT32)r;
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17844)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "END LOOP", 9);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17873)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
l16:
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18461))+8);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l19;
      OOC_SSA_Blocker__WriteBlocks_WriteInstr((OOC_SSA_Blocker__Proxy)i0);
l19:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  idMap = (ADT_Dictionary_IntValue__Dictionary)i0;
  i0 = (OOC_INT32)root;
  instrCount = 1;
  OOC_SSA_Blocker__WriteBlocks_AssignId((OOC_SSA_Blocker__Proxy)i0);
  i0 = (OOC_INT32)c;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18668)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18684)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "Procedure: ", 12);
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18737))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18747))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18753))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18737))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18747))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18753))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18758)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18720)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 18758)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18767)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)root;
  OOC_SSA_Blocker__WriteBlocks_WriteRegion((OOC_SSA_Blocker__Region)i0);
  return;
  ;
}

static OOC_CHAR8 OOC_SSA_Blocker__AntiDepViolation(OOC_SSA__ProcBlock pb, OOC_SSA_Blocker__Region root) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Destore__State destore;
  OOC_INT32 violationCount;
  OOC_INT32 currentId;
  OOC_SSA__Instr get;
  OOC_SSA_Blocker__Proxy startOfScan;
  auto void OOC_SSA_Blocker__AntiDepViolation_ScanBackward(OOC_SSA_Blocker__Region region, OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign, OOC_SSA__Result storeInGet);
  auto void OOC_SSA_Blocker__AntiDepViolation_ScanForward(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign);
    
    void OOC_SSA_Blocker__AntiDepViolation_ScanBackward(OOC_SSA_Blocker__Region region, OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign, OOC_SSA__Result storeInGet) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SSA__Result storeOut;
      OOC_INT32 i;
      OOC_SSA__Opnd opnd;
      OOC_SSA_Blocker__Proxy x;

      i0 = (OOC_INT32)proxy;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19283)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l5:
      if (!i0) goto l31;
      i0 = (OOC_INT32)readDesign;
      i1 = (OOC_INT32)storeInGet;
l7_loop:
      i2 = (OOC_INT32)proxy;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19322))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19322))+8);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19329)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i4);
      storeOut = (OOC_SSA__Result)i3;
      i4 = *(OOC_INT32*)((_check_pointer(i2, 19366))+32);
      i5 = currentId;
      i4 = i4==i5;
      if (i4) goto l10;
      i4 = i3==i1;
      
      goto l12;
l10:
      i4=OOC_TRUE;
l12:
      if (i4) goto l21;
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l16;
      i3=OOC_FALSE;
      goto l18;
l16:
      i3 = (OOC_INT32)destore;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19668))+8);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19636)))), OOC_SSA_Destore__StateDesc_ClobberedBy)),OOC_SSA_Destore__StateDesc_ClobberedBy)((OOC_SSA_Destore__State)i3, (OOC_SSA__Opnd)i0, (OOC_SSA__Instr)i4);
      
l18:
      if (!i3) goto l22;
      i3 = violationCount;
      violationCount = (i3+1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19729))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19729))+8);
      i5 = (OOC_INT32)get;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19736)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 18);
      goto l22;
l21:
      return;
l22:
      i3 = currentId;
      *(OOC_INT32*)((_check_pointer(i2, 19927))+32) = i3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19972))+4);
      proxy = (OOC_SSA_Blocker__Proxy)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l25;
      i2=OOC_FALSE;
      goto l27;
l25:
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19283)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l27:
      if (i2) goto l7_loop;
l31:
      i0 = (OOC_INT32)proxy;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l40;
      i0 = (OOC_INT32)region;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21159))+12);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l80;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21200))+12);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21209)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (!i1) goto l38;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21253))+12);
      region = (OOC_SSA_Blocker__Region)i0;
l38:
      i0 = (OOC_INT32)region;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21308))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21324))+4);
      i2 = (OOC_INT32)storeInGet;
      i3 = (OOC_INT32)readDesign;
      OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Proxy)i0, (OOC_SSA__Opnd)i3, (OOC_SSA__Result)i2);
      goto l80;
l40:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20244))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20244))+8);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20251)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i2);
      storeOut = (OOC_SSA__Result)i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 20288))+32);
      i3 = currentId;
      i2 = i2==i3;
      if (i2) goto l43;
      i2 = (OOC_INT32)storeInGet;
      i1 = i1==i2;
      
      goto l45;
l43:
      i1=OOC_TRUE;
l45:
      if (i1) goto l78;
      *(OOC_INT32*)((_check_pointer(i0, 20388))+32) = i3;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20431)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (i1) goto l68;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20701)))), &_td_OOC_SSA_Blocker__LoopDesc);
      if (!i1) goto l80;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20736))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20736))+8);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20743)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l53;
      i1=OOC_FALSE;
      goto l55;
l53:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 20796))+4);
      i1 = i1==11;
      
l55:
      if (!i1) goto l80;
      i1 = (OOC_INT32)storeInGet;
      i2 = (OOC_INT32)readDesign;
      
l57_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20848));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 20853))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 20860))+16);
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20867)))), &_td_OOC_SSA_Blocker__ProxyDesc, 20867);
      x = (OOC_SSA_Blocker__Proxy)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 20904))+12);
      OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i4, (OOC_SSA_Blocker__Proxy)i3, (OOC_SSA__Opnd)i2, (OOC_SSA__Result)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20968))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l60;
      i3=OOC_FALSE;
      goto l62;
l60:
      i3 = *(OOC_INT8*)((_check_pointer(i0, 20796))+4);
      i3 = i3==11;
      
l62:
      if (i3) goto l57_loop;
      goto l80;
l68:
      i = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20496))+60);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20503)), (OOC_INT32)0);
      i1 = 0!=i1;
      if (!i1) goto l80;
      i1 = (OOC_INT32)storeInGet;
      i2 = (OOC_INT32)readDesign;
      i3=0;
l71_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20543))+60);
      i4 = _check_pointer(i4, 20550);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20560))+60);
      i6 = _check_pointer(i6, 20567);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 20567))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 20570))+52);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 20550))*4);
      OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i4, (OOC_SSA_Blocker__Proxy)i6, (OOC_SSA__Opnd)i2, (OOC_SSA__Result)i1);
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20496))+60);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 20503)), (OOC_INT32)0);
      i4 = i3!=i4;
      if (i4) goto l71_loop;
      goto l80;
l78:
      return;
l80:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__AntiDepViolation_ScanForward(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Result storeOut;

      i0 = (OOC_INT32)proxy;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21767)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l5:
      if (!i0) goto l23;
      i0 = (OOC_INT32)readDesign;
l7_loop:
      i1 = (OOC_INT32)proxy;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21806))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21806))+8);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21813)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i3);
      storeOut = (OOC_SSA__Result)i2;
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l10;
      i2=OOC_FALSE;
      goto l12;
l10:
      i2 = (OOC_INT32)destore;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21913))+8);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21881)))), OOC_SSA_Destore__StateDesc_ClobberedBy)),OOC_SSA_Destore__StateDesc_ClobberedBy)((OOC_SSA_Destore__State)i2, (OOC_SSA__Opnd)i0, (OOC_SSA__Instr)i3);
      
l12:
      if (!i2) goto l14;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21942))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21942))+8);
      i4 = (OOC_INT32)get;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21949)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 18);
      return;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22597));
      proxy = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l17;
      i1=OOC_FALSE;
      goto l19;
l17:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21767)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l19:
      if (i1) goto l7_loop;
l23:
      return;
      ;
    }


  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i1;
  i1 = (OOC_INT32)root;
  OOC_SSA_Blocker__ClearMarkers((OOC_SSA_Blocker__Region)i1);
  violationCount = 0;
  currentId = 1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22772))+8);
  i1 = i0!=(OOC_INT32)0;
  get = (OOC_SSA__Instr)i0;
  if (!i1) goto l15;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 22823))+36);
  i1 = i1==12;
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22852)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  i1 = i1==(OOC_INT32)0;
  
l8:
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22978))+16);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22985)))), &_td_OOC_SSA_Blocker__ProxyDesc, 22985);
  startOfScan = (OOC_SSA_Blocker__Proxy)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23026))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23069))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23107)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23166))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23176));
  OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  i0 = (OOC_INT32)startOfScan;
  i1 = (OOC_INT32)get;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23225));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23262)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
  OOC_SSA_Blocker__AntiDepViolation_ScanForward((OOC_SSA_Blocker__Proxy)i0, (OOC_SSA__Opnd)i1);
  i0 = currentId;
  currentId = (i0+1);
l10:
  i0 = (OOC_INT32)get;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23358))+28);
  get = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l15:
  i0 = violationCount;
  return (i0!=0);
  ;
}

void OOC_SSA_Blocker__RemoveAntiDeps(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Instr instr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd next;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23845))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l20;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23904))+24);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l15;
l6_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23964))+8);
  next = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 23993))+4);
  switch (i3) {
  case 18:
  case 20:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24072)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i1);
    goto l10;
  default:
    goto l10;
  }
l10:
  opnd = (OOC_SSA__Opnd)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1=i2;
  goto l6_loop;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24204))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l20:
  return;
  ;
}

void OOC_SSA_Blocker__RemoveRegionDeps(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Instr instr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd next;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24375))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l19;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24434))+24);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l14;
l6_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24494))+8);
  next = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 24522))+4);
  i3 = i3==20;
  if (!i3) goto l9;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24574)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i1);
l9:
  opnd = (OOC_SSA__Opnd)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l14;
  i1=i2;
  goto l6_loop;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24654))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  return;
  ;
}

OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions(OOC_SSA__ProcBlock pb, OOC_CHAR8 markAntiDeps) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr enter;
  OOC_SSA_Blocker__Loop mainLoop;
  OOC_SSA_Blocker__Region ready;
  OOC_SSA_Blocker__Region waiting;
  OOC_SSA__Instr instr;
  OOC_INT32 useCount;
  OOC_SSA__Result res;
  OOC_SSA__Opnd use;
  OOC_SSA_Blocker__Proxy p;
  OOC_SSA_Blocker__Region root;
  OOC_SSA_Blocker__Region region;
  auto void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure(OOC_SSA_Blocker__Loop loop, OOC_SSA__Result storeIn, OOC_SSA__Instr endOfSearch, OOC_SSA_Blocker__Loop preceedingLoop);
  auto void OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops(OOC_SSA_Blocker__Loop loop);
  auto void OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop(OOC_SSA_Blocker__Loop loop);
  auto void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps(OOC_SSA_Blocker__Region r);
  auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse(OOC_SSA__Opnd use);
  auto void OOC_SSA_Blocker__ArrangeInstructions_UpdateDefs(OOC_SSA_Blocker__Proxy p);
  auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion(OOC_SSA_Blocker__Region r);
  auto void OOC_SSA_Blocker__ArrangeInstructions_ClearRegion(OOC_SSA_Blocker__Region r);
    
    void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure(OOC_SSA_Blocker__Loop loop, OOC_SSA__Result storeIn, OOC_SSA__Instr endOfSearch, OOC_SSA_Blocker__Loop preceedingLoop) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr instr;
      OOC_SSA__Instr loopEnd;
      OOC_SSA_Blocker__Loop loopProxy;
      OOC_SSA_Blocker__Proxy dummy;
      auto void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure_RegisterPreceeding(OOC_SSA_Blocker__Loop preceeding, OOC_SSA_Blocker__Loop following);
        
        void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure_RegisterPreceeding(OOC_SSA_Blocker__Loop preceeding, OOC_SSA_Blocker__Loop following) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Blocker__Preceeds pre;

          i0 = (OOC_INT32)preceeding;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l4;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__Preceeds.baseTypes[0]);
          pre = (OOC_SSA_Blocker__Preceeds)i1;
          *(OOC_INT32*)((_check_pointer(i1, 26797))+4) = i0;
          i0 = (OOC_INT32)following;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26869))+72);
          *(OOC_INT32*)(_check_pointer(i1, 26842)) = i2;
          *(OOC_INT32*)((_check_pointer(i0, 26906))+72) = i1;
l4:
          return;
          ;
        }


      i0 = (OOC_INT32)storeIn;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l24;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27041))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l24;
l5_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27103))+12);
      i1 = (OOC_INT32)endOfSearch;
      i2 = i0!=i1;
      instr = (OOC_SSA__Instr)i0;
      if (!i2) goto l18;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 27173))+36);
      i2 = i2==10;
      if (i2) goto l13;
      i2 = (OOC_INT32)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
      p = (OOC_SSA_Blocker__Proxy)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 28388))+28);
      i4 = (OOC_INT32)loop;
      i3 = i3!=i4;
      if (!i3) goto l18;
      *(OOC_INT32*)((_check_pointer(i2, 28438))+28) = i4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28556)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
      i2 = (OOC_INT32)preceedingLoop;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i4, (OOC_SSA__Result)i0, (OOC_SSA__Instr)i1, (OOC_SSA_Blocker__Loop)i2);
      goto l18;
l13:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27498)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
      loopEnd = (OOC_SSA__Instr)i0;
      i0 = (OOC_INT32)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
      p = (OOC_SSA_Blocker__Proxy)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27582)))), &_td_OOC_SSA_Blocker__LoopDesc, 27582);
      loopProxy = (OOC_SSA_Blocker__Loop)i0;
      i1 = (OOC_INT32)preceedingLoop;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure_RegisterPreceeding((OOC_SSA_Blocker__Loop)i1, (OOC_SSA_Blocker__Loop)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27689))+16);
      i1 = i1==(OOC_INT32)0;
      if (!i1) goto l18;
      i1 = (OOC_INT32)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
      dummy = (OOC_SSA_Blocker__Proxy)i1;
      i1 = (OOC_INT32)loop;
      i2 = (OOC_INT32)loopProxy;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27927)))), OOC_SSA_Blocker__LoopDesc_AppendLoop)),OOC_SSA_Blocker__LoopDesc_AppendLoop)((OOC_SSA_Blocker__Loop)i1, (OOC_SSA_Blocker__Loop)i2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28047)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
      i3 = (OOC_INT32)loopEnd;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i2, (OOC_SSA__Result)i0, (OOC_SSA__Instr)i3, (OOC_SSA_Blocker__Loop)(OOC_INT32)0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 28212)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i3);
      i3 = (OOC_INT32)endOfSearch;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i1, (OOC_SSA__Result)i0, (OOC_SSA__Instr)i3, (OOC_SSA_Blocker__Loop)i2);
l18:
      i0 = (OOC_INT32)use;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28716))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5_loop;
l24:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops(OOC_SSA_Blocker__Loop loop) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Blocker__Loop oldNested;
      OOC_SSA_Blocker__Loop nested;
      auto OOC_SSA_Blocker__Loop OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext(OOC_SSA_Blocker__Loop *list);
        
        OOC_SSA_Blocker__Loop OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext(OOC_SSA_Blocker__Loop *list) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Blocker__Preceeds ptr;
          OOC_SSA_Blocker__Loop best;

          i0 = (OOC_INT32)*list;
          _assert((i0!=(OOC_INT32)0), 127, 29199);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29283))+72);
          ptr = (OOC_SSA_Blocker__Preceeds)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l3;
          i2=OOC_FALSE;
          goto l5;
l3:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29332))+4);
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 29348))+76);
          
l5:
          if (!i2) goto l17;
l8_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29383));
          ptr = (OOC_SSA_Blocker__Preceeds)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l11;
          i2=OOC_FALSE;
          goto l13;
l11:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29332))+4);
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 29348))+76);
          
l13:
          if (i2) goto l8_loop;
l17:
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l20;
          i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext((void*)((_check_pointer(i0, 29599))+64));
          return (OOC_SSA_Blocker__Loop)i0;
          goto l21;
l20:
          best = (OOC_SSA_Blocker__Loop)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29486))+64);
          *list = (OOC_SSA_Blocker__Loop)i1;
          *(OOC_UINT8*)((_check_pointer(i0, 29512))+76) = OOC_TRUE;
          return (OOC_SSA_Blocker__Loop)i0;
l21:
          _failed_function(29094); return 0;
          ;
        }


      i0 = (OOC_INT32)loop;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29682))+60);
      oldNested = (OOC_SSA_Blocker__Loop)i1;
      *(OOC_INT32*)((_check_pointer(i0, 29707))+60) = (OOC_INT32)0;
      i0 = i1!=(OOC_INT32)0;
      if (!i0) goto l8;
l3_loop:
      i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext((void*)(OOC_INT32)&oldNested);
      nested = (OOC_SSA_Blocker__Loop)i0;
      i1 = (OOC_INT32)loop;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29814)))), OOC_SSA_Blocker__LoopDesc_AppendLoop)),OOC_SSA_Blocker__LoopDesc_AppendLoop)((OOC_SSA_Blocker__Loop)i1, (OOC_SSA_Blocker__Loop)i0);
      i0 = (OOC_INT32)oldNested;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop(OOC_SSA_Blocker__Loop loop) {
      register OOC_INT32 i0,i1,i2;
      auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA__Instr instr);
        
        OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA__Instr instr) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_SSA_Blocker__Proxy instrProxy;
          OOC_INT32 inLoopUse;
          OOC_SSA__Result res;
          OOC_SSA__Opnd use;
          OOC_SSA_Blocker__Proxy useProxy;

          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
          instrProxy = (OOC_SSA_Blocker__Proxy)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31563))+20);
          i3 = (OOC_INT32)loop;
          i2 = i2==i3;
          if (i2) goto l44;
          inLoopUse = 0;
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l5;
          i0=0;
          goto l36;
l5:
          i2=0;
l6_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31826))+12);
          use = (OOC_SSA__Opnd)i4;
          i5 = i4!=(OOC_INT32)0;
          if (!i5) goto l31;
          {register OOC_INT32 h0=i2;i2=i4;i4=h0;}
l10_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31908))+12);
          i5 = (OOC_INT32)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i5);
          i6 = i5==i3;
          useProxy = (OOC_SSA_Blocker__Proxy)i5;
          if (i6) goto l13;
          i5=OOC_FALSE;
          goto l19;
l13:
          i5 = *(OOC_INT8*)((_check_pointer(i2, 31977))+4);
          i5 = i5==13;
          if (i5) goto l16;
          i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32031)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i2);
          i5 = i5==2;
          
          goto l19;
l16:
          i5=OOC_TRUE;
l19:
          if (i5) goto l21;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32091))+12);
          i5 = OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop((OOC_SSA_Blocker__Loop)i3, (OOC_SSA__Instr)i5);
          
          goto l23;
l21:
          i5=OOC_TRUE;
l23:
          if (!i5) goto l26;
          i4 = i4+1;
          inLoopUse = i4;
          
l26:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32181))+16);
          use = (OOC_SSA__Opnd)i2;
          i5 = i2!=(OOC_INT32)0;
          if (i5) goto l10_loop;
l30:
          i2=i4;
l31:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32231));
          res = (OOC_SSA__Result)i0;
          i4 = i0!=(OOC_INT32)0;
          if (i4) goto l6_loop;
l35:
          i0=i2;
l36:
          *(OOC_INT32*)((_check_pointer(i1, 32281))+20) = i3;
          *(OOC_UINT8*)((_check_pointer(i1, 32327))+24) = (i0!=0);
          i0 = *(OOC_UINT8*)((_check_pointer(i1, 32386))+24);
          if (i0) goto l39;
          i0=OOC_FALSE;
          goto l41;
l39:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32415))+16);
          i0 = i0==(OOC_INT32)0;
          
l41:
          if (!i0) goto l43;
          *(OOC_INT32*)((_check_pointer(i1, 32602))+16) = i3;
l43:
          i0 = *(OOC_UINT8*)((_check_pointer(i1, 32665))+24);
          return i0;
          goto l45;
l44:
          i0 = *(OOC_UINT8*)((_check_pointer(i1, 31693))+24);
          return i0;
l45:
          _failed_function(30543); return 0;
          ;
        }


      i0 = (OOC_INT32)loop;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32785))+64);
      OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop((OOC_SSA_Blocker__Loop)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32824))+60);
      OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop((OOC_SSA_Blocker__Loop)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32856))+8);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32917))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32917))+8);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32924)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i2);
      i0 = OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop((OOC_SSA_Blocker__Loop)i0, (OOC_SSA__Instr)i1);
l6:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps(OOC_SSA_Blocker__Region r) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Blocker__Proxy proxy;
      OOC_SSA__Opnd opnd;
      auto void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd opnd);
        
        void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd opnd) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA_Blocker__Proxy argProxy;
          OOC_SSA_Blocker__Proxy a;
          OOC_SSA_Blocker__Proxy b;
          OOC_SSA_Blocker__Loop argLoop;
          OOC_SSA__Opnd exit;
          OOC_SSA__Instr exitInstr;

          i0 = (OOC_INT32)opnd;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 33291));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33296))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33303))+16);
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33310)))), &_td_OOC_SSA_Blocker__ProxyDesc, 33310);
          argProxy = (OOC_SSA_Blocker__Proxy)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33338))+12);
          i3 = (OOC_INT32)r;
          i2 = i2!=i3;
          if (!i2) goto l30;
          a = (OOC_SSA_Blocker__Proxy)i1;
          i2 = (OOC_INT32)proxy;
          b = (OOC_SSA_Blocker__Proxy)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33422))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33448))+12);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 33430))+56);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 33456))+56);
          i3 = i3>i4;
          if (i3) goto l5;
          i3=i1;
          goto l11;
l5:
          i3=i1;
l6_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33493))+12);
          a = (OOC_SSA_Blocker__Proxy)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33422))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33448))+12);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 33430))+56);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 33456))+56);
          i4 = i4>i5;
          if (i4) goto l6_loop;
l11:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33536))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33562))+12);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 33544))+56);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 33570))+56);
          i4 = i4>i5;
          if (!i4) goto l20;
l15_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33607))+12);
          b = (OOC_SSA_Blocker__Proxy)i2;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33536))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33562))+12);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 33544))+56);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 33570))+56);
          i4 = i4>i5;
          if (i4) goto l15_loop;
l20:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33650))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33662))+12);
          i4 = i4!=i5;
          if (!i4) goto l29;
          {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
l24_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33693))+12);
          a = (OOC_SSA_Blocker__Proxy)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33721))+12);
          b = (OOC_SSA_Blocker__Proxy)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33650))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33662))+12);
          i4 = i4!=i5;
          if (i4) goto l24_loop;
l28:
          {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
l29:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33757))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33757))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 33782))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 33764)))), OOC_SSA__InstrDesc_AddUniqueOpnd)),OOC_SSA__InstrDesc_AddUniqueOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 20);
l30:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33998))+16);
          i2 = i1!=(OOC_INT32)0;
          argLoop = (OOC_SSA_Blocker__Loop)i1;
          if (i2) goto l33;
          i2=OOC_FALSE;
          goto l35;
l33:
          i2 = (OOC_INT32)proxy;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34066))+12);
          i2 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i2);
          i2 = !i2;
          
l35:
          if (!i2) goto l53;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34106))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 34113))+36);
          _assert((i2==11), 127, 34091);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34166))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34166))+8);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34173)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i1, 2);
          exit = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l39;
          i2=OOC_FALSE;
          goto l41;
l39:
          i2 = *(OOC_INT8*)((_check_pointer(i1, 34224))+4);
          i2 = i2==11;
          
l41:
          if (!i2) goto l53;
l43_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34282));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34287))+8);
          exitInstr = (OOC_SSA__Instr)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 34325))+36);
          _assert((i3==9), 127, 34308);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 34386));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 34391))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34371)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 18);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 34455))+16);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34479)))), OOC_SSA__InstrDesc_LastOpnd)),OOC_SSA__InstrDesc_LastOpnd)((OOC_SSA__Instr)i2);
          OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep((OOC_SSA_Blocker__Proxy)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 34462)))), &_td_OOC_SSA_Blocker__ProxyDesc, 34462)), (OOC_SSA__Opnd)i2);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34518))+8);
          exit = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l46;
          i2=OOC_FALSE;
          goto l48;
l46:
          i2 = *(OOC_INT8*)((_check_pointer(i1, 34224))+4);
          i2 = i2==11;
          
l48:
          if (i2) goto l43_loop;
l53:
          return;
          ;
        }


      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34611))+48);
      i1 = i0!=(OOC_INT32)0;
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      if (!i1) goto l36;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34666))+8);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l28;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34706))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 34713))+36);
      switch (i1) {
      case 5:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34788))+8);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34795))+24);
        OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep((OOC_SSA_Blocker__Proxy)i0, (OOC_SSA__Opnd)i1);
        goto l28;
      case 8:
        goto l28;
      case 11:
        goto l28;
      default:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34961))+8);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34968))+24);
        opnd = (OOC_SSA__Opnd)i0;
        i1 = i0!=(OOC_INT32)0;
        if (i1) goto l13;
        i1=OOC_FALSE;
        goto l15;
l13:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 35018))+4);
        i1 = i1!=20;
        
l15:
        if (!i1) goto l28;
l17_loop:
        i1 = (OOC_INT32)proxy;
        OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep((OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Opnd)i0);
        i0 = (OOC_INT32)opnd;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35120))+8);
        opnd = (OOC_SSA__Opnd)i0;
        i1 = i0!=(OOC_INT32)0;
        if (i1) goto l20;
        i1=OOC_FALSE;
        goto l22;
l20:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 35018))+4);
        i1 = i1!=20;
        
l22:
        if (i1) goto l17_loop;
        goto l28;
      }
l28:
      i0 = (OOC_INT32)proxy;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35196)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (!i1) goto l31;
      OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps((OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35243)))), &_td_OOC_SSA_Blocker__RegionDesc, 35243)));
l31:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35288));
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l36:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse(OOC_SSA__Opnd use) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)use;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35655))+12);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 35662))+36);
      i1 = i1==8;
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35711))+12);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 35718))+36);
      i1 = i1==11;
      if (i1) goto l5;
      i0=OOC_FALSE;
      goto l8;
l5:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 35763))+4);
      i0 = i0==11;
      
      goto l8;
l7:
      i0=OOC_TRUE;
l8:
      return i0;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_UpdateDefs(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Instr defInstr;
      OOC_SSA_Blocker__Proxy pDef;

      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35946))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35953))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l14;
l3_loop:
      i1 = OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse((OOC_SSA__Opnd)i0);
      i1 = !i1;
      if (!i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36054));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36059))+8);
      defInstr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 36091))+20);
      *(OOC_INT32*)((_check_pointer(i1, 36091))+20) = (i2-1);
      i2 = *(OOC_INT32*)((_check_pointer(i1, 36124))+20);
      i2 = i2==0;
      if (!i2) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36171))+16);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36178)))), &_td_OOC_SSA_Blocker__ProxyDesc, 36178);
      pDef = (OOC_SSA_Blocker__Proxy)i1;
      i2 = (OOC_INT32)waiting;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36205)))), OOC_SSA_Blocker__RegionDesc_Remove)),OOC_SSA_Blocker__RegionDesc_Remove)((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
      i2 = (OOC_INT32)ready;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36239)))), OOC_SSA_Blocker__RegionDesc_Append)),OOC_SSA_Blocker__RegionDesc_Append)((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36304))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l14:
      return;
      ;
    }

    
    OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr loopEnd;
      OOC_SSA_Blocker__Region region;
      OOC_SSA__Result res;
      OOC_SSA__Opnd use;
      OOC_SSA_Blocker__Region useRegion;
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_Merge(OOC_SSA_Blocker__Region a, OOC_SSA_Blocker__Region b);
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_RegionOfUse(OOC_SSA__Opnd opnd);
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_CorrectForLoop(OOC_SSA_Blocker__Region region);
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_MoveLoopInvariants(OOC_SSA_Blocker__Region region);
        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_Merge(OOC_SSA_Blocker__Region a, OOC_SSA_Blocker__Region b) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)a;
          i1 = (OOC_INT32)b;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 37110))+56);
          i2 = *(OOC_INT32*)((_check_pointer(i1, 37128))+56);
          i0 = i0>i2;
          if (!i0) goto l7;
l2_loop:
          i0 = (OOC_INT32)a;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37163))+12);
          a = (OOC_SSA_Blocker__Region)i0;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 37110))+56);
          i2 = *(OOC_INT32*)((_check_pointer(i1, 37128))+56);
          i0 = i0>i2;
          if (i0) goto l2_loop;
l7:
          i0 = (OOC_INT32)a;
          i1 = *(OOC_INT32*)((_check_pointer(i1, 37202))+56);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 37220))+56);
          i1 = i1>i2;
          if (!i1) goto l14;
l9_loop:
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37255))+12);
          b = (OOC_SSA_Blocker__Region)i1;
          i1 = *(OOC_INT32*)((_check_pointer(i1, 37202))+56);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 37220))+56);
          i1 = i1>i2;
          if (i1) goto l9_loop;
l14:
          i1 = (OOC_INT32)b;
          i0 = i0!=i1;
          if (!i0) goto l21;
l16_loop:
          i0 = (OOC_INT32)a;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37319))+12);
          a = (OOC_SSA_Blocker__Region)i0;
          i1 = (OOC_INT32)b;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37345))+12);
          i0 = i0!=i1;
          b = (OOC_SSA_Blocker__Region)i1;
          if (i0) goto l16_loop;
l21:
          i0 = (OOC_INT32)a;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37381))+8);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l24;
          i1=OOC_FALSE;
          goto l26;
l24:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37400))+8);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 37407))+36);
          i1 = i1==5;
          
l26:
          if (!i1) goto l28;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37454))+12);
          a = (OOC_SSA_Blocker__Region)i0;
l28:
          i0 = (OOC_INT32)a;
          return (OOC_SSA_Blocker__Region)i0;
          ;
        }

        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_RegionOfUse(OOC_SSA__Opnd opnd) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Instr instr;
          OOC_INT32 i;
          OOC_INT32 pathNum;
          OOC_SSA_Blocker__Select selectProxy;

          i0 = (OOC_INT32)opnd;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37692))+12);
          instr = (OOC_SSA__Instr)i1;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 37718))+36);
          i2 = i2==5;
          if (i2) goto l7;
          i0 = *(OOC_INT8*)((_check_pointer(i1, 38264))+36);
          i0 = i0==11;
          if (i0) goto l5;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38367))+16);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38374)))), &_td_OOC_SSA_Blocker__ProxyDesc, 38374)), 38380))+12);
          return (OOC_SSA_Blocker__Region)i0;
          goto l19;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38318))+16);
          return (OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38325)))), &_td_OOC_SSA_Blocker__LoopDesc, 38325));
          goto l19;
l7:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37768)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i0);
          i3 = i2==0;
          i = i2;
          if (i3) goto l10;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37811)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
          
          goto l12;
l10:
          i0=OOC_TRUE;
l12:
          if (i0) goto l17;
          i0 = (i2-1)>>1;
          pathNum = i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37965))+16);
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37972)))), &_td_OOC_SSA_Blocker__SelectDesc, 37972);
          selectProxy = (OOC_SSA_Blocker__Select)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38008))+60);
          i2 = _check_pointer(i2, 38015);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 38015))*4);
          i2 = i2==(OOC_INT32)0;
          if (!i2) goto l16;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38062))+60);
          i2 = _check_pointer(i2, 38069);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i4 = (OOC_INT32)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)(OOC_INT32)0);
          *(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 38069))*4) = i4;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38145))+60);
          i2 = _check_pointer(i2, 38152);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 38152))*4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38124)))), OOC_SSA_Blocker__RegionDesc_Append)),OOC_SSA_Blocker__RegionDesc_Append)((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Proxy)i2);
l16:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38211))+60);
          i1 = _check_pointer(i1, 38218);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 38218))*4);
          return (OOC_SSA_Blocker__Region)i0;
          goto l19;
l17:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37859))+16);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37866)))), &_td_OOC_SSA_Blocker__ProxyDesc, 37866)), 37872))+12);
          return (OOC_SSA_Blocker__Region)i0;
l19:
          _failed_function(37527); return 0;
          ;
        }

        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_CorrectForLoop(OOC_SSA_Blocker__Region region) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA_Blocker__Loop loopProxy;
          OOC_SSA_Blocker__Proxy ptr;

          i0 = (OOC_INT32)p;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38571))+16);
          i1 = i0!=(OOC_INT32)0;
          loopProxy = (OOC_SSA_Blocker__Loop)i0;
          i2 = (OOC_INT32)region;
          if (!i1) goto l11;
l3_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38645))+12);
          i3 = i1==i2;
          ptr = (OOC_SSA_Blocker__Proxy)i1;
          if (!i3) goto l6;
          return (OOC_SSA_Blocker__Region)i0;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38765))+68);
          loopProxy = (OOC_SSA_Blocker__Loop)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l11:
          return (OOC_SSA_Blocker__Region)i2;
          ;
        }

        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_MoveLoopInvariants(OOC_SSA_Blocker__Region region) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA_Blocker__Region ptr;
          OOC_SSA_Blocker__Region lowerBound;
          OOC_SSA_Blocker__Loop lastLoop;

          i0 = (OOC_INT32)region;
          ptr = (OOC_SSA_Blocker__Region)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39037)))), &_td_OOC_SSA_Blocker__LoopDesc));
          
l5:
          if (!i1) goto l17;
l8_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39069))+12);
          ptr = (OOC_SSA_Blocker__Region)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l11;
          i1=OOC_FALSE;
          goto l13;
l11:
          i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39037)))), &_td_OOC_SSA_Blocker__LoopDesc));
          
l13:
          if (i1) goto l8_loop;
l17:
          i1 = (OOC_INT32)p;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39219))+16);
          lowerBound = (OOC_SSA_Blocker__Region)i2;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39245))+16);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l20;
          i1=i2;
          goto l21;
l20:
          i1 = (OOC_INT32)root;
          lowerBound = (OOC_SSA_Blocker__Region)i1;
          
l21:
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l24;
          i3=OOC_FALSE;
          goto l26;
l24:
          i3 = i0!=i1;
          
l26:
          if (!i3) goto l49;
          i3 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39537)))), &_td_OOC_SSA_Blocker__LoopDesc, 39537);
          lastLoop = (OOC_SSA_Blocker__Loop)i3;
          if (i2) goto l30;
          i2=OOC_FALSE;
          goto l32;
l30:
          i2 = i0!=i1;
          
l32:
          if (i2) goto l34;
          i0=i3;
          goto l48;
l34:
          i2=i3;
l35_loop:
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39616)))), &_td_OOC_SSA_Blocker__LoopDesc);
          if (!i3) goto l39;
          i2 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39660)))), &_td_OOC_SSA_Blocker__LoopDesc, 39660);
          lastLoop = (OOC_SSA_Blocker__Loop)i2;
          
l39:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39706))+12);
          ptr = (OOC_SSA_Blocker__Region)i0;
          i3 = i0!=(OOC_INT32)0;
          if (i3) goto l42;
          i3=OOC_FALSE;
          goto l44;
l42:
          i3 = i0!=i1;
          
l44:
          if (i3) goto l35_loop;
l47:
          i0=i2;
l48:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39877))+12);
          region = (OOC_SSA_Blocker__Region)i0;
l49:
          i0 = (OOC_INT32)region;
          return (OOC_SSA_Blocker__Region)i0;
          ;
        }


      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39975))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 39982))+36);
      i1 = i1==10;
      if (i1) goto l40;
      region = (OOC_SSA_Blocker__Region)(OOC_INT32)0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40255))+8);
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l32;
l5_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40313))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l27;
l8_loop:
      i1 = OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse((OOC_SSA__Opnd)i0);
      i1 = !i1;
      if (!i1) goto l22;
      i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_RegionOfUse((OOC_SSA__Opnd)i0);
      useRegion = (OOC_SSA_Blocker__Region)i0;
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40458))+16);
      i2 = i2==(OOC_INT32)0;
      if (i2) goto l13;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40509))+16);
      i1 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i0);
      
      goto l15;
l13:
      i1=OOC_TRUE;
l15:
      if (!i1) goto l22;
      i1 = (OOC_INT32)region;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l19;
      i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_Merge((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i0);
      region = (OOC_SSA_Blocker__Region)i0;
      
      goto l22;
l19:
      region = (OOC_SSA_Blocker__Region)i0;
      
l22:
      i0 = (OOC_INT32)use;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41047))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l8_loop;
l27:
      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 41093));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5_loop;
l32:
      i0 = (OOC_INT32)region;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41216)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (!i1) goto l41;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41292))+12);
      region = (OOC_SSA_Blocker__Region)i0;
      goto l41;
l38:
      i0 = (OOC_INT32)root;
      region = (OOC_SSA_Blocker__Region)i0;
      goto l41;
l40:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40144))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40144))+8);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40151)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
      loopEnd = (OOC_SSA__Instr)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40189))+16);
      return (OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40196)))), &_td_OOC_SSA_Blocker__RegionDesc, 40196));
l41:
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41338))+8);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 41345))+36);
      i0 = i0==74;
      if (i0) goto l44;
      i0 = (OOC_INT32)region;
      i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_CorrectForLoop((OOC_SSA_Blocker__Region)i0);
      i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_MoveLoopInvariants((OOC_SSA_Blocker__Region)i0);
      return (OOC_SSA_Blocker__Region)i0;
      goto l45;
l44:
      i0 = (OOC_INT32)region;
      return (OOC_SSA_Blocker__Region)i0;
l45:
      _failed_function(36360); return 0;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_SortRegion(OOC_SSA_Blocker__Region r) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Blocker__Proxy ready;
      OOC_SSA_Blocker__Proxy waiting;
      OOC_SSA_Blocker__Proxy proxy;
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy);
      auto OOC_INT32 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength(OOC_SSA_Blocker__Proxy proxy);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight(OOC_SSA_Blocker__Proxy *list);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CountLocalUses(OOC_SSA_Blocker__Proxy *head);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_UpdateUses(OOC_SSA__Instr instr);
      auto OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__ArrangeInstructions_SortRegion_NextInstr(OOC_SSA_Blocker__Proxy ready);
        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)proxy;
          i1 = (OOC_INT32)*list;
          *(OOC_INT32*)(_check_pointer(i0, 42064)) = i1;
          *list = (OOC_SSA_Blocker__Proxy)i0;
          return;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)*list;
          i1 = (OOC_INT32)proxy;
          i2 = i0==i1;
          if (i2) goto l3;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(_check_pointer(i0, 42292)), (OOC_SSA_Blocker__Proxy)i1);
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42244));
          *list = (OOC_SSA_Blocker__Proxy)i0;
l4:
          return;
          ;
        }

        
        OOC_INT32 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength(OOC_SSA_Blocker__Proxy proxy) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 l;
          OOC_SSA_Blocker__Proxy p;

          i0 = (OOC_INT32)proxy;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 42472))+36);
          i1 = i1<0;
          if (!i1) goto l21;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42511)))), &_td_OOC_SSA_Blocker__RegionDesc);
          if (i1) goto l10;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42730))+8);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 42737))+36);
          switch (i1) {
          case 6:
            l = 0;
            i1=0;
            goto l20;
          case 55:
            l = 20;
            i1=20;
            goto l20;
          default:
            l = 1;
            i1=1;
            goto l20;
          }
l10:
          l = 1;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42565))+48);
          i2 = i1!=(OOC_INT32)0;
          p = (OOC_SSA_Blocker__Proxy)i1;
          if (i2) goto l13;
          i1=1;
          goto l20;
l13:
          i2=i1;i1=1;
l14_loop:
          i3 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength((OOC_SSA_Blocker__Proxy)i2);
          i1 = i1+i3;
          l = i1;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 42663));
          p = (OOC_SSA_Blocker__Proxy)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l14_loop;
l20:
          *(OOC_INT32*)((_check_pointer(i0, 42912))+36) = i1;
l21:
          i0 = *(OOC_INT32*)((_check_pointer(i0, 42960))+36);
          return i0;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight(OOC_SSA_Blocker__Proxy *list) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_SSA_Blocker__Proxy ready;
          OOC_SSA_Blocker__Proxy waiting;
          OOC_SSA_Blocker__Proxy proxy;
          OOC_INT32 degreeDiff;
          OOC_SSA__Result res;
          OOC_SSA__Opnd opnd;
          OOC_SSA__Opnd use;
          OOC_INT32 max;
          OOC_SSA_Blocker__Proxy useProxy;
          OOC_SSA_Blocker__Proxy defProxy;
          auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister(OOC_SSA__Result arg);
            
            OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister(OOC_SSA__Result arg) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)arg;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 43293))+5);
              i1 = i1==0;
              if (i1) goto l7;
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43392)))), &_td_OOC_SSA__InstrDesc));
              if (i1) goto l5;
              i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43418)))), &_td_OOC_SSA__InstrDesc, 43418)), 43424)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43418)))), &_td_OOC_SSA__InstrDesc, 43418)));
              i0 = !i0;
              
              goto l6;
l5:
              i0=OOC_TRUE;
l6:
              return i0;
              goto l8;
l7:
              return OOC_FALSE;
l8:
              _failed_function(43218); return 0;
              ;
            }


          ready = (OOC_SSA_Blocker__Proxy)(OOC_INT32)0;
          i0 = (OOC_INT32)*list;
          i0 = i0!=(OOC_INT32)0;
          waiting = (OOC_SSA_Blocker__Proxy)(OOC_INT32)0;
          if (!i0) goto l60;
l3_loop:
          i0 = (OOC_INT32)*list;
          proxy = (OOC_SSA_Blocker__Proxy)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 43623));
          *list = (OOC_SSA_Blocker__Proxy)i1;
          degreeDiff = 0;
          useCount = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43719))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l51;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43825))+8);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l16;
l8_loop:
          i0 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister((OOC_SSA__Result)i0);
          if (!i0) goto l11;
          i0 = degreeDiff;
          degreeDiff = (i0+1);
l11:
          i0 = (OOC_INT32)res;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 43988));
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l8_loop;
l16:
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44044))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44051))+24);
          opnd = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l31;
l19_loop:
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44118)))), OOC_SSA__OpndDesc_IsValueOpndHere)),OOC_SSA__OpndDesc_IsValueOpndHere)((OOC_SSA__Opnd)i0);
          if (i1) goto l22;
          i0=OOC_FALSE;
          goto l24;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 44161));
          i0 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister((OOC_SSA__Result)i0);
          
l24:
          if (!i0) goto l26;
          i0 = degreeDiff;
          degreeDiff = (i0-1);
l26:
          i0 = (OOC_INT32)opnd;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44252))+8);
          opnd = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l19_loop;
l31:
          i0 = (OOC_INT32)proxy;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44384))+8);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l51;
          i1 = (OOC_INT32)r;
          
l34_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44450))+12);
          use = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (!i3) goto l45;
l37_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44519))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 44526))+16);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 44533)))), &_td_OOC_SSA_Blocker__ProxyDesc, 44533)), 44539))+12);
          i3 = i3==i1;
          if (!i3) goto l40;
          i3 = useCount;
          useCount = (i3+1);
l40:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44639))+16);
          use = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l37_loop;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 44693));
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l34_loop;
l51:
          i0 = (OOC_INT32)proxy;
          i1 = degreeDiff;
          *(OOC_INT32*)((_check_pointer(i0, 44754))+44) = i1;
          i1 = useCount;
          *(OOC_INT32*)((_check_pointer(i0, 44797))+32) = i1;
          i1 = i1==0;
          if (i1) goto l54;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT32)&waiting, (OOC_SSA_Blocker__Proxy)i0);
          goto l55;
l54:
          i1 = *(OOC_INT32*)((_check_pointer(i0, 44888))+36);
          *(OOC_INT32*)((_check_pointer(i0, 44869))+40) = i1;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT32)&ready, (OOC_SSA_Blocker__Proxy)i0);
l55:
          i0 = (OOC_INT32)*list;
          i0 = i0!=(OOC_INT32)0;
          if (i0) goto l3_loop;
l60:
          i0 = (OOC_INT32)ready;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l112;
l63_loop:
          i0 = (OOC_INT32)ready;
          proxy = (OOC_SSA_Blocker__Proxy)i0;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT32)&ready, (OOC_SSA_Blocker__Proxy)i0);
          max = 0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45138))+8);
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l66;
          i1=0;
          goto l107;
l66:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45182))+8);
          res = (OOC_SSA__Result)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l69;
          i1=0;
          goto l92;
l69:
          i2 = (OOC_INT32)r;
          i3=0;
l70_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45248))+12);
          use = (OOC_SSA__Opnd)i4;
          i5 = i4!=(OOC_INT32)0;
          if (!i5) goto l87;
          {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l74_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 45325))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 45332))+16);
          i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 45339)))), &_td_OOC_SSA_Blocker__ProxyDesc, 45339);
          useProxy = (OOC_SSA_Blocker__Proxy)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 45375))+12);
          i6 = i6==i2;
          if (i6) goto l77;
          i6=OOC_FALSE;
          goto l79;
l77:
          i6 = *(OOC_INT32*)((_check_pointer(i5, 45400))+40);
          i6 = i6>i4;
          
l79:
          if (!i6) goto l82;
          i4 = *(OOC_INT32*)((_check_pointer(i5, 45456))+40);
          max = i4;
          
l82:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 45515))+16);
          use = (OOC_SSA__Opnd)i3;
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l74_loop;
l86:
          i3=i4;
l87:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 45569));
          res = (OOC_SSA__Result)i1;
          i4 = i1!=(OOC_INT32)0;
          if (i4) goto l70_loop;
l91:
          i1=i3;
l92:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45642))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45649))+24);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (!i3) goto l107;
l95_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 45725));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 45730))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 45737))+16);
          i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45744)))), &_td_OOC_SSA_Blocker__ProxyDesc, 45744);
          defProxy = (OOC_SSA_Blocker__Proxy)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 45778))+12);
          i5 = (OOC_INT32)r;
          i4 = i4==i5;
          if (!i4) goto l101;
          i4 = *(OOC_INT32*)((_check_pointer(i3, 45826))+32);
          *(OOC_INT32*)((_check_pointer(i3, 45826))+32) = (i4-1);
          i4 = *(OOC_INT32*)((_check_pointer(i3, 45865))+32);
          i4 = i4==0;
          if (!i4) goto l101;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT32)&waiting, (OOC_SSA_Blocker__Proxy)i3);
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT32)&ready, (OOC_SSA_Blocker__Proxy)i3);
l101:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 46037))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l95_loop;
l107:
          i2 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength((OOC_SSA_Blocker__Proxy)i0);
          *(OOC_INT32*)((_check_pointer(i0, 46096))+40) = (i1+i2);
          i1 = (OOC_INT32)*list;
          *(OOC_INT32*)(_check_pointer(i0, 46149)) = i1;
          i1 = (OOC_INT32)ready;
          i1 = i1!=(OOC_INT32)0;
          *list = (OOC_SSA_Blocker__Proxy)i0;
          if (i1) goto l63_loop;
l112:
          i0 = (OOC_INT32)waiting;
          _assert((i0==(OOC_INT32)0), 127, 46216);
          return;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CountLocalUses(OOC_SSA_Blocker__Proxy *head) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA_Blocker__Proxy proxy;
          OOC_INT32 opndCount;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT32)*head;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l29;
l3_loop:
          i0 = (OOC_INT32)*head;
          proxy = (OOC_SSA_Blocker__Proxy)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 46493));
          *head = (OOC_SSA_Blocker__Proxy)i1;
          opndCount = 0;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46686))+8);
          i2 = i2!=(OOC_INT32)0;
          if (i2) goto l6;
          i2=0;
          goto l20;
l6:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46731))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 46738))+24);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l9;
          i2=0;
          goto l19;
l9:
          i3 = (OOC_INT32)r;
          i4=0;
l10_loop:
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 46806));
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 46811))+8);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 46818))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 46825)))), &_td_OOC_SSA_Blocker__ProxyDesc, 46825)), 46831))+12);
          i5 = i5==i3;
          if (!i5) goto l14;
          i4 = i4+1;
          opndCount = i4;
          
l14:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 46928))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i5 = i2!=(OOC_INT32)0;
          if (i5) goto l10_loop;
l18:
          i2=i4;
l19:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46974))+8);
          *(OOC_INT32*)((_check_pointer(i3, 46981))+20) = i2;
          
l20:
          i2 = i2==0;
          if (i2) goto l23;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47125))+8);
          _assert((i2!=(OOC_INT32)0), 127, 47112);
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT32)&waiting, (OOC_SSA_Blocker__Proxy)i0);
          goto l24;
l23:
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT32)&ready, (OOC_SSA_Blocker__Proxy)i0);
l24:
          i0 = i1!=(OOC_INT32)0;
          if (i0) goto l3_loop;
l29:
          return;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_UpdateUses(OOC_SSA__Instr instr) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result res;
          OOC_SSA__Opnd use;
          OOC_SSA_Blocker__Proxy useProxy;

          i0 = (OOC_INT32)instr;
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l22;
l3_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47444))+12);
          use = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l17;
l6_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47513))+12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47520))+16);
          i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47527)))), &_td_OOC_SSA_Blocker__ProxyDesc, 47527);
          useProxy = (OOC_SSA_Blocker__Proxy)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47559))+12);
          i4 = (OOC_INT32)r;
          i3 = i3==i4;
          if (!i3) goto l12;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47600))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47600))+12);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 47607))+20);
          *(OOC_INT32*)((_check_pointer(i3, 47607))+20) = (i4-1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47639))+12);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 47646))+20);
          i3 = i3==0;
          if (!i3) goto l12;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT32)&waiting, (OOC_SSA_Blocker__Proxy)i2);
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT32)&ready, (OOC_SSA_Blocker__Proxy)i2);
l12:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47806))+16);
          use = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l6_loop;
l17:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 47852));
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l22:
          return;
          ;
        }

        
        OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__ArrangeInstructions_SortRegion_NextInstr(OOC_SSA_Blocker__Proxy ready) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA_Blocker__Proxy best;

          i0 = (OOC_INT32)ready;
          best = (OOC_SSA_Blocker__Proxy)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 48037));
          i2 = i1!=(OOC_INT32)0;
          ready = (OOC_SSA_Blocker__Proxy)i1;
          if (!i2) goto l21;
          {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l4_loop:
          i2 = *(OOC_INT32*)((_check_pointer(i0, 48100))+40);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 48117))+40);
          i2 = i2>i3;
          if (i2) goto l11;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 48151))+40);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 48168))+40);
          i2 = i2==i3;
          if (i2) goto l9;
          i2=OOC_FALSE;
          goto l13;
l9:
          i2 = *(OOC_INT32*)((_check_pointer(i0, 48203))+44);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 48222))+44);
          i2 = i2<i3;
          
          goto l13;
l11:
          i2=OOC_TRUE;
l13:
          if (!i2) goto l16;
          best = (OOC_SSA_Blocker__Proxy)i0;
          i1=i0;
l16:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 48307));
          ready = (OOC_SSA_Blocker__Proxy)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l4_loop;
l20:
          i0=i1;
l21:
          return (OOC_SSA_Blocker__Proxy)i0;
          ;
        }


      ready = (OOC_SSA_Blocker__Proxy)(OOC_INT32)0;
      waiting = (OOC_SSA_Blocker__Proxy)(OOC_INT32)0;
      i0 = (OOC_INT32)r;
      *(OOC_INT32*)((_check_pointer(i0, 48691))+52) = (OOC_INT32)0;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight((void*)((_check_pointer(i0, 48730))+48));
      i0 = (OOC_INT32)r;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CountLocalUses((void*)((_check_pointer(i0, 48763))+48));
      i0 = (OOC_INT32)ready;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l8;
l3_loop:
      i0 = (OOC_INT32)ready;
      i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_SortRegion_NextInstr((OOC_SSA_Blocker__Proxy)i0);
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT32)&ready, (OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT32)proxy;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49020))+8);
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_UpdateUses((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)proxy;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49051))+12);
      i2 = (OOC_INT32)r;
      _assert((i1==i2), 127, 49038);
      *(OOC_INT32*)((_check_pointer(i0, 49079))+12) = (OOC_INT32)0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49105)))), OOC_SSA_Blocker__RegionDesc_Append)),OOC_SSA_Blocker__RegionDesc_Append)((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT32)ready;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l8:
      i0 = (OOC_INT32)waiting;
      _assert((i0==(OOC_INT32)0), 127, 49140);
      i0 = (OOC_INT32)r;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49181))+48);
      ready = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l11_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49237)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (!i1) goto l14;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion((OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49281)))), &_td_OOC_SSA_Blocker__RegionDesc, 49281)));
l14:
      i0 = (OOC_INT32)ready;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 49326));
      ready = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l11_loop;
l19:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_ClearRegion(OOC_SSA_Blocker__Region r) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Blocker__Proxy p;

      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49454))+48);
      i2 = i1!=(OOC_INT32)0;
      p = (OOC_SSA_Blocker__Proxy)i1;
      if (!i2) goto l15;
l3_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49502)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (i2) goto l6;
      *(OOC_INT32*)((_check_pointer(i1, 49651))+12) = (OOC_INT32)0;
      goto l10;
l6:
      OOC_SSA_Blocker__ArrangeInstructions_ClearRegion((OOC_SSA_Blocker__Region)i1);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49557))+12);
      i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49566)))), &_td_OOC_SSA_Blocker__SelectDesc));
      if (!i2) goto l10;
      *(OOC_INT32*)((_check_pointer(i1, 49595))+12) = (OOC_INT32)0;
l10:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 49695));
      p = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l15:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49732)))), &_td_OOC_SSA_Blocker__SelectDesc));
      if (!i1) goto l18;
      *(OOC_INT32*)((_check_pointer(i0, 49757))+48) = (OOC_INT32)0;
      *(OOC_INT32*)((_check_pointer(i0, 49782))+52) = (OOC_INT32)0;
l18:
      return;
      ;
    }


  i0 = (OOC_INT32)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50114)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50152)))), OOC_SSA__ProcBlockDesc_GetEnter)),OOC_SSA__ProcBlockDesc_GetEnter)((OOC_SSA__ProcBlock)i0);
  enter = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)OOC_SSA_Blocker__NewLoop((OOC_SSA__Instr)(OOC_INT32)0);
  mainLoop = (OOC_SSA_Blocker__Loop)i1;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50239)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i1, (OOC_SSA__Result)i0, (OOC_SSA__Instr)(OOC_INT32)0, (OOC_SSA_Blocker__Loop)(OOC_INT32)0);
  i0 = (OOC_INT32)mainLoop;
  OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops((OOC_SSA_Blocker__Loop)i0);
  i0 = (OOC_INT32)mainLoop;
  OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop((OOC_SSA_Blocker__Loop)i0);
l1_loop:
  i0 = (OOC_INT32)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)(OOC_INT32)0);
  ready = (OOC_SSA_Blocker__Region)i0;
  i0 = (OOC_INT32)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)(OOC_INT32)0);
  waiting = (OOC_SSA_Blocker__Region)i0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50668))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l32;
l4_loop:
  useCount = 0;
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l23;
l7_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50804))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l18;
l10_loop:
  i0 = OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse((OOC_SSA__Opnd)i0);
  i0 = !i0;
  if (!i0) goto l13;
  i0 = useCount;
  useCount = (i0+1);
l13:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50953))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l10_loop;
l18:
  i0 = (OOC_INT32)res;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 50999));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l7_loop;
l23:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = useCount;
  *(OOC_INT32*)((_check_pointer(i0, 51079))+20) = i2;
  i2 = i2==0;
  if (i2) goto l26;
  i2 = (OOC_INT32)waiting;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 51191)))), OOC_SSA_Blocker__RegionDesc_Append)),OOC_SSA_Blocker__RegionDesc_Append)((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
  goto l27;
l26:
  i2 = (OOC_INT32)ready;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 51147)))), OOC_SSA_Blocker__RegionDesc_Append)),OOC_SSA_Blocker__RegionDesc_Append)((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51240))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l4_loop;
l32:
  i0 = (OOC_INT32)ready;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51433))+48);
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l35;
  i2=OOC_FALSE;
  goto l37;
l35:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51468))+8);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 51475))+36);
  i2 = i2!=8;
  
l37:
  if (!i2) goto l49;
l40_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 51524));
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l43;
  i2=OOC_FALSE;
  goto l45;
l43:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51468))+8);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 51475))+36);
  i2 = i2!=8;
  
l45:
  if (i2) goto l40_loop;
l49:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51559)))), OOC_SSA_Blocker__RegionDesc_Remove)),OOC_SSA_Blocker__RegionDesc_Remove)((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1);
  root = (OOC_SSA_Blocker__Region)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51589)))), &_td_OOC_SSA_Blocker__RegionDesc, 51589));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51821))+48);
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l56;
l51_loop:
  i0 = (OOC_INT32)ready;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51857))+48);
  p = (OOC_SSA_Blocker__Proxy)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51879)))), OOC_SSA_Blocker__RegionDesc_Remove)),OOC_SSA_Blocker__RegionDesc_Remove)((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1);
  OOC_SSA_Blocker__ArrangeInstructions_UpdateDefs((OOC_SSA_Blocker__Proxy)i1);
  i0 = (OOC_INT32)p;
  i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions_GetRegion((OOC_SSA_Blocker__Proxy)i0);
  region = (OOC_SSA_Blocker__Region)i0;
  i1 = (OOC_INT32)p;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51973)))), OOC_SSA_Blocker__RegionDesc_Insert)),OOC_SSA_Blocker__RegionDesc_Insert)((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1);
  i0 = (OOC_INT32)ready;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51821))+48);
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l51_loop;
l56:
  i0 = (OOC_INT32)waiting;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52019))+48);
  _assert((i0==(OOC_INT32)0), 127, 52004);
  i0 = (OOC_INT32)root;
  OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps((OOC_SSA_Blocker__Region)i0);
  i0 = (OOC_INT32)root;
  OOC_SSA_Blocker__ArrangeInstructions_SortRegion((OOC_SSA_Blocker__Region)i0);
  i0 = markAntiDeps;
  if (i0) goto l59;
  i0=OOC_FALSE;
  goto l61;
l59:
  i0 = (OOC_INT32)root;
  i1 = (OOC_INT32)pb;
  i0 = OOC_SSA_Blocker__AntiDepViolation((OOC_SSA__ProcBlock)i1, (OOC_SSA_Blocker__Region)i0);
  
l61:
  if (!i0) goto l65;
  i0 = (OOC_INT32)pb;
  OOC_SSA_Blocker__RemoveRegionDeps((OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT32)root;
  OOC_SSA_Blocker__ArrangeInstructions_ClearRegion((OOC_SSA_Blocker__Region)i0);
  goto l1_loop;
l65:
  i0 = (OOC_INT32)root;
  return (OOC_SSA_Blocker__Region)i0;
  ;
}

OOC_SSA_Blocker__DependenceData OOC_SSA_Blocker__GetDependenceData(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Blocker__DependenceData dd;
  ADT_Dictionary__Dictionary proxyMap;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Blocker__DependenceData.baseTypes[0]);
  dd = (OOC_SSA_Blocker__DependenceData)i0;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i1, OOC_FALSE);
  *(OOC_INT32*)(_check_pointer(i0, 52794)) = i2;
  i2 = (OOC_INT32)ADT_Dictionary__New();
  proxyMap = (ADT_Dictionary__Dictionary)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52891))+8);
  i3 = i1!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i1;
  if (!i3) goto l8;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52964))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52945)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52971)))), &_td_OOC_SSA_Blocker__ProxyDesc, 52971)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53000))+28);
  instr = (OOC_SSA__Instr)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 53028))+4) = i2;
  return (OOC_SSA_Blocker__DependenceData)i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_Conflict(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object p;
  OOC_SSA_Blocker__Region a;
  OOC_SSA_Blocker__Region b;

  i0 = (OOC_INT32)dd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53232))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53232))+4);
  i3 = (OOC_INT32)x;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53242)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  p = (Object__Object)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53264)))), &_td_OOC_SSA_Blocker__ProxyDesc, 53264)), 53270))+12);
  a = (OOC_SSA_Blocker__Region)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53291))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53291))+4);
  i3 = (OOC_INT32)y;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53301)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  p = (Object__Object)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53323)))), &_td_OOC_SSA_Blocker__ProxyDesc, 53323)), 53329))+12);
  b = (OOC_SSA_Blocker__Region)i0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 53356))+56);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 53374))+56);
  i2 = i2>i3;
  if (!i2) goto l9;
l4_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53405))+12);
  a = (OOC_SSA_Blocker__Region)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 53356))+56);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 53374))+56);
  i2 = i2>i3;
  if (i2) goto l4_loop;
l9:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 53436))+56);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 53454))+56);
  i2 = i2>i3;
  if (!i2) goto l18;
l13_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53485))+12);
  b = (OOC_SSA_Blocker__Region)i0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 53436))+56);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 53454))+56);
  i2 = i2>i3;
  if (i2) goto l13_loop;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53516))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53528))+12);
  i2 = i2!=i3;
  if (i2) goto l21;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l27;
l21:
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l22_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53553))+12);
  a = (OOC_SSA_Blocker__Region)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53575))+12);
  b = (OOC_SSA_Blocker__Region)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53516))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53528))+12);
  i2 = i2!=i3;
  if (i2) goto l22_loop;
l27:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53607))+12);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l30;
  i2=OOC_FALSE;
  goto l32;
l30:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53627))+12);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53636)))), &_td_OOC_SSA_Blocker__SelectDesc);
  
l32:
  if (i2) goto l34;
  i0=OOC_FALSE;
  goto l35;
l34:
  i0 = i0!=i1;
  
l35:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_DependsOn(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT32 i0,i1,i2;
  ADT_Dictionary__Dictionary visited;
  auto OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult(OOC_SSA__Result res);
    
    OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)res;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l26;
l3_loop:
      i0 = (OOC_INT32)res;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54146))+12);
      use = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l21;
l6_loop:
      i2 = (OOC_INT32)visited;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54220))+12);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54207)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
      i2 = !i2;
      if (!i2) goto l16;
      i2 = (OOC_INT32)visited;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54263))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 54253)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3, (Object__Object)(OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54297))+12);
      i3 = (OOC_INT32)x;
      i2 = i2==i3;
      if (i2) goto l11;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54330))+12);
      i2 = OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult((OOC_SSA__Result)i2);
      
      goto l13;
l11:
      i2=OOC_TRUE;
l13:
      if (!i2) goto l16;
      return OOC_TRUE;
l16:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54423))+16);
      use = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l6_loop;
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54465));
      res = (OOC_SSA__Result)i0;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l26:
      return OOC_FALSE;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  i1 = (OOC_INT32)x;
  i2 = (OOC_INT32)y;
  i1 = i1!=i2;
  visited = (ADT_Dictionary__Dictionary)i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult((OOC_SSA__Result)i2);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_AvailableTo(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr xValue;
  OOC_SSA_Blocker__Loop xLoop;
  OOC_SSA__Opnd exit;

  i0 = (OOC_INT32)x;
  xValue = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55130))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55137)))), &_td_OOC_SSA_Blocker__ProxyDesc, 55137)), 55143))+16);
  i2 = i1!=(OOC_INT32)0;
  xLoop = (OOC_SSA_Blocker__Loop)i1;
  i3 = (OOC_INT32)y;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 55202))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55209)))), &_td_OOC_SSA_Blocker__ProxyDesc, 55209)), 55215))+12);
  i2 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i2);
  i2 = !i2;
  
l5:
  if (!i2) goto l36;
  i2 = (OOC_INT32)dd;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55247))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55247))+8);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 55254)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i5, 2);
  exit = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT32)0;
  if (i5) goto l11;
  i5=OOC_FALSE;
  goto l13;
l11:
  i5 = *(OOC_INT8*)((_check_pointer(i4, 55301))+4);
  i5 = i5==11;
  
l13:
  if (!i5) goto l27;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 55371));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 55376))+8);
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55344)))), OOC_SSA_Blocker__DependenceDataDesc_AvailableTo)),OOC_SSA_Blocker__DependenceDataDesc_AvailableTo)((OOC_SSA_Blocker__DependenceData)i2, (OOC_SSA__Instr)i1, (OOC_SSA__Instr)i5);
  i5 = !i5;
  if (!i5) goto l18;
  return OOC_FALSE;
l18:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 55574))+8);
  exit = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT32)0;
  if (i5) goto l21;
  i5=OOC_FALSE;
  goto l23;
l21:
  i5 = *(OOC_INT8*)((_check_pointer(i4, 55301))+4);
  i5 = i5==11;
  
l23:
  if (i5) goto l15_loop;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55618))+8);
  xValue = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55647))+16);
  xLoop = (OOC_SSA_Blocker__Loop)i0;
  i4 = i0!=(OOC_INT32)0;
  if (i4) goto l30;
  i4=OOC_FALSE;
  goto l32;
l30:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 55202))+16);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 55209)))), &_td_OOC_SSA_Blocker__ProxyDesc, 55209)), 55215))+12);
  i4 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Region)i4);
  i4 = !i4;
  
l32:
  if (i4) goto l8_loop;
l35:
  i0=i1;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55918))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 55942))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55925)))), &_td_OOC_SSA_Blocker__ProxyDesc, 55925)), 55931))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55949)))), &_td_OOC_SSA_Blocker__ProxyDesc, 55949)), 55955))+12);
  i1 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i2);
  if (i1) goto l39;
  i0=OOC_FALSE;
  goto l40;
l39:
  i1 = (OOC_INT32)dd;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55978)))), OOC_SSA_Blocker__DependenceDataDesc_DependsOn)),OOC_SSA_Blocker__DependenceDataDesc_DependsOn)((OOC_SSA_Blocker__DependenceData)i1, (OOC_SSA__Instr)i0, (OOC_SSA__Instr)i3);
  i0 = !i0;
  
l40:
  return i0;
  ;
}

void OOC_SSA_Blocker__Write(Channel__Channel c, OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i0, OOC_FALSE);
  i2 = (OOC_INT32)ADT_Dictionary__New();
  i3 = (OOC_INT32)c;
  OOC_SSA_Blocker__WriteBlocks((Channel__Channel)i3, (OOC_SSA__ProcBlock)i0, (OOC_SSA_Blocker__Region)i1, (ADT_Dictionary__Dictionary)i2);
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_SSA_Blocker__WriteMarker(Channel__Channel c, OOC_SSA__ProcBlock pb, ADT_Dictionary__Dictionary marker) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i0, OOC_FALSE);
  i2 = (OOC_INT32)c;
  i3 = (OOC_INT32)marker;
  OOC_SSA_Blocker__WriteBlocks((Channel__Channel)i2, (OOC_SSA__ProcBlock)i0, (OOC_SSA_Blocker__Region)i1, (ADT_Dictionary__Dictionary)i3);
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_OOC_SSA_Blocker_init(void) {

  return;
  ;
}

/* --- */
