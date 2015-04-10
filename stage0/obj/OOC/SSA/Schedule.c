#include "OOC/SSA/Schedule.d"
#include "__oo2c.h"

void OOC_SSA_Schedule__InitInfo(OOC_SSA_Schedule__Info info) {

  return;
  ;
}

static void OOC_SSA_Schedule__InitBlock(OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  ADT_Object__Init((ADT_Object__Object)i0);
  *(OOC_INT32*)((_check_pointer(i0, 5829))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5854))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)dominator;
  *(OOC_INT32*)((_check_pointer(i0, 5879))+4) = i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 6019)) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5961))+16);
  *(OOC_INT32*)(_check_pointer(i0, 5939)) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 5987))+16) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 6051))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6074))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6103))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 6125))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6154))+36) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 6176))+28) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 6204))+40) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6221))+44) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SSA_Schedule__BlockDesc_SetInfo(OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__Info info) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Schedule__Block nested;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)info;
  *(OOC_INT32*)((_check_pointer(i0, 6336))+44) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6367))+16);
  i2 = i0!=(OOC_INT32)0;
  nested = (OOC_SSA_Schedule__Block)i0;
  if (!i2) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6418)))), OOC_SSA_Schedule__BlockDesc_SetInfo)),OOC_SSA_Schedule__BlockDesc_SetInfo)((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Info)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6458));
  nested = (OOC_SSA_Schedule__Block)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__BlockDesc_DefaultTarget(OOC_SSA_Schedule__Block b) {

  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  ;
}

static void OOC_SSA_Schedule__RevertDomList(OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Schedule__Block _new;
  OOC_SSA_Schedule__Block old;
  OOC_SSA_Schedule__Block next;

  _new = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6910))+16);
  old = (OOC_SSA_Schedule__Block)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i1=(OOC_INT32)0;
  goto l9;
l3:
  i2=(OOC_INT32)0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6963));
  next = (OOC_SSA_Schedule__Block)i3;
  *(OOC_INT32*)(_check_pointer(i1, 6983)) = i2;
  _new = (OOC_SSA_Schedule__Block)i1;
  old = (OOC_SSA_Schedule__Block)i3;
  i2 = i3!=(OOC_INT32)0;
  if (!i2) goto l9;
  i2=i1;i1=i3;
  goto l4_loop;
l9:
  *(OOC_INT32*)((_check_pointer(i0, 7052))+16) = i1;
  return;
  ;
}

static void OOC_SSA_Schedule__ClearJump(OOC_SSA_Schedule__Jump reference) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SSA_Schedule__ClearJump_Remove(OOC_SSA_Schedule__Jump *list, OOC_SSA_Schedule__Jump entry);
    
    void OOC_SSA_Schedule__ClearJump_Remove(OOC_SSA_Schedule__Jump *list, OOC_SSA_Schedule__Jump entry) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)*list;
      i1 = (OOC_INT32)entry;
      i2 = i0==i1;
      if (i2) goto l3;
      OOC_SSA_Schedule__ClearJump_Remove((void*)((_check_pointer(i0, 7287))+8), (OOC_SSA_Schedule__Jump)i1);
      goto l4;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7240))+8);
      *list = (OOC_SSA_Schedule__Jump)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)reference;
  _assert((i0!=(OOC_INT32)0), 127, 7353);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7397))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7397))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 7403))+36);
  *(OOC_INT32*)((_check_pointer(i1, 7403))+36) = (i2-1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7437))+4);
  OOC_SSA_Schedule__ClearJump_Remove((void*)((_check_pointer(i1, 7443))+32), (OOC_SSA_Schedule__Jump)i0);
  return;
  ;
}

static void OOC_SSA_Schedule__SetJump(OOC_SSA_Schedule__Jump *reference, OOC_SSA_Schedule__Block src, OOC_SSA_Schedule__Block dest) {
  register OOC_INT32 i0,i1,i2;
  auto OOC_SSA_Schedule__Jump OOC_SSA_Schedule__SetJump_NewJump(OOC_SSA_Schedule__Block src, OOC_SSA_Schedule__Block dest, OOC_SSA_Schedule__Jump nextTargetUse);
    
    OOC_SSA_Schedule__Jump OOC_SSA_Schedule__SetJump_NewJump(OOC_SSA_Schedule__Block src, OOC_SSA_Schedule__Block dest, OOC_SSA_Schedule__Jump nextTargetUse) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__Jump j;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__Jump.baseTypes[0]);
      j = (OOC_SSA_Schedule__Jump)i0;
      i1 = (OOC_INT32)src;
      *(OOC_INT32*)(_check_pointer(i0, 7672)) = i1;
      i1 = (OOC_INT32)dest;
      *(OOC_INT32*)((_check_pointer(i0, 7693))+4) = i1;
      i1 = (OOC_INT32)nextTargetUse;
      *(OOC_INT32*)((_check_pointer(i0, 7716))+8) = i1;
      *(OOC_UINT8*)((_check_pointer(i0, 7757))+12) = OOC_FALSE;
      return (OOC_SSA_Schedule__Jump)i0;
      ;
    }


  i0 = (OOC_INT32)*reference;
  _assert((i0==(OOC_INT32)0), 127, 7831);
  i0 = (OOC_INT32)dest;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7870))+36);
  *(OOC_INT32*)((_check_pointer(i0, 7870))+36) = (i1+1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7924))+32);
  i2 = (OOC_INT32)src;
  i0 = (OOC_INT32)OOC_SSA_Schedule__SetJump_NewJump((OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Jump)i1);
  *reference = (OOC_SSA_Schedule__Jump)i0;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 7950))+32) = i0;
  return;
  ;
}

OOC_CHAR8 OOC_SSA_Schedule__Dominates(OOC_SSA_Schedule__Block dominator, OOC_SSA_Schedule__Block child) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)child;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)dominator;
  i0 = i0!=i1;
  
l5:
  if (!i0) goto l16;
  i0 = (OOC_INT32)dominator;
l7_loop:
  i1 = (OOC_INT32)child;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8129))+4);
  child = (OOC_SSA_Schedule__Block)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = i1!=i0;
  
l12:
  if (i1) goto l7_loop;
l16:
  i0 = (OOC_INT32)child;
  return (i0!=(OOC_INT32)0);
  ;
}

void OOC_SSA_Schedule__ChangeJumpTarget(OOC_SSA_Schedule__Jump reference, OOC_SSA_Schedule__Block dest) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)reference;
  _assert((i0!=(OOC_INT32)0), 127, 8262);
  OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i0);
  i1 = (OOC_INT32)dest;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8338))+36);
  *(OOC_INT32*)((_check_pointer(i1, 8338))+36) = (i2+1);
  *(OOC_INT32*)((_check_pointer(i0, 8364))+4) = i1;
  i2 = _check_pointer(i0, 8393);
  i3 = *(OOC_UINT8*)((_check_pointer(i1, 8425))+28);
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8466));
  i3 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i3);
  
l4:
  *(OOC_UINT8*)(i2+12) = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8510))+32);
  *(OOC_INT32*)((_check_pointer(i0, 8487))+8) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 8540))+32) = i0;
  return;
  ;
}

static void OOC_SSA_Schedule__ChangeTargets(OOC_SSA_Schedule__Block oldTarget, OOC_SSA_Schedule__Block newTarget) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)newTarget;
  i1 = (OOC_INT32)oldTarget;
  _assert((i1!=i0), 127, 8736);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8789))+32);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8848))+32);
  OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i2, (OOC_SSA_Schedule__Block)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8789))+32);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

static void OOC_SSA_Schedule__InitBranchBlock(OOC_SSA_Schedule__BranchBlock b, OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd predicate, OOC_CHAR8 branchOnTrue) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)dominator;
  i1 = (OOC_INT32)b;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
  *(OOC_INT32*)((_check_pointer(i1, 9085))+48) = (OOC_INT32)0;
  i0 = (OOC_INT32)predicate;
  *(OOC_INT32*)((_check_pointer(i1, 9105))+52) = i0;
  i0 = branchOnTrue;
  *(OOC_UINT8*)((_check_pointer(i1, 9135))+56) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 9172))+60) = (OOC_INT32)0;
  return;
  ;
}

static OOC_SSA_Schedule__BranchBlock OOC_SSA_Schedule__NewBranchBlock(OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd predicate, OOC_CHAR8 branchOnTrue) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__BranchBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  i2 = (OOC_INT32)predicate;
  i3 = branchOnTrue;
  OOC_SSA_Schedule__InitBranchBlock((OOC_SSA_Schedule__BranchBlock)i0, (OOC_SSA_Schedule__Block)i1, (OOC_SSA__Opnd)i2, i3);
  return (OOC_SSA_Schedule__BranchBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__BranchBlockDesc_DefaultTarget(OOC_SSA_Schedule__BranchBlock b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9556))+60);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9566))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9573)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9597))+60);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9607))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9614)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 9614)), 9624))+48);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 9630))+12);
  
l5:
  if (i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9707))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9713))+4);
  return (OOC_SSA_Schedule__Block)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9666))+60);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9676))+4);
  return (OOC_SSA_Schedule__Block)i0;
l8:
  _failed_function(9514); return 0;
  ;
}

static void OOC_SSA_Schedule__InitJumpBlock(OOC_SSA_Schedule__JumpBlock b, OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)dominator;
  i1 = (OOC_INT32)b;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
  *(OOC_INT32*)((_check_pointer(i1, 9854))+48) = (OOC_INT32)0;
  return;
  ;
}

static OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__NewJumpBlock(OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__JumpBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  OOC_SSA_Schedule__InitJumpBlock((OOC_SSA_Schedule__JumpBlock)i0, (OOC_SSA_Schedule__Block)i1);
  return (OOC_SSA_Schedule__JumpBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__JumpBlockDesc_DefaultTarget(OOC_SSA_Schedule__JumpBlock b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10127))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10133))+4);
  return (OOC_SSA_Schedule__Block)i0;
  ;
}

static void OOC_SSA_Schedule__InitDeadEndBlock(OOC_SSA_Schedule__DeadEndBlock b, OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)dominator;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  return;
  ;
}

static OOC_SSA_Schedule__DeadEndBlock OOC_SSA_Schedule__NewDeadEndBlock(OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__DeadEndBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  OOC_SSA_Schedule__InitDeadEndBlock((OOC_SSA_Schedule__DeadEndBlock)i0, (OOC_SSA_Schedule__Block)i1);
  return (OOC_SSA_Schedule__DeadEndBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__DeadEndBlockDesc_DefaultTarget(OOC_SSA_Schedule__DeadEndBlock b) {

  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  ;
}

static void OOC_SSA_Schedule__InitSwitchBlock(OOC_SSA_Schedule__SwitchBlock b, OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd expr, OOC_INT32 paths) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dominator;
  i1 = (OOC_INT32)b;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 10757))+48) = i0;
  i0 = paths;
  *(OOC_INT32*)((_check_pointer(i1, 10783))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__5414.baseTypes[0], i0));
  *(OOC_INT32*)((_check_pointer(i1, 10809))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__5455.baseTypes[0], i0));
  *(OOC_INT32*)((_check_pointer(i1, 10840))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__5503.baseTypes[0], i0));
  i0 = i0-1;
  i2 = 0<=i0;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10898))+52);
  i3 = _check_pointer(i3, 10904);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10904))*4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10917))+56);
  i3 = _check_pointer(i3, 10928);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10928))*4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10941))+60);
  i3 = _check_pointer(i3, 10953);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10953))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

static OOC_SSA_Schedule__SwitchBlock OOC_SSA_Schedule__NewSwitchBlock(OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd expr, OOC_INT32 paths) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__SwitchBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  i2 = (OOC_INT32)expr;
  i3 = paths;
  OOC_SSA_Schedule__InitSwitchBlock((OOC_SSA_Schedule__SwitchBlock)i0, (OOC_SSA_Schedule__Block)i1, (OOC_SSA__Opnd)i2, i3);
  return (OOC_SSA_Schedule__SwitchBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__SwitchBlockDesc_DefaultTarget(OOC_SSA_Schedule__SwitchBlock b) {

  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  ;
}

static void OOC_SSA_Schedule__InitInstrProxy(OOC_SSA_Schedule__InstrProxy proxy, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)proxy;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)(_check_pointer(i0, 11453)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11482))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11511))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 11536))+12) = i1;
  return;
  ;
}

static OOC_SSA_Schedule__InstrProxy OOC_SSA_Schedule__NewInstrProxy(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__InstrProxy.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  OOC_SSA_Schedule__InitInstrProxy((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Schedule__InstrProxy)i0;
  ;
}

static void OOC_SSA_Schedule__AppendProxy(OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__InstrProxy proxy) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)proxy;
  i1 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 11831))+8) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11870))+12);
  *(OOC_INT32*)((_check_pointer(i0, 11854))+4) = i2;
  *(OOC_INT32*)(_check_pointer(i0, 11892)) = (OOC_INT32)0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11921))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11989))+12);
  *(OOC_INT32*)(_check_pointer(i2, 12000)) = i0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 11952))+8) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 12035))+12) = i0;
  return;
  ;
}

static OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions(OOC_SSA_Blocker__Region region, OOC_SSA_Schedule__JumpBlock block) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Blocker__Proxy bProxy;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA_Schedule__JumpBlock newBlock;
  auto OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferSelect(OOC_SSA_Blocker__Select select, OOC_SSA_Schedule__JumpBlock block);
  auto OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA_Schedule__JumpBlock block);
    
    OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferSelect(OOC_SSA_Blocker__Select select, OOC_SSA_Schedule__JumpBlock block) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
      OOC_INT32 paths;
      OOC_SSA_Schedule__SwitchBlock _switch;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      OOC_SSA_Schedule__JumpBlock path;
      OOC_SSA_Schedule__JumpBlock out;
      OOC_SSA_Schedule__BranchBlock branch;
      OOC_SSA_Schedule__JumpBlock path1;
      OOC_SSA_Schedule__JumpBlock path2;

      i0 = (OOC_INT32)select;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12856))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12856))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12863)))), OOC_SSA__InstrDesc_IsSwitchStatm)),OOC_SSA__InstrDesc_IsSwitchStatm)((OOC_SSA__Instr)i2);
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13859))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13897))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13904))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13914))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13924));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13897))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13904))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13914))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13866))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 13924));
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13929)))), OOC_SSA__ResultDesc_IsBooleanConst)),OOC_SSA__ResultDesc_IsBooleanConst)((OOC_SSA__Result)i3, OOC_TRUE);
      i3 = (OOC_INT32)block;
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewBranchBlock((OOC_SSA_Schedule__Block)i3, (OOC_SSA__Opnd)i1, i2);
      branch = (OOC_SSA_Schedule__BranchBlock)i1;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i3, 13977))+48), (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i1);
      i2 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      path1 = (OOC_SSA_Schedule__JumpBlock)i2;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i1, 14073))+60), (OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14146))+60);
      i3 = _check_pointer(i3, 14153);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 14153))*4);
      i2 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i3, (OOC_SSA_Schedule__JumpBlock)i2);
      path1 = (OOC_SSA_Schedule__JumpBlock)i2;
      i3 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      path2 = (OOC_SSA_Schedule__JumpBlock)i3;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i1, 14238))+48), (OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14307))+60);
      i0 = _check_pointer(i0, 14314);
      i4 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i4, OOC_UINT8, 14314))*4);
      i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i3);
      path2 = (OOC_SSA_Schedule__JumpBlock)i0;
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      out = (OOC_SSA_Schedule__JumpBlock)i1;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i2, 14396))+48), (OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i1);
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 14439))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
      return (OOC_SSA_Schedule__JumpBlock)i1;
      goto l20;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12963))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12963))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12970)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i2, 16);
      paths = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13049))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13056))+24);
      i3 = (OOC_INT32)block;
      i2 = (OOC_INT32)OOC_SSA_Schedule__NewSwitchBlock((OOC_SSA_Schedule__Block)i3, (OOC_SSA__Opnd)i2, i1);
      _switch = (OOC_SSA_Schedule__SwitchBlock)i2;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i3, 13098))+48), (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13145))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13152))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13162))+8);
      i1 = i1-1;
      opnd = (OOC_SSA__Opnd)i3;
      i4 = 0<=i1;
      i = 0;
      if (!i4) goto l11;
      i5=i3;i3=0;
l6_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13223))+60);
      i6 = _check_pointer(i6, 13235);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 13235))*4) = i5;
      i6 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i2);
      path = (OOC_SSA_Schedule__JumpBlock)i6;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13325))+52);
      i7 = _check_pointer(i7, 13331);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      OOC_SSA_Schedule__SetJump((void*)(i7+(_check_index(i3, i8, OOC_UINT32, 13331))*4), (OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i6);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13367))+56);
      i7 = _check_pointer(i7, 13378);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13413))+60);
      i9 = _check_pointer(i9, 13419);
      i10 = OOC_ARRAY_LENGTH(i9, 0);
      i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i3, i10, OOC_UINT32, 13419))*4);
      i6 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i9, (OOC_SSA_Schedule__JumpBlock)i6);
      *(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 13378))*4) = i6;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13453))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13463))+8);
      opnd = (OOC_SSA__Opnd)i5;
      i3 = i3+1;
      i6 = i3<=i1;
      i = i3;
      if (i6) goto l6_loop;
l11:
      i0 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i2);
      out = (OOC_SSA_Schedule__JumpBlock)i0;
      i = 0;
      if (!i4) goto l19;
      i3=0;
l14_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13593))+56);
      i4 = _check_pointer(i4, 13604);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13604))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13621))+56);
      i5 = _check_pointer(i5, 13632);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13632))*4);
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i4, 13607))+48), (OOC_SSA_Schedule__Block)i5, (OOC_SSA_Schedule__Block)i0);
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l14_loop;
l19:
      OOC_SSA_Schedule__RevertDomList((OOC_SSA_Schedule__Block)i2);
      return (OOC_SSA_Schedule__JumpBlock)i0;
l20:
      _failed_function(12610); return 0;
      ;
    }

    
    OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA_Schedule__JumpBlock block) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Schedule__JumpBlock body;
      OOC_SSA_Schedule__JumpBlock bodyEnd;
      OOC_SSA__Instr loopEnd;
      OOC_SSA_Schedule__JumpBlock out;
      OOC_SSA__Opnd opnd;
      OOC_SSA_Schedule__JumpBlock exit;

      i0 = (OOC_INT32)block;
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i0);
      body = (OOC_SSA_Schedule__JumpBlock)i1;
      *(OOC_UINT8*)((_check_pointer(i1, 14795))+28) = OOC_TRUE;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 14837))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)loop;
      i2 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i1);
      bodyEnd = (OOC_SSA_Schedule__JumpBlock)i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14933))+8);
      loopEnd = (OOC_SSA__Instr)i0;
      _assert((i0!=(OOC_INT32)0), 127, 14948);
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i2, 14994))+48), (OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      out = (OOC_SSA_Schedule__JumpBlock)i1;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15358)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 15405))+4);
      i2 = i2==11;
      
l5:
      if (!i2) goto l16;
l7_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15454));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15459))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15466))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15473)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 15473)), 15484))+8);
      i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15492)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 15492);
      exit = (OOC_SSA_Schedule__JumpBlock)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15534))+48);
      OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i2, (OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15568))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l10;
      i2=OOC_FALSE;
      goto l12;
l10:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 15405))+4);
      i2 = i2==11;
      
l12:
      if (i2) goto l7_loop;
l16:
      return (OOC_SSA_Schedule__JumpBlock)i1;
      ;
    }


  i0 = (OOC_INT32)region;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15662))+48);
  i1 = i0!=(OOC_INT32)0;
  bProxy = (OOC_SSA_Blocker__Proxy)i0;
  if (!i1) goto l22;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15735))+8);
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewInstrProxy((OOC_SSA__Instr)i1);
  proxy = (OOC_SSA_Schedule__InstrProxy)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15757))+8);
  *(OOC_INT32*)((_check_pointer(i2, 15764))+16) = i1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15805)))), &_td_OOC_SSA_Blocker__LoopDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15884)))), &_td_OOC_SSA_Blocker__SelectDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15967)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i1) goto l14;
  i1 = (OOC_INT32)block;
  i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i0;
  goto l14;
l11:
  i1 = (OOC_INT32)block;
  i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions_TransferSelect((OOC_SSA_Blocker__Select)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i0;
  goto l14;
l13:
  i1 = (OOC_INT32)block;
  i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions_TransferLoop((OOC_SSA_Blocker__Loop)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i0;
l14:
  i0 = (OOC_INT32)block;
  i1 = (OOC_INT32)proxy;
  OOC_SSA_Schedule__AppendProxy((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__InstrProxy)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16185))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16192))+36);
  i1 = i1==9;
  if (!i1) goto l17;
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i0);
  newBlock = (OOC_SSA_Schedule__JumpBlock)i1;
  OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 16405))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i1;
l17:
  i0 = (OOC_INT32)bProxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16498));
  bProxy = (OOC_SSA_Blocker__Proxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l22:
  i0 = (OOC_INT32)block;
  return (OOC_SSA_Schedule__JumpBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__Schedule(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Blocker__Region root;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA_Schedule__JumpBlock b;
  OOC_SSA_Schedule__JumpBlock lastBlock;
  OOC_INT32 count;
  auto void OOC_SSA_Schedule__Schedule_ArrangeBlock(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_Schedule__Schedule_MarkBackedges(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_Schedule__Schedule_RemoveUnreachable(OOC_SSA_Schedule__Block *b);
  auto void OOC_SSA_Schedule__Schedule_RemoveEmpty(OOC_SSA_Schedule__Block *b);
  auto void OOC_SSA_Schedule__Schedule_NumberBlocks(OOC_SSA_Schedule__Block b, OOC_INT32 *count);
  auto void OOC_SSA_Schedule__Schedule_Check(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_Schedule__Schedule_MoveSelectReturn(OOC_SSA_Blocker__Region root, OOC_SSA_Schedule__Block block);
    
    void OOC_SSA_Schedule__Schedule_ArrangeBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Schedule__Block nested;
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps(OOC_SSA_Schedule__Block path, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b);
      auto OOC_CHAR8 OOC_SSA_Schedule__Schedule_ArrangeBlock_In(OOC_SSA_Schedule__Block list, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_SortBlocks(OOC_SSA_Schedule__Block domBlock);
        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps(OOC_SSA_Schedule__Block path, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 i;
          OOC_SSA_Schedule__Block nested;
          auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump(OOC_SSA_Schedule__Block target);
            
            void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump(OOC_SSA_Schedule__Block target) {
              register OOC_INT32 i0,i1,i2;
              auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore(OOC_SSA_Schedule__Dependent *dependentList, OOC_SSA_Schedule__Block b);
                
                void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore(OOC_SSA_Schedule__Dependent *dependentList, OOC_SSA_Schedule__Block b) {
                  register OOC_INT32 i0,i1,i2;

                  i0 = (OOC_INT32)*dependentList;
                  i1 = i0==(OOC_INT32)0;
                  if (i1) goto l6;
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17863))+4);
                  i2 = (OOC_INT32)b;
                  i1 = i1!=i2;
                  if (!i1) goto l7;
                  OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore((void*)(_check_pointer(i0, 17921)), (OOC_SSA_Schedule__Block)i2);
                  goto l7;
l6:
                  i0 = (OOC_INT32)b;
                  i1 = (OOC_INT32)path;
                  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17654))+4);
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17669))+4);
                  _assert((i2==i1), 127, 17645);
                  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__Dependent.baseTypes[0]);
                  *dependentList = (OOC_SSA_Schedule__Dependent)i1;
                  *(OOC_INT32*)((_check_pointer(i1, 17742))+4) = i0;
                  i1 = (OOC_INT32)*dependentList;
                  *(OOC_INT32*)(_check_pointer(i1, 17783)) = (OOC_INT32)0;
                  i1 = *(OOC_INT32*)((_check_pointer(i0, 17818))+24);
                  *(OOC_INT32*)((_check_pointer(i0, 17818))+24) = (i1+1);
l7:
                  return;
                  ;
                }


              i0 = (OOC_INT32)path;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18026))+4);
              i2 = (OOC_INT32)target;
              i1 = i2!=i1;
              if (!i1) goto l25;
              i1 = i2!=(OOC_INT32)0;
              if (i1) goto l5;
              i1=OOC_FALSE;
              goto l7;
l5:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18083))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18098))+4);
              i1 = i1!=i2;
              
l7:
              if (!i1) goto l17;
l8_loop:
              i1 = (OOC_INT32)target;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18141))+4);
              target = (OOC_SSA_Schedule__Block)i1;
              i2 = i1!=(OOC_INT32)0;
              if (i2) goto l11;
              i1=OOC_FALSE;
              goto l13;
l11:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18083))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18098))+4);
              i1 = i1!=i2;
              
l13:
              if (i1) goto l8_loop;
l17:
              i1 = (OOC_INT32)target;
              i2 = i1!=(OOC_INT32)0;
              if (i2) goto l20;
              i2=OOC_FALSE;
              goto l22;
l20:
              i2 = i1!=i0;
              
l22:
              if (!i2) goto l25;
              OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore((void*)((_check_pointer(i0, 18251))+20), (OOC_SSA_Schedule__Block)i1);
l25:
              return;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18366)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (i1) goto l22;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18476)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
          if (i1) goto l20;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18541)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          if (i1) goto l23;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18600)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (i1) goto l9;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18597)))), 18597);
          goto l23;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18647))+52);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18653)), 0);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l23;
          i1=0;
l12_loop:
          i2 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18687))+52);
          i2 = _check_pointer(i2, 18693);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 18693))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18696))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i1);
          i1 = i;
          i1 = i1+1;
          i2 = i1<=i0;
          i = i1;
          if (i2) goto l12_loop;
          goto l23;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18515))+48);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18521))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i0);
          goto l23;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18407))+60);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18417))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18450))+48);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18456))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i0);
l23:
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18761))+16);
          i1 = i0!=(OOC_INT32)0;
          nested = (OOC_SSA_Schedule__Block)i0;
          if (!i1) goto l31;
          i1 = (OOC_INT32)path;
          
l26_loop:
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18868));
          nested = (OOC_SSA_Schedule__Block)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l26_loop;
l31:
          return;
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)*list;
          *(OOC_INT32*)(_check_pointer(i0, 18989)) = i1;
          *list = (OOC_SSA_Schedule__Block)i0;
          return;
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)*list;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList((void*)(_check_pointer(i0, 19235)), (OOC_SSA_Schedule__Block)i1);
          goto l4;
l3:
          i0 = (OOC_INT32)b;
          *(OOC_INT32*)(_check_pointer(i0, 19156)) = (OOC_INT32)0;
          *list = (OOC_SSA_Schedule__Block)i0;
l4:
          return;
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)*list;
          i1 = (OOC_INT32)b;
          i2 = i0==i1;
          if (i2) goto l3;
          OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList((void*)(_check_pointer(i0, 19459)), (OOC_SSA_Schedule__Block)i1);
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19406));
          *list = (OOC_SSA_Schedule__Block)i0;
l4:
          return;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Schedule__Schedule_ArrangeBlock_In(OOC_SSA_Schedule__Block list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Schedule__Block ptr;

          i0 = (OOC_INT32)list;
          ptr = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = (OOC_INT32)b;
          i1 = i0!=i1;
          
l5:
          if (!i1) goto l17;
          i1 = (OOC_INT32)b;
          
l8_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19688));
          ptr = (OOC_SSA_Schedule__Block)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l11;
          i2=OOC_FALSE;
          goto l13;
l11:
          i2 = i0!=i1;
          
l13:
          if (i2) goto l8_loop;
l17:
          return (i0!=(OOC_INT32)0);
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_SortBlocks(OOC_SSA_Schedule__Block domBlock) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA_Schedule__Block ready;
          OOC_SSA_Schedule__Block waiting;
          OOC_SSA_Schedule__Block nested;
          OOC_SSA_Schedule__Block next;
          OOC_SSA_Schedule__Block preferedBlock;
          OOC_SSA_Schedule__Block b;
          OOC_SSA_Schedule__Dependent dep;

          ready = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
          waiting = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
          i0 = (OOC_INT32)domBlock;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20110))+16);
          nested = (OOC_SSA_Schedule__Block)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l12;
l3_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20177));
          next = (OOC_SSA_Schedule__Block)i2;
          i3 = *(OOC_INT32*)((_check_pointer(i1, 20208))+24);
          i3 = i3==0;
          if (i3) goto l6;
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList((void*)(OOC_INT32)&waiting, (OOC_SSA_Schedule__Block)i1);
          goto l7;
l6:
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList((void*)(OOC_INT32)&ready, (OOC_SSA_Schedule__Block)i1);
l7:
          nested = (OOC_SSA_Schedule__Block)i2;
          i1 = i2!=(OOC_INT32)0;
          if (!i1) goto l12;
          i1=i2;
          goto l3_loop;
l12:
          *(OOC_INT32*)((_check_pointer(i0, 20400))+16) = (OOC_INT32)0;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20451)))), OOC_SSA_Schedule__BlockDesc_DefaultTarget)),OOC_SSA_Schedule__BlockDesc_DefaultTarget)((OOC_SSA_Schedule__Block)i0);
          i2 = (OOC_INT32)ready;
          i2 = i2!=(OOC_INT32)0;
          preferedBlock = (OOC_SSA_Schedule__Block)i1;
          if (!i2) goto l39;
l15_loop:
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l18;
          i2=OOC_FALSE;
          goto l20;
l18:
          i2 = (OOC_INT32)ready;
          i2 = OOC_SSA_Schedule__Schedule_ArrangeBlock_In((OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i1);
          
l20:
          if (i2) goto l22;
          i1 = (OOC_INT32)ready;
          b = (OOC_SSA_Schedule__Block)i1;
          
          goto l23;
l22:
          b = (OOC_SSA_Schedule__Block)i1;
          
l23:
          OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList((void*)(OOC_INT32)&ready, (OOC_SSA_Schedule__Block)i1);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20720))+4);
          _assert((i2==i0), 127, 20711);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList((void*)((_check_pointer(i0, 20774))+16), (OOC_SSA_Schedule__Block)i1);
          *(OOC_INT32*)((_check_pointer(i1, 20800))+24) = -1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20847))+20);
          dep = (OOC_SSA_Schedule__Dependent)i2;
          i3 = i2!=(OOC_INT32)0;
          if (!i3) goto l34;
l26_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20915))+4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20915))+4);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 20922))+24);
          *(OOC_INT32*)((_check_pointer(i3, 20922))+24) = (i4-1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20954))+4);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 20961))+24);
          i3 = i3==0;
          if (!i3) goto l29;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21024))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList((void*)(OOC_INT32)&waiting, (OOC_SSA_Schedule__Block)i3);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21069))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList((void*)(OOC_INT32)&ready, (OOC_SSA_Schedule__Block)i3);
l29:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21117));
          dep = (OOC_SSA_Schedule__Dependent)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l26_loop;
l34:
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21167)))), OOC_SSA_Schedule__BlockDesc_DefaultTarget)),OOC_SSA_Schedule__BlockDesc_DefaultTarget)((OOC_SSA_Schedule__Block)i1);
          i2 = (OOC_INT32)ready;
          i2 = i2!=(OOC_INT32)0;
          preferedBlock = (OOC_SSA_Schedule__Block)i1;
          if (i2) goto l15_loop;
l39:
          i0 = (OOC_INT32)waiting;
          _assert((i0==(OOC_INT32)0), 127, 21207);
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21334))+16);
      i2 = i1!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i1;
      if (!i2) goto l8;
l3_loop:
      OOC_SSA_Schedule__Schedule_ArrangeBlock((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21430));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l8:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21576)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc));
      if (!i1) goto l27;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21616))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l18;
l13_loop:
      *(OOC_INT32*)((_check_pointer(i1, 21675))+20) = (OOC_INT32)0;
      *(OOC_INT32*)((_check_pointer(i1, 21715))+24) = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21758));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l13_loop;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21809))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l26;
l21_loop:
      OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)nested;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21918));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l21_loop;
l26:
      i0 = (OOC_INT32)b;
      OOC_SSA_Schedule__Schedule_ArrangeBlock_SortBlocks((OOC_SSA_Schedule__Block)i0);
l27:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_MarkBackedges(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;
      OOC_SSA_Schedule__Block nested;
      auto void OOC_SSA_Schedule__Schedule_MarkBackedges_Check(OOC_SSA_Schedule__Jump jump);
        
        void OOC_SSA_Schedule__Schedule_MarkBackedges_Check(OOC_SSA_Schedule__Jump jump) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)jump;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22187))+4);
          i2 = (OOC_INT32)b;
          i1 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i2);
          *(OOC_UINT8*)((_check_pointer(i0, 22152))+12) = i1;
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22243)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22291)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22370)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22425)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l9;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22422)))), 22422);
      goto l23;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22470))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22476)), 0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l23;
      i1=0;
l12_loop:
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22502))+52);
      i2 = _check_pointer(i2, 22508);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 22508))*4);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i1);
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l12_loop;
      goto l23;
l20:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22324))+60);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i0);
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22353))+48);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i0);
      goto l23;
l22:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22274))+48);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i0);
l23:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22556))+16);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i0;
      if (!i1) goto l31;
l26_loop:
      OOC_SSA_Schedule__Schedule_MarkBackedges((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22653));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l26_loop;
l31:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_RemoveUnreachable(OOC_SSA_Schedule__Block *b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 d;
      OOC_SSA_Schedule__Jump j;
      OOC_INT32 i;
      auto OOC_CHAR8 OOC_SSA_Schedule__Schedule_RemoveUnreachable_ContainsEndOfBlock(OOC_SSA_Schedule__Block b);
        
        OOC_CHAR8 OOC_SSA_Schedule__Schedule_RemoveUnreachable_ContainsEndOfBlock(OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1;
          OOC_SSA_Schedule__InstrProxy proxy;

          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23108))+8);
          i1 = i0!=(OOC_INT32)0;
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          if (!i1) goto l12;
l3_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23172))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 23179))+36);
          switch (i1) {
          case 8:
          case 11:
            return OOC_TRUE;
            goto l7;
          default:
            goto l7;
          }
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23319));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l12:
          return OOC_FALSE;
          ;
        }


      i0 = (OOC_INT32)*b;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l56;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 23450))+36);
      d = i1;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 23474))+28);
      if (!i2) goto l19;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23578))+32);
      j = (OOC_SSA_Schedule__Jump)i2;
      i3 = i2!=(OOC_INT32)0;
      if (!i3) goto l19;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l9_loop:
      i3 = *(OOC_UINT8*)((_check_pointer(i1, 23640))+12);
      if (!i3) goto l13;
      i2 = i2-1;
      d = i2;
      
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23720))+8);
      j = (OOC_SSA_Schedule__Jump)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l9_loop;
l17:
      i1=i2;
l19:
      i1 = i1==0;
      if (i1) goto l22;
      i0=OOC_FALSE;
      goto l24;
l22:
      i0 = OOC_SSA_Schedule__Schedule_RemoveUnreachable_ContainsEndOfBlock((OOC_SSA_Schedule__Block)i0);
      
l24:
      if (!i0) goto l26;
      i0 = d;
      d = (i0+1);
l26:
      i0 = d;
      i0 = i0==0;
      i1 = (OOC_INT32)*b;
      if (!i0) goto l52;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24077))+32);
      _assert((i2==(OOC_INT32)0), 127, 24068);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24204)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i2) goto l50;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24265)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i2) goto l48;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24365)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i2) goto l38;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24524)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i2) goto l52;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24521)))), 24521);
      goto l52;
l38:
      _assert(OOC_FALSE, 127, 24394);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24442))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 24448)), 0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l52;
      i3=0;
l41_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24482))+52);
      i4 = _check_pointer(i4, 24488);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 24488))*4);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i4);
      i3 = i3+1;
      i4 = i3<=i2;
      i = i3;
      if (i4) goto l41_loop;
      goto l52;
l48:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24306))+48);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i2);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24339))+60);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i2);
      goto l52;
l50:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24243))+48);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i2);
l52:
      OOC_SSA_Schedule__Schedule_RemoveUnreachable((void*)((_check_pointer(i1, 24633))+16));
      OOC_SSA_Schedule__Schedule_RemoveUnreachable((void*)(_check_pointer(i1, 24673)));
      if (!i0) goto l56;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24737))+16);
      _assert((i0==(OOC_INT32)0), 127, 24728);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 24771));
      *b = (OOC_SSA_Schedule__Block)i0;
l56:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_RemoveEmpty(OOC_SSA_Schedule__Block *b) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*b;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      OOC_SSA_Schedule__Schedule_RemoveEmpty((void*)((_check_pointer(i0, 24932))+16));
      OOC_SSA_Schedule__Schedule_RemoveEmpty((void*)(_check_pointer(i0, 24966)));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25001)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25030))+8);
      i1 = i1==(OOC_INT32)0;
      
l7:
      if (i1) goto l9;
      i1=OOC_FALSE;
      goto l11;
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25065))+4);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25074)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc));
      
l11:
      if (i1) goto l13;
      i1=OOC_FALSE;
      goto l15;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25106)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25106)), 25116))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25122))+4);
      i1 = i1!=i0;
      
l15:
      if (!i1) goto l22;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25169)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25169)), 25179))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25185))+4);
      OOC_SSA_Schedule__ChangeTargets((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25213))+32);
      _assert((i1==(OOC_INT32)0), 127, 25204);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25260)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25260)), 25270))+48);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i1);
      *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25291)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25291)), 25301))+48) = (OOC_INT32)0;
      i0 = (OOC_INT32)*b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25342))+16);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l19;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25566));
      *b = (OOC_SSA_Schedule__Block)i0;
      goto l22;
l19:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25385))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25394));
      _assert((i1==(OOC_INT32)0), 127, 25376);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25425))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25448));
      *(OOC_INT32*)(_check_pointer(i1, 25434)) = i0;
      i0 = (OOC_INT32)*b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25472))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25494))+4);
      *(OOC_INT32*)((_check_pointer(i1, 25481))+4) = i0;
      i0 = (OOC_INT32)*b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25522))+16);
      *b = (OOC_SSA_Schedule__Block)i0;
l22:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_NumberBlocks(OOC_SSA_Schedule__Block b, OOC_INT32 *count) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__Block nested;

      i0 = (OOC_INT32)b;
      i1 = *count;
      *(OOC_INT32*)((_check_pointer(i0, 25743))+40) = i1;
      *count = (i1+1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25801))+16);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i0;
      if (!i1) goto l8;
l3_loop:
      OOC_SSA_Schedule__Schedule_NumberBlocks((OOC_SSA_Schedule__Block)i0, (void*)(OOC_INT32)count);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25904));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_Check(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA_Schedule__InstrProxy select;
      OOC_SSA_Schedule__Block nested;
      OOC_INT32 i;

      i0 = (OOC_INT32)b;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27091)))), &_td_OOC_SSA_Schedule__JumpBlockDesc));
      if (!i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27128))+8);
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l11;
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27195))+12);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 27202))+36);
      _assert((i2!=6), 127, 27182);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27254));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l11:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 27517))+36);
      i1 = i1>1;
      if (!i1) goto l26;
      select = (OOC_SSA_Schedule__InstrProxy)(OOC_INT32)0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27579))+8);
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l26;
      i2=(OOC_INT32)0;
l16_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27643))+12);
      i3 = *(OOC_INT8*)((_check_pointer(i3, 27650))+36);
      switch (i3) {
      case 5:
      case 10:
      case 11:
        _assert((i2==(OOC_INT32)0), 127, 27735);
        select = (OOC_SSA_Schedule__InstrProxy)i1;
        i2=i1;
        goto l20;
      default:
        
        goto l20;
      }
l20:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27841));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l16_loop;
l26:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27890)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28606)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30273)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30353))+16);
      _assert((i1==(OOC_INT32)0), 127, 30344);
      goto l66;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28633))+48);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 28639))+12);
      if (i1) goto l50;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28910))+16);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l66;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 28946))+28);
      if (i1) goto l44;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30093))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30102));
      _assert((i1==(OOC_INT32)0), 127, 30084);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30137))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 30146))+36);
      i1 = i1!=0;
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30190))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30196))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30206))+16);
      _assert((i1==i2), 127, 30181);
      goto l66;
l44:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29659))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29668));
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29713))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29722));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29731));
      _assert((i1==(OOC_INT32)0), 127, 29704);
      goto l66;
l50:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 28822))+28);
      i1 = !i1;
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28861))+16);
      _assert((i1==(OOC_INT32)0), 127, 28852);
      goto l66;
l56:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28376))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28415))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 28421)), 0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l65;
      i3=i1;i1=0;
l60_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28448))+52);
      i4 = _check_pointer(i4, 28454);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 28454))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 28457))+4);
      _assert((i4==i3), 127, 28439);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 28501));
      nested = (OOC_SSA_Schedule__Block)i3;
      i1 = i1+1;
      i4 = i1<=i2;
      i = i1;
      if (i4) goto l60_loop;
l64:
      i1=i3;
l65:
      _assert((i1!=(OOC_INT32)0), 127, 28533);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28578));
      _assert((i1==(OOC_INT32)0), 127, 28564);
l66:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30417))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l74;
l69_loop:
      OOC_SSA_Schedule__Schedule_Check((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30506));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l69_loop;
l74:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_MoveSelectReturn(OOC_SSA_Blocker__Region root, OOC_SSA_Schedule__Block block) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__InstrProxy proxy;

      i0 = (OOC_INT32)root;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30687))+8);
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewInstrProxy((OOC_SSA__Instr)i1);
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30707))+8);
      *(OOC_INT32*)((_check_pointer(i0, 30714))+16) = i1;
      i0 = (OOC_INT32)block;
      OOC_SSA_Schedule__AppendProxy((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__InstrProxy)i1);
      return;
      ;
    }


  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i0, OOC_TRUE);
  root = (OOC_SSA_Blocker__Region)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30939))+8);
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewInstrProxy((OOC_SSA__Instr)i1);
  proxy = (OOC_SSA_Schedule__InstrProxy)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30957))+8);
  *(OOC_INT32*)((_check_pointer(i2, 30964))+16) = i1;
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)(OOC_INT32)0);
  b = (OOC_SSA_Schedule__JumpBlock)i1;
  i1 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  lastBlock = (OOC_SSA_Schedule__JumpBlock)i1;
  OOC_SSA_Schedule__Schedule_MoveSelectReturn((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)lastBlock;
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewDeadEndBlock((OOC_SSA_Schedule__Block)i0);
  OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 31121))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_MarkBackedges((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_RemoveUnreachable((void*)((_check_pointer(i0, 31326))+16));
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_RemoveEmpty((void*)((_check_pointer(i0, 31356))+16));
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_Check((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_ArrangeBlock((OOC_SSA_Schedule__Block)i0);
  count = 0;
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_NumberBlocks((OOC_SSA_Schedule__Block)i0, (void*)(OOC_INT32)&count);
  i0 = (OOC_INT32)pb;
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 32083))+36) = 1;
  return (OOC_SSA_Schedule__Block)i0;
  ;
}

void OOC_OOC_SSA_Schedule_init(void) {

  return;
  ;
}

/* --- */
