#include "OOC/Scanner/Symbol.d"
#include "__oo2c.h"

OOC_CHAR8 OOC_Scanner_Symbol__IsKeyword(OOC_INT8 id) {
  register OOC_INT32 i0,i1;

  i0 = id;
  i1 = i0==3;
  if (i1) goto l3;
  i1 = i0==4;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = i0==15;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i1 = i0==16;
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==40;
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i1 = i0==8;
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l27;
  i1 = 25<=i0;
  if (i1) goto l25;
  i1=OOC_FALSE;
  goto l29;
l25:
  i1 = i0<=29;
  
  goto l29;
l27:
  i1=OOC_TRUE;
l29:
  if (i1) goto l35;
  i1 = 46<=i0;
  if (i1) goto l33;
  i0=OOC_FALSE;
  goto l36;
l33:
  i0 = i0<=68;
  
  goto l36;
l35:
  i0=OOC_TRUE;
l36:
  return i0;
  ;
}

OOC_CHAR8 OOC_Scanner_Symbol__IsWhitespace(OOC_INT8 id) {
  register OOC_INT32 i0,i1;

  i0 = id;
  i1 = i0>=74;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i0<78;
  
l4:
  return i0;
  ;
}

void OOC_OOC_Scanner_Symbol_init(void) {
  register OOC_INT32 i0,i1;

  OOC_Scanner_Symbol__i = 0;
  i0=0;
l1_loop:
  _copy_8("",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(i0, 78, OOC_UINT16, 3373))*13)),13);
  _copy_8("",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i0, 78, OOC_UINT16, 3398))*10)),10);
  i0 = i0+1;
  OOC_Scanner_Symbol__i = i0;
  i1 = i0<=77;
  if (i1) goto l1_loop;
l5:
  _copy_8("times",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(1, 78, OOC_UINT8, 3421))*13)),13);
  _copy_8("*",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(1, 78, OOC_UINT8, 3455))*10)),10);
  _copy_8("slash",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(2, 78, OOC_UINT8, 3477))*13)),13);
  _copy_8("/",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(2, 78, OOC_UINT8, 3511))*10)),10);
  _copy_8("div",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(3, 78, OOC_UINT8, 3533))*13)),13);
  _copy_8("DIV",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(3, 78, OOC_UINT8, 3563))*10)),10);
  _copy_8("mod",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(4, 78, OOC_UINT8, 3585))*13)),13);
  _copy_8("MOD",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(4, 78, OOC_UINT8, 3615))*10)),10);
  _copy_8("and",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(5, 78, OOC_UINT8, 3637))*13)),13);
  _copy_8("&",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(5, 78, OOC_UINT8, 3667))*10)),10);
  _copy_8("plus",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(6, 78, OOC_UINT8, 3687))*13)),13);
  _copy_8("+",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(6, 78, OOC_UINT8, 3719))*10)),10);
  _copy_8("minus",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(7, 78, OOC_UINT8, 3740))*13)),13);
  _copy_8("-",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(7, 78, OOC_UINT8, 3774))*10)),10);
  _copy_8("or",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(8, 78, OOC_UINT8, 3796))*13)),13);
  _copy_8("OR",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(8, 78, OOC_UINT8, 3824))*10)),10);
  _copy_8("eql",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(9, 78, OOC_UINT8, 3844))*13)),13);
  _copy_8("=",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(9, 78, OOC_UINT8, 3874))*10)),10);
  _copy_8("neq",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(10, 78, OOC_UINT8, 3894))*13)),13);
  _copy_8("#",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(10, 78, OOC_UINT8, 3924))*10)),10);
  _copy_8("lss",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(11, 78, OOC_UINT8, 3944))*13)),13);
  _copy_8("<",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(11, 78, OOC_UINT8, 3974))*10)),10);
  _copy_8("leq",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(12, 78, OOC_UINT8, 3994))*13)),13);
  _copy_8("<=",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(12, 78, OOC_UINT8, 4024))*10)),10);
  _copy_8("gtr",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(13, 78, OOC_UINT8, 4045))*13)),13);
  _copy_8(">",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(13, 78, OOC_UINT8, 4075))*10)),10);
  _copy_8("geq",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(14, 78, OOC_UINT8, 4095))*13)),13);
  _copy_8(">=",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(14, 78, OOC_UINT8, 4125))*10)),10);
  _copy_8("in",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(15, 78, OOC_UINT8, 4146))*13)),13);
  _copy_8("IN",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(15, 78, OOC_UINT8, 4174))*10)),10);
  _copy_8("is",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(16, 78, OOC_UINT8, 4194))*13)),13);
  _copy_8("IS",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(16, 78, OOC_UINT8, 4222))*10)),10);
  _copy_8("arrow",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(17, 78, OOC_UINT8, 4242))*13)),13);
  _copy_8("^",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(17, 78, OOC_UINT8, 4276))*10)),10);
  _copy_8("period",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(18, 78, OOC_UINT8, 4298))*13)),13);
  _copy_8(".",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(18, 78, OOC_UINT8, 4334))*10)),10);
  _copy_8("comma",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(19, 78, OOC_UINT8, 4357))*13)),13);
  _copy_8(",",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(19, 78, OOC_UINT8, 4391))*10)),10);
  _copy_8("colon",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(20, 78, OOC_UINT8, 4413))*13)),13);
  _copy_8(":",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(20, 78, OOC_UINT8, 4447))*10)),10);
  _copy_8("upto",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(21, 78, OOC_UINT8, 4469))*13)),13);
  _copy_8("..",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(21, 78, OOC_UINT8, 4501))*10)),10);
  _copy_8("rParen",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(22, 78, OOC_UINT8, 4523))*13)),13);
  _copy_8(")",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(22, 78, OOC_UINT8, 4559))*10)),10);
  _copy_8("rBrak",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(23, 78, OOC_UINT8, 4582))*13)),13);
  _copy_8("]",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(23, 78, OOC_UINT8, 4616))*10)),10);
  _copy_8("rBrace",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(24, 78, OOC_UINT8, 4638))*13)),13);
  _copy_8("}",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(24, 78, OOC_UINT8, 4674))*10)),10);
  _copy_8("of",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(25, 78, OOC_UINT8, 4697))*13)),13);
  _copy_8("OF",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(25, 78, OOC_UINT8, 4725))*10)),10);
  _copy_8("then",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(26, 78, OOC_UINT8, 4745))*13)),13);
  _copy_8("THEN",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(26, 78, OOC_UINT8, 4777))*10)),10);
  _copy_8("do",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(27, 78, OOC_UINT8, 4801))*13)),13);
  _copy_8("DO",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(27, 78, OOC_UINT8, 4829))*10)),10);
  _copy_8("to",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(28, 78, OOC_UINT8, 4849))*13)),13);
  _copy_8("TO",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(28, 78, OOC_UINT8, 4877))*10)),10);
  _copy_8("by",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(29, 78, OOC_UINT8, 4897))*13)),13);
  _copy_8("BY",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(29, 78, OOC_UINT8, 4925))*10)),10);
  _copy_8("lParen",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(30, 78, OOC_UINT8, 4945))*13)),13);
  _copy_8("(",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(30, 78, OOC_UINT8, 4981))*10)),10);
  _copy_8("lBrak",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(31, 78, OOC_UINT8, 5004))*13)),13);
  _copy_8("[",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(31, 78, OOC_UINT8, 5038))*10)),10);
  _copy_8("lBrace",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(32, 78, OOC_UINT8, 5060))*13)),13);
  _copy_8("{",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(32, 78, OOC_UINT8, 5096))*10)),10);
  _copy_8("not",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(33, 78, OOC_UINT8, 5119))*13)),13);
  _copy_8("~",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(33, 78, OOC_UINT8, 5149))*10)),10);
  _copy_8("becomes",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(34, 78, OOC_UINT8, 5169))*13)),13);
  _copy_8(":=",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(34, 78, OOC_UINT8, 5207))*10)),10);
  _copy_8("number10",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(35, 78, OOC_UINT8, 5232))*13)),13);
  _copy_8("number16",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(36, 78, OOC_UINT8, 5264))*13)),13);
  _copy_8("number16X",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(37, 78, OOC_UINT8, 5296))*13)),13);
  _copy_8("numberExpE",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(38, 78, OOC_UINT8, 5330))*13)),13);
  _copy_8("numberExpD",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(39, 78, OOC_UINT8, 5366))*13)),13);
  _copy_8("nil",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(40, 78, OOC_UINT8, 5402))*13)),13);
  _copy_8("NIL",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(40, 78, OOC_UINT8, 5432))*10)),10);
  _copy_8("stringSingle",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(41, 78, OOC_UINT8, 5454))*13)),13);
  _copy_8("stringDouble",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(42, 78, OOC_UINT8, 5494))*13)),13);
  _copy_8("ident",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(43, 78, OOC_UINT8, 5534))*13)),13);
  _copy_8("semicolon",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(44, 78, OOC_UINT8, 5560))*13)),13);
  _copy_8(";",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(44, 78, OOC_UINT8, 5602))*10)),10);
  _copy_8("bar",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(45, 78, OOC_UINT8, 5628))*13)),13);
  _copy_8("|",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(45, 78, OOC_UINT8, 5658))*10)),10);
  _copy_8("end",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(46, 78, OOC_UINT8, 5678))*13)),13);
  _copy_8("END",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(46, 78, OOC_UINT8, 5708))*10)),10);
  _copy_8("else",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(47, 78, OOC_UINT8, 5730))*13)),13);
  _copy_8("ELSE",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(47, 78, OOC_UINT8, 5762))*10)),10);
  _copy_8("elsif",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(48, 78, OOC_UINT8, 5786))*13)),13);
  _copy_8("ELSIF",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(48, 78, OOC_UINT8, 5820))*10)),10);
  _copy_8("until",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(49, 78, OOC_UINT8, 5846))*13)),13);
  _copy_8("UNTIL",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(49, 78, OOC_UINT8, 5880))*10)),10);
  _copy_8("if",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(50, 78, OOC_UINT8, 5906))*13)),13);
  _copy_8("IF",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(50, 78, OOC_UINT8, 5934))*10)),10);
  _copy_8("case",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(51, 78, OOC_UINT8, 5954))*13)),13);
  _copy_8("CASE",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(51, 78, OOC_UINT8, 5986))*10)),10);
  _copy_8("while",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(52, 78, OOC_UINT8, 6010))*13)),13);
  _copy_8("WHILE",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(52, 78, OOC_UINT8, 6044))*10)),10);
  _copy_8("repeat",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(53, 78, OOC_UINT8, 6070))*13)),13);
  _copy_8("REPEAT",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(53, 78, OOC_UINT8, 6106))*10)),10);
  _copy_8("loop",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(54, 78, OOC_UINT8, 6134))*13)),13);
  _copy_8("LOOP",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(54, 78, OOC_UINT8, 6166))*10)),10);
  _copy_8("for",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(55, 78, OOC_UINT8, 6190))*13)),13);
  _copy_8("FOR",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(55, 78, OOC_UINT8, 6220))*10)),10);
  _copy_8("with",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(56, 78, OOC_UINT8, 6242))*13)),13);
  _copy_8("WITH",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(56, 78, OOC_UINT8, 6274))*10)),10);
  _copy_8("exit",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(57, 78, OOC_UINT8, 6298))*13)),13);
  _copy_8("EXIT",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(57, 78, OOC_UINT8, 6330))*10)),10);
  _copy_8("return",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(58, 78, OOC_UINT8, 6354))*13)),13);
  _copy_8("RETURN",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(58, 78, OOC_UINT8, 6390))*10)),10);
  _copy_8("array",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(59, 78, OOC_UINT8, 6418))*13)),13);
  _copy_8("ARRAY",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(59, 78, OOC_UINT8, 6452))*10)),10);
  _copy_8("record",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(60, 78, OOC_UINT8, 6478))*13)),13);
  _copy_8("RECORD",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(60, 78, OOC_UINT8, 6514))*10)),10);
  _copy_8("pointer",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(61, 78, OOC_UINT8, 6542))*13)),13);
  _copy_8("POINTER",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(61, 78, OOC_UINT8, 6580))*10)),10);
  _copy_8("begin",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(62, 78, OOC_UINT8, 6610))*13)),13);
  _copy_8("BEGIN",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(62, 78, OOC_UINT8, 6644))*10)),10);
  _copy_8("const",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(63, 78, OOC_UINT8, 6670))*13)),13);
  _copy_8("CONST",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(63, 78, OOC_UINT8, 6704))*10)),10);
  _copy_8("type",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(64, 78, OOC_UINT8, 6730))*13)),13);
  _copy_8("TYPE",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(64, 78, OOC_UINT8, 6762))*10)),10);
  _copy_8("var",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(65, 78, OOC_UINT8, 6786))*13)),13);
  _copy_8("VAR",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(65, 78, OOC_UINT8, 6816))*10)),10);
  _copy_8("procedure",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(66, 78, OOC_UINT8, 6838))*13)),13);
  _copy_8("PROCEDURE",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(66, 78, OOC_UINT8, 6880))*10)),10);
  _copy_8("import",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(67, 78, OOC_UINT8, 6914))*13)),13);
  _copy_8("IMPORT",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(67, 78, OOC_UINT8, 6950))*10)),10);
  _copy_8("module",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(68, 78, OOC_UINT8, 6978))*13)),13);
  _copy_8("MODULE",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(68, 78, OOC_UINT8, 7014))*10)),10);
  _copy_8("endOfFile",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(69, 78, OOC_UINT8, 7042))*13)),13);
  _copy_8("invalid",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(70, 78, OOC_UINT8, 7076))*13)),13);
  _copy_8("threeDots",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(73, 78, OOC_UINT8, 7106))*13)),13);
  _copy_8("...",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(73, 78, OOC_UINT8, 7148))*10)),10);
  _copy_8("pragmaStart",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(71, 78, OOC_UINT8, 7176))*13)),13);
  _copy_8("<*",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(71, 78, OOC_UINT8, 7222))*10)),10);
  _copy_8("pragmaEnd",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(72, 78, OOC_UINT8, 7251))*13)),13);
  _copy_8("*>",((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(72, 78, OOC_UINT8, 7293))*10)),10);
  _copy_8("comment",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(74, 78, OOC_UINT8, 7320))*13)),13);
  _copy_8("docComment",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(75, 78, OOC_UINT8, 7350))*13)),13);
  _copy_8("pragma",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(76, 78, OOC_UINT8, 7386))*13)),13);
  _copy_8("whitespace",((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(77, 78, OOC_UINT8, 7414))*13)),13);
  return;
  ;
}

/* --- */
