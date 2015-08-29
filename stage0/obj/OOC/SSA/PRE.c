#include <OOC/SSA/PRE.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_SSA__Instr OOC_SSA_PRE__GetSelect(OOC_SSA__Instr collect) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)collect;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1523)))), OOC_SSA__InstrDesc_GetCollectTarget)),OOC_SSA__InstrDesc_GetCollectTarget)((OOC_SSA__Instr)i0);
  instr = (OOC_SSA__Instr)i1;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 1558))+36);
  switch (i2) {
  case 5:
    return (OOC_SSA__Instr)i1;
    goto l9;
  case 10:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1649))+24);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 1658));
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1662))+8);
    i0 = i2==i0;
    if (i0) goto l6;
    return (OOC_SSA__Instr)i1;
    goto l9;
l6:
    return (OOC_SSA__Instr)0;
    goto l9;
  default:
    return (OOC_SSA__Instr)0;
    goto l9;
  }
l9:
  _failed_function(1425); return 0;
  ;
}

static OOC_SSA__Instr OOC_SSA_PRE__GetNoop(OOC_SSA__ProcBlock pb, OOC_SSA__Result storeOut) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd use;
  OOC_SSA__Instr noop;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)storeOut;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1968))+4);
  _assert((i1==2), 127, 1953);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2011))+12);
  use = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l11;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2059))+12);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 2065))+36);
  i2 = i2==86;
  if (!i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2111))+12);
  return (OOC_SSA__Instr)i2;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2146))+16);
  use = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l11:
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2184)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 86, 0);
  noop = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2238)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
  res = (OOC_SSA__Result)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2276)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2303)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 2);
  return (OOC_SSA__Instr)i1;
  ;
}

void OOC_SSA_PRE__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_Blocker__DependenceData dd;
  ADT_ArrayList__ArrayList worklist;
  ADT_ArrayList__ArrayList equivList;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr select;
  OOC_SSA__Opnd opnd;
  ADT_Dictionary__Dictionary equivToCollect;
  OOC_SSA__Instr enter;
  OOC_INT32 i;
  OOC_SSA__Instr h;
  auto void OOC_SSA_PRE__Transform_MigrateCandidates(OOC_SSA__Opnd collectOpnd, OOC_SSA__Instr undefValue);
  auto void OOC_SSA_PRE__Transform_ResolveEquiv(OOC_SSA__Instr equiv);
  auto OOC_CHAR8 OOC_SSA_PRE__Transform_OnlyUsedInEquiv(OOC_SSA__Result res);
    
    void OOC_SSA_PRE__Transform_MigrateCandidates(OOC_SSA__Opnd collectOpnd, OOC_SSA__Instr undefValue) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_SSA__Instr collect;
      OOC_SSA__Instr select;
      OOC_SSA__Instr anchor;
      OOC_SSA__Instr domReference;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr instr;
      OOC_SSA__Instr _new;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Result res;
      OOC_SSA__Instr sameInstr;
      OOC_SSA__Result selectResult;
      OOC_INT32 i;
      OOC_SSA__Instr c;
      OOC_SSA__Instr equiv;
      auto OOC_CHAR8 OOC_SSA_PRE__Transform_MigrateCandidates_Dominates(OOC_SSA__Result res, OOC_SSA__Instr instr);
      auto OOC_SSA__Result OOC_SSA_PRE__Transform_MigrateCandidates_GetSelectResult(OOC_SSA__Instr select, OOC_SSA__Instr collect, OOC_SSA__Result arg);
        
        OOC_CHAR8 OOC_SSA_PRE__Transform_MigrateCandidates_Dominates(OOC_SSA__Result res, OOC_SSA__Instr instr) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)dd;
          i1 = (OOC_INT32)res;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3033))+8);
          i2 = (OOC_INT32)instr;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3019)))), OOC_SSA_Blocker__DependenceDataDesc_Dominates)),OOC_SSA_Blocker__DependenceDataDesc_Dominates)((OOC_SSA_Blocker__DependenceData)i0, (OOC_SSA__Instr)i1, (OOC_SSA__Instr)i2);
          return i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_PRE__Transform_MigrateCandidates_GetSelectResult(OOC_SSA__Instr select, OOC_SSA__Instr collect, OOC_SSA__Result arg) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Opnd opnd;
          OOC_SSA__Result res;
          OOC_SSA__Opnd use;

          i0 = (OOC_INT32)collect;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3292))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3301))+8);
          opnd = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l3;
          i2=0u;
          goto l5;
l3:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3346));
          i3 = (OOC_INT32)arg;
          i2 = i2!=i3;
          
l5:
          if (!i2) goto l17;
          i2 = (OOC_INT32)arg;
          
l8_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3383))+8);
          opnd = (OOC_SSA__Opnd)i1;
          i3 = i1!=(OOC_INT32)0;
          if (i3) goto l11;
          i3=0u;
          goto l13;
l11:
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3346));
          i3 = i3!=i2;
          
l13:
          if (i3) goto l8_loop;
l17:
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l39;
          i2 = (OOC_INT32)select;
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3509)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3494)))), OOC_SSA__InstrDesc_NthResult)),OOC_SSA__InstrDesc_NthResult)((OOC_SSA__Instr)i2, (i1+1));
          res = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3546))+12);
          use = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (!i3) goto l38;
l22_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3606))+12);
          i3 = *(OOC_INT8*)((_check_pointer(i3, 3612))+36);
          i3 = i3==85;
          if (i3) goto l25;
          i3=0u;
          goto l27;
l25:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3660))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3666))+24);
          i3 = i3==i2;
          
l27:
          if (i3) goto l29;
          i3=0u;
          goto l31;
l29:
          i3 = (OOC_INT32)equivToCollect;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3723))+12);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3715)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
          i3 = i3==i0;
          
l31:
          if (!i3) goto l33;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3984))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3984))+12);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3990)))), OOC_SSA__InstrDesc_NthArg)),OOC_SSA__InstrDesc_NthArg)((OOC_SSA__Instr)i4, 1);
          return (OOC_SSA__Result)i3;
l33:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4041))+16);
          use = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l22_loop;
l38:
          return (OOC_SSA__Result)i1;
          goto l40;
l39:
          return (OOC_SSA__Result)(OOC_INT32)0;
l40:
          _failed_function(3089); return 0;
          ;
        }


      i0 = (OOC_INT32)collectOpnd;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4171))+12);
      collect = (OOC_SSA__Instr)i1;
      i1 = (OOC_INT32)OOC_SSA_PRE__GetSelect((OOC_SSA__Instr)i1);
      select = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4249));
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_PRE__GetNoop((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2);
      anchor = (OOC_SSA__Instr)i2;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 4279))+36);
      i2 = i2==10;
      if (i2) goto l3;
      domReference = (OOC_SSA__Instr)i1;
      goto l4;
l3:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4342)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i1);
      domReference = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)dd;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4375)))), OOC_SSA_Blocker__DependenceDataDesc_Dominates)),OOC_SSA_Blocker__DependenceDataDesc_Dominates)((OOC_SSA_Blocker__DependenceData)i3, (OOC_SSA__Instr)i1, (OOC_SSA__Instr)i2);
      _assert((!i1), 127, 4365);
l4:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4495));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4499))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (!i1) goto l70;
l7_loop:
      i1 = (OOC_INT32)dd;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4573))+12);
      i3 = (OOC_INT32)collect;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4549)))), OOC_SSA_Blocker__DependenceDataDesc_SameRegion)),OOC_SSA_Blocker__DependenceDataDesc_SameRegion)((OOC_SSA_Blocker__DependenceData)i1, (OOC_SSA__Instr)i3, (OOC_SSA__Instr)i2);
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4598))+12);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 4604))+36);
      i1 = i1!=84;
      
l12:
      if (i1) goto l14;
      i1=0u;
      goto l16;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4645))+12);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 4651))+36);
      i1 = i1!=85;
      
l16:
      if (i1) goto l18;
      i1=0u;
      goto l20;
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4695))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4701));
      i1 = i1==0;
      
l20:
      if (i1) goto l22;
      i1=0u;
      goto l24;
l22:
      i1 = (OOC_INT32)dd;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4796))+12);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4773)))), OOC_SSA_Blocker__DependenceDataDesc_Dominates)),OOC_SSA_Blocker__DependenceDataDesc_Dominates)((OOC_SSA_Blocker__DependenceData)i1, (OOC_SSA__Instr)i3, (OOC_SSA__Instr)i2);
      
l24:
      if (!i1) goto l65;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4861))+12);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)pb;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 4904))+36);
      i3 = *(OOC_INT8*)((_check_pointer(i0, 4918))+5);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4889)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i2, i3);
      _new = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4953))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (!i1) goto l45;
l28_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5052));
      i1 = (OOC_INT32)select;
      i2 = (OOC_INT32)collect;
      i0 = (OOC_INT32)OOC_SSA_PRE__Transform_MigrateCandidates_GetSelectResult((OOC_SSA__Instr)i1, (OOC_SSA__Instr)i2, (OOC_SSA__Result)i0);
      res = (OOC_SSA__Result)i0;
      i1 = i0!=0;
      if (i1) goto l39;
      i0 = (OOC_INT32)opnd;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5195));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5199))+16);
      i1 = i1==0;
      if (i1) goto l33;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5283));
      i1 = (OOC_INT32)domReference;
      i0 = OOC_SSA_PRE__Transform_MigrateCandidates_Dominates((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
      i0 = !i0;
      
      goto l35;
l33:
      i0=1u;
l35:
      if (i0) goto l37;
      i0 = (OOC_INT32)_new;
      i1 = (OOC_INT32)opnd;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 5525))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5515));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5502)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5560))+8);
      opnd = (OOC_SSA__Opnd)i0;
      
      goto l40;
l37:
      i0 = (OOC_INT32)_new;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5332))+12);
      _assert((i1==0), 127, 5322);
      i1 = (OOC_INT32)pb;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5365)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
      _new = (OOC_SSA__Instr)0;
      opnd = (OOC_SSA__Opnd)0;
      i0=0;
      goto l40;
l39:
      i1 = (OOC_INT32)_new;
      i2 = (OOC_INT32)opnd;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 5126))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5108)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, i3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5161))+8);
      opnd = (OOC_SSA__Opnd)i0;
      
l40:
      i1 = i0!=0;
      if (i1) goto l28_loop;
l45:
      i0 = (OOC_INT32)_new;
      i1 = i0!=0;
      if (!i1) goto l65;
      i1 = (OOC_INT32)dd;
      i2 = (OOC_INT32)select;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5802)))), OOC_SSA_Blocker__DependenceDataDesc_GetSameInstr)),OOC_SSA_Blocker__DependenceDataDesc_GetSameInstr)((OOC_SSA_Blocker__DependenceData)i1, (OOC_SSA__Instr)i2, (OOC_SSA__Instr)i0);
      sameInstr = (OOC_SSA__Instr)i1;
      i3 = i1!=0;
      if (i3) goto l50;
      i1 = (OOC_INT32)dd;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6048)))), OOC_SSA_Blocker__DependenceDataDesc_SetRegion)),OOC_SSA_Blocker__DependenceDataDesc_SetRegion)((OOC_SSA_Blocker__DependenceData)i1, (OOC_SSA__Instr)i2, (OOC_SSA__Instr)i0);
      goto l51;
l50:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5931))+12);
      _assert((i3==0), 127, 5921);
      i3 = (OOC_INT32)pb;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5964)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i0);
      _new = (OOC_SSA__Instr)i1;
l51:
      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 6234))+5);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6137)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i2, 14, i1);
      selectResult = (OOC_SSA__Result)i1;
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6278)))), OOC_SSA__InstrDesc_NumberOfPaths)),OOC_SSA__InstrDesc_NumberOfPaths)((OOC_SSA__Instr)i2);
      i = 0;
      i4 = (OOC_INT32)collect;
      i5 = 0<i3;
      if (!i5) goto l63;
      i5 = (OOC_INT32)undefValue;
      i6=0;
l54_loop:
      i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6325)))), OOC_SSA__InstrDesc_GetCollect)),OOC_SSA__InstrDesc_GetCollect)((OOC_SSA__Instr)i2, (OOC_SSA__ProcBlock)0, i6);
      c = (OOC_SSA__Instr)i7;
      i8 = i7==i4;
      if (i8) goto l57;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6488)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i7, (OOC_SSA__Result)i5, 1);
      goto l58;
l57:
      i7 = (OOC_INT32)worklist;
      i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6421)))), OOC_SSA__InstrDesc_AddOpndFct)),OOC_SSA__InstrDesc_AddOpndFct)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 6406)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i7, (Object__Object)i8);
l58:
      i6 = i6+1;
      i = i6;
      i7 = i6<i3;
      if (i7) goto l54_loop;
l63:
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6592)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 85, 0);
      equiv = (OOC_SSA__Instr)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6652)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)_new;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6703)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i2 = (OOC_INT32)equivToCollect;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6754)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i4);
      i2 = (OOC_INT32)dd;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6790)))), OOC_SSA_Blocker__DependenceDataDesc_SetRegion)),OOC_SSA_Blocker__DependenceDataDesc_SetRegion)((OOC_SSA_Blocker__DependenceData)i2, (OOC_SSA__Instr)i1, (OOC_SSA__Instr)i0);
      i1 = (OOC_INT32)anchor;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6832)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i1 = (OOC_INT32)equivList;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6893)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
l65:
      i0 = (OOC_INT32)use;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6955))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (i1) goto l7_loop;
l70:
      return;
      ;
    }

    
    void OOC_SSA_PRE__Transform_ResolveEquiv(OOC_SSA__Instr equiv) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
      Object__Object obj;
      OOC_SSA__Instr collect;
      OOC_SSA__Instr select;
      OOC_SSA__Result res;
      OOC_SSA__Instr old;
      OOC_INT32 resultIndex;
      OOC_INT32 i;
      OOC_SSA__Instr c;
      OOC_SSA__Instr _new;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Opnd h;
      OOC_SSA__Instr sameInstr;

      i0 = (OOC_INT32)equiv;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7247))+36);
      _assert((i1==85), 127, 7235);
      i1 = (OOC_INT32)equivToCollect;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7303)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      obj = (Object__Object)i1;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7341)))), &_td_OOC_SSA__InstrDesc, 7341);
      collect = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)OOC_SSA_PRE__GetSelect((OOC_SSA__Instr)i1);
      select = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7403))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7412))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7421));
      res = (OOC_SSA__Result)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7443))+8);
      old = (OOC_SSA__Instr)i4;
      i5 = i4==i2;
      if (i5) goto l30;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7781))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7790));
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7781))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 7790));
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7794)))), OOC_SSA__ResultDesc_ResultIndex)),OOC_SSA__ResultDesc_ResultIndex)((OOC_SSA__Result)i5);
      resultIndex = i3;
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7839)))), OOC_SSA__InstrDesc_NumberOfPaths)),OOC_SSA__InstrDesc_NumberOfPaths)((OOC_SSA__Instr)i2);
      i = 0;
      i6 = 0<i5;
      if (!i6) goto l29;
      i3 = i3-1;
      i6=0;
l5_loop:
      i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7882)))), OOC_SSA__InstrDesc_GetCollect)),OOC_SSA__InstrDesc_GetCollect)((OOC_SSA__Instr)i2, (OOC_SSA__ProcBlock)0, i6);
      c = (OOC_SSA__Instr)i7;
      i8 = *(OOC_INT8*)((_check_pointer(i7, 7921))+36);
      _assert((i8==6), 127, 7913);
      i8 = i7!=i1;
      if (!i8) goto l24;
      i8 = (OOC_INT32)pb;
      i9 = *(OOC_INT8*)((_check_pointer(i4, 8025))+36);
      i10 = *(OOC_INT8*)((_check_pointer(i4, 8037))+5);
      i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 8012)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i8, i9, i10);
      _new = (OOC_SSA__Instr)i8;
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8072))+24);
      opnd = (OOC_SSA__Opnd)i9;
      i10 = i9!=0;
      if (!i10) goto l19;
l10_loop:
      i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i9, 8139));
      i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 8143))+8);
      i10 = i10==i2;
      if (i10) goto l13;
      i10 = *(OOC_INT8*)((_check_pointer(i9, 8332))+4);
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i9, 8322));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 8309)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i11, i10);
      goto l14;
l13:
      i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i9, 8200));
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i9, 8200));
      i10 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 8204)))), OOC_SSA__ResultDesc_ResultIndex)),OOC_SSA__ResultDesc_ResultIndex)((OOC_SSA__Result)i11);
      i10 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8187)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i7, (i10-1));
      h = (OOC_SSA__Opnd)i10;
      i11 = *(OOC_INT8*)((_check_pointer(i9, 8262))+4);
      i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i10, 8252));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 8242)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i10, i11);
l14:
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 8386))+8);
      opnd = (OOC_SSA__Opnd)i9;
      i10 = i9!=0;
      if (i10) goto l10_loop;
l19:
      i9 = (OOC_INT32)dd;
      i9 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 8442)))), OOC_SSA_Blocker__DependenceDataDesc_GetSameInstr)),OOC_SSA_Blocker__DependenceDataDesc_GetSameInstr)((OOC_SSA_Blocker__DependenceData)i9, (OOC_SSA__Instr)i7, (OOC_SSA__Instr)i8);
      sameInstr = (OOC_SSA__Instr)i9;
      i10 = i9!=0;
      if (i10) goto l22;
      i9 = (OOC_INT32)dd;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 8683)))), OOC_SSA_Blocker__DependenceDataDesc_SetRegion)),OOC_SSA_Blocker__DependenceDataDesc_SetRegion)((OOC_SSA_Blocker__DependenceData)i9, (OOC_SSA__Instr)i7, (OOC_SSA__Instr)i8);
      
      goto l23;
l22:
      i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 8566))+12);
      _assert((i10==0), 127, 8556);
      i10 = (OOC_INT32)pb;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 8599)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i10, (OOC_SSA__Instr)i8);
      _new = (OOC_SSA__Instr)i9;
      i8=i9;
l23:
      i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8754)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i7, i3);
      opnd = (OOC_SSA__Opnd)i7;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8795)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i7, (OOC_SSA__Result)i8);
l24:
      i6 = i6+1;
      i = i6;
      i7 = i6<i5;
      if (i7) goto l5_loop;
l29:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8879))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8888));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8861)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i4, (OOC_SSA__Result)i1);
      goto l31;
l30:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7710))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7719));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7710))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7719));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7723)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i2, (OOC_SSA__Result)i3);
l31:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8924))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8932))+16);
      _assert((i1==0), 127, 8912);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8960))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8960))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8968)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9001))+12);
      _assert((i1==0), 127, 8989);
      i1 = (OOC_INT32)pb;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9026)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_PRE__Transform_OnlyUsedInEquiv(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9180))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9232))+12);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 9238))+36);
      i1 = i1!=85;
      if (!i1) goto l6;
      return 0u;
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9325))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l11:
      return 1u;
      ;
    }


  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA_Blocker__GetDependenceData((OOC_SSA__ProcBlock)i0);
  dd = (OOC_SSA_Blocker__DependenceData)i1;
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  i1 = (OOC_INT32)ADT_ArrayList__New(32);
  worklist = (ADT_ArrayList__ArrayList)i1;
  i2 = (OOC_INT32)ADT_ArrayList__New(32);
  equivList = (ADT_ArrayList__ArrayList)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9565))+8);
  instr = (OOC_SSA__Instr)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l22;
l3_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i2, 9619))+36);
  i3 = i3==6;
  if (!i3) goto l17;
  i3 = (OOC_INT32)OOC_SSA_PRE__GetSelect((OOC_SSA__Instr)i2);
  select = (OOC_SSA__Instr)i3;
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l17;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9740))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9749))+8);
  opnd = (OOC_SSA__Opnd)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l17;
l10_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9812)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9851))+8);
  opnd = (OOC_SSA__Opnd)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l10_loop;
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9921))+28);
  instr = (OOC_SSA__Instr)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l3_loop;
l22:
  i2 = (OOC_INT32)ADT_Dictionary__New();
  equivToCollect = (ADT_Dictionary__Dictionary)i2;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9998)))), OOC_SSA__ProcBlockDesc_GetEnter)),OOC_SSA__ProcBlockDesc_GetEnter)((OOC_SSA__ProcBlock)i0);
  enter = (OOC_SSA__Instr)i0;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 10030))+4);
  i0 = i0!=0;
  if (!i0) goto l30;
  i0=i1;
l25_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10066));
  i1 = _check_pointer(i1, 10072);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10081))+4);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i2-1), i3, OOC_UINT32, 10072))*4);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10094)))), &_td_OOC_SSA__OpndDesc, 10094);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10131))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10115)))), ADT_ArrayList__ArrayListDesc_Remove)),ADT_ArrayList__ArrayListDesc_Remove)((ADT_ArrayList__ArrayList)i0, (i2-1));
  i0 = (OOC_INT32)enter;
  OOC_SSA_PRE__Transform_MigrateCandidates((OOC_SSA__Opnd)i1, (OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)worklist;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 10030))+4);
  i1 = i1!=0;
  if (i1) goto l25_loop;
l30:
  i0 = (OOC_INT32)pb;
  OOC_SSA_CSE__Transform((OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT32)equivList;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10370))+4);
  i0 = i0-1;
  i = i0;
  i1 = i0>=0;
  if (!i1) goto l44;
l33_loop:
  i1 = (OOC_INT32)equivList;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10416));
  i1 = _check_pointer(i1, 10422);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 10422))*4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10430)))), &_td_OOC_SSA__InstrDesc, 10430);
  instr = (OOC_SSA__Instr)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10454))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10463))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10472));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10476))+8);
  h = (OOC_SSA__Instr)i0;
  i0 = OOC_SSA_PRE__Transform_OnlyUsedInEquiv((OOC_SSA__Result)i0);
  i1 = i;
  if (!i0) goto l39;
  i0 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10615))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10623))+16);
  _assert((i2==(OOC_INT32)0), 127, 10603);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10653))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10653))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10661)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10696))+12);
  _assert((i2==(OOC_INT32)0), 127, 10684);
  i2 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10723)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)h;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10758))+12);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l38;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10947)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i0);
l38:
  i0 = (OOC_INT32)equivList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11003)))), ADT_ArrayList__ArrayListDesc_Set)),ADT_ArrayList__ArrayListDesc_Set)((ADT_ArrayList__ArrayList)i0, i1, (Object__Object)(OOC_INT32)0);
l39:
  i0 = i1+(-1);
  i = i0;
  i1 = i0>=0;
  if (i1) goto l33_loop;
l44:
  i0 = (OOC_INT32)equivList;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 11114))+4);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l55;
  i1=0;
l47_loop:
  i2 = (OOC_INT32)equivList;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11144));
  i3 = _check_pointer(i3, 11150);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 11150))*4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l50;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11237));
  i2 = _check_pointer(i2, 11243);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 11243))*4);
  OOC_SSA_PRE__Transform_ResolveEquiv((OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11251)))), &_td_OOC_SSA__InstrDesc, 11251)));
l50:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l47_loop;
l55:
  return;
  ;
}

void OOC_SSA_PRE__ResolveEquiv(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11540))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l18;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11598))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 11625))+36);
  i3 = i3==84;
  if (i3) goto l9;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 11909))+36);
  i3 = i3==86;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11950));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11979))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11988));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11950));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11961)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i5, (OOC_SSA__Result)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12005)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  goto l13;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11667))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11676))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11685));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11667))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11676))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11707))+24);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 11716));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11685));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11689)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i4, (OOC_SSA__Result)i5);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11740))+12);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l12;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11783))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11791))+16);
  _assert((i3==(OOC_INT32)0), 127, 11771);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11823))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11823))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11831)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i4);
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11869)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l13:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l18;
  i1=i2;
  goto l3_loop;
l18:
  return;
  ;
}

void OOC_OOC_SSA_PRE_init(void) {

  return;
  ;
}

/* --- */
