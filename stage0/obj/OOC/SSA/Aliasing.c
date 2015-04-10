#include "OOC/SSA/Aliasing.d"
#include "__oo2c.h"

OOC_INT8 OOC_SSA_Aliasing__DesignatorAlias(OOC_SSA__Opnd instr, OOC_SSA__Opnd reference) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type typeInstr;
  OOC_SymbolTable__Type typeRef;
  auto OOC_SSA__Opnd OOC_SSA_Aliasing__DesignatorAlias_NextPart(OOC_SSA__Opnd opnd);
  auto OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_IsVariable(OOC_SSA__Opnd opnd);
  auto OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_IsVarParam(OOC_SSA__Opnd opnd);
  auto OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_IsHeapObject(OOC_SSA__Opnd opnd);
  auto OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_CompatiblePointers(OOC_SymbolTable__Type a, OOC_SymbolTable__Type b);
  auto OOC_INT8 OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors(OOC_SSA__Opnd selInstr, OOC_SSA__Opnd selReference, OOC_INT8 prefixClass);
  auto OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_NotHigherLevel(OOC_SymbolTable__Declaration varParam, OOC_SymbolTable__Declaration variable);
    
    OOC_SSA__Opnd OOC_SSA_Aliasing__DesignatorAlias_NextPart(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)opnd;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4972));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4978)))), &_td_OOC_SSA__TypeRefDesc);
      if (!i1) goto l3;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5019))+8);
      opnd = (OOC_SSA__Opnd)i0;
l3:
      i0 = (OOC_INT32)opnd;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5094))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5120))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 5130))+4);
      i2 = *(OOC_INT8*)((_check_pointer(i0, 5144))+4);
      i1 = i1!=i2;
      
      goto l8;
l6:
      i1=OOC_TRUE;
l8:
      if (i1) goto l10;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5207))+8);
      return (OOC_SSA__Opnd)i0;
      goto l11;
l10:
      return (OOC_SSA__Opnd)(OOC_INT32)0;
l11:
      _failed_function(4911); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_IsVariable(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)opnd;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5416));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5422)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5455));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5465)))), &_td_OOC_SSA__DeclRefDesc, 5465)), 5473))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5480)))), &_td_OOC_SymbolTable__VarDeclDesc);
      
l5:
      if (i1) goto l7;
      i0=OOC_FALSE;
      goto l8;
l7:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5513));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5523)))), &_td_OOC_SSA__DeclRefDesc, 5523)), 5531))+44);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5542)))), &_td_OOC_SymbolTable__VarDeclDesc, 5542)), 5550))+50);
      i0 = !i0;
      
l8:
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_IsVarParam(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)opnd;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5722));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5728)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5761));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5771)))), &_td_OOC_SSA__DeclRefDesc, 5771)), 5779))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5786)))), &_td_OOC_SymbolTable__VarDeclDesc);
      
l5:
      if (i1) goto l7;
      i0=OOC_FALSE;
      goto l8;
l7:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5818));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5828)))), &_td_OOC_SSA__DeclRefDesc, 5828)), 5836))+44);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5847)))), &_td_OOC_SymbolTable__VarDeclDesc, 5847)), 5855))+50);
      
l8:
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_IsHeapObject(OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6019));
      return (OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6025)))), &_td_OOC_SSA__TypeRefDesc));
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_CompatiblePointers(OOC_SymbolTable__Type a, OOC_SymbolTable__Type b) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)a;
      i1 = (OOC_INT32)b;
      i2 = i0==i1;
      if (i2) goto l15;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6190)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i2) goto l5;
      i2=OOC_FALSE;
      goto l7;
l5:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6211)))), &_td_OOC_SymbolTable__PointerDesc);
      
l7:
      if (i2) goto l9;
      return OOC_FALSE;
      goto l16;
l9:
      i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      if (i2) goto l12;
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      
      goto l13;
l12:
      i0=OOC_TRUE;
l13:
      return i0;
      goto l16;
l15:
      return OOC_TRUE;
l16:
      _failed_function(6076); return 0;
      ;
    }

    
    OOC_INT8 OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors(OOC_SSA__Opnd selInstr, OOC_SSA__Opnd selReference, OOC_INT8 prefixClass) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      auto OOC_INT8 OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors_PartiallyCovered(OOC_INT8 id);
        
        OOC_INT8 OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors_PartiallyCovered(OOC_INT8 id) {
          register OOC_INT32 i0,i1;

          i0 = id;
          i1 = i0==3;
          if (i1) goto l3;
          _assert((i0==1), 127, 6744);
          return 2;
          goto l4;
l3:
          return 3;
l4:
          _failed_function(6620); return 0;
          ;
        }


      i0 = prefixClass;
      i1 = i0==1;
      if (i1) goto l3;
      i1 = i0==3;
      
      goto l4;
l3:
      i1=OOC_TRUE;
l4:
      i2 = (OOC_INT32)selInstr;
      _assert(i1, 127, 6873);
      i1 = i2==(OOC_INT32)0;
      if (i1) goto l15;
      i1 = (OOC_INT32)selReference;
      i3 = i1==(OOC_INT32)0;
      if (i3) goto l13;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 7705));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7725));
      i3 = i3==i4;
      if (i3) goto l11;
      i0 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i1);
      i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors((OOC_SSA__Opnd)i0, (OOC_SSA__Opnd)i1, 3);
      return i0;
      goto l20;
l11:
      i2 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i2);
      i1 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i1);
      i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1, i0);
      return i0;
      goto l20;
l13:
      return i0;
      goto l20;
l15:
      i1 = (OOC_INT32)selReference;
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l18;
      i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors_PartiallyCovered(i0);
      return i0;
      goto l20;
l18:
      return i0;
l20:
      _failed_function(6386); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Aliasing__DesignatorAlias_NotHigherLevel(OOC_SymbolTable__Declaration varParam, OOC_SymbolTable__Declaration variable) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Item pVariable;
      OOC_SymbolTable__Item pVarParam;

      i0 = (OOC_INT32)variable;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8418)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i1 = i0==(OOC_INT32)0;
      pVariable = (OOC_SymbolTable__Item)i0;
      if (i1) goto l12;
      i1 = (OOC_INT32)varParam;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8659)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i1);
      pVarParam = (OOC_SymbolTable__Item)i1;
      
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8721))+4);
      pVarParam = (OOC_SymbolTable__Item)i1;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l6;
      i3 = i1==i0;
      
      goto l8;
l6:
      i3=OOC_TRUE;
l8:
      if (!i3) goto l3_loop;
l11:
      return i2;
      goto l13;
l12:
      return OOC_FALSE;
l13:
      _failed_function(8130); return 0;
      ;
    }


  i0 = (OOC_INT32)instr;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVariable((OOC_SSA__Opnd)i0);
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVariable((OOC_SSA__Opnd)i0);
  
l5:
  if (i0) goto l74;
  i0 = (OOC_INT32)instr;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsHeapObject((OOC_SSA__Opnd)i0);
  if (i0) goto l9;
  i0=OOC_FALSE;
  goto l11;
l9:
  i0 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsHeapObject((OOC_SSA__Opnd)i0);
  
l11:
  if (i0) goto l64;
  i0 = (OOC_INT32)instr;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVarParam((OOC_SSA__Opnd)i0);
  if (i0) goto l26;
  i0 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVarParam((OOC_SSA__Opnd)i0);
  if (i0) goto l24;
  i0 = (OOC_INT32)instr;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsHeapObject((OOC_SSA__Opnd)i0);
  if (i0) goto l22;
  i0 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsHeapObject((OOC_SSA__Opnd)i0);
  if (!i0) goto l79;
  return 0;
  goto l79;
l22:
  return 0;
  goto l79;
l24:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
  return i0;
  goto l79;
l26:
  i0 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVarParam((OOC_SSA__Opnd)i0);
  if (i0) goto l29;
  i0=OOC_FALSE;
  goto l31;
l29:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10778));
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10812));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10787)))), &_td_OOC_SSA__DeclRefDesc, 10787)), 10795))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10821)))), &_td_OOC_SSA__DeclRefDesc, 10821)), 10829))+44);
  i0 = i0==i1;
  
l31:
  if (i0) goto l61;
  i0 = (OOC_INT32)reference;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVariable((OOC_SSA__Opnd)i0);
  if (i0) goto l35;
  i0=OOC_FALSE;
  goto l37;
l35:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11138));
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11198));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11148)))), &_td_OOC_SSA__DeclRefDesc, 11148)), 11156))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11208)))), &_td_OOC_SSA__DeclRefDesc, 11208)), 11216))+44);
  i0 = OOC_SSA_Aliasing__DesignatorAlias_NotHigherLevel((OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Declaration)i1);
  
l37:
  if (i0) goto l59;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11766));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11776)))), &_td_OOC_SSA__DeclRefDesc, 11776)), 11784))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11795)))), &_td_OOC_SymbolTable__VarDeclDesc, 11795)), 11803))+40);
  typeInstr = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)reference;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11832));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11838)))), &_td_OOC_SSA__DeclRefDesc);
  if (i2) goto l45;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11958));
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11964)))), &_td_OOC_SSA__TypeRefDesc);
  if (i2) goto l43;
  _assert(OOC_FALSE, 127, 12064);
  goto l46;
l43:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12015));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12025)))), &_td_OOC_SSA__TypeRefDesc, 12025)), 12033))+44);
  typeRef = (OOC_SymbolTable__Type)i2;
  goto l46;
l45:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11889));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11899)))), &_td_OOC_SSA__DeclRefDesc, 11899)), 11907))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11918)))), &_td_OOC_SymbolTable__VarDeclDesc, 11918)), 11926))+40);
  typeRef = (OOC_SymbolTable__Type)i2;
l46:
  i2 = (OOC_INT32)typeRef;
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2, OOC_TRUE);
  if (i0) goto l53;
  i0 = OOC_SSA_Aliasing__DesignatorAlias_IsVarParam((OOC_SSA__Opnd)i1);
  if (i0) goto l51;
  i0=OOC_FALSE;
  goto l55;
l51:
  i0 = (OOC_INT32)typeInstr;
  i1 = (OOC_INT32)typeRef;
  i0 = OOC_SymbolTable_TypeRules__IsComponentOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, OOC_TRUE);
  
  goto l55;
l53:
  i0=OOC_TRUE;
l55:
  if (i0) goto l57;
  return 0;
  goto l79;
l57:
  return 3;
  goto l79;
l59:
  return 0;
  goto l79;
l61:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i1);
  i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors((OOC_SSA__Opnd)i0, (OOC_SSA__Opnd)i1, 1);
  return i0;
  goto l79;
l64:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9832));
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9896));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9842)))), &_td_OOC_SSA__TypeRefDesc, 9842)), 9850))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9906)))), &_td_OOC_SSA__TypeRefDesc, 9906)), 9914))+44);
  i0 = OOC_SSA_Aliasing__DesignatorAlias_CompatiblePointers((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  if (i0) goto l67;
  return 0;
  goto l79;
l67:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9944))+8);
  i2 = (OOC_INT32)reference;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9971))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9981));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9954));
  i1 = i1==i2;
  if (i1) goto l70;
  i0 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i1);
  i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors((OOC_SSA__Opnd)i0, (OOC_SSA__Opnd)i1, 3);
  return i0;
  goto l79;
l70:
  i0 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i1);
  i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors((OOC_SSA__Opnd)i0, (OOC_SSA__Opnd)i1, 1);
  return i0;
  goto l79;
l74:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9151));
  i2 = (OOC_INT32)reference;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9197));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9161)))), &_td_OOC_SSA__DeclRefDesc, 9161)), 9169))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9207)))), &_td_OOC_SSA__DeclRefDesc, 9207)), 9215))+44);
  i1 = i1==i2;
  if (i1) goto l77;
  return 0;
  goto l79;
l77:
  i0 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT32)reference;
  i1 = (OOC_INT32)OOC_SSA_Aliasing__DesignatorAlias_NextPart((OOC_SSA__Opnd)i1);
  i0 = OOC_SSA_Aliasing__DesignatorAlias_CheckSelectors((OOC_SSA__Opnd)i0, (OOC_SSA__Opnd)i1, 1);
  return i0;
l79:
  return 3;
  ;
}

void OOC_OOC_SSA_Aliasing_init(void) {

  return;
  ;
}

/* --- */
