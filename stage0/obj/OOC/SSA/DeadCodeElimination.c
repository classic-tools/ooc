#include "OOC/SSA/DeadCodeElimination.d"
#include "__oo2c.h"

static void OOC_SSA_DeadCodeElimination__MarkLive(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1119))+20);
  i1 = i1==0;
  if (!i1) goto l14;
  *(OOC_INT32*)((_check_pointer(i0, 1152))+20) = 1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1189))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l14;
l5_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 1245))+4);
  i1 = i1!=11;
  if (!i1) goto l8;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1427));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1432))+8);
  OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Instr)i1);
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1475))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l5_loop;
l14:
  return;
  ;
}

static void OOC_SSA_DeadCodeElimination__DeleteDeadCode(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1654))+8);
  i2 = i1!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i1;
  if (!i2) goto l23;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1713))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 1740))+20);
  i3 = i3==0;
  if (!i3) goto l18;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 1780))+36);
  switch (i3) {
  case 9:
  case 7:
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1962));
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 1974))+12);
    use = (OOC_SSA__Opnd)i3;
    i4 = i3!=(OOC_INT32)0;
    if (!i4) goto l17;
l10_loop:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2042))+16);
    nextUse = (OOC_SSA__Opnd)i4;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2068)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i3);
    use = (OOC_SSA__Opnd)i4;
    i3 = i4!=(OOC_INT32)0;
    if (!i3) goto l17;
    i3=i4;
    goto l10_loop;
  default:
    goto l17;
  }
l17:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2170)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l18:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l23;
  i1=i2;
  goto l3_loop;
l23:
  return;
  ;
}

void OOC_SSA_DeadCodeElimination__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2360)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2481));
  OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Instr)i1);
  OOC_SSA_DeadCodeElimination__DeleteDeadCode((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_OOC_SSA_DeadCodeElimination_init(void) {

  return;
  ;
}

/* --- */
