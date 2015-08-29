#include <OOC/SSA/Destore.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_CHAR8 OOC_SSA_Destore__IsLocalVariable(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4530)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4553)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4571))+16);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4852))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l19;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4905))+4);
      i1 = i1!=4;
      if (i1) goto l6;
      i1=0u;
      goto l8;
l6:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4946))+4);
      i1 = i1!=6;
      
l8:
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4988)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
      i1 = !i1;
      
l12:
      if (!i1) goto l14;
      return 0u;
l14:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5067))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l19:
      return 1u;
      ;
    }


  i0 = (OOC_INT32)*s;
  i1 = (OOC_INT32)pb;
  *(OOC_INT32*)(_check_pointer(i0, 5150)) = i1;
  i0 = (OOC_INT32)ADT_Dictionary__New();
  localVarWithAdr = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5409))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5465)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5523)))), &_td_OOC_SSA__AddressDesc, 5523)), 5531))+44);
  i2 = (OOC_INT32)pb;
  i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i1);
  
l8:
  if (i1) goto l10;
  i0=0u;
  goto l11;
l10:
  i0 = OOC_SSA_Destore__InitState_UsesAreVarAccess((OOC_SSA__Result)i0);
  i0 = !i0;
  
l11:
  i1 = (OOC_INT32)instr;
  if (!i0) goto l14;
  i0 = (OOC_INT32)localVarWithAdr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5621)))), &_td_OOC_SSA__AddressDesc, 5621)), 5629))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5604)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)0);
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5674))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)*s;
  i1 = (OOC_INT32)localVarWithAdr;
  *(OOC_INT32*)((_check_pointer(i0, 5701))+4) = i1;
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7091));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7097)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7154));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7142));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7164)))), &_td_OOC_SSA__DeclRefDesc, 7164)), 7172))+44);
      i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i2);
      
l5:
      if (i1) goto l7;
      return 0u;
      goto l8;
l7:
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7202))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7235));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7202))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7245)))), &_td_OOC_SSA__DeclRefDesc, 7245)), 7253))+44);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7219)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      return (!i0);
l8:
      _failed_function(7017); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__ProcDecl proc;

      i0 = (OOC_INT32)calledAdr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7481))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 7488))+36);
      i1 = i1==3;
      if (i1) goto l3;
      return 0u;
      goto l13;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7545))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7557)))), &_td_OOC_SSA__AddressDesc, 7557)), 7565))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7576)))), &_td_OOC_SymbolTable__ProcDeclDesc, 7576);
      i1 = (OOC_INT32)procDecl;
      proc = (OOC_SymbolTable__ProcDecl)i0;
      
l4_loop:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7624)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i2 = i0==(OOC_INT32)0;
      if (i2) goto l7;
      i2 = i0==i1;
      
      goto l9;
l7:
      i2=1u;
l9:
      if (!i2) goto l4_loop;
l12:
      return (i0!=(OOC_INT32)0);
l13:
      _failed_function(7349); return 0;
      ;
    }


  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8020));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8024))+16);
  i1 = (OOC_INT32)calledAdr;
  i0 = OOC_SSA_Destore__AccessedByCall_NestedProc((OOC_SSA__Result)i1, (OOC_SymbolTable__ProcDecl)i0);
  if (i0) goto l3;
  i0 = (OOC_INT32)design;
  i0 = OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr((OOC_SSA__Opnd)i0);
  i0 = !i0;
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy(OOC_SSA_Destore__State s, OOC_SSA__Opnd readDesign, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable(OOC_SSA__Result adr, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d);
    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable(OOC_SSA__Result adr, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)
      OOC_SymbolTable__Module module;

      OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
      i0 = (OOC_INT32)adr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8523)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l3;
      return 0u;
      goto l8;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8561))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8561))+44);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8566)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
      module = (OOC_SymbolTable__Module)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8596))+44);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8602)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i0) goto l6;
      i0=0u;
      goto l7;
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8627))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8632))+12);
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 8636)),(const void*)(OOC_INT32)moduleName))==0;
      
l7:
      return i0;
l8:
      _failed_function(8396); return 0;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8822))+36);
  switch (i1) {
  case 13:
  case 14:
  case 15:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8983)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
    i1 = (OOC_INT32)readDesign;
    i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
    return (i0!=0);
    goto l8;
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
  case 74:
  case 72:
  case 73:
  case 79:
  case 77:
  case 78:
    return 0u;
    goto l8;
  case 55:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9668))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9678));
    i1 = (OOC_INT32)s;
    i2 = (OOC_INT32)readDesign;
    i0 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i1, (OOC_SSA__Result)i0, (OOC_SSA__Opnd)i2, 1);
    return i0;
    goto l8;
  case 76:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9768))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9777));
    i0 = OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable((OOC_SSA__Result)i0, "Exception", 10);
    return i0;
    goto l8;
  case 18:
    return 1u;
    goto l8;
  default:
    _failed_case(i1, 8812);
    goto l8;
  }
l8:
  _failed_function(8121); return 0;
  ;
}

void OOC_SSA_Destore__StateDesc_Transform(OOC_SSA_Destore__State s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__ProcBlock pb;
  ADT_ArrayList__ArrayList unknownList;
  OOC_SSA__Instr instr;
  OOC_SSA__Result value;
  OOC_INT32 i;
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
      i0 = *(OOC_INT8*)((_check_pointer(i0, 10669))+4);
      return (i0==2);
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr instr;
      OOC_INT8 alias;
      OOC_SSA__Result upstream;
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11441))+16);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l51;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11482))+16);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11489)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 11489);
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT32)get;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11529)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
          readDesign = (OOC_SSA__Opnd)i1;
          i2 = i0!=(OOC_INT32)0;
          if (!i2) goto l51;
          i2 = i1!=(OOC_INT32)0;
          
l5_loop:
          opnd1 = (OOC_SSA__Opnd)i1;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11639))+4);
          opnd2 = (OOC_SSA__Opnd)i3;
          i4 = *(OOC_INT8*)((_check_pointer(i1, 11674))+4);
          _assert((i4==5), 127, 11661);
          i4 = *(OOC_INT8*)((_check_pointer(i3, 11727))+4);
          _assert((i4==5), 127, 11714);
          if (i2) goto l8;
          i4=0u;
          goto l10;
l8:
          i4 = i3!=(OOC_INT32)0;
          
l10:
          if (i4) goto l12;
          i4=0u;
          goto l14;
l12:
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11842));
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11829));
          i4 = i5==i4;
          
l14:
          if (i4) goto l16;
          i4=i3;i3=i1;
          goto l30;
l16:
          i4=i3;i3=i1;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11880))+8);
          opnd1 = (OOC_SSA__Opnd)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11906))+8);
          opnd2 = (OOC_SSA__Opnd)i4;
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l20;
          i5=0u;
          goto l22;
l20:
          i5 = i4!=(OOC_INT32)0;
          
l22:
          if (i5) goto l24;
          i5=0u;
          goto l26;
l24:
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11842));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11829));
          i5 = i6==i5;
          
l26:
          if (i5) goto l17_loop;
l30:
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l33;
          i3=0u;
          goto l35;
l33:
          i3 = *(OOC_INT8*)((_check_pointer(i3, 11972))+4);
          i3 = i3==5;
          
l35:
          if (i3) goto l41;
          i3 = i4!=(OOC_INT32)0;
          if (i3) goto l39;
          i3=0u;
          goto l43;
l39:
          i3 = *(OOC_INT8*)((_check_pointer(i4, 12039))+4);
          i3 = i3==5;
          
          goto l43;
l41:
          i3=1u;
l43:
          if (i3) goto l45;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12249))+8);
          *value = (OOC_SSA__Result)i3;
          return 1u;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12324));
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i3 = i0!=(OOC_INT32)0;
          if (i3) goto l5_loop;
l51:
          *value = (OOC_SSA__Result)(OOC_INT32)0;
          return 0u;
          ;
        }

        
        OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Destore__CacheEntry entry;

          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__CacheEntry.baseTypes[0]);
          entry = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT32)get;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12624)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
          *(OOC_INT32*)((_check_pointer(i0, 12609))+4) = i1;
          i1 = (OOC_INT32)value;
          *(OOC_INT32*)((_check_pointer(i0, 12671))+8) = i1;
          i1 = (OOC_INT32)instr;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12706))+16);
          i2 = i2==(OOC_INT32)0;
          if (i2) goto l3;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12798))+16);
          *(OOC_INT32*)(_check_pointer(i0, 12783)) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12805)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 12805));
          goto l4;
l3:
          *(OOC_INT32*)(_check_pointer(i0, 12740)) = (OOC_INT32)0;
l4:
          *(OOC_INT32*)((_check_pointer(i1, 12844))+16) = i0;
          return (OOC_SSA_Destore__CacheEntry)i0;
          ;
        }

        
        void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)dgate;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 13091))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12996)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 23, i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12982)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
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
          i2 = *(OOC_INT8*)((_check_pointer(i2, 13896))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13869)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 82, i2);
          dgate = (OOC_SSA__Instr)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13923)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = *(OOC_INT8*)((_check_pointer(i0, 14073))+36);
          switch (i2) {
          case 5:
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14130)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          case 11:
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14189)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          default:
            _failed_case(i2, 14062);
            goto l7;
          }
l7:
          i2 = (OOC_INT32)opnd;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l10;
          i2=0u;
          goto l12;
l10:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14254)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l12:
          if (!i2) goto l31;
l14_loop:
          i2 = (OOC_INT32)opnd;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14315));
          i4 = (OOC_INT32)get;
          i3 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i3, (OOC_SSA__Instr)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14293)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, 1);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14363))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i0, 14397))+36);
          i3 = i3==5;
          if (i3) goto l17;
          i3=0u;
          goto l19;
l17:
          i3 = i2!=(OOC_INT32)0;
          
l19:
          if (!i3) goto l22;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14469))+8);
          opnd = (OOC_SSA__Opnd)i2;
          
l22:
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l25;
          i2=0u;
          goto l27;
l25:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14254)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i2);
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
          _failed_function(13225); return 0;
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
          i2 = *(OOC_INT8*)((_check_pointer(i2, 15128))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15101)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 82, i2);
          dgate = (OOC_SSA__Instr)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15155)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15323))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15332));
          i3 = (OOC_INT32)get;
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15295)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15397)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
          i2 = (OOC_INT32)get;
          i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15370)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          goto l4;
l3:
          i0 = (OOC_INT32)res;
          return (OOC_SSA__Result)i0;
l4:
          _failed_function(14591); return 0;
          ;
        }


      i0 = (OOC_INT32)store;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15526))+8);
      instr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 15551))+36);
      switch (i2) {
      case 13:
        i0 = (OOC_INT32)get;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15629)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15711)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        alias = i2;
        i3 = i2==1;
        if (i3) goto l9;
        i2 = i2!=0;
        if (i2) goto l7;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16427)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l40;
l7:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16201)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
l9:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15897)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 8);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 12:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16529)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i2 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        upstream = (OOC_SSA__Result)i0;
        i3 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
        if (!i3) goto l17;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16650)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16734)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        i2 = i2==1;
        if (!i2) goto l17;
        return (OOC_SSA__Result)i1;
l17:
        return (OOC_SSA__Result)i0;
        goto l40;
      case 14:
      case 15:
        i0 = (OOC_INT32)get;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17135)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17217)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        alias = i2;
        i2 = i2!=0;
        if (i2) goto l21;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17755)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l40;
l21:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17505)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18056)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 5:
      case 11:
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
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
      case 74:
      case 76:
      case 79:
      case 77:
      case 78:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18635)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 72:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18712)))), OOC_SSA__ResultDesc_ResultIndex)),OOC_SSA__ResultDesc_ResultIndex)((OOC_SSA__Result)i0);
        i0 = i0==2;
        if (i0) goto l29;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18864)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
l29:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18780)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 73:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19112)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 10:
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 55:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19269))+24);
        i2 = (OOC_INT32)get;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19279));
        i3 = (OOC_INT32)s;
        i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19316)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 5);
        i0 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i0, (OOC_SSA__Opnd)i4, 1);
        if (i0) goto l36;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19724)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        return (OOC_SSA__Result)i0;
        goto l40;
l36:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19447)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 18:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19893)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      default:
        _failed_case(i2, 15541);
        goto l40;
      }
l40:
      _failed_function(10731); return 0;
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
              i1 = *(OOC_INT8*)((_check_pointer(i0, 20797))+36);
              switch (i1) {
              case 12:
                _class = 5;
                goto l5;
              case 13:
                _class = 7;
                goto l5;
              default:
                _failed_case(i1, 20787);
                goto l5;
              }
l5:
              i1 = _class;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20946)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, i1);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20989));
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20995)))), &_td_OOC_SSA__DeclRefDesc));
              if (i1) goto l8;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21033));
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21043)))), &_td_OOC_SSA__DeclRefDesc, 21043)), 21051))+44);
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21058)))), &_td_OOC_SymbolTable__VarDeclDesc));
              
              goto l10;
l8:
              i1=1u;
l10:
              if (i1) goto l12;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21200));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21210)))), &_td_OOC_SSA__DeclRefDesc, 21210)), 21218))+44);
              return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21229)))), &_td_OOC_SymbolTable__VarDeclDesc, 21229));
              goto l13;
l12:
              return (OOC_SymbolTable__VarDecl)0;
l13:
              _failed_function(20484); return 0;
              ;
            }

            
            OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)var;
              i1 = i0==(OOC_INT32)0;
              if (i1) goto l3;
              i1 = *(OOC_UINT8*)((_check_pointer(i0, 21528))+50);
              
              goto l5;
l3:
              i1=1u;
l5:
              if (i1) goto l7;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21595)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
              i1 = (OOC_INT32)pb;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21613))+16);
              i0 = i0!=i1;
              
              goto l8;
l7:
              i0=1u;
l8:
              return i0;
              ;
            }


          i0 = (OOC_INT32)use;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 21715))+4);
          i1 = i1==13;
          if (i1) goto l45;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21894))+12);
          instr = (OOC_SSA__Instr)i0;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 21923))+36);
          switch (i1) {
          case 12:
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21988)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            storeOut = (OOC_SSA__Result)i1;
            i2 = (OOC_INT32)set;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22058)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22145)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
            i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i0);
            i0 = i0!=0;
            if (i0) goto l11;
            i0 = i1!=(OOC_INT32)0;
            if (i0) goto l9;
            i0=0u;
            goto l10;
l9:
            i0 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
            
l10:
            return i0;
            goto l46;
l11:
            return 1u;
            goto l46;
          case 13:
            i1 = (OOC_INT32)set;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22521)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22608)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
            alias = i1;
            i2 = i1==1;
            if (i2) goto l20;
            i1 = i1!=0;
            if (i1) goto l18;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23449)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l18:
            return 1u;
            goto l46;
l20:
            return 0u;
            goto l46;
          case 15:
          case 14:
            i1 = (OOC_INT32)set;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23599)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23686)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
            alias = i1;
            i1 = i1>=2;
            if (i1) goto l33;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24061)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
            readDesign = (OOC_SSA__Opnd)i1;
            i2 = i1==(OOC_INT32)0;
            if (i2) goto l31;
            i2 = (OOC_INT32)set;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24335)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
            alias = i1;
            i1 = i1!=0;
            if (i1) goto l29;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24818)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l29:
            return 1u;
            goto l46;
l31:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24216)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l33:
            return 1u;
            goto l46;
          case 7:
          case 8:
            i0 = (OOC_INT32)set;
            i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar((OOC_SSA__Instr)i0);
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility((OOC_SymbolTable__VarDecl)i0);
            return i0;
            goto l46;
          case 9:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25133)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
            i = (OOC_SSA__Instr)i0;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25184)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
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
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25431)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 55:
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25533))+24);
            i2 = (OOC_INT32)set;
            i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25543));
            i3 = (OOC_INT32)s;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25584)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i1, (OOC_SSA__Opnd)i2, 0);
            if (i1) goto l41;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25825)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l41:
            return 1u;
            goto l46;
          default:
            return 1u;
            goto l46;
          }
l45:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21771))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21771))+12);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21778)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
          instr = (OOC_SSA__Instr)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21833)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
          i1 = (OOC_INT32)set;
          i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
          return i0;
l46:
          _failed_function(20295); return 0;
          ;
        }


      i0 = (OOC_INT32)store;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26000))+8);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 26007))+20);
      i1 = i1==0;
      if (i1) goto l3;
      return 0u;
      goto l20;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26039))+8);
      *(OOC_INT32*)((_check_pointer(i1, 26046))+20) = 1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26081))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l6;
      i0=0u;
      goto l8;
l6:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l8:
      if (!i0) goto l19;
l10_loop:
      i0 = (OOC_INT32)use;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26161))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=0u;
      goto l15;
l13:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l15:
      if (i0) goto l10_loop;
l19:
      i0 = (OOC_INT32)store;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26198))+8);
      i1 = (OOC_INT32)use;
      *(OOC_INT32*)((_check_pointer(i0, 26205))+20) = 0;
      return (i1!=(OOC_INT32)0);
l20:
      _failed_function(19955); return 0;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)storeOut;
      i1 = (OOC_INT32)storeIn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26402)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26441)))), OOC_SSA__ResultDesc_DeleteResult)),OOC_SSA__ResultDesc_DeleteResult)((OOC_SSA__Result)i0);
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Destore__Worklist wl;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 26583))+20);
      i1 = i1==(-1);
      if (!i1) goto l4;
      *(OOC_INT32*)((_check_pointer(i0, 26627))+20) = 0;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__Worklist.baseTypes[0]);
      wl = (OOC_SSA_Destore__Worklist)i1;
      i2 = (OOC_INT32)worklist;
      *(OOC_INT32*)(_check_pointer(i1, 26688)) = i2;
      *(OOC_INT32*)((_check_pointer(i1, 26718))+4) = i0;
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26926))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26987))+12);
      useInstr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 27016))+36);
      i2 = i2==82;
      if (!i2) goto l6;
      OOC_SSA_Destore__StateDesc_Transform_AddToWorklist((OOC_SSA__Instr)i1);
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27112))+16);
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
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27596));
          value = (OOC_SSA__Result)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27620)))), &_td_OOC_SSA__InstrDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27647)))), &_td_OOC_SSA__InstrDesc, 27647)), 27653))+36);
          i1 = i1==82;
          
l5:
          if (!i1) goto l8;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27749)))), &_td_OOC_SSA__InstrDesc, 27749)), 27755))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27764))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27773));
          
l8:
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)res;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27944))+8);
          i1 = (OOC_INT32)instr;
          return (i1==i0);
          ;
        }


      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28010))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28019));
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28028)))), &_td_OOC_SSA__InstrDesc, 28028);
      select = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 28052))+36);
      i2 = i2==10;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28097)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i2 = i2!=0;
      
l5:
      if (i2) goto l7;
      i0=0u;
      goto l13;
l7:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28161)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i0 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
      if (i0) goto l10;
      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28220)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i1 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i1);
      i0 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
      
      goto l13;
l10:
      i0=1u;
l13:
      if (i0) goto l42;
      allTheSame = 1u;
      haveUnknownValue = 0u;
      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28449)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0==0;
      if (i1) goto l40;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      firstValue = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)opnd;
      i2 = i1!=0;
      if (!i2) goto l31;
      i0=i1;
l20_loop:
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      value = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)firstValue;
      i2 = i0!=i1;
      if (!i2) goto l23;
      allTheSame = 0u;
l23:
      i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
      if (!i0) goto l26;
      haveUnknownValue = 1u;
l26:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28901))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=0;
      if (i2) goto l20_loop;
l30:
      i0=i1;
l31:
      i1 = allTheSame;
      if (i1) goto l38;
      i0 = haveUnknownValue;
      if (i0) goto l36;
      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29177)))), OOC_SSA__InstrDesc_GetResultClass)),OOC_SSA__InstrDesc_GetResultClass)((OOC_SSA__Instr)i0, 23);
      return (OOC_SSA__Result)i0;
      goto l43;
l36:
      i0 = (OOC_INT32)select;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29061)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
      return (OOC_SSA__Result)i0;
      goto l43;
l38:
      return (OOC_SSA__Result)i0;
      goto l43;
l40:
      i0 = (OOC_INT32)select;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28544)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
      return (OOC_SSA__Result)i0;
      goto l43;
l42:
      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28261)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      opnd = (OOC_SSA__Opnd)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28286)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28331)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      return (OOC_SSA__Result)i0;
l43:
      _failed_function(27176); return 0;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_SSA__Result replacement;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      OOC_SSA__Instr collect;
      OOC_SSA__Result newRes;

      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29506))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29515))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29524));
      replacement = (OOC_SSA__Result)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 29551))+4);
      i1 = i1==23;
      if (i1) goto l3;
      return (OOC_SSA__Result)i0;
      goto l13;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29710))+8);
      dgate = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29784))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 29793));
      i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29802)))), &_td_OOC_SSA__InstrDesc, 29802);
      select = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29831)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i1, 2);
      opnd = (OOC_SSA__Opnd)i3;
      i = 0;
      i4 = i3!=0;
      if (i4) goto l6;
      i3=0;
      goto l12;
l6:
      i4=i3;i3=0;
l7_loop:
      i5 = (OOC_INT32)pb;
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29909)))), OOC_SSA__InstrDesc_GetCollect)),OOC_SSA__InstrDesc_GetCollect)((OOC_SSA__Instr)i2, (OOC_SSA__ProcBlock)i5, i3);
      collect = (OOC_SSA__Instr)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 29959));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 29946)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i5, (OOC_SSA__Result)i6, 1);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 29998))+8);
      opnd = (OOC_SSA__Opnd)i4;
      i3 = i3+1;
      i = i3;
      i5 = i4!=0;
      if (i5) goto l7_loop;
l12:
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30055)))), OOC_SSA__InstrDesc_NumberOfPaths)),OOC_SSA__InstrDesc_NumberOfPaths)((OOC_SSA__Instr)i2);
      _assert((i3==i4), 127, 30038);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 30142))+5);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30098)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i2, 14, i1);
      newRes = (OOC_SSA__Result)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30173)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
      return (OOC_SSA__Result)i1;
l13:
      _failed_function(29301); return 0;
      ;
    }


  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30316));
  pb = (OOC_SSA__ProcBlock)i0;
  i1 = (OOC_INT32)ADT_ArrayList__New(8);
  unknownList = (ADT_ArrayList__ArrayList)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30508)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30546))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l23;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 30601))+36);
  i1 = i1==12;
  if (!i1) goto l18;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30661)))), OOC_SSA__InstrDesc_GetArgStore)),OOC_SSA__InstrDesc_GetArgStore)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i0) goto l16;
  i0 = (OOC_INT32)value;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30818)))), &_td_OOC_SSA__InstrDesc);
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30859)))), &_td_OOC_SSA__InstrDesc, 30859)), 30865))+36);
  i1 = i1==82;
  
l12:
  if (i1) goto l14;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30970)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  goto l18;
l14:
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30910)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 22);
  goto l18;
l16:
  i0 = (OOC_INT32)unknownList;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30744)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
  i1 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30781)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
l18:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31037))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l3_loop;
l23:
  i0 = (OOC_INT32)unknownList;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 31088))+4);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l31;
  i1=0;
l26_loop:
  i2 = (OOC_INT32)unknownList;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 31130));
  i3 = _check_pointer(i3, 31136);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 31136))*4);
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 31144)))), &_td_OOC_SSA__InstrDesc, 31144);
  instr = (OOC_SSA__Instr)i3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 31178));
  i2 = _check_pointer(i2, 31184);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i1+1), i4, OOC_UINT32, 31184))*4);
  value = (OOC_SSA__Result)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31194)))), &_td_OOC_SSA__ResultDesc, 31194));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 31231)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31255))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 31264));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31282))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31282))+24);
  i3 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31291)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i1, (OOC_SSA__Result)i3);
  i1 = i;
  i1 = i1+2;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l26_loop;
l31:
  worklist = (OOC_SSA_Destore__Worklist)0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31445))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l49;
l34_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31503))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31530))+36);
  i1 = i1==82;
  if (i1) goto l37;
  i1=0u;
  goto l39;
l37:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 31562))+20);
  i1 = i1==(-1);
  
l39:
  if (!i1) goto l44;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31661))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31670))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 31679));
  i2 = i0!=i2;
  if (!i2) goto l44;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31705))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31714))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31705))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31714))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31723)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l44:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l34_loop;
l49:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=0;
  if (!i0) goto l60;
l52_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31931))+4);
  instr = (OOC_SSA__Instr)i1;
  *(OOC_INT32*)((_check_pointer(i1, 31950))+20) = (-1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32002));
  worklist = (OOC_SSA_Destore__Worklist)i0;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i1);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32074))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32083))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 32092));
  i2 = i0!=i2;
  if (!i2) goto l55;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32116))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32125))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32116))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32125))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32134)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l55:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=0;
  if (i0) goto l52_loop;
l60:
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32322))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l99;
l63_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32380))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32407))+36);
  i1 = i1==82;
  if (!i1) goto l94;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_DGateReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i0) goto l80;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33279))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=0;
  if (!i1) goto l93;
  i1 = (OOC_INT32)value;
  
l70_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33346))+16);
  nextUse = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i0, 33375))+4);
  i3 = i3==22;
  if (i3) goto l73;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33512)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
  goto l74;
l73:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33421))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33421))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 33427)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i4, (OOC_SSA__Result)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33465)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i0);
l74:
  use = (OOC_SSA__Opnd)i2;
  i0 = i2!=0;
  if (!i0) goto l93;
  i0=i2;
  goto l70_loop;
l80:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32587))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=0;
  if (!i1) goto l93;
l83_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32654))+16);
  nextUse = (OOC_SSA__Opnd)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32683))+4);
  i1 = i1==22;
  if (i1) goto l86;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33067))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 33073))+36);
  _assert((i0==82), 127, 33057);
  goto l87;
l86:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32736))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 32742))+36);
  _assert((i1==12), 127, 32726);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32790))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32790))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32796)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 2);
  opnd = (OOC_SSA__Opnd)i0;
  _assert((i0!=0), 127, 32837);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32882))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32888));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 32899))+4);
  _assert((i1==2), 127, 32871);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32958))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32981));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32964));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33006)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
l87:
  i0 = (OOC_INT32)use;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33130)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)nextUse;
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=0;
  if (i1) goto l83_loop;
l93:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33625))+12);
  _assert((i1==0), 127, 33613);
  i1 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33652)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l94:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l63_loop;
l99:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34393))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=0;
  if (!i2) goto l117;
l102_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34452))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 34480))+36);
  i3 = i3==12;
  if (i3) goto l105;
  i3=0u;
  goto l107;
l105:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34511))+12);
  i3 = i3==0;
  
l107:
  if (!i3) goto l112;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34550));
  i3 = i3!=0;
  if (!i3) goto l111;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34672));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 34684));
  _assert((i3==0), 127, 34659);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34720));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34752))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 34762));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 34720));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 34732)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i5, (OOC_SSA__Result)i4);
l111:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34793)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l112:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=0;
  if (!i1) goto l117;
  i1=i2;
  goto l102_loop;
l117:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35009)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35047))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l132;
l120_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35106))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 35134))+36);
  i1 = i1==13;
  if (i1) goto l123;
  i0=0u;
  goto l125;
l123:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35189)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  i0 = !i0;
  
l125:
  if (!i0) goto l127;
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35243)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35296)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35276)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35346))+12);
  _assert((i1==0), 127, 35333);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35419));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35431));
  _assert((i1==0), 127, 35406);
  i1 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35462)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l127:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l120_loop;
l132:
  return;
  ;
}

void OOC_OOC_SSA_Destore_init(void) {

  return;
  ;
}

/* --- */
