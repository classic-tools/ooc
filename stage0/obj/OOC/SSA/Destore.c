#include "OOC/SSA/Destore.d"
#include "__oo2c.h"

static OOC_CHAR8 OOC_SSA_Destore__IsLocalVariable(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4514)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4537)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4555))+16);
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

static void OOC_SSA_Destore__InitState(OOC_SSA_Destore__State *s, OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;
  ADT_Dictionary__Dictionary localVarWithAdr;
  OOC_SSA__Instr instr;
  auto OOC_CHAR8 OOC_SSA_Destore__InitState_UsesAreVarAccess(OOC_SSA__Result res);
    
    OOC_CHAR8 OOC_SSA_Destore__InitState_UsesAreVarAccess(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4836))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (!i1) goto l19;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4889))+4);
      i1 = i1!=4;
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l8;
l6:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4930))+4);
      i1 = i1!=6;
      
l8:
      if (i1) goto l10;
      i1=OOC_FALSE;
      goto l12;
l10:
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4972)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
      i1 = !i1;
      
l12:
      if (!i1) goto l14;
      return OOC_FALSE;
l14:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5051))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l19:
      return OOC_TRUE;
      ;
    }


  i0 = (OOC_INT32)*s;
  i1 = (OOC_INT32)pb;
  *(OOC_INT32*)(_check_pointer(i0, 5134)) = i1;
  i0 = (OOC_INT32)ADT_Dictionary__New();
  localVarWithAdr = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5393))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5449)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5507)))), &_td_OOC_SSA__AddressDesc, 5507)), 5515))+44);
  i2 = (OOC_INT32)pb;
  i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i1);
  
l8:
  if (i1) goto l10;
  i0=OOC_FALSE;
  goto l11;
l10:
  i0 = OOC_SSA_Destore__InitState_UsesAreVarAccess((OOC_SSA__Result)i0);
  i0 = !i0;
  
l11:
  i1 = (OOC_INT32)instr;
  if (!i0) goto l14;
  i0 = (OOC_INT32)localVarWithAdr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5605)))), &_td_OOC_SSA__AddressDesc, 5605)), 5613))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5588)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)(OOC_INT32)0);
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5658))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)*s;
  i1 = (OOC_INT32)localVarWithAdr;
  *(OOC_INT32*)((_check_pointer(i0, 5685))+4) = i1;
  return;
  ;
}

OOC_SSA_Destore__State OOC_SSA_Destore__New(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0;
  OOC_SSA_Destore__State s;

  s = (OOC_SSA_Destore__State)((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__State.baseTypes[0]));
  i0 = (OOC_INT32)pb;
  OOC_SSA_Destore__InitState((void*)(OOC_INT32)&s, (OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT32)s;
  return (OOC_SSA_Destore__State)i0;
  ;
}

static OOC_CHAR8 OOC_SSA_Destore__AccessedByCall(OOC_SSA_Destore__State s, OOC_SSA__Result calledAdr, OOC_SSA__Opnd design, OOC_INT8 mode) {
  register OOC_INT32 i0,i1;
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr(OOC_SSA__Opnd design);
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl);
    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr(OOC_SSA__Opnd design) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)design;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7075));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7081)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7138));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7126));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7148)))), &_td_OOC_SSA__DeclRefDesc, 7148)), 7156))+44);
      i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i2);
      
l5:
      if (i1) goto l7;
      return OOC_FALSE;
      goto l8;
l7:
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7186))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7219));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7229)))), &_td_OOC_SSA__DeclRefDesc, 7229)), 7237))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7186))+4);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7203)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      return (!i0);
l8:
      _failed_function(7001); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__ProcDecl proc;

      i0 = (OOC_INT32)calledAdr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7465))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 7472))+36);
      i1 = i1==3;
      if (i1) goto l3;
      return OOC_FALSE;
      goto l13;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7529))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7541)))), &_td_OOC_SSA__AddressDesc, 7541)), 7549))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7560)))), &_td_OOC_SymbolTable__ProcDeclDesc, 7560);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i1 = (OOC_INT32)procDecl;
      
l4_loop:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7608)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i2 = i0==(OOC_INT32)0;
      if (i2) goto l7;
      i2 = i0==i1;
      
      goto l9;
l7:
      i2=OOC_TRUE;
l9:
      if (!i2) goto l4_loop;
l12:
      return (i0!=(OOC_INT32)0);
l13:
      _failed_function(7333); return 0;
      ;
    }


  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8004));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8008))+16);
  i1 = (OOC_INT32)calledAdr;
  i0 = OOC_SSA_Destore__AccessedByCall_NestedProc((OOC_SSA__Result)i1, (OOC_SymbolTable__ProcDecl)i0);
  if (i0) goto l3;
  i0 = (OOC_INT32)design;
  i0 = OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr((OOC_SSA__Opnd)i0);
  i0 = !i0;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy(OOC_SSA_Destore__State s, OOC_SSA__Opnd readDesign, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8465))+36);
  switch (i1) {
  case 13:
  case 14:
  case 15:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8626)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
    i1 = (OOC_INT32)readDesign;
    i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
    return (i0!=0);
    goto l7;
  case 4:
  case 12:
  case 5:
  case 10:
  case 11:
  case 6:
  case 59:
  case 60:
  case 58:
  case 9:
  case 7:
  case 65:
  case 64:
  case 66:
  case 67:
  case 68:
  case 71:
  case 70:
  case 69:
    return OOC_FALSE;
    goto l7;
  case 55:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9163))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9173));
    i1 = (OOC_INT32)s;
    i2 = (OOC_INT32)readDesign;
    i0 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i1, (OOC_SSA__Result)i0, (OOC_SSA__Opnd)i2, 1);
    return i0;
    goto l7;
  case 18:
    return OOC_TRUE;
    goto l7;
  default:
    _failed_case(i1, 8455);
    goto l7;
  }
l7:
  _failed_function(8105); return 0;
  ;
}

void OOC_SSA_Destore__StateDesc_Transform(OOC_SSA_Destore__State s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__ProcBlock pb;
  OOC_SSA__Instr instr;
  OOC_SSA__Result value;
  OOC_SSA_Destore__Worklist worklist;
  OOC_SSA__Instr next;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;
  OOC_SSA__Opnd opnd;
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_UnknownValue(OOC_SSA__Result res);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get);
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect(OOC_SSA__Result store, OOC_SSA__Instr set);
  auto void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn);
  auto void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr);
  auto void OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist(OOC_SSA__Result res);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement(OOC_SSA__Instr dgate);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate);
    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_UnknownValue(OOC_SSA__Result res) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)res;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 10018))+4);
      return (i0==2);
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr instr;
      OOC_INT8 alias;
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache(OOC_SSA__Instr instr, OOC_SSA__Result *value);
      auto OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value);
      auto void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate);
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue(OOC_SSA__Instr select);
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue(OOC_SSA__Instr loopStart);
        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache(OOC_SSA__Instr instr, OOC_SSA__Result *value) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_SSA_Destore__CacheEntry ptr;
          OOC_SSA__Opnd readDesign;
          OOC_SSA__Opnd opnd1;
          OOC_SSA__Opnd opnd2;

          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10762))+16);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l51;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10803))+16);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10810)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 10810);
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT32)get;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10850)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
          readDesign = (OOC_SSA__Opnd)i1;
          i2 = i0!=(OOC_INT32)0;
          if (!i2) goto l51;
          i2 = i1!=(OOC_INT32)0;
          
l5_loop:
          opnd1 = (OOC_SSA__Opnd)i1;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10960))+4);
          opnd2 = (OOC_SSA__Opnd)i3;
          i4 = *(OOC_INT8*)((_check_pointer(i1, 10995))+4);
          _assert((i4==5), 127, 10982);
          i4 = *(OOC_INT8*)((_check_pointer(i3, 11048))+4);
          _assert((i4==5), 127, 11035);
          if (i2) goto l8;
          i4=OOC_FALSE;
          goto l10;
l8:
          i4 = i3!=(OOC_INT32)0;
          
l10:
          if (i4) goto l12;
          i4=OOC_FALSE;
          goto l14;
l12:
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11163));
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11150));
          i4 = i5==i4;
          
l14:
          if (i4) goto l16;
          i4=i3;i3=i1;
          goto l30;
l16:
          i4=i3;i3=i1;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11201))+8);
          opnd1 = (OOC_SSA__Opnd)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11227))+8);
          opnd2 = (OOC_SSA__Opnd)i4;
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l20;
          i5=OOC_FALSE;
          goto l22;
l20:
          i5 = i4!=(OOC_INT32)0;
          
l22:
          if (i5) goto l24;
          i5=OOC_FALSE;
          goto l26;
l24:
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11163));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11150));
          i5 = i6==i5;
          
l26:
          if (i5) goto l17_loop;
l30:
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l33;
          i3=OOC_FALSE;
          goto l35;
l33:
          i3 = *(OOC_INT8*)((_check_pointer(i3, 11293))+4);
          i3 = i3==5;
          
l35:
          if (i3) goto l41;
          i3 = i4!=(OOC_INT32)0;
          if (i3) goto l39;
          i3=OOC_FALSE;
          goto l43;
l39:
          i3 = *(OOC_INT8*)((_check_pointer(i4, 11360))+4);
          i3 = i3==5;
          
          goto l43;
l41:
          i3=OOC_TRUE;
l43:
          if (i3) goto l45;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11570))+8);
          *value = (OOC_SSA__Result)i3;
          return OOC_TRUE;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11645));
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i3 = i0!=(OOC_INT32)0;
          if (i3) goto l5_loop;
l51:
          return OOC_FALSE;
          ;
        }

        
        OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Destore__CacheEntry entry;

          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__CacheEntry.baseTypes[0]);
          entry = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT32)get;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11900)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
          *(OOC_INT32*)((_check_pointer(i0, 11885))+4) = i1;
          i1 = (OOC_INT32)value;
          *(OOC_INT32*)((_check_pointer(i0, 11947))+8) = i1;
          i1 = (OOC_INT32)instr;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11982))+16);
          i2 = i2==(OOC_INT32)0;
          if (i2) goto l3;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12074))+16);
          *(OOC_INT32*)(_check_pointer(i0, 12059)) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12081)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 12081));
          goto l4;
l3:
          *(OOC_INT32*)(_check_pointer(i0, 12016)) = (OOC_INT32)0;
l4:
          *(OOC_INT32*)((_check_pointer(i1, 12120))+16) = i0;
          return (OOC_SSA_Destore__CacheEntry)i0;
          ;
        }

        
        void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)dgate;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 12367))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12272)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 23, i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12258)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          return;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue(OOC_SSA__Instr select) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result res;
          OOC_SSA__Instr dgate;
          OOC_SSA_Destore__CacheEntry dummy;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT32)select;
          i1 = OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache((OOC_SSA__Instr)i0, (void*)(OOC_INT32)&res);
          if (i1) goto l32;
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)get;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 13172))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13145)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 75, i2);
          dgate = (OOC_SSA__Instr)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13199)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = *(OOC_INT8*)((_check_pointer(i0, 13349))+36);
          switch (i2) {
          case 5:
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13406)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          case 11:
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13465)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          default:
            _failed_case(i2, 13338);
            goto l7;
          }
l7:
          i2 = (OOC_INT32)opnd;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l10;
          i2=OOC_FALSE;
          goto l12;
l10:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13530)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l12:
          if (!i2) goto l31;
l14_loop:
          i2 = (OOC_INT32)opnd;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13591));
          i4 = (OOC_INT32)get;
          i3 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i3, (OOC_SSA__Instr)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13569)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, 1);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13639))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i0, 13673))+36);
          i3 = i3==5;
          if (i3) goto l17;
          i3=OOC_FALSE;
          goto l19;
l17:
          i3 = i2!=(OOC_INT32)0;
          
l19:
          if (!i3) goto l22;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13745))+8);
          opnd = (OOC_SSA__Opnd)i2;
          
l22:
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l25;
          i2=OOC_FALSE;
          goto l27;
l25:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13530)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l27:
          if (i2) goto l14_loop;
l31:
          return (OOC_SSA__Result)i1;
          goto l33;
l32:
          i0 = (OOC_INT32)res;
          return (OOC_SSA__Result)i0;
l33:
          _failed_function(12501); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue(OOC_SSA__Instr loopStart) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Result res;
          OOC_SSA__Instr dgate;
          OOC_SSA_Destore__CacheEntry dummy;

          i0 = (OOC_INT32)loopStart;
          i1 = OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache((OOC_SSA__Instr)i0, (void*)(OOC_INT32)&res);
          if (i1) goto l3;
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)get;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 14404))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14377)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 75, i2);
          dgate = (OOC_SSA__Instr)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14431)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14599))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14608));
          i3 = (OOC_INT32)get;
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14571)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14673)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
          i2 = (OOC_INT32)get;
          i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14646)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          goto l4;
l3:
          i0 = (OOC_INT32)res;
          return (OOC_SSA__Result)i0;
l4:
          _failed_function(13867); return 0;
          ;
        }


      i0 = (OOC_INT32)store;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14802))+8);
      instr = (OOC_SSA__Instr)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14827))+36);
      switch (i1) {
      case 13:
        i1 = (OOC_INT32)get;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14905)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14987)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        i3 = i2==1;
        alias = i2;
        if (i3) goto l9;
        i2 = i2!=0;
        if (i2) goto l7;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15703)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l28;
l7:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15477)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
l9:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15173)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 8);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 12:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15800)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 14:
      case 15:
        i1 = (OOC_INT32)get;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15929)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16011)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        alias = i2;
        i2 = i2!=0;
        if (i2) goto l15;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16549)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l28;
l15:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16299)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16850)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 5:
      case 11:
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 6:
      case 59:
      case 60:
      case 58:
      case 9:
      case 7:
      case 65:
      case 64:
      case 66:
      case 67:
      case 68:
      case 71:
      case 70:
      case 69:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17286)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 10:
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 55:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17449))+24);
        i2 = (OOC_INT32)get;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17459));
        i3 = (OOC_INT32)s;
        i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17496)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 5);
        i1 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i1, (OOC_SSA__Opnd)i4, 1);
        if (i1) goto l24;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17904)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        return (OOC_SSA__Result)i0;
        goto l28;
l24:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17627)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
      case 18:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18073)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l28;
      default:
        _failed_case(i1, 14817);
        goto l28;
      }
l28:
      _failed_function(10080); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect(OOC_SSA__Result store, OOC_SSA__Instr set) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd use;
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse(OOC_SSA__Opnd use);
        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse(OOC_SSA__Opnd use) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Instr instr;
          OOC_SSA__Result storeOut;
          OOC_INT8 alias;
          OOC_SSA__Opnd readDesign;
          OOC_SSA__Instr i;
          auto OOC_SymbolTable__VarDecl OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar(OOC_SSA__Instr instr);
          auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var);
            
            OOC_SymbolTable__VarDecl OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_INT8 _class;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT32)instr;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 18977))+36);
              switch (i1) {
              case 12:
                _class = 5;
                goto l5;
              case 13:
                _class = 7;
                goto l5;
              default:
                _failed_case(i1, 18967);
                goto l5;
              }
l5:
              i1 = _class;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19126)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, i1);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19169));
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19175)))), &_td_OOC_SSA__DeclRefDesc));
              if (i1) goto l8;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19213));
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19223)))), &_td_OOC_SSA__DeclRefDesc, 19223)), 19231))+44);
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19238)))), &_td_OOC_SymbolTable__VarDeclDesc));
              
              goto l10;
l8:
              i1=OOC_TRUE;
l10:
              if (i1) goto l12;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19380));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19390)))), &_td_OOC_SSA__DeclRefDesc, 19390)), 19398))+44);
              return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19409)))), &_td_OOC_SymbolTable__VarDeclDesc, 19409));
              goto l13;
l12:
              return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
l13:
              _failed_function(18664); return 0;
              ;
            }

            
            OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)var;
              i1 = i0==(OOC_INT32)0;
              if (i1) goto l3;
              i1 = *(OOC_UINT8*)((_check_pointer(i0, 19708))+50);
              
              goto l5;
l3:
              i1=OOC_TRUE;
l5:
              if (i1) goto l7;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19775)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
              i1 = (OOC_INT32)pb;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19793))+16);
              i0 = i0!=i1;
              
              goto l8;
l7:
              i0=OOC_TRUE;
l8:
              return i0;
              ;
            }


          i0 = (OOC_INT32)use;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 19895))+4);
          i1 = i1==13;
          if (i1) goto l45;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20074))+12);
          instr = (OOC_SSA__Instr)i0;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 20103))+36);
          switch (i1) {
          case 12:
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20168)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            storeOut = (OOC_SSA__Result)i1;
            i2 = (OOC_INT32)set;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20238)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20325)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
            i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i0);
            i0 = i0!=0;
            if (i0) goto l11;
            i0 = i1!=(OOC_INT32)0;
            if (i0) goto l9;
            i0=OOC_FALSE;
            goto l10;
l9:
            i0 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
            
l10:
            return i0;
            goto l46;
l11:
            return OOC_TRUE;
            goto l46;
          case 13:
            i1 = (OOC_INT32)set;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20701)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20788)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
            i2 = i1==1;
            alias = i1;
            if (i2) goto l20;
            i1 = i1!=0;
            if (i1) goto l18;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21629)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l18:
            return OOC_TRUE;
            goto l46;
l20:
            return OOC_FALSE;
            goto l46;
          case 15:
          case 14:
            i1 = (OOC_INT32)set;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21779)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21866)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
            i2 = i1>=2;
            alias = i1;
            if (i2) goto l33;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22241)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
            readDesign = (OOC_SSA__Opnd)i1;
            i2 = i1==(OOC_INT32)0;
            if (i2) goto l31;
            i2 = (OOC_INT32)set;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22515)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
            alias = i1;
            i1 = i1!=0;
            if (i1) goto l29;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22998)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l29:
            return OOC_TRUE;
            goto l46;
l31:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22396)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l33:
            return OOC_TRUE;
            goto l46;
          case 7:
          case 8:
            i0 = (OOC_INT32)set;
            i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar((OOC_SSA__Instr)i0);
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility((OOC_SymbolTable__VarDecl)i0);
            return i0;
            goto l46;
          case 9:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23313)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
            i = (OOC_SSA__Instr)i0;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23364)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 10:
          case 11:
          case 6:
          case 5:
          case 59:
          case 60:
          case 64:
          case 66:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23611)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 55:
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23713))+24);
            i2 = (OOC_INT32)set;
            i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23723));
            i3 = (OOC_INT32)s;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23764)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i1, (OOC_SSA__Opnd)i2, 0);
            if (i1) goto l41;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24005)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l41:
            return OOC_TRUE;
            goto l46;
          default:
            return OOC_TRUE;
            goto l46;
          }
l45:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19951))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19951))+12);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19958)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
          instr = (OOC_SSA__Instr)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20013)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
          i1 = (OOC_INT32)set;
          i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
          return i0;
l46:
          _failed_function(18475); return 0;
          ;
        }


      i0 = (OOC_INT32)store;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24180))+8);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 24187))+20);
      i1 = i1==0;
      if (i1) goto l3;
      return OOC_FALSE;
      goto l20;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24219))+8);
      *(OOC_INT32*)((_check_pointer(i1, 24226))+20) = 1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24261))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (i1) goto l6;
      i0=OOC_FALSE;
      goto l8;
l6:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l8:
      if (!i0) goto l19;
l10_loop:
      i0 = (OOC_INT32)use;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24341))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l15:
      if (i0) goto l10_loop;
l19:
      i0 = (OOC_INT32)store;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24378))+8);
      i1 = (OOC_INT32)use;
      *(OOC_INT32*)((_check_pointer(i0, 24385))+20) = 0;
      return (i1!=(OOC_INT32)0);
l20:
      _failed_function(18135); return 0;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)storeOut;
      i1 = (OOC_INT32)storeIn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24582)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24621)))), OOC_SSA__ResultDesc_DeleteResult)),OOC_SSA__ResultDesc_DeleteResult)((OOC_SSA__Result)i0);
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Destore__Worklist wl;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 24763))+20);
      i1 = i1==-1;
      if (!i1) goto l4;
      *(OOC_INT32*)((_check_pointer(i0, 24807))+20) = (OOC_INT32)0;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__Worklist.baseTypes[0]);
      wl = (OOC_SSA_Destore__Worklist)i1;
      i2 = (OOC_INT32)worklist;
      *(OOC_INT32*)(_check_pointer(i1, 24868)) = i2;
      *(OOC_INT32*)((_check_pointer(i1, 24898))+4) = i0;
      worklist = (OOC_SSA_Destore__Worklist)i1;
l4:
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr useInstr;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25106))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25167))+12);
      useInstr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 25196))+36);
      i2 = i2==75;
      if (!i2) goto l6;
      OOC_SSA_Destore__StateDesc_Transform_AddToWorklist((OOC_SSA__Instr)i1);
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25292))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l11:
      return;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_CHAR8 allTheSame;
      OOC_CHAR8 haveUnknownValue;
      OOC_SSA__Result firstValue;
      OOC_SSA__Result value;
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue(OOC_SSA__Opnd opnd);
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res);
        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue(OOC_SSA__Opnd opnd) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Result value;

          i0 = (OOC_INT32)opnd;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25776));
          value = (OOC_SSA__Result)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25800)))), &_td_OOC_SSA__InstrDesc);
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25827)))), &_td_OOC_SSA__InstrDesc, 25827)), 25833))+36);
          i1 = i1==75;
          
l5:
          if (!i1) goto l8;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25929)))), &_td_OOC_SSA__InstrDesc, 25929)), 25935))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25944))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25953));
          
l8:
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)res;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26124))+8);
          i1 = (OOC_INT32)instr;
          return (i1==i0);
          ;
        }


      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26190))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 26199));
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26208)))), &_td_OOC_SSA__InstrDesc, 26208);
      select = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 26232))+36);
      i2 = i2==10;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26277)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i2 = i2!=(OOC_INT32)0;
      
l5:
      if (i2) goto l7;
      i0=OOC_FALSE;
      goto l13;
l7:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26341)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i0 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
      if (i0) goto l10;
      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26400)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i1 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i1);
      i0 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
      
      goto l13;
l10:
      i0=OOC_TRUE;
l13:
      if (i0) goto l37;
      allTheSame = OOC_TRUE;
      haveUnknownValue = OOC_FALSE;
      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26629)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i1 = (OOC_INT32)opnd;
      i1 = i1!=(OOC_INT32)0;
      firstValue = (OOC_SSA__Result)i0;
      if (!i1) goto l28;
l17_loop:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i1 = (OOC_INT32)firstValue;
      i1 = i0!=i1;
      value = (OOC_SSA__Result)i0;
      if (!i1) goto l20;
      allTheSame = OOC_FALSE;
l20:
      i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
      if (!i0) goto l23;
      haveUnknownValue = OOC_TRUE;
l23:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26947))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l17_loop;
l28:
      i0 = allTheSame;
      if (i0) goto l35;
      i0 = haveUnknownValue;
      if (i0) goto l33;
      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27205)))), OOC_SSA__InstrDesc_GetResultClass)),OOC_SSA__InstrDesc_GetResultClass)((OOC_SSA__Instr)i0, 23);
      return (OOC_SSA__Result)i0;
      goto l38;
l33:
      i0 = (OOC_INT32)select;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27095)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
      return (OOC_SSA__Result)i0;
      goto l38;
l35:
      i0 = (OOC_INT32)firstValue;
      return (OOC_SSA__Result)i0;
      goto l38;
l37:
      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26441)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      opnd = (OOC_SSA__Opnd)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26466)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26511)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      return (OOC_SSA__Result)i0;
l38:
      _failed_function(25356); return 0;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result replacement;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      OOC_SSA__Instr collect;
      OOC_SSA__Result newRes;
      auto OOC_INT32 OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_NumberOfPaths(OOC_SSA__Instr select);
      auto OOC_SSA__Instr OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_GetCollect(OOC_SSA__Instr select, OOC_INT32 pathNum);
        
        OOC_INT32 OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_NumberOfPaths(OOC_SSA__Instr select) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)select;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 27642))+36);
          switch (i1) {
          case 5:
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27703)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 16);
            i1 = i1==(OOC_INT32)0;
            if (i1) goto l5;
            i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27847)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
            return (i0-1);
            goto l10;
l5:
            i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27770)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
            return (i0>>1);
            goto l10;
          case 10:
            return 2;
            goto l10;
          case 11:
            i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27974)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 11);
            return i0;
            goto l10;
          default:
            _failed_case(i1, 27631);
            goto l10;
          }
l10:
          _failed_function(27504); return 0;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_GetCollect(OOC_SSA__Instr select, OOC_INT32 pathNum) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Opnd opnd;
          OOC_SSA__Instr loopEnd;
          OOC_SSA__Instr collect;
          OOC_SSA__Result oldStore;

          i0 = (OOC_INT32)select;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 28457))+36);
          switch (i1) {
          case 5:
            i1 = pathNum;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28518)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, (2+i1*2));
            opnd = (OOC_SSA__Opnd)i0;
            goto l10;
          case 11:
            i1 = pathNum;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28648)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, (i1+2));
            opnd = (OOC_SSA__Opnd)i0;
            i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28693));
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28698))+8);
            i1 = *(OOC_INT8*)((_check_pointer(i1, 28705))+36);
            _assert((i1==9), 127, 28681);
            i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28752));
            i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28757))+8);
            i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28764))+24);
            opnd = (OOC_SSA__Opnd)i0;
            goto l10;
          case 10:
            i1 = pathNum;
            i2 = i1==0;
            if (i2) goto l7;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28938)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
            loopEnd = (OOC_SSA__Instr)i0;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28981)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 13);
            opnd = (OOC_SSA__Opnd)i0;
            
            goto l10;
l7:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28873)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, i1);
            opnd = (OOC_SSA__Opnd)i0;
            
            goto l10;
          default:
            _failed_case(i1, 28446);
            goto l10;
          }
l10:
          i0 = (OOC_INT32)opnd;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29070));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29075))+8);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 29082))+36);
          i1 = i1==6;
          if (i1) goto l13;
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29183)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 6, 0);
          collect = (OOC_SSA__Instr)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29253));
          oldStore = (OOC_SSA__Result)i2;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29295)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29274)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29341)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
          return (OOC_SSA__Instr)i1;
          goto l14;
l13:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29135));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29140))+8);
          return (OOC_SSA__Instr)i0;
l14:
          _failed_function(28065); return 0;
          ;
        }


      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29476))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29485))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29494));
      replacement = (OOC_SSA__Result)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 29521))+4);
      i1 = i1==23;
      if (i1) goto l3;
      return (OOC_SSA__Result)i0;
      goto l13;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29680))+8);
      dgate = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29754))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29763));
      select = (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29772)))), &_td_OOC_SSA__InstrDesc, 29772));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29801)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = i0!=(OOC_INT32)0;
      i = 0;
      if (i0) goto l6;
      i0=0;
      goto l12;
l6:
      i0=0;
l7_loop:
      i1 = (OOC_INT32)select;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_GetCollect((OOC_SSA__Instr)i1, i0);
      collect = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)opnd;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29926));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29913)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29965))+8);
      i1 = i;
      i1 = i1+1;
      opnd = (OOC_SSA__Opnd)i0;
      i = i1;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l11;
      i0=i1;
      goto l7_loop;
l11:
      i0=i1;
l12:
      i1 = (OOC_INT32)select;
      i1 = OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_NumberOfPaths((OOC_SSA__Instr)i1);
      _assert((i0==i1), 127, 30005);
      i0 = (OOC_INT32)select;
      i1 = (OOC_INT32)dgate;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 30108))+5);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30064)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 14, i1);
      newRes = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)replacement;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30139)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
      return (OOC_SSA__Result)i0;
l13:
      _failed_function(27314); return 0;
      ;
    }


  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30282));
  pb = (OOC_SSA__ProcBlock)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30437)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30475))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l23;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 30530))+36);
  i1 = i1==12;
  if (!i1) goto l18;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30590)))), OOC_SSA__InstrDesc_GetArgStore)),OOC_SSA__InstrDesc_GetArgStore)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i0) goto l16;
  i0 = (OOC_INT32)value;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30796)))), &_td_OOC_SSA__InstrDesc);
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30837)))), &_td_OOC_SSA__InstrDesc, 30837)), 30843))+36);
  i1 = i1==75;
  
l12:
  if (i1) goto l14;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30948)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  goto l18;
l14:
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30888)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 22);
  goto l18;
l16:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30685)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30710))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30720));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30743))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30743))+24);
  i2 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30753)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i2);
l18:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31015))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l23:
  worklist = (OOC_SSA_Destore__Worklist)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31158))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l41;
l26_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31216))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31243))+36);
  i1 = i1==75;
  if (i1) goto l29;
  i1=OOC_FALSE;
  goto l31;
l29:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 31275))+20);
  i1 = i1==-1;
  
l31:
  if (!i1) goto l36;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31374))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31383))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 31392));
  i2 = i0!=i2;
  if (!i2) goto l36;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31418))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31427))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31418))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31427))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31436)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l36:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l26_loop;
l41:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l52;
l44_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31644))+4);
  instr = (OOC_SSA__Instr)i1;
  *(OOC_INT32*)((_check_pointer(i1, 31663))+20) = -1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31715));
  worklist = (OOC_SSA_Destore__Worklist)i0;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i1);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31787))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31796))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 31805));
  i2 = i0!=i2;
  if (!i2) goto l47;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31829))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31838))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31829))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31838))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31847)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l47:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l44_loop;
l52:
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32035))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l91;
l55_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32093))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32120))+36);
  i1 = i1==75;
  if (!i1) goto l86;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_DGateReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i0) goto l72;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32992))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l85;
  i1 = (OOC_INT32)value;
  
l62_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33059))+16);
  nextUse = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i0, 33088))+4);
  i3 = i3==22;
  if (i3) goto l65;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33225)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
  goto l66;
l65:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33134))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33134))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 33140)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i4, (OOC_SSA__Result)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33178)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i0);
l66:
  use = (OOC_SSA__Opnd)i2;
  i0 = i2!=(OOC_INT32)0;
  if (!i0) goto l85;
  i0=i2;
  goto l62_loop;
l72:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32300))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l85;
l75_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32367))+16);
  nextUse = (OOC_SSA__Opnd)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32396))+4);
  i1 = i1==22;
  if (i1) goto l78;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32780))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 32786))+36);
  _assert((i0==75), 127, 32770);
  goto l79;
l78:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32449))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 32455))+36);
  _assert((i1==12), 127, 32439);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32503))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32503))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32509)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 2);
  opnd = (OOC_SSA__Opnd)i0;
  _assert((i0!=(OOC_INT32)0), 127, 32550);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32595))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32601));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 32612))+4);
  _assert((i1==2), 127, 32584);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32671))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32694));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32677));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32719)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
l79:
  i0 = (OOC_INT32)use;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32843)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)nextUse;
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l75_loop;
l85:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33338))+12);
  _assert((i1==(OOC_INT32)0), 127, 33326);
  i1 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33365)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l86:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l55_loop;
l91:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34106))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l109;
l94_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34165))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 34193))+36);
  i3 = i3==12;
  if (i3) goto l97;
  i3=OOC_FALSE;
  goto l99;
l97:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34224))+12);
  i3 = i3==(OOC_INT32)0;
  
l99:
  if (!i3) goto l104;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34263));
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l103;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34385));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 34397));
  _assert((i3==(OOC_INT32)0), 127, 34372);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34433));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34465))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 34475));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34433));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 34445)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i5, (OOC_SSA__Result)i4);
l103:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34506)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l104:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l109;
  i1=i2;
  goto l94_loop;
l109:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34722)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34760))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l124;
l112_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34819))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 34847))+36);
  i1 = i1==13;
  if (i1) goto l115;
  i0=OOC_FALSE;
  goto l117;
l115:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34902)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  i0 = !i0;
  
l117:
  if (!i0) goto l119;
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34956)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35009)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34989)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35059))+12);
  _assert((i1==(OOC_INT32)0), 127, 35046);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35132));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35144));
  _assert((i1==(OOC_INT32)0), 127, 35119);
  i1 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35175)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l119:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l112_loop;
l124:
  return;
  ;
}

void OOC_OOC_SSA_Destore_init(void) {

  return;
  ;
}

/* --- */
