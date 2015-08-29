#include <OOC/SSA/ConstProp.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_SSA__Const OOC_SSA_ConstProp__ComputeConst(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Const arg1;
  OOC_SSA__Const arg2;
  Object_Boxed__Object v;
  Object_BigInt__BigInt _i1;
  Object_BigInt__BigInt _i2;

  i0 = (OOC_INT32)instr;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1485)))), OOC_SSA__InstrDesc_SizeOpndList)),OOC_SSA__InstrDesc_SizeOpndList)((OOC_SSA__Instr)i0);
  i1 = i1>=2;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1523))+36);
  i1 = i1!=80;
  
l5:
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1570))+36);
  i1 = i1!=39;
  
l9:
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1611))+36);
  i1 = i1!=40;
  
l13:
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1654))+36);
  i1 = i1!=52;
  
l17:
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l21;
l19:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1692))+36);
  i1 = i1!=53;
  
l21:
  if (!i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1806))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1816));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1821))+16);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1832)))), &_td_OOC_SSA__ConstDesc, 1832);
  arg1 = (OOC_SSA__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1859))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1869))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 1879));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1884))+16);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1895)))), &_td_OOC_SSA__ConstDesc, 1895);
  arg2 = (OOC_SSA__Const)i2;
  v = (Object_Boxed__Object)(OOC_INT32)0;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 1941))+5);
  switch (i3) {
  case 1 ... 9:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2017))+44);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2024)))), &_td_Object_BigInt__BigIntDesc);
    if (i3) goto l27;
    i3=OOC_FALSE;
    goto l29;
l27:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2049))+44);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2056)))), &_td_Object_BigInt__BigIntDesc);
    
l29:
    if (i3) goto l31;
    i0=(OOC_INT32)0;
    goto l46;
l31:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2175))+44);
    i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2190)))), &_td_Object_BigInt__BigIntDesc, 2190);
    _i1 = (Object_BigInt__BigInt)i3;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2219))+44);
    i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2234)))), &_td_Object_BigInt__BigIntDesc, 2234);
    _i2 = (Object_BigInt__BigInt)i2;
    i0 = *(OOC_INT8*)((_check_pointer(i0, 2274))+36);
    switch (i0) {
    case 19:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2322)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i3, (Object_BigInt__BigInt)i2);
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 20:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2368)))), Object_BigInt__BigIntDesc_Sub)),Object_BigInt__BigIntDesc_Sub)((Object_BigInt__BigInt)i3, (Object_BigInt__BigInt)i2);
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 22:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2414)))), Object_BigInt__BigIntDesc_Mul)),Object_BigInt__BigIntDesc_Mul)((Object_BigInt__BigInt)i3, (Object_BigInt__BigInt)i2);
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 25:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2485)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i2);
      i0 = (OOC_INT32)Object_Boxed__NewBoolean((i0==0));
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 26:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2549)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i2);
      i0 = (OOC_INT32)Object_Boxed__NewBoolean((i0!=0));
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 28:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2613)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i2);
      i0 = (OOC_INT32)Object_Boxed__NewBoolean((i0<=0));
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 27:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2677)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i2);
      i0 = (OOC_INT32)Object_Boxed__NewBoolean((i0<0));
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 30:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2741)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i2);
      i0 = (OOC_INT32)Object_Boxed__NewBoolean((i0>=0));
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    case 29:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2805)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i2);
      i0 = (OOC_INT32)Object_Boxed__NewBoolean((i0>0));
      v = (Object_Boxed__Object)i0;
      
      goto l46;
    default:
      i0=(OOC_INT32)0;
      goto l46;
    }
    /* goto: unreachable */
  default:
    i0=(OOC_INT32)0;
    goto l46;
  }
l46:
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l54;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3434)))), &_td_Object_Boxed__BooleanDesc);
  if (i2) goto l51;
  i2 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3569))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3550)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SSA__Const)i0;
  goto l54;
l51:
  i1 = (OOC_INT32)pb;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3500)))), &_td_Object_Boxed__BooleanDesc, 3500)), 3508));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3476)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, i0);
  return (OOC_SSA__Const)i0;
l54:
  return (OOC_SSA__Const)(OOC_INT32)0;
  ;
}

void OOC_SSA_ConstProp__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Instr instr;
  OOC_SSA_ConstProp__Worklist worklist;
  auto void OOC_SSA_ConstProp__Transform_AddToWorklist(OOC_SSA__Instr instr);
  auto void OOC_SSA_ConstProp__Transform_SetInfo(OOC_SSA__Instr instr, OOC_SSA__Result info);
  auto void OOC_SSA_ConstProp__Transform_AddUsesToWorklist(OOC_SSA__Result res);
  auto void OOC_SSA_ConstProp__Transform_UpdateInfo(OOC_SSA__Instr instr, OOC_SSA__Result info);
  auto void OOC_SSA_ConstProp__Transform_ClassifyInstr(OOC_SSA__Instr instr);
    
    void OOC_SSA_ConstProp__Transform_AddToWorklist(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_ConstProp__Worklist wl;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 3902))+20);
      i1 = i1==0;
      if (!i1) goto l4;
      *(OOC_INT32*)((_check_pointer(i0, 3934))+20) = 1;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_ConstProp__Worklist.baseTypes[0]);
      wl = (OOC_SSA_ConstProp__Worklist)i1;
      i2 = (OOC_INT32)worklist;
      *(OOC_INT32*)(_check_pointer(i1, 3986)) = i2;
      *(OOC_INT32*)((_check_pointer(i1, 4016))+4) = i0;
      worklist = (OOC_SSA_ConstProp__Worklist)i1;
l4:
      return;
      ;
    }

    
    void OOC_SSA_ConstProp__Transform_SetInfo(OOC_SSA__Instr instr, OOC_SSA__Result info) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result res;

      i0 = (OOC_INT32)instr;
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l8;
      i1 = (OOC_INT32)info;
      
l3_loop:
      *(OOC_INT32*)((_check_pointer(i0, 4250))+16) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4284));
      res = (OOC_SSA__Result)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_ConstProp__Transform_AddUsesToWorklist(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr useInstr;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4458))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4519))+12);
      useInstr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4548))+16);
      i2 = i2==(OOC_INT32)0;
      if (!i2) goto l6;
      OOC_SSA_ConstProp__Transform_AddToWorklist((OOC_SSA__Instr)i1);
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4643))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l11:
      return;
      ;
    }

    
    void OOC_SSA_ConstProp__Transform_UpdateInfo(OOC_SSA__Instr instr, OOC_SSA__Result info) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result res;

      i0 = (OOC_INT32)instr;
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l8;
      i1 = (OOC_INT32)info;
      
l3_loop:
      *(OOC_INT32*)((_check_pointer(i0, 4855))+16) = i1;
      OOC_SSA_ConstProp__Transform_AddUsesToWorklist((OOC_SSA__Result)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4922));
      res = (OOC_SSA__Result)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_ConstProp__Transform_ClassifyInstr(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Result state;
      OOC_SSA__Result _const;
      auto OOC_SSA__Opnd OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath(OOC_SSA__Const expr, OOC_CHAR8 isSwitch, OOC_SSA__Opnd branch);
      auto void OOC_SSA_ConstProp__Transform_ClassifyInstr_ReplaceSelect(OOC_SSA__Instr select, OOC_SSA__Opnd branch);
        
        OOC_SSA__Opnd OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath(OOC_SSA__Const expr, OOC_CHAR8 isSwitch, OOC_SSA__Opnd branch) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          auto OOC_CHAR8 OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath_InLabelList(Object_Boxed__Object expr, OOC_SSA__Opnd opnd);
            
            OOC_CHAR8 OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath_InLabelList(Object_Boxed__Object expr, OOC_SSA__Opnd opnd) {
              register OOC_INT32 i0,i1,i2,i3;
              Object_Boxed__Object lower;
              Object_Boxed__Object upper;

              i0 = (OOC_INT32)opnd;
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l15;
              i0 = (OOC_INT32)expr;
l3_loop:
              i1 = (OOC_INT32)opnd;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5548));
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5558)))), &_td_OOC_SSA__ConstDesc, 5558)), 5564))+44);
              lower = (Object_Boxed__Object)i2;
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5598))+8);
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5608));
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5618)))), &_td_OOC_SSA__ConstDesc, 5618)), 5624))+44);
              upper = (Object_Boxed__Object)i3;
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5654)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i0);
              i2 = i2<=0;
              if (i2) goto l6;
              i2=OOC_FALSE;
              goto l8;
l6:
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5680)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i0, (Object__Object)i3);
              i2 = i2<=0;
              
l8:
              if (!i2) goto l10;
              return OOC_TRUE;
l10:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5773))+8);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5783))+8);
              opnd = (OOC_SSA__Opnd)i1;
              i1 = i1!=(OOC_INT32)0;
              if (i1) goto l3_loop;
l15:
              return OOC_FALSE;
              ;
            }


          i0 = isSwitch;
          if (i0) goto l22;
          i0 = (OOC_INT32)branch;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l7;
l5:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 6284))+4);
          i0 = i0==1;
          
l7:
          if (!i0) goto l21;
          i0 = (OOC_INT32)expr;
l9_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6326))+44);
          i2 = (OOC_INT32)branch;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6349));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6326))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6359)))), &_td_OOC_SSA__ConstDesc, 6359)), 6365))+44);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6333)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i4, (Object__Object)i3);
          if (!i1) goto l12;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6406))+8);
          return (OOC_SSA__Opnd)i1;
l12:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6463))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6473))+8);
          branch = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l15;
          i1=OOC_FALSE;
          goto l17;
l15:
          i1 = *(OOC_INT8*)((_check_pointer(i1, 6284))+4);
          i1 = i1==1;
          
l17:
          if (i1) goto l9_loop;
l21:
          _assert(OOC_FALSE, 127, 6510);
          goto l42;
l22:
          i0 = (OOC_INT32)branch;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l25;
          i0=OOC_FALSE;
          goto l27;
l25:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 5943))+4);
          i0 = i0==16;
          
l27:
          if (!i0) goto l41;
l29_loop:
          i0 = (OOC_INT32)expr;
          i1 = (OOC_INT32)branch;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6015));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6000))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6025)))), &_td_OOC_SSA__InstrDesc, 6025)), 6031))+24);
          i0 = OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath_InLabelList((Object_Boxed__Object)i0, (OOC_SSA__Opnd)i1);
          i1 = (OOC_INT32)branch;
          if (!i0) goto l32;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6075))+8);
          return (OOC_SSA__Opnd)i0;
l32:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6132))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6142))+8);
          branch = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l35;
          i0=OOC_FALSE;
          goto l37;
l35:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 5943))+4);
          i0 = i0==16;
          
l37:
          if (i0) goto l29_loop;
l41:
          i0 = (OOC_INT32)branch;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6192))+8);
          return (OOC_SSA__Opnd)i0;
l42:
          _failed_function(5168); return 0;
          ;
        }

        
        void OOC_SSA_ConstProp__Transform_ClassifyInstr_ReplaceSelect(OOC_SSA__Instr select, OOC_SSA__Opnd branch) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA__Result res;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT32)select;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6723));
          res = (OOC_SSA__Result)i0;
          i1 = (OOC_INT32)branch;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6755));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6760))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 6767))+36);
          i2 = i2==6;
          if (i2) goto l3;
          OOC_SSA_ConstProp__Transform_AddUsesToWorklist((OOC_SSA__Result)i0);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7299));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7278)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
          goto l12;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6938));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6943))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6950))+24);
          i2 = i0!=(OOC_INT32)0;
          opnd = (OOC_SSA__Opnd)i1;
          if (!i2) goto l12;
l6_loop:
          OOC_SSA_ConstProp__Transform_AddUsesToWorklist((OOC_SSA__Result)i0);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7064));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7045)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i2);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7094));
          res = (OOC_SSA__Result)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7132))+8);
          opnd = (OOC_SSA__Opnd)i1;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l6_loop;
l12:
          return;
          ;
        }


      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7376))+36);
      switch (i1) {
      case 6:
      case 5:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7567))+24);
        opnd = (OOC_SSA__Opnd)i1;
        i2 = i1!=(OOC_INT32)0;
        if (i2) goto l5;
        i2=OOC_FALSE;
        goto l7;
l5:
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7613));
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7618))+16);
        i2 = i2!=(OOC_INT32)0;
        
l7:
        if (!i2) goto l19;
l10_loop:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7666))+8);
        opnd = (OOC_SSA__Opnd)i1;
        i2 = i1!=(OOC_INT32)0;
        if (i2) goto l13;
        i2=OOC_FALSE;
        goto l15;
l13:
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7613));
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7618))+16);
        i2 = i2!=(OOC_INT32)0;
        
l15:
        if (i2) goto l10_loop;
l19:
        i1 = i1==(OOC_INT32)0;
        if (!i1) goto l57;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7790))+12);
        _assert((i1==(OOC_INT32)0), 127, 7777);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7831));
        i1 = *(OOC_INT8*)((_check_pointer(i1, 7843))+4);
        _assert((i1==2), 127, 7818);
        i1 = *(OOC_INT8*)((_check_pointer(i0, 7887))+36);
        i1 = i1==5;
        if (i1) goto l24;
        i1=OOC_FALSE;
        goto l26;
l24:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7934))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7944));
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7949))+16);
        i2 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        i1 = i1!=i2;
        
l26:
        if (i1) goto l28;
        i1 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        OOC_SSA_ConstProp__Transform_UpdateInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
        goto l57;
l28:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8184))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8194));
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8199))+16);
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8263)))), OOC_SSA__InstrDesc_IsSwitchStatm)),OOC_SSA__InstrDesc_IsSwitchStatm)((OOC_SSA__Instr)i0);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8327))+24);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8337))+8);
        i1 = (OOC_INT32)OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath((OOC_SSA__Const)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8210)))), &_td_OOC_SSA__ConstDesc, 8210)), i2, (OOC_SSA__Opnd)i3);
        OOC_SSA_ConstProp__Transform_ClassifyInstr_ReplaceSelect((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l57;
      default:
        state = (OOC_SSA__Result)i0;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8582))+24);
        opnd = (OOC_SSA__Opnd)i1;
        i2 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        i3=i0;
l32_loop:
        i4 = i1==(OOC_INT32)0;
        if (i4) goto l44;
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8677));
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8682))+16);
        i4 = i4==(OOC_INT32)0;
        if (i4) goto l41;
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8766));
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8771))+16);
        i4 = i4==i2;
        if (i4) goto l40;
        goto l43;
l40:
        state = (OOC_SSA__Result)i2;
        i1=i2;
        goto l45;
l41:
        state = (OOC_SSA__Result)(OOC_INT32)0;
        i3=(OOC_INT32)0;
l43:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8887))+8);
        opnd = (OOC_SSA__Opnd)i1;
        
        goto l32_loop;
l44:
        i1=i3;
l45:
        i3 = i1==i0;
        if (i3) goto l51;
        i1 = i1==i2;
        if (!i1) goto l57;
        OOC_SSA_ConstProp__Transform_UpdateInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2);
        goto l57;
l51:
        i1 = (OOC_INT32)pb;
        i1 = (OOC_INT32)OOC_SSA_ConstProp__ComputeConst((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
        _const = (OOC_SSA__Result)i1;
        i2 = i1==(OOC_INT32)0;
        if (i2) goto l54;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9223));
        _assert((i2==(OOC_INT32)0), 127, 9210);
        OOC_SSA_ConstProp__Transform_UpdateInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
        goto l57;
l54:
        i1 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        OOC_SSA_ConstProp__Transform_UpdateInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
        goto l57;
      }
l57:
      return;
      ;
    }


  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9785))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l24;
l3_loop:
  *(OOC_INT32*)((_check_pointer(i0, 9836))+20) = 0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9868)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l6;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9891))+36);
  i1 = i1==81;
  
  goto l8;
l6:
  i1=OOC_TRUE;
l8:
  if (i1) goto l18;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10012))+36);
  i1 = i1!=5;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10046)))), OOC_SSA__InstrDesc_GetArgStore)),OOC_SSA__InstrDesc_GetArgStore)((OOC_SSA__Instr)i0);
  i1 = i1!=(OOC_INT32)0;
  
l14:
  if (i1) goto l16;
  OOC_SSA_ConstProp__Transform_SetInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)(OOC_INT32)0);
  goto l19;
l16:
  i1 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
  OOC_SSA_ConstProp__Transform_SetInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
  goto l19;
l18:
  *(OOC_INT32*)((_check_pointer(i0, 9935))+16) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9973));
  _assert((i0==(OOC_INT32)0), 127, 9960);
l19:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10465))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l24:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10501));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10515))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10525));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10530))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10537))+36);
  _assert((i1==4), 127, 10491);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10578));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10592))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10602));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10607))+8);
  i1 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
  OOC_SSA_ConstProp__Transform_SetInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
  worklist = (OOC_SSA_ConstProp__Worklist)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10714))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l39;
l27_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10769))+16);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l30;
  i1=OOC_FALSE;
  goto l32;
l30:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 10800))+20);
  i1 = i1==0;
  
l32:
  if (!i1) goto l34;
  OOC_SSA_ConstProp__Transform_ClassifyInstr((OOC_SSA__Instr)i0);
l34:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11027))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l27_loop;
l39:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l47;
l42_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11144))+4);
  instr = (OOC_SSA__Instr)i1;
  *(OOC_INT32*)((_check_pointer(i1, 11164))+20) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11205));
  worklist = (OOC_SSA_ConstProp__Worklist)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11232))+16);
  _assert((i0==(OOC_INT32)0), 127, 11219);
  OOC_SSA_ConstProp__Transform_ClassifyInstr((OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l42_loop;
l47:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11380))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l66;
l50_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11435))+16);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l53;
  i2=OOC_FALSE;
  goto l55;
l53:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11475))+16);
  i3 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
  i2 = i2!=i3;
  
l55:
  if (i2) goto l57;
  i2=OOC_FALSE;
  goto l59;
l57:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11514))+16);
  i2 = i2!=i1;
  
l59:
  if (!i2) goto l61;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11568))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11548)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11579)))), &_td_OOC_SSA__ResultDesc, 11579)));
l61:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11620))+28);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l50_loop;
l66:
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_OOC_SSA_ConstProp_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)(OOC_INT32)0, -1, -1);
  OOC_SSA_ConstProp__notConstant = (OOC_SSA__Result)i0;
  return;
  ;
}

/* --- */
