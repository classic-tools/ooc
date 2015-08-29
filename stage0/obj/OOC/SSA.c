#include <OOC/SSA.d>
#include <__oo2c.h>

void OOC_SSA__InitNode(OOC_SSA__Node n) {

  return;
  ;
}

static void OOC_SSA__SetUse(OOC_SSA__Result arg, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)arg;
  *(OOC_INT32*)(_check_pointer(i0, 8094)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8132))+12);
  *(OOC_INT32*)((_check_pointer(i0, 8116))+16) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 8150))+12) = i0;
  return;
  ;
}

static void OOC_SSA__DeleteUse(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8319));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8324))+12);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8416));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8421))+12);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8449))+16);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8490))+16);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8449))+16);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8538))+16);
  *(OOC_INT32*)((_check_pointer(i1, 8521))+16) = i2;
  goto l13;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8357));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8379))+16);
  *(OOC_INT32*)((_check_pointer(i1, 8362))+12) = i2;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 8565))+16) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 8591)) = (OOC_INT32)0;
  return;
  ;
}

static void OOC_SSA__InitOpnd(OOC_SSA__Opnd opnd, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)opnd;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  i1 = (OOC_INT32)arg;
  *(OOC_INT32*)(_check_pointer(i0, 8794)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 8816))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 8842))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 8869))+12) = (OOC_INT32)0;
  i2 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 8893))+4) = i2;
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

  i0 = (OOC_INT32)arg;
  i1 = _class;
  i2 = (OOC_INT32)opnd;
  OOC_SSA__InitOpnd((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i0, i1);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i2, 9438))+20) = i0;
  i0 = passByReference;
  *(OOC_UINT8*)((_check_pointer(i2, 9462))+24) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10009))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10016))+24);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10113))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10120))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10149))+8);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10191))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10149))+8);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10241))+8);
  *(OOC_INT32*)((_check_pointer(i1, 10223))+8) = i2;
  goto l13;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10050))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10075))+8);
  *(OOC_INT32*)((_check_pointer(i1, 10057))+24) = i2;
l13:
  *(OOC_INT32*)((_check_pointer(i0, 10269))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 10296))+12) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10820))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10827))+24);
  i2 = i1!=i0;
  ptr = (OOC_SSA__Opnd)i1;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10896))+8);
  i3 = i2!=i0;
  ptr = (OOC_SSA__Opnd)i2;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11093));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11099)))), &_td_OOC_SSA__ConstDesc, 11099)), 11105))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11093));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11099)))), &_td_OOC_SSA__ConstDesc, 11099)), 11105))+44);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11120)))), &_td_Object_BigInt__BigIntDesc, 11120)), 11127)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11120)))), &_td_Object_BigInt__BigIntDesc, 11120)));
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsScheduleOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)opnd;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 11234))+4);
  switch (i0) {
  case 17:
  case 18:
  case 20:
    return OOC_TRUE;
    goto l4;
  default:
    return OOC_FALSE;
    goto l4;
  }
l4:
  _failed_function(11185); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsValueOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)opnd;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 11765))+4);
  switch (i0) {
  case 18:
  case 20:
  case 5:
  case 7:
    return OOC_FALSE;
    goto l4;
  default:
    return OOC_TRUE;
    goto l4;
  }
l4:
  _failed_function(11447); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsValueOpndHere(OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)opnd;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12696)))), OOC_SSA__OpndDesc_IsValueOpnd)),OOC_SSA__OpndDesc_IsValueOpnd)((OOC_SSA__Opnd)i0);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l8;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12736))+12);
  instr = (OOC_SSA__Instr)i1;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 13053))+36);
  i2 = i2!=5;
  if (i2) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13088))+24);
  i0 = i1!=i0;
  
  goto l7;
l6:
  i0=OOC_TRUE;
l7:
  return i0;
l8:
  _failed_function(11999); return 0;
  ;
}

static void OOC_SSA__InitResult(OOC_SSA__Result res, OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)res;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)(_check_pointer(i0, 13439)) = (OOC_INT32)0;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 13467))+8) = i1;
  i1 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 13492))+4) = i1;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 13517))+5) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 13548))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 13570))+20) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 13601))+12) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14446))+8);
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14470));
  i2 = i2!=i0;
  if (!i2) goto l9;
l4_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14511));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14470));
  i2 = i2!=i0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14560));
  *(OOC_INT32*)(_check_pointer(i1, 14541)) = i0;
  return;
  ;
}

void OOC_SSA__ResultDesc_ReplaceUses(OOC_SSA__Result res, OOC_SSA__Result with) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;

  i0 = (OOC_INT32)res;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14760))+12);
  i1 = i0!=(OOC_INT32)0;
  use = (OOC_SSA__Opnd)i0;
  if (!i1) goto l8;
  i1 = (OOC_INT32)with;
  
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14816))+16);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15230))+8);
  i2 = i1!=i0;
  ptr = (OOC_SSA__Result)i1;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15298));
  i3 = i2!=i0;
  ptr = (OOC_SSA__Result)i2;
  if (i3) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__ResultDesc_IsBooleanConst(OOC_SSA__Result result, OOC_CHAR8 value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)result;
  _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15712)))), &_td_OOC_SSA__ConstDesc)), 127, 15697);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15742)))), &_td_OOC_SSA__ConstDesc, 15742)), 15748))+44);
  _assert((OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15756)))), &_td_Object_Boxed__BooleanDesc)), 127, 15727);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15794)))), &_td_OOC_SSA__ConstDesc, 15794)), 15800))+44);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15814)))), &_td_Object_Boxed__BooleanDesc, 15814)), 15822));
  i1 = value;
  return (i0==i1);
  ;
}

void OOC_SSA__ResultDesc_LogId(OOC_SSA__Result result, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_INT32 i;

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15962)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15997)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = (OOC_INT32)result;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16150))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16111)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i0, (_type_cast_fast(OOC_INT32, OOC_PTR, i2)), 8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16187)))), OOC_SSA__ResultDesc_ResultIndex)),OOC_SSA__ResultDesc_ResultIndex)((OOC_SSA__Result)i1);
  i1 = i0!=0;
  i = i0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16240)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'.');
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16275)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
l4:
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16318)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

static void OOC_SSA__InitInstr(OOC_SSA__Instr instr, OOC_INT8 opcode, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1,i2;

  i0 = subclass;
  i1 = (OOC_INT32)instr;
  OOC_SSA__InitResult((OOC_SSA__Result)i1, (OOC_SSA__Instr)i1, -1, i0);
  *(OOC_INT32*)((_check_pointer(i1, 16587))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 16615))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 16644))+32) = (OOC_INT32)0;
  i2 = opcode;
  *(OOC_INT8*)((_check_pointer(i1, 16673))+36) = i2;
  *(OOC_INT8*)((_check_pointer(i1, 16702))+5) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 16735))+40) = -1;
  return;
  ;
}

void OOC_SSA__InstrDesc_SetSubclass(OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 16920))+5) = i1;
  return;
  ;
}

void OOC_SSA__InstrDesc_SetPos(OOC_SSA__Instr instr, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 17044))+16);
  *(OOC_INT32*)((_check_pointer(i0, 17032))+40) = i1;
  return;
  ;
}

static void OOC_SSA__AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 17241))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17272))+24);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17353))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17382))+8);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17423))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17382))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)((_check_pointer(i1, 17455))+8) = i0;
  goto l13;
l12:
  *(OOC_INT32*)((_check_pointer(i1, 17306))+24) = i0;
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

void OOC_SSA__InstrDesc_AddUniqueOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18127))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18273))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18302));
  i3 = (OOC_INT32)arg;
  i2 = i2!=i3;
  if (i2) goto l5;
  i2=OOC_FALSE;
  goto l7;
l5:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18322))+8);
  i2 = i2!=(OOC_INT32)0;
  
l7:
  if (!i2) goto l19;
l10_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18363))+8);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18302));
  i2 = i2!=i3;
  if (i2) goto l13;
  i2=OOC_FALSE;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18322))+8);
  i2 = i2!=(OOC_INT32)0;
  
l15:
  if (i2) goto l10_loop;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18399));
  i2 = i2!=i3;
  if (!i2) goto l24;
  i2 = _class;
  i2 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i3, i2);
  opnd = (OOC_SSA__Opnd)i2;
  *(OOC_INT32*)((_check_pointer(i2, 18467))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 18497))+8) = i2;
  goto l24;
l23:
  i1 = _class;
  i2 = (OOC_INT32)arg;
  i1 = (OOC_INT32)OOC_SSA__NewOpnd((OOC_SSA__Result)i2, i1);
  opnd = (OOC_SSA__Opnd)i1;
  *(OOC_INT32*)((_check_pointer(i1, 18196))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i0, 18225))+24) = i1;
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

  i0 = _class;
  i1 = subclass;
  i2 = (OOC_INT32)instr;
  i0 = (OOC_INT32)OOC_SSA__NewResult((OOC_SSA__Instr)i2, i0, i1);
  res = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19349));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19433));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19464));
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19507));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19464));
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i1, 19541)) = i0;
  goto l13;
l12:
  *(OOC_INT32*)(_check_pointer(i2, 19385)) = i0;
l13:
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_AddResult(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = _class;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19855)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, i1, 0);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_SizeOpndList(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 num;
  OOC_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20102))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  num = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20175))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20478))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (i1) goto l3;
  i0=0;
  goto l13;
l3:
  i1 = _class;
  i2=0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 20530))+4);
  i3 = i3==i1;
  if (!i3) goto l8;
  i2 = i2+1;
  num = i2;
  
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20600))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21011));
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_NthOpnd(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21325))+24);
  i1 = nth;
  i1 = i1!=0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21378))+8);
  i1 = nth;
  i1 = i1-1;
  opnd = (OOC_SSA__Opnd)i0;
  nth = i1;
  i1 = i1!=0;
  if (i1) goto l4_loop;
l9:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_NthArg(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21715))+24);
  i1 = nth;
  i1 = i1!=0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21768))+8);
  i1 = nth;
  i1 = i1-1;
  opnd = (OOC_SSA__Opnd)i0;
  nth = i1;
  i1 = i1!=0;
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21820));
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_LastOpnd(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22053))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22107))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
l7_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22148))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22107))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22485))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 22527))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22565))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 22527))+4);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22910))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 22952))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22990))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 22952))+4);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23079));
  return (OOC_SSA__Result)i0;
  goto l21;
l20:
  return (OOC_SSA__Result)(OOC_INT32)0;
l21:
  _failed_function(22648); return 0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetArgStore(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23231)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_NthResult(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)instr;
  i1 = nth;
  i1 = i1!=0;
  res = (OOC_SSA__Result)i0;
  if (!i1) goto l9;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23656));
  i1 = nth;
  i1 = i1-1;
  res = (OOC_SSA__Result)i0;
  nth = i1;
  i1 = i1!=0;
  if (i1) goto l4_loop;
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
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24056))+4);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24098));
  result = (OOC_SSA__Result)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 24056))+4);
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
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24350))+4);
  i1 = i1!=2;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24404));
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24350))+4);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24747))+36);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 24762))+5);
  OOC_SSA_Opcode__GetName(i1, i0, (void*)(OOC_INT32)name, name_0d);
  return;
  ;
}

OOC_INT8 OOC_SSA__InstrDesc_GetResultType(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24886))+36);
  switch (i1) {
  case 13:
    return 0;
    goto l4;
  default:
    i0 = *(OOC_INT8*)((_check_pointer(i0, 25135))+5);
    return i0;
    goto l4;
  }
l4:
  _failed_function(24828); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopEnd(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Opnd use;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25415))+36);
  switch (i1) {
  case 10:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25469))+12);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  case 9:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25517)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
    res = (OOC_SSA__Result)i0;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25553))+12);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  default:
    _failed_case(i1, 25405);
    goto l5;
  }
l5:
  i0 = (OOC_INT32)use;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l8;
  i0=OOC_FALSE;
  goto l10;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25601))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 25608))+36);
  i0 = i0!=11;
  
l10:
  if (!i0) goto l21;
l12_loop:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25654))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l15;
  i0=OOC_FALSE;
  goto l17;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25601))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 25608))+36);
  i0 = i0!=11;
  
l17:
  if (i0) goto l12_loop;
l21:
  i0 = (OOC_INT32)use;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25688))+12);
  return (OOC_SSA__Instr)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetBackwardFeed(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25970))+36);
  i1 = i1==10;
  if (!i1) goto l4;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26024)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
  instr = (OOC_SSA__Instr)i0;
l4:
  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26066))+36);
  _assert((i1==11), 127, 26053);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26110)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 13);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopStart(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26357))+36);
  _assert((i1==11), 127, 26344);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26401))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26411));
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26417)))), &_td_OOC_SSA__InstrDesc, 26417));
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollectTarget(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Result storeOut;
  OOC_SSA__Opnd use;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26667))+36);
  _assert((i1==6), 127, 26654);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26716)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  _assert((i0!=(OOC_INT32)0), 127, 26740);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26785))+12);
  _assert((i1!=(OOC_INT32)0), 127, 26769);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26823))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26832))+16);
  _assert((i1==(OOC_INT32)0), 127, 26807);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26866))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 26875))+4);
  i1 = i1==13;
  if (i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27124))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27133))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 27140))+36);
  i1 = i1==9;
  if (i1) goto l5;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27534))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27543))+12);
  return (OOC_SSA__Instr)i0;
  goto l17;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27318))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27327))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27318))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27327))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27334)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27375))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27402))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 27409))+36);
  i1 = i1!=11;
  if (!i1) goto l14;
l9_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27457))+16);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27402))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 27409))+36);
  i1 = i1!=11;
  if (i1) goto l9_loop;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27495))+12);
  return (OOC_SSA__Instr)i0;
  goto l17;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27071))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27080))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27071))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27080))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27087)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
  return (OOC_SSA__Instr)i0;
l17:
  _failed_function(26471); return 0;
  ;
}

void OOC_SSA__InstrDesc_LogOpcode(OOC_SSA__Instr instr, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_CHAR8 name[64];

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27695)))), OOC_SSA__InstrDesc_GetOpcodeName)),OOC_SSA__InstrDesc_GetOpcodeName)((OOC_SSA__Instr)i0, (void*)(OOC_INT32)name, 64);
  Log__String((void*)(OOC_INT32)msg, msg_0d, (void*)(OOC_INT32)name, 64);
  return;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsConst(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28108))+36);
  i1 = i1==57;
  if (i1) goto l3;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28160)))), &_td_OOC_SSA__ConstDesc);
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28180)))), &_td_OOC_SSA__DeclRefDesc);
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28210)))), &_td_OOC_SSA__TypeRefDesc);
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28232)))), &_td_OOC_SSA__AddressDesc);
  
  goto l16;
l15:
  i0=OOC_TRUE;
l16:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_UniqueResult(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 28568))+36);
  switch (i0) {
  case 59:
  case 9:
  case 7:
  case 51:
    return OOC_TRUE;
    goto l4;
  default:
    return OOC_FALSE;
    goto l4;
  }
l4:
  _failed_function(28286); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSync(OOC_SSA__Instr instr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 29165))+36);
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
    return OOC_TRUE;
    goto l4;
  default:
    return OOC_FALSE;
    goto l4;
  }
l4:
  _failed_function(28751); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSwitchStatm(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 29764))+36);
  _assert((i1==5), 127, 29751);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29950)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 16);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30008)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
  i0 = i0<4;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

static void OOC_SSA__InitConst(OOC_SSA__Const _const, OOC_INT8 subclass, Object_Boxed__Object value, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = subclass;
  i1 = (OOC_INT32)_const;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i1, 0, i0);
  i0 = (OOC_INT32)value;
  _assert((i0!=(OOC_INT32)0), 127, 30327);
  *(OOC_INT32*)((_check_pointer(i1, 30358))+44) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i1, 30385))+48) = i0;
  return;
  ;
}

static void OOC_SSA__InitDeclRef(OOC_SSA__DeclRef declRef, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)declRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 1, 0);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 30559))+44) = i1;
  return;
  ;
}

static void OOC_SSA__InitTypeRef(OOC_SSA__TypeRef typeRef, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)typeRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 2, 0);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 30728))+44) = i1;
  return;
  ;
}

static void OOC_SSA__InitAddress(OOC_SSA__Address address, OOC_INT8 opcode, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = opcode;
  i1 = (OOC_INT32)address;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i1, i0, 9);
  i0 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 30944))+44) = i0;
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
  *(OOC_INT32*)((_check_pointer(i0, 31628))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 31654))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)procDecl;
  *(OOC_INT32*)((_check_pointer(i0, 31680))+16) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 31710))+20) = i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31787)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 8, 0);
  *(OOC_INT32*)(_check_pointer(i0, 31767)) = i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31851)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i0, 4, 0);
  enter = (OOC_SSA__Instr)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31918)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
  initialStore = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31957));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31957));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31971)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i3, (OOC_SSA__Result)i1, 10);
  *(OOC_INT32*)((_check_pointer(i0, 32030))+4) = (OOC_INT32)0;
  i = 0;
  i1=0;
l1_loop:
  *(OOC_INT32*)(((_check_pointer(i0, 32095))+24)+(_check_index(i1, 18, OOC_UINT32, 32105))*4) = (OOC_INT32)0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=17;
  if (i2) goto l1_loop;
l5:
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 32132))+96) = i1;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 32168))+100) = i1;
  return;
  ;
}

OOC_SSA__ProcBlock OOC_SSA__NewProcBlock(OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__ProcBlock pb;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__ProcBlock.baseTypes[0]);
  pb = (OOC_SSA__ProcBlock)i0;
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32403))+4);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 32415))+12);
  OOC_SSA__InitProcBlock((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__ProcDecl)i2, i1);
  return (OOC_SSA__ProcBlock)i0;
  ;
}

static void OOC_SSA__AppendInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 32601))+28) = (OOC_INT32)0;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32647))+12);
  *(OOC_INT32*)((_check_pointer(i0, 32630))+32) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32670))+8);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32872))+12);
  *(OOC_INT32*)((_check_pointer(i2, 32883))+28) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 32913))+12) = i0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 32744))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 32774))+12) = i0;
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

static OOC_INT32 OOC_SSA__ConstBucket(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33390)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return 17;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 33427))+32);
  return i0;
l4:
  _failed_function(33330); return 0;
  ;
}

void OOC_SSA__ProcBlockDesc_DeleteInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)instr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34162)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l14;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34226)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34318)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34382)))), &_td_OOC_SSA__TypeRefDesc);
  if (!i1) goto l15;
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34403))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34426))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34403))+96);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34411)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  goto l15;
l10:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34339))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34362))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34339))+96);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34347)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  goto l15;
l12:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34274))+48);
  i2 = OOC_SSA__ConstBucket((OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 34245))+24)+(_check_index(i2, 18, OOC_UINT32, 34255))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34274))+48);
  i3 = OOC_SSA__ConstBucket((OOC_SymbolTable__Type)i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34297))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 34245))+24)+(_check_index(i3, 18, OOC_UINT32, 34255))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34282)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i4);
  goto l15;
l14:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34183))+100);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34206))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34183))+100);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34191)))), ADT_Dictionary__DictionaryDesc_Delete)),ADT_Dictionary__DictionaryDesc_Delete)((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34561))+24);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l23;
l18_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34593))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34593))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34603)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34561))+24);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l18_loop;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34642))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l26;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34726))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34757))+28);
  *(OOC_INT32*)((_check_pointer(i1, 34737))+28) = i2;
  goto l27;
l26:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34694))+28);
  *(OOC_INT32*)((_check_pointer(i1, 34674))+8) = i2;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34791))+28);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34875))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34906))+32);
  *(OOC_INT32*)((_check_pointer(i1, 34886))+32) = i2;
  goto l31;
l30:
  i1 = (OOC_INT32)pb;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34843))+32);
  *(OOC_INT32*)((_check_pointer(i1, 34823))+12) = i2;
l31:
  *(OOC_INT32*)((_check_pointer(i0, 34936))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 34965))+32) = (OOC_INT32)0;
  return;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConst(OOC_SSA__ProcBlock pb, Object_Boxed__Object value, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 bucket;
  Object__Object obj;
  OOC_SSA__Const _const;

  i0 = (OOC_INT32)type;
  i1 = OOC_SSA__ConstBucket((OOC_SymbolTable__Type)i0);
  bucket = i1;
  i2 = (OOC_INT32)pb;
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35381))+24)+(_check_index(i1, 18, OOC_UINT32, 35391))*4);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l3;
  i3 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)(((_check_pointer(i2, 35420))+24)+(_check_index(i1, 18, OOC_UINT32, 35430))*4) = i3;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35479))+24)+(_check_index(i1, 18, OOC_UINT32, 35489))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35479))+24)+(_check_index(i1, 18, OOC_UINT32, 35489))*4);
  i5 = (OOC_INT32)value;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 35497)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i4, (Object__Object)i5);
  if (i3) goto l6;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__Const.baseTypes[0]);
  _const = (OOC_SSA__Const)i3;
  i4 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
  OOC_SSA__InitConst((OOC_SSA__Const)i3, i4, (Object_Boxed__Object)i5, (OOC_SymbolTable__Type)i0);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35727))+24)+(_check_index(i1, 18, OOC_UINT32, 35737))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35727))+24)+(_check_index(i1, 18, OOC_UINT32, 35737))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35745)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i1, (Object__Object)i5, (Object__Object)i3);
  return (OOC_SSA__Const)i3;
  goto l7;
l6:
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35534))+24)+(_check_index(i1, 18, OOC_UINT32, 35544))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 35534))+24)+(_check_index(i1, 18, OOC_UINT32, 35544))*4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35552)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (Object__Object)i5);
  obj = (Object__Object)i0;
  return (OOC_SSA__Const)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35584)))), &_td_OOC_SSA__ConstDesc, 35584));
l7:
  _failed_function(35033); return 0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstInt(OOC_SSA__ProcBlock pb, OOC_INT32 _int) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pb;
  i1 = _int;
  i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(5);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35895)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i0, (Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstBool(OOC_SSA__ProcBlock pb, OOC_CHAR8 b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pb;
  i1 = b;
  i1 = (OOC_INT32)Object_Boxed__NewBoolean(i1);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36060)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i0, (Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstNil(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA__nil;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36215)))), OOC_SSA__ProcBlockDesc_GetConst)),OOC_SSA__ProcBlockDesc_GetConst)((OOC_SSA__ProcBlock)i0, (Object_Boxed__Object)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_GetDeclRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_SSA__DeclRef declRef;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36566))+96);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36566))+96);
  i3 = (OOC_INT32)decl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36574)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__DeclRef.baseTypes[0]);
  declRef = (OOC_SSA__DeclRef)i1;
  OOC_SSA__InitDeclRef((OOC_SSA__DeclRef)i1, (OOC_SymbolTable__Declaration)i3);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36765))+96);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36765))+96);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36773)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  return (OOC_SSA__DeclRef)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36610))+96);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36610))+96);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36618)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36649)))), &_td_OOC_SSA__DeclRefDesc, 36649));
l4:
  _failed_function(36305); return 0;
  ;
}

OOC_SSA__TypeRef OOC_SSA__ProcBlockDesc_GetTypeRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_SSA__TypeRef typeRef;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37111))+96);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37111))+96);
  i3 = (OOC_INT32)type;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37119)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA__TypeRef.baseTypes[0]);
  typeRef = (OOC_SSA__TypeRef)i1;
  OOC_SSA__InitTypeRef((OOC_SSA__TypeRef)i1, (OOC_SymbolTable__Type)i3);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37310))+96);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37310))+96);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 37318)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  return (OOC_SSA__TypeRef)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37155))+96);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37155))+96);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37163)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__TypeRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37194)))), &_td_OOC_SSA__TypeRefDesc, 37194));
l4:
  _failed_function(36871); return 0;
  ;
}

void OOC_SSA__ProcBlockDesc_SetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl, OOC_SSA__Address address) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37522))+100);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37522))+100);
  i2 = (OOC_INT32)decl;
  i3 = (OOC_INT32)address;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37530)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)i3);
  return;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_GetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object obj;
  OOC_SSA__Address address;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37859))+100);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37859))+100);
  i3 = (OOC_INT32)decl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37867)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)OOC_SSA__NewAddress(3, (OOC_SymbolTable__Declaration)i3);
  address = (OOC_SSA__Address)i1;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38054)))), OOC_SSA__ProcBlockDesc_SetAddress)),OOC_SSA__ProcBlockDesc_SetAddress)((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Declaration)i3, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37903))+100);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37903))+100);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37911)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__Address)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37942)))), &_td_OOC_SSA__AddressDesc, 37942));
l4:
  _failed_function(37598); return 0;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_AddCopyParameter(OOC_SSA__ProcBlock pb, OOC_SymbolTable__VarDecl param, OOC_SSA__Result storeIn, OOC_SSA__Result length, OOC_SSA__Result size) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Address address;

  i0 = (OOC_INT32)param;
  i1 = (OOC_INT32)OOC_SSA__NewAddress(58, (OOC_SymbolTable__Declaration)i0);
  address = (OOC_SSA__Address)i1;
  i2 = (OOC_INT32)storeIn;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38664)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  i2 = (OOC_INT32)length;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38713)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT32)size;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38759)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT32)pb;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38829)))), OOC_SSA__ProcBlockDesc_SetAddress)),OOC_SSA__ProcBlockDesc_SetAddress)((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  ;
}

void OOC_SSA__ProcBlockDesc_SetMarkers(OOC_SSA__ProcBlock pb, OOC_SSA__Node newInfo, OOC_INT32 newMarker) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Result res;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39198))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l16;
  i1 = (OOC_INT32)newInfo;
  i2 = newMarker;
  
l3_loop:
  i3 = i0!=(OOC_INT32)0;
  res = (OOC_SSA__Result)i0;
  if (!i3) goto l11;
  i3=i0;
l6_loop:
  *(OOC_INT32*)((_check_pointer(i3, 39296))+16) = i1;
  *(OOC_INT32*)((_check_pointer(i3, 39326))+20) = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 39367));
  res = (OOC_SSA__Result)i3;
  i4 = i3!=(OOC_INT32)0;
  if (i4) goto l6_loop;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39411))+28);
  instr = (OOC_SSA__Instr)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l3_loop;
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
      _failed_function(39760); return 0;
      ;
    }


  i0 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40049))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 40056))+36);
  _assert((i1==12), 127, 40038);
  i1 = (OOC_INT32)pb;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 40120))+5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40093)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 13, i2);
  set = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40148))+24);
  i1 = i0!=(OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i0;
  if (!i1) goto l8;
l3_loop:
  i1 = (OOC_INT32)set;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 40235))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40210));
  i2 = OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40195)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, i2);
  i0 = (OOC_INT32)opnd;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40264))+8);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l8:
  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)sourceValue;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40291)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 8);
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
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41079)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41133))+8);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41169))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 41179))+4);
      i1 = i1!=5;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i1=OOC_FALSE;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 41228));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41234)))), &_td_OOC_SSA__DeclRefDesc);
      
l9:
      if (i1) goto l11;
      i1=OOC_FALSE;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 41261));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41267)))), &_td_OOC_SSA__DeclRefDesc, 41267)), 41275))+44);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41286)))), &_td_OOC_SymbolTable__VarDeclDesc, 41286)), 41294))+48);
      
l13:
      if (i1) goto l15;
      return (OOC_SSA__DeclRef)(OOC_INT32)0;
      goto l16;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 41332));
      return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41338)))), &_td_OOC_SSA__DeclRefDesc, 41338));
l16:
      _failed_function(40859); return 0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength(OOC_SSA__Instr varParam, OOC_SSA__Instr dimension) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)varParam;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41714))+12);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i1 = (OOC_INT32)dimension;
      
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41771))+12);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 41778))+36);
      i2 = i2==57;
      if (i2) goto l8;
      i2=OOC_FALSE;
      goto l10;
l8:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41831))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 41838))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 41848));
      i2 = i2==i1;
      
l10:
      if (!i2) goto l12;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41894))+12);
      return (OOC_SSA__Instr)i2;
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41938))+16);
      use = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l18:
      return (OOC_SSA__Instr)(OOC_INT32)0;
      ;
    }


  i0 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42044))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 42051))+36);
  _assert((i1==12), 127, 42033);
  i1 = (OOC_INT32)dimType;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 42089))+32);
  if (i2) goto l3;
  i0 = (OOC_INT32)pb;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 42876))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42854)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i0, i1);
  return (OOC_SSA__Instr)i0;
  goto l24;
l3:
  i1 = (OOC_INT32)pb;
  i2 = dim;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42129)))), OOC_SSA__ProcBlockDesc_GetConstInt)),OOC_SSA__ProcBlockDesc_GetConstInt)((OOC_SSA__ProcBlock)i1, i2);
  dimension = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray((OOC_SSA__Instr)i0);
  paramRef = (OOC_SSA__DeclRef)i0;
  i1 = (OOC_INT32)dimension;
  i0 = (OOC_INT32)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength((OOC_SSA__Instr)i0, (OOC_SSA__Instr)i1);
  i1 = i0==(OOC_INT32)0;
  getLength = (OOC_SSA__Instr)i0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42448)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, i0, 3);
  getLength = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)get;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42505))+24);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l23;
  i2 = (OOC_INT32)dimension;
  
l13_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i1, 42565))+4);
  i3 = i3==2;
  if (i3) goto l16;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 42723))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42712));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42697)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, i3);
  goto l17;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42618)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 15);
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42770))+8);
  opnd = (OOC_SSA__Opnd)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l13_loop;
l23:
  return (OOC_SSA__Instr)i0;
l24:
  _failed_function(40400); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_SetLoopContext(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopContext) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA__Instr old;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43036))+4);
  old = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)loopContext;
  *(OOC_INT32*)((_check_pointer(i0, 43057))+4) = i2;
  return (OOC_SSA__Instr)i1;
  ;
}

static void OOC_SSA__Add(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 43190))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)*list;
  *(OOC_INT32*)((_check_pointer(i0, 43219))+28) = i1;
  i1 = (OOC_INT32)*list;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 43275))+32) = i0;
l4:
  *list = (OOC_SSA__Instr)i0;
  return;
  ;
}

static void OOC_SSA__Remove(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43406))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43481))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43512))+28);
  *(OOC_INT32*)((_check_pointer(i1, 43492))+28) = i2;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43449))+28);
  *list = (OOC_SSA__Instr)i1;
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43546))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43581))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43612))+32);
  *(OOC_INT32*)((_check_pointer(i1, 43592))+32) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44023))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l12;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44082))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44120)))), OOC_SSA__InstrDesc_SizeOpndList)),OOC_SSA__InstrDesc_SizeOpndList)((OOC_SSA__Instr)i1);
  opndCount = i3;
  *(OOC_INT32*)((_check_pointer(i1, 44149))+20) = i3;
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
  *(OOC_INT32*)((_check_pointer(i0, 44316))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)ready;
  i1 = i1!=(OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 44342))+12) = (OOC_INT32)0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44649))+12);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l29;
l21_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44707))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44707))+12);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 44714))+20);
  *(OOC_INT32*)((_check_pointer(i3, 44714))+20) = (i4-1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44742))+12);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 44749))+20);
  i3 = i3==0;
  if (!i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44800))+12);
  OOC_SSA__Remove((void*)(OOC_INT32)&waiting, (OOC_SSA__Instr)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44837))+12);
  OOC_SSA__Add((void*)(OOC_INT32)&ready, (OOC_SSA__Instr)i3);
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44881))+16);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l21_loop;
l29:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 44922));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45180))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45239))+28);
  next = (OOC_SSA__Instr)i2;
  OOC_SSA__Add((void*)(OOC_INT32)&newList, (OOC_SSA__Instr)i1);
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l8;
  i1=i2;
  goto l3_loop;
l8:
  i1 = (OOC_INT32)newList;
  *(OOC_INT32*)((_check_pointer(i0, 45315))+8) = i1;
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_GetEnter(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45448))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 45493))+36);
  i1 = i1!=4;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45541))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 45493))+36);
  i1 = i1!=4;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SSA__Instr)i0;
  ;
}

void OOC_SSA__ProcBlockDesc_Destroy(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr nextInstr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd nextOpnd;
  OOC_SSA__Result res;
  OOC_SSA__Result nextResult;
  OOC_INT32 i;

  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45879))+8);
  i2 = i1!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i1;
  if (!i2) goto l27;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45942))+28);
  nextInstr = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 45969))+36);
  i3 = i3!=73;
  if (!i3) goto l22;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46105))+24);
  opnd = (OOC_SSA__Opnd)i3;
  i4 = i3!=(OOC_INT32)0;
  if (!i4) goto l13;
l8_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 46172))+8);
  nextOpnd = (OOC_SSA__Opnd)i4;
  *(OOC_INT32*)(_check_pointer(i3, 46197)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46224))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46256))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46285))+16) = (OOC_INT32)0;
  opnd = (OOC_SSA__Opnd)i4;
  i3 = i4!=(OOC_INT32)0;
  if (!i3) goto l13;
  i3=i4;
  goto l8_loop;
l13:
  res = (OOC_SSA__Result)i1;
  i3 = i1!=(OOC_INT32)0;
  if (!i3) goto l21;
  i3=i1;
l16_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 46430));
  nextResult = (OOC_SSA__Result)i4;
  *(OOC_INT32*)(_check_pointer(i3, 46456)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46489))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46517))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46547))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i3, 46574))+20) = 0;
  res = (OOC_SSA__Result)i4;
  i3 = i4!=(OOC_INT32)0;
  if (!i3) goto l21;
  i3=i4;
  goto l16_loop;
l21:
  *(OOC_INT32*)((_check_pointer(i1, 46652))+24) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 46683))+28) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 46715))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 46747))+40) = 0;
l22:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l27;
  i1=i2;
  goto l3_loop;
l27:
  *(OOC_INT32*)(_check_pointer(i0, 46815)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 46843))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 46870))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 46895))+12) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 46920))+16) = (OOC_INT32)0;
  i = 0;
  i1=0;
l28_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 46990))+24)+(_check_index(i1, 18, OOC_UINT32, 46999))*4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l31;
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 47025))+24)+(_check_index(i1, 18, OOC_UINT32, 47034))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 47025))+24)+(_check_index(i1, 18, OOC_UINT32, 47034))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 47037)))), ADT_Dictionary__DictionaryDesc_Destroy)),ADT_Dictionary__DictionaryDesc_Destroy)((ADT_Dictionary__Dictionary)i3);
  *(OOC_INT32*)(((_check_pointer(i0, 47051))+24)+(_check_index(i1, 18, OOC_UINT32, 47060))*4) = (OOC_INT32)0;
l31:
  i1 = i1+1;
  i = i1;
  i2 = i1<=17;
  if (i2) goto l28_loop;
l35:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47102))+96);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l38;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47130))+96);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47130))+96);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47137)))), ADT_Dictionary__DictionaryDesc_Destroy)),ADT_Dictionary__DictionaryDesc_Destroy)((ADT_Dictionary__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 47151))+96) = (OOC_INT32)0;
l38:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47186))+100);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l41;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47214))+100);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47214))+100);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47221)))), ADT_Dictionary__DictionaryDesc_Destroy)),ADT_Dictionary__DictionaryDesc_Destroy)((ADT_Dictionary__Dictionary)i2);
  *(OOC_INT32*)((_check_pointer(i0, 47235))+100) = (OOC_INT32)0;
l41:
  return;
  ;
}

void OOC_OOC_SSA_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Object_BigInt__NewInt(0);
  OOC_SSA__nil = (Object_BigInt__BigInt)i0;
  return;
  ;
}

/* --- */
