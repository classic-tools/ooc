#include <OOC/Scanner.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Scanner__ErrorContextDesc_GetTemplate(OOC_Scanner__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3763))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){67,111,109,109,101,110,116,32,110,111,116,32,99,108,111,115,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,99,104,97,114,97,99,116,101,114,32,48,36,123,99,104,97,114,95,99,111,100,101,125,88,32,105,110,32,115,116,114,105,110,103,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,114,105,110,103,32,110,111,116,32,101,110,100,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,116,32,119,105,116,104,105,110,32,99,111,109,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,115,121,109,98,111,108,32,96,36,123,115,121,109,95,115,116,114,105,110,103,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,101,120,112,111,110,101,110,116,32,102,111,114,109,97,116,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,99,105,112,104,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,116,32,119,105,116,104,105,110,32,112,114,97,103,109,97,0}),(void*)(OOC_INT32)t,128);
    goto l11;
  default:
    _failed_case(i1, 3755);
    goto l11;
  }
l11:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4268)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Scanner__ScanInput(OOC_Scanner_Builder__Builder builder, OOC_Config_Pragmas__Section defaultPragmas, OOC_UINT32 scanOptions) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_Scanner_InputBuffer__Buffer b;
  Msg__Msg lastError;
  OOC_Scanner_InputBuffer__CharArray chars;
  OOC_INT32 cpos;
  OOC_INT32 currLine;
  OOC_INT32 currLinePos;
  OOC_INT32 currLineTab;
  OOC_INT8 inputMode;
  OOC_CHAR8 eolIsCRLF;
  struct OOC_Scanner_Pragma__State pragma;
  OOC_INT32 cstart;
  OOC_INT32 startLine;
  OOC_INT32 startColumn;
  OOC_CHAR8 dummy;
  OOC_INT32 currColumn;
  OOC_INT32 sum;
  OOC_INT8 sym;
  Msg__StringPtr strPtr;
  OOC_INT32 i;
  auto void OOC_Scanner__ScanInput_Err(OOC_INT32 code);
  auto void OOC_Scanner__ScanInput_ErrPos(OOC_INT32 code, OOC_INT32 cpos);
  auto OOC_CHAR8 OOC_Scanner__ScanInput_NextBlock();
  auto void OOC_Scanner__ScanInput_EndOfLine(OOC_INT32 sizeEOL);
  auto void OOC_Scanner__ScanInput_Lookahead(OOC_INT32 len);
  auto OOC_CHAR8 OOC_Scanner__ScanInput_LookaheadChar();
  auto OOC_CHAR8 OOC_Scanner__ScanInput_CompareIdent(OOC_INT32 start, OOC_CHAR8 kw[], OOC_LEN kw_0d);
  auto void OOC_Scanner__ScanInput_SetCharAttrib(OOC_INT32 ch);
    
    void OOC_Scanner__ScanInput_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner__scannerContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6246))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6215)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = startLine;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6280)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = startColumn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6331)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6378))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6378))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6387)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      sym = 73;
      return;
      ;
    }

    
    void OOC_Scanner__ScanInput_ErrPos(OOC_INT32 code, OOC_INT32 cpos) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = code;
      OOC_Scanner__ScanInput_Err(i0);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6581))+8);
      i2 = cpos;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6552)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = currLinePos;
      i3 = currLineTab;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6615)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, ((i2-i1)+i3));
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_NextBlock() {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 oldOffset;
      OOC_CHAR8 res;

      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 6839))+8);
      oldOffset = i1;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6871)))), OOC_Scanner_InputBuffer__BufferDesc_NextBlock)),OOC_Scanner_InputBuffer__BufferDesc_NextBlock)((OOC_Scanner_InputBuffer__Buffer)i0);
      res = i0;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6902))+4);
      chars = (OOC_Scanner_InputBuffer__CharArray)i3;
      i3 = *(OOC_INT32*)((_check_pointer(i2, 6929))+8);
      i4 = cpos;
      cpos = (i4-(i3-i1));
      i3 = *(OOC_INT32*)((_check_pointer(i2, 6978))+8);
      i4 = cstart;
      cstart = (i4-(i3-i1));
      i2 = *(OOC_INT32*)((_check_pointer(i2, 7032))+8);
      i3 = currLinePos;
      currLinePos = (i3-(i2-i1));
      return i0;
      ;
    }

    
    void OOC_Scanner__ScanInput_EndOfLine(OOC_INT32 sizeEOL) {
      register OOC_INT32 i0,i1,i2;

      i0 = cpos;
      i1 = sizeEOL;
      i0 = i0+i1;
      i2 = currLine;
      cpos = i0;
      currLine = (i2+1);
      currLinePos = i0;
      currLineTab = 0;
      i0 = i1==2;
      if (!i0) goto l4;
      eolIsCRLF = 1u;
l4:
      return;
      ;
    }

    
    void OOC_Scanner__ScanInput_Lookahead(OOC_INT32 len) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i = 1;
      i0 = len;
      i1 = 1<=i0;
      if (!i1) goto l15;
      i1=1;
l3_loop:
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 7484);
      i3 = cpos;
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index((i3+i1), i4, OOC_UINT32, 7484)));
      i2 = i2==0u;
      if (i2) goto l6;
      i2=0u;
      goto l8;
l6:
      i2 = OOC_Scanner__ScanInput_NextBlock();
      i2 = !i2;
      
l8:
      if (!i2) goto l10;
      return;
l10:
      i1 = i1+1;
      i = i1;
      i2 = i1<=i0;
      if (i2) goto l3_loop;
l15:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_LookaheadChar() {
      register OOC_INT32 i0,i1,i2;

      OOC_Scanner__ScanInput_Lookahead(1);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 7699);
      i1 = cpos;
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 7699)));
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_CompareIdent(OOC_INT32 start, OOC_CHAR8 kw[], OOC_LEN kw_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 i;

      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(0, kw_0d, OOC_UINT32, 8060)));
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 8086);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = start;
      i3 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(0, kw_0d, OOC_UINT32, 8075)));
      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 8086)));
      i0 = i3==i0;
      
l5:
      if (i0) goto l7;
      i0=0;
      goto l17;
l7:
      i0 = (OOC_INT32)chars;
      i1 = start;
      i3=i1;i2=0;
l8_loop:
      i2 = i2+1;
      i = i2;
      i4 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i2, kw_0d, OOC_UINT32, 8060)));
      i3 = i3+1;
      i4 = i4!=0u;
      if (i4) goto l11;
      i4=0u;
      goto l13;
l11:
      i4 = _check_pointer(i0, 8086);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i2, kw_0d, OOC_UINT32, 8075)));
      i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 8086)));
      i4 = i6==i4;
      
l13:
      if (i4) goto l8_loop;
l16:
      i0 = i3-i1;
      
l17:
      i1 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i0, kw_0d, OOC_UINT32, 8143)));
      i1 = i1==0u;
      if (i1) goto l20;
      i0=0u;
      goto l21;
l20:
      i1 = start;
      i2 = cpos;
      i0 = (i1+i0)==i2;
      
l21:
      return i0;
      ;
    }

    
    void OOC_Scanner__ScanInput_SetCharAttrib(OOC_INT32 ch) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      Msg__StringPtr str;
      OOC_INT32 i;
      OOC_INT32 j;
      OOC_CHAR8 h;

      i0 = (OOC_INT32)RT0__NewObject(_td_Msg__StringPtr.baseTypes[0], 6);
      str = (Msg__StringPtr)i0;
      i = 0;
      i1=0;
l1_loop:
      i2 = ch;
      i3 = _mod(i2,16);
      i4 = i3<10;
      if (i4) goto l4;
      i4 = _check_pointer(i0, 8472);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8472))) = (i3+55);
      goto l5;
l4:
      i4 = _check_pointer(i0, 8413);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8413))) = (i3+48);
l5:
      i2 = i2>>4;
      ch = i2;
      i1 = i1+1;
      i = i1;
      i2 = i2==0;
      if (!i2) goto l1_loop;
l9:
      i2 = _check_pointer(i0, 8595);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 8595))) = 0u;
      j = 0;
      i1 = i1-1;
      i = i1;
      i2 = 0<i1;
      if (!i2) goto l17;
      i2=i1;i1=0;
l12_loop:
      i3 = _check_pointer(i0, 8675);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 8675)));
      h = i3;
      i4 = _check_pointer(i0, 8683);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 8693);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 8693)));
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8683))) = i6;
      i4 = _check_pointer(i0, 8701);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 8701))) = i3;
      i1 = i1+1;
      j = i1;
      i2 = i2-1;
      i = i2;
      i3 = i1<i2;
      if (i3) goto l12_loop;
l17:
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8769)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "char_code", 10, (Msg__StringPtr)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)builder;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8859));
  b = (OOC_Scanner_InputBuffer__Buffer)i1;
  lastError = (Msg__Msg)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8910))+4);
  chars = (OOC_Scanner_InputBuffer__CharArray)i1;
  cpos = 0;
  currLine = 0;
  currLinePos = 0;
  currLineTab = 0;
  inputMode = 0;
  eolIsCRLF = 0u;
  i1 = (OOC_INT32)&_td_OOC_Scanner_Pragma__State;
  i2 = (OOC_INT32)defaultPragmas;
  OOC_Scanner_Pragma__Init((void*)(OOC_INT32)&pragma, (RT0__Struct)i1, (OOC_Scanner_Builder__Builder)i0, (OOC_Config_Pragmas__Section)i2);
l1_loop:
  i0 = cpos;
  i2 = currLinePos;
  cstart = i0;
  i3 = currLine;
  i4 = currLineTab;
  startLine = i3;
  startColumn = ((i0-i2)+i4);
l2_loop:
  i0 = (OOC_INT32)chars;
  i2 = _check_pointer(i0, 9285);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = cpos;
  i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 9285)));
  switch (i2) {
  case 0u:
    i0 = (OOC_INT32)b;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9342)))), OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)),OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)((OOC_Scanner_InputBuffer__Buffer)i0, i4);
    if (i0) goto l7;
    cpos = (i4+1);
    goto l2_loop;
l7:
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    if (!i0) goto l2_loop;
    goto l25;
  case 10u:
    OOC_Scanner__ScanInput_EndOfLine(1);
    goto l2_loop;
  case 13u:
    i0 = _check_pointer(i0, 9613);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i4+1), i2, OOC_UINT32, 9613)));
    i0 = i0==0u;
    if (!i0) goto l16;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    dummy = i0;
l16:
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 9762);
    i2 = cpos;
    i3 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i2+1), i3, OOC_UINT32, 9762)));
    i0 = i0==10u;
    if (!i0) goto l18;
    goto l19;
l18:
    OOC_Scanner__ScanInput_EndOfLine(1);
    goto l2_loop;
l19:
    OOC_Scanner__ScanInput_EndOfLine(2);
    goto l2_loop;
  case 9u:
    i0 = currLinePos;
    i2 = currLineTab;
    i0 = (i4-i0)+i2;
    currColumn = i0;
    currLineTab = (i2+((8-(_mod(i0,8)))-1));
    cpos = (i4+1);
    goto l2_loop;
  case 33u ... 255u:
    goto l25;
  default:
    cpos = (i4+1);
    goto l2_loop;
  }
l25:
  i0 = cpos;
  i2 = cstart;
  i3 = i2!=i0;
  if (i3) goto l28;
  i3=0u;
  goto l30;
l28:
  i3 = inputMode;
  i3 = i3==0;
  
l30:
  if (!i3) goto l32;
  i3 = (OOC_INT32)builder;
  i4 = startColumn;
  i5 = startLine;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10259)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i3, 80, i2, i0, i5, i4);
l32:
  i2 = currLinePos;
  cstart = i0;
  i3 = currLine;
  i4 = currLineTab;
  startLine = i3;
  startColumn = ((i0-i2)+i4);
  i2 = (OOC_INT32)chars;
  i3 = _check_pointer(i2, 10700);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 10700)));
  switch (i3) {
  case 0u:
    goto l445;
  case 95u:
    i0 = scanOptions;
    i0 = _in(0,i0);
    if (i0) goto l38_loop;
    OOC_Scanner__ScanInput_Err(5);
    i0 = (OOC_INT32)RT0__NewObject(_td_Msg__StringPtr.baseTypes[0], 2);
    strPtr = (Msg__StringPtr)i0;
    i2 = _check_pointer(i0, 11427);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = (OOC_INT32)chars;
    i4 = _check_pointer(i4, 11439);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i6 = cpos;
    i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT32, 11439)));
    *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 11427))) = i4;
    i2 = _check_pointer(i0, 11453);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT8, 11453))) = 0u;
    i2 = (OOC_INT32)lastError;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11483)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "sym_string", 11, (Msg__StringPtr)i0);
    cpos = (i6+1);
    goto l429;
l38_loop:
    i0 = cstart;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    sum = 0;
    i3=i0;i0=0;
l39_loop:
    i4 = _check_pointer(i2, 11017);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11017)));
    i0 = i0+i4;
    sum = i0;
    i3 = i3+1;
    cpos = i3;
    i4 = _check_pointer(i2, 11090);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11090)));
    i4 = (OOC_UINT8)65u<=(OOC_UINT8)(_cap(i4));
    if (i4) goto l42;
    i4=0u;
    goto l44;
l42:
    i4 = _check_pointer(i2, 11112);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11112)));
    i4 = (OOC_UINT8)(_cap(i4))<=(OOC_UINT8)90u;
    
l44:
    if (i4) goto l50;
    i4 = _check_pointer(i2, 11164);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11164)));
    i4 = (OOC_UINT8)48u<=(OOC_UINT8)i4;
    if (i4) goto l48;
    i4=0u;
    goto l52;
l48:
    i4 = _check_pointer(i2, 11180);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11180)));
    i4 = (OOC_UINT8)i4<=(OOC_UINT8)57u;
    
    goto l52;
l50:
    i4=1u;
l52:
    if (i4) goto l54;
    i4 = _check_pointer(i2, 11224);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11224)));
    i4 = i4==95u;
    
    goto l55;
l54:
    i4=1u;
l55:
    i4 = !i4;
    if (!i4) goto l39_loop;
l59:
    i0 = _check_pointer(i2, 11261);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 11261)));
    i0 = i0!=0u;
    if (i0) goto l62;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l64;
l62:
    i0=1u;
l64:
    if (!i0) goto l38_loop;
l67:
    sym = 45;
    goto l429;
  case 97u ... 122u:
  case 65u ... 90u:
l70_loop:
    i0 = scanOptions;
    i2 = cstart;
    cpos = i2;
    i0 = _in(0,i0);
    i3 = (OOC_INT32)chars;
    sum = 0;
    i4=i2;i2=0;
l71_loop:
    i5 = _check_pointer(i3, 11768);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11768)));
    i2 = i2+i5;
    sum = i2;
    i4 = i4+1;
    cpos = i4;
    i5 = _check_pointer(i3, 11837);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11837)));
    i5 = (OOC_UINT8)65u<=(OOC_UINT8)(_cap(i5));
    if (i5) goto l74;
    i5=0u;
    goto l76;
l74:
    i5 = _check_pointer(i3, 11859);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11859)));
    i5 = (OOC_UINT8)(_cap(i5))<=(OOC_UINT8)90u;
    
l76:
    if (i5) goto l82;
    i5 = _check_pointer(i3, 11909);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11909)));
    i5 = (OOC_UINT8)48u<=(OOC_UINT8)i5;
    if (i5) goto l80;
    i5=0u;
    goto l84;
l80:
    i5 = _check_pointer(i3, 11925);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11925)));
    i5 = (OOC_UINT8)i5<=(OOC_UINT8)57u;
    
    goto l84;
l82:
    i5=1u;
l84:
    if (i5) goto l90;
    i5 = _check_pointer(i3, 11967);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11967)));
    i5 = i5==95u;
    if (i5) goto l88;
    i5=0u;
    goto l91;
l88:
    i5=i0;
    goto l91;
l90:
    i5=1u;
l91:
    i5 = !i5;
    if (!i5) goto l71_loop;
l95:
    i0 = _check_pointer(i3, 12043);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 12043)));
    i0 = i0!=0u;
    if (i0) goto l98;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l100;
l98:
    i0=1u;
l100:
    if (!i0) goto l70_loop;
l103:
    i0 = sum;
    i0 = _mod(i0,256);
    sym = 45;
    i = i0;
    i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12181))*2)+(_check_index(0, 2, OOC_UINT8, 12183)));
    i2 = i2>=0;
    if (!i2) goto l429;
    i2 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12269))*8)+(_check_index(0, 2, OOC_UINT8, 12271))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12269))*8)+(_check_index(0, 2, OOC_UINT8, 12271))*4);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12275)), 0);
    i3 = cstart;
    i0 = OOC_Scanner__ScanInput_CompareIdent(i3, (void*)(_check_pointer(i2, 12275)), i0);
    if (i0) goto l115;
    i0 = i;
    i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12336))*2)+(_check_index(1, 2, OOC_UINT8, 12338)));
    i2 = i2>=0;
    if (i2) goto l110;
    i0=0u;
    goto l112;
l110:
    i2 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12378))*8)+(_check_index(1, 2, OOC_UINT8, 12380))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12378))*8)+(_check_index(1, 2, OOC_UINT8, 12380))*4);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12384)), 0);
    i3 = cstart;
    i0 = OOC_Scanner__ScanInput_CompareIdent(i3, (void*)(_check_pointer(i2, 12384)), i0);
    
l112:
    if (!i0) goto l116;
    i0 = i;
    i0 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12416))*2)+(_check_index(1, 2, OOC_UINT8, 12418)));
    sym = i0;
    goto l116;
l115:
    i0 = i;
    i0 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12307))*2)+(_check_index(0, 2, OOC_UINT8, 12309)));
    sym = i0;
l116:
    i0 = sym;
    i2 = i0>=66;
    if (i2) goto l119;
    i0=0u;
    goto l121;
l119:
    i0 = i0<70;
    
l121:
    if (i0) goto l123;
    i0=0u;
    goto l125;
l123:
    i0 = scanOptions;
    i0 = _in(5,i0);
    
l125:
    if (i0) goto l445;
    goto l429;
  case 48u ... 57u:
l130_loop:
    i0 = (OOC_INT32)chars;
    i2 = cstart;
    
l131_loop:
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 12981);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12981)));
    i3 = (OOC_UINT8)48u<=(OOC_UINT8)i3;
    if (i3) goto l134;
    i3=0u;
    goto l136;
l134:
    i3 = _check_pointer(i0, 12997);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12997)));
    i3 = (OOC_UINT8)i3<=(OOC_UINT8)57u;
    
l136:
    if (i3) goto l142;
    i3 = _check_pointer(i0, 13048);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13048)));
    i3 = (OOC_UINT8)65u<=(OOC_UINT8)i3;
    if (i3) goto l140;
    i3=0u;
    goto l143;
l140:
    i3 = _check_pointer(i0, 13064);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13064)));
    i3 = (OOC_UINT8)i3<=(OOC_UINT8)70u;
    
    goto l143;
l142:
    i3=1u;
l143:
    i3 = !i3;
    if (!i3) goto l131_loop;
l147:
    i0 = _check_pointer(i0, 13100);
    i3 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i3, OOC_UINT32, 13100)));
    i0 = i0!=0u;
    if (i0) goto l150;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l152;
l150:
    i0=1u;
l152:
    if (!i0) goto l130_loop;
l155:
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 13175);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 13175)));
    i0 = i0==46u;
    if (i0) goto l158;
    i0=0u;
    goto l160;
l158:
    i0 = OOC_Scanner__ScanInput_LookaheadChar();
    i0 = i0!=46u;
    
l160:
    if (i0) goto l198;
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 14406);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14406)));
    i2 = i2==72u;
    if (i2) goto l196;
    i2 = _check_pointer(i0, 14506);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14506)));
    i2 = i2==88u;
    if (i2) goto l194;
    sym = 37;
    i2 = cstart;
    i = i2;
    i3 = i2!=i4;
    if (i3) goto l168;
    i3=0u;
    goto l170;
l168:
    i3 = _check_pointer(i0, 14760);
    i5 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14760)));
    i3 = (OOC_UINT8)48u<=(OOC_UINT8)i3;
    
l170:
    if (i3) goto l172;
    i3=0u;
    goto l174;
l172:
    i3 = _check_pointer(i0, 14773);
    i5 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14773)));
    i3 = (OOC_UINT8)i3<=(OOC_UINT8)57u;
    
l174:
    if (i3) goto l177_loop;
    i0=i2;
    goto l190;
l177_loop:
    i2 = i2+1;
    i = i2;
    i3 = i2!=i4;
    if (i3) goto l180;
    i3=0u;
    goto l182;
l180:
    i3 = _check_pointer(i0, 14760);
    i5 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14760)));
    i3 = (OOC_UINT8)48u<=(OOC_UINT8)i3;
    
l182:
    if (i3) goto l184;
    i3=0u;
    goto l186;
l184:
    i3 = _check_pointer(i0, 14773);
    i5 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14773)));
    i3 = (OOC_UINT8)i3<=(OOC_UINT8)57u;
    
l186:
    if (i3) goto l177_loop;
l189:
    i0=i2;
l190:
    i2 = i0!=i4;
    if (!i2) goto l429;
    OOC_Scanner__ScanInput_ErrPos(7, i0);
    goto l429;
l194:
    sym = 39;
    cpos = (i4+1);
    goto l429;
l196:
    sym = 38;
    cpos = (i4+1);
    goto l429;
l198:
    i0 = cpos;
    sym = 40;
    cpos = (i0+1);
l199_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 13433);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13433)));
    i2 = (OOC_UINT8)48u<=(OOC_UINT8)i2;
    if (i2) goto l202;
    i2=0u;
    goto l204;
l202:
    i2 = _check_pointer(i0, 13449);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13449)));
    i2 = (OOC_UINT8)i2<=(OOC_UINT8)57u;
    
l204:
    if (!i2) goto l214;
l205_loop:
    i2 = cpos;
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 13433);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13433)));
    i3 = (OOC_UINT8)48u<=(OOC_UINT8)i3;
    if (i3) goto l208;
    i2=0u;
    goto l210;
l208:
    i3 = _check_pointer(i0, 13449);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13449)));
    i2 = (OOC_UINT8)i2<=(OOC_UINT8)57u;
    
l210:
    if (i2) goto l205_loop;
l214:
    i0 = _check_pointer(i0, 13530);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 13530)));
    i0 = i0!=0u;
    if (i0) goto l217;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l219;
l217:
    i0=1u;
l219:
    if (!i0) goto l199_loop;
l222:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 13598);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13598)));
    i2 = i2==69u;
    if (i2) goto l225;
    i2 = _check_pointer(i0, 13621);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13621)));
    i2 = i2==68u;
    
    goto l227;
l225:
    i2=1u;
l227:
    if (!i2) goto l429;
    i0 = _check_pointer(i0, 13661);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 13661)));
    i0 = i0==68u;
    if (!i0) goto l231;
    sym = 41;
l231:
    OOC_Scanner__ScanInput_Lookahead(2);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 13857);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13857)));
    i3 = i3==45u;
    if (i3) goto l234;
    i3 = _check_pointer(i2, 13880);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13880)));
    i3 = i3==43u;
    
    goto l236;
l234:
    i3=1u;
l236:
    if (!i3) goto l239;
    i0 = i0+1;
    cpos = i0;
    
l239:
    i3 = _check_pointer(i2, 13969);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13969)));
    i3 = (OOC_UINT8)48u<=(OOC_UINT8)i3;
    if (i3) goto l242;
    i2=0u;
    goto l244;
l242:
    i2 = _check_pointer(i2, 13985);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 13985)));
    i2 = (OOC_UINT8)i2<=(OOC_UINT8)57u;
    
l244:
    if (i2) goto l246_loop;
    OOC_Scanner__ScanInput_ErrPos(6, i0);
    goto l429;
l246_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 14061);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14061)));
    i2 = (OOC_UINT8)48u<=(OOC_UINT8)i2;
    if (i2) goto l249;
    i2=0u;
    goto l251;
l249:
    i2 = _check_pointer(i0, 14077);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14077)));
    i2 = (OOC_UINT8)i2<=(OOC_UINT8)57u;
    
l251:
    if (!i2) goto l261;
l252_loop:
    i2 = cpos;
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 14061);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 14061)));
    i3 = (OOC_UINT8)48u<=(OOC_UINT8)i3;
    if (i3) goto l255;
    i2=0u;
    goto l257;
l255:
    i3 = _check_pointer(i0, 14077);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 14077)));
    i2 = (OOC_UINT8)i2<=(OOC_UINT8)57u;
    
l257:
    if (i2) goto l252_loop;
l261:
    i0 = _check_pointer(i0, 14170);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 14170)));
    i0 = i0!=0u;
    if (i0) goto l264;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l266;
l264:
    i0=1u;
l266:
    if (!i0) goto l246_loop;
    goto l429;
  case 34u:
  case 39u:
    i2 = _check_pointer(i2, 15022);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 15022)));
    i0 = i0==34u;
    if (i0) goto l276;
    sym = 43;
    
    goto l278_loop;
l276:
    sym = 44;
    
l278_loop:
    i0 = (OOC_INT32)chars;
    i2 = cstart;
    i3=i2;
l279_loop:
    i3 = i3+1;
    cpos = i3;
    i4 = _check_pointer(i0, 15342);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15342)));
    i4 = (OOC_UINT8)i4<(OOC_UINT8)32u;
    if (i4) goto l282;
    i4 = _check_pointer(i0, 15365);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i6 = _check_pointer(i0, 15379);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15365)));
    i5 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 15379)));
    i4 = i4==i5;
    
    goto l284;
l282:
    i4=1u;
l284:
    if (!i4) goto l279_loop;
l287:
    i0 = _check_pointer(i0, 15409);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 15409)));
    i0 = i0!=0u;
    if (i0) goto l290;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l292;
l290:
    i0=1u;
l292:
    if (!i0) goto l278_loop;
l295:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 15484);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = cpos;
    i5 = _check_pointer(i0, 15498);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i7 = cstart;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 15484)));
    i3 = *(OOC_UINT8*)(i5+(_check_index(i7, i6, OOC_UINT32, 15498)));
    i2 = i2!=i3;
    if (i2) goto l298;
    cpos = (i4+1);
    goto l429;
l298:
    i2 = _check_pointer(i0, 15532);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 15532)));
    i2 = i2==10u;
    if (i2) goto l301;
    i0 = _check_pointer(i0, 15560);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 15560)));
    i0 = i0==13u;
    
    goto l303;
l301:
    i0=1u;
l303:
    if (i0) goto l305;
    OOC_Scanner__ScanInput_ErrPos(2, i4);
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 15715);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 15715)));
    OOC_Scanner__ScanInput_SetCharAttrib(i0);
    goto l429;
l305:
    OOC_Scanner__ScanInput_Err(3);
    goto l429;
  case 126u:
    sym = 35;
    cpos = (i0+1);
    goto l429;
  case 123u:
    sym = 34;
    cpos = (i0+1);
    goto l429;
  case 46u:
    OOC_Scanner__ScanInput_Lookahead(2);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 15963);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 15963)));
    i3 = i3==46u;
    if (i3) goto l313;
    sym = 18;
    
    goto l429;
l313:
    i0 = i0+1;
    sym = 21;
    cpos = i0;
    i2 = _check_pointer(i2, 16055);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 16055)));
    i2 = i2==46u;
    if (i2) goto l316;
    i2=0u;
    goto l318;
l316:
    i2 = scanOptions;
    i2 = _in(1,i2);
    
l318:
    if (!i2) goto l429;
    sym = 76;
    cpos = (i0+1);
    
    goto l429;
  case 94u:
    sym = 17;
    cpos = (i0+1);
    goto l429;
  case 91u:
    sym = 33;
    cpos = (i0+1);
    goto l429;
  case 58u:
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i2 = _check_pointer(i2, 16421);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 16421)));
    i2 = i2==61u;
    if (i2) goto l328;
    sym = 20;
    
    goto l429;
l328:
    sym = 36;
    cpos = (i0+1);
    
    goto l429;
  case 40u:
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 16615);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 16615)));
    i3 = i3==42u;
    if (i3) goto l333;
    sym = 32;
    goto l429;
l333:
    i3 = _check_pointer(i2, 16692);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT32, 16692)));
    i3 = i3==42u;
    if (i3) goto l336;
    i0=0u;
    goto l338;
l336:
    i2 = _check_pointer(i2, 16716);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i0 = *(OOC_UINT8*)(i2+(_check_index((i0+2), i3, OOC_UINT32, 16716)));
    i0 = i0!=41u;
    
l338:
    if (i0) goto l340;
    sym = 77;
    goto l341;
l340:
    sym = 78;
l341:
    sum = 1;
l342_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 16895);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 16895)));
    switch (i2) {
    case 0u:
      i0 = (OOC_INT32)b;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16960)))), OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)),OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)((OOC_Scanner_InputBuffer__Buffer)i0, i4);
      if (i0) goto l347;
      cpos = (i4+1);
      goto l342_loop;
l347:
      i0 = OOC_Scanner__ScanInput_NextBlock();
      i0 = !i0;
      if (!i0) goto l342_loop;
      goto l376;
    case 10u:
      OOC_Scanner__ScanInput_EndOfLine(1);
      goto l342_loop;
    case 13u:
      i0 = _check_pointer(i0, 17268);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i4+1), i2, OOC_UINT32, 17268)));
      i0 = i0==0u;
      if (!i0) goto l356;
      i0 = OOC_Scanner__ScanInput_NextBlock();
      dummy = i0;
l356:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 17429);
      i2 = cpos;
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i2+1), i3, OOC_UINT32, 17429)));
      i0 = i0==10u;
      if (!i0) goto l358;
      goto l359;
l358:
      OOC_Scanner__ScanInput_EndOfLine(1);
      goto l342_loop;
l359:
      OOC_Scanner__ScanInput_EndOfLine(2);
      goto l342_loop;
    case 9u:
      i0 = currLinePos;
      i2 = currLineTab;
      i0 = (i4-i0)+i2;
      currColumn = i0;
      currLineTab = (i2+((8-(_mod(i0,8)))-1));
      cpos = (i4+1);
      goto l342_loop;
    case 42u:
      OOC_Scanner__ScanInput_Lookahead(1);
      i0 = cpos;
      i0 = i0+1;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 17864);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 17864)));
      i2 = i2==41u;
      if (!i2) goto l342_loop;
      i2 = sum;
      cpos = (i0+1);
      i0 = i2-1;
      sum = i0;
      i0 = i0==0;
      if (!i0) goto l342_loop;
      goto l376;
    case 40u:
      OOC_Scanner__ScanInput_Lookahead(1);
      i0 = cpos;
      i0 = i0+1;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 18117);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 18117)));
      i0 = i0==42u;
      if (!i0) goto l342_loop;
      i0 = sum;
      sum = (i0+1);
      goto l342_loop;
    default:
      cpos = (i4+1);
      goto l342_loop;
    }
l376:
    i0 = sum;
    i0 = i0!=0;
    if (!i0) goto l429;
    OOC_Scanner__ScanInput_Err(1);
    goto l429;
  case 42u:
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 18494);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 18494)));
    i3 = i3==41u;
    if (i3) goto l396;
    i2 = _check_pointer(i2, 18588);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 18588)));
    i0 = i0==62u;
    if (i0) goto l386;
    i0=0u;
    goto l388;
l386:
    i0 = scanOptions;
    i0 = _in(2,i0);
    
l388:
    if (i0) goto l390;
    sym = 1;
    
    goto l429;
l390:
    i0 = inputMode;
    i0 = i0!=1;
    if (i0) goto l393;
    sym = 75;
    goto l394;
l393:
    OOC_Scanner__ScanInput_Err(8);
l394:
    i0 = cpos;
    cpos = (i0+1);
    
    goto l429;
l396:
    OOC_Scanner__ScanInput_Err(4);
    i0 = cpos;
    cpos = (i0+1);
    
    goto l429;
  case 47u:
    sym = 2;
    cpos = (i0+1);
    goto l429;
  case 38u:
    sym = 5;
    cpos = (i0+1);
    goto l429;
  case 43u:
    sym = 6;
    cpos = (i0+1);
    goto l429;
  case 45u:
    sym = 7;
    cpos = (i0+1);
    goto l429;
  case 61u:
    sym = 9;
    cpos = (i0+1);
    goto l429;
  case 35u:
    sym = 10;
    cpos = (i0+1);
    goto l429;
  case 60u:
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 19258);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 19258)));
    i3 = i3==61u;
    if (i3) goto l415;
    i2 = _check_pointer(i2, 19338);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 19338)));
    i2 = i2==42u;
    if (i2) goto l409;
    i2=0u;
    goto l411;
l409:
    i2 = scanOptions;
    i2 = _in(2,i2);
    
l411:
    if (i2) goto l413;
    sym = 11;
    
    goto l429;
l413:
    sym = 74;
    cpos = (i0+1);
    
    goto l429;
l415:
    sym = 12;
    cpos = (i0+1);
    
    goto l429;
  case 62u:
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i2 = _check_pointer(i2, 19583);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 19583)));
    i2 = i2==61u;
    if (i2) goto l420;
    sym = 13;
    
    goto l429;
l420:
    sym = 14;
    cpos = (i0+1);
    
    goto l429;
  case 125u:
    sym = 24;
    cpos = (i0+1);
    goto l429;
  case 41u:
    sym = 22;
    cpos = (i0+1);
    goto l429;
  case 93u:
    sym = 23;
    cpos = (i0+1);
    goto l429;
  case 124u:
    sym = 47;
    cpos = (i0+1);
    goto l429;
  case 59u:
    sym = 46;
    cpos = (i0+1);
    goto l429;
  case 44u:
    sym = 19;
    cpos = (i0+1);
    goto l429;
  default:
    OOC_Scanner__ScanInput_Err(5);
    i0 = (OOC_INT32)RT0__NewObject(_td_Msg__StringPtr.baseTypes[0], 2);
    strPtr = (Msg__StringPtr)i0;
    i2 = _check_pointer(i0, 20098);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = (OOC_INT32)chars;
    i4 = _check_pointer(i4, 20110);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i6 = cpos;
    i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT32, 20110)));
    *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 20098))) = i4;
    i2 = _check_pointer(i0, 20124);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT8, 20124))) = 0u;
    i2 = (OOC_INT32)lastError;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20152)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "sym_string", 11, (Msg__StringPtr)i0);
    cpos = (i6+1);
    goto l429;
  }
l429:
  i0 = sym;
  i2 = i0==74;
  if (i2) goto l432;
  i2=0u;
  goto l434;
l432:
  i2 = scanOptions;
  i2 = _in(3,i2);
  
l434:
  if (!i2) goto l435;
  goto l443;
l435:
  i2 = inputMode;
  i3 = i2==2;
  if (i3) goto l1_loop;
  i2 = i2==0;
  if (!i2) goto l439;
  goto l440;
l439:
  i2 = startColumn;
  i3 = startLine;
  i4 = cpos;
  i5 = cstart;
  OOC_Scanner_Pragma__AddSymbol((void*)(OOC_INT32)&pragma, (RT0__Struct)i1, (void*)(OOC_INT32)&inputMode, i0, i5, i4, i3, i2);
  goto l1_loop;
l440:
  i2 = (OOC_INT32)b;
  i3 = cpos;
  *(OOC_INT32*)((_check_pointer(i2, 20782))+16) = i3;
  i2 = (OOC_INT32)builder;
  i4 = startColumn;
  i5 = startLine;
  i6 = cstart;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20829)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i2, i0, i6, i3, i5, i4);
  goto l1_loop;
l443:
  i2 = startColumn;
  i3 = startLine;
  i4 = cpos;
  i5 = cstart;
  OOC_Scanner_Pragma__AddSymbol((void*)(OOC_INT32)&pragma, (RT0__Struct)i1, (void*)(OOC_INT32)&inputMode, i0, i5, i4, i3, i2);
  goto l1_loop;
l445:
  i0 = scanOptions;
  i2 = (OOC_INT32)builder;
  i3 = _in(3,i0);
  if (i3) goto l448;
  i1 = currLinePos;
  i3 = cpos;
  i4 = currLineTab;
  i5 = currLine;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21538)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i2, 72, i3, i3, i5, ((i3-i1)+i4));
  goto l449;
l448:
  i3 = currLinePos;
  i4 = cpos;
  i5 = currLineTab;
  i6 = currLine;
  OOC_Scanner_Pragma__AddSymbol((void*)(OOC_INT32)&pragma, (RT0__Struct)i1, (void*)(OOC_INT32)&inputMode, 72, i4, i4, i6, ((i4-i3)+i5));
l449:
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&pragma+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21667)))), OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory)),OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory)((OOC_Scanner_Builder__Builder)i2, (OOC_Config_Pragmas__History)i1);
  i0 = _in(4,i0);
  if (i0) goto l452;
  i0=0u;
  goto l454;
l452:
  i0 = eolIsCRLF;
  
l454:
  if (!i0) goto l456;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21786))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21786))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21795)))), OOC_Error__ListDesc_SetAdjustCharPos)),OOC_Error__ListDesc_SetAdjustCharPos)((OOC_Error__List)i0, 1u);
l456:
  return;
  ;
}

static void OOC_Scanner__InitKeywords() {
  register OOC_INT32 i0,i1;
  OOC_INT32 i;
  auto void OOC_Scanner__InitKeywords_KW(const OOC_CHAR8 ident__ref[], OOC_LEN ident_0d, OOC_INT8 sym);
    
    void OOC_Scanner__InitKeywords_KW(const OOC_CHAR8 ident__ref[], OOC_LEN ident_0d, OOC_INT8 sym) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(ident,OOC_CHAR8 ,ident_0d)
      OOC_INT16 sum;
      OOC_INT16 i;
      OOC_INT16 j;
      OOC_Scanner_InputBuffer__CharArray str;

      OOC_INITIALIZE_VPAR(ident__ref,ident,OOC_CHAR8 ,ident_0d)
      sum = 0;
      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(0, ident_0d, OOC_UINT16, 22163)));
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0;i1=0;
      goto l9;
l3:
      i0=0;i1=0;
l4_loop:
      i2 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(i1, ident_0d, OOC_UINT16, 22204)));
      i0 = i0+i2;
      sum = i0;
      i1 = i1+1;
      i = i1;
      i2 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(i1, ident_0d, OOC_UINT16, 22163)));
      i2 = i2!=0u;
      if (i2) goto l4_loop;
l9:
      i0 = _mod(i0,256);
      j = i0;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
      str = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22306)), 0);
      _copy_8((const void*)(OOC_INT32)ident,(void*)(_check_pointer(i1, 22306)),i2);
      i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT16, 22325))*2)+(_check_index(0, 2, OOC_UINT8, 22327)));
      i2 = i2<0;
      if (i2) goto l12;
      i2 = sym;
      *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT16, 22421))*2)+(_check_index(1, 2, OOC_UINT8, 22423))) = i2;
      *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT16, 22449))*8)+(_check_index(1, 2, OOC_UINT8, 22451))*4) = i1;
      goto l13;
l12:
      i2 = sym;
      *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT16, 22355))*2)+(_check_index(0, 2, OOC_UINT8, 22357))) = i2;
      *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT16, 22383))*8)+(_check_index(0, 2, OOC_UINT8, 22385))*4) = i1;
l13:
      return;
      ;
    }


  i = 0;
  i0=0;
l1_loop:
  *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 22540))*2)+(_check_index(0, 2, OOC_UINT8, 22542))) = (-1);
  *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 22559))*2)+(_check_index(1, 2, OOC_UINT8, 22561))) = (-1);
  *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 22584))*8)+(_check_index(0, 2, OOC_UINT8, 22586))*4) = (OOC_INT32)0;
  *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 22604))*8)+(_check_index(1, 2, OOC_UINT8, 22606))*4) = (OOC_INT32)0;
  i0 = i0+1;
  i = i0;
  i1 = i0<=255;
  if (i1) goto l1_loop;
l5:
  OOC_Scanner__InitKeywords_KW("ARRAY", 6, 62);
  OOC_Scanner__InitKeywords_KW("BEGIN", 6, 65);
  OOC_Scanner__InitKeywords_KW("BY", 3, 31);
  OOC_Scanner__InitKeywords_KW("CASE", 5, 53);
  OOC_Scanner__InitKeywords_KW("CONST", 6, 66);
  OOC_Scanner__InitKeywords_KW("DIV", 4, 3);
  OOC_Scanner__InitKeywords_KW("DO", 3, 29);
  OOC_Scanner__InitKeywords_KW("ELSE", 5, 49);
  OOC_Scanner__InitKeywords_KW("ELSIF", 6, 50);
  OOC_Scanner__InitKeywords_KW("END", 4, 48);
  OOC_Scanner__InitKeywords_KW("EXIT", 5, 60);
  OOC_Scanner__InitKeywords_KW("FOR", 4, 57);
  OOC_Scanner__InitKeywords_KW("IF", 3, 52);
  OOC_Scanner__InitKeywords_KW("IMPORT", 7, 70);
  OOC_Scanner__InitKeywords_KW("IN", 3, 15);
  OOC_Scanner__InitKeywords_KW("IS", 3, 16);
  OOC_Scanner__InitKeywords_KW("LOOP", 5, 56);
  OOC_Scanner__InitKeywords_KW("MOD", 4, 4);
  OOC_Scanner__InitKeywords_KW("MODULE", 7, 71);
  OOC_Scanner__InitKeywords_KW("NIL", 4, 42);
  OOC_Scanner__InitKeywords_KW("OF", 3, 25);
  OOC_Scanner__InitKeywords_KW("OR", 3, 8);
  OOC_Scanner__InitKeywords_KW("POINTER", 8, 64);
  OOC_Scanner__InitKeywords_KW("PROCEDURE", 10, 69);
  OOC_Scanner__InitKeywords_KW("RECORD", 7, 63);
  OOC_Scanner__InitKeywords_KW("REPEAT", 7, 55);
  OOC_Scanner__InitKeywords_KW("RETURN", 7, 61);
  OOC_Scanner__InitKeywords_KW("THEN", 5, 28);
  OOC_Scanner__InitKeywords_KW("TO", 3, 30);
  OOC_Scanner__InitKeywords_KW("TYPE", 5, 67);
  OOC_Scanner__InitKeywords_KW("UNTIL", 6, 51);
  OOC_Scanner__InitKeywords_KW("VAR", 4, 68);
  OOC_Scanner__InitKeywords_KW("WHILE", 6, 54);
  OOC_Scanner__InitKeywords_KW("WITH", 5, 58);
  OOC_Scanner__InitKeywords_KW("TRY", 4, 59);
  OOC_Scanner__InitKeywords_KW("CATCH", 6, 26);
  OOC_Scanner__InitKeywords_KW("RAISES", 7, 27);
  return;
  ;
}

void OOC_OOC_Scanner_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner__ErrorContext.baseTypes[0]);
  OOC_Scanner__scannerContext = (OOC_Scanner__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Scanner", 12);
  OOC_Scanner__InitKeywords();
  return;
  ;
}

/* --- */
