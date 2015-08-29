#include <OOC/SSA.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SSA__InitNode(OOC_SSA__Node n) {

  return;
  ;
}

static void OOC_SSA__SetUse(OOC_SSA__Result arg, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)arg;
  *(OOC_INT32*)(_check_pointer(i0, 8462)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8500))+12);
  *(OOC_INT32*)((_check_pointer(i0, 8484))+16) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 8518))+12) = i0;
  return;
  ;
}

static void OOC_SSA__DeleteUse(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8687));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8692))+12);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8784));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8789))+12);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8817))+16);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8858))+16);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8817))+16);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8906))+16);
  *(OOC_INT32*)((_check_pointer(i1, 8889))+16) = i2;
  goto l13;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8725));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8747))+16);
  *(OOC_INT32*)((_check_pointer(i1, 8730))+12) = i2;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 8933))+16) = 0;
  *(OOC_INT32*)(_check_pointer(i0, 8959)) = 0;
  return;
  ;
}

static void OOC_SSA__InitOpnd(OOC_SSA__Opnd opnd, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)opnd;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  i1 = (OOC_INT32)arg;
  *(OOC_INT32*)(_check_pointer(i0, 9162)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 9184))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9210))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 9237))+12) = 0;
  i2 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 9261))+4) = i2;
  OOC_SSA__SetUse((OOC_SSA__Result)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

static OOC_SSA__Opnd OOC_SSA__NewOpnd(OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Opnd.baseTypes[0]);
  i1 = (OOC_INT32)arg;
  i2 = _class;
  OOC_SSA__InitOpnd((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1, i2);
  return (OOC_SSA__Opnd)i0;
  ;
}

static void OOC_SSA__InitTypedOpnd(OOC_SSA__TypedOpnd opnd, OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)arg;
  i2 = _class;
  OOC_SSA__InitOpnd((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1, i2);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 9806))+20) = i1;
  i1 = passByReference;
  *(OOC_UINT8*)((_check_pointer(i0, 9830))+24) = i1;
  return;
  ;
}

static OOC_SSA__Opnd OOC_SSA__NewTypedOpnd(OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__TypedOpnd.baseTypes[0]);
  i1 = (OOC_INT32)arg;
  i2 = _class;
  i3 = (OOC_INT32)type;
  i4 = passByReference;
  OOC_SSA__InitTypedOpnd((OOC_SSA__TypedOpnd)i0, (OOC_SSA__Result)i1, i2, (OOC_SymbolTable__Type)i3, i4);
  return (OOC_SSA__Opnd)i0;
  ;
}

void OOC_SSA__OpndDesc_DeleteOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)opnd;
  OOC_SSA__DeleteUse((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10377))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10384))+24);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10481))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10488))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10517))+8);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10559))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10517))+8);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10609))+8);
  *(OOC_INT32*)((_check_pointer(i1, 10591))+8) = i2;
  goto l13;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10418))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10443))+8);
  *(OOC_INT32*)((_check_pointer(i1, 10425))+24) = i2;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 10637))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 10664))+12) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SSA__OpndDesc_ReplaceArg(OOC_SSA__Opnd opnd, OOC_SSA__Result arg) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)opnd;
  OOC_SSA__DeleteUse((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT32)arg;
  OOC_SSA__SetUse((OOC_SSA__Result)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

OOC_INT32 OOC_SSA__OpndDesc_OpndIndex(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_SSA__Opnd ptr;

  i = 0;
  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11540))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11547))+24);
  ptr = (OOC_SSA__Opnd)i1;
  i2 = i1!=i0;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11616))+8);
  ptr = (OOC_SSA__Opnd)i2;
  i3 = i2!=i0;
  if (i3) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

OOC_INT32 OOC_SSA__OpndDesc_GetIntConst(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)opnd;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11813));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11819)))), &_td_OOC_SSA__ConstDesc, 11819)), 11825))+44);
  i0 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11840)))), &_td_Object_BigInt__BigIntDesc, 11840)));
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsScheduleOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)opnd;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 11954))+4);
  switch (i0) {
  case 17:
  case 18:
  case 20:
    return 1u;
    goto l4;
  default:
    return 0u;
    goto l4;
  }
l4:
  _failed_function(11905); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsValueOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)opnd;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 12485))+4);
  switch (i0) {
  case 18:
  case 20:
  case 5:
  case 7:
    return 0u;
    goto l4;
  default:
    return 1u;
    goto l4;
  }
l4:
  _failed_function(12167); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsValueOpndHere(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)opnd;
  i1 = OOC_SSA__OpndDesc_IsValueOpnd((OOC_SSA__Opnd)i0);
  if (i1) goto l3;
  return 0u;
  goto l8;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13456))+12);
  instr = (OOC_SSA__Instr)i1;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 13773))+36);
  i2 = i2!=5;
  if (i2) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13808))+24);
  i0 = i1!=i0;
  
  goto l7;
l6:
  i0=1u;
l7:
  return i0;
l8:
  _failed_function(12719); return 0;
  ;
}

static void OOC_SSA__InitResult(OOC_SSA__Result res, OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)res;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)(_check_pointer(i0, 14159)) = 0;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 14187))+8) = i1;
  i1 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 14212))+4) = i1;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 14237))+5) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 14268))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 14290))+20) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 14321))+12) = 0;
  return;
  ;
}

OOC_SSA__Result OOC_SSA__NewResult(OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Result.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  i2 = _class;
  i3 = subclass;
  OOC_SSA__InitResult((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1, i2, i3);
  return (OOC_SSA__Result)i0;
  ;
}

void OOC_SSA__ResultDesc_DeleteResult(OOC_SSA__Result res) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result prev;

  i0 = (OOC_INT32)res;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15166))+8);
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15190));
  i2 = i2!=i0;
  if (!i2) goto l9;
l4_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15231));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15190));
  i2 = i2!=i0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15280));
  *(OOC_INT32*)(_check_pointer(i1, 15261)) = i0;
  return;
  ;
}

void OOC_SSA__ResultDesc_ReplaceUses(OOC_SSA__Result res, OOC_SSA__Result with) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;

  i0 = (OOC_INT32)res;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15480))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l8;
  i1 = (OOC_INT32)with;
  
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15536))+16);
  nextUse = (OOC_SSA__Opnd)i2;
  OOC_SSA__DeleteUse((OOC_SSA__Opnd)i0);
  OOC_SSA__SetUse((OOC_SSA__Result)i1, (OOC_SSA__Opnd)i0);
  use = (OOC_SSA__Opnd)i2;
  i0 = i2!=(OOC_INT32)0;
  if (!i0) goto l8;
  i0=i2;
  goto l3_loop;
l8:
  return;
  ;
}

OOC_INT32 OOC_SSA__ResultDesc_ResultIndex(OOC_SSA__Result result) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_SSA__Result ptr;

  i = 0;
  i0 = (OOC_INT32)result;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16054))+8);
  ptr = (OOC_SSA__Result)i1;
  i2 = i1!=i0;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16122));
  ptr = (OOC_SSA__Result)i2;
  i3 = i2!=i0;
  if (i3) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SSA__ResultDesc_CalledProc(OOC_SSA__Result calledAdr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)calledAdr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16424))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16430))+36);
  i1 = i1==3;
  if (i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16539))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16545))+36);
  i1 = i1==1;
  if (i1) goto l5;
  return (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16598))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16605)))), &_td_OOC_SSA__DeclRefDesc, 16605)), 16613))+44);
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16623)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16623));
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16483))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16490)))), &_td_OOC_SSA__AddressDesc, 16490)), 16498))+44);
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16508)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16508));
l8:
  _failed_function(16213); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__ResultDesc_IsBooleanConst(OOC_SSA__Result result, OOC_CHAR8 value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)result;
  _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17042)))), &_td_OOC_SSA__ConstDesc)), 127, 17027);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17072)))), &_td_OOC_SSA__ConstDesc, 17072)), 17078))+44);
  _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17085)))), &_td_Object_BigInt__BigIntDesc)), 127, 17057);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17123)))), &_td_OOC_SSA__ConstDesc, 17123)), 17129))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17123)))), &_td_OOC_SSA__ConstDesc, 17123)), 17129))+44);
  i2 = (OOC_INT32)Object_BigInt__zero;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17135)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i0, (Object__Object)i2);
  i1 = value;
  return (i0!=i1);
  ;
}

void OOC_SSA__ResultDesc_LogId(OOC_SSA__Result result, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_INT32 i;

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17288)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17323)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = (OOC_INT32)result;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17476))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17437)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i0, (_type_cast_fast(OOC_INT32, OOC_INT32, i2)), 8);
  i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i1);
  i = i0;
  i1 = i0!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17566)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, 46u);
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17601)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
l4:
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17644)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

static void OOC_SSA__InitInstr(OOC_SSA__Instr instr, OOC_INT8 opcode, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = subclass;
  OOC_SSA__InitResult((OOC_SSA__Result)i0, (OOC_SSA__Instr)i0, (-1), i1);
  *(OOC_INT32*)((_check_pointer(i0, 17913))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 17941))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 17970))+32) = (OOC_INT32)0;
  i2 = opcode;
  *(OOC_INT8*)((_check_pointer(i0, 17999))+36) = i2;
  *(OOC_INT8*)((_check_pointer(i0, 18028))+5) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 18061))+40) = (-1);
  return;
  ;
}

void OOC_SSA__InstrDesc_SetSubclass(OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 18246))+5) = i1;
  return;
  ;
}

void OOC_SSA__InstrDesc_SetPos(OOC_SSA__Instr instr, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 18370))+16);
  *(OOC_INT32*)((_check_pointer(i0, 18358))+40) = i1;
  return;
  ;
}

static void OOC_SSA__AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 18672))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18703))+24);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18784))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18813))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18854))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18813))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)((_check_pointer(i1, 18886))+8) = i0;
  goto l13;
l12:
  *(OOC_INT32*)((_check_pointer(i1, 18737))+24) = i0;
l13:
  return;
  ;
}

void OOC_SSA__InstrDesc_AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)arg;
  i1 = _class;
  i0 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i0, i1);
  i1 = (OOC_INT32)instr;
  OOC_SSA__AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_AddOpndFct(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)arg;
  i1 = _class;
  i0 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i0, i1);
  i1 = (OOC_INT32)instr;
  OOC_SSA__AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Opnd)i0);
  return (OOC_SSA__Opnd)i0;
  ;
}

void OOC_SSA__InstrDesc_AddUniqueOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19855))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20001))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20030));
  i3 = (OOC_INT32)arg;
  i2 = i2!=i3;
  if (i2) goto l5;
  i2=0u;
  goto l7;
l5:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20050))+8);
  i2 = i2!=(OOC_INT32)0;
  
l7:
  if (!i2) goto l19;
l10_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20091))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20030));
  i2 = i2!=i3;
  if (i2) goto l13;
  i2=0u;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20050))+8);
  i2 = i2!=(OOC_INT32)0;
  
l15:
  if (i2) goto l10_loop;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20127));
  i2 = i2!=i3;
  if (!i2) goto l24;
  i2 = _class;
  i2 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i3, i2);
  opnd = (OOC_SSA__Opnd)i2;
  *(OOC_INT32*)((_check_pointer(i2, 20195))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 20225))+8) = i2;
  goto l24;
l23:
  i1 = _class;
  i2 = (OOC_INT32)arg;
  i1 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i2, i1);
  opnd = (OOC_SSA__Opnd)i1;
  *(OOC_INT32*)((_check_pointer(i1, 19924))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i0, 19953))+24) = i1;
l24:
  return;
  ;
}

void OOC_SSA__InstrDesc_AddTypedOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)arg;
  i1 = _class;
  i2 = (OOC_INT32)type;
  i3 = passByReference;
  i0 = (OOC_INT32)OOC_SSA__NewTypedOpnd((OOC_SSA__Result)i0, i1, (OOC_SymbolTable__Type)i2, i3);
  i1 = (OOC_INT32)instr;
  OOC_SSA__AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_AddResultSubclass(OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result res;
  OOC_SSA__Result prev;

  i0 = (OOC_INT32)instr;
  i1 = _class;
  i2 = subclass;
  i1 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)i0, i1, i2);
  res = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21077));
  i2 = i2==0;
  if (i2) goto l12;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21161));
  prev = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21192));
  i2 = i2!=0;
  if (!i2) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21235));
  prev = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21192));
  i2 = i2!=0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i0, 21269)) = i1;
  goto l13;
l12:
  *(OOC_INT32*)(_check_pointer(i0, 21113)) = i1;
l13:
  return (OOC_SSA__Result)i1;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_AddResult(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = _class;
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_AddResultSubclass((OOC_SSA__Instr)i0, i1, 0);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_SizeOpndList(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 num;
  OOC_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21830))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  num = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21903))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_CountOpndClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 num;
  OOC_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22206))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0;
  goto l13;
l3:
  i1 = _class;
  i2=0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 22258))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i2 = i2+1;
  num = i2;
  
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22328))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l4_loop;
l12:
  i0=i2;
l13:
  return i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_SizeResultList(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 num;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)instr;
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  num = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22739));
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_NthOpnd(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23053))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23106))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_NthArg(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23443))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23496))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23548));
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_LastOpnd(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23781))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23835))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
l7_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23876))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23835))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l7_loop;
l13:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_GetOpndClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24213))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24255))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24293))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 24255))+4);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetArgClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24638))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24680))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24718))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 24680))+4);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24807));
  return (OOC_SSA__Result)i0;
  goto l21;
l20:
  return (OOC_SSA__Result)(OOC_INT32)0;
l21:
  _failed_function(24376); return 0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetArgStore(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 2);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_NthResult(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)instr;
  res = (OOC_SSA__Result)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
  
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25384));
  res = (OOC_SSA__Result)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetResultClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result result;

  i0 = (OOC_INT32)instr;
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25784))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25826));
  result = (OOC_SSA__Result)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 25784))+4);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetResultStore(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Result result;

  i0 = (OOC_INT32)instr;
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26078))+4);
  i1 = i1!=2;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26132));
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26078))+4);
  i1 = i1!=2;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SSA__Result)i0;
  ;
}

void OOC_SSA__InstrDesc_GetOpcodeName(OOC_SSA__Instr instr, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26475))+36);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 26490))+5);
  OOC_SSA_Opcode__GetName(i1, i0, (void*)(OOC_INT32)name, name_0d);
  return;
  ;
}

OOC_INT8 OOC_SSA__InstrDesc_GetResultType(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26614))+36);
  switch (i1) {
  case 13:
    return 0;
    goto l4;
  default:
    i0 = *(OOC_INT8*)((_check_pointer(i0, 26863))+5);
    return i0;
    goto l4;
  }
l4:
  _failed_function(26556); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopEnd(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd use;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27143))+36);
  switch (i1) {
  case 10:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27197))+12);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  case 9:
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
    res = (OOC_SSA__Result)i0;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27281))+12);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  default:
    _failed_case(i1, 27133);
    goto l5;
  }
l5:
  i0 = (OOC_INT32)use;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l8;
  i0=0u;
  goto l10;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27329))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 27336))+36);
  i0 = i0!=11;
  
l10:
  if (!i0) goto l21;
l12_loop:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27382))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i0=0u;
  goto l17;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27329))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 27336))+36);
  i0 = i0!=11;
  
l17:
  if (i0) goto l12_loop;
l21:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27416))+12);
  return (OOC_SSA__Instr)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetBackwardFeed(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27698))+36);
  i1 = i1==10;
  if (!i1) goto l4;
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
  instr = (OOC_SSA__Instr)i0;
  
l4:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27794))+36);
  _assert((i1==11), 127, 27781);
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 13);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopStart(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28085))+36);
  _assert((i1==11), 127, 28072);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28129))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28139));
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28145)))), &_td_OOC_SSA__InstrDesc, 28145));
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollectTarget(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Result storeOut;
  OOC_SSA__Opnd use;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28395))+36);
  _assert((i1==6), 127, 28382);
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  _assert((i0!=(OOC_INT32)0), 127, 28468);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28513))+12);
  _assert((i1!=(OOC_INT32)0), 127, 28497);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28551))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28560))+16);
  _assert((i1==(OOC_INT32)0), 127, 28535);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28594))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 28603))+4);
  i1 = i1==13;
  if (i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28852))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28861))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 28868))+36);
  i1 = i1==9;
  if (i1) goto l5;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29262))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29271))+12);
  return (OOC_SSA__Instr)i0;
  goto l17;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29046))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29055))+12);
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29103))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29130))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 29137))+36);
  i1 = i1!=11;
  if (!i1) goto l14;
l9_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29185))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29130))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 29137))+36);
  i1 = i1!=11;
  if (i1) goto l9_loop;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29223))+12);
  return (OOC_SSA__Instr)i0;
  goto l17;
l16:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28799))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28808))+12);
  i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetLoopStart((OOC_SSA__Instr)i0);
  return (OOC_SSA__Instr)i0;
l17:
  _failed_function(28199); return 0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_NumberOfPaths(OOC_SSA__Instr select) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)select;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 29585))+36);
  switch (i1) {
  case 5:
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 16);
    i1 = i1==(OOC_INT32)0;
    if (i1) goto l5;
    i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 16);
    return i0;
    goto l10;
l5:
    i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 1);
    return (i0>>1);
    goto l10;
  case 10:
    return 2;
    goto l10;
  case 11:
    i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 11);
    return i0;
    goto l10;
  default:
    _failed_case(i1, 29574);
    goto l10;
  }
l10:
  _failed_function(29340); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollect(OOC_SSA__Instr select, OOC_SSA__ProcBlock pb, OOC_INT32 pathNum) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Instr loopEnd;
  OOC_SSA__Instr collect;

  i0 = (OOC_INT32)select;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 30602))+36);
  switch (i1) {
  case 5:
    i1 = pathNum;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, (2+i1*2));
    opnd = (OOC_SSA__Opnd)i0;
    goto l10;
  case 11:
    i1 = pathNum;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, (i1+2));
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30808));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30812))+8);
    i1 = *(OOC_INT8*)((_check_pointer(i1, 30818))+36);
    _assert((i1==9), 127, 30797);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30860));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30864))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30870))+24);
    opnd = (OOC_SSA__Opnd)i0;
    goto l10;
  case 10:
    i1 = pathNum;
    i2 = i1==0;
    if (i2) goto l7;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
    loopEnd = (OOC_SSA__Instr)i0;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 13);
    opnd = (OOC_SSA__Opnd)i0;
    
    goto l10;
l7:
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, i1);
    opnd = (OOC_SSA__Opnd)i0;
    
    goto l10;
  default:
    _failed_case(i1, 30591);
    goto l10;
  }
l10:
  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31131));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31135))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 31141))+36);
  i1 = i1==6;
  if (i1) goto l13;
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 6, 0);
  collect = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31292));
  i3 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i3);
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  return (OOC_SSA__Instr)i1;
  goto l14;
l13:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31189));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31193))+8);
  return (OOC_SSA__Instr)i0;
l14:
  _failed_function(30130); return 0;
  ;
}

void OOC_SSA__InstrDesc_LogOpcode(OOC_SSA__Instr instr, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_CHAR8 name[64];

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT32)instr;
  OOC_SSA__InstrDesc_GetOpcodeName((OOC_SSA__Instr)i0, (void*)(OOC_INT32)name, 64);
  Log__String((void*)(OOC_INT32)msg, msg_0d, (void*)(OOC_INT32)name, 64);
  return;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsConst(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31981))+36);
  i1 = i1==57;
  if (i1) goto l3;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32033)))), &_td_OOC_SSA__ConstDesc);
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32053)))), &_td_OOC_SSA__DeclRefDesc);
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32083)))), &_td_OOC_SSA__TypeRefDesc);
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32105)))), &_td_OOC_SSA__AddressDesc);
  
  goto l16;
l15:
  i0=1u;
l16:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_UniqueResult(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 32441))+36);
  switch (i0) {
  case 59:
  case 9:
  case 7:
    return 1u;
    goto l4;
  default:
    return 0u;
    goto l4;
  }
l4:
  _failed_function(32159); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSync(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 33042))+36);
  switch (i0) {
  case 7:
  case 9:
  case 12:
  case 59:
  case 64:
  case 65:
  case 66:
  case 67:
  case 68:
  case 69:
  case 70:
  case 71:
    return 1u;
    goto l4;
  default:
    return 0u;
    goto l4;
  }
l4:
  _failed_function(32628); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSwitchStatm(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 33641))+36);
  _assert((i1==5), 127, 33628);
  i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 16);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 1);
  i0 = i0<4;
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

static void OOC_SSA__InitConst(OOC_SSA__Const _const, OOC_INT8 subclass, Object_Boxed__Object value, OOC_SymbolTable__Type stringType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_const;
  i1 = subclass;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 0, i1);
  i1 = (OOC_INT32)value;
  _assert((i1!=(OOC_INT32)0), 127, 34210);
  *(OOC_INT32*)((_check_pointer(i0, 34241))+44) = i1;
  i1 = (OOC_INT32)stringType;
  *(OOC_INT32*)((_check_pointer(i0, 34268))+48) = i1;
  return;
  ;
}

static void OOC_SSA__InitDeclRef(OOC_SSA__DeclRef declRef, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)declRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 1, 0);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 34454))+44) = i1;
  return;
  ;
}

static void OOC_SSA__InitTypeRef(OOC_SSA__TypeRef typeRef, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 2, 0);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 34623))+44) = i1;
  return;
  ;
}

static void OOC_SSA__InitAddress(OOC_SSA__Address address, OOC_INT8 opcode, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)address;
  i1 = opcode;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, i1, 9);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 34839))+44) = i1;
  return;
  ;
}

static OOC_SSA__Address OOC_SSA__NewAddress(OOC_INT8 opcode, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Address.baseTypes[0]);
  i1 = opcode;
  i2 = (OOC_INT32)decl;
  OOC_SSA__InitAddress((OOC_SSA__Address)i0, i1, (OOC_SymbolTable__Declaration)i2);
  return (OOC_SSA__Address)i0;
  ;
}

static void OOC_SSA__InitProcBlock(OOC_SSA__ProcBlock pb, OOC_SymbolTable__ProcDecl procDecl, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr enter;
  OOC_SSA__Result initialStore;
  OOC_INT32 i;

  i0 = (OOC_INT32)pb;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)((_check_pointer(i0, 35385))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 35411))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)procDecl;
  *(OOC_INT32*)((_check_pointer(i0, 35437))+16) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 35467))+20) = i1;
  i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 8, 0);
  *(OOC_INT32*)(_check_pointer(i0, 35524)) = i1;
  i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 4, 0);
  enter = (OOC_SSA__Instr)i1;
  i1 = (OOC_INT32)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
  initialStore = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35714));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 10);
  *(OOC_INT32*)((_check_pointer(i0, 35787))+4) = (OOC_INT32)0;
  i = 0;
  i1=0;
l1_loop:
  *(OOC_INT32*)(((_check_pointer(i0, 35857))+24)+(_check_index(i1, 12, OOC_UINT32, 35867))*4) = (OOC_INT32)0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=11;
  if (i2) goto l1_loop;
l5:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 35894))+72) = i1;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 35930))+76) = i1;
  return;
  ;
}

OOC_SSA__ProcBlock OOC_SSA__NewProcBlock(OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__ProcBlock pb;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__ProcBlock.baseTypes[0]);
  pb = (OOC_SSA__ProcBlock)i0;
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36165))+4);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 36177))+12);
  OOC_SSA__InitProcBlock((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__ProcDecl)i2, i1);
  return (OOC_SSA__ProcBlock)i0;
  ;
}

static void OOC_SSA__AppendInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 36363))+28) = (OOC_INT32)0;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36409))+12);
  *(OOC_INT32*)((_check_pointer(i0, 36392))+32) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36432))+8);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36634))+12);
  *(OOC_INT32*)((_check_pointer(i2, 36645))+28) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 36675))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 36506))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 36536))+12) = i0;
l4:
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddInstr(OOC_SSA__ProcBlock pb, OOC_INT8 opcode, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Instr.baseTypes[0]);
  i1 = opcode;
  i2 = subclass;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, i1, i2);
  i1 = (OOC_INT32)pb;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
  return (OOC_SSA__Instr)i0;
  ;
}

void OOC_SSA__ProcBlockDesc_DeleteInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37747)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37811)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37940)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38004)))), &_td_OOC_SSA__TypeRefDesc);
  if (!i1) goto l18;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38048))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38025))+72);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  goto l18;
l10:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37984))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37961))+72);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  goto l18;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37837))+48);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l18;
  i1 = (OOC_INT32)pb;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 37886))+5);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 37871))+24)+(_check_index(i2, 12, OOC_UINT8, 37880))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37909))+44);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  goto l18;
l17:
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37768))+76);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37791))+44);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38183))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l26;
l21_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38215))+24);
  OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38183))+24);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l21_loop;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38264))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38348))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38379))+28);
  *(OOC_INT32*)((_check_pointer(i1, 38359))+28) = i2;
  goto l30;
l29:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38316))+28);
  *(OOC_INT32*)((_check_pointer(i1, 38296))+8) = i2;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38413))+28);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38497))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38528))+32);
  *(OOC_INT32*)((_check_pointer(i1, 38508))+32) = i2;
  goto l34;
l33:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38465))+32);
  *(OOC_INT32*)((_check_pointer(i1, 38445))+12) = i2;
l34:
  *(OOC_INT32*)((_check_pointer(i0, 38558))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 38587))+32) = (OOC_INT32)0;
  return;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConst(OOC_SSA__ProcBlock pb, Object_Boxed__Object value, OOC_INT8 subclass, OOC_SymbolTable__Type stringType) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__Object obj;
  OOC_SSA__Const _const;

  i0 = (OOC_INT32)pb;
  i1 = subclass;
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39551))+24)+(_check_index(i1, 12, OOC_UINT8, 39561))*4);
  i2 = i2==(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)(((_check_pointer(i0, 39592))+24)+(_check_index(i1, 12, OOC_UINT8, 39602))*4) = i2;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39657))+24)+(_check_index(i1, 12, OOC_UINT8, 39666))*4);
  i3 = (OOC_INT32)value;
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i2) goto l9;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Const.baseTypes[0]);
  _const = (OOC_SSA__Const)i2;
  i4 = (OOC_INT32)stringType;
  OOC_SSA__InitConst((OOC_SSA__Const)i2, i1, (Object_Boxed__Object)i3, (OOC_SymbolTable__Type)i4);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i2);
  i4 = i4==(OOC_INT32)0;
  if (!i4) goto l8;
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 40040))+24)+(_check_index(i1, 12, OOC_UINT8, 40050))*4);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i2);
l8:
  return (OOC_SSA__Const)i2;
  goto l10;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39711))+24)+(_check_index(i1, 12, OOC_UINT8, 39721))*4);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__Const)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39763)))), &_td_OOC_SSA__ConstDesc, 39763));
l10:
  _failed_function(38655); return 0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstInt(OOC_SSA__ProcBlock pb, OOC_INT32 _int) {
  register OOC_INT32 i0,i1,i2;

  i0 = _int;
  i0 = (OOC_INT32)Object_BigInt__NewInt(i0);
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
  i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
  i2 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i0, i1, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstBool(OOC_SSA__ProcBlock pb, OOC_CHAR8 b) {
  register OOC_INT32 i0,i1;

  i0 = b;
  if (i0) goto l3;
  i0 = (OOC_INT32)Object_BigInt__zero;
  
  goto l4;
l3:
  i0 = (OOC_INT32)Object_BigInt__one;
  
l4:
  i1 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, 5, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstNil(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
  i1 = (OOC_INT32)OOC_SSA__nil;
  i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
  i2 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i1, i0, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_GetDeclRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;
  OOC_SSA__DeclRef declRef;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41167))+72);
  i2 = (OOC_INT32)decl;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__DeclRef.baseTypes[0]);
  declRef = (OOC_SSA__DeclRef)i1;
  OOC_SSA__InitDeclRef((OOC_SSA__DeclRef)i1, (OOC_SymbolTable__Declaration)i2);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41366))+72);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)i1);
  return (OOC_SSA__DeclRef)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41211))+72);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  obj = (Object__Object)i0;
  return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41250)))), &_td_OOC_SSA__DeclRefDesc, 41250));
l4:
  _failed_function(40906); return 0;
  ;
}

OOC_SSA__TypeRef OOC_SSA__ProcBlockDesc_GetTypeRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;
  OOC_SSA__TypeRef typeRef;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41712))+72);
  i2 = (OOC_INT32)type;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__TypeRef.baseTypes[0]);
  typeRef = (OOC_SSA__TypeRef)i1;
  OOC_SSA__InitTypeRef((OOC_SSA__TypeRef)i1, (OOC_SymbolTable__Type)i2);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41911))+72);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)i1);
  return (OOC_SSA__TypeRef)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41756))+72);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  obj = (Object__Object)i0;
  return (OOC_SSA__TypeRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41795)))), &_td_OOC_SSA__TypeRefDesc, 41795));
l4:
  _failed_function(41472); return 0;
  ;
}

void OOC_SSA__ProcBlockDesc_SetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl, OOC_SSA__Address address) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42123))+76);
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)address;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)i2);
  return;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_GetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42460))+76);
  i2 = (OOC_INT32)decl;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_SSA__NewAddress(3, (OOC_SymbolTable__Declaration)i2);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  OOC_SSA__ProcBlockDesc_SetAddress((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Declaration)i2, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42504))+76);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  obj = (Object__Object)i0;
  return (OOC_SSA__Address)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42543)))), &_td_OOC_SSA__AddressDesc, 42543));
l4:
  _failed_function(42199); return 0;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_AddCopyParameter(OOC_SSA__ProcBlock pb, OOC_SymbolTable__VarDecl param, OOC_SSA__Result storeIn, OOC_SSA__Result length, OOC_SSA__Result size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)param;
  i1 = (OOC_INT32)OOC_SSA__NewAddress(58, (OOC_SymbolTable__Declaration)i0);
  i2 = (OOC_INT32)storeIn;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  i2 = (OOC_INT32)length;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT32)size;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT32)pb;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i1);
  OOC_SSA__ProcBlockDesc_SetAddress((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  ;
}

void OOC_SSA__ProcBlockDesc_SetMarkers(OOC_SSA__ProcBlock pb, OOC_SSA__Node newInfo, OOC_INT32 newMarker) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43799))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l16;
  i2 = (OOC_INT32)newInfo;
  i3 = newMarker;
  
l3_loop:
  res = (OOC_SSA__Result)i0;
  if (!i1) goto l11;
  i1=i0;
l6_loop:
  *(OOC_INT32*)((_check_pointer(i1, 43897))+16) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 43927))+20) = i3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 43968));
  res = (OOC_SSA__Result)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l6_loop;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44012))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l16:
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddSetInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr get, OOC_SSA__Result sourceValue) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Instr set;
  OOC_SSA__Opnd opnd;
  auto OOC_INT8 OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(OOC_INT8 _class);
    
    OOC_INT8 OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(OOC_INT8 _class) {
      register OOC_INT32 i0;

      i0 = _class;
      switch (i0) {
      case 4:
        return 6;
        goto l5;
      case 5:
        return 7;
        goto l5;
      default:
        return i0;
        goto l5;
      }
l5:
      _failed_function(44361); return 0;
      ;
    }


  i0 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44650))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 44657))+36);
  _assert((i1==12), 127, 44639);
  i1 = *(OOC_INT8*)((_check_pointer(i0, 44721))+5);
  i2 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 13, i1);
  set = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44749))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44836))+4);
  i2 = OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(i2);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 44811));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44865))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT32)sourceValue;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 8);
  return (OOC_SSA__Instr)i1;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr get, OOC_INT32 dim, OOC_SymbolTable__Array dimType) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr dimension;
  OOC_SSA__DeclRef paramRef;
  OOC_SSA__Instr getLength;
  OOC_INT8 opcode;
  OOC_SSA__Opnd opnd;
  auto OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray(OOC_SSA__Instr get);
  auto OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength(OOC_SSA__Instr varParam, OOC_SSA__Instr dimension);
    
    OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray(OOC_SSA__Instr get) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)get;
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45734))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45770))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 45780))+4);
      i1 = i1!=5;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45829));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45835)))), &_td_OOC_SSA__DeclRefDesc);
      
l9:
      if (i1) goto l11;
      i1=0u;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45862));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45868)))), &_td_OOC_SSA__DeclRefDesc, 45868)), 45876))+44);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45887)))), &_td_OOC_SymbolTable__VarDeclDesc, 45887)), 45895))+52);
      
l13:
      if (i1) goto l15;
      return (OOC_SSA__DeclRef)(OOC_INT32)0;
      goto l16;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45933));
      return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45939)))), &_td_OOC_SSA__DeclRefDesc, 45939));
l16:
      _failed_function(45460); return 0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength(OOC_SSA__Instr varParam, OOC_SSA__Instr dimension) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)varParam;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46315))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i1 = (OOC_INT32)dimension;
      
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46372))+12);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 46379))+36);
      i2 = i2==57;
      if (i2) goto l8;
      i2=0u;
      goto l10;
l8:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46432))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 46439))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 46449));
      i2 = i2==i1;
      
l10:
      if (!i2) goto l12;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46495))+12);
      return (OOC_SSA__Instr)i2;
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46539))+16);
      use = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l18:
      return (OOC_SSA__Instr)(OOC_INT32)0;
      ;
    }


  i0 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46645))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 46652))+36);
  _assert((i1==12), 127, 46634);
  i1 = (OOC_INT32)dimType;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 46690))+36);
  if (i2) goto l3;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 47477))+48);
  i1 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, i0);
  return (OOC_SSA__Instr)i0;
  goto l24;
l3:
  i1 = dim;
  i2 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i2, i1);
  dimension = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray((OOC_SSA__Instr)i0);
  paramRef = (OOC_SSA__DeclRef)i0;
  i1 = (OOC_INT32)dimension;
  i2 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength((OOC_SSA__Instr)i0, (OOC_SSA__Instr)i1);
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l6;
  i0=i2;
  goto l23;
l6:
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l9;
  opcode = 56;
  i0=56;
  goto l10;
l9:
  opcode = 57;
  i0=57;
l10:
  i2 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, i0, 3);
  getLength = (OOC_SSA__Instr)i0;
  i2 = (OOC_INT32)get;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47106))+24);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l23;
l13_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i2, 47166))+4);
  i3 = i3==2;
  if (i3) goto l16;
  i3 = *(OOC_INT8*)((_check_pointer(i2, 47324))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 47313));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, i3);
  goto l17;
l16:
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 15);
l17:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47371))+8);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l13_loop;
l23:
  return (OOC_SSA__Instr)i0;
l24:
  _failed_function(45001); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_SetLoopContext(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopContext) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr old;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47637))+4);
  old = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)loopContext;
  *(OOC_INT32*)((_check_pointer(i0, 47658))+4) = i2;
  return (OOC_SSA__Instr)i1;
  ;
}

OOC_SSA__Result OOC_SSA__ProcBlockDesc_FixSubclass(OOC_SSA__ProcBlock pb, OOC_SSA__Result arg, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)arg;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 48067))+5);
  i2 = subclass;
  i1 = i1!=i2;
  if (i1) goto l3;
  return (OOC_SSA__Result)i0;
  goto l12;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48108)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 48134))+5);
  i1 = (i1<10)==(i2<10);
  
l8:
  if (i1) goto l10;
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 42, i2);
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
  return (OOC_SSA__Result)i1;
  goto l12;
l10:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48231)))), &_td_OOC_SSA__ConstDesc, 48231)), 48237))+44);
  i1 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, i2, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Result)i0;
l12:
  _failed_function(47752); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_FixSubclassInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)instr;
  i2 = subclass;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_FixSubclass((OOC_SSA__ProcBlock)i0, (OOC_SSA__Result)i1, i2);
  res = (OOC_SSA__Result)i0;
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48690)))), &_td_OOC_SSA__InstrDesc, 48690));
  ;
}

static void OOC_SSA__Add(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 48788))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)*list;
  *(OOC_INT32*)((_check_pointer(i0, 48817))+28) = i1;
  i1 = (OOC_INT32)*list;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 48873))+32) = i0;
l4:
  *list = (OOC_SSA__Instr)i0;
  return;
  ;
}

static void OOC_SSA__Remove(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49004))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49079))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49110))+28);
  *(OOC_INT32*)((_check_pointer(i1, 49090))+28) = i2;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49047))+28);
  *list = (OOC_SSA__Instr)i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49144))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49179))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49210))+32);
  *(OOC_INT32*)((_check_pointer(i1, 49190))+32) = i0;
l7:
  return;
  ;
}

OOC_CHAR8 OOC_SSA__ProcBlockDesc_TopSort(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr ready;
  OOC_SSA__Instr waiting;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;
  OOC_INT32 opndCount;
  OOC_SSA__Result res;
  OOC_SSA__Opnd use;

  ready = (OOC_SSA__Instr)(OOC_INT32)0;
  waiting = (OOC_SSA__Instr)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49621))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l12;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49680))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = OOC_SSA__InstrDesc_SizeOpndList((OOC_SSA__Instr)i1);
  opndCount = i3;
  *(OOC_INT32*)((_check_pointer(i1, 49747))+20) = i3;
  i3 = i3==0;
  if (i3) goto l6;
  OOC_SSA__Add((void*)(OOC_INT32)&waiting, (OOC_SSA__Instr)i1);
  goto l7;
l6:
  OOC_SSA__Add((void*)(OOC_INT32)&ready, (OOC_SSA__Instr)i1);
l7:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l12;
  i1=i2;
  goto l3_loop;
l12:
  *(OOC_INT32*)((_check_pointer(i0, 49914))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 49940))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)ready;
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l39;
l15_loop:
  i1 = (OOC_INT32)ready;
  instr = (OOC_SSA__Instr)i1;
  OOC_SSA__Remove((void*)(OOC_INT32)&ready, (OOC_SSA__Instr)i1);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l34;
l18_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50247))+12);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l29;
l21_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50305))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50305))+12);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 50312))+20);
  *(OOC_INT32*)((_check_pointer(i3, 50312))+20) = (i4-1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50340))+12);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 50347))+20);
  i3 = i3==0;
  if (!i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50398))+12);
  OOC_SSA__Remove((void*)(OOC_INT32)&waiting, (OOC_SSA__Instr)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50435))+12);
  OOC_SSA__Add((void*)(OOC_INT32)&ready, (OOC_SSA__Instr)i3);
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50479))+16);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l21_loop;
l29:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 50520));
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l18_loop;
l34:
  i1 = (OOC_INT32)ready;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l15_loop;
l39:
  i0 = (OOC_INT32)waiting;
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_SSA__ProcBlockDesc_Reverse(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr newList;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;

  newList = (OOC_SSA__Instr)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50778))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50837))+28);
  next = (OOC_SSA__Instr)i2;
  OOC_SSA__Add((void*)(OOC_INT32)&newList, (OOC_SSA__Instr)i1);
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l8;
  i1=i2;
  goto l3_loop;
l8:
  i1 = (OOC_INT32)newList;
  *(OOC_INT32*)((_check_pointer(i0, 50913))+8) = i1;
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_GetEnter(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51046))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 51091))+36);
  i1 = i1!=4;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51139))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 51091))+36);
  i1 = i1!=4;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SSA__Instr)i0;
  ;
}

void OOC_SSA__ProcBlockDesc_Destroy(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr nextInstr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd nextOpnd;
  OOC_SSA__Result res;
  OOC_SSA__Result nextResult;
  OOC_INT32 i;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51477))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l27;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51540))+28);
  nextInstr = (OOC_SSA__Instr)i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 51567))+36);
  i4 = i4!=80;
  if (!i4) goto l22;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51703))+24);
  opnd = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT32)0;
  if (!i5) goto l13;
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 51770))+8);
  nextOpnd = (OOC_SSA__Opnd)i5;
  *(OOC_INT32*)(_check_pointer(i4, 51795)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i4, 51822))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i4, 51854))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i4, 51883))+16) = (OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i5;
  i4 = i5!=(OOC_INT32)0;
  if (!i4) goto l13;
  i4=i5;
  goto l8_loop;
l13:
  res = (OOC_SSA__Result)i1;
  if (!i2) goto l21;
  i2=i1;
l16_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 52028));
  nextResult = (OOC_SSA__Result)i4;
  *(OOC_INT32*)(_check_pointer(i2, 52054)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 52087))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 52115))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 52145))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 52172))+20) = 0;
  res = (OOC_SSA__Result)i4;
  i2 = i4!=(OOC_INT32)0;
  if (!i2) goto l21;
  i2=i4;
  goto l16_loop;
l21:
  *(OOC_INT32*)((_check_pointer(i1, 52250))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 52281))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 52313))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 52345))+40) = 0;
l22:
  instr = (OOC_SSA__Instr)i3;
  i1 = i3!=(OOC_INT32)0;
  if (!i1) goto l27;
  i2=i1;i1=i3;
  goto l3_loop;
l27:
  *(OOC_INT32*)(_check_pointer(i0, 52413)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 52441))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 52468))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 52493))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 52518))+16) = (OOC_INT32)0;
  i = 0;
  i1=0;
l28_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 52588))+24)+(_check_index(i1, 12, OOC_UINT32, 52597))*4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l31;
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 52623))+24)+(_check_index(i1, 12, OOC_UINT32, 52632))*4);
  ADT_Dictionary__DictionaryDesc_Destroy((ADT_Dictionary__Dictionary)i2);
  *(OOC_INT32*)(((_check_pointer(i0, 52649))+24)+(_check_index(i1, 12, OOC_UINT32, 52658))*4) = (OOC_INT32)0;
l31:
  i1 = i1+1;
  i = i1;
  i2 = i1<=11;
  if (i2) goto l28_loop;
l35:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52700))+72);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l38;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52728))+72);
  ADT_Dictionary__DictionaryDesc_Destroy((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 52749))+72) = (OOC_INT32)0;
l38:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52784))+76);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l41;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52812))+76);
  ADT_Dictionary__DictionaryDesc_Destroy((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 52833))+76) = (OOC_INT32)0;
l41:
  return;
  ;
}

void OOC_OOC_SSA_init(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Object_BigInt__zero;
  i0 = (OOC_INT32)Object_BigInt__BigIntDesc_Add((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i0);
  i1 = (OOC_INT32)Object_BigInt__zero;
  OOC_SSA__nil = (Object_BigInt__BigInt)i0;
  _assert((i0!=i1), 127, 52950);
  return;
  ;
}

/* --- */
