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
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11813));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11819)))), &_td_OOC_SSA__ConstDesc, 11819)), 11825))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11813));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11819)))), &_td_OOC_SSA__ConstDesc, 11819)), 11825))+44);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11840)))), &_td_Object_BigInt__BigIntDesc, 11840)), 11847)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11840)))), &_td_Object_BigInt__BigIntDesc, 11840)));
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
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13416)))), OOC_SSA__OpndDesc_IsValueOpnd)),OOC_SSA__OpndDesc_IsValueOpnd)((OOC_SSA__Opnd)i0);
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

OOC_CHAR8 OOC_SSA__ResultDesc_IsBooleanConst(OOC_SSA__Result result, OOC_CHAR8 value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)result;
  _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16536)))), &_td_OOC_SSA__ConstDesc)), 127, 16521);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16566)))), &_td_OOC_SSA__ConstDesc, 16566)), 16572))+44);
  _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16579)))), &_td_Object_BigInt__BigIntDesc)), 127, 16551);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16617)))), &_td_OOC_SSA__ConstDesc, 16617)), 16623))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16617)))), &_td_OOC_SSA__ConstDesc, 16617)), 16623))+44);
  i2 = (OOC_INT32)Object_BigInt__zero;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16629)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i0, (Object__Object)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16782)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16817)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = (OOC_INT32)result;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16970))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16931)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i0, (_type_cast_fast(OOC_INT32, OOC_INT32, i2)), 8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17007)))), OOC_SSA__ResultDesc_ResultIndex)),OOC_SSA__ResultDesc_ResultIndex)((OOC_SSA__Result)i1);
  i = i0;
  i1 = i0!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17060)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, 46u);
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17095)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
l4:
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17138)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

static void OOC_SSA__InitInstr(OOC_SSA__Instr instr, OOC_INT8 opcode, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = subclass;
  OOC_SSA__InitResult((OOC_SSA__Result)i0, (OOC_SSA__Instr)i0, (-1), i1);
  *(OOC_INT32*)((_check_pointer(i0, 17407))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 17435))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 17464))+32) = (OOC_INT32)0;
  i2 = opcode;
  *(OOC_INT8*)((_check_pointer(i0, 17493))+36) = i2;
  *(OOC_INT8*)((_check_pointer(i0, 17522))+5) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 17555))+40) = (-1);
  return;
  ;
}

void OOC_SSA__InstrDesc_SetSubclass(OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 17740))+5) = i1;
  return;
  ;
}

void OOC_SSA__InstrDesc_SetPos(OOC_SSA__Instr instr, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 17864))+16);
  *(OOC_INT32*)((_check_pointer(i0, 17852))+40) = i1;
  return;
  ;
}

static void OOC_SSA__AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 18166))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18197))+24);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18278))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18307))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18348))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18307))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)((_check_pointer(i1, 18380))+8) = i0;
  goto l13;
l12:
  *(OOC_INT32*)((_check_pointer(i1, 18231))+24) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19349))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19495))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19524));
  i3 = (OOC_INT32)arg;
  i2 = i2!=i3;
  if (i2) goto l5;
  i2=0u;
  goto l7;
l5:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19544))+8);
  i2 = i2!=(OOC_INT32)0;
  
l7:
  if (!i2) goto l19;
l10_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19585))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19524));
  i2 = i2!=i3;
  if (i2) goto l13;
  i2=0u;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19544))+8);
  i2 = i2!=(OOC_INT32)0;
  
l15:
  if (i2) goto l10_loop;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19621));
  i2 = i2!=i3;
  if (!i2) goto l24;
  i2 = _class;
  i2 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i3, i2);
  opnd = (OOC_SSA__Opnd)i2;
  *(OOC_INT32*)((_check_pointer(i2, 19689))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 19719))+8) = i2;
  goto l24;
l23:
  i1 = _class;
  i2 = (OOC_INT32)arg;
  i1 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i2, i1);
  opnd = (OOC_SSA__Opnd)i1;
  *(OOC_INT32*)((_check_pointer(i1, 19418))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i0, 19447))+24) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20571));
  i2 = i2==0;
  if (i2) goto l12;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20655));
  prev = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20686));
  i2 = i2!=0;
  if (!i2) goto l11;
l6_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20729));
  prev = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20686));
  i2 = i2!=0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i0, 20763)) = i1;
  goto l13;
l12:
  *(OOC_INT32*)(_check_pointer(i0, 20607)) = i1;
l13:
  return (OOC_SSA__Result)i1;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_AddResult(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = _class;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21077)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, i1, 0);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_SizeOpndList(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 num;
  OOC_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21324))+24);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21397))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21700))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=0;
  goto l13;
l3:
  i1 = _class;
  i2=0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 21752))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i2 = i2+1;
  num = i2;
  
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21822))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22233));
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22547))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22600))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22937))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22990))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23042));
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_LastOpnd(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23275))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23329))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
l7_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23370))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23329))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23707))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 23749))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23787))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 23749))+4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24132))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24174))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24212))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 24174))+4);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24301));
  return (OOC_SSA__Result)i0;
  goto l21;
l20:
  return (OOC_SSA__Result)(OOC_INT32)0;
l21:
  _failed_function(23870); return 0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetArgStore(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24453)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
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
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24878));
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25278))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25320));
  result = (OOC_SSA__Result)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 25278))+4);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25572))+4);
  i1 = i1!=2;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25626));
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25572))+4);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25969))+36);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 25984))+5);
  OOC_SSA_Opcode__GetName(i1, i0, (void*)(OOC_INT32)name, name_0d);
  return;
  ;
}

OOC_INT8 OOC_SSA__InstrDesc_GetResultType(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26108))+36);
  switch (i1) {
  case 13:
    return 0;
    goto l4;
  default:
    i0 = *(OOC_INT8*)((_check_pointer(i0, 26357))+5);
    return i0;
    goto l4;
  }
l4:
  _failed_function(26050); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopEnd(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd use;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26637))+36);
  switch (i1) {
  case 10:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26691))+12);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  case 9:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26739)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
    res = (OOC_SSA__Result)i0;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26775))+12);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  default:
    _failed_case(i1, 26627);
    goto l5;
  }
l5:
  i0 = (OOC_INT32)use;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l8;
  i0=0u;
  goto l10;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26823))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 26830))+36);
  i0 = i0!=11;
  
l10:
  if (!i0) goto l21;
l12_loop:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26876))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i0=0u;
  goto l17;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26823))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 26830))+36);
  i0 = i0!=11;
  
l17:
  if (i0) goto l12_loop;
l21:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26910))+12);
  return (OOC_SSA__Instr)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetBackwardFeed(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27192))+36);
  i1 = i1==10;
  if (!i1) goto l4;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27246)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
  instr = (OOC_SSA__Instr)i0;
  
l4:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27288))+36);
  _assert((i1==11), 127, 27275);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27332)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 13);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopStart(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27579))+36);
  _assert((i1==11), 127, 27566);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27623))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27633));
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27639)))), &_td_OOC_SSA__InstrDesc, 27639));
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollectTarget(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Result storeOut;
  OOC_SSA__Opnd use;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27889))+36);
  _assert((i1==6), 127, 27876);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27938)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  _assert((i0!=(OOC_INT32)0), 127, 27962);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28007))+12);
  _assert((i1!=(OOC_INT32)0), 127, 27991);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28045))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28054))+16);
  _assert((i1==(OOC_INT32)0), 127, 28029);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28088))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 28097))+4);
  i1 = i1==13;
  if (i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28346))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28355))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 28362))+36);
  i1 = i1==9;
  if (i1) goto l5;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28756))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28765))+12);
  return (OOC_SSA__Instr)i0;
  goto l17;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28540))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28549))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28540))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28549))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28556)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28597))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28624))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 28631))+36);
  i1 = i1!=11;
  if (!i1) goto l14;
l9_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28679))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28624))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 28631))+36);
  i1 = i1!=11;
  if (i1) goto l9_loop;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28717))+12);
  return (OOC_SSA__Instr)i0;
  goto l17;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28293))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28302))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28293))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28302))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28309)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
  return (OOC_SSA__Instr)i0;
l17:
  _failed_function(27693); return 0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_NumberOfPaths(OOC_SSA__Instr select) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)select;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 29079))+36);
  switch (i1) {
  case 5:
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29127)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 16);
    i1 = i1==(OOC_INT32)0;
    if (i1) goto l5;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29264)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 16);
    return i0;
    goto l10;
l5:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29193)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
    return (i0>>1);
    goto l10;
  case 10:
    return 2;
    goto l10;
  case 11:
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29391)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 11);
    return i0;
    goto l10;
  default:
    _failed_case(i1, 29068);
    goto l10;
  }
l10:
  _failed_function(28834); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollect(OOC_SSA__Instr select, OOC_SSA__ProcBlock pb, OOC_INT32 pathNum) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Instr loopEnd;
  OOC_SSA__Instr collect;
  OOC_SSA__Result oldStore;

  i0 = (OOC_INT32)select;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 30096))+36);
  switch (i1) {
  case 5:
    i1 = pathNum;
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30148)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, (2+i1*2));
    opnd = (OOC_SSA__Opnd)i0;
    goto l10;
  case 11:
    i1 = pathNum;
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30264)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, (i1+2));
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30302));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30306))+8);
    i1 = *(OOC_INT8*)((_check_pointer(i1, 30312))+36);
    _assert((i1==9), 127, 30291);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30354));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30358))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30364))+24);
    opnd = (OOC_SSA__Opnd)i0;
    goto l10;
  case 10:
    i1 = pathNum;
    i2 = i1==0;
    if (i2) goto l7;
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30511)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
    loopEnd = (OOC_SSA__Instr)i0;
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30549)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 13);
    opnd = (OOC_SSA__Opnd)i0;
    
    goto l10;
l7:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30456)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, i1);
    opnd = (OOC_SSA__Opnd)i0;
    
    goto l10;
  default:
    _failed_case(i1, 30085);
    goto l10;
  }
l10:
  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30625));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30629))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 30635))+36);
  i1 = i1==6;
  if (i1) goto l13;
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30722)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 6, 0);
  collect = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30786));
  oldStore = (OOC_SSA__Result)i2;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30821)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30802)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30866)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  return (OOC_SSA__Instr)i1;
  goto l14;
l13:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30683));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30687))+8);
  return (OOC_SSA__Instr)i0;
l14:
  _failed_function(29624); return 0;
  ;
}

void OOC_SSA__InstrDesc_LogOpcode(OOC_SSA__Instr instr, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_CHAR8 name[64];

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31062)))), OOC_SSA__InstrDesc_GetOpcodeName)),OOC_SSA__InstrDesc_GetOpcodeName)((OOC_SSA__Instr)i0, (void*)(OOC_INT32)name, 64);
  Log__String((void*)(OOC_INT32)msg, msg_0d, (void*)(OOC_INT32)name, 64);
  return;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsConst(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31475))+36);
  i1 = i1==57;
  if (i1) goto l3;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31527)))), &_td_OOC_SSA__ConstDesc);
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31547)))), &_td_OOC_SSA__DeclRefDesc);
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31577)))), &_td_OOC_SSA__TypeRefDesc);
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31599)))), &_td_OOC_SSA__AddressDesc);
  
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
  i0 = *(OOC_INT8*)((_check_pointer(i0, 31935))+36);
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
  _failed_function(31653); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSync(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 32536))+36);
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
  _failed_function(32122); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSwitchStatm(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 33135))+36);
  _assert((i1==5), 127, 33122);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33321)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 16);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33379)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
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
  _assert((i1!=(OOC_INT32)0), 127, 33704);
  *(OOC_INT32*)((_check_pointer(i0, 33735))+44) = i1;
  i1 = (OOC_INT32)stringType;
  *(OOC_INT32*)((_check_pointer(i0, 33762))+48) = i1;
  return;
  ;
}

static void OOC_SSA__InitDeclRef(OOC_SSA__DeclRef declRef, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)declRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 1, 0);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 33948))+44) = i1;
  return;
  ;
}

static void OOC_SSA__InitTypeRef(OOC_SSA__TypeRef typeRef, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 2, 0);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 34117))+44) = i1;
  return;
  ;
}

static void OOC_SSA__InitAddress(OOC_SSA__Address address, OOC_INT8 opcode, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)address;
  i1 = opcode;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, i1, 9);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 34333))+44) = i1;
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
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Instr enter;
  OOC_SSA__Result initialStore;
  OOC_INT32 i;

  i0 = (OOC_INT32)pb;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)((_check_pointer(i0, 34879))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 34905))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)procDecl;
  *(OOC_INT32*)((_check_pointer(i0, 34931))+16) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 34961))+20) = i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35038)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 8, 0);
  *(OOC_INT32*)(_check_pointer(i0, 35018)) = i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35102)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 4, 0);
  enter = (OOC_SSA__Instr)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35169)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
  initialStore = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35208));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35208));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35222)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 10);
  *(OOC_INT32*)((_check_pointer(i0, 35281))+4) = (OOC_INT32)0;
  i = 0;
  i1=0;
l1_loop:
  *(OOC_INT32*)(((_check_pointer(i0, 35351))+24)+(_check_index(i1, 12, OOC_UINT32, 35361))*4) = (OOC_INT32)0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=11;
  if (i2) goto l1_loop;
l5:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 35388))+72) = i1;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 35424))+76) = i1;
  return;
  ;
}

OOC_SSA__ProcBlock OOC_SSA__NewProcBlock(OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__ProcBlock pb;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__ProcBlock.baseTypes[0]);
  pb = (OOC_SSA__ProcBlock)i0;
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35659))+4);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 35671))+12);
  OOC_SSA__InitProcBlock((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__ProcDecl)i2, i1);
  return (OOC_SSA__ProcBlock)i0;
  ;
}

static void OOC_SSA__AppendInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 35857))+28) = (OOC_INT32)0;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35903))+12);
  *(OOC_INT32*)((_check_pointer(i0, 35886))+32) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35926))+8);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36128))+12);
  *(OOC_INT32*)((_check_pointer(i2, 36139))+28) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 36169))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 36000))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 36030))+12) = i0;
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
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)instr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37241)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37305)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37434)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37498)))), &_td_OOC_SSA__TypeRefDesc);
  if (!i1) goto l18;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37519))+72);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37542))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37519))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37527)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  goto l18;
l10:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37455))+72);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37478))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37455))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37463)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  goto l18;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37331))+48);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l18;
  i1 = (OOC_INT32)pb;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 37380))+5);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 37365))+24)+(_check_index(i2, 12, OOC_UINT8, 37374))*4);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 37380))+5);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37403))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 37365))+24)+(_check_index(i3, 12, OOC_UINT8, 37374))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37390)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i4);
  goto l18;
l17:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37262))+76);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37285))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37262))+76);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37270)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37677))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l26;
l21_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37709))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37709))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37719)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37677))+24);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l21_loop;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37758))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37842))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37873))+28);
  *(OOC_INT32*)((_check_pointer(i1, 37853))+28) = i2;
  goto l30;
l29:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37810))+28);
  *(OOC_INT32*)((_check_pointer(i1, 37790))+8) = i2;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37907))+28);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l33;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37991))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38022))+32);
  *(OOC_INT32*)((_check_pointer(i1, 38002))+32) = i2;
  goto l34;
l33:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37959))+32);
  *(OOC_INT32*)((_check_pointer(i1, 37939))+12) = i2;
l34:
  *(OOC_INT32*)((_check_pointer(i0, 38052))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 38081))+32) = (OOC_INT32)0;
  return;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConst(OOC_SSA__ProcBlock pb, Object_Boxed__Object value, OOC_INT8 subclass, OOC_SymbolTable__Type stringType) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__Object obj;
  OOC_SSA__Const _const;

  i0 = (OOC_INT32)pb;
  i1 = subclass;
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39045))+24)+(_check_index(i1, 12, OOC_UINT8, 39055))*4);
  i2 = i2==(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)(((_check_pointer(i0, 39086))+24)+(_check_index(i1, 12, OOC_UINT8, 39096))*4) = i2;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39151))+24)+(_check_index(i1, 12, OOC_UINT8, 39160))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39151))+24)+(_check_index(i1, 12, OOC_UINT8, 39160))*4);
  i4 = (OOC_INT32)value;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39170)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
  if (i2) goto l9;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Const.baseTypes[0]);
  _const = (OOC_SSA__Const)i2;
  i3 = (OOC_INT32)stringType;
  OOC_SSA__InitConst((OOC_SSA__Const)i2, i1, (Object_Boxed__Object)i4, (OOC_SymbolTable__Type)i3);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i2);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l8;
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39534))+24)+(_check_index(i1, 12, OOC_UINT8, 39544))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39534))+24)+(_check_index(i1, 12, OOC_UINT8, 39544))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 39554)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i4, (Object__Object)i2);
l8:
  return (OOC_SSA__Const)i2;
  goto l10;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39205))+24)+(_check_index(i1, 12, OOC_UINT8, 39215))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 39205))+24)+(_check_index(i1, 12, OOC_UINT8, 39215))*4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39225)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i4);
  obj = (Object__Object)i0;
  return (OOC_SSA__Const)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39257)))), &_td_OOC_SSA__ConstDesc, 39257));
l10:
  _failed_function(38149); return 0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstInt(OOC_SSA__ProcBlock pb, OOC_INT32 _int) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt x;
  OOC_INT8 subclass;

  i0 = _int;
  i0 = (OOC_INT32)Object_BigInt__NewInt(i0);
  x = (Object_BigInt__BigInt)i0;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
  i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
  subclass = i1;
  i2 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 39869)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i0, i1, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstBool(OOC_SSA__ProcBlock pb, OOC_CHAR8 b) {
  register OOC_INT32 i0,i1;
  Object_BigInt__BigInt x;

  i0 = b;
  if (i0) goto l3;
  i0 = (OOC_INT32)Object_BigInt__zero;
  x = (Object_BigInt__BigInt)i0;
  
  goto l4;
l3:
  i0 = (OOC_INT32)Object_BigInt__one;
  x = (Object_BigInt__BigInt)i0;
  
l4:
  i1 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40107)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, 5, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstNil(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA__nil;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
  i2 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40235)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i0, (Object_Boxed__Object)i1, i2, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_GetDeclRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_SSA__DeclRef declRef;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40661))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40661))+72);
  i3 = (OOC_INT32)decl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40669)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__DeclRef.baseTypes[0]);
  declRef = (OOC_SSA__DeclRef)i1;
  OOC_SSA__InitDeclRef((OOC_SSA__DeclRef)i1, (OOC_SymbolTable__Declaration)i3);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40860))+72);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40860))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 40868)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  return (OOC_SSA__DeclRef)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40705))+72);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40705))+72);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40713)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40744)))), &_td_OOC_SSA__DeclRefDesc, 40744));
l4:
  _failed_function(40400); return 0;
  ;
}

OOC_SSA__TypeRef OOC_SSA__ProcBlockDesc_GetTypeRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_SSA__TypeRef typeRef;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41206))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41206))+72);
  i3 = (OOC_INT32)type;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41214)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__TypeRef.baseTypes[0]);
  typeRef = (OOC_SSA__TypeRef)i1;
  OOC_SSA__InitTypeRef((OOC_SSA__TypeRef)i1, (OOC_SymbolTable__Type)i3);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41405))+72);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41405))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 41413)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  return (OOC_SSA__TypeRef)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41250))+72);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41250))+72);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41258)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__TypeRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41289)))), &_td_OOC_SSA__TypeRefDesc, 41289));
l4:
  _failed_function(40966); return 0;
  ;
}

void OOC_SSA__ProcBlockDesc_SetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl, OOC_SSA__Address address) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41617))+76);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41617))+76);
  i2 = (OOC_INT32)decl;
  i3 = (OOC_INT32)address;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41625)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)i3);
  return;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_GetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_SSA__Address address;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41954))+76);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41954))+76);
  i3 = (OOC_INT32)decl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41962)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_SSA__NewAddress(3, (OOC_SymbolTable__Declaration)i3);
  address = (OOC_SSA__Address)i1;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42149)))), OOC_SSA__ProcBlockDesc_SetAddress)),OOC_SSA__ProcBlockDesc_SetAddress)((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Declaration)i3, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41998))+76);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41998))+76);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42006)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__Address)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42037)))), &_td_OOC_SSA__AddressDesc, 42037));
l4:
  _failed_function(41693); return 0;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_AddCopyParameter(OOC_SSA__ProcBlock pb, OOC_SymbolTable__VarDecl param, OOC_SSA__Result storeIn, OOC_SSA__Result length, OOC_SSA__Result size) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Address address;

  i0 = (OOC_INT32)param;
  i1 = (OOC_INT32)OOC_SSA__NewAddress(58, (OOC_SymbolTable__Declaration)i0);
  address = (OOC_SSA__Address)i1;
  i2 = (OOC_INT32)storeIn;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42759)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  i2 = (OOC_INT32)length;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42808)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT32)size;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42854)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT32)pb;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42924)))), OOC_SSA__ProcBlockDesc_SetAddress)),OOC_SSA__ProcBlockDesc_SetAddress)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  ;
}

void OOC_SSA__ProcBlockDesc_SetMarkers(OOC_SSA__ProcBlock pb, OOC_SSA__Node newInfo, OOC_INT32 newMarker) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43293))+8);
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
  *(OOC_INT32*)((_check_pointer(i1, 43391))+16) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 43421))+20) = i3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 43462));
  res = (OOC_SSA__Result)i1;
  i4 = i1!=(OOC_INT32)0;
  if (i4) goto l6_loop;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43506))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l16:
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddSetInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr get, OOC_SSA__Result sourceValue) {
  register OOC_INT32 i0,i1,i2;
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
      _failed_function(43855); return 0;
      ;
    }


  i0 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44144))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 44151))+36);
  _assert((i1==12), 127, 44133);
  i1 = (OOC_INT32)pb;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44215))+5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44188)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 13, i2);
  set = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44243))+24);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l8;
l3_loop:
  i1 = (OOC_INT32)set;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44330))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 44305));
  i2 = OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44290)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, i2);
  i0 = (OOC_INT32)opnd;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44359))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)sourceValue;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44386)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 8);
  return (OOC_SSA__Instr)i0;
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45174)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45228))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45264))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 45274))+4);
      i1 = i1!=5;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45323));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45329)))), &_td_OOC_SSA__DeclRefDesc);
      
l9:
      if (i1) goto l11;
      i1=0u;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45356));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45362)))), &_td_OOC_SSA__DeclRefDesc, 45362)), 45370))+44);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45381)))), &_td_OOC_SymbolTable__VarDeclDesc, 45381)), 45389))+48);
      
l13:
      if (i1) goto l15;
      return (OOC_SSA__DeclRef)(OOC_INT32)0;
      goto l16;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45427));
      return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45433)))), &_td_OOC_SSA__DeclRefDesc, 45433));
l16:
      _failed_function(44954); return 0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength(OOC_SSA__Instr varParam, OOC_SSA__Instr dimension) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)varParam;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45809))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i1 = (OOC_INT32)dimension;
      
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45866))+12);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 45873))+36);
      i2 = i2==57;
      if (i2) goto l8;
      i2=0u;
      goto l10;
l8:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45926))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45933))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 45943));
      i2 = i2==i1;
      
l10:
      if (!i2) goto l12;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45989))+12);
      return (OOC_SSA__Instr)i2;
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46033))+16);
      use = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l18:
      return (OOC_SSA__Instr)(OOC_INT32)0;
      ;
    }


  i0 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46139))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 46146))+36);
  _assert((i1==12), 127, 46128);
  i1 = (OOC_INT32)dimType;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 46184))+32);
  if (i2) goto l3;
  i0 = (OOC_INT32)pb;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 46971))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46949)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i0, i1);
  return (OOC_SSA__Instr)i0;
  goto l24;
l3:
  i1 = (OOC_INT32)pb;
  i2 = dim;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46224)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, i2);
  dimension = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray((OOC_SSA__Instr)i0);
  paramRef = (OOC_SSA__DeclRef)i0;
  i1 = (OOC_INT32)dimension;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength((OOC_SSA__Instr)i0, (OOC_SSA__Instr)i1);
  getLength = (OOC_SSA__Instr)i0;
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l23;
  i0 = (OOC_INT32)paramRef;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l9;
  opcode = 56;
  i0=56;
  goto l10;
l9:
  opcode = 57;
  i0=57;
l10:
  i1 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46543)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i0, 3);
  getLength = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46600))+24);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l23;
  i2 = (OOC_INT32)dimension;
  
l13_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i1, 46660))+4);
  i3 = i3==2;
  if (i3) goto l16;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 46818))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 46807));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46792)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, i3);
  goto l17;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46713)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 15);
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46865))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l13_loop;
l23:
  return (OOC_SSA__Instr)i0;
l24:
  _failed_function(44495); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_SetLoopContext(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopContext) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr old;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47131))+4);
  old = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)loopContext;
  *(OOC_INT32*)((_check_pointer(i0, 47152))+4) = i2;
  return (OOC_SSA__Instr)i1;
  ;
}

OOC_SSA__Result OOC_SSA__ProcBlockDesc_FixSubclass(OOC_SSA__ProcBlock pb, OOC_SSA__Result arg, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)arg;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 47561))+5);
  i2 = subclass;
  i1 = i1!=i2;
  if (i1) goto l3;
  return (OOC_SSA__Result)i0;
  goto l12;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47602)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 47628))+5);
  i1 = (i1<10)==(i2<10);
  
l8:
  if (i1) goto l10;
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47785)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 42, i2);
  instr = (OOC_SSA__Instr)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47836)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
  return (OOC_SSA__Result)i1;
  goto l12;
l10:
  i1 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47725)))), &_td_OOC_SSA__ConstDesc, 47725)), 47731))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47711)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, i2, (OOC_SymbolTable__Type)(OOC_INT32)0);
  return (OOC_SSA__Result)i0;
l12:
  _failed_function(47246); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_FixSubclassInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)instr;
  i2 = subclass;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48138)))), OOC_SSA__ProcBlockDesc_FixSubclass)),OOC_SSA__ProcBlockDesc_FixSubclass)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Result)i1, i2);
  res = (OOC_SSA__Result)i0;
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48184)))), &_td_OOC_SSA__InstrDesc, 48184));
  ;
}

static void OOC_SSA__Add(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 48282))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)*list;
  *(OOC_INT32*)((_check_pointer(i0, 48311))+28) = i1;
  i1 = (OOC_INT32)*list;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 48367))+32) = i0;
l4:
  *list = (OOC_SSA__Instr)i0;
  return;
  ;
}

static void OOC_SSA__Remove(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48498))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48573))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48604))+28);
  *(OOC_INT32*)((_check_pointer(i1, 48584))+28) = i2;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48541))+28);
  *list = (OOC_SSA__Instr)i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48638))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48673))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48704))+32);
  *(OOC_INT32*)((_check_pointer(i1, 48684))+32) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49115))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l12;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49174))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49212)))), OOC_SSA__InstrDesc_SizeOpndList)),OOC_SSA__InstrDesc_SizeOpndList)((OOC_SSA__Instr)i1);
  opndCount = i3;
  *(OOC_INT32*)((_check_pointer(i1, 49241))+20) = i3;
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
  *(OOC_INT32*)((_check_pointer(i0, 49408))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 49434))+12) = (OOC_INT32)0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49741))+12);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l29;
l21_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49799))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49799))+12);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 49806))+20);
  *(OOC_INT32*)((_check_pointer(i3, 49806))+20) = (i4-1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49834))+12);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 49841))+20);
  i3 = i3==0;
  if (!i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49892))+12);
  OOC_SSA__Remove((void*)(OOC_INT32)&waiting, (OOC_SSA__Instr)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49929))+12);
  OOC_SSA__Add((void*)(OOC_INT32)&ready, (OOC_SSA__Instr)i3);
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49973))+16);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l21_loop;
l29:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 50014));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50272))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50331))+28);
  next = (OOC_SSA__Instr)i2;
  OOC_SSA__Add((void*)(OOC_INT32)&newList, (OOC_SSA__Instr)i1);
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l8;
  i1=i2;
  goto l3_loop;
l8:
  i1 = (OOC_INT32)newList;
  *(OOC_INT32*)((_check_pointer(i0, 50407))+8) = i1;
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_GetEnter(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50540))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 50585))+36);
  i1 = i1!=4;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50633))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 50585))+36);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50971))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l27;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51034))+28);
  nextInstr = (OOC_SSA__Instr)i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 51061))+36);
  i4 = i4!=80;
  if (!i4) goto l22;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51197))+24);
  opnd = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT32)0;
  if (!i5) goto l13;
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 51264))+8);
  nextOpnd = (OOC_SSA__Opnd)i5;
  *(OOC_INT32*)(_check_pointer(i4, 51289)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i4, 51316))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i4, 51348))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i4, 51377))+16) = (OOC_INT32)0;
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
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 51522));
  nextResult = (OOC_SSA__Result)i4;
  *(OOC_INT32*)(_check_pointer(i2, 51548)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 51581))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 51609))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 51639))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i2, 51666))+20) = 0;
  res = (OOC_SSA__Result)i4;
  i2 = i4!=(OOC_INT32)0;
  if (!i2) goto l21;
  i2=i4;
  goto l16_loop;
l21:
  *(OOC_INT32*)((_check_pointer(i1, 51744))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 51775))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 51807))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 51839))+40) = 0;
l22:
  instr = (OOC_SSA__Instr)i3;
  i1 = i3!=(OOC_INT32)0;
  if (!i1) goto l27;
  i2=i1;i1=i3;
  goto l3_loop;
l27:
  *(OOC_INT32*)(_check_pointer(i0, 51907)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 51935))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 51962))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 51987))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 52012))+16) = (OOC_INT32)0;
  i = 0;
  i1=0;
l28_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 52082))+24)+(_check_index(i1, 12, OOC_UINT32, 52091))*4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l31;
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 52117))+24)+(_check_index(i1, 12, OOC_UINT32, 52126))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 52117))+24)+(_check_index(i1, 12, OOC_UINT32, 52126))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52129)))), ADT_Dictionary__DictionaryDesc_Destroy)),ADT_Dictionary__DictionaryDesc_Destroy)((ADT_Dictionary__Dictionary)i3);
  *(OOC_INT32*)(((_check_pointer(i0, 52143))+24)+(_check_index(i1, 12, OOC_UINT32, 52152))*4) = (OOC_INT32)0;
l31:
  i1 = i1+1;
  i = i1;
  i2 = i1<=11;
  if (i2) goto l28_loop;
l35:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52194))+72);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l38;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52222))+72);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52222))+72);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52229)))), ADT_Dictionary__DictionaryDesc_Destroy)),ADT_Dictionary__DictionaryDesc_Destroy)((ADT_Dictionary__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 52243))+72) = (OOC_INT32)0;
l38:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52278))+76);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l41;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52306))+76);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52306))+76);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52313)))), ADT_Dictionary__DictionaryDesc_Destroy)),ADT_Dictionary__DictionaryDesc_Destroy)((ADT_Dictionary__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 52327))+76) = (OOC_INT32)0;
l41:
  return;
  ;
}

void OOC_OOC_SSA_init(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Object_BigInt__zero;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52394)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i0);
  i1 = (OOC_INT32)Object_BigInt__zero;
  OOC_SSA__nil = (Object_BigInt__BigInt)i0;
  _assert((i0!=i1), 127, 52444);
  return;
  ;
}

/* --- */
