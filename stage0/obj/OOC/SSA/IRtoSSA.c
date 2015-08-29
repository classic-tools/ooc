#include <OOC/SSA/IRtoSSA.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_SSA_IRtoSSA__AddStoreBackwardFeed(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopEnd, OOC_SSA__Result storeArg) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 6, 0);
  i1 = (OOC_INT32)storeArg;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
  i1 = (OOC_INT32)loopEnd;
  i2 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 13);
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l3;
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i0);
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 13);
l4:
  return;
  ;
}

OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq(OOC_SSA__ProcBlock pb, OOC_SSA__Result s, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_IR__Statement statm;
  auto void OOC_SSA_IRtoSSA__StatmSeq_Chain(OOC_SSA__Instr instr);
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_FixAddress(OOC_SSA__Result arg);
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_FixLength(OOC_SSA__Result arg);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Call(OOC_IR__Call call);
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression(OOC_IR__Expression expr);
  auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_CalculateLength(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_INT32 dim, OOC_SSA__Result baseArray);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateSize(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_SSA__Result length);
  auto OOC_SymbolTable__Type OOC_SSA_IRtoSSA__StatmSeq_TypeOfString(OOC_SymbolTable__Type type);
  auto void OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign(OOC_SSA__Result source, OOC_SSA__Instr instr);
  auto void OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign(OOC_SSA__Result source, OOC_SSA__Instr instr);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CopyString(OOC_IR__CopyString cp);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_AddException(OOC_SSA__ProcBlock pb, OOC_Scanner_SymList__Symbol sym, OOC_INT8 opcode, OOC_INT8 subclass);
  auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_TypeTag(OOC_IR__Expression design, OOC_SSA__Result value, OOC_CHAR8 checkDerefOfNil, OOC_Scanner_SymList__Symbol derefSym);
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
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2463))+36);
      i1 = i1==13;
      if (i1) goto l3;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2504))+36);
      i1 = i1==12;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2545))+36);
      i1 = i1==15;
      
      goto l9;
l7:
      i1=1u;
l9:
      if (i1) goto l11;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 2593))+36);
      i1 = i1==59;
      
      goto l13;
l11:
      i1=1u;
l13:
      if (i1) goto l15;
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      goto l16;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2640))+24);
      i2 = (OOC_INT32)s;
      OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i1, (OOC_SSA__Result)i2);
l16:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_FixAddress(OOC_SSA__Result arg) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)arg;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_FixSubclass((OOC_SSA__ProcBlock)i0, (OOC_SSA__Result)i1, 9);
      return (OOC_SSA__Result)i0;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_FixLength(OOC_SSA__Result arg) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)arg;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_FixSubclass((OOC_SSA__ProcBlock)i0, (OOC_SSA__Result)i1, 3);
      return (OOC_SSA__Result)i0;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_CalculateLength(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_INT32 dim, OOC_SSA__Result baseArray) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_INT32 i;
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength(OOC_SymbolTable__Type type, OOC_INT32 dim);
        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength(OOC_SymbolTable__Type type, OOC_INT32 dim) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Result len;
          OOC_SSA__Instr lenp;

          i0 = (OOC_INT32)type;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3937)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l3;
          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i0, 1);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixLength((OOC_SSA__Result)i0);
          return (OOC_SSA__Result)i0;
          goto l12;
l3:
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 3969))+40);
          if (i1) goto l6;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 4117))+52);
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i2, i1);
          
          goto l7;
l6:
          i1 = (OOC_INT32)baseArray;
          i2 = dim;
          i3 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4042)))), &_td_OOC_SSA__InstrDesc, 4042)), (i2+1), (OOC_SymbolTable__Array)i0);
          
l7:
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixLength((OOC_SSA__Result)i1);
          len = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4204))+44);
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4217)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l10;
          return (OOC_SSA__Result)i1;
          goto l12;
l10:
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 22, 3);
          lenp = (OOC_SSA__Instr)i2;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = dim;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4399))+44);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength((OOC_SymbolTable__Type)i0, (i1+1));
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i2;
l12:
          _failed_function(3785); return 0;
          ;
        }


      i0 = (OOC_INT32)value;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4767)))), &_td_OOC_IR__IndexDesc);
      if (!i1) goto l9;
l4_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4809)))), &_td_OOC_IR__IndexDesc, 4809)), 4815))+8);
      i1 = dim;
      value = (OOC_IR__Expression)i0;
      dim = (i1+1);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4767)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l4_loop;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4935))+4);
      type = (OOC_SymbolTable__Type)i0;
      i = 0;
      i1 = dim;
      i2 = 0<=i1;
      if (!i2) goto l18;
      i2=0;
l13_loop:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4990)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      type = (OOC_SymbolTable__Type)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5027)))), &_td_OOC_SymbolTable__ArrayDesc, 5027)), 5033))+44);
      type = (OOC_SymbolTable__Type)i0;
      i2 = i2+1;
      i = i2;
      i3 = i2<=i1;
      if (i3) goto l13_loop;
l18:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength_RecursiveGetLength((OOC_SymbolTable__Type)i0, i1);
      return (OOC_SSA__Result)i0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_CalculateSize(OOC_SSA__ProcBlock pb, OOC_IR__Expression value, OOC_SSA__Result length) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_SSA__Instr size;

      i0 = (OOC_INT32)value;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5605)))), &_td_OOC_IR__IndexDesc);
      if (!i1) goto l9;
l4_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5647)))), &_td_OOC_IR__IndexDesc, 5647)), 5653))+8);
      value = (OOC_IR__Expression)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5605)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l4_loop;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5753))+4);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_SymbolTable_TypeRules__IsArrayType((OOC_SymbolTable__Type)i0);
      if (!i1) goto l18;
l13_loop:
      i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__ArrayElementType((OOC_SymbolTable__Type)i0);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_SymbolTable_TypeRules__IsArrayType((OOC_SymbolTable__Type)i0);
      if (i1) goto l13_loop;
l18:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5868)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      type = (OOC_SymbolTable__Type)i0;
      i1 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 22, 9);
      size = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)length;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixAddress((OOC_SSA__Result)i3);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 1);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 6049))+32);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, i0);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixAddress((OOC_SSA__Result)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i2;
      ;
    }

    
    OOC_SymbolTable__Type OOC_SSA_IRtoSSA__StatmSeq_TypeOfString(OOC_SymbolTable__Type type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6192)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l11;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6528)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l5;
      return (OOC_SymbolTable__Type)(OOC_INT32)0;
      goto l20;
l5:
      i1 = *(OOC_INT16*)((_check_pointer(i0, 6565))+40);
      switch (i1) {
      case 13:
      case 14:
      case 15:
        i0 = *(OOC_INT16*)((_check_pointer(i0, 6685))+40);
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(((i0-13)+1));
        return (OOC_SymbolTable__Type)i0;
        goto l20;
      default:
        return (OOC_SymbolTable__Type)(OOC_INT32)0;
        goto l20;
      }
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6223))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6237)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l14;
      return (OOC_SymbolTable__Type)(OOC_INT32)0;
      goto l20;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6280))+44);
      i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6298)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6298)), 6309))+40);
      switch (i1) {
      case 1:
      case 2:
      case 3:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6399))+44);
        return (OOC_SymbolTable__Type)i0;
        goto l20;
      default:
        return (OOC_SymbolTable__Type)(OOC_INT32)0;
        goto l20;
      }
l20:
      _failed_function(6126); return 0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign(OOC_SSA__Result source, OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)source;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6965)))), &_td_OOC_SSA__ConstDesc);
      if (i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7104))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7111))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
      i1 = (OOC_INT32)instr;
      
l5_loop:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7171))+4);
      i2 = i2==4;
      if (i2) goto l8;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7216))+4);
      i2 = i2==5;
      
      goto l10;
l8:
      i2=1u;
l10:
      if (!i2) goto l12;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7291))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7280));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, i2);
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7338))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l5_loop;
      goto l19;
l18:
      i1 = (OOC_INT32)instr;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 4);
l19:
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign(OOC_SSA__Result source, OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)source;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7535))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7542))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l15;
      i1 = (OOC_INT32)instr;
      
l3_loop:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7598))+4);
      i2 = i2==4;
      if (i2) goto l9;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 7699))+4);
      i2 = i2==5;
      if (!i2) goto l10;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7761));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 7);
      goto l10;
l9:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7657));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 6);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7820))+8);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8045))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8084))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8126))+16);
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i3);
      maxLength = (OOC_SSA__Result)i3;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i4, 15, 0);
      instr = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 2);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8297))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8305))+4);
      i5 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeOfString((OOC_SymbolTable__Type)i5);
      i6 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i6, (OOC_SymbolTable__Type)i5);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8381))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8387))+4);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeOfString((OOC_SymbolTable__Type)i0);
      i5 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i5, (OOC_SymbolTable__Type)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i0, 12);
      OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i1, (OOC_SSA__Instr)i4);
      OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign((OOC_SSA__Result)i2, (OOC_SSA__Instr)i4);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i3, 1);
      return (OOC_SSA__Instr)i4;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_AddException(OOC_SSA__ProcBlock pb, OOC_Scanner_SymList__Symbol sym, OOC_INT8 opcode, OOC_INT8 subclass) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)pb;
      i1 = opcode;
      i2 = subclass;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, i1, i2);
      i1 = (OOC_INT32)sym;
      OOC_SSA__InstrDesc_SetPos((OOC_SSA__Instr)i0, (OOC_Scanner_SymList__Symbol)i1);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 19);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      return (OOC_SSA__Instr)i0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_TypeTag(OOC_IR__Expression design, OOC_SSA__Result value, OOC_CHAR8 checkDerefOfNil, OOC_Scanner_SymList__Symbol derefSym) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SymbolTable__Type type;
      OOC_SSA__Instr check;
      OOC_SSA__Instr instr;

      i0 = (OOC_INT32)design;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9294))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9294))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9299)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      type = (OOC_SymbolTable__Type)i1;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9329)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i1);
      type = (OOC_SymbolTable__Type)i1;
      i2 = checkDerefOfNil;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9420)))), &_td_OOC_SymbolTable__PointerDesc);
      
l5:
      if (!i2) goto l7;
      i2 = (OOC_INT32)value;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 9543))+5);
      i4 = (OOC_INT32)derefSym;
      i5 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i5, (OOC_Scanner_SymList__Symbol)i4, 67, i3);
      check = (OOC_SSA__Instr)i3;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 1);
      value = (OOC_SSA__Result)i3;
l7:
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 61, 9);
      instr = (OOC_SSA__Instr)i2;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9719)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i3) goto l22;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9802)))), &_td_OOC_IR__VarDesc);
      if (i3) goto l12;
      i3=0u;
      goto l14;
l12:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9837)))), &_td_OOC_IR__VarDesc, 9837)), 9841))+8);
      i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9852)))), &_td_OOC_SymbolTable__VarDeclDesc, 9852)), 9860))+59);
      
l14:
      if (i3) goto l16;
      i0=0u;
      goto l18;
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9909)))), &_td_OOC_IR__VarDesc, 9909)), 9913))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9923)))), &_td_OOC_SymbolTable__VarDeclDesc, 9923)), 9931))+48);
      i0 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
      
l18:
      if (i0) goto l20;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Type)i1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      goto l23;
l20:
      i0 = (OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10014))+8);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 5);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      goto l23;
l22:
      i0 = (OOC_INT32)value;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
l23:
      return (OOC_SSA__Instr)i2;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10431))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10470))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i3 = *(OOC_UINT8*)((_check_pointer(i0, 10491))+16);
      if (!i3) goto l3;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10544))+12);
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i3, (OOC_SSA__Result)i2, 0u, (OOC_Scanner_SymList__Symbol)(OOC_INT32)0);
      dynTag = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i4, 61, 9);
      staticTag = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10687))+12);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 10693))+4);
      i6 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i6, (OOC_SymbolTable__Type)i5);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i5, 26, 9);
      neq = (OOC_SSA__Instr)i5;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i4, 1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)s;
      okStore = (OOC_SSA__Result)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10928))+12);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10934));
      i6 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i6, (OOC_Scanner_SymList__Symbol)i4, 71, 0);
      failed = (OOC_SSA__Instr)i4;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i4, 5, 0);
      select = (OOC_SSA__Instr)i4;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i5, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i5, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i4, 2);
      s = (OOC_SSA__Result)i3;
l3:
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 14, 0);
      instr = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11536))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11542))+4);
      i4 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i4, (OOC_SymbolTable__Type)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 12);
      OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i1, (OOC_SSA__Instr)i3);
      OOC_SSA_IRtoSSA__StatmSeq_TransferWriteDesign((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
      return (OOC_SSA__Instr)i3;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2,i3;
      Object_Boxed__Object v;
      Object_BigInt__BigInt x;
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
      auto OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Constructor(OOC_IR__Constructor expr);
        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Deref(OOC_IR__Deref deref) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result address;
          OOC_SSA__Instr check;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)deref;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12195))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          address = (OOC_SSA__Result)i1;
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 12223))+12);
          if (!i2) goto l4;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12285));
          i3 = *(OOC_INT8*)((_check_pointer(i1, 12353))+5);
          i4 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i4, (OOC_Scanner_SymList__Symbol)i2, 67, i3);
          check = (OOC_SSA__Instr)i2;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          address = (OOC_SSA__Result)i2;
          i1=i2;
l4:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12533))+4);
          i3 = (OOC_INT32)pb;
          i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 12, i2);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 4);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12675))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12684))+4);
          i3 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Type)i0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 5);
          OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i2);
          return (OOC_SSA__Result)i2;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray(OOC_IR__Expression indexOp, OOC_INT32 *dim) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)indexOp;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12979)))), &_td_OOC_IR__IndexDesc);
          if (i1) goto l3;
          *dim = (-1);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          return (OOC_SSA__Result)i0;
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13036))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray((OOC_IR__Expression)i0, (void*)(OOC_INT32)dim);
          i1 = *dim;
          *dim = (i1+1);
          return (OOC_SSA__Result)i0;
l4:
          _failed_function(12838); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Index(OOC_IR__Index indexOp, OOC_SSA__Result baseArray, OOC_SSA__Result elementSize, OOC_INT32 dim) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_SymbolTable__Type arrayType;
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

          i0 = (OOC_INT32)indexOp;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14098))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14104))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14098))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14104))+4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14109)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
          arrayType = (OOC_SymbolTable__Type)i1;
          i2 = (OOC_INT32)baseArray;
          i3 = (OOC_INT32)pb;
          i4 = dim;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14176)))), &_td_OOC_SSA__InstrDesc, 14176)), i4, (OOC_SymbolTable__Array)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14244)))), &_td_OOC_SymbolTable__ArrayDesc, 14244)));
          length = (OOC_SSA__Result)i1;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 22, 9);
          newSize = (OOC_SSA__Instr)i3;
          i5 = (OOC_INT32)elementSize;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i5, 1);
          i6 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixAddress((OOC_SSA__Result)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i6, 1);
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14457))+8);
          i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14465)))), &_td_OOC_IR__IndexDesc);
          if (i6) goto l3;
          baseResult = (OOC_SSA__Result)i2;
          _assert((i4==0), 127, 14657);
          
          goto l4;
l3:
          i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14521))+8);
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Index((OOC_IR__Index)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14532)))), &_td_OOC_IR__IndexDesc, 14532)), (OOC_SSA__Result)i2, (OOC_SSA__Result)i3, (i4-1));
          baseResult = (OOC_SSA__Result)i2;
          
l4:
          dim = (i4+1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14733))+8);
          i3 = *(OOC_INT8*)((_check_pointer(i3, 14740))+36);
          _assert((i3==12), 127, 14715);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15115))+8);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15142))+24);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 15152));
          s = (OOC_SSA__Result)i3;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15195))+12);
          i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i3);
          index = (OOC_SSA__Result)i3;
          i4 = *(OOC_UINT8*)((_check_pointer(i0, 15223))+16);
          if (i4) goto l7;
          i1=i3;
          goto l8;
l7:
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15285));
          i6 = *(OOC_INT8*)((_check_pointer(i3, 15349))+5);
          i7 = (OOC_INT32)pb;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i7, (OOC_Scanner_SymList__Symbol)i4, 66, i6);
          check = (OOC_SSA__Instr)i4;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i3, 1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i1, 1);
          index = (OOC_SSA__Result)i4;
          i1=i4;
l8:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15504))+24);
          i4 = (OOC_INT32)s;
          OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i4);
          i3 = (OOC_INT32)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i2);
          s = (OOC_SSA__Result)i3;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15613))+4);
          elementType = (OOC_SymbolTable__Type)i3;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 22, 9);
          scaledIndex = (OOC_SSA__Instr)i3;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixAddress((OOC_SSA__Result)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i5, 1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15841))+24);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15851))+8);
          adrOpnd = (OOC_SSA__Opnd)i4;
          i5 = (OOC_INT32)pb;
          i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i5, 19, 9);
          elementAdr = (OOC_SSA__Instr)i5;
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 15966));
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i6, 1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i3, 1);
          OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i4, (OOC_SSA__Result)i5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 5);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16187))+4);
          i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
          OOC_SSA__InstrDesc_SetSubclass((OOC_SSA__Instr)i2, i0);
          return (OOC_SSA__Result)i2;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectField(OOC_IR__SelectField selectOp) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Result baseResult;
          OOC_SSA__Instr instr;
          OOC_SSA__Opnd adrOpnd;
          OOC_SSA__Instr fieldAdr;
          OOC_SSA__Result offset;

          i0 = (OOC_INT32)selectOp;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16601))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          baseResult = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16638))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 16645))+36);
          _assert((i2==12), 127, 16620);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16696))+8);
          instr = (OOC_SSA__Instr)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16738))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16748))+8);
          adrOpnd = (OOC_SSA__Opnd)i2;
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 19, 9);
          fieldAdr = (OOC_SSA__Instr)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16859));
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16918))+12);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 16924))+56);
          i5 = (OOC_INT32)pb;
          i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i5, i4);
          offset = (OOC_SSA__Result)i4;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_FixAddress((OOC_SSA__Result)i4);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 1);
          OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i3);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17078))+12);
          i3 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetDeclRef((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Declaration)i2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 5);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17165))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17172))+48);
          i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
          OOC_SSA__InstrDesc_SetSubclass((OOC_SSA__Instr)i1, i0);
          return (OOC_SSA__Result)i1;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp(OOC_IR__Compare op, OOC_INT8 _class) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Type typeOfString;
          OOC_SSA__Result left;

          i0 = (OOC_INT32)op;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17466))+12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17472))+4);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeOfString((OOC_SymbolTable__Type)i1);
          typeOfString = (OOC_SymbolTable__Type)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17511))+12);
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
          left = (OOC_SSA__Result)i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17551))+16);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          i3 = i1!=(OOC_INT32)0;
          if (i3) goto l3;
          i1=i0;i0=i2;
          goto l4;
l3:
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 16, 3);
          i4 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
          i4 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i4, (OOC_SymbolTable__Type)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 12);
          OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
          OOC_SSA_IRtoSSA__StatmSeq_TransferReadDesign((OOC_SSA__Result)i0, (OOC_SSA__Instr)i3);
          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i0, 0);
          i1=i0;i0=i3;
l4:
          i2 = _class;
          i3 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, i2, 5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          return (OOC_SSA__Instr)i2;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_NewObject(OOC_IR__NewObject _new) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;
          OOC_INT32 i;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 59, 9);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)_new;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18462))+4);
          i3 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Type)i2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 12);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18498))+8);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l11;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18551))+8);
          i = 0;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18559)), 0);
          i3 = 0<i2;
          if (!i3) goto l11;
          i3=0;
l5_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18610))+8);
          i4 = _check_pointer(i4, 18618);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 18618))*4);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
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
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 60, 9);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)_new;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18982))+4);
          i3 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Type)i2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 12);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19042))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
          return (OOC_SSA__Instr)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutAnd(OOC_IR__Expression left, OOC_IR__Expression right) {
          register OOC_INT32 i0,i1,i2,i3,i4;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 5, 0);
          i1 = (OOC_INT32)left;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)s;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i2, 1u);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)right;
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
          i3 = (OOC_INT32)pb;
          i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 6, 0);
          i4 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i3, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i2, 0u);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 6, 0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, 0u);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i2, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
          s = (OOC_SSA__Result)i1;
          i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResultSubclass((OOC_SSA__Instr)i0, 14, 5);
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutOr(OOC_IR__Expression left, OOC_IR__Expression right) {
          register OOC_INT32 i0,i1,i2,i3;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 5, 0);
          i1 = (OOC_INT32)left;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)s;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i2, 1u);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 6, 0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 2);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, 1u);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i2, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, 0u);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)right;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 6, 0);
          i3 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i2, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
          s = (OOC_SSA__Result)i1;
          i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResultSubclass((OOC_SSA__Instr)i0, 14, 5);
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeTest(OOC_IR__TypeTest test) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 62, 5);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)test;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21589))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21613))+8);
          i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i3);
          i4 = *(OOC_UINT8*)((_check_pointer(i1, 21659))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21679));
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i3, i4, (OOC_Scanner_SymList__Symbol)i5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21766))+12);
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Type)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 12);
          return (OOC_SSA__Instr)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard(OOC_IR__TypeGuard guard) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result design;
          OOC_SSA__Instr tag;
          OOC_SSA__Instr adr;
          OOC_SSA__Instr instr;
          auto OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard(OOC_SSA__Result adr, OOC_SSA__Result tag);
            
            OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard(OOC_SSA__Result adr, OOC_SSA__Result tag) {
              register OOC_INT32 i0,i1,i2,i3;
              OOC_SSA__Instr instr;

              i0 = (OOC_INT32)guard;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22136))+8);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22142))+24);
              i1 = (OOC_INT32)adr;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22213))+8);
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22152));
              i2 = *(OOC_INT8*)((_check_pointer(i2, 22220))+5);
              i3 = (OOC_INT32)pb;
              i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_SymList__Symbol)i0, 68, i2);
              instr = (OOC_SSA__Instr)i0;
              OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
              i1 = (OOC_INT32)tag;
              OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
              i1 = (OOC_INT32)guard;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22364))+8);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22370))+12);
              i2 = (OOC_INT32)pb;
              i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Type)i1);
              OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 12);
              return (OOC_SSA__Instr)i0;
              ;
            }


          i0 = (OOC_INT32)guard;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22530))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22536))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          design = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22567))+8);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 22574))+36);
          _assert((i2==12), 127, 22553);
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 22615))+13);
          if (i2) goto l3;
          return (OOC_SSA__Result)i1;
          goto l16;
l3:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22663))+8);
          i3 = *(OOC_UINT8*)((_check_pointer(i0, 22716))+12);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22737));
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22669))+8);
          i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i1, i3, (OOC_Scanner_SymList__Symbol)i4);
          tag = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22764))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22770))+20);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22781)))), &_td_OOC_IR__VarDesc);
          if (i3) goto l6;
          i3=0u;
          goto l8;
l6:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22813))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22819))+20);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22829))+4);
          i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22836)))), &_td_OOC_SymbolTable__RecordDesc);
          
l8:
          if (i3) goto l14;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23192))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23197))+20);
          i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23207)))), &_td_OOC_IR__DerefDesc);
          if (i0) goto l12;
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
          return (OOC_SSA__Result)i0;
          goto l16;
l12:
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
          adr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)guard;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23480))+4);
          i3 = (OOC_INT32)pb;
          i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 12, i2);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)s;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23622))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23627))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23632))+4);
          i3 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Type)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 5);
          OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i2);
          return (OOC_SSA__Result)i2;
          goto l16;
l14:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23025))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23032))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23102))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23109))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23119))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23129));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23042))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard_NewTypeGuard((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
          OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
          i0 = (OOC_INT32)design;
          return (OOC_SSA__Result)i0;
l16:
          _failed_function(21856); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeCast(OOC_IR__TypeCast cast) {
          register OOC_INT32 i0,i1,i2;
          OOC_INT8 scDest;
          OOC_SSA__Instr instr;

          i0 = (OOC_INT32)cast;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24122))+4);
          i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
          scDest = i1;
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 41, i1);
          instr = (OOC_SSA__Instr)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24228))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeConv(OOC_IR__TypeConv conv) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Result _const;
          OOC_SSA__Instr instr;
          Object__String fct;
          OOC_INT8 scDest;
          OOC_INT8 scSource;

          i0 = (OOC_INT32)conv;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24539))+4);
          i1 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i1);
          if (i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26135))+4);
          i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
          scDest = i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26193))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26199))+4);
          i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
          scSource = i2;
          i2 = i1!=i2;
          if (i2) goto l5;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26447))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          return (OOC_SSA__Result)i0;
          goto l20;
l5:
          i2 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 42, i1);
          instr = (OOC_SSA__Instr)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26351))+8);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          goto l20;
l7:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24653))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          _const = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 81, 9);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24762))+8);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24767))+4);
          i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24777)))), &_td_OOC_SymbolTable__PredefTypeDesc, 24777)), 24788))+40);
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
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewUTF16Char", 21);
            fct = (Object__String)i3;
            goto l16;
          case 14:
            i3 = (OOC_INT32)Object__NewLatin1("Object__NewUTF16Region", 23);
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
            _failed_case(i3, 24753);
            goto l16;
          }
l16:
          i3 = (OOC_INT32)pb;
          i4 = (OOC_INT32)fct;
          i4 = (OOC_INT32)Object_Boxed__NewString((Object__String)i4);
          i5 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
          i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i3, (Object_Boxed__Object)i4, 9, (OOC_SymbolTable__Type)i5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25721))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25726))+4);
          i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
          if (!i1) goto l19;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25761))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25770)))), &_td_OOC_IR__ConstDesc, 25770)), 25776))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25789)))), &_td_Object_Boxed__StringDesc, 25789)), 25796));
          i0 = *(OOC_INT32*)(_check_pointer(i0, 25802));
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, (i0+1));
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, 0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, i0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
l19:
          return (OOC_SSA__Result)i2;
l20:
          _failed_function(24309); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectProc(OOC_IR__SelectProc selectOp) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_IR__Expression object;
          OOC_SymbolTable__Type type;

          i0 = (OOC_INT32)selectOp;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 26670))+28);
          if (i1) goto l11;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26858))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26869)))), &_td_OOC_IR__DerefDesc);
          if (i1) goto l5;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26993))+8);
          object = (OOC_IR__Expression)i1;
          
          goto l6;
l5:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26917))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26931)))), &_td_OOC_IR__DerefDesc, 26931)), 26937))+8);
          object = (OOC_IR__Expression)i1;
          
l6:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27046))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27046))+12);
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27058)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
          type = (OOC_SymbolTable__Type)i2;
          i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27093)))), &_td_OOC_SymbolTable__RecordDesc, 27093)), 27100))+60);
          if (i2) goto l9;
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 63, 9);
          instr = (OOC_SSA__Instr)i2;
          i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          i4 = *(OOC_UINT8*)((_check_pointer(i0, 27529))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27588));
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i1, (OOC_SSA__Result)i3, i4, (OOC_Scanner_SymList__Symbol)i5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
          goto l10;
l9:
          i2 = (OOC_INT32)pb;
          i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 87, 9);
          instr = (OOC_SSA__Instr)i2;
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
l10:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27672))+20);
          i1 = (OOC_INT32)instr;
          i2 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetDeclRef((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          i0 = (OOC_INT32)instr;
          return (OOC_SSA__Result)i0;
          goto l12;
l11:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26758))+20);
          i1 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetAddress((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i0);
          return (OOC_SSA__Result)i0;
l12:
          _failed_function(26523); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Concat(OOC_IR__Concat expr) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_SSA__Instr instr;
          OOC_INT32 i;

          i0 = (OOC_INT32)pb;
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 17, 9);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)expr;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27968))+8);
          i = 0;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 27976)), 0);
          i3 = 0<i2;
          if (!i3) goto l8;
          i3=0;
l3_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28023))+8);
          i4 = _check_pointer(i4, 28031);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 28031))*4);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l3_loop;
l8:
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_Expression_Constructor(OOC_IR__Constructor expr) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA__Result obj;
          OOC_SSA__Result call;

          i0 = (OOC_INT32)expr;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28245))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_NewObject((OOC_IR__NewObject)i1);
          obj = (OOC_SSA__Result)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28270))+12);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l4;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28321))+12);
          i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
          call = (OOC_SSA__Result)i0;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28343))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28349))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28358))+8);
          OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
l4:
          return (OOC_SSA__Result)i1;
          ;
        }


      i0 = (OOC_INT32)expr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28493)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l194;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29347)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l192;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29424)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l190;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29752)))), &_td_OOC_IR__TypeRefDesc);
      if (i1) goto l188;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29853)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l182;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30317)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l176;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30830)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l174;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30894)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l172;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31166)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l170;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31242)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l168;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31308)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l166;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31369)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l164;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31430)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l162;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31536)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l160;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31597)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l158;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31669)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l152;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32059)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l150;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32239)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l148;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32482)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l146;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32680)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l144;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32935)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l142;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33125)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l140;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33333)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l134;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33704)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l132;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33906)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l121;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34640)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l114;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34981)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l105;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35627)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l103;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35880)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l96;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36284)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l94;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36349)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l83;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36967)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l81;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37030)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l79;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37100)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l77;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37446)))), &_td_OOC_IR__ConstructorDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37512)))), &_td_OOC_IR__CurrentExceptionDesc);
      if (i1) goto l73;
      Log__Type("++ Unknown type in Expression", 30, (void*)i0);
      _assert(0u, 127, 37652);
      goto l215;
l73:
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37554))+8);
      return (OOC_SSA__Result)i0;
      goto l215;
l75:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Constructor((OOC_IR__Constructor)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l77:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Call((OOC_IR__Call)i0);
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      return (OOC_SSA__Result)i0;
      goto l215;
l79:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_NewBlock((OOC_IR__NewBlock)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l81:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_NewObject((OOC_IR__NewObject)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l83:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 36382))+8);
      switch (i1) {
      case 10:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 25);
        return (OOC_SSA__Result)i0;
        goto l215;
      case 11:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 26);
        return (OOC_SSA__Result)i0;
        goto l215;
      case 12:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 27);
        return (OOC_SSA__Result)i0;
        goto l215;
      case 13:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 28);
        return (OOC_SSA__Result)i0;
        goto l215;
      case 14:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 29);
        return (OOC_SSA__Result)i0;
        goto l215;
      case 15:
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_AddCompareOp((OOC_IR__Compare)i0, 30);
        return (OOC_SSA__Result)i0;
        goto l215;
      default:
        Log__Type("++ Unknown variant of Compare in Expression", 44, (void*)i0);
        _assert(0u, 127, 36925);
        goto l215;
      }
l94:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Concat((OOC_IR__Concat)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l96:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 35919))+8);
      switch (i1) {
      case 22:
        opcode = 39;
        goto l101;
      case 23:
        opcode = 40;
        goto l101;
      default:
        _failed_case(i1, 35910);
        goto l101;
      }
l101:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36114))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36118))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i3 = opcode;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, i3, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36167))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36226))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l103:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35719))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 44, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35768))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35828))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l105:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 35012))+8);
      switch (i1) {
      case 6:
        opcode = 35;
        goto l112;
      case 7:
        opcode = 38;
        goto l112;
      case 8:
        opcode = 34;
        goto l112;
      case 9:
        opcode = 36;
        goto l112;
      default:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 35341))+8);
        Log__Int("++ Unknown variant of SetOp in Expression", 42, i1);
        _assert(0u, 127, 35363);
        goto l112;
      }
l112:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35458))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35463))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i3 = opcode;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, i3, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35512))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35572))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l114:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 34675))+8);
      switch (i1) {
      case 20:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34739))+12);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34751))+16);
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutAnd((OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
        return (OOC_SSA__Result)i0;
        goto l215;
      case 21:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34811))+12);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34823))+16);
        i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_ShortcutOr((OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
        return (OOC_SSA__Result)i0;
        goto l215;
      default:
        Log__Type("++ Unknown variant of BooleanOp in Expression", 46, (void*)i0);
        _assert(0u, 127, 34931);
        goto l215;
      }
l121:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 33943))+8);
      switch (i1) {
      case 0:
        opcode = 19;
        goto l130;
      case 1:
        opcode = 20;
        goto l130;
      case 4:
        opcode = 22;
        goto l130;
      case 5:
        opcode = 24;
        goto l130;
      case 2:
        opcode = 23;
        goto l130;
      case 3:
        opcode = 23;
        goto l130;
      default:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 34354))+8);
        Log__Int("++ Unknown variant of BinaryArith in Expression", 48, i1);
        _assert(0u, 127, 34376);
        goto l130;
      }
l130:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34471))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34476))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i3 = opcode;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, i3, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34525))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34585))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l132:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33786))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 54, i1);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33836))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l134:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 33362))+16);
      if (i1) goto l137;
      opcode = 52;
      i1=52;
      goto l138;
l137:
      opcode = 53;
      i1=53;
l138:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33532))+4);
      i3 = (OOC_INT32)pb;
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, i1, i2);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33582))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33643))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l140:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33213))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 50, i1);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33263))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l142:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33017))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 49, i1);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33067))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l144:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32762))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 48, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32812))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32873))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l146:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32564))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 45, i1);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32614))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l148:
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 43, 5);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32365))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32428))+12);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l150:
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 33, 5);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32173))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l152:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31715))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 10);
      if (i1) goto l155;
      opcode = 21;
      i1=21;
      goto l156;
l155:
      opcode = 37;
      i1=37;
l156:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31943))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31952))+4);
      i3 = (OOC_INT32)pb;
      i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, i1, i2);
      instr = (OOC_SSA__Instr)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32002))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Result)i1;
      goto l215;
l158:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeGuard((OOC_IR__TypeGuard)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l160:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeTest((OOC_IR__TypeTest)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l162:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31474))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31500))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i1, (OOC_SSA__Result)i0, 0u, (OOC_Scanner_SymList__Symbol)(OOC_INT32)0);
      return (OOC_SSA__Result)i0;
      goto l215;
l164:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeConv((OOC_IR__TypeConv)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l166:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_TypeCast((OOC_IR__TypeCast)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l168:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectProc((OOC_IR__SelectProc)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l170:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_SelectField((OOC_IR__SelectField)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l172:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_GetIndexBaseArray((OOC_IR__Expression)i0, (void*)(OOC_INT32)&dim);
      baseArray = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)expr;
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength((OOC_SSA__ProcBlock)i2, (OOC_IR__Expression)i1, (-1), (OOC_SSA__Result)i0);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateSize((OOC_SSA__ProcBlock)i2, (OOC_IR__Expression)i1, (OOC_SSA__Result)i3);
      i3 = dim;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Index((OOC_IR__Index)i1, (OOC_SSA__Result)i0, (OOC_SSA__Result)i2, i3);
      return (OOC_SSA__Result)i0;
      goto l215;
l174:
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression_Deref((OOC_IR__Deref)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l176:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30345))+8);
      i1 = i1==16;
      if (i1) goto l179;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30537))+20);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      baseArray = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30577))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30592))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30577))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30592))+4);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30598)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
      type = (OOC_SymbolTable__Type)i2;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 30666))+16);
      i2 = (OOC_INT32)OOC_SymbolTable__ArrayDesc_GetNthElementType((OOC_SymbolTable__Array)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30637)))), &_td_OOC_SymbolTable__ArrayDesc, 30637)), i3);
      type = (OOC_SymbolTable__Type)i2;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 30739))+16);
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30727)))), &_td_OOC_SSA__InstrDesc, 30727)), i0, (OOC_SymbolTable__Array)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30795)))), &_td_OOC_SymbolTable__ArrayDesc, 30795)));
      return (OOC_SSA__Result)i0;
      goto l215;
l179:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30419))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30438)))), &_td_OOC_IR__ConstDesc, 30438)), 30444))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30458)))), &_td_Object_Boxed__StringDesc, 30458)), 30465));
      i0 = *(OOC_INT32*)(_check_pointer(i0, 30472));
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, (i0+1));
      return (OOC_SSA__Result)i0;
      goto l215;
l182:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29896))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      res = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29922))+8);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 29929))+36);
      i2 = i2==12;
      if (i2) goto l185;
      return (OOC_SSA__Result)i1;
      goto l215;
l185:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29992))+8);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30087))+4);
      i2 = (OOC_INT32)pb;
      i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_FixSubclass((OOC_SSA__ProcBlock)i2, (OOC_SSA__Result)i1, i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l188:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29803))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29814)))), &_td_OOC_SymbolTable__TypeDeclDesc, 29814)), 29823))+48);
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Type)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l190:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29506))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 12, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29600))+8);
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetAddress((OOC_SSA__ProcBlock)i3, (OOC_SymbolTable__Declaration)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29668))+8);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetDeclRef((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 5);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i1);
      return (OOC_SSA__Result)i1;
      goto l215;
l192:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29403))+8);
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetAddress((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l194:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28523))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l213;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28637))+8);
      v = (Object_Boxed__Object)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28661)))), &_td_Object_Boxed__StringDesc);
      if (i2) goto l207;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28975)))), &_td_Object_Boxed__BooleanDesc);
      if (i2) goto l205;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29053)))), &_td_Object_Boxed__SetDesc);
      if (i2) goto l203;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29280))+4);
      i2 = (OOC_INT32)pb;
      i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i1, i0, (OOC_SymbolTable__Type)(OOC_INT32)0);
      return (OOC_SSA__Result)i0;
      goto l215;
l203:
      i1 = *(OOC_UINT32*)(_check_pointer(i1, 29120));
      i1 = (OOC_INT32)Object_BigInt__NewInt((_type_cast_fast(OOC_INT32, OOC_UINT32, i1)));
      x = (Object_BigInt__BigInt)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29190))+4);
      i2 = (OOC_INT32)pb;
      i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i1, i0, (OOC_SymbolTable__Type)(OOC_INT32)0);
      return (OOC_SSA__Result)i0;
      goto l215;
l205:
      i0 = *(OOC_UINT8*)(_check_pointer(i1, 29030));
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l207:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28715))+4);
      i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
      if (i2) goto l210;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28848));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28848));
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28854)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
      i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
      x = (Object_BigInt__BigInt)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28930))+4);
      i2 = (OOC_INT32)pb;
      i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i1, i0, (OOC_SymbolTable__Type)(OOC_INT32)0);
      return (OOC_SSA__Result)i0;
      goto l215;
l210:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28785))+4);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i1, 9, (OOC_SymbolTable__Type)i0);
      return (OOC_SSA__Result)i0;
      goto l215;
l213:
      i0 = (OOC_INT32)OOC_SSA__nil;
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, 9, (OOC_SymbolTable__Type)(OOC_INT32)0);
      return (OOC_SSA__Result)i0;
l215:
      _failed_function(11695); return 0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Assert(OOC_IR__Assert assert) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Instr instr;
      OOC_SSA__Result predicate;

      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37826))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l6;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 38013))+16);
      i1 = !i1;
      if (!i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38067))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      predicate = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38122));
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_SymList__Symbol)i2, 64, 0);
      instr = (OOC_SSA__Instr)i2;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 38253))+12);
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      goto l7;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37891));
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i2, (OOC_Scanner_SymList__Symbol)i1, 65, 0);
      instr = (OOC_SSA__Instr)i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 37974))+12);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i2, i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
l7:
      return;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Assignment(OOC_IR__Assignment assignment) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result get;

      i0 = (OOC_INT32)assignment;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38646))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      get = (OOC_SSA__Result)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38727))+12);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddSetInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38697)))), &_td_OOC_SSA__InstrDesc, 38697)), (OOC_SSA__Result)i0);
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

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39009))+4);
      i2 = (OOC_INT32)pb;
      i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 55, i1);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39062))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39118))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 39126))+4);
      OOC_SSA__InstrDesc_AddTypedOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 3, (OOC_SymbolTable__Type)i3, 0u);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39171))+12);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 39182)), 0);
      i3 = 0<i2;
      if (!i3) goto l12;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39206))+16);
      i4 = _check_pointer(i4, 39218);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 39218))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39388))+12);
      i4 = _check_pointer(i4, 39399);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 39399))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 39402))+4);
      type = (OOC_SymbolTable__Type)i4;
      isVarParam = 0u;
      i5=0u;
      goto l7;
l6:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39256))+16);
      i4 = _check_pointer(i4, 39268);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 39268))*4);
      fpar = (OOC_SymbolTable__VarDecl)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 39295))+48);
      type = (OOC_SymbolTable__Type)i5;
      i4 = *(OOC_UINT8*)((_check_pointer(i4, 39331))+60);
      isVarParam = i4;
      {register OOC_INT32 h0=i4;i4=i5;i5=h0;}
l7:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39499))+12);
      i6 = _check_pointer(i6, 39510);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 39510))*4);
      i6 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i6);
      OOC_SSA__InstrDesc_AddTypedOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i6, 1, (OOC_SymbolTable__Type)i4, i5);
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l3_loop;
l12:
      return (OOC_SSA__Instr)i1;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext(OOC_SSA__Result storeIn, OOC_INT32 n) {
      register OOC_INT32 i0,i1,i2;

      i0 = n;
      i1 = i0!=0;
      if (i1) goto l3;
      i0 = (OOC_INT32)storeIn;
      return (OOC_SSA__Result)i0;
      goto l4;
l3:
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 79, 0);
      i2 = (OOC_INT32)storeIn;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i2, i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
      return (OOC_SSA__Result)i0;
l4:
      _failed_function(39631); return 0;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Return(OOC_IR__Return _return) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Result expr;
      OOC_SSA__Instr instr;
      OOC_SSA__Result store;

      i0 = (OOC_INT32)_return;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40183))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 7, 0);
      instr = (OOC_SSA__Instr)i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 40611))+12);
      i2 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i2, i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 2);
      i0=i1;
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40238))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      expr = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 7, 0);
      instr = (OOC_SSA__Instr)i2;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 40373))+12);
      i3 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i3, i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 9);
      i0=i2;
l4:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      store = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40745));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_IfStatm(OOC_IR__IfStatm ifStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr select;
      OOC_SSA__Result storeAfterGuard;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)ifStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41052))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterGuard = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i3, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41228))+12);
      i4 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i3);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i3, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41359))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l3;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l4;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41446))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l4:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
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

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)withStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41907))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterGuard = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i3, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42085))+12);
      i4 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i3);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i3, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42218))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l7;
      i3 = *(OOC_UINT8*)((_check_pointer(i1, 42387))+20);
      if (i3) goto l5;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l8;
l5:
      s = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42459))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42470)))), &_td_OOC_IR__TypeTestDesc, 42470)), 42479))+8);
      var = (OOC_IR__Expression)i2;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42553));
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_TypeTag((OOC_IR__Expression)i2, (OOC_SSA__Result)i3, 1u, (OOC_Scanner_SymList__Symbol)i4);
      typeTag = (OOC_SSA__Instr)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42605));
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i3, (OOC_Scanner_SymList__Symbol)i1, 70, 0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42307))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l8:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_CaseStatm(OOC_IR__CaseStatm caseStatm) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
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
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 82, 0);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)labels;
          i = 0;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 43342)), 0);
          i3 = 0<i2;
          if (!i3) goto l12;
          i3=0;
l3_loop:
          i4 = _check_pointer(i1, 43371);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 43371))*4);
          l = (OOC_IR__Expression)i4;
          i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 43392)))), &_td_OOC_IR__SetRangeDesc);
          if (i5) goto l6;
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          value = (OOC_SSA__Result)i4;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
          goto l7;
l6:
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 43450))+8);
          i5 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i5);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i5, 1);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 43511))+12);
          i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i4);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, 1);
l7:
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l3_loop;
l12:
          return (OOC_SSA__Instr)i0;
          ;
        }


      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 5, 0);
      select = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)caseStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43860))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)s;
      storeAfterSelect = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43946))+12);
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 43956)), 0);
      i4 = 0<i3;
      if (!i4) goto l13;
      i4=i2;i2=i0;i0=i1;i1=0;
l4_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43990))+12);
      i5 = _check_pointer(i5, 44000);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i1, i6, OOC_UINT32, 44000))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 44003))+8);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 44011)), 0);
      i5 = i5>0;
      if (i5) goto l7;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
      goto l8;
l7:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44068))+12);
      i0 = _check_pointer(i0, 44078);
      i4 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i4, OOC_UINT32, 44078))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44081))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CaseStatm_Labels((OOC_IR__CaseLabels)i0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 16);
      i0 = (OOC_INT32)caseStatm;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44238))+12);
      i1 = _check_pointer(i1, 44248);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = i;
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i4, i2, OOC_UINT32, 44248))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44251))+12);
      i2 = (OOC_INT32)pb;
      i5 = (OOC_INT32)storeAfterSelect;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i2, (OOC_SSA__Result)i5, (OOC_IR__StatementSeq)i1);
      i2 = (OOC_INT32)select;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 1);
      i1=i2;i2=i4;i4=i5;
l8:
      i2 = i2+1;
      i = i2;
      i5 = i2<i3;
      if (!i5) goto l12;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
      goto l4_loop;
l12:
      i2=i4;{register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l13:
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i3, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44415))+16);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l20;
      i3 = *(OOC_UINT8*)((_check_pointer(i1, 44581))+20);
      if (i3) goto l18;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      goto l21;
l18:
      s = (OOC_SSA__Result)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 44674));
      i2 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_AddException((OOC_SSA__ProcBlock)i2, (OOC_Scanner_SymList__Symbol)i1, 69, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44777))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 44787));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      goto l21;
l20:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44503))+16);
      i3 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
l21:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
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
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)repeatStatm;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45390))+8);
      i4 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i4, (OOC_SSA__Result)i1, (OOC_IR__StatementSeq)i3);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45437))+12);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      guard = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 9, 0);
      exit = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 2);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 5, 0);
      select = (OOC_SSA__Instr)i3;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i2, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 11, 0);
      end = (OOC_SSA__Instr)i1;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i3 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1, (OOC_SSA__Result)i3);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 46264));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46714))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      guard1 = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)s;
      storeAfterGuard1 = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 10, 0);
      start = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      i4 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i3, 2);
      s = (OOC_SSA__Result)i4;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47051))+12);
      i6 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i6, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i5);
      s = (OOC_SSA__Result)i4;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47098))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      guard2 = (OOC_SSA__Result)i0;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i4, 9, 0);
      exit = (OOC_SSA__Instr)i4;
      i5 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i5, 2);
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i5, 5, 0);
      select = (OOC_SSA__Instr)i5;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i4, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i5, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 11, 0);
      end = (OOC_SSA__Instr)i0;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 1);
      i3 = (OOC_INT32)pb;
      i5 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i0, (OOC_SSA__Result)i5);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 47924));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i3, 11);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 5, 0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i1, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i3, 2);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48775))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48785)))), &_td_OOC_IR__ConstDesc, 48785)), 48791))+8);
          i0 = Object_BigInt__BigIntDesc_Sign((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48806)))), &_td_Object_BigInt__BigIntDesc, 48806)));
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
          i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, i0, 5);
          instr = (OOC_SSA__Instr)i0;
          i1 = (OOC_INT32)forStatm;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49031))+8);
          i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          i1 = (OOC_INT32)bound;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          return (OOC_SSA__Instr)i0;
          ;
        }


      i0 = (OOC_INT32)forStatm;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49590))+16);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      endValue = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49637))+20);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      stepValue = (OOC_SSA__Result)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49677))+8);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      v = (OOC_SSA__Result)i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49749))+12);
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddSetInstr((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 49721)))), &_td_OOC_SSA__InstrDesc, 49721)), (OOC_SSA__Result)i0);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard((OOC_SSA__Result)i1);
      guard1 = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)s;
      storeAfterGuard1 = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)forStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50127))+24);
      i3 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i0, (OOC_IR__StatementSeq)i2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50237))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50242))+4);
      i2 = (OOC_INT32)pb;
      i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 19, i0);
      dummy = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50283))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      v = (OOC_SSA__Result)i1;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
      i2 = (OOC_INT32)stepValue;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddSetInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50407)))), &_td_OOC_SSA__InstrDesc, 50407)), (OOC_SSA__Result)i0);
      OOC_SSA_IRtoSSA__StatmSeq_Chain((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)endValue;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_ForStatm_Guard((OOC_SSA__Result)i0);
      guard2 = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 9, 0);
      exit = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 5, 0);
      select = (OOC_SSA__Instr)i2;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i2, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 11, 0);
      end = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)start;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i3 = (OOC_INT32)s;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i0, (OOC_SSA__Result)i3);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 51274));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 11);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 5, 0);
      i2 = (OOC_INT32)guard1;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i2, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)storeAfterGuard1;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
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
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 10, 0);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 11, 0);
      end = (OOC_SSA__Instr)i1;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 13);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_SetLoopContext((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
      oldSelect = (OOC_SSA__Instr)i0;
      i2 = (OOC_INT32)loopStatm;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 52365))+8);
      i3 = (OOC_INT32)pb;
      i4 = (OOC_INT32)s;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i2);
      s = (OOC_SSA__Result)i2;
      i3 = (OOC_INT32)pb;
      OOC_SSA_IRtoSSA__AddStoreBackwardFeed((OOC_SSA__ProcBlock)i3, (OOC_SSA__Instr)i1, (OOC_SSA__Result)i2);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_SetLoopContext((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_Exit(OOC_IR__Exit exit) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Instr instr;
      OOC_SSA__Result store;

      i0 = (OOC_INT32)exit;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 52847))+12);
      i1 = (OOC_INT32)s;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i1, i0);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 9, 0);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      store = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53029))+4);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 11);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_TryStatm(OOC_IR__TryStatm _try) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
      OOC_SSA__Instr start;
      OOC_SSA__Instr instr;
      OOC_SSA__Instr oldPushContext;
      OOC_SSA__Result sDefault;
      OOC_SSA__Instr pushExceptionContext;
      OOC_SSA__Instr e;
      OOC_SSA__Instr typeTag;
      OOC_SSA__Result sCatch;
      OOC_INT32 i;
      OOC_SSA__Instr typeTest;
      OOC_SSA__Result catchClause;

      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 72, 5);
      start = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 78, 0);
      instr = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_SetTryContext((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i1);
      oldPushContext = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
      i5 = (OOC_INT32)_try;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 53733))+8);
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i3, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i6);
      s = (OOC_SSA__Result)i3;
      i3 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i3, 1);
      sDefault = (OOC_SSA__Result)i3;
      pushExceptionContext = (OOC_SSA__Instr)i1;
      i4 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      i4 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_PopExceptionContext((OOC_SSA__Result)i4, 1);
      s = (OOC_SSA__Result)i4;
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i4, 76, 9);
      e = (OOC_SSA__Instr)i4;
      i6 = (OOC_INT32)pb;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 54070))+8);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i6, 1);
      i6 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i6, 2);
      i6 = (OOC_INT32)pb;
      i6 = (OOC_INT32)OOC_SSA__ProcBlockDesc_SetTryContext((OOC_SSA__ProcBlock)i6, (OOC_SSA__Instr)i4);
      i6 = (OOC_INT32)pb;
      i6 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i6, 61, 9);
      typeTag = (OOC_SSA__Instr)i6;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i6, (OOC_SSA__Result)i4, 1);
      i4 = (OOC_INT32)s;
      sCatch = (OOC_SSA__Result)i4;
      i7 = (OOC_INT32)pb;
      i7 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i7, 80, 0);
      instr = (OOC_SSA__Instr)i7;
      i8 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i7, (OOC_SSA__Result)i8, 2);
      i7 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i7, 2);
      s = (OOC_SSA__Result)i7;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 54544))+12);
      i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 54554)), 0);
      i7 = i7-1;
      i = i7;
      i8 = i7>=0;
      if (!i8) goto l8;
l3_loop:
      i8 = (OOC_INT32)pb;
      i8 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i8, 62, 5);
      typeTest = (OOC_SSA__Instr)i8;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i8, (OOC_SSA__Result)i6, 1);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 54728))+12);
      i9 = _check_pointer(i9, 54738);
      i10 = OOC_ARRAY_LENGTH(i9, 0);
      i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i7, i10, OOC_UINT32, 54738))*4);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 54741))+8);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i9, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 54760)))), &_td_OOC_SymbolTable__PointerDesc, 54760)), 54768))+40);
      i10 = (OOC_INT32)pb;
      i9 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetTypeRef((OOC_SSA__ProcBlock)i10, (OOC_SymbolTable__Type)i9);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i8, (OOC_SSA__Result)i9, 12);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 54840))+12);
      i9 = _check_pointer(i9, 54850);
      i10 = OOC_ARRAY_LENGTH(i9, 0);
      i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i7, i10, OOC_UINT32, 54850))*4);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 54853))+12);
      i10 = (OOC_INT32)pb;
      i9 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i10, (OOC_SSA__Result)i4, (OOC_IR__StatementSeq)i9);
      catchClause = (OOC_SSA__Result)i9;
      i10 = (OOC_INT32)pb;
      i10 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i10, 5, 0);
      instr = (OOC_SSA__Instr)i10;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i10, (OOC_SSA__Result)i8, 1);
      i8 = (OOC_INT32)pb;
      i8 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i8, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i10, (OOC_SSA__Result)i8, 1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i10, (OOC_SSA__Result)i9, 1);
      i8 = (OOC_INT32)pb;
      i8 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i8, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i10, (OOC_SSA__Result)i8, 1);
      i8 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i10, (OOC_SSA__Result)i8, 1);
      i8 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i10, 2);
      s = (OOC_SSA__Result)i8;
      i7 = i7+(-1);
      i = i7;
      i8 = i7>=0;
      if (i8) goto l3_loop;
l8:
      i4 = (OOC_INT32)pb;
      i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i4, 77, 0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i1, 1);
      i1 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i4, (OOC_SSA__Result)i1, 2);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i4, 2);
      s = (OOC_SSA__Result)i1;
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 5, 0);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 0u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstBool((OOC_SSA__ProcBlock)i0, 1u);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 73, 0);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 2);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_SetTryContext((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i2);
      return;
      ;
    }

    
    void OOC_SSA_IRtoSSA__StatmSeq_CopyParameter(OOC_IR__CopyParameter cp) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Result len;

      i0 = (OOC_INT32)cp;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56207))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56233))+8);
      i3 = (OOC_INT32)pb;
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateLength((OOC_SSA__ProcBlock)i3, (OOC_IR__Expression)i1, (-1), (OOC_SSA__Result)i2);
      len = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56281))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 56288))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56373))+8);
      i3 = (OOC_INT32)s;
      i4 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_CalculateSize((OOC_SSA__ProcBlock)i4, (OOC_IR__Expression)i0, (OOC_SSA__Result)i1);
      i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddCopyParameter((OOC_SSA__ProcBlock)i4, (OOC_SymbolTable__VarDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56299)))), &_td_OOC_SymbolTable__VarDeclDesc, 56299)), (OOC_SSA__Result)i3, (OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i0, 2);
      s = (OOC_SSA__Result)i0;
      return;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_MoveBlock(OOC_IR__MoveBlock move) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Result source;
      OOC_SSA__Result dest;

      i0 = (OOC_INT32)move;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56625))+8);
      i1 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i1);
      source = (OOC_SSA__Result)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56666))+12);
      i2 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i2);
      dest = (OOC_SSA__Result)i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56705))+16);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i3 = (OOC_INT32)pb;
      i3 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i3, 18, 0);
      i4 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 4);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 6);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i3;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA_IRtoSSA__StatmSeq_Raise(OOC_IR__Raise raise) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)raise;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57148))+8);
      i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq_Expression((OOC_IR__Expression)i0);
      i1 = (OOC_INT32)pb;
      i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 74, 0);
      i2 = (OOC_INT32)s;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
      return (OOC_SSA__Instr)i1;
      ;
    }


  i0 = (OOC_INT32)statmSeq;
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 57389)), 0);
  i1 = 0<i0;
  if (!i1) goto l80;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)statmSeq;
  i2 = _check_pointer(i2, 57420);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 57420))*4);
  statm = (OOC_IR__Statement)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57441)))), &_td_OOC_IR__AssertDesc);
  if (i2) goto l74;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57494)))), &_td_OOC_IR__AssignmentDesc);
  if (i2) goto l72;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57575)))), &_td_OOC_IR__CallDesc);
  if (i2) goto l70;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57640)))), &_td_OOC_IR__ReturnDesc);
  if (i2) goto l68;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57693)))), &_td_OOC_IR__IfStatmDesc);
  if (i2) goto l66;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57748)))), &_td_OOC_IR__WithStatmDesc);
  if (i2) goto l64;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57807)))), &_td_OOC_IR__CaseStatmDesc);
  if (i2) goto l62;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57878)))), &_td_OOC_IR__RepeatStatmDesc);
  if (i2) goto l60;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57953)))), &_td_OOC_IR__WhileStatmDesc);
  if (i2) goto l58;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58014)))), &_td_OOC_IR__ForStatmDesc);
  if (i2) goto l56;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58071)))), &_td_OOC_IR__LoopStatmDesc);
  if (i2) goto l54;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58130)))), &_td_OOC_IR__ExitDesc);
  if (i2) goto l52;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58179)))), &_td_OOC_IR__TryStatmDesc);
  if (i2) goto l50;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58244)))), &_td_OOC_IR__CopyDesc);
  if (i2) goto l48;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58313)))), &_td_OOC_IR__CopyParameterDesc);
  if (i2) goto l46;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58392)))), &_td_OOC_IR__CopyStringDesc);
  if (i2) goto l44;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58461)))), &_td_OOC_IR__MoveBlockDesc);
  if (i2) goto l42;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58528)))), &_td_OOC_IR__RaiseDesc);
  if (i2) goto l40;
  Log__Type("++ Unknown statement class in StatmSeq", 39, (void*)i1);
  _assert(0u, 127, 58659);
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
  i = i1;
  i2 = i1<i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58851))+12);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l15;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58910))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 58938))+36);
  i3 = i3==12;
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58969))+12);
  i3 = i3==(OOC_INT32)0;
  
l8:
  if (!i3) goto l10;
  i3 = (OOC_INT32)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
  storeOut = (OOC_SSA__Result)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59072))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 59082));
  OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i3, (OOC_SSA__Result)i4);
  OOC_SSA__ProcBlockDesc_DeleteInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
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
