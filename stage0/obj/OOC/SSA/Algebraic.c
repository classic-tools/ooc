#include <OOC/SSA/Algebraic.d>
#include <__oo2c.h>

static OOC_INT32 OOC_SSA_Algebraic__IsPowerOf2(Object_BigInt__BigInt value) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_INT32 cmp;

  i = 0;
  i0 = (OOC_INT32)value;
  i1=0;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i1, 64, OOC_UINT32, 1529))*4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1516)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i2);
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
      auto OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Equals(OOC_SSA__Opnd opnd, Object_Boxed__Object _const);
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
              *(OOC_INT32*)(_check_pointer(i0, 2115)) = i1;
              i1 = (OOC_INT32)instr;
              *(OOC_INT32*)((_check_pointer(i0, 2147))+4) = i1;
              worklist = (OOC_SSA_Algebraic__Worklist)i0;
              return;
              ;
            }


          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2258));
          _assert((i1==(OOC_INT32)0), 127, 2245);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2299))+12);
          use = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l8;
l3_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2367))+12);
          OOC_SSA_Algebraic__Transform_InspectInstr_Replace_AddToWorklist((OOC_SSA__Instr)i0);
          i0 = (OOC_INT32)use;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2397))+16);
          use = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)with;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2434)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
          return;
          ;
        }

        
        void OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd with) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)with;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2582));
          i1 = (OOC_INT32)instr;
          OOC_SSA_Algebraic__Transform_InspectInstr_Replace((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
          return;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Equals(OOC_SSA__Opnd opnd, Object_Boxed__Object _const) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Result arg;

          i0 = (OOC_INT32)opnd;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2753));
          arg = (OOC_SSA__Result)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2776)))), &_td_OOC_SSA__ConstDesc);
          if (i1) goto l3;
          return OOC_FALSE;
          goto l4;
l3:
          i1 = (OOC_INT32)_const;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2826))+44);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2813)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i1, (Object__Object)i0);
          return i0;
l4:
          _failed_function(2632); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Algebraic__Transform_InspectInstr_Scaled(OOC_SSA__Result res) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)res;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3209)))), &_td_OOC_SSA__InstrDesc);
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3245)))), &_td_OOC_SSA__InstrDesc, 3245)), 3251))+36);
          i1 = i1==22;
          
l5:
          if (i1) goto l7;
          i1=OOC_FALSE;
          goto l9;
l7:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3301)))), &_td_OOC_SSA__InstrDesc, 3301)), 3307))+5);
          i1 = i1<=9;
          
l9:
          if (!i1) goto l18;
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3371)))), &_td_OOC_SSA__InstrDesc, 3371);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3398))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3408))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3418));
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3424)))), &_td_OOC_SSA__ConstDesc);
          if (!i1) goto l18;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3479))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3489))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3499));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3509)))), &_td_OOC_SSA__ConstDesc, 3509)), 3515))+44);
          i0 = OOC_SSA_Algebraic__IsPowerOf2((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3530)))), &_td_Object_BigInt__BigIntDesc, 3530)));
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
          i2 = *(OOC_INT8*)((_check_pointer(i1, 3845))+5);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3812)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 51, i2);
          _new = (OOC_SSA__Instr)i0;
          i2 = (OOC_INT32)base;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3884));
          i2 = *(OOC_INT8*)((_check_pointer(i2, 3895))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3869)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i2);
          i2 = (OOC_INT32)scale;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3923));
          i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3933)))), &_td_OOC_SSA__InstrDesc, 3933);
          s = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3964))+24);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3982))+24);
          i4 = *(OOC_INT8*)((_check_pointer(i4, 3992))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 3974));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3952)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4025))+24);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4035))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4075))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4085))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 4095))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 4045));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4013)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, i2);
          OOC_SSA_Algebraic__Transform_InspectInstr_Replace((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
          return;
          ;
        }


      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4192))+36);
      switch (i1) {
      case 19:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4248))+24);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (i0) goto l16;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4377))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4387))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (i0) goto l14;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4506))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4516));
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Scaled((OOC_SSA__Result)i0);
        if (i0) goto l12;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4672))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4682))+8);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4692));
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Scaled((OOC_SSA__Result)i0);
        if (!i0) goto l50;
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4798))+24);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4781))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4808))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceIndexed((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
        goto l50;
l12:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4605))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4615))+8);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4632))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceIndexed((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
        goto l50;
l14:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4466))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l16:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4327))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4337))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
      case 20:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4892))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4902))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (!i0) goto l50;
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4981))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
      case 22:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5065))+24);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intOne;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (i0) goto l36;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5193))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5203))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intOne;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (i0) goto l34;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5321))+24);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (i0) goto l32;
        i0 = (OOC_INT32)instr;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5440))+24);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5450))+8);
        i1 = (OOC_INT32)OOC_SSA_Algebraic__intZero;
        i0 = OOC_SSA_Algebraic__Transform_InspectInstr_Equals((OOC_SSA__Opnd)i0, (Object_Boxed__Object)i1);
        if (!i0) goto l50;
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5529))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5539))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l32:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5400))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l34:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5281))+24);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
l36:
        i0 = (OOC_INT32)instr;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5143))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5153))+8);
        OOC_SSA_Algebraic__Transform_InspectInstr_ReplaceWithOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Opnd)i1);
        goto l50;
      case 23:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 5657))+5);
        i1 = i1<10;
        if (i1) goto l41;
        i1=OOC_FALSE;
        goto l43;
l41:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5706))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5716))+8);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5726));
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5732)))), &_td_OOC_SSA__ConstDesc);
        
l43:
        if (!i1) goto l50;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5785))+24);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5795))+8);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5805));
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5815)))), &_td_OOC_SSA__ConstDesc, 5815)), 5821))+44);
        i1 = OOC_SSA_Algebraic__IsPowerOf2((Object_BigInt__BigInt)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5836)))), &_td_Object_BigInt__BigIntDesc, 5836)));
        i2 = i1>=0;
        exp = i1;
        if (!i2) goto l50;
        i2 = (OOC_INT32)pb;
        i3 = *(OOC_INT8*)((_check_pointer(i0, 5932))+5);
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5896)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 47, i3);
        _new = (OOC_SSA__Instr)i2;
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5976))+24);
        i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5986));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5960)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 1);
        i3 = (OOC_INT32)pb;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6032)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i3, i1);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6019)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6081)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i2);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6127));
        _assert((i0==(OOC_INT32)0), 127, 6114);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6309))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l8;
l3_loop:
  OOC_SSA_Algebraic__Transform_InspectInstr((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6397))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l16;
l11_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6619))+4);
  instr = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6654));
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

  i0 = (OOC_INT32)Object_BigInt__NewInt(0);
  OOC_SSA_Algebraic__intZero = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)Object_BigInt__NewInt(1);
  OOC_SSA_Algebraic__intOne = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)Object_BigInt__NewInt(2);
  OOC_SSA_Algebraic__intTwo = (Object_BigInt__BigInt)i0;
  i0 = (OOC_INT32)OOC_SSA_Algebraic__intOne;
  *(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(0, 64, OOC_UINT8, 6878))*4) = i0;
  i = 1;
  i0=1;
l1_loop:
  i1 = i0-1;
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i1, 64, OOC_UINT32, 6949))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i1, 64, OOC_UINT32, 6949))*4);
  i3 = (OOC_INT32)OOC_SSA_Algebraic__intTwo;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6954)))), Object_BigInt__BigIntDesc_Mul)),Object_BigInt__BigIntDesc_Mul)((Object_BigInt__BigInt)i1, (Object_BigInt__BigInt)i3);
  *(OOC_INT32*)((OOC_INT32)OOC_SSA_Algebraic__power2+(_check_index(i0, 64, OOC_UINT32, 6936))*4) = i1;
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
