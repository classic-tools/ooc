#include <OOC/Scanner/Symbol.d>
#include <__oo2c.h>

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
  _copy_8((const void*)"",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(i0, 78, OOC_UINT16, 3373))*13)),13);
  _copy_8((const void*)"",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i0, 78, OOC_UINT16, 3398))*10)),10);
  i0 = i0+1;
  OOC_Scanner_Symbol__i = i0;
  i1 = i0<=77;
  if (i1) goto l1_loop;
l5:
  _copy_8((const void*)"times",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(1, 78, OOC_UINT8, 3421))*13)),13);
  _copy_8((const void*)"*",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(1, 78, OOC_UINT8, 3455))*10)),10);
  _copy_8((const void*)"slash",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(2, 78, OOC_UINT8, 3477))*13)),13);
  _copy_8((const void*)"/",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(2, 78, OOC_UINT8, 3511))*10)),10);
  _copy_8((const void*)"div",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(3, 78, OOC_UINT8, 3533))*13)),13);
  _copy_8((const void*)"DIV",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(3, 78, OOC_UINT8, 3563))*10)),10);
  _copy_8((const void*)"mod",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(4, 78, OOC_UINT8, 3585))*13)),13);
  _copy_8((const void*)"MOD",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(4, 78, OOC_UINT8, 3615))*10)),10);
  _copy_8((const void*)"and",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(5, 78, OOC_UINT8, 3637))*13)),13);
  _copy_8((const void*)"&",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(5, 78, OOC_UINT8, 3667))*10)),10);
  _copy_8((const void*)"plus",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(6, 78, OOC_UINT8, 3687))*13)),13);
  _copy_8((const void*)"+",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(6, 78, OOC_UINT8, 3719))*10)),10);
  _copy_8((const void*)"minus",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(7, 78, OOC_UINT8, 3740))*13)),13);
  _copy_8((const void*)"-",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(7, 78, OOC_UINT8, 3774))*10)),10);
  _copy_8((const void*)"or",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(8, 78, OOC_UINT8, 3796))*13)),13);
  _copy_8((const void*)"OR",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(8, 78, OOC_UINT8, 3824))*10)),10);
  _copy_8((const void*)"eql",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(9, 78, OOC_UINT8, 3844))*13)),13);
  _copy_8((const void*)"=",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(9, 78, OOC_UINT8, 3874))*10)),10);
  _copy_8((const void*)"neq",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(10, 78, OOC_UINT8, 3894))*13)),13);
  _copy_8((const void*)"#",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(10, 78, OOC_UINT8, 3924))*10)),10);
  _copy_8((const void*)"lss",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(11, 78, OOC_UINT8, 3944))*13)),13);
  _copy_8((const void*)"<",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(11, 78, OOC_UINT8, 3974))*10)),10);
  _copy_8((const void*)"leq",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(12, 78, OOC_UINT8, 3994))*13)),13);
  _copy_8((const void*)"<=",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(12, 78, OOC_UINT8, 4024))*10)),10);
  _copy_8((const void*)"gtr",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(13, 78, OOC_UINT8, 4045))*13)),13);
  _copy_8((const void*)">",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(13, 78, OOC_UINT8, 4075))*10)),10);
  _copy_8((const void*)"geq",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(14, 78, OOC_UINT8, 4095))*13)),13);
  _copy_8((const void*)">=",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(14, 78, OOC_UINT8, 4125))*10)),10);
  _copy_8((const void*)"in",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(15, 78, OOC_UINT8, 4146))*13)),13);
  _copy_8((const void*)"IN",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(15, 78, OOC_UINT8, 4174))*10)),10);
  _copy_8((const void*)"is",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(16, 78, OOC_UINT8, 4194))*13)),13);
  _copy_8((const void*)"IS",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(16, 78, OOC_UINT8, 4222))*10)),10);
  _copy_8((const void*)"arrow",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(17, 78, OOC_UINT8, 4242))*13)),13);
  _copy_8((const void*)"^",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(17, 78, OOC_UINT8, 4276))*10)),10);
  _copy_8((const void*)"period",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(18, 78, OOC_UINT8, 4298))*13)),13);
  _copy_8((const void*)".",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(18, 78, OOC_UINT8, 4334))*10)),10);
  _copy_8((const void*)"comma",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(19, 78, OOC_UINT8, 4357))*13)),13);
  _copy_8((const void*)",",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(19, 78, OOC_UINT8, 4391))*10)),10);
  _copy_8((const void*)"colon",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(20, 78, OOC_UINT8, 4413))*13)),13);
  _copy_8((const void*)":",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(20, 78, OOC_UINT8, 4447))*10)),10);
  _copy_8((const void*)"upto",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(21, 78, OOC_UINT8, 4469))*13)),13);
  _copy_8((const void*)"..",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(21, 78, OOC_UINT8, 4501))*10)),10);
  _copy_8((const void*)"rParen",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(22, 78, OOC_UINT8, 4523))*13)),13);
  _copy_8((const void*)")",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(22, 78, OOC_UINT8, 4559))*10)),10);
  _copy_8((const void*)"rBrak",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(23, 78, OOC_UINT8, 4582))*13)),13);
  _copy_8((const void*)"]",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(23, 78, OOC_UINT8, 4616))*10)),10);
  _copy_8((const void*)"rBrace",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(24, 78, OOC_UINT8, 4638))*13)),13);
  _copy_8((const void*)"}",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(24, 78, OOC_UINT8, 4674))*10)),10);
  _copy_8((const void*)"of",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(25, 78, OOC_UINT8, 4697))*13)),13);
  _copy_8((const void*)"OF",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(25, 78, OOC_UINT8, 4725))*10)),10);
  _copy_8((const void*)"then",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(26, 78, OOC_UINT8, 4745))*13)),13);
  _copy_8((const void*)"THEN",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(26, 78, OOC_UINT8, 4777))*10)),10);
  _copy_8((const void*)"do",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(27, 78, OOC_UINT8, 4801))*13)),13);
  _copy_8((const void*)"DO",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(27, 78, OOC_UINT8, 4829))*10)),10);
  _copy_8((const void*)"to",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(28, 78, OOC_UINT8, 4849))*13)),13);
  _copy_8((const void*)"TO",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(28, 78, OOC_UINT8, 4877))*10)),10);
  _copy_8((const void*)"by",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(29, 78, OOC_UINT8, 4897))*13)),13);
  _copy_8((const void*)"BY",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(29, 78, OOC_UINT8, 4925))*10)),10);
  _copy_8((const void*)"lParen",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(30, 78, OOC_UINT8, 4945))*13)),13);
  _copy_8((const void*)"(",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(30, 78, OOC_UINT8, 4981))*10)),10);
  _copy_8((const void*)"lBrak",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(31, 78, OOC_UINT8, 5004))*13)),13);
  _copy_8((const void*)"[",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(31, 78, OOC_UINT8, 5038))*10)),10);
  _copy_8((const void*)"lBrace",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(32, 78, OOC_UINT8, 5060))*13)),13);
  _copy_8((const void*)"{",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(32, 78, OOC_UINT8, 5096))*10)),10);
  _copy_8((const void*)"not",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(33, 78, OOC_UINT8, 5119))*13)),13);
  _copy_8((const void*)"~",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(33, 78, OOC_UINT8, 5149))*10)),10);
  _copy_8((const void*)"becomes",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(34, 78, OOC_UINT8, 5169))*13)),13);
  _copy_8((const void*)":=",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(34, 78, OOC_UINT8, 5207))*10)),10);
  _copy_8((const void*)"number10",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(35, 78, OOC_UINT8, 5232))*13)),13);
  _copy_8((const void*)"number16",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(36, 78, OOC_UINT8, 5264))*13)),13);
  _copy_8((const void*)"number16X",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(37, 78, OOC_UINT8, 5296))*13)),13);
  _copy_8((const void*)"numberExpE",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(38, 78, OOC_UINT8, 5330))*13)),13);
  _copy_8((const void*)"numberExpD",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(39, 78, OOC_UINT8, 5366))*13)),13);
  _copy_8((const void*)"nil",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(40, 78, OOC_UINT8, 5402))*13)),13);
  _copy_8((const void*)"NIL",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(40, 78, OOC_UINT8, 5432))*10)),10);
  _copy_8((const void*)"stringSingle",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(41, 78, OOC_UINT8, 5454))*13)),13);
  _copy_8((const void*)"stringDouble",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(42, 78, OOC_UINT8, 5494))*13)),13);
  _copy_8((const void*)"ident",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(43, 78, OOC_UINT8, 5534))*13)),13);
  _copy_8((const void*)"semicolon",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(44, 78, OOC_UINT8, 5560))*13)),13);
  _copy_8((const void*)";",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(44, 78, OOC_UINT8, 5602))*10)),10);
  _copy_8((const void*)"bar",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(45, 78, OOC_UINT8, 5628))*13)),13);
  _copy_8((const void*)"|",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(45, 78, OOC_UINT8, 5658))*10)),10);
  _copy_8((const void*)"end",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(46, 78, OOC_UINT8, 5678))*13)),13);
  _copy_8((const void*)"END",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(46, 78, OOC_UINT8, 5708))*10)),10);
  _copy_8((const void*)"else",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(47, 78, OOC_UINT8, 5730))*13)),13);
  _copy_8((const void*)"ELSE",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(47, 78, OOC_UINT8, 5762))*10)),10);
  _copy_8((const void*)"elsif",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(48, 78, OOC_UINT8, 5786))*13)),13);
  _copy_8((const void*)"ELSIF",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(48, 78, OOC_UINT8, 5820))*10)),10);
  _copy_8((const void*)"until",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(49, 78, OOC_UINT8, 5846))*13)),13);
  _copy_8((const void*)"UNTIL",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(49, 78, OOC_UINT8, 5880))*10)),10);
  _copy_8((const void*)"if",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(50, 78, OOC_UINT8, 5906))*13)),13);
  _copy_8((const void*)"IF",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(50, 78, OOC_UINT8, 5934))*10)),10);
  _copy_8((const void*)"case",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(51, 78, OOC_UINT8, 5954))*13)),13);
  _copy_8((const void*)"CASE",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(51, 78, OOC_UINT8, 5986))*10)),10);
  _copy_8((const void*)"while",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(52, 78, OOC_UINT8, 6010))*13)),13);
  _copy_8((const void*)"WHILE",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(52, 78, OOC_UINT8, 6044))*10)),10);
  _copy_8((const void*)"repeat",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(53, 78, OOC_UINT8, 6070))*13)),13);
  _copy_8((const void*)"REPEAT",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(53, 78, OOC_UINT8, 6106))*10)),10);
  _copy_8((const void*)"loop",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(54, 78, OOC_UINT8, 6134))*13)),13);
  _copy_8((const void*)"LOOP",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(54, 78, OOC_UINT8, 6166))*10)),10);
  _copy_8((const void*)"for",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(55, 78, OOC_UINT8, 6190))*13)),13);
  _copy_8((const void*)"FOR",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(55, 78, OOC_UINT8, 6220))*10)),10);
  _copy_8((const void*)"with",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(56, 78, OOC_UINT8, 6242))*13)),13);
  _copy_8((const void*)"WITH",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(56, 78, OOC_UINT8, 6274))*10)),10);
  _copy_8((const void*)"exit",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(57, 78, OOC_UINT8, 6298))*13)),13);
  _copy_8((const void*)"EXIT",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(57, 78, OOC_UINT8, 6330))*10)),10);
  _copy_8((const void*)"return",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(58, 78, OOC_UINT8, 6354))*13)),13);
  _copy_8((const void*)"RETURN",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(58, 78, OOC_UINT8, 6390))*10)),10);
  _copy_8((const void*)"array",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(59, 78, OOC_UINT8, 6418))*13)),13);
  _copy_8((const void*)"ARRAY",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(59, 78, OOC_UINT8, 6452))*10)),10);
  _copy_8((const void*)"record",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(60, 78, OOC_UINT8, 6478))*13)),13);
  _copy_8((const void*)"RECORD",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(60, 78, OOC_UINT8, 6514))*10)),10);
  _copy_8((const void*)"pointer",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(61, 78, OOC_UINT8, 6542))*13)),13);
  _copy_8((const void*)"POINTER",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(61, 78, OOC_UINT8, 6580))*10)),10);
  _copy_8((const void*)"begin",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(62, 78, OOC_UINT8, 6610))*13)),13);
  _copy_8((const void*)"BEGIN",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(62, 78, OOC_UINT8, 6644))*10)),10);
  _copy_8((const void*)"const",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(63, 78, OOC_UINT8, 6670))*13)),13);
  _copy_8((const void*)"CONST",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(63, 78, OOC_UINT8, 6704))*10)),10);
  _copy_8((const void*)"type",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(64, 78, OOC_UINT8, 6730))*13)),13);
  _copy_8((const void*)"TYPE",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(64, 78, OOC_UINT8, 6762))*10)),10);
  _copy_8((const void*)"var",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(65, 78, OOC_UINT8, 6786))*13)),13);
  _copy_8((const void*)"VAR",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(65, 78, OOC_UINT8, 6816))*10)),10);
  _copy_8((const void*)"procedure",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(66, 78, OOC_UINT8, 6838))*13)),13);
  _copy_8((const void*)"PROCEDURE",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(66, 78, OOC_UINT8, 6880))*10)),10);
  _copy_8((const void*)"import",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(67, 78, OOC_UINT8, 6914))*13)),13);
  _copy_8((const void*)"IMPORT",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(67, 78, OOC_UINT8, 6950))*10)),10);
  _copy_8((const void*)"module",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(68, 78, OOC_UINT8, 6978))*13)),13);
  _copy_8((const void*)"MODULE",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(68, 78, OOC_UINT8, 7014))*10)),10);
  _copy_8((const void*)"endOfFile",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(69, 78, OOC_UINT8, 7042))*13)),13);
  _copy_8((const void*)"invalid",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(70, 78, OOC_UINT8, 7076))*13)),13);
  _copy_8((const void*)"threeDots",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(73, 78, OOC_UINT8, 7106))*13)),13);
  _copy_8((const void*)"...",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(73, 78, OOC_UINT8, 7148))*10)),10);
  _copy_8((const void*)"pragmaStart",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(71, 78, OOC_UINT8, 7176))*13)),13);
  _copy_8((const void*)"<*",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(71, 78, OOC_UINT8, 7222))*10)),10);
  _copy_8((const void*)"pragmaEnd",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(72, 78, OOC_UINT8, 7251))*13)),13);
  _copy_8((const void*)"*>",(void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(72, 78, OOC_UINT8, 7293))*10)),10);
  _copy_8((const void*)"comment",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(74, 78, OOC_UINT8, 7320))*13)),13);
  _copy_8((const void*)"docComment",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(75, 78, OOC_UINT8, 7350))*13)),13);
  _copy_8((const void*)"pragma",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(76, 78, OOC_UINT8, 7386))*13)),13);
  _copy_8((const void*)"whitespace",(void*)((OOC_INT32)OOC_Scanner_Symbol__name+((_check_index(77, 78, OOC_UINT8, 7414))*13)),13);
  return;
  ;
}

/* --- */
