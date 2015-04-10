#include "OOC/SSA/ConstProp.d"
#include "__oo2c.h"

static OOC_SSA__Const OOC_SSA_ConstProp__ComputeConst(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Const arg1;
  OOC_SSA__Const arg2;
  Language__Value v;
  Language_Integer__Value _i1;
  Language_Integer__Value _i2;

  i0 = (OOC_INT32)instr;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1504)))), OOC_SSA__InstrDesc_SizeOpndList)),OOC_SSA__InstrDesc_SizeOpndList)((OOC_SSA__Instr)i0);
  i1 = i1>=2;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1542))+36);
  i1 = i1!=73;
  
l5:
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1589))+36);
  i1 = i1!=39;
  
l9:
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1630))+36);
  i1 = i1!=40;
  
l13:
  if (i1) goto l15;
  i1=OOC_FALSE;
  goto l17;
l15:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1673))+36);
  i1 = i1!=52;
  
l17:
  if (i1) goto l19;
  i1=OOC_FALSE;
  goto l21;
l19:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1711))+36);
  i1 = i1!=53;
  
l21:
  if (!i1) goto l54;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1825))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1835));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1840))+16);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1851)))), &_td_OOC_SSA__ConstDesc, 1851);
  arg1 = (OOC_SSA__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1878))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1888))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 1898));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1903))+16);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1914)))), &_td_OOC_SSA__ConstDesc, 1914);
  arg2 = (OOC_SSA__Const)i2;
  v = (Language__Value)(OOC_INT32)0;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 1960))+5);
  switch (i3) {
  case 1 ... 9:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2036))+44);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2043)))), &_td_Language_Integer__ValueDesc);
    if (i3) goto l27;
    i3=OOC_FALSE;
    goto l29;
l27:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2068))+44);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2075)))), &_td_Language_Integer__ValueDesc);
    
l29:
    if (i3) goto l31;
    i0=(OOC_INT32)0;
    goto l46;
l31:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2194))+44);
    i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2210)))), &_td_Language_Integer__ValueDesc, 2210);
    _i1 = (Language_Integer__Value)i3;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2238))+44);
    i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2254)))), &_td_Language_Integer__ValueDesc, 2254);
    _i2 = (Language_Integer__Value)i2;
    i0 = *(OOC_INT8*)((_check_pointer(i0, 2293))+36);
    switch (i0) {
    case 19:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2341)))), Language_Integer__ValueDesc_Sum)),Language_Integer__ValueDesc_Sum)((Language_Integer__Value)i3, (Language_Integer__Value)i2);
      v = (Language__Value)i0;
      
      goto l46;
    case 20:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2387)))), Language_Integer__ValueDesc_Difference)),Language_Integer__ValueDesc_Difference)((Language_Integer__Value)i3, (Language_Integer__Value)i2);
      v = (Language__Value)i0;
      
      goto l46;
    case 22:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2440)))), Language_Integer__ValueDesc_Product)),Language_Integer__ValueDesc_Product)((Language_Integer__Value)i3, (Language_Integer__Value)i2);
      v = (Language__Value)i0;
      
      goto l46;
    case 25:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2510)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i3, (ADT_Object__Object)i2);
      i0 = (OOC_INT32)Language_Boolean__New((i0==0));
      v = (Language__Value)i0;
      
      goto l46;
    case 26:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2573)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i3, (ADT_Object__Object)i2);
      i0 = (OOC_INT32)Language_Boolean__New((i0!=0));
      v = (Language__Value)i0;
      
      goto l46;
    case 28:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2636)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i3, (ADT_Object__Object)i2);
      i0 = (OOC_INT32)Language_Boolean__New((i0<=0));
      v = (Language__Value)i0;
      
      goto l46;
    case 27:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2699)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i3, (ADT_Object__Object)i2);
      i0 = (OOC_INT32)Language_Boolean__New((i0<0));
      v = (Language__Value)i0;
      
      goto l46;
    case 30:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2762)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i3, (ADT_Object__Object)i2);
      i0 = (OOC_INT32)Language_Boolean__New((i0>=0));
      v = (Language__Value)i0;
      
      goto l46;
    case 29:
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2825)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i3, (ADT_Object__Object)i2);
      i0 = (OOC_INT32)Language_Boolean__New((i0>0));
      v = (Language__Value)i0;
      
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
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3458)))), &_td_Language_Boolean__ValueDesc);
  if (i2) goto l51;
  i2 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3593))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3574)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i2, (Language__Value)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SSA__Const)i0;
  goto l54;
l51:
  i1 = (OOC_INT32)pb;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3526)))), &_td_Language_Boolean__ValueDesc, 3526)), 3532))+4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3500)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, i0);
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 3926))+20);
      i1 = i1==0;
      if (!i1) goto l4;
      *(OOC_INT32*)((_check_pointer(i0, 3958))+20) = 1;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_ConstProp__Worklist.baseTypes[0]);
      wl = (OOC_SSA_ConstProp__Worklist)i1;
      i2 = (OOC_INT32)worklist;
      *(OOC_INT32*)(_check_pointer(i1, 4010)) = i2;
      *(OOC_INT32*)((_check_pointer(i1, 4040))+4) = i0;
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
      *(OOC_INT32*)((_check_pointer(i0, 4274))+16) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4308));
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4482))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4543))+12);
      useInstr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4572))+16);
      i2 = i2==(OOC_INT32)0;
      if (!i2) goto l6;
      OOC_SSA_ConstProp__Transform_AddToWorklist((OOC_SSA__Instr)i1);
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4667))+16);
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
      *(OOC_INT32*)((_check_pointer(i0, 4879))+16) = i1;
      OOC_SSA_ConstProp__Transform_AddUsesToWorklist((OOC_SSA__Result)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4946));
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
          auto OOC_CHAR8 OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath_InLabelList(Language__Value expr, OOC_SSA__Opnd opnd);
            
            OOC_CHAR8 OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath_InLabelList(Language__Value expr, OOC_SSA__Opnd opnd) {
              register OOC_INT32 i0,i1,i2,i3;
              Language__Value lower;
              Language__Value upper;

              i0 = (OOC_INT32)opnd;
              i0 = i0!=(OOC_INT32)0;
              if (!i0) goto l15;
              i0 = (OOC_INT32)expr;
l3_loop:
              i1 = (OOC_INT32)opnd;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5576));
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5586)))), &_td_OOC_SSA__ConstDesc, 5586)), 5592))+44);
              lower = (Language__Value)i2;
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5626))+8);
              i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5636));
              i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5646)))), &_td_OOC_SSA__ConstDesc, 5646)), 5652))+44);
              upper = (Language__Value)i3;
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5682)))), Language__ValueDesc_Compare)),Language__ValueDesc_Compare)((Language__Value)i2, (ADT_Object__Object)i0);
              i2 = i2<=0;
              if (i2) goto l6;
              i2=OOC_FALSE;
              goto l8;
l6:
              i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5712)))), Language__ValueDesc_Compare)),Language__ValueDesc_Compare)((Language__Value)i0, (ADT_Object__Object)i3);
              i2 = i2<=0;
              
l8:
              if (!i2) goto l10;
              return OOC_TRUE;
l10:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5809))+8);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5819))+8);
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
          i0 = *(OOC_INT8*)((_check_pointer(i0, 6320))+4);
          i0 = i0==1;
          
l7:
          if (!i0) goto l21;
          i0 = (OOC_INT32)expr;
l9_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6362))+44);
          i2 = (OOC_INT32)branch;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6385));
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6362))+44);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6395)))), &_td_OOC_SSA__ConstDesc, 6395)), 6401))+44);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6369)))), Language__ValueDesc_Equals)),Language__ValueDesc_Equals)((Language__Value)i4, (ADT_Object__Object)i3);
          if (!i1) goto l12;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6442))+8);
          return (OOC_SSA__Opnd)i1;
l12:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6499))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6509))+8);
          branch = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l15;
          i1=OOC_FALSE;
          goto l17;
l15:
          i1 = *(OOC_INT8*)((_check_pointer(i1, 6320))+4);
          i1 = i1==1;
          
l17:
          if (i1) goto l9_loop;
l21:
          _assert(OOC_FALSE, 127, 6546);
          goto l42;
l22:
          i0 = (OOC_INT32)branch;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l25;
          i0=OOC_FALSE;
          goto l27;
l25:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 5979))+4);
          i0 = i0==16;
          
l27:
          if (!i0) goto l41;
l29_loop:
          i0 = (OOC_INT32)expr;
          i1 = (OOC_INT32)branch;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6051));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6036))+44);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6061)))), &_td_OOC_SSA__InstrDesc, 6061)), 6067))+24);
          i0 = OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath_InLabelList((Language__Value)i0, (OOC_SSA__Opnd)i1);
          i1 = (OOC_INT32)branch;
          if (!i0) goto l32;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6111))+8);
          return (OOC_SSA__Opnd)i0;
l32:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6168))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6178))+8);
          branch = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l35;
          i0=OOC_FALSE;
          goto l37;
l35:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 5979))+4);
          i0 = i0==16;
          
l37:
          if (i0) goto l29_loop;
l41:
          i0 = (OOC_INT32)branch;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6228))+8);
          return (OOC_SSA__Opnd)i0;
l42:
          _failed_function(5192); return 0;
          ;
        }

        
        void OOC_SSA_ConstProp__Transform_ClassifyInstr_ReplaceSelect(OOC_SSA__Instr select, OOC_SSA__Opnd branch) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA__Result res;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT32)select;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6759));
          res = (OOC_SSA__Result)i0;
          i1 = (OOC_INT32)branch;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6791));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6796))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 6803))+36);
          i2 = i2==6;
          if (i2) goto l3;
          OOC_SSA_ConstProp__Transform_AddUsesToWorklist((OOC_SSA__Result)i0);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7335));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7314)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
          goto l12;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6974));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6979))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6986))+24);
          i2 = i0!=(OOC_INT32)0;
          opnd = (OOC_SSA__Opnd)i1;
          if (!i2) goto l12;
l6_loop:
          OOC_SSA_ConstProp__Transform_AddUsesToWorklist((OOC_SSA__Result)i0);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7100));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7081)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i2);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7130));
          res = (OOC_SSA__Result)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7168))+8);
          opnd = (OOC_SSA__Opnd)i1;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l6_loop;
l12:
          return;
          ;
        }


      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7412))+36);
      switch (i1) {
      case 6:
      case 5:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7603))+24);
        opnd = (OOC_SSA__Opnd)i1;
        i2 = i1!=(OOC_INT32)0;
        if (i2) goto l5;
        i2=OOC_FALSE;
        goto l7;
l5:
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7649));
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7654))+16);
        i2 = i2!=(OOC_INT32)0;
        
l7:
        if (!i2) goto l19;
l10_loop:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7702))+8);
        opnd = (OOC_SSA__Opnd)i1;
        i2 = i1!=(OOC_INT32)0;
        if (i2) goto l13;
        i2=OOC_FALSE;
        goto l15;
l13:
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7649));
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7654))+16);
        i2 = i2!=(OOC_INT32)0;
        
l15:
        if (i2) goto l10_loop;
l19:
        i1 = i1==(OOC_INT32)0;
        if (!i1) goto l57;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7826))+12);
        _assert((i1==(OOC_INT32)0), 127, 7813);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7867));
        i1 = *(OOC_INT8*)((_check_pointer(i1, 7879))+4);
        _assert((i1==2), 127, 7854);
        i1 = *(OOC_INT8*)((_check_pointer(i0, 7923))+36);
        i1 = i1==5;
        if (i1) goto l24;
        i1=OOC_FALSE;
        goto l26;
l24:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7970))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7980));
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7985))+16);
        i2 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        i1 = i1!=i2;
        
l26:
        if (i1) goto l28;
        i1 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        OOC_SSA_ConstProp__Transform_UpdateInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
        goto l57;
l28:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8220))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8230));
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8235))+16);
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8299)))), OOC_SSA__InstrDesc_IsSwitchStatm)),OOC_SSA__InstrDesc_IsSwitchStatm)((OOC_SSA__Instr)i0);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8363))+24);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8373))+8);
        i1 = (OOC_INT32)OOC_SSA_ConstProp__Transform_ClassifyInstr_MatchingPath((OOC_SSA__Const)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8246)))), &_td_OOC_SSA__ConstDesc, 8246)), i2, (OOC_SSA__Opnd)i3);
        OOC_SSA_ConstProp__Transform_ClassifyInstr_ReplaceSelect((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l57;
      default:
        state = (OOC_SSA__Result)i0;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8618))+24);
        opnd = (OOC_SSA__Opnd)i1;
        i2 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
        i3=i0;
l32_loop:
        i4 = i1==(OOC_INT32)0;
        if (i4) goto l44;
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8713));
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8718))+16);
        i4 = i4==(OOC_INT32)0;
        if (i4) goto l41;
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8802));
        i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8807))+16);
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
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8923))+8);
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
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9259));
        _assert((i2==(OOC_INT32)0), 127, 9246);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9821))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l24;
l3_loop:
  *(OOC_INT32*)((_check_pointer(i0, 9872))+20) = 0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9904)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l6;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9927))+36);
  i1 = i1==74;
  
  goto l8;
l6:
  i1=OOC_TRUE;
l8:
  if (i1) goto l18;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10048))+36);
  i1 = i1!=5;
  if (i1) goto l12;
  i1=OOC_FALSE;
  goto l14;
l12:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10082)))), OOC_SSA__InstrDesc_GetArgStore)),OOC_SSA__InstrDesc_GetArgStore)((OOC_SSA__Instr)i0);
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
  *(OOC_INT32*)((_check_pointer(i0, 9971))+16) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10009));
  _assert((i0==(OOC_INT32)0), 127, 9996);
l19:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10501))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l24:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10537));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10551))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10561));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10566))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10573))+36);
  _assert((i1==4), 127, 10527);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10614));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10628))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10638));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10643))+8);
  i1 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
  OOC_SSA_ConstProp__Transform_SetInfo((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
  worklist = (OOC_SSA_ConstProp__Worklist)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10750))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l39;
l27_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10805))+16);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l30;
  i1=OOC_FALSE;
  goto l32;
l30:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 10836))+20);
  i1 = i1==0;
  
l32:
  if (!i1) goto l34;
  OOC_SSA_ConstProp__Transform_ClassifyInstr((OOC_SSA__Instr)i0);
l34:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11063))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l27_loop;
l39:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l47;
l42_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11180))+4);
  instr = (OOC_SSA__Instr)i1;
  *(OOC_INT32*)((_check_pointer(i1, 11200))+20) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11241));
  worklist = (OOC_SSA_ConstProp__Worklist)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11268))+16);
  _assert((i0==(OOC_INT32)0), 127, 11255);
  OOC_SSA_ConstProp__Transform_ClassifyInstr((OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l42_loop;
l47:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11416))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l66;
l50_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11471))+16);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l53;
  i2=OOC_FALSE;
  goto l55;
l53:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11511))+16);
  i3 = (OOC_INT32)OOC_SSA_ConstProp__notConstant;
  i2 = i2!=i3;
  
l55:
  if (i2) goto l57;
  i2=OOC_FALSE;
  goto l59;
l57:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11550))+16);
  i2 = i2!=i1;
  
l59:
  if (!i2) goto l61;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11604))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11584)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11615)))), &_td_OOC_SSA__ResultDesc, 11615)));
l61:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11656))+28);
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
