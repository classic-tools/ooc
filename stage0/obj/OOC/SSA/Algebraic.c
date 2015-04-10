#include "OOC/SSA/Algebraic.d"
#include "__oo2c.h"

static OOC_INT32 OOC_SSA_Algebraic__IsPowerOf2(Language_Integer__Value value) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_INT32 cmp;

  i = 0;
  i0 = (OOC_INT32)value;
  i1=0;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i1, 64, OOC_UINT32, 1532))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1515)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i2);
  cmp = i2;
  i3 = i2==0;
  if (i3) goto l7;
  i2 = i2<0;
  if (!i2) goto l8;
  return -1;
  goto l8;
l7:
  return i1;
l8:
  i1 = i1+1;
  i = i1;
  i2 = i1<=63;
  if (i2) goto l1_loop;
l12:
  return -1;
  ;
}

void OOC_SSA_Algebraic__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1;
  OOC_SSA_Algebraic__Worklist worklist;
  OOC_SSA__Instr instr;
  auto void OOC_SSA_Algebraic__Transform_InspectInstr(OOC_SSA__Instr instr);
    
    void OOC_SSA_Algebraic__Transform_InspectInstr(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 exp;
      OOC_SSA__Instr _new;
      auto void OOC_SSA_Algebraic__Transform_InspectInstr_Replace(OOC_SSA__Instr instr, OOC_SSA__Result with);
      auto void OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd with);
      auto OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Equals(OOC_SSA__Opnd opnd, Language__Value _const);
      auto OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Scaled(OOC_SSA__Result res);
      auto void OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceIndexed(OOC_SSA__Instr instr, OOC_SSA__Opnd base, OOC_SSA__Opnd scale);
        
        void OOC_SSA_Algebraic__Transform_InspectInstr_Replace(OOC_SSA__Instr instr, OOC_SSA__Result with) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Opnd use;
          auto void OOC_SSA_Algebraic__Transform_InspectInstr_Replace_AddToWorklist(OOC_SSA__Instr instr);
            
            void OOC_SSA_Algebraic__Transform_InspectInstr_Replace_AddToWorklist(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_SSA_Algebraic__Worklist wl;

              i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Algebraic__Worklist.baseTypes[0]);
              wl = (OOC_SSA_Algebraic__Worklist)i0;
              i1 = (OOC_INT32)worklist;
              *(OOC_INT32*)(_check_pointer(i0, 2118)) = i1;
              i1 = (OOC_INT32)instr;
              *(OOC_INT32*)((_check_pointer(i0, 2150))+4) = i1;
              worklist = (OOC_SSA_Algebraic__Worklist)i0;
              return;
              ;
            }


          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2261));
          _assert((i1==(OOC_INT32)0), 127, 2248);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2302))+12);
          use = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l8;
l3_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2370))+12);
          OOC_SSA_Algebraic__Transform_InspectInstr_Replace_AddToWorklist((OOC_SSA__Instr)i0);
          i0 = (OOC_INT32)use;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2400))+16);
          use = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)with;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2437)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
          return;
          ;
        }

        
        void OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd with) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)with;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2585));
          i1 = (OOC_INT32)instr;
          OOC_SSA_Algebraic__Transform_InspectInstr_Replace((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
          return;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Equals(OOC_SSA__Opnd opnd, Language__Value _const) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Result arg;

          i0 = (OOC_INT32)opnd;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2758));
          arg = (OOC_SSA__Result)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2781)))), &_td_OOC_SSA__ConstDesc);
          if (i1) goto l3;
          return OOC_FALSE;
          goto l4;
l3:
          i1 = (OOC_INT32)_const;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2831))+44);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2818)))), Language__ValueDesc_Equals)),Language__ValueDesc_Equals)((Language__Value)i1, (ADT_Object__Object)i0);
          return i0;
l4:
          _failed_function(2635); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Scaled(OOC_SSA__Result res) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)res;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3214)))), &_td_OOC_SSA__InstrDesc);
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3250)))), &_td_OOC_SSA__InstrDesc, 3250)), 3256))+36);
          i1 = i1==22;
          
l5:
          if (i1) goto l7;
          i1=OOC_FALSE;
          goto l9;
l7:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3306)))), &_td_OOC_SSA__InstrDesc, 3306)), 3312))+5);
          i1 = i1<=9;
          
l9:
          if (!i1) goto l18;
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3376)))), &_td_OOC_SSA__InstrDesc, 3376);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3403))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3413))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3423));
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3429)))), &_td_OOC_SSA__ConstDesc);
          if (!i1) goto l18;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3484))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3494))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3504));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3514)))), &_td_OOC_SSA__ConstDesc, 3514)), 3520))+44);
          i0 = OOC_SSA_Algebraic__IsPowerOf2((Language_Integer__Value)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3536)))), &_td_Language_Integer__ValueDesc, 3536)));
          i1 = 0<=i0;
          if (i1) goto l15;
          i0=OOC_FALSE;
          goto l16;
l15:
          i0 = i0<=3;
          
l16:
          return i0;
l18:
          return OOC_FALSE;
          ;
        }

        
        void OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceIndexed(OOC_SSA__Instr instr, OOC_SSA__Opnd base, OOC_SSA__Opnd scale) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Instr _new;
          OOC_SSA__Instr s;

          i0 = (OOC_INT32)pb;
          i1 = (OOC_INT32)instr;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 3850))+5);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3817)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 51, i2);
          _new = (OOC_SSA__Instr)i0;
          i2 = (OOC_INT32)base;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3889));
          i2 = *(OOC_INT8*)((_check_pointer(i2, 3900))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3874)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i2);
          i2 = (OOC_INT32)scale;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3928));
          i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3938)))), &_td_OOC_SSA__InstrDesc, 3938);
          s = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3969))+24);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3987))+24);
          i4 = *(OOC_INT8*)((_check_pointer(i4, 3997))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 3979));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3957)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4030))+24);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4040))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4080))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4090))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 4100))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 4050));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4018)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i2);
          OOC_SSA_Algebraic__Transform_InspectInstr_Replace((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4197))+36);
      switch (i1) {
      case 19:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4253))+24);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (i0) goto l16;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4382))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4392))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (i0) goto l14;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4511))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4521));
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Scaled((OOC_SSA__Result)i0);
        if (i0) goto l12;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4677))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4687))+8);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4697));
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Scaled((OOC_SSA__Result)i0);
        if (!i0) goto l50;
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4803))+24);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4786))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4813))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceIndexed((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
        goto l50;
l12:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4610))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4620))+8);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4637))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceIndexed((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
        goto l50;
l14:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4471))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l16:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4332))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4342))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
      case 20:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4897))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4907))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (!i0) goto l50;
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4986))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
      case 22:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5070))+24);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intOne;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (i0) goto l36;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5198))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5208))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intOne;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (i0) goto l34;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5326))+24);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (i0) goto l32;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5445))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5455))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Language__Value)i1);
        if (!i0) goto l50;
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5534))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5544))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l32:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5405))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l34:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5286))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l36:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5148))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5158))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
      case 23:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 5662))+5);
        i1 = i1<10;
        if (i1) goto l41;
        i1=OOC_FALSE;
        goto l43;
l41:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5711))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5721))+8);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5731));
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5737)))), &_td_OOC_SSA__ConstDesc);
        
l43:
        if (!i1) goto l50;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5790))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5800))+8);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5810));
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5820)))), &_td_OOC_SSA__ConstDesc, 5820)), 5826))+44);
        i1 = OOC_SSA_Algebraic__IsPowerOf2((Language_Integer__Value)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5842)))), &_td_Language_Integer__ValueDesc, 5842)));
        i2 = i1>=0;
        exp = i1;
        if (!i2) goto l50;
        i2 = (OOC_INT32)pb;
        i3 = *(OOC_INT8*)((_check_pointer(i0, 5937))+5);
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5901)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 47, i3);
        _new = (OOC_SSA__Instr)i2;
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5981))+24);
        i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5991));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5965)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 1);
        i3 = (OOC_INT32)pb;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6037)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i3, i1);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6024)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6086)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i2);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6132));
        _assert((i0==(OOC_INT32)0), 127, 6119);
        goto l50;
      default:
        goto l50;
      }
l50:
      return;
      ;
    }


  worklist = (OOC_SSA_Algebraic__Worklist)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6314))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l8;
l3_loop:
  OOC_SSA_Algebraic__Transform_InspectInstr((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6402))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l16;
l11_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6624))+4);
  instr = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6659));
  worklist = (OOC_SSA_Algebraic__Worklist)i0;
  OOC_SSA_Algebraic__Transform_InspectInstr((OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l11_loop;
l16:
  return;
  ;
}

static void OOC_SSA_Algebraic__Init() {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)Language_Integer__New(0);
  OOC_SSA_Algebraic__intZero = (Language_Integer__Value)i0;
  i0 = (OOC_INT32)Language_Integer__New(1);
  OOC_SSA_Algebraic__intOne = (Language_Integer__Value)i0;
  i0 = (OOC_INT32)Language_Integer__New(2);
  OOC_SSA_Algebraic__intTwo = (Language_Integer__Value)i0;
  i0 = (OOC_INT32)OOC_SSA_Algebraic__intOne;
  *(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(0, 64, OOC_UINT8, 6880))*4) = i0;
  i = 1;
  i0=1;
l1_loop:
  i1 = i0-1;
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i1, 64, OOC_UINT32, 6951))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i1, 64, OOC_UINT32, 6951))*4);
  i3 = (OOC_INT32)OOC_SSA_Algebraic__intTwo;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6956)))), Language_Integer__ValueDesc_Product)),Language_Integer__ValueDesc_Product)((Language_Integer__Value)i1, (Language_Integer__Value)i3);
  *(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i0, 64, OOC_UINT32, 6938))*4) = i1;
  i0 = i0+1;
  i = i0;
  i1 = i0<=63;
  if (i1) goto l1_loop;
l5:
  return;
  ;
}

void OOC_OOC_SSA_Algebraic_init(void) {

  OOC_SSA_Algebraic__Init();
  return;
  ;
}

/* --- */
