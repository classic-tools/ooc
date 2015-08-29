#include <OOC/SSA/IRtoSSA.d>
#include <__oo2c.h>

static void OOC_SSA_IRtoSSA__AddStoreBackwardFeed(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopEnd, OOC_SSA__Result storeArg) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Instr collect;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1578)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 6, 0);
  collect = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)storeArg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1633)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
  i1 = (OOC_INT32)loopEnd;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1686)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 13);
  i3 = i2==(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i2;
  if (i3) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1866)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1845)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i0);
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1778)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1760)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 13);
l4:
  return;
  ;
}

OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq(OOC_SSA__ProcBlock pb, OOC_SSA__Result s, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_IR__Statement statm;
  auto void OOC_SSA_IRtoSSA__StatmSeq_Chain(OOC_SSA__Instr instr);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Call(OOC_IR__Call call);
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression(OOC_IR__Expression expr);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateLength(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_INT32 dim, OOC_SSA__Result baseArray);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateSize(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_SSA__Instr length);
  auto OOC_SymbolTable__Type OOC_SSA_IRtoSSA__StatmSeq_TypeOfString(OOC_SymbolTable__Type type);
  auto void OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign(OOC_SSA__Result source, OOC_SSA__Instr instr);
  auto void OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign(OOC_SSA__Result source, OOC_SSA__Instr instr);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CopyString(OOC_IR__CopyString cp);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_AddException(OOC_SSA__ProcBlock pb, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 opcode, OOC_INT8 subclass);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_TypeTag(OOC_IR__Expression design, OOC_SSA__Result value, OOC_CHAR8 checkDerefOfNil, OOC_Scanner_Builder_BasicList__Symbol derefSym);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Copy(OOC_IR__Copy cp);
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression(OOC_IR__Expression expr);
  auto void OOC_SSA_IRtoSSA__StatmSeq_Assert(OOC_IR__Assert assert);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Assignment(OOC_IR__Assignment assignment);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Call(OOC_IR__Call call);
  auto void OOC_SSA_IRtoSSA__StatmSeq_Return(OOC_IR__Return _return);
  auto void OOC_SSA_IRtoSSA__StatmSeq_IfStatm(OOC_IR__IfStatm ifStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_WithStatm(OOC_IR__WithStatm withStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_CaseStatm(OOC_IR__CaseStatm caseStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_RepeatStatm(OOC_IR__RepeatStatm repeatStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_WhileStatm(OOC_IR__WhileStatm whileStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_ForStatm(OOC_IR__ForStatm forStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_LoopStatm(OOC_IR__LoopStatm loopStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_Exit(OOC_IR__Exit exit);
  auto void OOC_SSA_IRtoSSA__StatmSeq_CopyParameter(OOC_IR__CopyParameter cp);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_MoveBlock(OOC_IR__MoveBlock move);
    
    void OOC_SSA_IRtoSSA__StatmSeq_Chain(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2475))+36);
      i1 = i1==13;
      if (i1) goto l3;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2516))+36);
      i1 = i1==12;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2557))+36);
      i1 = i1==15;
      
      goto l9;
l7:
      i1=OOC_TRUE;
l9:
      if (i1) goto l11;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2605))+36);
      i1 = i1==59;
      
      goto l13;
l11:
      i1=OOC_TRUE;
l13:
      if (i1) goto l15;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2704)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      goto l16;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2652))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2652))+24);
      i3 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2662)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i3);
l16:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2758)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateLength(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_INT32 dim, OOC_SSA__Result baseArray) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_INT32 i;
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength(OOC_SymbolTable__Type type, OOC_INT32 dim);
        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength(OOC_SymbolTable__Type type, OOC_INT32 dim) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Instr len;
          OOC_SSA__Instr lenp;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3654)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l3;
          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4245)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i0, 1);
          return (OOC_SSA__Instr)i0;
          goto l12;
l3:
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 3686))+32);
          if (i1) goto l6;
          i1 = (OOC_INT32)pb;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 3834))+44);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3817)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, i2);
          len = (OOC_SSA__Instr)i1;
          
          goto l7;
l6:
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)baseArray;
          i3 = dim;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3725)))), OOC_SSA__ProcBlockDesc_AddGetLengthInstr)),OOC_SSA__ProcBlockDesc_AddGetLengthInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3759)))), &_td_OOC_SSA__InstrDesc, 3759)), (i3+1), (OOC_SymbolTable__Array)i0);
          len = (OOC_SSA__Instr)i1;
          
l7:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3878))+36);
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3891)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l10;
          return (OOC_SSA__Instr)i1;
          goto l12;
l10:
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3932)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 22, 9);
          lenp = (OOC_SSA__Instr)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3996)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = dim;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4074))+36);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength((OOC_SymbolTable__Type)i0, (i1+1));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4039)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Instr)i2;
l12:
          _failed_function(3523); return 0;
          ;
        }


      i0 = (OOC_INT32)value;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4431)))), &_td_OOC_IR__IndexDesc);
      if (!i0) goto l8;
l3_loop:
      i0 = (OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4473)))), &_td_OOC_IR__IndexDesc, 4473)), 4479))+8);
      i1 = dim;
      value = (OOC_IR__Expression)i0;
      dim = (i1+1);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4431)))), &_td_OOC_IR__IndexDesc);
      if (i0) goto l3_loop;
l8:
      i0 = (OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4599))+4);
      type = (OOC_SymbolTable__Type)i0;
      i1 = dim;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l17;
      i2=0;
l12_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4659)))), &_td_OOC_SymbolTable__ArrayDesc, 4659)), 4665))+36);
      type = (OOC_SymbolTable__Type)i0;
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
      if (i3) goto l12_loop;
l17:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength((OOC_SymbolTable__Type)i0, i1);
      return (OOC_SSA__Instr)i0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateSize(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_SSA__Instr length) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_SSA__Instr size;

      i0 = (OOC_INT32)value;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5236)))), &_td_OOC_IR__IndexDesc);
      if (!i0) goto l8;
l3_loop:
      i0 = (OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5278)))), &_td_OOC_IR__IndexDesc, 5278)), 5284))+8);
      value = (OOC_IR__Expression)i0;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5236)))), &_td_OOC_IR__IndexDesc);
      if (i0) goto l3_loop;
l8:
      i0 = (OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5384))+4);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5409)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (!i1) goto l17;
l12_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5451)))), &_td_OOC_SymbolTable__ArrayDesc, 5451)), 5457))+36);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5409)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l12_loop;
l17:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5505)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 22, 9);
      size = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)length;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5562)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 1);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 5628))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5611)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5600)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i2;
      ;
    }

    
    OOC_SymbolTable__Type OOC_SSA_IRtoSSA__StatmSeq_TypeOfString(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5770)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6106)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l5;
      return (OOC_SymbolTable__Type)(OOC_INT32)0;
      goto l20;
l5:
      i1 = *(OOC_INT16*)((_check_pointer(i0, 6143))+32);
      switch (i1) {
      case 13:
      case 14:
      case 15:
        i0 = *(OOC_INT16*)((_check_pointer(i0, 6263))+32);
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(((i0-13)+1));
        return (OOC_SymbolTable__Type)i0;
        goto l20;
      default:
        return (OOC_SymbolTable__Type)(OOC_INT32)0;
        goto l20;
      }
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5801))+36);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5815)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l14;
      return (OOC_SymbolTable__Type)(OOC_INT32)0;
      goto l20;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5858))+36);
      i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5876)))), &_td_OOC_SymbolTable__PredefTypeDesc, 5876)), 5887))+32);
      switch (i1) {
      case 1:
      case 2:
      case 3:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5977))+36);
        return (OOC_SymbolTable__Type)i0;
        goto l20;
      default:
        return (OOC_SymbolTable__Type)(OOC_INT32)0;
        goto l20;
      }
l20:
      _failed_function(5704); return 0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign(OOC_SSA__Result source, OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)source;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6543)))), &_td_OOC_SSA__ConstDesc);
      if (i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6682))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6689))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l19;
      i1 = (OOC_INT32)instr;
      
l5_loop:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 6749))+4);
      i2 = i2==4;
      if (i2) goto l8;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 6794))+4);
      i2 = i2==5;
      
      goto l10;
l8:
      i2=OOC_TRUE;
l10:
      if (!i2) goto l12;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 6869))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6858));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6843)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, i2);
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6916))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l5_loop;
      goto l19;
l18:
      i1 = (OOC_INT32)instr;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6615)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 4);
l19:
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign(OOC_SSA__Result source, OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)source;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7113))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7120))+24);
      i1 = i0!=(OOC_INT32)0;
      opnd = (OOC_SSA__Opnd)i0;
      if (!i1) goto l15;
      i1 = (OOC_INT32)instr;
      
l3_loop:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7176))+4);
      i2 = i2==4;
      if (i2) goto l9;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7277))+4);
      i2 = i2==5;
      if (!i2) goto l10;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7339));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7324)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 7);
      goto l10;
l9:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7235));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7220)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 6);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7398))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l15:
      return;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CopyString(OOC_IR__CopyString cp) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_SSA__Result source;
      OOC_SSA__Result dest;
      OOC_SSA__Result maxLength;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)cp;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7623))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7662))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7704))+16);
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i3);
      maxLength = (OOC_SSA__Result)i3;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7736)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i4, 15, 0);
      instr = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7794)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 2);
      i5 = (OOC_INT32)pb;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7875))+8);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7883))+4);
      i6 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeOfString((OOC_SymbolTable__Type)i6);
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7845)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i5, (OOC_SymbolTable__Type)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7832)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 12);
      i5 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7959))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7965))+4);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeOfString((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7929)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i5, (OOC_SymbolTable__Type)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7916)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i0, 12);
      OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i1, (OOC_SSA__Instr)i4);
      OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign((OOC_SSA__Result)i2, (OOC_SSA__Instr)i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8081)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i3, 1);
      return (OOC_SSA__Instr)i4;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_AddException(OOC_SSA__ProcBlock pb, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 opcode, OOC_INT8 subclass) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)pb;
      i1 = opcode;
      i2 = subclass;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8388)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, i1, i2);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8430)))), OOC_SSA__InstrDesc_SetPos)),OOC_SSA__InstrDesc_SetPos)((OOC_SSA__Instr)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8464)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 19);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      return (OOC_SSA__Instr)i0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_TypeTag(OOC_IR__Expression design, OOC_SSA__Result value, OOC_CHAR8 checkDerefOfNil, OOC_Scanner_Builder_BasicList__Symbol derefSym) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr check;
      OOC_SSA__Instr instr;

      i0 = checkDerefOfNil;
      i1 = (OOC_INT32)design;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8864))+4);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8871)))), &_td_OOC_SymbolTable__PointerDesc);
      
l5:
      if (!i0) goto l7;
      i0 = (OOC_INT32)value;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 8994))+5);
      i3 = (OOC_INT32)derefSym;
      i4 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i4, (OOC_Scanner_Builder_BasicList__Symbol)i3, 67, i2);
      check = (OOC_SSA__Instr)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9020)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      value = (OOC_SSA__Result)i2;
l7:
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9108)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 61, 9);
      instr = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9171))+4);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9178)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i2) goto l22;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9261)))), &_td_OOC_IR__VarDesc);
      if (i2) goto l12;
      i2=OOC_FALSE;
      goto l14;
l12:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9296)))), &_td_OOC_IR__VarDesc, 9296)), 9300))+8);
      i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9311)))), &_td_OOC_SymbolTable__VarDeclDesc, 9311)), 9319))+50);
      
l14:
      if (i2) goto l16;
      i2=OOC_FALSE;
      goto l18;
l16:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9357)))), &_td_OOC_IR__VarDesc, 9357)), 9361))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9372)))), &_td_OOC_SymbolTable__VarDeclDesc, 9372)), 9380))+40);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9387)))), &_td_OOC_SymbolTable__RecordDesc);
      
l18:
      if (i2) goto l20;
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9636))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9616)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Type)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9603)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      goto l23;
l20:
      i1 = (OOC_INT32)value;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9478))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9478))+8);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9485)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9462)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      goto l23;
l22:
      i1 = (OOC_INT32)value;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9212)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l23:
      return (OOC_SSA__Instr)i0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Copy(OOC_IR__Copy cp) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_SSA__Result source;
      OOC_SSA__Result dest;
      OOC_SSA__Instr dynTag;
      OOC_SSA__Instr staticTag;
      OOC_SSA__Instr neq;
      OOC_SSA__Result okStore;
      OOC_SSA__Instr failed;
      OOC_SSA__Instr select;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)cp;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9903))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9942))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 9963))+16);
      if (!i3) goto l3;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10016))+12);
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i3, (OOC_SSA__Result)i2, OOC_FALSE, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0);
      dynTag = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10066)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i4, 61, 9);
      staticTag = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)pb;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10159))+12);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 10165))+4);
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10143)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i5, (OOC_SymbolTable__Type)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10130)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10203)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i5, 26, 9);
      neq = (OOC_SSA__Instr)i5;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10257)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i4, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10301)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)s;
      okStore = (OOC_SSA__Result)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10400))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10406));
      i6 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i6, (OOC_Scanner_Builder_BasicList__Symbol)i4, 71, 0);
      failed = (OOC_SSA__Instr)i4;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10515)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i4, 5, 0);
      select = (OOC_SSA__Instr)i4;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10572)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10626)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i5, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10613)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10674)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10726)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i5, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10713)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10775)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10826)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i4, 2);
      s = (OOC_SSA__Result)i3;
l3:
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10889)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 14, 0);
      instr = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10941)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      i4 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11008))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11014))+4);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10992)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i4, (OOC_SymbolTable__Type)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10979)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 12);
      OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i1, (OOC_SSA__Instr)i3);
      OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
      return (OOC_SSA__Instr)i3;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr instr;
      OOC_SSA__Result res;
      OOC_SSA__Result baseArray;
      OOC_SymbolTable__Type type;
      OOC_INT32 dim;
      OOC_INT8 opcode;
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Deref(OOC_IR__Deref deref);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray(OOC_IR__Expression indexOp, OOC_INT32 *dim);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Index(OOC_IR__Index indexOp, OOC_SSA__Result baseArray, OOC_SSA__Result elementSize, OOC_INT32 dim);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectField(OOC_IR__SelectField selectOp);
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp(OOC_IR__Compare op, OOC_INT8 _class);
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_NewObject(OOC_IR__NewObject _new);
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_NewBlock(OOC_IR__NewBlock _new);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutAnd(OOC_IR__Expression left, OOC_IR__Expression right);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutOr(OOC_IR__Expression left, OOC_IR__Expression right);
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeTest(OOC_IR__TypeTest test);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard(OOC_IR__TypeGuard guard);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeCast(OOC_IR__TypeCast cast);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeConv(OOC_IR__TypeConv conv);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectProc(OOC_IR__SelectProc selectOp);
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Concat(OOC_IR__Concat expr);
        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Deref(OOC_IR__Deref deref) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result address;
          OOC_SSA__Instr check;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)deref;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11620))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          address = (OOC_SSA__Result)i1;
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 11648))+16);
          if (!i2) goto l4;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11710));
          i3 = *(OOC_INT8*)((_check_pointer(i1, 11778))+5);
          i4 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i4, (OOC_Scanner_Builder_BasicList__Symbol)i2, 67, i3);
          check = (OOC_SSA__Instr)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11806)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          address = (OOC_SSA__Result)i2;
          i1=i2;
l4:
          i2 = (OOC_INT32)pb;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11990))+12);
          i3 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i3);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11906)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 12, i3);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12018)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12058)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 4);
          i3 = (OOC_INT32)pb;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12138))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12147))+4);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12119)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Type)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12106)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12187)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 5);
          OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i2);
          return (OOC_SSA__Result)i2;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray(OOC_IR__Expression indexOp, OOC_INT32 *dim) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)indexOp;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12442)))), &_td_OOC_IR__IndexDesc);
          if (i1) goto l3;
          *dim = -1;
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          return (OOC_SSA__Result)i0;
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12499))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray((OOC_IR__Expression)i0, (void*)(OOC_INT32)dim);
          i1 = *dim;
          *dim = (i1+1);
          return (OOC_SSA__Result)i0;
l4:
          _failed_function(12301); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Index(OOC_IR__Index indexOp, OOC_SSA__Result baseArray, OOC_SSA__Result elementSize, OOC_INT32 dim) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_SSA__Result length;
          OOC_SSA__Instr newSize;
          OOC_SSA__Result baseResult;
          OOC_SSA__Instr instr;
          OOC_SSA__Result index;
          OOC_SSA__Instr check;
          OOC_SymbolTable__Type elementType;
          OOC_SSA__Instr scaledIndex;
          OOC_SSA__Opnd adrOpnd;
          OOC_SSA__Instr elementAdr;

          i0 = (OOC_INT32)pb;
          i1 = (OOC_INT32)baseArray;
          i2 = (OOC_INT32)indexOp;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13638))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13645))+4);
          i4 = dim;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13542)))), OOC_SSA__ProcBlockDesc_AddGetLengthInstr)),OOC_SSA__ProcBlockDesc_AddGetLengthInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13577)))), &_td_OOC_SSA__InstrDesc, 13577)), i4, (OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13656)))), &_td_OOC_SymbolTable__ArrayDesc, 13656)));
          length = (OOC_SSA__Result)i0;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13686)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 22, 9);
          newSize = (OOC_SSA__Instr)i3;
          i5 = (OOC_INT32)elementSize;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13749)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i5, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13799)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13857))+8);
          i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13865)))), &_td_OOC_IR__IndexDesc);
          if (i6) goto l3;
          baseResult = (OOC_SSA__Result)i1;
          _assert((i4==0), 127, 14057);
          
          goto l4;
l3:
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13921))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Index((OOC_IR__Index)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13932)))), &_td_OOC_IR__IndexDesc, 13932)), (OOC_SSA__Result)i1, (OOC_SSA__Result)i3, (i4-1));
          baseResult = (OOC_SSA__Result)i1;
          
l4:
          dim = (i4+1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14133))+8);
          i3 = *(OOC_INT8*)((_check_pointer(i3, 14140))+36);
          _assert((i3==12), 127, 14115);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14515))+8);
          instr = (OOC_SSA__Instr)i1;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14542))+24);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 14552));
          s = (OOC_SSA__Result)i3;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14595))+12);
          i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i3);
          index = (OOC_SSA__Result)i3;
          i4 = *(OOC_UINT8*)((_check_pointer(i2, 14623))+16);
          if (i4) goto l7;
          i0=i3;
          goto l8;
l7:
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14685));
          i6 = *(OOC_INT8*)((_check_pointer(i3, 14749))+5);
          i7 = (OOC_INT32)pb;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i7, (OOC_Scanner_Builder_BasicList__Symbol)i4, 66, i6);
          check = (OOC_SSA__Instr)i4;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14777)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i3, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14821)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i0, 1);
          index = (OOC_SSA__Result)i4;
          i0=i4;
l8:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14904))+24);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14904))+24);
          i6 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14914)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i4, (OOC_SSA__Result)i6);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14950)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
          s = (OOC_SSA__Result)i3;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15013))+4);
          elementType = (OOC_SymbolTable__Type)i3;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15046)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 22, 9);
          scaledIndex = (OOC_SSA__Instr)i3;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15113)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15161)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i5, 1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15229))+24);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15239))+8);
          adrOpnd = (OOC_SSA__Opnd)i4;
          i5 = (OOC_INT32)pb;
          i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15275)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i5, 19, 9);
          elementAdr = (OOC_SSA__Instr)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 15354));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15336)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i6, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15390)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i3, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15441)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i4, (OOC_SSA__Result)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15481)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 5);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15575))+4);
          i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15530)))), OOC_SSA__InstrDesc_SetSubclass)),OOC_SSA__InstrDesc_SetSubclass)((OOC_SSA__Instr)i1, i0);
          return (OOC_SSA__Result)i1;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectField(OOC_IR__SelectField selectOp) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Result baseResult;
          OOC_SSA__Instr instr;
          OOC_SSA__Opnd adrOpnd;
          OOC_SSA__Instr fieldAdr;

          i0 = (OOC_INT32)selectOp;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15981))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          baseResult = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16018))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 16025))+36);
          _assert((i2==12), 127, 16000);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16076))+8);
          instr = (OOC_SSA__Instr)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16118))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16128))+8);
          adrOpnd = (OOC_SSA__Opnd)i2;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16162)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 19, 9);
          fieldAdr = (OOC_SSA__Instr)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16239));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16221)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 1);
          i4 = (OOC_INT32)pb;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16309))+12);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 16316))+48);
          i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16286)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i4, i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16273)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16383)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i3);
          i2 = (OOC_INT32)pb;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16456))+12);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16434)))), OOC_SSA__ProcBlockDesc_GetDeclRef)),OOC_SSA__ProcBlockDesc_GetDeclRef)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16421)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 5);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16543))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16550))+40);
          i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16497)))), OOC_SSA__InstrDesc_SetSubclass)),OOC_SSA__InstrDesc_SetSubclass)((OOC_SSA__Instr)i1, i0);
          return (OOC_SSA__Result)i1;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp(OOC_IR__Compare op, OOC_INT8 _class) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Type typeOfString;
          OOC_SSA__Result left;
          OOC_SSA__Result right;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)op;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16844))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16850))+4);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeOfString((OOC_SymbolTable__Type)i1);
          typeOfString = (OOC_SymbolTable__Type)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16889))+12);
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
          left = (OOC_SSA__Result)i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16929))+16);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          i3 = i1!=(OOC_INT32)0;
          right = (OOC_SSA__Result)i0;
          if (i3) goto l3;
          i1=i0;i0=i2;
          goto l4;
l3:
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17031)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 16, 3);
          instr = (OOC_SSA__Instr)i3;
          i4 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17096)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
          i4 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17151)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i4, (OOC_SymbolTable__Type)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17138)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 12);
          OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
          OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i0, (OOC_SSA__Instr)i3);
          left = (OOC_SSA__Result)i3;
          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17338)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i0, 0);
          right = (OOC_SSA__Result)i0;
          i1=i0;i0=i3;
l4:
          i2 = (OOC_INT32)pb;
          i3 = _class;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17398)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, i3, 5);
          instr = (OOC_SSA__Instr)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17449)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17490)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          return (OOC_SSA__Instr)i2;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_NewObject(OOC_IR__NewObject _new) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;
          OOC_INT32 i;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17708)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 59, 9);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17770)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)_new;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17840))+4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17823)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Type)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17810)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17876))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l11;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17929))+8);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17937)), (OOC_INT32)0);
          i1 = i1-1;
          i3 = 0<=i1;
          i = 0;
          if (!i3) goto l11;
          i3=0;
l5_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17988))+8);
          i4 = _check_pointer(i4, 17996);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17996))*4);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17962)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          i3 = i3+1;
          i4 = i3<=i1;
          i = i3;
          if (i4) goto l5_loop;
l11:
          OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
          return (OOC_SSA__Instr)i0;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_NewBlock(OOC_IR__NewBlock _new) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18229)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 60, 9);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18290)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)_new;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18360))+4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18343)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Type)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18330)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18420))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18394)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
          return (OOC_SSA__Instr)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutAnd(OOC_IR__Expression left, OOC_IR__Expression right) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Instr select;
          OOC_SSA__Result storeAfterGuard;
          OOC_SSA__Result _bool;
          OOC_SSA__Instr collect;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18695)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
          select = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)left;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18752)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)s;
          storeAfterGuard = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18859)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i2, OOC_TRUE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18846)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)right;
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
          _bool = (OOC_SSA__Result)i2;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18950)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 6, 0);
          collect = (OOC_SSA__Instr)i3;
          i4 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19009)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19051)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19111)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19093)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19186)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i2, OOC_FALSE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19173)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19242)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 6, 0);
          collect = (OOC_SSA__Instr)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19301)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19370)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_FALSE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19357)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19437)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19419)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19504)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
          s = (OOC_SSA__Result)i1;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19553)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 14, 5);
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutOr(OOC_IR__Expression left, OOC_IR__Expression right) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Instr select;
          OOC_SSA__Result storeAfterGuard;
          OOC_SSA__Instr collect;
          OOC_SSA__Result _bool;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19828)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
          select = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)left;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19885)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)s;
          storeAfterGuard = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19992)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i2, OOC_TRUE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19979)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20047)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 6, 0);
          collect = (OOC_SSA__Instr)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20106)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20175)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_TRUE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20162)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20241)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20223)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20308)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_FALSE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20295)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)right;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          _bool = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20400)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 6, 0);
          collect = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)s;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20459)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20501)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20561)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20543)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20628)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
          s = (OOC_SSA__Result)i1;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20677)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 14, 5);
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeTest(OOC_IR__TypeTest test) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20882)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 62, 5);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)test;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20967))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20991))+8);
          i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i3);
          i4 = *(OOC_UINT8*)((_check_pointer(i1, 21037))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21057));
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i3, i4, (OOC_Scanner_Builder_BasicList__Symbol)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20943)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21144))+12);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21126)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Type)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21113)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 12);
          return (OOC_SSA__Instr)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard(OOC_IR__TypeGuard guard) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result design;
          OOC_SSA__Instr tag;
          auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard(OOC_SSA__Result adr, OOC_SSA__Result tag);
            
            OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard(OOC_SSA__Result adr, OOC_SSA__Result tag) {
              register OOC_INT32 i0,i1,i2,i3;
              OOC_SSA__Instr instr;

              i0 = (OOC_INT32)guard;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21502))+8);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21508))+24);
              i1 = (OOC_INT32)adr;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21579))+8);
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21518));
              i2 = *(OOC_INT8*)((_check_pointer(i2, 21586))+5);
              i3 = (OOC_INT32)pb;
              i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, 68, i2);
              instr = (OOC_SSA__Instr)i0;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21614)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
              i1 = (OOC_INT32)tag;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21656)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
              i1 = (OOC_INT32)pb;
              i2 = (OOC_INT32)guard;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21730))+8);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21736))+12);
              i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21711)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Type)i2);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21698)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 12);
              return (OOC_SSA__Instr)i0;
              ;
            }


          i0 = (OOC_INT32)guard;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21896))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21902))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          design = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21933))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 21940))+36);
          _assert((i2==12), 127, 21919);
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 21981))+13);
          if (i2) goto l3;
          return (OOC_SSA__Result)i1;
          goto l12;
l3:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22029))+8);
          i3 = *(OOC_UINT8*)((_check_pointer(i0, 22082))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22103));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22035))+8);
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i1, i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
          tag = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22130))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22136))+20);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22147)))), &_td_OOC_IR__VarDesc);
          if (i3) goto l6;
          i0=OOC_FALSE;
          goto l8;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22179))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22185))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22195))+4);
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22202)))), &_td_OOC_SymbolTable__RecordDesc);
          
l8:
          if (i0) goto l10;
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
          return (OOC_SSA__Result)i0;
          goto l12;
l10:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22391))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22398))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22408))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22391))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22398))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22468))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22475))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22485))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22495));
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22408))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22418)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i1);
          i0 = (OOC_INT32)design;
          return (OOC_SSA__Result)i0;
l12:
          _failed_function(21234); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeCast(OOC_IR__TypeCast cast) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT8 scDest;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)cast;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22872))+4);
          i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
          scDest = i1;
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22900)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 41, i1);
          instr = (OOC_SSA__Instr)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22978))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22951)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeConv(OOC_IR__TypeConv conv) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Result _const;
          OOC_SSA__Instr instr;
          Object__String fct;
          OOC_INT32 len;
          OOC_INT8 scDest;
          OOC_INT8 scSource;

          i0 = (OOC_INT32)conv;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23289))+4);
          i1 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i1);
          if (i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24865))+4);
          i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
          scDest = i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24923))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24929))+4);
          i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
          scSource = i2;
          i3 = OOC_SSA_Allocator__SubclassToBasicType(i1);
          i3 = OOC_SSA_Allocator__RegisterType(i3);
          i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
          i2 = OOC_SSA_Allocator__RegisterType(i2);
          i2 = i3!=i2;
          if (i2) goto l5;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25603))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          return (OOC_SSA__Result)i0;
          goto l20;
l5:
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25425)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 42, i1);
          instr = (OOC_SSA__Instr)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25507))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25480)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          goto l20;
l7:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23403))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          _const = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23443)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 73, 9);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23512))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 23517))+4);
          i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23527)))), &_td_OOC_SymbolTable__PredefTypeDesc, 23527)), 23538))+32);
          switch (i3) {
          case 1:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewLatin1Char", 22);
            fct = (Object__String)i3;
            goto l16;
          case 13:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewLatin1Region", 24);
            fct = (Object__String)i3;
            goto l16;
          case 2:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewUCS2Char", 20);
            fct = (Object__String)i3;
            goto l16;
          case 14:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewUCS2Region", 22);
            fct = (Object__String)i3;
            goto l16;
          case 3:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewUCS4Char", 20);
            fct = (Object__String)i3;
            goto l16;
          case 15:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewUCS4Region", 22);
            fct = (Object__String)i3;
            goto l16;
          default:
            _failed_case(i3, 23503);
            goto l16;
          }
l16:
          i3 = (OOC_INT32)pb;
          i4 = (OOC_INT32)fct;
          i4 = (OOC_INT32)Object_Boxed__NewString((Object__String)i4);
          i5 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24236)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i3, (Object_Boxed__Object)i4, (OOC_SymbolTable__Type)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24225)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24390)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24451))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24456))+4);
          i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
          if (!i1) goto l19;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24491))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24500)))), &_td_OOC_IR__ConstDesc, 24500)), 24506))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24519)))), &_td_Object_Boxed__StringDesc, 24519)), 24526));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 24532));
          len = i0;
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24569)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, (i0+1));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24558)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24658)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, 0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24647)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24726)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24715)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
l19:
          return (OOC_SSA__Result)i2;
l20:
          _failed_function(23059); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectProc(OOC_IR__SelectProc selectOp) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_IR__Expression object;

          i0 = (OOC_INT32)selectOp;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 25801))+28);
          if (i1) goto l7;
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25988)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 63, 9);
          instr = (OOC_SSA__Instr)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26063))+8);
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26074)))), &_td_OOC_IR__DerefDesc);
          if (i2) goto l5;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26198))+8);
          object = (OOC_IR__Expression)i2;
          
          goto l6;
l5:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26122))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26136)))), &_td_OOC_IR__DerefDesc, 26136)), 26142))+8);
          object = (OOC_IR__Expression)i2;
          
l6:
          i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
          i4 = *(OOC_UINT8*)((_check_pointer(i0, 26367))+12);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26426));
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i3, i4, (OOC_Scanner_Builder_BasicList__Symbol)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26240)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
          i1 = (OOC_INT32)instr;
          i2 = (OOC_INT32)pb;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26495))+20);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26473)))), OOC_SSA__ProcBlockDesc_GetDeclRef)),OOC_SSA__ProcBlockDesc_GetDeclRef)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26460)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          i0 = (OOC_INT32)instr;
          return (OOC_SSA__Result)i0;
          goto l8;
l7:
          i1 = (OOC_INT32)pb;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25889))+20);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25867)))), OOC_SSA__ProcBlockDesc_GetAddress)),OOC_SSA__ProcBlockDesc_GetAddress)((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i0);
          return (OOC_SSA__Result)i0;
l8:
          _failed_function(25679); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Concat(OOC_IR__Concat expr) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;
          OOC_INT32 i;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26716)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 17, 9);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)expr;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26791))+8);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 26799)), (OOC_INT32)0);
          i2 = i2-1;
          i3 = 0<=i2;
          i = 0;
          if (!i3) goto l8;
          i3=0;
l3_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26846))+8);
          i4 = _check_pointer(i4, 26854);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 26854))*4);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26822)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          i3 = i3+1;
          i4 = i3<=i2;
          i = i3;
          if (i4) goto l3_loop;
l8:
          return (OOC_SSA__Result)i0;
          ;
        }


      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26954)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l186;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27163)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l184;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27240)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l182;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27568)))), &_td_OOC_IR__TypeRefDesc);
      if (i1) goto l180;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27669)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l174;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28050)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l168;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28532)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l166;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28596)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l164;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28868)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l162;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28944)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l160;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29010)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l158;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29071)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l156;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29132)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l154;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29238)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l152;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29299)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l150;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29371)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l144;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29761)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l142;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29941)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l140;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30184)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l138;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30382)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l136;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30637)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l134;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30827)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l132;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31035)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l126;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31406)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l124;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31608)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l113;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32342)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l106;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32683)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l97;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33329)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l95;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33582)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l88;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33986)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l86;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34051)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34669)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l73;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34732)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l71;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34802)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l69;
      Log__Type("++ Unknown type in Expression", 30, (void*)i0);
      _assert(OOC_FALSE, 127, 35224);
      goto l191;
l69:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Call((OOC_IR__Call)i0);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35041)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35086)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      return (OOC_SSA__Result)i0;
      goto l191;
l71:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_NewBlock((OOC_IR__NewBlock)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l73:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_NewObject((OOC_IR__NewObject)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l75:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 34084))+8);
      switch (i1) {
      case 10:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 25);
        return (OOC_SSA__Result)i0;
        goto l191;
      case 11:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 26);
        return (OOC_SSA__Result)i0;
        goto l191;
      case 12:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 27);
        return (OOC_SSA__Result)i0;
        goto l191;
      case 13:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 28);
        return (OOC_SSA__Result)i0;
        goto l191;
      case 14:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 29);
        return (OOC_SSA__Result)i0;
        goto l191;
      case 15:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 30);
        return (OOC_SSA__Result)i0;
        goto l191;
      default:
        Log__Type("++ Unknown variant of Compare in Expression", 44, (void*)i0);
        _assert(OOC_FALSE, 127, 34627);
        goto l191;
      }
l86:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Concat((OOC_IR__Concat)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l88:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 33621))+8);
      switch (i1) {
      case 22:
        opcode = 39;
        goto l93;
      case 23:
        opcode = 40;
        goto l93;
      default:
        _failed_case(i1, 33612);
        goto l93;
      }
l93:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33816))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33820))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i3 = opcode;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33769)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i3, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33869))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33842)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33928))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33901)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l95:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33421))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33365)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 44, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33470))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33443)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33530))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33503)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l97:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 32714))+8);
      switch (i1) {
      case 6:
        opcode = 35;
        goto l104;
      case 7:
        opcode = 38;
        goto l104;
      case 8:
        opcode = 34;
        goto l104;
      case 9:
        opcode = 36;
        goto l104;
      default:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 33043))+8);
        Log__Int("++ Unknown variant of SetOp in Expression", 42, i1);
        _assert(OOC_FALSE, 127, 33065);
        goto l104;
      }
l104:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33160))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 33165))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i3 = opcode;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33113)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i3, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33214))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33187)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33274))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33247)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l106:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 32377))+8);
      switch (i1) {
      case 20:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32441))+12);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32453))+16);
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutAnd((OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
        return (OOC_SSA__Result)i0;
        goto l191;
      case 21:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32513))+12);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32525))+16);
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutOr((OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
        return (OOC_SSA__Result)i0;
        goto l191;
      default:
        Log__Type("++ Unknown variant of BooleanOp in Expression", 46, (void*)i0);
        _assert(OOC_FALSE, 127, 32633);
        goto l191;
      }
l113:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 31645))+8);
      switch (i1) {
      case 0:
        opcode = 19;
        goto l122;
      case 1:
        opcode = 20;
        goto l122;
      case 4:
        opcode = 22;
        goto l122;
      case 5:
        opcode = 24;
        goto l122;
      case 2:
        opcode = 23;
        goto l122;
      case 3:
        opcode = 23;
        goto l122;
      default:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 32056))+8);
        Log__Int("++ Unknown variant of BinaryArith in Expression", 48, i1);
        _assert(OOC_FALSE, 127, 32078);
        goto l122;
      }
l122:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32173))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32178))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i3 = opcode;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32126)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i3, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32227))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32200)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32287))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32260)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l124:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31488))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31437)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 54, i2);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31538))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31511)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l126:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 31064))+16);
      if (i1) goto l129;
      opcode = 52;
      i1=52;
      goto l130;
l129:
      opcode = 53;
      i1=53;
l130:
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31234))+4);
      i3 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i3);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31187)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, i1, i3);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31284))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31257)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31345))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31318)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l132:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30915))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30861)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 50, i2);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30965))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30938)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l134:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30719))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30668)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 49, i2);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30769))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30742)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l136:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30464))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30413)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 48, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30514))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30487)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30575))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30548)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l138:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30266))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30215)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 45, i2);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30316))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30289)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l140:
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29978)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 43, 5);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30067))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30040)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30130))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30103)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l142:
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29792)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 33, 5);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29875))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29848)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l144:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29417))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 10);
      if (i1) goto l147;
      opcode = 21;
      i1=21;
      goto l148;
l147:
      opcode = 37;
      i1=37;
l148:
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29645))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 29654))+4);
      i3 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i3);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29567)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, i1, i3);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29704))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29677)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l191;
l150:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard((OOC_IR__TypeGuard)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l152:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeTest((OOC_IR__TypeTest)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l154:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29176))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29202))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i1, (OOC_SSA__Result)i0, OOC_FALSE, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0);
      return (OOC_SSA__Result)i0;
      goto l191;
l156:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeConv((OOC_IR__TypeConv)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l158:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeCast((OOC_IR__TypeCast)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l160:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectProc((OOC_IR__SelectProc)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l162:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectField((OOC_IR__SelectField)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l164:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray((OOC_IR__Expression)i0, (void*)(OOC_INT32)&dim);
      baseArray = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)expr;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength((OOC_SSA__ProcBlock)i1, (OOC_IR__Expression)i2, -1, (OOC_SSA__Result)i0);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateSize((OOC_SSA__ProcBlock)i1, (OOC_IR__Expression)i2, (OOC_SSA__Instr)i3);
      i3 = dim;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Index((OOC_IR__Index)i2, (OOC_SSA__Result)i0, (OOC_SSA__Result)i1, i3);
      return (OOC_SSA__Result)i0;
      goto l191;
l166:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Deref((OOC_IR__Deref)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l168:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 28078))+8);
      i1 = i1==16;
      if (i1) goto l171;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28270))+20);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      baseArray = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28310))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 28325))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28310))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 28325))+4);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 28367))+16);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28336)))), &_td_OOC_SymbolTable__ArrayDesc, 28336)), 28342)))), OOC_SymbolTable__ArrayDesc_GetNthElementType)),OOC_SymbolTable__ArrayDesc_GetNthElementType)((OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 28336)))), &_td_OOC_SymbolTable__ArrayDesc, 28336)), i4);
      type = (OOC_SymbolTable__Type)i2;
      i3 = (OOC_INT32)pb;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 28441))+16);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 28394)))), OOC_SSA__ProcBlockDesc_AddGetLengthInstr)),OOC_SSA__ProcBlockDesc_AddGetLengthInstr)((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28429)))), &_td_OOC_SSA__InstrDesc, 28429)), i0, (OOC_SymbolTable__Array)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28497)))), &_td_OOC_SymbolTable__ArrayDesc, 28497)));
      return (OOC_SSA__Result)i0;
      goto l191;
l171:
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28152))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28171)))), &_td_OOC_IR__ConstDesc, 28171)), 28177))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28191)))), &_td_Object_Boxed__StringDesc, 28191)), 28198));
      i0 = *(OOC_INT32*)(_check_pointer(i0, 28205));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28133)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, (i0+1));
      return (OOC_SSA__Result)i0;
      goto l191;
l174:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27712))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      res = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27738))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 27745))+36);
      i1 = i1==12;
      if (i1) goto l177;
      return (OOC_SSA__Result)i0;
      goto l191;
l177:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27793))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27793))+8);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27800)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 4);
      return (OOC_SSA__Result)i0;
      goto l191;
l180:
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27619))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27630)))), &_td_OOC_SymbolTable__TypeDeclDesc, 27630)), 27639))+40);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27601)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l182:
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27322))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27271)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 12, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27345)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27416))+8);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27398)))), OOC_SSA__ProcBlockDesc_GetAddress)),OOC_SSA__ProcBlockDesc_GetAddress)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27385)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 4);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27484))+8);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27466)))), OOC_SSA__ProcBlockDesc_GetDeclRef)),OOC_SSA__ProcBlockDesc_GetDeclRef)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27453)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 5);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
      return (OOC_SSA__Result)i1;
      goto l191;
l184:
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27219))+8);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27201)))), OOC_SSA__ProcBlockDesc_GetAddress)),OOC_SSA__ProcBlockDesc_GetAddress)((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l186:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26984))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l189;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27104))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27117))+4);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27088)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i2, (OOC_SymbolTable__Type)i0);
      return (OOC_SSA__Result)i0;
      goto l191;
l189:
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27048))+4);
      i2 = (OOC_INT32)OOC_SSA__nil;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27023)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i2, (OOC_SymbolTable__Type)i0);
      return (OOC_SSA__Result)i0;
l191:
      _failed_function(11167); return 0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Assert(OOC_IR__Assert assert) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Instr instr;
      OOC_SSA__Result predicate;

      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35398))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l6;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 35585))+16);
      i1 = !i1;
      if (!i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35639))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      predicate = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35694));
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, 64, 0);
      instr = (OOC_SSA__Instr)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35745)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 35825))+12);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35804)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35791)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      goto l7;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35463));
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, 65, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)pb;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 35546))+12);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35525)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i2, i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35512)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
l7:
      return;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Assignment(OOC_IR__Assignment assignment) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result get;

      i0 = (OOC_INT32)assignment;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36218))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      get = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36299))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36246)))), OOC_SSA__ProcBlockDesc_AddSetInstr)),OOC_SSA__ProcBlockDesc_AddSetInstr)((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36269)))), &_td_OOC_SSA__InstrDesc, 36269)), (OOC_SSA__Result)i0);
      return (OOC_SSA__Instr)i0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Call(OOC_IR__Call call) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SSA__Instr instr;
      OOC_INT32 i;
      OOC_SymbolTable__VarDecl fpar;
      OOC_SymbolTable__Type type;
      OOC_CHAR8 isVarParam;

      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)call;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36581))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36529)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 55, i2);
      instr = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36634))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36690))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 36698))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36602)))), OOC_SSA__InstrDesc_AddTypedOpnd)),OOC_SSA__InstrDesc_AddTypedOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 3, (OOC_SymbolTable__Type)i3, OOC_FALSE);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36743))+12);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 36754)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l12;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36778))+16);
      i4 = _check_pointer(i4, 36790);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 36790))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36960))+12);
      i4 = _check_pointer(i4, 36971);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 36971))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 36974))+4);
      type = (OOC_SymbolTable__Type)i4;
      isVarParam = OOC_FALSE;
      i5=OOC_FALSE;
      goto l7;
l6:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36828))+16);
      i4 = _check_pointer(i4, 36840);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 36840))*4);
      fpar = (OOC_SymbolTable__VarDecl)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 36867))+40);
      type = (OOC_SymbolTable__Type)i5;
      i4 = *(OOC_UINT8*)((_check_pointer(i4, 36903))+51);
      isVarParam = i4;
      {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l7:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37071))+12);
      i6 = _check_pointer(i6, 37082);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 37082))*4);
      i6 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37039)))), OOC_SSA__InstrDesc_AddTypedOpnd)),OOC_SSA__InstrDesc_AddTypedOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i6, 1, (OOC_SymbolTable__Type)i4, i5);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l3_loop;
l12:
      return (OOC_SSA__Instr)i0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Return(OOC_IR__Return _return) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result expr;
      OOC_SSA__Instr instr;
      OOC_SSA__Result store;

      i0 = (OOC_INT32)_return;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37320))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37579)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 7, 0);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37635)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      
      goto l4;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37375))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      expr = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37414)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 7, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37470)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37510)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 9);
      i0=i1;
l4:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37700)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      store = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37736));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37736));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37750)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_IfStatm(OOC_IR__IfStatm ifStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr select;
      OOC_SSA__Result storeAfterGuard;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37958)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)ifStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38043))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38013)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterGuard = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38124)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38111)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38219))+12);
      i4 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38170)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38298)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38285)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38350))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38512)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38437))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38388)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l4:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38579)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_WithStatm(OOC_IR__WithStatm withStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr select;
      OOC_SSA__Result storeAfterGuard;
      OOC_IR__Expression var;
      OOC_SSA__Instr typeTag;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38811)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)withStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38898))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38866)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterGuard = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38979)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38966)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39076))+12);
      i4 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39025)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39155)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39142)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39209))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l7;
      i3 = *(OOC_UINT8*)((_check_pointer(i1, 39378))+20);
      if (i3) goto l5;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39802)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l8;
l5:
      s = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39450))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39461)))), &_td_OOC_IR__TypeTestDesc, 39461)), 39470))+8);
      var = (OOC_IR__Expression)i2;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 39544));
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i3, OOC_TRUE, (OOC_Scanner_Builder_BasicList__Symbol)i4);
      typeTag = (OOC_SSA__Instr)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 39596));
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, 70, 0);
      instr = (OOC_SSA__Instr)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39682)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39727)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39298))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39247)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l8:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39869)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_CaseStatm(OOC_IR__CaseStatm caseStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr select;
      OOC_SSA__Result storeAfterSelect;
      OOC_INT32 i;
      OOC_SSA__Instr instr;
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CaseStatm_Labels(OOC_IR__CaseLabels labels);
        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CaseStatm_Labels(OOC_IR__CaseLabels labels) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;
          OOC_INT32 i;
          OOC_IR__Expression l;
          OOC_SSA__Result value;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40257)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 74, 0);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)labels;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 40333)), (OOC_INT32)0);
          i2 = i2-1;
          i3 = 0<=i2;
          i = 0;
          if (!i3) goto l12;
          i3=0;
l3_loop:
          i4 = _check_pointer(i1, 40362);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 40362))*4);
          l = (OOC_IR__Expression)i4;
          i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 40383)))), &_td_OOC_IR__SetRangeDesc);
          if (i5) goto l6;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          value = (OOC_SSA__Result)i4;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40589)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40635)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          goto l7;
l6:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 40441))+8);
          i5 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40417)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i5, 1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 40502))+12);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40478)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
l7:
          i3 = i3+1;
          i4 = i3<=i2;
          i = i3;
          if (i4) goto l3_loop;
l12:
          return (OOC_SSA__Instr)i0;
          ;
        }


      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40764)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40851))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40819)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)s;
      storeAfterSelect = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40937))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 40947)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l11;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)caseStatm;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 40981))+12);
      i3 = _check_pointer(i3, 40991);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 40991))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 40994))+8);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 41002)), (OOC_INT32)0);
      i3 = i3>0;
      if (!i3) goto l6;
      i3 = (OOC_INT32)select;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41059))+12);
      i2 = _check_pointer(i2, 41069);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 41069))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41072))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CaseStatm_Labels((OOC_IR__CaseLabels)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 41031)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 16);
      i1 = (OOC_INT32)select;
      i2 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41229))+12);
      i2 = _check_pointer(i2, 41239);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = i;
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 41239))*4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41242))+12);
      i3 = (OOC_INT32)pb;
      i4 = (OOC_INT32)storeAfterSelect;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41140)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
l6:
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)select;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41349)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41336)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41403))+16);
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l18;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 41572))+20);
      if (i2) goto l16;
      i1 = (OOC_INT32)storeAfterSelect;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41872)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 16);
      goto l19;
l16:
      i2 = (OOC_INT32)storeAfterSelect;
      s = (OOC_SSA__Result)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 41665));
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, 69, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41768))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 41778));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41751)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41810)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 16);
      goto l19;
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41491))+16);
      i2 = (OOC_INT32)storeAfterSelect;
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41439)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 16);
l19:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41943)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_RepeatStatm(OOC_IR__RepeatStatm repeatStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr start;
      OOC_SSA__Result guard;
      OOC_SSA__Instr exit;
      OOC_SSA__Instr select;
      OOC_SSA__Instr end;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42150)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42207)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42250)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)repeatStatm;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42387))+8);
      i4 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i1, (OOC_IR__StatementSeq)i3);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42434))+12);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      guard = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42509)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 9, 0);
      exit = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42560)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42605)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 5, 0);
      select = (OOC_SSA__Instr)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42660)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42714)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42701)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42775)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42760)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42839)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42826)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42886)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42928)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43020)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 11, 0);
      end = (OOC_SSA__Instr)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43074)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i3 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1, (OOC_SSA__Result)i3);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 43261));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43246)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43313)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_WhileStatm(OOC_IR__WhileStatm whileStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_SSA__Result guard1;
      OOC_SSA__Result storeAfterGuard1;
      OOC_SSA__Instr start;
      OOC_SSA__Result guard2;
      OOC_SSA__Instr exit;
      OOC_SSA__Instr select;
      OOC_SSA__Instr end;

      i0 = (OOC_INT32)whileStatm;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43711))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      guard1 = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)s;
      storeAfterGuard1 = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43812)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 10, 0);
      start = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43869)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43912)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44048))+12);
      i6 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i6, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i5);
      s = (OOC_SSA__Result)i4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44095))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      guard2 = (OOC_SSA__Result)i0;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 44168)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i4, 9, 0);
      exit = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 44219)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 2);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44264)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i5, 5, 0);
      select = (OOC_SSA__Instr)i5;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44319)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44374)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44361)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44420)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44470)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44457)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 44532)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i4, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44517)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44588)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i5, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44680)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 11, 0);
      end = (OOC_SSA__Instr)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44734)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i5 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i0, (OOC_SSA__Result)i5);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 44921));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44906)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 11);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45046)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 5, 0);
      select = (OOC_SSA__Instr)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45101)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45156)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45143)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45216)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45202)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45280)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45267)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45327)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45391)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_ForStatm(OOC_IR__ForStatm forStatm) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Result endValue;
      OOC_SSA__Result stepValue;
      OOC_SSA__Result v;
      OOC_SSA__Result guard1;
      OOC_SSA__Result storeAfterGuard1;
      OOC_SSA__Instr start;
      OOC_SSA__Instr dummy;
      OOC_SSA__Result guard2;
      OOC_SSA__Instr exit;
      OOC_SSA__Instr select;
      OOC_SSA__Instr end;
      auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard(OOC_SSA__Result bound);
        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard(OOC_SSA__Result bound) {
          register OOC_INT32 i0,i1;
          OOC_INT8 cmpClass;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)forStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45772))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45782)))), &_td_OOC_IR__ConstDesc, 45782)), 45788))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45772))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45782)))), &_td_OOC_IR__ConstDesc, 45782)), 45788))+8);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45803)))), &_td_Object_BigInt__BigIntDesc, 45803)), 45810)))), Object_BigInt__BigIntDesc_Sign)),Object_BigInt__BigIntDesc_Sign)((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45803)))), &_td_Object_BigInt__BigIntDesc, 45803)));
          i0 = i0>=0;
          if (i0) goto l3;
          cmpClass = 30;
          i0=30;
          goto l4;
l3:
          cmpClass = 28;
          i0=28;
l4:
          i1 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45943)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i0, 5);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)forStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46028))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45997)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)bound;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46060)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          return (OOC_SSA__Instr)i0;
          ;
        }


      i0 = (OOC_INT32)forStatm;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46587))+16);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      endValue = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46634))+20);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      stepValue = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46674))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      v = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46746))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 46697)))), OOC_SSA__ProcBlockDesc_AddSetInstr)),OOC_SSA__ProcBlockDesc_AddSetInstr)((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46718)))), &_td_OOC_SSA__InstrDesc, 46718)), (OOC_SSA__Result)i0);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard((OOC_SSA__Result)i1);
      guard1 = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)s;
      storeAfterGuard1 = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46890)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46947)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46990)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)forStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47124))+24);
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i0, (OOC_IR__StatementSeq)i2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47234))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47239))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47150)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 19, i2);
      dummy = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47280))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      v = (OOC_SSA__Result)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47299)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i2 = (OOC_INT32)stepValue;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47335)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47383)))), OOC_SSA__ProcBlockDesc_AddSetInstr)),OOC_SSA__ProcBlockDesc_AddSetInstr)((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47404)))), &_td_OOC_SSA__InstrDesc, 47404)), (OOC_SSA__Result)i0);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)endValue;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard((OOC_SSA__Result)i0);
      guard2 = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47518)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 9, 0);
      exit = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47569)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47614)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 5, 0);
      select = (OOC_SSA__Instr)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47669)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47724)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47711)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47770)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47820)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47807)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47882)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47867)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47938)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48030)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 11, 0);
      end = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)start;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48084)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i0, (OOC_SSA__Result)i3);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 48271));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48256)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 11);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48396)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 5, 0);
      select = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)guard1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48451)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48506)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i2, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48493)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48566)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48552)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48630)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48617)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)storeAfterGuard1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48677)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48735)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_LoopStatm(OOC_IR__LoopStatm loopStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr start;
      OOC_SSA__Instr end;
      OOC_SSA__Instr oldSelect;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48908)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48965)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49008)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49094)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 11, 0);
      end = (OOC_SSA__Instr)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49148)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49186)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 13);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49263)))), OOC_SSA__ProcBlockDesc_SetLoopContext)),OOC_SSA__ProcBlockDesc_SetLoopContext)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
      oldSelect = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)loopStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49362))+8);
      i3 = (OOC_INT32)pb;
      i4 = (OOC_INT32)s;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i2);
      s = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i1, (OOC_SSA__Result)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49612)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49655)))), OOC_SSA__ProcBlockDesc_SetLoopContext)),OOC_SSA__ProcBlockDesc_SetLoopContext)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Exit(OOC_IR__Exit exit) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr instr;
      OOC_SSA__Result store;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49823)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 9, 0);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49875)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49929)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      store = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49965))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49965))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49978)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_CopyParameter(OOC_IR__CopyParameter cp) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr len;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)cp;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50179))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50205))+8);
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength((OOC_SSA__ProcBlock)i3, (OOC_IR__Expression)i1, -1, (OOC_SSA__Result)i2);
      len = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50253))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50260))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50345))+8);
      i4 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateSize((OOC_SSA__ProcBlock)i2, (OOC_IR__Expression)i0, (OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 50232)))), OOC_SSA__ProcBlockDesc_AddCopyParameter)),OOC_SSA__ProcBlockDesc_AddCopyParameter)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__VarDecl)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50271)))), &_td_OOC_SymbolTable__VarDeclDesc, 50271)), (OOC_SSA__Result)i4, (OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
      instr = (OOC_SSA__Instr)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50376)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_MoveBlock(OOC_IR__MoveBlock move) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Result source;
      OOC_SSA__Result dest;
      OOC_SSA__Result size;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)move;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50597))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50638))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50677))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      size = (OOC_SSA__Result)i0;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50704)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 18, 0);
      instr = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50761)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50799)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50844)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50888)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i3;
      ;
    }


  i0 = (OOC_INT32)statmSeq;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 51004)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l72;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)statmSeq;
  i2 = _check_pointer(i2, 51035);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 51035))*4);
  statm = (OOC_IR__Statement)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51056)))), &_td_OOC_IR__AssertDesc);
  if (i2) goto l66;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51109)))), &_td_OOC_IR__AssignmentDesc);
  if (i2) goto l64;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51190)))), &_td_OOC_IR__CallDesc);
  if (i2) goto l62;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51255)))), &_td_OOC_IR__ReturnDesc);
  if (i2) goto l60;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51308)))), &_td_OOC_IR__IfStatmDesc);
  if (i2) goto l58;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51363)))), &_td_OOC_IR__WithStatmDesc);
  if (i2) goto l56;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51422)))), &_td_OOC_IR__CaseStatmDesc);
  if (i2) goto l54;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51493)))), &_td_OOC_IR__RepeatStatmDesc);
  if (i2) goto l52;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51568)))), &_td_OOC_IR__WhileStatmDesc);
  if (i2) goto l50;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51629)))), &_td_OOC_IR__ForStatmDesc);
  if (i2) goto l48;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51686)))), &_td_OOC_IR__LoopStatmDesc);
  if (i2) goto l46;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51745)))), &_td_OOC_IR__ExitDesc);
  if (i2) goto l44;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51802)))), &_td_OOC_IR__CopyDesc);
  if (i2) goto l42;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51871)))), &_td_OOC_IR__CopyParameterDesc);
  if (i2) goto l40;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51950)))), &_td_OOC_IR__CopyStringDesc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52019)))), &_td_OOC_IR__MoveBlockDesc);
  if (i2) goto l36;
  Log__Type("++ Unknown statement class in StatmSeq", 39, (void*)i1);
  _assert(OOC_FALSE, 127, 52158);
  goto l67;
l36:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_MoveBlock((OOC_IR__MoveBlock)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l67;
l38:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CopyString((OOC_IR__CopyString)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l67;
l40:
  OOC_SSA_IRtoSSA__StatmSeq_CopyParameter((OOC_IR__CopyParameter)i1);
  goto l67;
l42:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Copy((OOC_IR__Copy)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l67;
l44:
  OOC_SSA_IRtoSSA__StatmSeq_Exit((OOC_IR__Exit)i1);
  goto l67;
l46:
  OOC_SSA_IRtoSSA__StatmSeq_LoopStatm((OOC_IR__LoopStatm)i1);
  goto l67;
l48:
  OOC_SSA_IRtoSSA__StatmSeq_ForStatm((OOC_IR__ForStatm)i1);
  goto l67;
l50:
  OOC_SSA_IRtoSSA__StatmSeq_WhileStatm((OOC_IR__WhileStatm)i1);
  goto l67;
l52:
  OOC_SSA_IRtoSSA__StatmSeq_RepeatStatm((OOC_IR__RepeatStatm)i1);
  goto l67;
l54:
  OOC_SSA_IRtoSSA__StatmSeq_CaseStatm((OOC_IR__CaseStatm)i1);
  goto l67;
l56:
  OOC_SSA_IRtoSSA__StatmSeq_WithStatm((OOC_IR__WithStatm)i1);
  goto l67;
l58:
  OOC_SSA_IRtoSSA__StatmSeq_IfStatm((OOC_IR__IfStatm)i1);
  goto l67;
l60:
  OOC_SSA_IRtoSSA__StatmSeq_Return((OOC_IR__Return)i1);
  goto l67;
l62:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Call((OOC_IR__Call)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l67;
l64:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Assignment((OOC_IR__Assignment)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l67;
l66:
  OOC_SSA_IRtoSSA__StatmSeq_Assert((OOC_IR__Assert)i1);
l67:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l72:
  i0 = (OOC_INT32)s;
  return (OOC_SSA__Result)i0;
  ;
}

void OOC_SSA_IRtoSSA__DiscardGets(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;
  OOC_SSA__Result storeOut;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52350))+8);
  i2 = i1!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i1;
  if (!i2) goto l15;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52409))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 52437))+36);
  i3 = i3==12;
  if (i3) goto l6;
  i3=OOC_FALSE;
  goto l8;
l6:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52468))+12);
  i3 = i3==(OOC_INT32)0;
  
l8:
  if (!i3) goto l10;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52515)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
  storeOut = (OOC_SSA__Result)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52571))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 52581));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52551)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i3, (OOC_SSA__Result)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52599)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l10:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1=i2;
  goto l3_loop;
l15:
  return;
  ;
}

void OOC_OOC_SSA_IRtoSSA_init(void) {

  return;
  ;
}

/* --- */
