#include <OOC/SSA/IRtoSSA.d>
#include <__oo2c.h>
#include <setjmp.h>

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
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext(OOC_SSA__Result storeIn, OOC_INT32 n);
  auto void OOC_SSA_IRtoSSA__StatmSeq_Return(OOC_IR__Return _return);
  auto void OOC_SSA_IRtoSSA__StatmSeq_IfStatm(OOC_IR__IfStatm ifStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_WithStatm(OOC_IR__WithStatm withStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_CaseStatm(OOC_IR__CaseStatm caseStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_RepeatStatm(OOC_IR__RepeatStatm repeatStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_WhileStatm(OOC_IR__WhileStatm whileStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_ForStatm(OOC_IR__ForStatm forStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_LoopStatm(OOC_IR__LoopStatm loopStatm);
  auto void OOC_SSA_IRtoSSA__StatmSeq_Exit(OOC_IR__Exit exit);
  auto void OOC_SSA_IRtoSSA__StatmSeq_TryStatm(OOC_IR__TryStatm _try);
  auto void OOC_SSA_IRtoSSA__StatmSeq_CopyParameter(OOC_IR__CopyParameter cp);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_MoveBlock(OOC_IR__MoveBlock move);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Raise(OOC_IR__Raise raise);
    
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
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23443)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 80, 9);
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

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext(OOC_SSA__Result storeIn, OOC_INT32 n) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr instr;

      i0 = n;
      i1 = i0!=0;
      if (i1) goto l3;
      i0 = (OOC_INT32)storeIn;
      return (OOC_SSA__Result)i0;
      goto l4;
l3:
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37352)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 78, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)storeIn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37419)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37474)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i2, i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37463)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37522)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      return (OOC_SSA__Result)i0;
l4:
      _failed_function(37203); return 0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Return(OOC_IR__Return _return) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Result expr;
      OOC_SSA__Instr instr;
      OOC_SSA__Result store;

      i0 = (OOC_INT32)_return;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37755))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38087)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 7, 0);
      instr = (OOC_SSA__Instr)i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 38183))+12);
      i2 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i2, i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38143)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 2);
      i0=i1;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37810))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      expr = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37849)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 7, 0);
      instr = (OOC_SSA__Instr)i2;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 37945))+12);
      i3 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i3, i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37905)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38018)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 9);
      i0=i2;
l4:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38281)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      store = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 38317));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 38317));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38331)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_IfStatm(OOC_IR__IfStatm ifStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr select;
      OOC_SSA__Result storeAfterGuard;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38539)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)ifStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38624))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38594)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterGuard = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38705)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38692)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38800))+12);
      i4 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38751)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 38879)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38866)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38931))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39093)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39018))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38969)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l4:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39160)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39392)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)withStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39479))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39447)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterGuard = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39560)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39547)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39657))+12);
      i4 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39606)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39736)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i3, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39723)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39790))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l7;
      i3 = *(OOC_UINT8*)((_check_pointer(i1, 39959))+20);
      if (i3) goto l5;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40383)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l8;
l5:
      s = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40031))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 40042)))), &_td_OOC_IR__TypeTestDesc, 40042)), 40051))+8);
      var = (OOC_IR__Expression)i2;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40125));
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i3, OOC_TRUE, (OOC_Scanner_Builder_BasicList__Symbol)i4);
      typeTag = (OOC_SSA__Instr)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40177));
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, 70, 0);
      instr = (OOC_SSA__Instr)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40263)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40308)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39879))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39828)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l8:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40450)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
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
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40838)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 81, 0);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)labels;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 40914)), (OOC_INT32)0);
          i2 = i2-1;
          i3 = 0<=i2;
          i = 0;
          if (!i3) goto l12;
          i3=0;
l3_loop:
          i4 = _check_pointer(i1, 40943);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 40943))*4);
          l = (OOC_IR__Expression)i4;
          i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 40964)))), &_td_OOC_IR__SetRangeDesc);
          if (i5) goto l6;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          value = (OOC_SSA__Result)i4;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41170)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41216)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          goto l7;
l6:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 41022))+8);
          i5 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i5);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40998)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i5, 1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 41083))+12);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41059)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41345)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41432))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41400)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)s;
      storeAfterSelect = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41518))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 41528)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l11;
      i1=0;
l3_loop:
      i2 = (OOC_INT32)caseStatm;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41562))+12);
      i3 = _check_pointer(i3, 41572);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 41572))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 41575))+8);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 41583)), (OOC_INT32)0);
      i3 = i3>0;
      if (!i3) goto l6;
      i3 = (OOC_INT32)select;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41640))+12);
      i2 = _check_pointer(i2, 41650);
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 41650))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41653))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CaseStatm_Labels((OOC_IR__CaseLabels)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 41612)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 16);
      i1 = (OOC_INT32)select;
      i2 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41810))+12);
      i2 = _check_pointer(i2, 41820);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = i;
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 41820))*4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41823))+12);
      i3 = (OOC_INT32)pb;
      i4 = (OOC_INT32)storeAfterSelect;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41721)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
l6:
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)select;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41930)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41917)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41984))+16);
      i2 = i2!=(OOC_INT32)0;
      if (i2) goto l18;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 42153))+20);
      if (i2) goto l16;
      i1 = (OOC_INT32)storeAfterSelect;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42453)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 16);
      goto l19;
l16:
      i2 = (OOC_INT32)storeAfterSelect;
      s = (OOC_SSA__Result)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42246));
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, 69, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42349))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 42359));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42332)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42391)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 16);
      goto l19;
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42072))+16);
      i2 = (OOC_INT32)storeAfterSelect;
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42020)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 16);
l19:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42524)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42731)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42788)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42831)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)repeatStatm;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42968))+8);
      i4 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i1, (OOC_IR__StatementSeq)i3);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 43015))+12);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      guard = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43090)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 9, 0);
      exit = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43141)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43186)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 5, 0);
      select = (OOC_SSA__Instr)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43241)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43295)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43282)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43356)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43341)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43420)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43407)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43467)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 43509)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43601)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 11, 0);
      end = (OOC_SSA__Instr)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43655)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i3 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1, (OOC_SSA__Result)i3);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 43842));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43827)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43894)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44292))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      guard1 = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)s;
      storeAfterGuard1 = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 44393)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 10, 0);
      start = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 44450)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 44493)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44629))+12);
      i6 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i6, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i5);
      s = (OOC_SSA__Result)i4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44676))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      guard2 = (OOC_SSA__Result)i0;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 44749)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i4, 9, 0);
      exit = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 44800)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 2);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44845)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i5, 5, 0);
      select = (OOC_SSA__Instr)i5;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44900)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44955)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 44942)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 45001)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45051)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 45038)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 45113)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i4, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 45098)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 45169)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i5, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45261)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 11, 0);
      end = (OOC_SSA__Instr)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45315)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i5 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i0, (OOC_SSA__Result)i5);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 45502));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45487)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 11);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45627)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 5, 0);
      select = (OOC_SSA__Instr)i3;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45682)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45737)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i1, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45724)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45797)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45783)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45861)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45848)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45908)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 45972)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i3, 2);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46353))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46363)))), &_td_OOC_IR__ConstDesc, 46363)), 46369))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46353))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46363)))), &_td_OOC_IR__ConstDesc, 46363)), 46369))+8);
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46384)))), &_td_Object_BigInt__BigIntDesc, 46384)), 46391)))), Object_BigInt__BigIntDesc_Sign)),Object_BigInt__BigIntDesc_Sign)((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46384)))), &_td_Object_BigInt__BigIntDesc, 46384)));
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
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46524)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i0, 5);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)forStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46609))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46578)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)bound;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46641)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          return (OOC_SSA__Instr)i0;
          ;
        }


      i0 = (OOC_INT32)forStatm;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47168))+16);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      endValue = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47215))+20);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      stepValue = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47255))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      v = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47327))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 47278)))), OOC_SSA__ProcBlockDesc_AddSetInstr)),OOC_SSA__ProcBlockDesc_AddSetInstr)((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47299)))), &_td_OOC_SSA__InstrDesc, 47299)), (OOC_SSA__Result)i0);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard((OOC_SSA__Result)i1);
      guard1 = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)s;
      storeAfterGuard1 = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47471)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47528)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47571)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)forStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47705))+24);
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i0, (OOC_IR__StatementSeq)i2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47815))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47820))+4);
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47731)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 19, i2);
      dummy = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47861))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      v = (OOC_SSA__Result)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47880)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i2 = (OOC_INT32)stepValue;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47916)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47964)))), OOC_SSA__ProcBlockDesc_AddSetInstr)),OOC_SSA__ProcBlockDesc_AddSetInstr)((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47985)))), &_td_OOC_SSA__InstrDesc, 47985)), (OOC_SSA__Result)i0);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)endValue;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard((OOC_SSA__Result)i0);
      guard2 = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48099)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 9, 0);
      exit = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48150)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48195)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 5, 0);
      select = (OOC_SSA__Instr)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48250)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48305)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48292)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48351)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48401)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48388)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48463)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48448)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 48519)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48611)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 11, 0);
      end = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)start;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48665)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i0, (OOC_SSA__Result)i3);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 48852));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48837)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 11);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48977)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 5, 0);
      select = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)guard1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49032)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49087)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i2, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49074)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49147)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49133)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49211)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49198)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)storeAfterGuard1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49258)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49316)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49489)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49546)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49589)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49675)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 11, 0);
      end = (OOC_SSA__Instr)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49729)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49767)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 13);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49844)))), OOC_SSA__ProcBlockDesc_SetLoopContext)),OOC_SSA__ProcBlockDesc_SetLoopContext)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
      oldSelect = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)loopStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49943))+8);
      i3 = (OOC_INT32)pb;
      i4 = (OOC_INT32)s;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i2);
      s = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i1, (OOC_SSA__Result)i2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50193)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50236)))), OOC_SSA__ProcBlockDesc_SetLoopContext)),OOC_SSA__ProcBlockDesc_SetLoopContext)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Exit(OOC_IR__Exit exit) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr instr;
      OOC_SSA__Result store;

      i0 = (OOC_INT32)exit;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 50425))+12);
      i1 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i1, i0);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50465)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 9, 0);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50517)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50571)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      store = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50607))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50607))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 50620)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_TryStatm(OOC_IR__TryStatm _try) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      OOC_SSA__Instr start;
      OOC_SSA__Instr instr;
      OOC_SSA__Result sDefault;
      OOC_SSA__Instr e;
      OOC_SSA__Instr typeTag;
      OOC_SSA__Result sCatch;
      OOC_INT32 i;
      OOC_SSA__Instr typeTest;
      OOC_SSA__Result catchClause;
      OOC_SSA__Instr end;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50887)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 72, 5);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50944)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50985)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51065)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 77, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51131)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51185)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
      i3 = (OOC_INT32)_try;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 51214))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i2, (OOC_SSA__Result)i1, (OOC_IR__StatementSeq)i4);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i1, 1);
      sDefault = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51346)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i2, 1);
      s = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 51442)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 75, 9);
      e = (OOC_SSA__Instr)i2;
      i4 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 51503)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i4, 2);
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 51547)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i4, 61, 9);
      typeTag = (OOC_SSA__Instr)i4;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 51605)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i4, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      sCatch = (OOC_SSA__Result)i2;
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 51709)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i5, 79, 0);
      instr = (OOC_SSA__Instr)i5;
      i6 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 51770)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i6, 2);
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 51811)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i5, 2);
      s = (OOC_SSA__Result)i5;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 51866))+12);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 51876)), (OOC_INT32)0);
      i5 = i5-1;
      i6 = i5>=0;
      i = i5;
      if (!i6) goto l8;
l3_loop:
      i6 = (OOC_INT32)pb;
      i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 51917)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i6, 62, 5);
      typeTest = (OOC_SSA__Instr)i6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 51979)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i6, (OOC_SSA__Result)i4, 1);
      i7 = (OOC_INT32)pb;
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52050))+12);
      i8 = _check_pointer(i8, 52060);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 52060))*4);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 52063))+8);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52082)))), &_td_OOC_SymbolTable__PointerDesc, 52082)), 52090))+32);
      i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 52035)))), OOC_SSA__ProcBlockDesc_GetTypeRef)),OOC_SSA__ProcBlockDesc_GetTypeRef)((OOC_SSA__ProcBlock)i7, (OOC_SymbolTable__Type)i8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 52024)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i6, (OOC_SSA__Result)i7, 12);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 52162))+12);
      i7 = _check_pointer(i7, 52172);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 52172))*4);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 52175))+12);
      i8 = (OOC_INT32)pb;
      i7 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i8, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i7);
      catchClause = (OOC_SSA__Result)i7;
      i8 = (OOC_INT32)pb;
      i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52206)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i8, 5, 0);
      instr = (OOC_SSA__Instr)i8;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52260)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i6, 1);
      i6 = (OOC_INT32)pb;
      i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 52314)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i6, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52303)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i6, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52359)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i7, 1);
      i6 = (OOC_INT32)pb;
      i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 52416)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i6, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52405)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i6, 1);
      i6 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52462)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i8, (OOC_SSA__Result)i6, 1);
      i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 52503)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i8, 2);
      s = (OOC_SSA__Result)i6;
      i5 = i5+-1;
      i = i5;
      i6 = i5>=0;
      if (i6) goto l3_loop;
l8:
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52557)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 76, 0);
      instr = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52617)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52658)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
      s = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52761)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i2, 5, 0);
      instr = (OOC_SSA__Instr)i2;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52813)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52862)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_FALSE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52851)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52906)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52958)))), OOC_SSA__ProcBlockDesc_GetConstBool)),OOC_SSA__ProcBlockDesc_GetConstBool)((OOC_SSA__ProcBlock)i0, OOC_TRUE);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52947)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53001)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53106)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 73, 0);
      end = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53170)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i2, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53156)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53223)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_CopyParameter(OOC_IR__CopyParameter cp) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr len;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)cp;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53402))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53428))+8);
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength((OOC_SSA__ProcBlock)i3, (OOC_IR__Expression)i1, -1, (OOC_SSA__Result)i2);
      len = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53476))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 53483))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53568))+8);
      i4 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateSize((OOC_SSA__ProcBlock)i2, (OOC_IR__Expression)i0, (OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 53455)))), OOC_SSA__ProcBlockDesc_AddCopyParameter)),OOC_SSA__ProcBlockDesc_AddCopyParameter)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__VarDecl)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53494)))), &_td_OOC_SymbolTable__VarDeclDesc, 53494)), (OOC_SSA__Result)i4, (OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
      instr = (OOC_SSA__Instr)i0;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53599)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i0, 2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53820))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53861))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53900))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      size = (OOC_SSA__Result)i0;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53927)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i3, 18, 0);
      instr = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53984)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 54022)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 54067)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 54111)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i3;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Raise(OOC_IR__Raise raise) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result exception;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)raise;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54343))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      exception = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54374)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 74, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54436)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54474)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i1;
      ;
    }


  i0 = (OOC_INT32)statmSeq;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 54584)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l80;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)statmSeq;
  i2 = _check_pointer(i2, 54615);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 54615))*4);
  statm = (OOC_IR__Statement)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54636)))), &_td_OOC_IR__AssertDesc);
  if (i2) goto l74;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54689)))), &_td_OOC_IR__AssignmentDesc);
  if (i2) goto l72;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54770)))), &_td_OOC_IR__CallDesc);
  if (i2) goto l70;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54835)))), &_td_OOC_IR__ReturnDesc);
  if (i2) goto l68;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54888)))), &_td_OOC_IR__IfStatmDesc);
  if (i2) goto l66;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54943)))), &_td_OOC_IR__WithStatmDesc);
  if (i2) goto l64;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55002)))), &_td_OOC_IR__CaseStatmDesc);
  if (i2) goto l62;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55073)))), &_td_OOC_IR__RepeatStatmDesc);
  if (i2) goto l60;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55148)))), &_td_OOC_IR__WhileStatmDesc);
  if (i2) goto l58;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55209)))), &_td_OOC_IR__ForStatmDesc);
  if (i2) goto l56;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55266)))), &_td_OOC_IR__LoopStatmDesc);
  if (i2) goto l54;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55325)))), &_td_OOC_IR__ExitDesc);
  if (i2) goto l52;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55374)))), &_td_OOC_IR__TryStatmDesc);
  if (i2) goto l50;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55439)))), &_td_OOC_IR__CopyDesc);
  if (i2) goto l48;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55508)))), &_td_OOC_IR__CopyParameterDesc);
  if (i2) goto l46;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55587)))), &_td_OOC_IR__CopyStringDesc);
  if (i2) goto l44;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55656)))), &_td_OOC_IR__MoveBlockDesc);
  if (i2) goto l42;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55723)))), &_td_OOC_IR__RaiseDesc);
  if (i2) goto l40;
  Log__Type("++ Unknown statement class in StatmSeq", 39, (void*)i1);
  _assert(OOC_FALSE, 127, 55854);
  goto l75;
l40:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Raise((OOC_IR__Raise)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l75;
l42:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_MoveBlock((OOC_IR__MoveBlock)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l75;
l44:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CopyString((OOC_IR__CopyString)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l75;
l46:
  OOC_SSA_IRtoSSA__StatmSeq_CopyParameter((OOC_IR__CopyParameter)i1);
  goto l75;
l48:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Copy((OOC_IR__Copy)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l75;
l50:
  OOC_SSA_IRtoSSA__StatmSeq_TryStatm((OOC_IR__TryStatm)i1);
  goto l75;
l52:
  OOC_SSA_IRtoSSA__StatmSeq_Exit((OOC_IR__Exit)i1);
  goto l75;
l54:
  OOC_SSA_IRtoSSA__StatmSeq_LoopStatm((OOC_IR__LoopStatm)i1);
  goto l75;
l56:
  OOC_SSA_IRtoSSA__StatmSeq_ForStatm((OOC_IR__ForStatm)i1);
  goto l75;
l58:
  OOC_SSA_IRtoSSA__StatmSeq_WhileStatm((OOC_IR__WhileStatm)i1);
  goto l75;
l60:
  OOC_SSA_IRtoSSA__StatmSeq_RepeatStatm((OOC_IR__RepeatStatm)i1);
  goto l75;
l62:
  OOC_SSA_IRtoSSA__StatmSeq_CaseStatm((OOC_IR__CaseStatm)i1);
  goto l75;
l64:
  OOC_SSA_IRtoSSA__StatmSeq_WithStatm((OOC_IR__WithStatm)i1);
  goto l75;
l66:
  OOC_SSA_IRtoSSA__StatmSeq_IfStatm((OOC_IR__IfStatm)i1);
  goto l75;
l68:
  OOC_SSA_IRtoSSA__StatmSeq_Return((OOC_IR__Return)i1);
  goto l75;
l70:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Call((OOC_IR__Call)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l75;
l72:
  i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Assignment((OOC_IR__Assignment)i1);
  OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
  goto l75;
l74:
  OOC_SSA_IRtoSSA__StatmSeq_Assert((OOC_IR__Assert)i1);
l75:
  i1 = i;
  i1 = i1+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l80:
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56046))+8);
  i2 = i1!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i1;
  if (!i2) goto l15;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56105))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 56133))+36);
  i3 = i3==12;
  if (i3) goto l6;
  i3=OOC_FALSE;
  goto l8;
l6:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56164))+12);
  i3 = i3==(OOC_INT32)0;
  
l8:
  if (!i3) goto l10;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56211)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
  storeOut = (OOC_SSA__Result)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56267))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 56277));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56247)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i3, (OOC_SSA__Result)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56295)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
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
