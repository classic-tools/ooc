#include "OOC/Scanner.d"
#include "__oo2c.h"

void OOC_Scanner__ErrorContextDesc_GetTemplate(OOC_Scanner__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3774))+8);
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
    _failed_case(i1, 3766);
    goto l11;
  }
l11:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4279)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
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
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6241))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6210)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = startLine;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6275)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = startColumn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6326)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6373))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6373))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6382)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      sym = 70;
      return;
      ;
    }

    
    void OOC_Scanner__ScanInput_ErrPos(OOC_INT32 code, OOC_INT32 cpos) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = code;
      OOC_Scanner__ScanInput_Err(i0);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6576))+8);
      i2 = cpos;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6547)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = currLinePos;
      i3 = currLineTab;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6610)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, ((i2-i1)+i3));
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_NextBlock() {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 oldOffset;
      OOC_CHAR8 res;

      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 6818))+8);
      oldOffset = i1;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6850)))), OOC_Scanner_InputBuffer__BufferDesc_NextBlock)),OOC_Scanner_InputBuffer__BufferDesc_NextBlock)((OOC_Scanner_InputBuffer__Buffer)i0);
      res = i0;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6881))+4);
      chars = (OOC_Scanner_InputBuffer__CharArray)i3;
      i3 = *(OOC_INT32*)((_check_pointer(i2, 6908))+8);
      i4 = cpos;
      cpos = (i4-(i3-i1));
      i3 = *(OOC_INT32*)((_check_pointer(i2, 6957))+8);
      i4 = cstart;
      cstart = (i4-(i3-i1));
      i2 = *(OOC_INT32*)((_check_pointer(i2, 7011))+8);
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
      i2 = _check_pointer(i2, 7447);
      i3 = cpos;
      i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT8*)(i2+(_check_index((i3+i1), i4, OOC_UINT32, 7447)));
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
      i0 = _check_pointer(i0, 7646);
      i1 = cpos;
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 7646)));
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner__ScanInput_CompareIdent(OOC_INT32 start, OOC_CHAR8 kw[], OOC_LEN kw_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(0, kw_0d, OOC_UINT32, 8007)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 8033);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = start;
      i3 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(0, kw_0d, OOC_UINT32, 8022)));
      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 8033)));
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
      i3 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i2, kw_0d, OOC_UINT32, 8007)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l11;
      i3=OOC_FALSE;
      goto l13;
l11:
      i3 = _check_pointer(i1, 8033);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i2, kw_0d, OOC_UINT32, 8022)));
      i3 = *(OOC_UINT8*)(i3+(_check_index((i0+i2), i4, OOC_UINT32, 8033)));
      i3 = i5==i3;
      
l13:
      if (i3) goto l8_loop;
l16:
      i0=i2;
l17:
      i1 = *(OOC_UINT8*)((OOC_INT32)kw+(_check_index(i0, kw_0d, OOC_UINT32, 8090)));
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
      i3 = (_mod(i2,16))<10;
      if (i3) goto l4;
      i3 = _check_pointer(i0, 8419);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 8419))) = ((_mod(i2,16))+55);
      goto l5;
l4:
      i3 = _check_pointer(i0, 8360);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 8360))) = ((_mod(i2,16))+48);
l5:
      i2 = i2>>4;
      ch = i2;
      i1 = i1+1;
      i = i1;
      i2 = i2==0;
      if (!i2) goto l1_loop;
l9:
      i2 = _check_pointer(i0, 8542);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 8542))) = (OOC_CHAR8)'\000';
      i1 = i1-1;
      j = 0;
      i = i1;
      i2 = 0<i1;
      if (!i2) goto l17;
      i2=i1;i1=0;
l12_loop:
      i3 = _check_pointer(i0, 8622);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT32, 8622)));
      h = i3;
      i4 = _check_pointer(i0, 8630);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i6 = _check_pointer(i0, 8640);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 8640)));
      *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT32, 8630))) = i6;
      i4 = _check_pointer(i0, 8648);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 8648))) = i3;
      i1 = i1+1;
      j = i1;
      i2 = i2-1;
      i3 = i1<i2;
      i = i2;
      if (i3) goto l12_loop;
l17:
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8716)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "char_code", 10, (Msg__StringPtr)i0);
      return;
      ;
    }


  i0 = (OOC_INT32)builder;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8806));
  b = (OOC_Scanner_InputBuffer__Buffer)i1;
  lastError = (Msg__Msg)(OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8857))+4);
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
  i2 = _check_pointer(i0, 9232);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = cpos;
  i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 9232)));
  switch (i2) {
  case (OOC_CHAR8)'\000':
    i0 = (OOC_INT32)b;
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9289)))), OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)),OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)((OOC_Scanner_InputBuffer__Buffer)i0, i4);
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
    i0 = _check_pointer(i0, 9560);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i4+1), i2, OOC_UINT32, 9560)));
    i0 = i0==(OOC_CHAR8)'\000';
    if (!i0) goto l16;
    i0 = OOC_Scanner__ScanInput_NextBlock();
    dummy = i0;
l16:
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 9709);
    i2 = cpos;
    i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i2+1), i3, OOC_UINT32, 9709)));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10206)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i3, 77, i2, i0, i5, i4);
l32:
  i2 = currLinePos;
  cstart = i0;
  i3 = currLine;
  i4 = currLineTab;
  startLine = i3;
  startColumn = ((i0-i2)+i4);
  i2 = (OOC_INT32)chars;
  i3 = _check_pointer(i2, 10647);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 10647)));
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
    i2 = _check_pointer(i0, 11374);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = (OOC_INT32)chars;
    i4 = _check_pointer(i4, 11386);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i6 = cpos;
    i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT32, 11386)));
    *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 11374))) = i4;
    i2 = _check_pointer(i0, 11400);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT8, 11400))) = (OOC_CHAR8)'\000';
    i2 = (OOC_INT32)lastError;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11430)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "sym_string", 11, (Msg__StringPtr)i0);
    cpos = (i6+1);
    goto l429;
l38_loop:
    i0 = cstart;
    cpos = i0;
    sum = 0;
    i2 = (OOC_INT32)chars;
    i3=i0;i0=0;
l39_loop:
    i4 = _check_pointer(i2, 10964);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 10964)));
    i0 = i0+i4;
    sum = i0;
    i3 = i3+1;
    cpos = i3;
    i4 = _check_pointer(i2, 11037);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11037)));
    i4 = (OOC_CHAR8)'A'<=(_cap(i4));
    if (i4) goto l42;
    i4=OOC_FALSE;
    goto l44;
l42:
    i4 = _check_pointer(i2, 11059);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11059)));
    i4 = (_cap(i4))<=(OOC_CHAR8)'Z';
    
l44:
    if (i4) goto l50;
    i4 = _check_pointer(i2, 11111);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11111)));
    i4 = (OOC_CHAR8)'0'<=i4;
    if (i4) goto l48;
    i4=OOC_FALSE;
    goto l52;
l48:
    i4 = _check_pointer(i2, 11127);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11127)));
    i4 = i4<=(OOC_CHAR8)'9';
    
    goto l52;
l50:
    i4=OOC_TRUE;
l52:
    if (i4) goto l54;
    i4 = _check_pointer(i2, 11171);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 11171)));
    i4 = i4==(OOC_CHAR8)'_';
    
    goto l55;
l54:
    i4=OOC_TRUE;
l55:
    i4 = !i4;
    if (!i4) goto l39_loop;
l59:
    i0 = _check_pointer(i2, 11208);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 11208)));
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
    sym = 43;
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
    i5 = _check_pointer(i3, 11715);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11715)));
    i0 = i0+i5;
    sum = i0;
    i4 = i4+1;
    cpos = i4;
    i5 = _check_pointer(i3, 11784);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11784)));
    i5 = (OOC_CHAR8)'A'<=(_cap(i5));
    if (i5) goto l74;
    i5=OOC_FALSE;
    goto l76;
l74:
    i5 = _check_pointer(i3, 11806);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11806)));
    i5 = (_cap(i5))<=(OOC_CHAR8)'Z';
    
l76:
    if (i5) goto l82;
    i5 = _check_pointer(i3, 11856);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11856)));
    i5 = (OOC_CHAR8)'0'<=i5;
    if (i5) goto l80;
    i5=OOC_FALSE;
    goto l84;
l80:
    i5 = _check_pointer(i3, 11872);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11872)));
    i5 = i5<=(OOC_CHAR8)'9';
    
    goto l84;
l82:
    i5=OOC_TRUE;
l84:
    if (i5) goto l90;
    i5 = _check_pointer(i3, 11914);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 11914)));
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
    i0 = _check_pointer(i3, 11990);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 11990)));
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
    i0 = _mod(i0,128);
    sym = 43;
    i = i0;
    i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT32, 12128))*2)+(_check_index(0, 2, OOC_UINT8, 12130)));
    i2 = i2>=0;
    if (!i2) goto l429;
    i2 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT32, 12216))*8)+(_check_index(0, 2, OOC_UINT8, 12218))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT32, 12216))*8)+(_check_index(0, 2, OOC_UINT8, 12218))*4);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12222)), (OOC_INT32)0);
    i3 = cstart;
    i0 = OOC_Scanner__ScanInput_CompareIdent(i3, (void*)(_check_pointer(i2, 12222)), i0);
    if (i0) goto l115;
    i0 = i;
    i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT32, 12283))*2)+(_check_index(1, 2, OOC_UINT8, 12285)));
    i2 = i2>=0;
    if (i2) goto l110;
    i0=OOC_FALSE;
    goto l112;
l110:
    i2 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT32, 12325))*8)+(_check_index(1, 2, OOC_UINT8, 12327))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT32, 12325))*8)+(_check_index(1, 2, OOC_UINT8, 12327))*4);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12331)), (OOC_INT32)0);
    i3 = cstart;
    i0 = OOC_Scanner__ScanInput_CompareIdent(i3, (void*)(_check_pointer(i2, 12331)), i0);
    
l112:
    if (!i0) goto l116;
    i0 = i;
    i0 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT32, 12363))*2)+(_check_index(1, 2, OOC_UINT8, 12365)));
    sym = i0;
    goto l116;
l115:
    i0 = i;
    i0 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT32, 12254))*2)+(_check_index(0, 2, OOC_UINT8, 12256)));
    sym = i0;
l116:
    i0 = sym;
    i2 = i0>=63;
    if (i2) goto l119;
    i0=OOC_FALSE;
    goto l121;
l119:
    i0 = i0<67;
    
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
    i3 = _check_pointer(i0, 12928);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12928)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l134;
    i3=OOC_FALSE;
    goto l136;
l134:
    i3 = _check_pointer(i0, 12944);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12944)));
    i3 = i3<=(OOC_CHAR8)'9';
    
l136:
    if (i3) goto l142;
    i3 = _check_pointer(i0, 12995);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 12995)));
    i3 = (OOC_CHAR8)'A'<=i3;
    if (i3) goto l140;
    i3=OOC_FALSE;
    goto l143;
l140:
    i3 = _check_pointer(i0, 13011);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13011)));
    i3 = i3<=(OOC_CHAR8)'F';
    
    goto l143;
l142:
    i3=OOC_TRUE;
l143:
    i3 = !i3;
    if (!i3) goto l131_loop;
l147:
    i0 = _check_pointer(i0, 13047);
    i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i3, OOC_UINT32, 13047)));
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
    i0 = _check_pointer(i0, 13122);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 13122)));
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
    i2 = _check_pointer(i0, 14353);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14353)));
    i2 = i2==(OOC_CHAR8)'H';
    if (i2) goto l196;
    i2 = _check_pointer(i0, 14453);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14453)));
    i2 = i2==(OOC_CHAR8)'X';
    if (i2) goto l194;
    sym = 35;
    i2 = cstart;
    i3 = i2!=i4;
    i = i2;
    if (i3) goto l168;
    i3=OOC_FALSE;
    goto l170;
l168:
    i3 = _check_pointer(i0, 14707);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14707)));
    i3 = (OOC_CHAR8)'0'<=i3;
    
l170:
    if (i3) goto l172;
    i3=OOC_FALSE;
    goto l174;
l172:
    i3 = _check_pointer(i0, 14720);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14720)));
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
    i3 = _check_pointer(i0, 14707);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14707)));
    i3 = (OOC_CHAR8)'0'<=i3;
    
l182:
    if (i3) goto l184;
    i3=OOC_FALSE;
    goto l186;
l184:
    i3 = _check_pointer(i0, 14720);
    i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i5, OOC_UINT32, 14720)));
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
    sym = 37;
    cpos = (i4+1);
    goto l429;
l196:
    sym = 36;
    cpos = (i4+1);
    goto l429;
l198:
    i0 = cpos;
    sym = 38;
    cpos = (i0+1);
l199_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 13380);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13380)));
    i2 = (OOC_CHAR8)'0'<=i2;
    if (i2) goto l202;
    i2=OOC_FALSE;
    goto l204;
l202:
    i2 = _check_pointer(i0, 13396);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13396)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l204:
    if (!i2) goto l214;
l205_loop:
    i2 = cpos;
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 13380);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13380)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l208;
    i2=OOC_FALSE;
    goto l210;
l208:
    i3 = _check_pointer(i0, 13396);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 13396)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l210:
    if (i2) goto l205_loop;
l214:
    i0 = _check_pointer(i0, 13477);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 13477)));
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
    i2 = _check_pointer(i0, 13545);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13545)));
    i2 = i2==(OOC_CHAR8)'E';
    if (i2) goto l225;
    i2 = _check_pointer(i0, 13568);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 13568)));
    i2 = i2==(OOC_CHAR8)'D';
    
    goto l227;
l225:
    i2=OOC_TRUE;
l227:
    if (!i2) goto l429;
    i0 = _check_pointer(i0, 13608);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 13608)));
    i0 = i0==(OOC_CHAR8)'D';
    if (!i0) goto l231;
    sym = 39;
l231:
    OOC_Scanner__ScanInput_Lookahead(2);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 13804);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13804)));
    i3 = i3==(OOC_CHAR8)'-';
    if (i3) goto l234;
    i3 = _check_pointer(i2, 13827);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13827)));
    i3 = i3==(OOC_CHAR8)'+';
    
    goto l236;
l234:
    i3=OOC_TRUE;
l236:
    if (!i3) goto l239;
    i0 = i0+1;
    cpos = i0;
    
l239:
    i3 = _check_pointer(i2, 13916);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 13916)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l242;
    i2=OOC_FALSE;
    goto l244;
l242:
    i2 = _check_pointer(i2, 13932);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 13932)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l244:
    if (i2) goto l246_loop;
    OOC_Scanner__ScanInput_ErrPos(6, i0);
    goto l429;
l246_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 14008);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14008)));
    i2 = (OOC_CHAR8)'0'<=i2;
    if (i2) goto l249;
    i2=OOC_FALSE;
    goto l251;
l249:
    i2 = _check_pointer(i0, 14024);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14024)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l251:
    if (!i2) goto l261;
l252_loop:
    i2 = cpos;
    i2 = i2+1;
    cpos = i2;
    i3 = _check_pointer(i0, 14008);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 14008)));
    i3 = (OOC_CHAR8)'0'<=i3;
    if (i3) goto l255;
    i2=OOC_FALSE;
    goto l257;
l255:
    i3 = _check_pointer(i0, 14024);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 14024)));
    i2 = i2<=(OOC_CHAR8)'9';
    
l257:
    if (i2) goto l252_loop;
l261:
    i0 = _check_pointer(i0, 14117);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 14117)));
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
    i2 = _check_pointer(i2, 14969);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 14969)));
    i0 = i0==(OOC_CHAR8)'"';
    if (i0) goto l276;
    sym = 41;
    i0=41;
    goto l278_loop;
l276:
    sym = 42;
    i0=42;
l278_loop:
    i0 = (OOC_INT32)chars;
    i2 = cstart;
    i3=i2;
l279_loop:
    i3 = i3+1;
    cpos = i3;
    i4 = _check_pointer(i0, 15289);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15289)));
    i4 = i4<(OOC_CHAR8)' ';
    if (i4) goto l282;
    i4 = _check_pointer(i0, 15312);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i6 = _check_pointer(i0, 15326);
    i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
    i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15312)));
    i5 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 15326)));
    i4 = i4==i5;
    
    goto l284;
l282:
    i4=OOC_TRUE;
l284:
    if (!i4) goto l279_loop;
l287:
    i0 = _check_pointer(i0, 15356);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 15356)));
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
    i2 = _check_pointer(i0, 15431);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i5 = _check_pointer(i0, 15445);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i7 = cstart;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 15431)));
    i3 = *(OOC_UINT8*)(i5+(_check_index(i7, i6, OOC_UINT32, 15445)));
    i2 = i2!=i3;
    if (i2) goto l298;
    cpos = (i4+1);
    goto l429;
l298:
    i2 = _check_pointer(i0, 15479);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 15479)));
    i2 = i2==(OOC_CHAR8)'\012';
    if (i2) goto l301;
    i0 = _check_pointer(i0, 15507);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i2, OOC_UINT32, 15507)));
    i0 = i0==(OOC_CHAR8)'\015';
    
    goto l303;
l301:
    i0=OOC_TRUE;
l303:
    if (i0) goto l305;
    OOC_Scanner__ScanInput_ErrPos(2, i4);
    i0 = (OOC_INT32)chars;
    i0 = _check_pointer(i0, 15662);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i3 = cpos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i3, i2, OOC_UINT32, 15662)));
    OOC_Scanner__ScanInput_SetCharAttrib(i0);
    goto l429;
l305:
    OOC_Scanner__ScanInput_Err(3);
    goto l429;
  case (OOC_CHAR8)'~':
    sym = 33;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'{':
    sym = 32;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'.':
    OOC_Scanner__ScanInput_Lookahead(2);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 15910);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 15910)));
    i3 = i3==(OOC_CHAR8)'.';
    if (i3) goto l313;
    sym = 18;
    i2=18;
    goto l429;
l313:
    i0 = i0+1;
    sym = 21;
    cpos = i0;
    i2 = _check_pointer(i2, 16002);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 16002)));
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
    sym = 73;
    cpos = i0;
    i2=73;
    goto l429;
  case (OOC_CHAR8)'^':
    sym = 17;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)'[':
    sym = 31;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)':':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i2 = _check_pointer(i2, 16368);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 16368)));
    i2 = i2==(OOC_CHAR8)'=';
    if (i2) goto l328;
    sym = 20;
    i2=20;
    goto l429;
l328:
    i0 = i0+1;
    sym = 34;
    cpos = i0;
    i2=34;
    goto l429;
  case (OOC_CHAR8)'(':
    OOC_Scanner__ScanInput_Lookahead(1);
    i0 = cpos;
    i0 = i0+1;
    cpos = i0;
    i2 = (OOC_INT32)chars;
    i3 = _check_pointer(i2, 16562);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 16562)));
    i3 = i3==(OOC_CHAR8)'*';
    if (i3) goto l333;
    sym = 30;
    goto l429;
l333:
    i3 = _check_pointer(i2, 16639);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index((i0+1), i4, OOC_UINT32, 16639)));
    i3 = i3==(OOC_CHAR8)'*';
    if (i3) goto l336;
    i0=OOC_FALSE;
    goto l338;
l336:
    i2 = _check_pointer(i2, 16663);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i2+(_check_index((i0+2), i3, OOC_UINT32, 16663)));
    i0 = i0!=(OOC_CHAR8)')';
    
l338:
    if (i0) goto l340;
    sym = 74;
    goto l341;
l340:
    sym = 75;
l341:
    sum = 1;
l342_loop:
    i0 = (OOC_INT32)chars;
    i2 = _check_pointer(i0, 16842);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = cpos;
    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 16842)));
    switch (i2) {
    case (OOC_CHAR8)'\000':
      i0 = (OOC_INT32)b;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16907)))), OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)),OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer)((OOC_Scanner_InputBuffer__Buffer)i0, i4);
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
      i0 = _check_pointer(i0, 17215);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i4+1), i2, OOC_UINT32, 17215)));
      i0 = i0==(OOC_CHAR8)'\000';
      if (!i0) goto l356;
      i0 = OOC_Scanner__ScanInput_NextBlock();
      dummy = i0;
l356:
      i0 = (OOC_INT32)chars;
      i0 = _check_pointer(i0, 17376);
      i2 = cpos;
      i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i2+1), i3, OOC_UINT32, 17376)));
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
      i2 = _check_pointer(i2, 17811);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 17811)));
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
      i2 = _check_pointer(i2, 18064);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 18064)));
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
    i3 = _check_pointer(i2, 18441);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 18441)));
    i3 = i3==(OOC_CHAR8)')';
    if (i3) goto l396;
    i2 = _check_pointer(i2, 18535);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 18535)));
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
    sym = 72;
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
    i3 = _check_pointer(i2, 19205);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 19205)));
    i3 = i3==(OOC_CHAR8)'=';
    if (i3) goto l415;
    i2 = _check_pointer(i2, 19285);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 19285)));
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
    sym = 71;
    cpos = i0;
    i2=71;
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
    i2 = _check_pointer(i2, 19530);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 19530)));
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
    sym = 45;
    cpos = (i0+1);
    goto l429;
  case (OOC_CHAR8)';':
    sym = 44;
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
    i2 = _check_pointer(i0, 20045);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = (OOC_INT32)chars;
    i4 = _check_pointer(i4, 20057);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i6 = cpos;
    i4 = *(OOC_UINT8*)(i4+(_check_index(i6, i5, OOC_UINT32, 20057)));
    *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 20045))) = i4;
    i2 = _check_pointer(i0, 20071);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    *(OOC_UINT8*)(i2+(_check_index(1, i3, OOC_UINT8, 20071))) = (OOC_CHAR8)'\000';
    i2 = (OOC_INT32)lastError;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20099)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "sym_string", 11, (Msg__StringPtr)i0);
    cpos = (i6+1);
    goto l429;
  }
l429:
  i0 = sym;
  i2 = i0==71;
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
  *(OOC_INT32*)((_check_pointer(i2, 20729))+16) = i3;
  i2 = (OOC_INT32)builder;
  i4 = startColumn;
  i5 = startLine;
  i6 = cstart;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20776)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i2, i0, i6, i3, i5, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21485)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i3, 69, i2, i2, i5, ((i2-i1)+i4));
  goto l449;
l448:
  i2 = currLinePos;
  i4 = cpos;
  i5 = currLineTab;
  i6 = currLine;
  OOC_Scanner_Pragma__AddSymbol((void*)(OOC_INT32)&pragma, (RT0__Struct)i1, (void*)(OOC_INT32)&inputMode, 69, i4, i4, i6, ((i4-i2)+i5));
l449:
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&pragma+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21614)))), OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory)),OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory)((OOC_Scanner_Builder__Builder)i3, (OOC_Config_Pragmas__History)i1);
  i0 = _in(4,i0);
  if (i0) goto l452;
  i0=OOC_FALSE;
  goto l454;
l452:
  i0 = eolIsCRLF;
  
l454:
  if (!i0) goto l456;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21733))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21733))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21742)))), OOC_Error__ListDesc_SetAdjustCharPos)),OOC_Error__ListDesc_SetAdjustCharPos)((OOC_Error__List)i0, OOC_TRUE);
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
      i0 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(0, ident_0d, OOC_UINT16, 22110)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=0;i1=0;
      goto l9;
l3:
      i0=0;i1=0;
l4_loop:
      i2 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(i1, ident_0d, OOC_UINT16, 22151)));
      i0 = i0+i2;
      sum = i0;
      i1 = i1+1;
      i = i1;
      i2 = *(OOC_UINT8*)((OOC_INT32)ident+(_check_index(i1, ident_0d, OOC_UINT16, 22110)));
      i2 = i2!=(OOC_CHAR8)'\000';
      if (i2) goto l4_loop;
l9:
      i0 = _mod(i0,128);
      j = i0;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
      str = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22253)), (OOC_INT32)0);
      _copy_8((const void*)(OOC_INT32)ident,(void*)(_check_pointer(i1, 22253)),i2);
      i2 = *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT16, 22272))*2)+(_check_index(0, 2, OOC_UINT8, 22274)));
      i2 = i2<0;
      if (i2) goto l12;
      i2 = sym;
      *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT16, 22368))*2)+(_check_index(1, 2, OOC_UINT8, 22370))) = i2;
      *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT16, 22396))*8)+(_check_index(1, 2, OOC_UINT8, 22398))*4) = i1;
      goto l13;
l12:
      i2 = sym;
      *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT16, 22302))*2)+(_check_index(0, 2, OOC_UINT8, 22304))) = i2;
      *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT16, 22330))*8)+(_check_index(0, 2, OOC_UINT8, 22332))*4) = i1;
l13:
      return;
      ;
    }


  i = 0;
  i0=0;
l1_loop:
  *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT32, 22487))*2)+(_check_index(0, 2, OOC_UINT8, 22489))) = -1;
  *(OOC_INT8*)(((OOC_INT32)OOC_Scanner__kwSym+(_check_index(i0, 128, OOC_UINT32, 22506))*2)+(_check_index(1, 2, OOC_UINT8, 22508))) = -1;
  *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT32, 22531))*8)+(_check_index(0, 2, OOC_UINT8, 22533))*4) = (OOC_INT32)0;
  *(OOC_INT32*)(((OOC_INT32)OOC_Scanner__kwStr+(_check_index(i0, 128, OOC_UINT32, 22551))*8)+(_check_index(1, 2, OOC_UINT8, 22553))*4) = (OOC_INT32)0;
  i0 = i0+1;
  i = i0;
  i1 = i0<=127;
  if (i1) goto l1_loop;
l5:
  OOC_Scanner__InitKeywords_KW("ARRAY", 6, 59);
  OOC_Scanner__InitKeywords_KW("BEGIN", 6, 62);
  OOC_Scanner__InitKeywords_KW("BY", 3, 29);
  OOC_Scanner__InitKeywords_KW("CASE", 5, 51);
  OOC_Scanner__InitKeywords_KW("CONST", 6, 63);
  OOC_Scanner__InitKeywords_KW("DIV", 4, 3);
  OOC_Scanner__InitKeywords_KW("DO", 3, 27);
  OOC_Scanner__InitKeywords_KW("ELSE", 5, 47);
  OOC_Scanner__InitKeywords_KW("ELSIF", 6, 48);
  OOC_Scanner__InitKeywords_KW("END", 4, 46);
  OOC_Scanner__InitKeywords_KW("EXIT", 5, 57);
  OOC_Scanner__InitKeywords_KW("FOR", 4, 55);
  OOC_Scanner__InitKeywords_KW("IF", 3, 50);
  OOC_Scanner__InitKeywords_KW("IMPORT", 7, 67);
  OOC_Scanner__InitKeywords_KW("IN", 3, 15);
  OOC_Scanner__InitKeywords_KW("IS", 3, 16);
  OOC_Scanner__InitKeywords_KW("LOOP", 5, 54);
  OOC_Scanner__InitKeywords_KW("MOD", 4, 4);
  OOC_Scanner__InitKeywords_KW("MODULE", 7, 68);
  OOC_Scanner__InitKeywords_KW("NIL", 4, 40);
  OOC_Scanner__InitKeywords_KW("OF", 3, 25);
  OOC_Scanner__InitKeywords_KW("OR", 3, 8);
  OOC_Scanner__InitKeywords_KW("POINTER", 8, 61);
  OOC_Scanner__InitKeywords_KW("PROCEDURE", 10, 66);
  OOC_Scanner__InitKeywords_KW("RECORD", 7, 60);
  OOC_Scanner__InitKeywords_KW("REPEAT", 7, 53);
  OOC_Scanner__InitKeywords_KW("RETURN", 7, 58);
  OOC_Scanner__InitKeywords_KW("THEN", 5, 26);
  OOC_Scanner__InitKeywords_KW("TO", 3, 28);
  OOC_Scanner__InitKeywords_KW("TYPE", 5, 64);
  OOC_Scanner__InitKeywords_KW("UNTIL", 6, 49);
  OOC_Scanner__InitKeywords_KW("VAR", 4, 65);
  OOC_Scanner__InitKeywords_KW("WHILE", 6, 52);
  OOC_Scanner__InitKeywords_KW("WITH", 5, 56);
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
