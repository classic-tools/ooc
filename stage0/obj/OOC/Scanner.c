#include <OOC/Scanner.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Scanner__ErrorContextDesc_GetTemplate(OOC_Scanner__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3753))+8);
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
    _failed_case(i1, 3745);
    goto l11;
  }
l11:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4258)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
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
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6220))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6189)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = startLine;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6254)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = startColumn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6305)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6352))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6352))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6361)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
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
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6555))+8);
      i2 = cpos;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6526)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = currLinePos;
      i3 = currLineTab;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6589)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, ((i2-i1)+i3));
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_NextBlock() {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 oldOffset;
      OOC_CHAR8 res;

      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 6797))+8);
      oldOffset = i1;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6829)))), OOC_Scanner_InputBuffer__BufferDesc_NextBlock)),OOC_Scanner_InputBuffer__BufferDesc_NextBlock)((OOC_Scanner_InputBuffer__Buffer)i0);
      res = i0;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6860))+4);
      chars = (OOC_Scanner_InputBuffer__CharArray)i3;
      i3 = *(OOC_INT32*)((_check_pointer(i2, 6887))+8);
      i4 = cpos;
      cpos = (i4-(i3-i1));
      i3 = *(OOC_INT32*)((_check_pointer(i2, 6936))+8);
      i4 = cstart;
      cstart = (i4-(i3-i1));
      i2 = *(OOC_INT32*)((_check_pointer(i2, 6990))+8);
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
      i0 = i1==2;
      currLineTab = 0;
      if (!i0) goto l4;
      eolIsCRLF = OOC_TRUE;
l4:
      return;
      ;
    }

    
    void OOC_Scanner__ScanInput_Lookahead(OOC_INT32 len) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = len;
      i1 = 1<=i0;
      i = 1;
      if (!i1) goto l15;
      i1=1;
l3_loop:
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 7426);
      i3 = cpos;
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT8*)(i2+(_check_index((i3+i1), i4, OOC_UINT32, 7426)));
      i2 = i2==(OOC_CHAR8)'\000';
      if (i2) goto l6;
      i2=OOC_FALSE;
      goto l8;
l6:
      i2 = OOC_Scanner__ScanInput_NextBlock();
      i2 = !i2;
      
l8:
      if (!i2) goto l10;
      return;
l10:
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l3_loop;
l15:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_LookaheadChar() {
      register OOC_INT32 i0,i1,i2;

      OOC_Scanner__ScanInput_Lookahead(1);
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 7625);
      i1 = cpos;
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 7625)));
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_CompareIdent(OOC_INT32 start, OOC_CHAR8 kw[], OOC_LEN kw_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(0, kw_0d, OOC_UINT32, 7986)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 8012);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = start;
      i3 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(0, kw_0d, OOC_UINT32, 8001)));
      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 8012)));
      i0 = i3==i0;
      
l5:
      if (i0) goto l7;
      i0=0;
      goto l17;
l7:
      i0 = start;
      i1 = (OOC_INT32)chars;
      i2=0;
l8_loop:
      i2 = i2+1;
      i = i2;
      i3 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i2, kw_0d, OOC_UINT32, 7986)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l11;
      i3=OOC_FALSE;
      goto l13;
l11:
      i3 = _check_pointer(i1, 8012);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i2, kw_0d, OOC_UINT32, 8001)));
      i3 = *(OOC_UINT8*)(i3+(_check_index((i0+i2), i4, OOC_UINT32, 8012)));
      i3 = i5==i3;
      
l13:
      if (i3) goto l8_loop;
l16:
      i0=i2;
l17:
      i1 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i0, kw_0d, OOC_UINT32, 8069)));
      i1 = i1==(OOC_CHAR8)'\000';
      if (i1) goto l20;
      i0=OOC_FALSE;
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
      i4 = _check_pointer(i0, 8398);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8398))) = (i3+55);
      goto l5;
l4:
      i4 = _check_pointer(i0, 8339);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8339))) = (i3+48);
l5:
      i2 = i2>>4;
      ch = i2;
      i1 = i1+1;
      i = i1;
      i2 = i2==0;
      if (!i2) goto l1_loop;
l9:
      i2 = _check_pointer(i0, 8521);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 8521))) = (OOC_CHAR8)'\000';
      i1 = i1-1;
      j = 0;
      i = i1;
      i2 = 0<i1;
      if (!i2) goto l17;
      i2=i1;i1=0;
l12_loop:
      i3 = _check_pointer(i0, 8601);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 8601)));
      h = i3;
      i4 = _check_pointer(i0, 8609);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = _check_pointer(i0, 8619);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 8619)));
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8609))) = i6;
      i4 = _check_pointer(i0, 8627);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 8627))) = i3;
      i1 = i1+1;
      j = i1;
      i2 = i2-1;
      i3 = i1<i2;
      i = i2;
      if (i3) goto l12_loop;
l17:
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8695)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "char_code", 10, (Msg__StringPtr)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)builder;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8785));
  b = (OOC_Scanner_InputBuffer__Buffer)i1;
  lastError = (Msg__Msg)(OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8836))+4);
  chars = (OOC_Scanner_InputBuffer__CharArray)i1;
  cpos = 0;
  currLine = 0;
  currLinePos = 0;
  currLineTab = 0;
  inputMode = 0;
  eolIsCRLF = OOC_FALSE;
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
  i2 = _check_pointer(i0, 9211);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = cpos;
  i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 9211)));
  switch (i2) {
  case (OOC_CHAR8)'\000':
    i0 = (OOC_INT32)b;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9268)))), OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)),OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)((OOC_Scanner_InputBuffer__Buffer)i0, i4);
    if (i0) goto l7;
    cpos = (i4+1);
    goto l2_loop;
l7:
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    if (!i0) goto l2_loop;
    goto l25;
  case (OOC_CHAR8)'\012':
    OOC_Scanner__ScanInput_EndOfLine(1);
    goto l2_loop;
  case (OOC_CHAR8)'\015':
    i0 = _check_pointer(i0, 9539);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i4+1), i2, OOC_UINT32, 9539)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (!i0) goto l16;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    dummy = i0;
l16:
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 9688);
    i2 = cpos;
    i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i2+1), i3, OOC_UINT32, 9688)));
    i0 = i0==(OOC_CHAR8)'\012';
    if (!i0) goto l18;
    goto l19;
l18:
    OOC_Scanner__ScanInput_EndOfLine(1);
    goto l2_loop;
l19:
    OOC_Scanner__ScanInput_EndOfLine(2);
    goto l2_loop;
  case (OOC_CHAR8)'\011':
    i0 = currLinePos;
    i2 = currLineTab;
    i0 = (i4-i0)+i2;
    currColumn = i0;
    currLineTab = (i2+((8-(_mod(i0,8)))-1));
    cpos = (i4+1);
    goto l2_loop;
  case (OOC_CHAR8)'!' ... (OOC_CHAR8)'\377':
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
  i3=OOC_FALSE;
  goto l30;
l28:
  i3 = inputMode;
  i3 = i3==0;
  
l30:
  if (!i3) goto l32;
  i3 = (OOC_INT32)builder;
  i4 = startColumn;
  i5 = startLine;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10185)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i3, 80, i2, i0, i5, i4);
l32:
  i2 = currLinePos;
  cstart = i0;
  i3 = currLine;
  i4 = currLineTab;
  startLine = i3;
  startColumn = ((i0-i2)+i4);
  i2 = (OOC_INT32)chars;
  i3 = _check_pointer(i2, 10626);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 10626)));
  switch (i3) {
  case (OOC_CHAR8)'\000':
    goto l445;
  case (OOC_CHAR8)'_':
    i0 = scanOptions;
    i0 = _in(0,i0);
    if (i0) goto l38_loop;
    OOC_Scanner__ScanInput_Err(5);
    i0 = (OOC_INT32)RT0__NewObject(_td_Msg__StringPtr.baseTypes[0], 2);
    strPtr = (Msg__StringPtr)i0;
    i2 = _check_pointer(i0, 11353);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = (OOC_INT32)chars;
    i4 = _check_pointer(i4, 11365);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i6 = cpos;
    i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT32, 11365)));
    *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 11353))) = i4;
    i2 = _check_pointer(i0, 11379);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT8, 11379))) = (OOC_CHAR8)'\000';
    i2 = (OOC_INT32)lastError;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11409)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "sym_string", 11, (Msg__StringPtr)i0);
    cpos = (i6+1);
    goto l429;
l38_loop:
    i0 = cstart;
    cpos = i0;
    sum = 0;
    i2 = (OOC_INT32)chars;
    i3=i0;i0=0;
l39_loop:
    i4 = _check_pointer(i2, 10943);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 10943)));
    i0 = i0+i4;
    sum = i0;
    i3 = i3+1;
    cpos = i3;
    i4 = _check_pointer(i2, 11016);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11016)));
    i4 = (OOC_CHAR8)'A'<=(_cap(i4));
    if (i4) goto l42;
    i4=OOC_FALSE;
    goto l44;
l42:
    i4 = _check_pointer(i2, 11038);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11038)));
    i4 = (_cap(i4))<=(OOC_CHAR8)'Z';
    
l44:
    if (i4) goto l50;
    i4 = _check_pointer(i2, 11090);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11090)));
    i4 = (OOC_CHAR8)'0'<=i4;
    if (i4) goto l48;
    i4=OOC_FALSE;
    goto l52;
l48:
    i4 = _check_pointer(i2, 11106);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11106)));
    i4 = i4<=(OOC_CHAR8)'9';
    
    goto l52;
l50:
    i4=OOC_TRUE;
l52:
    if (i4) goto l54;
    i4 = _check_pointer(i2, 11150);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11150)));
    i4 = i4==(OOC_CHAR8)'_';
    
    goto l55;
l54:
    i4=OOC_TRUE;
l55:
    i4 = !i4;
    if (!i4) goto l39_loop;
l59:
    i0 = _check_pointer(i2, 11187);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 11187)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l62;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l64;
l62:
    i0=OOC_TRUE;
l64:
    if (!i0) goto l38_loop;
l67:
    sym = 45;
    goto l429;
  case (OOC_CHAR8)'a' ... (OOC_CHAR8)'z':
  case (OOC_CHAR8)'A' ... (OOC_CHAR8)'Z':
l70_loop:
    i0 = cstart;
    cpos = i0;
    i2 = scanOptions;
    i2 = _in(0,i2);
    sum = 0;
    i3 = (OOC_INT32)chars;
    i4=i0;i0=0;
l71_loop:
    i5 = _check_pointer(i3, 11694);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11694)));
    i0 = i0+i5;
    sum = i0;
    i4 = i4+1;
    cpos = i4;
    i5 = _check_pointer(i3, 11763);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11763)));
    i5 = (OOC_CHAR8)'A'<=(_cap(i5));
    if (i5) goto l74;
    i5=OOC_FALSE;
    goto l76;
l74:
    i5 = _check_pointer(i3, 11785);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11785)));
    i5 = (_cap(i5))<=(OOC_CHAR8)'Z';
    
l76:
    if (i5) goto l82;
    i5 = _check_pointer(i3, 11835);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11835)));
    i5 = (OOC_CHAR8)'0'<=i5;
    if (i5) goto l80;
    i5=OOC_FALSE;
    goto l84;
l80:
    i5 = _check_pointer(i3, 11851);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11851)));
    i5 = i5<=(OOC_CHAR8)'9';
    
    goto l84;
l82:
    i5=OOC_TRUE;
l84:
    if (i5) goto l90;
    i5 = _check_pointer(i3, 11893);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11893)));
    i5 = i5==(OOC_CHAR8)'_';
    if (i5) goto l88;
    i5=OOC_FALSE;
    goto l91;
l88:
    i5=i2;
    goto l91;
l90:
    i5=OOC_TRUE;
l91:
    i5 = !i5;
    if (!i5) goto l71_loop;
l95:
    i0 = _check_pointer(i3, 11969);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 11969)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l98;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l100;
l98:
    i0=OOC_TRUE;
l100:
    if (!i0) goto l70_loop;
l103:
    i0 = sum;
    i0 = _mod(i0,256);
    sym = 45;
    i = i0;
    i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12107))*2)+(_check_index(0, 2, OOC_UINT8, 12109)));
    i2 = i2>=0;
    if (!i2) goto l429;
    i2 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12195))*8)+(_check_index(0, 2, OOC_UINT8, 12197))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12195))*8)+(_check_index(0, 2, OOC_UINT8, 12197))*4);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12201)), (OOC_INT32)0);
    i3 = cstart;
    i0 = OOC_Scanner__ScanInput_CompareIdent(i3, (void*)(_check_pointer(i2, 12201)), i0);
    if (i0) goto l115;
    i0 = i;
    i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12262))*2)+(_check_index(1, 2, OOC_UINT8, 12264)));
    i2 = i2>=0;
    if (i2) goto l110;
    i0=OOC_FALSE;
    goto l112;
l110:
    i2 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12304))*8)+(_check_index(1, 2, OOC_UINT8, 12306))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 12304))*8)+(_check_index(1, 2, OOC_UINT8, 12306))*4);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12310)), (OOC_INT32)0);
    i3 = cstart;
    i0 = OOC_Scanner__ScanInput_CompareIdent(i3, (void*)(_check_pointer(i2, 12310)), i0);
    
l112:
    if (!i0) goto l116;
    i0 = i;
    i0 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12342))*2)+(_check_index(1, 2, OOC_UINT8, 12344)));
    sym = i0;
    goto l116;
l115:
    i0 = i;
    i0 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 12233))*2)+(_check_index(0, 2, OOC_UINT8, 12235)));
    sym = i0;
l116:
    i0 = sym;
    i2 = i0>=66;
    if (i2) goto l119;
    i0=OOC_FALSE;
    goto l121;
l119:
    i0 = i0<70;
    
l121:
    if (i0) goto l123;
    i0=OOC_FALSE;
    goto l125;
l123:
    i0 = scanOptions;
    i0 = _in(5,i0);
    
l125:
    if (i0) goto l445;
    goto l429;
  case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
l130_loop:
    i0 = (OOC_INT32)chars;
    i2 = cstart;
    
l131_loop:
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 12907);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12907)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l134;
    i3=OOC_FALSE;
    goto l136;
l134:
    i3 = _check_pointer(i0, 12923);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12923)));
    i3 = i3<=(OOC_CHAR8)'9';
    
l136:
    if (i3) goto l142;
    i3 = _check_pointer(i0, 12974);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12974)));
    i3 = (OOC_CHAR8)'A'<=i3;
    if (i3) goto l140;
    i3=OOC_FALSE;
    goto l143;
l140:
    i3 = _check_pointer(i0, 12990);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12990)));
    i3 = i3<=(OOC_CHAR8)'F';
    
    goto l143;
l142:
    i3=OOC_TRUE;
l143:
    i3 = !i3;
    if (!i3) goto l131_loop;
l147:
    i0 = _check_pointer(i0, 13026);
    i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i3, OOC_UINT32, 13026)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l150;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l152;
l150:
    i0=OOC_TRUE;
l152:
    if (!i0) goto l130_loop;
l155:
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 13101);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 13101)));
    i0 = i0==(OOC_CHAR8)'.';
    if (i0) goto l158;
    i0=OOC_FALSE;
    goto l160;
l158:
    i0 = OOC_Scanner__ScanInput_LookaheadChar();
    i0 = i0!=(OOC_CHAR8)'.';
    
l160:
    if (i0) goto l198;
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 14332);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14332)));
    i2 = i2==(OOC_CHAR8)'H';
    if (i2) goto l196;
    i2 = _check_pointer(i0, 14432);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14432)));
    i2 = i2==(OOC_CHAR8)'X';
    if (i2) goto l194;
    sym = 37;
    i2 = cstart;
    i3 = i2!=i4;
    i = i2;
    if (i3) goto l168;
    i3=OOC_FALSE;
    goto l170;
l168:
    i3 = _check_pointer(i0, 14686);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14686)));
    i3 = (OOC_CHAR8)'0'<=i3;
    
l170:
    if (i3) goto l172;
    i3=OOC_FALSE;
    goto l174;
l172:
    i3 = _check_pointer(i0, 14699);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14699)));
    i3 = i3<=(OOC_CHAR8)'9';
    
l174:
    if (i3) goto l177_loop;
    i0=i2;
    goto l190;
l177_loop:
    i2 = i2+1;
    i3 = i2!=i4;
    i = i2;
    if (i3) goto l180;
    i3=OOC_FALSE;
    goto l182;
l180:
    i3 = _check_pointer(i0, 14686);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14686)));
    i3 = (OOC_CHAR8)'0'<=i3;
    
l182:
    if (i3) goto l184;
    i3=OOC_FALSE;
    goto l186;
l184:
    i3 = _check_pointer(i0, 14699);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14699)));
    i3 = i3<=(OOC_CHAR8)'9';
    
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
    i2 = _check_pointer(i0, 13359);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13359)));
    i2 = (OOC_CHAR8)'0'<=i2;
    if (i2) goto l202;
    i2=OOC_FALSE;
    goto l204;
l202:
    i2 = _check_pointer(i0, 13375);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13375)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l204:
    if (!i2) goto l214;
l205_loop:
    i2 = cpos;
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 13359);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13359)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l208;
    i2=OOC_FALSE;
    goto l210;
l208:
    i3 = _check_pointer(i0, 13375);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13375)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l210:
    if (i2) goto l205_loop;
l214:
    i0 = _check_pointer(i0, 13456);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 13456)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l217;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l219;
l217:
    i0=OOC_TRUE;
l219:
    if (!i0) goto l199_loop;
l222:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 13524);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13524)));
    i2 = i2==(OOC_CHAR8)'E';
    if (i2) goto l225;
    i2 = _check_pointer(i0, 13547);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13547)));
    i2 = i2==(OOC_CHAR8)'D';
    
    goto l227;
l225:
    i2=OOC_TRUE;
l227:
    if (!i2) goto l429;
    i0 = _check_pointer(i0, 13587);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 13587)));
    i0 = i0==(OOC_CHAR8)'D';
    if (!i0) goto l231;
    sym = 41;
l231:
    OOC_Scanner__ScanInput_Lookahead(2);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 13783);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13783)));
    i3 = i3==(OOC_CHAR8)'-';
    if (i3) goto l234;
    i3 = _check_pointer(i2, 13806);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13806)));
    i3 = i3==(OOC_CHAR8)'+';
    
    goto l236;
l234:
    i3=OOC_TRUE;
l236:
    if (!i3) goto l239;
    i0 = i0+1;
    cpos = i0;
    
l239:
    i3 = _check_pointer(i2, 13895);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13895)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l242;
    i2=OOC_FALSE;
    goto l244;
l242:
    i2 = _check_pointer(i2, 13911);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 13911)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l244:
    if (i2) goto l246_loop;
    OOC_Scanner__ScanInput_ErrPos(6, i0);
    goto l429;
l246_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 13987);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13987)));
    i2 = (OOC_CHAR8)'0'<=i2;
    if (i2) goto l249;
    i2=OOC_FALSE;
    goto l251;
l249:
    i2 = _check_pointer(i0, 14003);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14003)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l251:
    if (!i2) goto l261;
l252_loop:
    i2 = cpos;
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 13987);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13987)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l255;
    i2=OOC_FALSE;
    goto l257;
l255:
    i3 = _check_pointer(i0, 14003);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 14003)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l257:
    if (i2) goto l252_loop;
l261:
    i0 = _check_pointer(i0, 14096);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 14096)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l264;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l266;
l264:
    i0=OOC_TRUE;
l266:
    if (!i0) goto l246_loop;
    goto l429;
  case (OOC_CHAR8)'"':
  case (OOC_CHAR8)'\047':
    i2 = _check_pointer(i2, 14948);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 14948)));
    i0 = i0==(OOC_CHAR8)'"';
    if (i0) goto l276;
    sym = 43;
    i0=43;
    goto l278_loop;
l276:
    sym = 44;
    i0=44;
l278_loop:
    i0 = (OOC_INT32)chars;
    i2 = cstart;
    i3=i2;
l279_loop:
    i3 = i3+1;
    cpos = i3;
    i4 = _check_pointer(i0, 15268);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15268)));
    i4 = i4<(OOC_CHAR8)' ';
    if (i4) goto l282;
    i4 = _check_pointer(i0, 15291);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i6 = _check_pointer(i0, 15305);
    i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15291)));
    i5 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 15305)));
    i4 = i4==i5;
    
    goto l284;
l282:
    i4=OOC_TRUE;
l284:
    if (!i4) goto l279_loop;
l287:
    i0 = _check_pointer(i0, 15335);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 15335)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l290;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    i0 = !i0;
    
    goto l292;
l290:
    i0=OOC_TRUE;
l292:
    if (!i0) goto l278_loop;
l295:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 15410);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i5 = _check_pointer(i0, 15424);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i7 = cstart;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 15410)));
    i3 = *(OOC_UINT8*)(i5+(_check_index(i7, i6, OOC_UINT32, 15424)));
    i2 = i2!=i3;
    if (i2) goto l298;
    cpos = (i4+1);
    goto l429;
l298:
    i2 = _check_pointer(i0, 15458);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 15458)));
    i2 = i2==(OOC_CHAR8)'\012';
    if (i2) goto l301;
    i0 = _check_pointer(i0, 15486);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 15486)));
    i0 = i0==(OOC_CHAR8)'\015';
    
    goto l303;
l301:
    i0=OOC_TRUE;
l303:
    if (i0) goto l305;
    OOC_Scanner__ScanInput_ErrPos(2, i4);
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 15641);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 15641)));
    OOC_Scanner__ScanInput_SetCharAttrib(i0);
    goto l429;
l305:
    OOC_Scanner__ScanInput_Err(3);
    goto l429;
  case (OOC_CHAR8)'~':
    sym = 35;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'{':
    sym = 34;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'.':
    OOC_Scanner__ScanInput_Lookahead(2);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 15889);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 15889)));
    i3 = i3==(OOC_CHAR8)'.';
    if (i3) goto l313;
    sym = 18;
    i2=18;
    goto l429;
l313:
    i0 = i0+1;
    sym = 21;
    cpos = i0;
    i2 = _check_pointer(i2, 15981);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 15981)));
    i2 = i2==(OOC_CHAR8)'.';
    if (i2) goto l316;
    i2=OOC_FALSE;
    goto l318;
l316:
    i2 = scanOptions;
    i2 = _in(1,i2);
    
l318:
    if (i2) goto l320;
    i2=21;
    goto l429;
l320:
    i0 = i0+1;
    sym = 76;
    cpos = i0;
    i2=76;
    goto l429;
  case (OOC_CHAR8)'^':
    sym = 17;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'[':
    sym = 33;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)':':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i2 = _check_pointer(i2, 16347);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 16347)));
    i2 = i2==(OOC_CHAR8)'=';
    if (i2) goto l328;
    sym = 20;
    i2=20;
    goto l429;
l328:
    i0 = i0+1;
    sym = 36;
    cpos = i0;
    i2=36;
    goto l429;
  case (OOC_CHAR8)'(':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 16541);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 16541)));
    i3 = i3==(OOC_CHAR8)'*';
    if (i3) goto l333;
    sym = 32;
    goto l429;
l333:
    i3 = _check_pointer(i2, 16618);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT32, 16618)));
    i3 = i3==(OOC_CHAR8)'*';
    if (i3) goto l336;
    i0=OOC_FALSE;
    goto l338;
l336:
    i2 = _check_pointer(i2, 16642);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i2+(_check_index((i0+2), i3, OOC_UINT32, 16642)));
    i0 = i0!=(OOC_CHAR8)')';
    
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
    i2 = _check_pointer(i0, 16821);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 16821)));
    switch (i2) {
    case (OOC_CHAR8)'\000':
      i0 = (OOC_INT32)b;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16886)))), OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)),OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)((OOC_Scanner_InputBuffer__Buffer)i0, i4);
      if (i0) goto l347;
      cpos = (i4+1);
      goto l342_loop;
l347:
      i0 = OOC_Scanner__ScanInput_NextBlock();
      i0 = !i0;
      if (!i0) goto l342_loop;
      goto l376;
    case (OOC_CHAR8)'\012':
      OOC_Scanner__ScanInput_EndOfLine(1);
      goto l342_loop;
    case (OOC_CHAR8)'\015':
      i0 = _check_pointer(i0, 17194);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i4+1), i2, OOC_UINT32, 17194)));
      i0 = i0==(OOC_CHAR8)'\000';
      if (!i0) goto l356;
      i0 = OOC_Scanner__ScanInput_NextBlock();
      dummy = i0;
l356:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 17355);
      i2 = cpos;
      i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i2+1), i3, OOC_UINT32, 17355)));
      i0 = i0==(OOC_CHAR8)'\012';
      if (!i0) goto l358;
      goto l359;
l358:
      OOC_Scanner__ScanInput_EndOfLine(1);
      goto l342_loop;
l359:
      OOC_Scanner__ScanInput_EndOfLine(2);
      goto l342_loop;
    case (OOC_CHAR8)'\011':
      i0 = currLinePos;
      i2 = currLineTab;
      i0 = (i4-i0)+i2;
      currColumn = i0;
      currLineTab = (i2+((8-(_mod(i0,8)))-1));
      cpos = (i4+1);
      goto l342_loop;
    case (OOC_CHAR8)'*':
      OOC_Scanner__ScanInput_Lookahead(1);
      i0 = cpos;
      i0 = i0+1;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 17790);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 17790)));
      i2 = i2==(OOC_CHAR8)')';
      if (!i2) goto l342_loop;
      i0 = i0+1;
      i2 = sum;
      i2 = i2-1;
      cpos = i0;
      sum = i2;
      i2 = i2==0;
      if (!i2) goto l342_loop;
      goto l376;
    case (OOC_CHAR8)'(':
      OOC_Scanner__ScanInput_Lookahead(1);
      i0 = cpos;
      i0 = i0+1;
      cpos = i0;
      i2 = (OOC_INT32)chars;
      i2 = _check_pointer(i2, 18043);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 18043)));
      i0 = i0==(OOC_CHAR8)'*';
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
  case (OOC_CHAR8)'*':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 18420);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 18420)));
    i3 = i3==(OOC_CHAR8)')';
    if (i3) goto l396;
    i2 = _check_pointer(i2, 18514);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 18514)));
    i2 = i2==(OOC_CHAR8)'>';
    if (i2) goto l386;
    i2=OOC_FALSE;
    goto l388;
l386:
    i2 = scanOptions;
    i2 = _in(2,i2);
    
l388:
    if (i2) goto l390;
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
    i0 = i0+1;
    cpos = i0;
    
    goto l429;
l396:
    OOC_Scanner__ScanInput_Err(4);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    
    goto l429;
  case (OOC_CHAR8)'/':
    sym = 2;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'&':
    sym = 5;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'+':
    sym = 6;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'-':
    sym = 7;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'=':
    sym = 9;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'#':
    sym = 10;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'<':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 19184);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 19184)));
    i3 = i3==(OOC_CHAR8)'=';
    if (i3) goto l415;
    i2 = _check_pointer(i2, 19264);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 19264)));
    i2 = i2==(OOC_CHAR8)'*';
    if (i2) goto l409;
    i2=OOC_FALSE;
    goto l411;
l409:
    i2 = scanOptions;
    i2 = _in(2,i2);
    
l411:
    if (i2) goto l413;
    sym = 11;
    i2=11;
    goto l429;
l413:
    i0 = i0+1;
    sym = 74;
    cpos = i0;
    i2=74;
    goto l429;
l415:
    i0 = i0+1;
    sym = 12;
    cpos = i0;
    i2=12;
    goto l429;
  case (OOC_CHAR8)'>':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i2 = _check_pointer(i2, 19509);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 19509)));
    i2 = i2==(OOC_CHAR8)'=';
    if (i2) goto l420;
    sym = 13;
    i2=13;
    goto l429;
l420:
    i0 = i0+1;
    sym = 14;
    cpos = i0;
    i2=14;
    goto l429;
  case (OOC_CHAR8)'}':
    sym = 24;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)')':
    sym = 22;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)']':
    sym = 23;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'|':
    sym = 47;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)';':
    sym = 46;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)',':
    sym = 19;
    cpos = (i0+1);
    goto l429;
  default:
    OOC_Scanner__ScanInput_Err(5);
    i0 = (OOC_INT32)RT0__NewObject(_td_Msg__StringPtr.baseTypes[0], 2);
    strPtr = (Msg__StringPtr)i0;
    i2 = _check_pointer(i0, 20024);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = (OOC_INT32)chars;
    i4 = _check_pointer(i4, 20036);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i6 = cpos;
    i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT32, 20036)));
    *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 20024))) = i4;
    i2 = _check_pointer(i0, 20050);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT8, 20050))) = (OOC_CHAR8)'\000';
    i2 = (OOC_INT32)lastError;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20078)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "sym_string", 11, (Msg__StringPtr)i0);
    cpos = (i6+1);
    goto l429;
  }
l429:
  i0 = sym;
  i2 = i0==74;
  if (i2) goto l432;
  i2=OOC_FALSE;
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
  *(OOC_INT32*)((_check_pointer(i2, 20708))+16) = i3;
  i2 = (OOC_INT32)builder;
  i4 = startColumn;
  i5 = startLine;
  i6 = cstart;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20755)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i2, i0, i6, i3, i5, i4);
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
  i2 = _in(3,i0);
  i3 = (OOC_INT32)builder;
  if (i2) goto l448;
  i1 = currLinePos;
  i2 = cpos;
  i4 = currLineTab;
  i5 = currLine;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21464)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i3, 72, i2, i2, i5, ((i2-i1)+i4));
  goto l449;
l448:
  i2 = currLinePos;
  i4 = cpos;
  i5 = currLineTab;
  i6 = currLine;
  OOC_Scanner_Pragma__AddSymbol((void*)(OOC_INT32)&pragma, (RT0__Struct)i1, (void*)(OOC_INT32)&inputMode, 72, i4, i4, i6, ((i4-i2)+i5));
l449:
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&pragma+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21593)))), OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory)),OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory)((OOC_Scanner_Builder__Builder)i3, (OOC_Config_Pragmas__History)i1);
  i0 = _in(4,i0);
  if (i0) goto l452;
  i0=OOC_FALSE;
  goto l454;
l452:
  i0 = eolIsCRLF;
  
l454:
  if (!i0) goto l456;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21712))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21712))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21721)))), OOC_Error__ListDesc_SetAdjustCharPos)),OOC_Error__ListDesc_SetAdjustCharPos)((OOC_Error__List)i0, OOC_TRUE);
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
      sum = (OOC_INT32)0;
      i = (OOC_INT32)0;
      i0 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index((OOC_INT32)0, ident_0d, OOC_UINT16, 22089)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=(OOC_INT32)0;i1=(OOC_INT32)0;
      goto l9;
l3:
      i0=(OOC_INT32)0;i1=(OOC_INT32)0;
l4_loop:
      i2 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(i1, ident_0d, OOC_UINT16, 22130)));
      i0 = i0+i2;
      sum = i0;
      i1 = i1+1;
      i = i1;
      i2 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(i1, ident_0d, OOC_UINT16, 22089)));
      i2 = i2!=(OOC_CHAR8)'\000';
      if (i2) goto l4_loop;
l9:
      i0 = _mod(i0,256);
      j = i0;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
      str = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22232)), (OOC_INT32)0);
      _copy_8((const void*)(OOC_INT32)ident,(void*)(_check_pointer(i1, 22232)),i2);
      i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT16, 22251))*2)+(_check_index(0, 2, OOC_UINT8, 22253)));
      i2 = i2<0;
      if (i2) goto l12;
      i2 = sym;
      *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT16, 22347))*2)+(_check_index(1, 2, OOC_UINT8, 22349))) = i2;
      *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT16, 22375))*8)+(_check_index(1, 2, OOC_UINT8, 22377))*4) = i1;
      goto l13;
l12:
      i2 = sym;
      *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT16, 22281))*2)+(_check_index(0, 2, OOC_UINT8, 22283))) = i2;
      *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT16, 22309))*8)+(_check_index(0, 2, OOC_UINT8, 22311))*4) = i1;
l13:
      return;
      ;
    }


  i = 0;
  i0=0;
l1_loop:
  *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 22466))*2)+(_check_index(0, 2, OOC_UINT8, 22468))) = -1;
  *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 256, OOC_UINT32, 22485))*2)+(_check_index(1, 2, OOC_UINT8, 22487))) = -1;
  *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 22510))*8)+(_check_index(0, 2, OOC_UINT8, 22512))*4) = (OOC_INT32)0;
  *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 256, OOC_UINT32, 22530))*8)+(_check_index(1, 2, OOC_UINT8, 22532))*4) = (OOC_INT32)0;
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
