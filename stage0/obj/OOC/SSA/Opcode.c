#include "OOC/SSA/Opcode.d"
#include "__oo2c.h"

OOC_CHAR8 OOC_SSA_Opcode__IsSigned(OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = subclass;
  i1 = 1<=i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i0<=4;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Opcode__IsUnsigned(OOC_INT8 subclass) {
  register OOC_INT32 i0,i1;

  i0 = subclass;
  i1 = 5<=i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i0<=8;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Opcode__ConvDiffersFromCast(OOC_INT8 from, OOC_INT8 to) {
  register OOC_INT32 i0,i1;

  i0 = from;
  i1 = to;
  return ((i0<10)!=(i1<10));
  ;
}

void OOC_SSA_Opcode__GetSubclassName(OOC_INT8 subclass, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0;
  OOC_CHAR8 scstr[16];

  i0 = subclass;
  switch (i0) {
  case 0:
    _copy_8("none",(OOC_INT32)scstr,16);
    goto l15;
  case 1:
    _copy_8("i8",(OOC_INT32)scstr,16);
    goto l15;
  case 2:
    _copy_8("i16",(OOC_INT32)scstr,16);
    goto l15;
  case 3:
    _copy_8("i32",(OOC_INT32)scstr,16);
    goto l15;
  case 4:
    _copy_8("i64",(OOC_INT32)scstr,16);
    goto l15;
  case 5:
    _copy_8("u8",(OOC_INT32)scstr,16);
    goto l15;
  case 6:
    _copy_8("u16",(OOC_INT32)scstr,16);
    goto l15;
  case 7:
    _copy_8("u32",(OOC_INT32)scstr,16);
    goto l15;
  case 8:
    _copy_8("u64",(OOC_INT32)scstr,16);
    goto l15;
  case 9:
    _copy_8("adr",(OOC_INT32)scstr,16);
    goto l15;
  case 10:
    _copy_8("r32",(OOC_INT32)scstr,16);
    goto l15;
  case 11:
    _copy_8("r64",(OOC_INT32)scstr,16);
    goto l15;
  default:
    _failed_case(i0, 28967);
    goto l15;
  }
l15:
  _copy_8((OOC_INT32)scstr,(OOC_INT32)name,name_0d);
  return;
  ;
}

void OOC_SSA_Opcode__GetName(OOC_INT8 _class, OOC_INT8 subclass, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 cstr[32];
  OOC_CHAR8 scstr[32];

  i0 = _class;
  switch (i0) {
  case 0:
    _copy_8("const",(OOC_INT32)cstr,32);
    goto l79;
  case 1:
    _copy_8("declref",(OOC_INT32)cstr,32);
    goto l79;
  case 2:
    _copy_8("typeref",(OOC_INT32)cstr,32);
    goto l79;
  case 3:
    _copy_8("address",(OOC_INT32)cstr,32);
    goto l79;
  case 4:
    _copy_8("enter",(OOC_INT32)cstr,32);
    goto l79;
  case 5:
    _copy_8("select",(OOC_INT32)cstr,32);
    goto l79;
  case 6:
    _copy_8("collect",(OOC_INT32)cstr,32);
    goto l79;
  case 74:
    _copy_8("labels",(OOC_INT32)cstr,32);
    goto l79;
  case 7:
    _copy_8("return",(OOC_INT32)cstr,32);
    goto l79;
  case 8:
    _copy_8("select-return",(OOC_INT32)cstr,32);
    goto l79;
  case 9:
    _copy_8("exit",(OOC_INT32)cstr,32);
    goto l79;
  case 10:
    _copy_8("loop-start",(OOC_INT32)cstr,32);
    goto l79;
  case 11:
    _copy_8("loop-end",(OOC_INT32)cstr,32);
    goto l79;
  case 12:
    _copy_8("get",(OOC_INT32)cstr,32);
    goto l79;
  case 13:
    _copy_8("set",(OOC_INT32)cstr,32);
    goto l79;
  case 14:
    _copy_8("copy",(OOC_INT32)cstr,32);
    goto l79;
  case 15:
    _copy_8("copy-string",(OOC_INT32)cstr,32);
    goto l79;
  case 16:
    _copy_8("cmp-string",(OOC_INT32)cstr,32);
    goto l79;
  case 17:
    _copy_8("concat",(OOC_INT32)cstr,32);
    goto l79;
  case 18:
    _copy_8("move-block",(OOC_INT32)cstr,32);
    goto l79;
  case 56:
    _copy_8("get-length-heap",(OOC_INT32)cstr,32);
    goto l79;
  case 57:
    _copy_8("get-length-param",(OOC_INT32)cstr,32);
    goto l79;
  case 58:
    _copy_8("copy-parameter",(OOC_INT32)cstr,32);
    goto l79;
  case 59:
    _copy_8("new-object",(OOC_INT32)cstr,32);
    goto l79;
  case 60:
    _copy_8("new-block",(OOC_INT32)cstr,32);
    goto l79;
  case 61:
    _copy_8("type-tag",(OOC_INT32)cstr,32);
    goto l79;
  case 62:
    _copy_8("type-test",(OOC_INT32)cstr,32);
    goto l79;
  case 63:
    _copy_8("tb-proc-address",(OOC_INT32)cstr,32);
    goto l79;
  case 19:
    _copy_8("add",(OOC_INT32)cstr,32);
    goto l79;
  case 20:
    _copy_8("subtract",(OOC_INT32)cstr,32);
    goto l79;
  case 21:
    _copy_8("negate",(OOC_INT32)cstr,32);
    goto l79;
  case 22:
    _copy_8("multiply",(OOC_INT32)cstr,32);
    goto l79;
  case 23:
    _copy_8("divide",(OOC_INT32)cstr,32);
    goto l79;
  case 24:
    _copy_8("modulo",(OOC_INT32)cstr,32);
    goto l79;
  case 25:
    _copy_8("eql",(OOC_INT32)cstr,32);
    goto l79;
  case 26:
    _copy_8("neq",(OOC_INT32)cstr,32);
    goto l79;
  case 27:
    _copy_8("lss",(OOC_INT32)cstr,32);
    goto l79;
  case 28:
    _copy_8("leq",(OOC_INT32)cstr,32);
    goto l79;
  case 29:
    _copy_8("gtr",(OOC_INT32)cstr,32);
    goto l79;
  case 30:
    _copy_8("geq",(OOC_INT32)cstr,32);
    goto l79;
  case 31:
    _copy_8("and",(OOC_INT32)cstr,32);
    goto l79;
  case 32:
    _copy_8("or",(OOC_INT32)cstr,32);
    goto l79;
  case 33:
    _copy_8("not",(OOC_INT32)cstr,32);
    goto l79;
  case 34:
    _copy_8("logical-and",(OOC_INT32)cstr,32);
    goto l79;
  case 35:
    _copy_8("logical-or",(OOC_INT32)cstr,32);
    goto l79;
  case 36:
    _copy_8("logical-xor",(OOC_INT32)cstr,32);
    goto l79;
  case 37:
    _copy_8("logical-complement",(OOC_INT32)cstr,32);
    goto l79;
  case 38:
    _copy_8("logical-subtr",(OOC_INT32)cstr,32);
    goto l79;
  case 39:
    _copy_8("set-bit",(OOC_INT32)cstr,32);
    goto l79;
  case 40:
    _copy_8("clear-bit",(OOC_INT32)cstr,32);
    goto l79;
  case 41:
    _copy_8("type-cast",(OOC_INT32)cstr,32);
    goto l79;
  case 42:
    _copy_8("type-conv",(OOC_INT32)cstr,32);
    goto l79;
  case 43:
    _copy_8("set-member",(OOC_INT32)cstr,32);
    goto l79;
  case 44:
    _copy_8("set-range",(OOC_INT32)cstr,32);
    goto l79;
  case 45:
    _copy_8("abs",(OOC_INT32)cstr,32);
    goto l79;
  case 46:
    _copy_8("shift-left",(OOC_INT32)cstr,32);
    goto l79;
  case 47:
    _copy_8("shift-right",(OOC_INT32)cstr,32);
    goto l79;
  case 48:
    _copy_8("ash",(OOC_INT32)cstr,32);
    goto l79;
  case 49:
    _copy_8("cap",(OOC_INT32)cstr,32);
    goto l79;
  case 50:
    _copy_8("entier",(OOC_INT32)cstr,32);
    goto l79;
  case 51:
    _copy_8("indexed",(OOC_INT32)cstr,32);
    goto l79;
  case 52:
    _copy_8("lsh",(OOC_INT32)cstr,32);
    goto l79;
  case 53:
    _copy_8("rot",(OOC_INT32)cstr,32);
    goto l79;
  case 54:
    _copy_8("odd",(OOC_INT32)cstr,32);
    goto l79;
  case 55:
    _copy_8("call",(OOC_INT32)cstr,32);
    goto l79;
  case 64:
    _copy_8("assert",(OOC_INT32)cstr,32);
    goto l79;
  case 65:
    _copy_8("halt",(OOC_INT32)cstr,32);
    goto l79;
  case 66:
    _copy_8("check-index",(OOC_INT32)cstr,32);
    goto l79;
  case 67:
    _copy_8("check-pointer",(OOC_INT32)cstr,32);
    goto l79;
  case 68:
    _copy_8("type-guard",(OOC_INT32)cstr,32);
    goto l79;
  case 69:
    _copy_8("failed-case",(OOC_INT32)cstr,32);
    goto l79;
  case 70:
    _copy_8("failed-with",(OOC_INT32)cstr,32);
    goto l79;
  case 71:
    _copy_8("failed-type-assert",(OOC_INT32)cstr,32);
    goto l79;
  case 72:
    _copy_8("select-exception",(OOC_INT32)cstr,32);
    goto l79;
  case 73:
    _copy_8("preloaded-var",(OOC_INT32)cstr,32);
    goto l79;
  case 75:
    _copy_8("dgate",(OOC_INT32)cstr,32);
    goto l79;
  default:
    _failed_case(i0, 29656);
    goto l79;
  }
l79:
  i0 = subclass;
  i1 = i0!=0;
  _copy_8((OOC_INT32)cstr,(OOC_INT32)name,name_0d);
  if (!i1) goto l82;
  OOC_SSA_Opcode__GetSubclassName(i0, (void*)(OOC_INT32)scstr, 32);
  Strings__Append("-", 2, (void*)(OOC_INT32)name, name_0d);
  Strings__Append((void*)(OOC_INT32)scstr, 32, (void*)(OOC_INT32)name, name_0d);
l82:
  return;
  ;
}

OOC_INT8 OOC_SSA_Opcode__TypeToSubclass(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32657)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33383)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33430)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33478)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33530)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l11;
  Log__Type("++ Unknown type in TypeToSubclass", 34, (void*)i0);
  _assert(OOC_FALSE, 127, 33649);
  goto l39;
l11:
  return 9;
  goto l39;
l13:
  return 9;
  goto l39;
l15:
  return 0;
  goto l39;
l17:
  return 0;
  goto l39;
l19:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 32692))+32);
  switch (i0) {
  case 15:
    return 0;
    goto l39;
  case 1:
    return 5;
    goto l39;
  case 2:
    return 6;
    goto l39;
  case 0:
    return 5;
    goto l39;
  case 3:
    return 1;
    goto l39;
  case 4:
    return 2;
    goto l39;
  case 5:
    return 3;
    goto l39;
  case 6:
    return 4;
    goto l39;
  case 7:
    return 10;
    goto l39;
  case 8:
    return 11;
    goto l39;
  case 9:
    return 7;
    goto l39;
  case 10:
    return 5;
    goto l39;
  case 11:
    return 9;
    goto l39;
  case 12:
    return 9;
    goto l39;
  case 13:
    return 9;
    goto l39;
  case 14:
    return 9;
    goto l39;
  default:
    _failed_case(i0, 32683);
    goto l39;
  }
l39:
  _failed_function(32592); return 0;
  ;
}

void OOC_OOC_SSA_Opcode_init(void) {

  return;
  ;
}

/* --- */
