#include "OOC/Doc/Input/Texinfo.d"
#include "__oo2c.h"

void OOC_Doc_Input_Texinfo__ErrorContextDesc_GetTemplate(OOC_Doc_Input_Texinfo__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4279))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,107,110,111,119,110,32,84,101,120,105,110,102,111,32,99,111,109,109,97,110,100,32,110,97,109,101,32,96,64,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,97,114,103,117,109,101,110,116,32,100,101,108,105,109,105,116,101,114,32,96,123,39,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,97,114,103,117,109,101,110,116,32,100,101,108,105,109,105,116,101,114,32,96,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){74,117,110,107,32,97,102,116,101,114,32,101,110,100,32,111,102,32,116,101,120,116,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){74,117,110,107,32,97,116,32,101,110,100,32,111,102,32,108,105,110,101,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,116,101,109,32,109,97,114,107,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,99,111,109,109,97,110,100,32,109,117,115,116,32,115,116,97,110,100,32,97,116,32,116,104,101,32,98,101,103,105,110,110,105,110,103,32,111,102,32,116,104,101,32,108,105,110,101,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,99,111,109,109,97,110,100,32,96,64,101,110,100,32,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){70,111,117,110,100,32,96,123,39,32,111,117,116,115,105,100,101,32,111,102,32,97,32,99,111,109,109,97,110,100,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){70,111,117,110,100,32,96,125,39,32,111,117,116,115,105,100,101,32,111,102,32,97,32,99,111,109,109,97,110,100,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){67,111,109,109,97,110,100,32,96,64,36,123,110,97,109,101,125,39,32,114,101,113,117,105,114,101,115,32,36,123,109,105,110,105,109,117,109,125,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){82,101,113,117,105,114,101,32,109,97,114,107,117,112,32,99,111,109,109,97,110,100,32,97,102,116,101,114,32,96,64,116,97,98,108,101,39,0}),(void*)(OOC_INT32)t,128);
    goto l15;
  default:
    _failed_case(i1, 4271);
    goto l15;
  }
l15:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5153)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static OOC_Doc_Input_Texinfo__Token OOC_Doc_Input_Texinfo__Tokenize(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray str, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_Doc_Input_Texinfo__Token tokenList;
  OOC_Doc_Input_Texinfo__Token tokenTail;
  OOC_INT32 pos;
  OOC_CHAR8 beginningOfLine;
  OOC_INT32 currLine;
  OOC_INT32 currLinePos;
  OOC_INT32 currLineTab;
  OOC_INT32 startPos;
  OOC_INT32 startColumn;
  OOC_INT32 i;
  OOC_CHAR8 name[16];
  OOC_INT32 len;
  Msg__Msg lastError;
  auto void OOC_Doc_Input_Texinfo__Tokenize_Err(OOC_INT32 code);
  auto void OOC_Doc_Input_Texinfo__Tokenize_Append(OOC_Doc_Input_Texinfo__Token t);
  auto void OOC_Doc_Input_Texinfo__Tokenize_InitToken(OOC_Doc_Input_Texinfo__Token t, OOC_INT32 id);
  auto void OOC_Doc_Input_Texinfo__Tokenize_AddToken(OOC_INT32 id);
  auto void OOC_Doc_Input_Texinfo__Tokenize_AddText();
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_LookingAt(const OOC_CHAR8 pattern__ref[], OOC_LEN pattern_0d);
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_OutOfBandCommand();
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_IsTextChar();
  auto void OOC_Doc_Input_Texinfo__Tokenize_Newline(OOC_INT32 incr);
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_BeginningOfLine(OOC_INT32 pos);
    
    void OOC_Doc_Input_Texinfo__Tokenize_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__texinfoContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)sym;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5802))+16);
      i2 = startPos;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5776)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i1+i2));
      i0 = (OOC_INT32)lastError;
      i1 = currLine;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5834)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = startColumn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5884)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5937)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Tokenize_Append(OOC_Doc_Input_Texinfo__Token t) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)tokenList;
      i1 = i1==(OOC_INT32)0;
      *(OOC_INT32*)(_check_pointer(i0, 6028)) = (OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)tokenTail;
      *(OOC_INT32*)(_check_pointer(i1, 6126)) = i0;
      goto l4;
l3:
      tokenList = (OOC_Doc_Input_Texinfo__Token)i0;
l4:
      tokenTail = (OOC_Doc_Input_Texinfo__Token)i0;
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Tokenize_InitToken(OOC_Doc_Input_Texinfo__Token t, OOC_INT32 id) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)t;
      *(OOC_INT32*)(_check_pointer(i0, 6253)) = (OOC_INT32)0;
      i1 = id;
      *(OOC_INT8*)((_check_pointer(i0, 6275))+5) = i1;
      i1 = (OOC_INT32)sym;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6322))+16);
      i2 = startPos;
      *(OOC_INT32*)((_check_pointer(i0, 6310))+8) = (i1+i2);
      i1 = currLine;
      *(OOC_INT32*)((_check_pointer(i0, 6345))+12) = i1;
      i1 = startColumn;
      *(OOC_INT32*)((_check_pointer(i0, 6372))+16) = i1;
      i1 = beginningOfLine;
      *(OOC_UINT8*)((_check_pointer(i0, 6404))+4) = i1;
      *(OOC_INT32*)((_check_pointer(i0, 6437))+20) = (OOC_INT32)0;
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Tokenize_AddToken(OOC_INT32 id) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Input_Texinfo__Token.baseTypes[0]);
      i1 = id;
      OOC_Doc_Input_Texinfo__Tokenize_InitToken((OOC_Doc_Input_Texinfo__Token)i0, i1);
      OOC_Doc_Input_Texinfo__Tokenize_Append((OOC_Doc_Input_Texinfo__Token)i0);
      beginningOfLine = OOC_FALSE;
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Tokenize_AddText() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      OOC_Doc_Input_Texinfo__Token t;
      OOC_INT32 j;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Input_Texinfo__Token.baseTypes[0]);
      t = (OOC_Doc_Input_Texinfo__Token)i0;
      OOC_Doc_Input_Texinfo__Tokenize_InitToken((OOC_Doc_Input_Texinfo__Token)i0, 40);
      OOC_Doc_Input_Texinfo__Tokenize_Append((OOC_Doc_Input_Texinfo__Token)i0);
      i1 = startPos;
      i2 = pos;
      i3 = i2-i1;
      beginningOfLine = OOC_FALSE;
      *(OOC_INT32*)((_check_pointer(i0, 6887))+20) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i3+1)));
      i2 = i2-1;
      i4 = i1<=i2;
      j = i1;
      if (!i4) goto l8;
      i4 = (OOC_INT32)str;
      i5=i1;
l3_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6956))+20);
      i6 = _check_pointer(i6, 6960);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i8 = _check_pointer(i4, 6979);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = *(OOC_UINT8*)(i8+(_check_index(i5, i9, OOC_UINT32, 6979)));
      *(OOC_UINT8*)(i6+(_check_index((i5-i1), i7, OOC_UINT32, 6960))) = i8;
      i5 = i5+1;
      i6 = i5<=i2;
      j = i5;
      if (i6) goto l3_loop;
l8:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7001))+20);
      i0 = _check_pointer(i0, 7006);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 7006))) = (OOC_CHAR8)'\000';
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_LookingAt(const OOC_CHAR8 pattern__ref[], OOC_LEN pattern_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_ALLOCATE_VPAR(pattern,OOC_CHAR8 ,pattern_0d)
      OOC_INT32 i;

      OOC_INITIALIZE_VPAR(pattern__ref,pattern,OOC_CHAR8 ,pattern_0d)
      i = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)pattern+(_check_index(0, pattern_0d, OOC_UINT32, 7174)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)str;
      i0 = _check_pointer(i0, 7190);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = pos;
      i3 = *(OOC_UINT8*)((OOC_INT32)pattern+(_check_index(0, pattern_0d, OOC_UINT32, 7207)));
      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 7190)));
      i0 = i0==i3;
      
l5:
      if (i0) goto l7;
      i0=0;
      goto l17;
l7:
      i0 = pos;
      i1 = (OOC_INT32)str;
      i2=0;
l8_loop:
      i2 = i2+1;
      i = i2;
      i3 = *(OOC_UINT8*)((OOC_INT32)pattern+(_check_index(i2, pattern_0d, OOC_UINT32, 7174)));
      i3 = i3!=(OOC_CHAR8)'\000';
      if (i3) goto l11;
      i3=OOC_FALSE;
      goto l13;
l11:
      i3 = _check_pointer(i1, 7190);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i5 = *(OOC_UINT8*)((OOC_INT32)pattern+(_check_index(i2, pattern_0d, OOC_UINT32, 7207)));
      i3 = *(OOC_UINT8*)(i3+(_check_index((i0+i2), i4, OOC_UINT32, 7190)));
      i3 = i3==i5;
      
l13:
      if (i3) goto l8_loop;
l16:
      i0=i2;
l17:
      i0 = *(OOC_UINT8*)((OOC_INT32)pattern+(_check_index(i0, pattern_0d, OOC_UINT32, 7263)));
      return (i0==(OOC_CHAR8)'\000');
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_OutOfBandCommand() {
      register OOC_INT32 i0;

      i0 = OOC_Doc_Input_Texinfo__Tokenize_LookingAt("---", 4);
      if (i0) goto l3;
      i0 = OOC_Doc_Input_Texinfo__Tokenize_LookingAt("``", 3);
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      i0 = OOC_Doc_Input_Texinfo__Tokenize_LookingAt("\047\047", 3);
      
      goto l8;
l7:
      i0=OOC_TRUE;
l8:
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_IsTextChar() {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)str;
      i0 = _check_pointer(i0, 7509);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = pos;
      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 7509)));
      switch (i0) {
      case (OOC_CHAR8)'@':
      case (OOC_CHAR8)'{':
      case (OOC_CHAR8)'}':
      case (OOC_CHAR8)',':
      case (OOC_CHAR8)'\012':
      case (OOC_CHAR8)'\015':
        return OOC_FALSE;
        goto l4;
      default:
        return OOC_TRUE;
        goto l4;
      }
l4:
      _failed_function(7461); return 0;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Tokenize_Newline(OOC_INT32 incr) {
      register OOC_INT32 i0,i1;

      i0 = pos;
      i1 = incr;
      i0 = i0+i1;
      pos = i0;
      beginningOfLine = OOC_TRUE;
      currLinePos = i0;
      i0 = currLine;
      currLineTab = 0;
      currLine = (i0+1);
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Tokenize_BeginningOfLine(OOC_INT32 pos) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = pos;
      i1 = i0!=0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l9;
l3:
      i1 = (OOC_INT32)str;
      i2 = _check_pointer(i1, 7950);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT8*)(i2+(_check_index((i0-1), i3, OOC_UINT32, 7950)));
      i2 = i2==(OOC_CHAR8)'\002';
      if (i2) goto l6;
      i1 = _check_pointer(i1, 8005);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i2, OOC_UINT32, 8005)));
      i0 = i0==(OOC_CHAR8)'\003';
      
      goto l9;
l6:
      i0=OOC_TRUE;
l9:
      if (!i0) goto l24;
      i0 = (OOC_INT32)str;
l11_loop:
      i1 = pos;
      i1 = i1-1;
      pos = i1;
      i2 = i1!=0;
      if (i2) goto l14;
      i1=OOC_FALSE;
      goto l20;
l14:
      i2 = _check_pointer(i0, 7950);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 7950)));
      i2 = i2==(OOC_CHAR8)'\002';
      if (i2) goto l17;
      i2 = _check_pointer(i0, 8005);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = *(OOC_UINT8*)(i2+(_check_index((i1-1), i3, OOC_UINT32, 8005)));
      i1 = i1==(OOC_CHAR8)'\003';
      
      goto l20;
l17:
      i1=OOC_TRUE;
l20:
      if (i1) goto l11_loop;
l24:
      i0 = pos;
      i1 = i0==0;
      if (i1) goto l27;
      i1 = (OOC_INT32)str;
      i1 = _check_pointer(i1, 8101);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i2, OOC_UINT32, 8101)));
      i1 = i1==(OOC_CHAR8)'\015';
      
      goto l29;
l27:
      i1=OOC_TRUE;
l29:
      if (i1) goto l31;
      i1 = (OOC_INT32)str;
      i1 = _check_pointer(i1, 8128);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i1+(_check_index((i0-1), i2, OOC_UINT32, 8128)));
      i0 = i0==(OOC_CHAR8)'\012';
      
      goto l32;
l31:
      i0=OOC_TRUE;
l32:
      return i0;
      ;
    }


  tokenList = (OOC_Doc_Input_Texinfo__Token)(OOC_INT32)0;
  tokenTail = (OOC_Doc_Input_Texinfo__Token)(OOC_INT32)0;
  pos = 0;
  beginningOfLine = OOC_TRUE;
  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8278))+20);
  currLine = i1;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8305))+24);
  currLinePos = (-i0);
  currLineTab = 0;
  i0 = (OOC_INT32)str;
  i0 = _check_pointer(i0, 8352);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 8352)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l108;
l3_loop:
  i0 = pos;
  i1 = currLinePos;
  i2 = currLineTab;
  i1 = (i0-i1)+i2;
  startPos = i0;
  startColumn = i1;
  i3 = (OOC_INT32)str;
  i4 = _check_pointer(i3, 8454);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i0, i5, OOC_UINT32, 8454)));
  switch (i4) {
  case (OOC_CHAR8)'@':
    i0 = i0+1;
    pos = i0;
    i1 = _check_pointer(i3, 8623);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 8623)));
    i1 = CharClass__IsLetter(i1);
    if (i1) goto l8;
    i1 = _check_pointer(i3, 9022);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 9022)));
    *(OOC_UINT8*)((OOC_INT32)name+(_check_index(0, 16, OOC_UINT8, 9012))) = i1;
    *(OOC_UINT8*)((OOC_INT32)name+(_check_index(1, 16, OOC_UINT8, 9043))) = (OOC_CHAR8)'\000';
    len = 1;
    pos = (i0+1);
    goto l18;
l8:
    i = 0;
    i1=i0;i0=0;
l9_loop:
    i2 = i0<15;
    if (!i2) goto l13;
    i2 = _check_pointer(i3, 8770);
    i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i4, OOC_UINT32, 8770)));
    *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, 16, OOC_UINT32, 8760))) = i2;
    i0 = i0+1;
    i = i0;
    
l13:
    i1 = i1+1;
    pos = i1;
    i2 = _check_pointer(i3, 8878);
    i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i4, OOC_UINT32, 8878)));
    i2 = CharClass__IsLetter(i2);
    i2 = !i2;
    if (!i2) goto l9_loop;
l17:
    len = i0;
    *(OOC_UINT8*)((OOC_INT32)name+(_check_index(i0, 16, OOC_UINT32, 8920))) = (OOC_CHAR8)'\000';
l18:
    i = 35;
    i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(35, 36, OOC_UINT32, 9300))*4);
    i0 = (
    _cmp8((const void*)((_check_pointer(i0, 9303))+2),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
    if (i0) goto l21;
    i0=35;
    goto l31;
l21:
    i0=35;
l22_loop:
    i0 = i0-1;
    i = i0;
    i1 = i0>=0;
    if (i1) goto l25;
    i1=OOC_FALSE;
    goto l27;
l25:
    i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 9300))*4);
    i1 = (
    _cmp8((const void*)((_check_pointer(i1, 9303))+2),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
    
l27:
    if (i1) goto l22_loop;
l31:
    i1 = i0<0;
    if (i1) goto l45;
    i1 = 27<=i0;
    if (i1) goto l36;
    i0=OOC_FALSE;
    goto l38;
l36:
    i0 = i0<=35;
    
l38:
    if (i0) goto l40;
    i0=OOC_FALSE;
    goto l42;
l40:
    i0 = beginningOfLine;
    i0 = !i0;
    
l42:
    if (!i0) goto l46;
    OOC_Doc_Input_Texinfo__Tokenize_Err(7);
    goto l46;
l45:
    OOC_Doc_Input_Texinfo__Tokenize_Err(1);
    i0 = (OOC_INT32)lastError;
    i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)name, 16);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9473)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
    i = 36;
l46:
    i0 = i;
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(i0);
    goto l103;
  case (OOC_CHAR8)'{':
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(41);
    i0 = pos;
    pos = (i0+1);
    goto l103;
  case (OOC_CHAR8)'}':
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(42);
    i0 = pos;
    pos = (i0+1);
    goto l103;
  case (OOC_CHAR8)',':
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(43);
    i0 = pos;
    pos = (i0+1);
    goto l103;
  case (OOC_CHAR8)'\012':
    i0 = OOC_Doc_Input_Texinfo__Tokenize_BeginningOfLine(i0);
    if (!i0) goto l53;
    OOC_Doc_Input_Texinfo__Tokenize_AddText();
l53:
    OOC_Doc_Input_Texinfo__Tokenize_Newline(1);
    goto l103;
  case (OOC_CHAR8)'\015':
    i0 = OOC_Doc_Input_Texinfo__Tokenize_BeginningOfLine(i0);
    if (!i0) goto l57;
    OOC_Doc_Input_Texinfo__Tokenize_AddText();
l57:
    i0 = (OOC_INT32)str;
    i0 = _check_pointer(i0, 10286);
    i1 = pos;
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index((i1+1), i2, OOC_UINT32, 10286)));
    i0 = i0==(OOC_CHAR8)'\012';
    if (i0) goto l60;
    OOC_Doc_Input_Texinfo__Tokenize_Newline(1);
    goto l103;
l60:
    OOC_Doc_Input_Texinfo__Tokenize_Newline(2);
    goto l103;
  case (OOC_CHAR8)'\002':
    pos = (i0+1);
    goto l103;
  case (OOC_CHAR8)'\003':
    i = i1;
    currLineTab = (i2+((8-(_mod(i1,8)))-1));
    pos = (i0+1);
    goto l103;
  default:
    i0 = OOC_Doc_Input_Texinfo__Tokenize_LookingAt("---", 4);
    if (i0) goto l101;
    i0 = OOC_Doc_Input_Texinfo__Tokenize_LookingAt("``", 3);
    if (i0) goto l99;
    i0 = OOC_Doc_Input_Texinfo__Tokenize_LookingAt("\047\047", 3);
    if (i0) goto l97;
    i0 = (OOC_INT32)str;
    i0 = _check_pointer(i0, 11180);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i2 = pos;
    i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 11180)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l73;
    i0=OOC_FALSE;
    goto l75;
l73:
    i0 = OOC_Doc_Input_Texinfo__Tokenize_IsTextChar();
    
l75:
    if (i0) goto l77;
    i0=OOC_FALSE;
    goto l79;
l77:
    i0 = OOC_Doc_Input_Texinfo__Tokenize_OutOfBandCommand();
    i0 = !i0;
    
l79:
    if (!i0) goto l96;
l80_loop:
    i0 = (OOC_INT32)str;
    i1 = _check_pointer(i0, 11251);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i3 = pos;
    i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 11251)));
    i1 = i1==(OOC_CHAR8)'\011';
    if (!i1) goto l83;
    i1 = currLinePos;
    i2 = currLineTab;
    i1 = (i3-i1)+i2;
    i = i1;
    currLineTab = (i2+((8-(_mod(i1,8)))-1));
l83:
    i1 = i3+1;
    pos = i1;
    i0 = _check_pointer(i0, 11180);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 11180)));
    i0 = i0!=(OOC_CHAR8)'\000';
    if (i0) goto l86;
    i0=OOC_FALSE;
    goto l88;
l86:
    i0 = OOC_Doc_Input_Texinfo__Tokenize_IsTextChar();
    
l88:
    if (i0) goto l90;
    i0=OOC_FALSE;
    goto l92;
l90:
    i0 = OOC_Doc_Input_Texinfo__Tokenize_OutOfBandCommand();
    i0 = !i0;
    
l92:
    if (i0) goto l80_loop;
l96:
    OOC_Doc_Input_Texinfo__Tokenize_AddText();
    goto l103;
l97:
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(39);
    i0 = pos;
    pos = (i0+2);
    goto l103;
l99:
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(38);
    i0 = pos;
    pos = (i0+2);
    goto l103;
l101:
    OOC_Doc_Input_Texinfo__Tokenize_AddToken(37);
    i0 = pos;
    pos = (i0+3);
    goto l103;
  }
l103:
  i0 = (OOC_INT32)str;
  i0 = _check_pointer(i0, 8352);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i2 = pos;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 8352)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3_loop;
l108:
  i0 = pos;
  i1 = currLinePos;
  i2 = currLineTab;
  startPos = i0;
  startColumn = ((i0-i1)+i2);
  OOC_Doc_Input_Texinfo__Tokenize_AddToken(44);
  i0 = (OOC_INT32)tokenList;
  return (OOC_Doc_Input_Texinfo__Token)i0;
  ;
}

static void OOC_Doc_Input_Texinfo__WriteTokens(Channel__Channel ch, OOC_Doc_Input_Texinfo__Token t) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  TextRider__Writer w;
  auto void OOC_Doc_Input_Texinfo__WriteTokens_WriteQuoted(TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e);
    
    void OOC_Doc_Input_Texinfo__WriteTokens_WriteQuoted(TextRider__Writer w, OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 s, OOC_INT32 e) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 last;

      i0 = s;
      i1 = e;
      i0 = i0!=i1;
      if (!i0) goto l75;
      i0 = (OOC_INT32)w;
l3_loop:
      i2 = s;
      i3 = i2!=i1;
      last = i2;
      if (i3) goto l6;
      i3=OOC_FALSE;
      goto l8;
l6:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 11965)));
      i3 = i3!=(OOC_CHAR8)'&';
      
l8:
      if (i3) goto l10;
      i3=OOC_FALSE;
      goto l12;
l10:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 11982)));
      i3 = i3!=(OOC_CHAR8)'<';
      
l12:
      if (i3) goto l14;
      i3=OOC_FALSE;
      goto l16;
l14:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 11999)));
      i3 = i3!=(OOC_CHAR8)'>';
      
l16:
      if (i3) goto l18;
      i3=OOC_FALSE;
      goto l20;
l18:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 12031)));
      i3 = i3!=(OOC_CHAR8)'\011';
      
l20:
      if (i3) goto l22;
      i3=OOC_FALSE;
      goto l24;
l22:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 12048)));
      i3 = i3!=(OOC_CHAR8)'\012';
      
l24:
      if (i3) goto l26;
      i3=OOC_FALSE;
      goto l28;
l26:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT32, 12065)));
      i3 = i3!=(OOC_CHAR8)'\015';
      
l28:
      if (!i3) goto l58;
l29_loop:
      i3 = s;
      i3 = i3+1;
      i4 = i3!=i1;
      s = i3;
      if (i4) goto l32;
      i4=OOC_FALSE;
      goto l34;
l32:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 11965)));
      i4 = i4!=(OOC_CHAR8)'&';
      
l34:
      if (i4) goto l36;
      i4=OOC_FALSE;
      goto l38;
l36:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 11982)));
      i4 = i4!=(OOC_CHAR8)'<';
      
l38:
      if (i4) goto l40;
      i4=OOC_FALSE;
      goto l42;
l40:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 11999)));
      i4 = i4!=(OOC_CHAR8)'>';
      
l42:
      if (i4) goto l44;
      i4=OOC_FALSE;
      goto l46;
l44:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 12031)));
      i4 = i4!=(OOC_CHAR8)'\011';
      
l46:
      if (i4) goto l48;
      i4=OOC_FALSE;
      goto l50;
l48:
      i4 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 12048)));
      i4 = i4!=(OOC_CHAR8)'\012';
      
l50:
      if (i4) goto l52;
      i3=OOC_FALSE;
      goto l54;
l52:
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 12065)));
      i3 = i3!=(OOC_CHAR8)'\015';
      
l54:
      if (i3) goto l29_loop;
l58:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12119))+8);
      i4 = s;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12119))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12131)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i5, (void*)(OOC_INT32)str, -1, i2, (i4-i2));
      i2 = i4!=i1;
      if (!i2) goto l70;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i4, str_0d, OOC_UINT32, 12207)));
      switch (i2) {
      case (OOC_CHAR8)'&':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12232)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&amp;", 6);
        goto l69;
      case (OOC_CHAR8)'<':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12274)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&lt;", 5);
        goto l69;
      case (OOC_CHAR8)'>':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12315)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&gt;", 5);
        goto l69;
      case (OOC_CHAR8)'\011':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12356)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&#9;", 5);
        goto l69;
      case (OOC_CHAR8)'\012':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12397)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&#10;", 6);
        goto l69;
      case (OOC_CHAR8)'\015':
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12439)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "&#13;", 6);
        goto l69;
      default:
        _failed_case(i2, 12199);
        goto l69;
      }
l69:
      s = (i4+1);
l70:
      i2 = s;
      i2 = i2!=i1;
      if (i2) goto l3_loop;
l75:
      return;
      ;
    }


  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  w = (TextRider__Writer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12592)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<?xml version=\0471.0\047 encoding=\047ISO-8859-1\047 standalone=\047yes\047?>", 61);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12677)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<token-list>", 13);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12714)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)t;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l27;
l3_loop:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12755)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "  <token id=\047", 14);
  i1 = (OOC_INT32)t;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 12800))+5);
  switch (i2) {
  case 36:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12829)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#unknown", 9);
    goto l15;
  case 37:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12876)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#---", 5);
    goto l15;
  case 38:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12921)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#``", 4);
    goto l15;
  case 39:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12966)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#\047\047", 4);
    goto l15;
  case 40:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13006)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#text", 6);
    goto l15;
  case 41:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13056)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#{", 3);
    goto l15;
  case 42:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13103)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#}", 3);
    goto l15;
  case 43:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13150)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#,", 3);
    goto l15;
  case 44:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13194)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "#end-of-text", 13);
    goto l15;
  default:
    i2 = *(OOC_INT8*)((_check_pointer(i1, 13269))+5);
    i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i2, 36, OOC_UINT8, 13267))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13245)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)((_check_pointer(i2, 13274))+2), 16);
    goto l15;
  }
l15:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 13303))+4);
  if (!i2) goto l18;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13323)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047 bol=\047yes", 11);
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13371)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047 pos=\047", 8);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13419))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13405)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i2, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13437)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047 line=\047", 9);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13486))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13472)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i2, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13505)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047 column=\047", 11);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 13556))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13542)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13581))+20);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l21;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13749)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047/>", 4);
  goto l22;
l21:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13608)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\047>", 3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13655))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13655))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13683))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13683))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13688)), (OOC_INT32)0);
  i1 = Strings__Length((void*)(_check_pointer(i4, 13688)), i1);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13660)), (OOC_INT32)0);
  OOC_Doc_Input_Texinfo__WriteTokens_WriteQuoted((TextRider__Writer)i0, (void*)(_check_pointer(i2, 13660)), i3, 0, i1);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13702)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</token>", 9);
l22:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13789)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  i0 = (OOC_INT32)t;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13812));
  t = (OOC_Doc_Input_Texinfo__Token)i0;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l3_loop;
l27:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13833)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</token-list>", 14);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13871)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

OOC_Doc__Document OOC_Doc_Input_Texinfo__Parse(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_CHAR8 removeDecoration, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Doc_TextBuffer__Buffer buffer;
  OOC_Scanner_InputBuffer__CharArray str;
  OOC_Doc_Decoration__Decoration decoration;
  OOC_INT32 oldErrors;
  OOC_Doc_Input_Texinfo__Token tokenList;
  OOC_Doc_Input_Texinfo__Token token;
  OOC_Doc__BlockElement blockList;
  OOC_Doc__Document document;
  Msg__Msg lastError;
  struct OOC_Doc__Position bufferPos;
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IsInlineToken(OOC_Doc_Input_Texinfo__Token t);
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IsBlockToken(OOC_Doc_Input_Texinfo__Token t);
  auto void OOC_Doc_Input_Texinfo__Parse_Err(OOC_INT32 code);
  auto void OOC_Doc_Input_Texinfo__Parse_NextToken();
  auto void OOC_Doc_Input_Texinfo__Parse_CheckToken(OOC_INT8 id);
  auto void OOC_Doc_Input_Texinfo__Parse_SkipWhitespace();
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IdToChar(OOC_INT8 id);
  auto OOC_INT32 OOC_Doc_Input_Texinfo__Parse_IdToGlyph(OOC_INT8 id);
  auto OOC_INT32 OOC_Doc_Input_Texinfo__Parse_IdToMark(OOC_INT8 id);
  auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IsOberonRef(OOC_INT32 mark);
  auto OOC_Doc__BlockElement OOC_Doc_Input_Texinfo__Parse_ParseBlockList();
    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IsInlineToken(OOC_Doc_Input_Texinfo__Token t) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)t;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14383))+5);
      i1 = 0<=i1;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14393))+5);
      i1 = i1<=26;
      
l5:
      if (i1) goto l11;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14444))+5);
      i1 = 36<i1;
      if (i1) goto l9;
      i0=OOC_FALSE;
      goto l12;
l9:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 14454))+5);
      i0 = i0<=43;
      
      goto l12;
l11:
      i0=OOC_TRUE;
l12:
      return i0;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IsBlockToken(OOC_Doc_Input_Texinfo__Token t) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)t;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14589))+5);
      i1 = 27<=i1;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l4;
l3:
      i0 = *(OOC_INT8*)((_check_pointer(i0, 14599))+5);
      i0 = i0<33;
      
l4:
      return i0;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Parse_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__texinfoContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)token;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 14781))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14753)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)token;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 14833))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14804)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)token;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 14888))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14857)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14912)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Parse_NextToken() {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)token;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 14997))+5);
      i1 = i1!=44;
      if (!i1) goto l4;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15045));
      token = (OOC_Doc_Input_Texinfo__Token)i0;
l4:
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Parse_CheckToken(OOC_INT8 id) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)token;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 15147))+5);
      i1 = id;
      i0 = i1!=i0;
      if (!i0) goto l9;
l3:
      switch (i1) {
      case 41:
        OOC_Doc_Input_Texinfo__Parse_Err(2);
        goto l9;
      case 42:
        OOC_Doc_Input_Texinfo__Parse_Err(3);
        goto l9;
      case 44:
        OOC_Doc_Input_Texinfo__Parse_Err(4);
        goto l9;
      default:
        _failed_case(i1, 15166);
        goto l9;
      }
l9:
      OOC_Doc_Input_Texinfo__Parse_NextToken();
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Parse_SkipWhitespace() {
      register OOC_INT32 i0,i1;
      auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_SkipWhitespace_OnlyWS(OOC_CHAR8 str[], OOC_LEN str_0d);
        
        OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_SkipWhitespace_OnlyWS(OOC_CHAR8 str[], OOC_LEN str_0d) {
          register OOC_INT32 i0,i1;

          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 15576)));
          i0 = i0!=(OOC_CHAR8)'\000';
          if (i0) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 15592)));
          i0 = i0<=(OOC_CHAR8)' ';
          
l5:
          if (i0) goto l7;
          i0=0;
          goto l17;
l7:
          i0=0;
l8_loop:
          i0 = i0+1;
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15576)));
          i1 = i1!=(OOC_CHAR8)'\000';
          if (i1) goto l11;
          i1=OOC_FALSE;
          goto l13;
l11:
          i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15592)));
          i1 = i1<=(OOC_CHAR8)' ';
          
l13:
          if (i1) goto l8_loop;
l17:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 15657)));
          return (i0==(OOC_CHAR8)'\000');
          ;
        }


      i0 = (OOC_INT32)token;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15718))+5);
      i1 = i1==40;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 15742))+4);
      i1 = !i1;
      
l5:
      if (i1) goto l7;
      i0=OOC_FALSE;
      goto l9;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15763))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15763))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15768)), (OOC_INT32)0);
      i0 = OOC_Doc_Input_Texinfo__Parse_SkipWhitespace_OnlyWS((void*)(_check_pointer(i1, 15768)), i0);
      
l9:
      if (!i0) goto l24;
l11_loop:
      i0 = (OOC_INT32)token;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15796));
      token = (OOC_Doc_Input_Texinfo__Token)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15718))+5);
      i1 = i1==40;
      if (i1) goto l14;
      i1=OOC_FALSE;
      goto l16;
l14:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 15742))+4);
      i1 = !i1;
      
l16:
      if (i1) goto l18;
      i0=OOC_FALSE;
      goto l20;
l18:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15763))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15763))+20);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15768)), (OOC_INT32)0);
      i0 = OOC_Doc_Input_Texinfo__Parse_SkipWhitespace_OnlyWS((void*)(_check_pointer(i1, 15768)), i0);
      
l20:
      if (i0) goto l11_loop;
l24:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IdToChar(OOC_INT8 id) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)token;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 15902))+5);
      switch (i0) {
      case 0:
        return (OOC_CHAR8)'@';
        goto l6;
      case 1:
        return (OOC_CHAR8)'{';
        goto l6;
      case 2:
        return (OOC_CHAR8)'}';
        goto l6;
      default:
        _failed_case(i0, 15892);
        goto l6;
      }
l6:
      _failed_function(15852); return 0;
      ;
    }

    
    OOC_INT32 OOC_Doc_Input_Texinfo__Parse_IdToGlyph(OOC_INT8 id) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)token;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 16108))+5);
      switch (i0) {
      case 3:
        return 0;
        goto l7;
      case 4:
        return 1;
        goto l7;
      case 5:
        return 2;
        goto l7;
      case 6:
        return 4;
        goto l7;
      default:
        _failed_case(i0, 16098);
        goto l7;
      }
l7:
      _failed_function(16053); return 0;
      ;
    }

    
    OOC_INT32 OOC_Doc_Input_Texinfo__Parse_IdToMark(OOC_INT8 id) {
      register OOC_INT32 i0;

      i0 = id;
      switch (i0) {
      case 7:
        return 0;
        goto l21;
      case 8:
        return 1;
        goto l21;
      case 9:
        return 2;
        goto l21;
      case 10:
        return 3;
        goto l21;
      case 11:
        return 4;
        goto l21;
      case 12:
        return 5;
        goto l21;
      case 13:
        return 6;
        goto l21;
      case 18:
        return 11;
        goto l21;
      case 19:
        return 12;
        goto l21;
      case 20:
        return 13;
        goto l21;
      case 21:
        return 14;
        goto l21;
      case 22:
        return 15;
        goto l21;
      case 23:
        return 16;
        goto l21;
      case 24:
        return 17;
        goto l21;
      case 14:
        return 7;
        goto l21;
      case 15:
        return 8;
        goto l21;
      case 16:
        return 10;
        goto l21;
      case 17:
        return 9;
        goto l21;
      default:
        _failed_case(i0, 16367);
        goto l21;
      }
l21:
      _failed_function(16323); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_IsOberonRef(OOC_INT32 mark) {
      register OOC_INT32 i0,i1;

      i0 = mark;
      i1 = 11<=i0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l4;
l3:
      i0 = i0<=17;
      
l4:
      return i0;
      ;
    }

    
    OOC_Doc__BlockElement OOC_Doc_Input_Texinfo__Parse_ParseBlockList() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 noIndent;
      OOC_Doc__BlockList list;
      OOC_Doc__InlineElement inlineText;
      auto OOC_Doc__InlineElement OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_CHAR8 isArg, OOC_CHAR8 ignoreParagraph, OOC_CHAR8 exitAfterEOL);
      auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
      auto void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd(OOC_INT8 id);
      auto OOC_Doc__Itemize OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Itemize();
      auto OOC_Doc__Example OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Example();
      auto OOC_Doc__BlockElement OOC_Doc_Input_Texinfo__Parse_ParseBlockList_PCond();
      auto OOC_Doc__Table OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Table();
        
        OOC_Doc__InlineElement OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_CHAR8 isArg, OOC_CHAR8 ignoreParagraph, OOC_CHAR8 exitAfterEOL) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_Doc__InlineList list;
          OOC_CHAR8 str2[2];
          OOC_INT32 mark;
          OOC_Doc_Input_Texinfo__Token posToken;
          OOC_Doc__InlineElement inlineText;
          auto void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddText(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
          auto void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer();
          auto void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline(OOC_Doc__InlineElement i);
          auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_EndOfArguments();
          auto void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_CheckNumOfArgs(OOC_INT8 id, OOC_INT32 num);
          auto OOC_Doc__Email OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_Email();
          auto OOC_Doc__Uref OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_Uref();
            
            void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddText(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
              register OOC_INT32 i0,i1,i2;
              OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

              OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
              i0 = (OOC_INT32)buffer;
              i0 = *(OOC_INT32*)((_check_pointer(i0, 17908))+4);
              i0 = i0==0;
              if (!i0) goto l3;
              i0 = (OOC_INT32)token;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 18103))+8);
              i2 = *(OOC_INT32*)((_check_pointer(i0, 18115))+12);
              i0 = *(OOC_INT32*)((_check_pointer(i0, 18128))+16);
              OOC_Doc__SetPosition((void*)(OOC_INT32)&bufferPos, (RT0__Struct)((OOC_INT32)&_td_OOC_Doc__Position), i1, i2, i0);
l3:
              i0 = (OOC_INT32)buffer;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18180)))), OOC_Doc_TextBuffer__BufferDesc_Append)),OOC_Doc_TextBuffer__BufferDesc_Append)((OOC_Doc_TextBuffer__Buffer)i0, (void*)(OOC_INT32)str, str_0d);
              i0 = (OOC_INT32)token;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18214));
              i0 = *(OOC_UINT8*)((_check_pointer(i0, 18220))+4);
              if (i0) goto l6;
              i0=OOC_FALSE;
              goto l8;
l6:
              i0 = (OOC_INT32)buffer;
              i0 = *(OOC_INT32*)((_check_pointer(i0, 18235))+4);
              i0 = i0!=0;
              
l8:
              if (!i0) goto l10;
              i0 = (OOC_INT32)buffer;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18269)))), OOC_Doc_TextBuffer__BufferDesc_AppendEOL)),OOC_Doc_TextBuffer__BufferDesc_AppendEOL)((OOC_Doc_TextBuffer__Buffer)i0);
l10:
              return;
              ;
            }

            
            void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer() {
              register OOC_INT32 i0,i1,i2;

              i0 = (OOC_INT32)buffer;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 18386))+4);
              i1 = i1!=0;
              if (!i1) goto l4;
              i1 = (OOC_INT32)list;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18447));
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18447));
              i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18452)), (OOC_INT32)0);
              i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i2, 18452)), i0, (void*)(OOC_INT32)&bufferPos, (RT0__Struct)((OOC_INT32)&_td_OOC_Doc__Position));
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18418)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i1, (OOC_Doc__InlineElement)i0);
              i0 = (OOC_INT32)buffer;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18486)))), OOC_Doc_TextBuffer__BufferDesc_Clear)),OOC_Doc_TextBuffer__BufferDesc_Clear)((OOC_Doc_TextBuffer__Buffer)i0);
l4:
              return;
              ;
            }

            
            void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline(OOC_Doc__InlineElement i) {
              register OOC_INT32 i0,i1;

              OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer();
              i0 = (OOC_INT32)list;
              i1 = (OOC_INT32)i;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18734)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i0, (OOC_Doc__InlineElement)i1);
              i0 = (OOC_INT32)token;
              i0 = *(OOC_UINT8*)((_check_pointer(i0, 18766))+4);
              if (!i0) goto l4;
              i0 = (OOC_INT32)buffer;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18795)))), OOC_Doc_TextBuffer__BufferDesc_AppendEOL)),OOC_Doc_TextBuffer__BufferDesc_AppendEOL)((OOC_Doc_TextBuffer__Buffer)i0);
l4:
              return;
              ;
            }

            
            OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_EndOfArguments() {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)token;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 18932))+5);
              i1 = i1==42;
              if (i1) goto l3;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 18982))+5);
              i1 = i1==44;
              
              goto l5;
l3:
              i1=OOC_TRUE;
l5:
              if (i1) goto l11;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 19042))+5);
              i1 = 27<=i1;
              if (i1) goto l9;
              i0=OOC_FALSE;
              goto l12;
l9:
              i0 = *(OOC_INT8*)((_check_pointer(i0, 19056))+5);
              i0 = i0<=35;
              
              goto l12;
l11:
              i0=OOC_TRUE;
l12:
              return i0;
              ;
            }

            
            void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_CheckNumOfArgs(OOC_INT8 id, OOC_INT32 num) {
              register OOC_INT32 i0,i1,i2;

              i0 = id;
              i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT8, 19201))*4);
              i1 = *(OOC_INT8*)((_check_pointer(i1, 19205))+18);
              i2 = num;
              i1 = i1>i2;
              if (!i1) goto l4;
              OOC_Doc_Input_Texinfo__Parse_Err(11);
              i1 = (OOC_INT32)lastError;
              i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT8, 19376))*4);
              i2 = (OOC_INT32)Msg__GetStringPtr((void*)((_check_pointer(i2, 19380))+2), 16);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19284)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__StringPtr)i2);
              i1 = (OOC_INT32)lastError;
              i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT8, 19445))*4);
              i0 = *(OOC_INT8*)((_check_pointer(i0, 19449))+18);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19411)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "minimum", 8, i0);
l4:
              return;
              ;
            }

            
            OOC_Doc__Email OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_Email() {
              register OOC_INT32 i0,i1,i2;
              OOC_Doc__InlineElement displayed;

              OOC_Doc_Input_Texinfo__Parse_NextToken();
              OOC_Doc_Input_Texinfo__Parse_CheckToken(41);
              displayed = (OOC_Doc__InlineElement)(OOC_INT32)0;
              i0 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_EndOfArguments();
              i0 = !i0;
              if (i0) goto l3;
              i0=0;i1=(OOC_INT32)0;
              goto l17;
l3:
              i0=0;i1=(OOC_INT32)0;
l4_loop:
              i2 = i0!=0;
              if (!i2) goto l7;
              OOC_Doc_Input_Texinfo__Parse_CheckToken(43);
l7:
              i2 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_TRUE, OOC_FALSE, OOC_FALSE);
              switch (i0) {
              case 0:
                i1=i2;
                goto l12;
              case 1:
                displayed = (OOC_Doc__InlineElement)i2;
                
                goto l12;
              default:
                OOC_Doc__MergeInline((void*)(OOC_INT32)&displayed, (OOC_Doc__InlineElement)i2);
                
                goto l12;
              }
l12:
              i2 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_EndOfArguments();
              i2 = !i2;
              i0 = i0+1;
              if (i2) goto l4_loop;
l17:
              OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_CheckNumOfArgs(25, i0);
              OOC_Doc_Input_Texinfo__Parse_CheckToken(42);
              i0 = (OOC_INT32)displayed;
              i0 = (OOC_INT32)OOC_Doc__NewEmail((OOC_Doc__InlineElement)i1, (OOC_Doc__InlineElement)i0);
              return (OOC_Doc__Email)i0;
              ;
            }

            
            OOC_Doc__Uref OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_Uref() {
              register OOC_INT32 i0,i1,i2,i3;
              OOC_Doc__InlineElement replacement;

              OOC_Doc_Input_Texinfo__Parse_NextToken();
              OOC_Doc_Input_Texinfo__Parse_CheckToken(41);
              replacement = (OOC_Doc__InlineElement)(OOC_INT32)0;
              i0 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_EndOfArguments();
              i0 = !i0;
              if (i0) goto l3;
              i0=0;i1=(OOC_INT32)0;i2=(OOC_INT32)0;
              goto l18;
l3:
              i0=0;i1=(OOC_INT32)0;i2=(OOC_INT32)0;
l4_loop:
              i3 = i0!=0;
              if (!i3) goto l7;
              OOC_Doc_Input_Texinfo__Parse_CheckToken(43);
l7:
              i3 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_TRUE, OOC_FALSE, OOC_FALSE);
              switch (i0) {
              case 0:
                i1=i3;
                goto l13;
              case 1:
                i2=i3;
                goto l13;
              case 2:
                replacement = (OOC_Doc__InlineElement)i3;
                
                goto l13;
              default:
                OOC_Doc__MergeInline((void*)(OOC_INT32)&replacement, (OOC_Doc__InlineElement)i3);
                
                goto l13;
              }
l13:
              i3 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_EndOfArguments();
              i3 = !i3;
              i0 = i0+1;
              if (i3) goto l4_loop;
l18:
              OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_CheckNumOfArgs(26, i0);
              OOC_Doc_Input_Texinfo__Parse_CheckToken(42);
              i0 = (OOC_INT32)replacement;
              i0 = (OOC_INT32)OOC_Doc__NewUref((OOC_Doc__InlineElement)i1, (OOC_Doc__InlineElement)i2, (OOC_Doc__InlineElement)i0);
              return (OOC_Doc__Uref)i0;
              ;
            }


          i0 = (OOC_INT32)OOC_Doc__NewInlineList();
          list = (OOC_Doc__InlineList)i0;
          i0 = (OOC_INT32)&_td_OOC_Doc__Position;
l1_loop:
          i1 = (OOC_INT32)token;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 21320))+5);
          switch (i2) {
          case 0 ... 2:
            _copy_8((const void*)"x",(void*)(OOC_INT32)str2,2);
            i1 = *(OOC_INT8*)((_check_pointer(i1, 21426))+5);
            i1 = OOC_Doc_Input_Texinfo__Parse_IdToChar(i1);
            *(OOC_UINT8*)((OOC_INT32)str2+(_check_index(0, 2, OOC_UINT8, 21404))) = i1;
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddText((void*)(OOC_INT32)str2, 2);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          case 3 ... 6:
            i1 = *(OOC_INT8*)((_check_pointer(i1, 21572))+5);
            i1 = OOC_Doc_Input_Texinfo__Parse_IdToGlyph(i1);
            i1 = (OOC_INT32)OOC_Doc__NewGlyph(i1);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            OOC_Doc_Input_Texinfo__Parse_CheckToken(41);
            OOC_Doc_Input_Texinfo__Parse_CheckToken(42);
            goto l35;
          case 7 ... 24:
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer();
            i1 = (OOC_INT32)token;
            i1 = *(OOC_INT8*)((_check_pointer(i1, 21785))+5);
            i1 = OOC_Doc_Input_Texinfo__Parse_IdToMark(i1);
            mark = i1;
            i2 = (OOC_INT32)token;
            posToken = (OOC_Doc_Input_Texinfo__Token)i2;
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            OOC_Doc_Input_Texinfo__Parse_CheckToken(41);
            i2 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_FALSE, OOC_FALSE, OOC_FALSE);
            inlineText = (OOC_Doc__InlineElement)i2;
            OOC_Doc_Input_Texinfo__Parse_CheckToken(42);
            i3 = 11<=i1;
            if (i3) goto l8;
            i3=OOC_FALSE;
            goto l10;
l8:
            i3 = i1<=17;
            
l10:
            if (i3) goto l12;
            i1 = (OOC_INT32)OOC_Doc__NewMarkedInline(i1, (OOC_Doc__InlineElement)i2);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            goto l35;
l12:
            i1 = (OOC_INT32)OOC_Doc__NewOberonRef(i1, (OOC_Doc__InlineElement)i2, (ADT_Storable__Object)(OOC_INT32)0);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            i1 = (OOC_INT32)list;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22193))+4);
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22193))+4);
            i1 = _check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22204)))), &_td_OOC_Doc__OberonRefDesc, 22204)), 22214);
            i1 = (OOC_INT32)posToken;
            i3 = *(OOC_INT32*)((_check_pointer(i1, 22260))+8);
            i4 = *(OOC_INT32*)((_check_pointer(i1, 22275))+12);
            i1 = *(OOC_INT32*)((_check_pointer(i1, 22291))+16);
            OOC_Doc__SetPosition((void*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22204)))), &_td_OOC_Doc__OberonRefDesc, 22204)), 22214)), (RT0__Struct)i0, i3, i4, i1);
            goto l35;
          case 25:
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer();
            i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_Email();
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            goto l35;
          case 26:
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer();
            i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_Uref();
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            goto l35;
          case 37:
            i1 = (OOC_INT32)OOC_Doc__NewGlyph(3);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          case 38:
            i1 = (OOC_INT32)OOC_Doc__NewGlyph(5);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          case 39:
            i1 = (OOC_INT32)OOC_Doc__NewGlyph(6);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddInline((OOC_Doc__InlineElement)i1);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          case 40:
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22952))+20);
            i2 = (
            _cmp8((const void*)(_check_pointer(i2, 22957)),(const void*)""))==(OOC_INT32)0;
            if (i2) goto l22;
            i2=OOC_FALSE;
            goto l24;
l22:
            i2 = ignoreParagraph;
            i2 = !i2;
            
l24:
            if (i2) goto l43;
            i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23053))+20);
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23053))+20);
            i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23058)), (OOC_INT32)0);
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddText((void*)(_check_pointer(i2, 23058)), i1);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          case 41:
            OOC_Doc_Input_Texinfo__Parse_Err(9);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          case 43:
            i1 = isArg;
            if (i1) goto l43;
            OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_AddText(",", 2);
            OOC_Doc_Input_Texinfo__Parse_NextToken();
            goto l35;
          default:
            goto l43;
          }
l35:
          i1 = exitAfterEOL;
          if (i1) goto l38;
          i1=OOC_FALSE;
          goto l40;
l38:
          i1 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 23452))+4);
          
l40:
          if (!i1) goto l1_loop;
l43:
          OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList_FlushBuffer();
          i0 = (OOC_INT32)list;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23547));
          return (OOC_Doc__InlineElement)i0;
          ;
        }

        
        OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine() {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)token;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 23657))+5);
          i1 = i1==40;
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23681))+20);
          i1 = (
          _cmp8((const void*)(_check_pointer(i1, 23686)),(const void*)""))==(OOC_INT32)0;
          
l5:
          if (i1) goto l7;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 23718))+5);
          i0 = i0==44;
          
          goto l8;
l7:
          i0=OOC_TRUE;
l8:
          return i0;
          ;
        }

        
        void OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd(OOC_INT8 id) {
          register OOC_INT32 i0,i1,i2;
          auto OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd_Substr(OOC_CHAR8 string[], OOC_LEN string_0d, OOC_CHAR8 pattern[], OOC_LEN pattern_0d);
            
            OOC_CHAR8 OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd_Substr(OOC_CHAR8 string[], OOC_LEN string_0d, OOC_CHAR8 pattern[], OOC_LEN pattern_0d) {
              register OOC_INT32 i0,i1,i2,i3;
              OOC_CHAR8 found;
              OOC_INT16 pos;

              Strings__FindNext((void*)(OOC_INT32)pattern, pattern_0d, (void*)(OOC_INT32)string, string_0d, 0, (void*)(OOC_INT32)&found, (void*)(OOC_INT32)&pos);
              i0 = found;
              if (i0) goto l3;
              return OOC_FALSE;
              goto l26;
l3:
              i0 = pos;
              i1 = i0-1;
              i2 = 0<=i1;
              if (!i2) goto l14;
              i2=0;
l6_loop:
              i3 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT16, 24093)));
              i3 = i3>(OOC_CHAR8)' ';
              if (!i3) goto l9;
              return OOC_FALSE;
l9:
              i2 = i2+1;
              i3 = i2<=i1;
              if (i3) goto l6_loop;
l14:
              i1 = Strings__Length((void*)(OOC_INT32)pattern, pattern_0d);
              i0 = i0+i1;
              i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT16, 24247)));
              i1 = i1!=(OOC_CHAR8)'\000';
              if (!i1) goto l25;
l17_loop:
              i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT16, 24284)));
              i1 = i1>(OOC_CHAR8)' ';
              if (!i1) goto l20;
              return OOC_FALSE;
l20:
              i0 = i0+1;
              i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT16, 24247)));
              i1 = i1!=(OOC_CHAR8)'\000';
              if (i1) goto l17_loop;
l25:
              return OOC_TRUE;
l26:
              _failed_function(23816); return 0;
              ;
            }


          i0 = (OOC_INT32)token;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 24521))+5);
          i1 = i1!=33;
          if (i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24556));
          i1 = i1!=(OOC_INT32)0;
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l9;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24577));
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 24583))+4);
          
          goto l9;
l7:
          i0=OOC_TRUE;
l9:
          if (!i0) goto l11;
          OOC_Doc_Input_Texinfo__Parse_Err(8);
          i0 = (OOC_INT32)lastError;
          i1 = id;
          i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i1, 36, OOC_UINT8, 24732))*4);
          i1 = (OOC_INT32)Msg__GetStringPtr((void*)((_check_pointer(i1, 24736))+2), 16);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24642)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
l11:
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          i0 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 24795))+4);
          i1 = !i1;
          if (!i1) goto l21;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 24825))+5);
          i1 = i1!=40;
          if (i1) goto l16;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24871))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24871))+20);
          i2 = id;
          i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i2, 36, OOC_UINT8, 24886))*4);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24876)), (OOC_INT32)0);
          i0 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd_Substr((void*)(_check_pointer(i1, 24876)), i0, (void*)((_check_pointer(i2, 24890))+2), 16);
          i0 = !i0;
          
          goto l18;
l16:
          i0=OOC_TRUE;
l18:
          if (!i0) goto l20;
          OOC_Doc_Input_Texinfo__Parse_Err(8);
          i0 = (OOC_INT32)lastError;
          i1 = id;
          i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i1, 36, OOC_UINT8, 25047))*4);
          i1 = (OOC_INT32)Msg__GetStringPtr((void*)((_check_pointer(i1, 25051))+2), 16);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24955)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
l20:
          OOC_Doc_Input_Texinfo__Parse_NextToken();
l21:
          return;
          ;
        }

        
        OOC_Doc__Itemize OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Itemize() {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_Doc__InlineElement mark;
          struct OOC_Doc__Position pos;
          OOC_CHAR8 str2[2];
          OOC_Doc__BlockElement text;
          OOC_Doc__Item textItem;
          OOC_Doc__BlockList itemList;
          OOC_Doc__BlockElement itemText;

          OOC_Doc_Input_Texinfo__Parse_NextToken();
          OOC_Doc_Input_Texinfo__Parse_SkipWhitespace();
          i0 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 25508))+4);
          if (i1) goto l26;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 25667))+8);
          i2 = *(OOC_INT32*)((_check_pointer(i0, 25679))+12);
          i0 = *(OOC_INT32*)((_check_pointer(i0, 25692))+16);
          i3 = (OOC_INT32)&_td_OOC_Doc__Position;
          OOC_Doc__SetPosition((void*)(OOC_INT32)&pos, (RT0__Struct)i3, i1, i2, i0);
          i0 = (OOC_INT32)token;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 25722))+5);
          i1 = i1==40;
          if (i1) goto l21;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 25829))+5);
          i1 = 0<=i1;
          if (i1) goto l7;
          i1=OOC_FALSE;
          goto l9;
l7:
          i1 = *(OOC_INT8*)((_check_pointer(i0, 25843))+5);
          i1 = i1<=2;
          
l9:
          if (i1) goto l19;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 26024))+5);
          i1 = 3<=i1;
          if (i1) goto l13;
          i1=OOC_FALSE;
          goto l15;
l13:
          i1 = *(OOC_INT8*)((_check_pointer(i0, 26038))+5);
          i1 = i1<=6;
          
l15:
          if (i1) goto l17;
          OOC_Doc_Input_Texinfo__Parse_Err(6);
          i0 = (OOC_INT32)OOC_Doc__NewGlyph(0);
          mark = (OOC_Doc__InlineElement)i0;
          
          goto l22;
l17:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 26113))+5);
          i0 = OOC_Doc_Input_Texinfo__Parse_IdToGlyph(i0);
          i0 = (OOC_INT32)OOC_Doc__NewGlyph(i0);
          mark = (OOC_Doc__InlineElement)i0;
          
          goto l22;
l19:
          _copy_8((const void*)"x",(void*)(OOC_INT32)str2,2);
          i0 = *(OOC_INT8*)((_check_pointer(i0, 25931))+5);
          i0 = OOC_Doc_Input_Texinfo__Parse_IdToChar(i0);
          *(OOC_UINT8*)((OOC_INT32)str2+(_check_index(0, 2, OOC_UINT8, 25909))) = i0;
          i0 = (OOC_INT32)token;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25976))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25976))+20);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 25981)), (OOC_INT32)0);
          i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i1, 25981)), i0, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          mark = (OOC_Doc__InlineElement)i0;
          
          goto l22;
l21:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25781))+20);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25781))+20);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 25786)), (OOC_INT32)0);
          i0 = (OOC_INT32)OOC_Doc__NewText((void*)(_check_pointer(i1, 25786)), i0, (void*)(OOC_INT32)&pos, (RT0__Struct)i3);
          mark = (OOC_Doc__InlineElement)i0;
          
l22:
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          i1 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 26276))+4);
          i1 = !i1;
          if (!i1) goto l27;
          OOC_Doc_Input_Texinfo__Parse_Err(5);
          goto l27;
l26:
          i0 = (OOC_INT32)OOC_Doc__NewGlyph(0);
          mark = (OOC_Doc__InlineElement)i0;
          
l27:
          i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList();
          i2 = i1!=(OOC_INT32)0;
          text = (OOC_Doc__BlockElement)i1;
          if (i2) goto l30;
          textItem = (OOC_Doc__Item)(OOC_INT32)0;
          i1=(OOC_INT32)0;
          goto l31;
l30:
          i2 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
          i1 = (OOC_INT32)OOC_Doc__NewItem(i2, (OOC_Doc__BlockElement)i1);
          textItem = (OOC_Doc__Item)i1;
          
l31:
          i2 = (OOC_INT32)OOC_Doc__NewBlockList();
          itemList = (OOC_Doc__BlockList)i2;
          i3 = (OOC_INT32)token;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 26597))+5);
          i3 = i3==34;
          if (!i3) goto l39;
l34_loop:
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          i3 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList();
          itemText = (OOC_Doc__BlockElement)i3;
          i4 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
          i3 = (OOC_INT32)OOC_Doc__NewItem(i4, (OOC_Doc__BlockElement)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26695)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i2, (OOC_Doc__BlockElement)i3);
          i3 = (OOC_INT32)token;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 26597))+5);
          i3 = i3==34;
          if (i3) goto l34_loop;
l39:
          OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd(28);
          i3 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 26858));
          i0 = (OOC_INT32)OOC_Doc__NewItemize(i3, (OOC_Doc__InlineElement)i0, (OOC_Doc__Item)i1, (OOC_Doc__BlockElement)i2);
          return (OOC_Doc__Itemize)i0;
          ;
        }

        
        OOC_Doc__Example OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Example() {
          register OOC_INT32 i0,i1;

          OOC_Doc_Input_Texinfo__Parse_NextToken();
          OOC_Doc_Input_Texinfo__Parse_SkipWhitespace();
          i0 = (OOC_INT32)token;
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 27085))+4);
          i0 = !i0;
          if (!i0) goto l3;
          OOC_Doc_Input_Texinfo__Parse_Err(5);
l3:
          i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_FALSE, OOC_TRUE, OOC_FALSE);
          OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd(27);
          i1 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
          i0 = (OOC_INT32)OOC_Doc__NewExample(i1, (OOC_Doc__InlineElement)i0);
          return (OOC_Doc__Example)i0;
          ;
        }

        
        OOC_Doc__BlockElement OOC_Doc_Input_Texinfo__Parse_ParseBlockList_PCond() {
          register OOC_INT32 i0,i1;
          OOC_INT8 cmdId;

          i0 = (OOC_INT32)token;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 27509))+5);
          cmdId = i0;
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          OOC_Doc_Input_Texinfo__Parse_SkipWhitespace();
          i1 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 27575))+4);
          i1 = !i1;
          if (!i1) goto l3;
          OOC_Doc_Input_Texinfo__Parse_Err(5);
l3:
          i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList();
          blockList = (OOC_Doc__BlockElement)i1;
          OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd(i0);
          switch (i0) {
          case 30:
            i0 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
            i1 = (OOC_INT32)blockList;
            i0 = (OOC_INT32)OOC_Doc__NewPreCond(i0, (OOC_Doc__BlockElement)i1);
            return (OOC_Doc__BlockElement)i0;
            goto l8;
          case 31:
            i0 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
            i1 = (OOC_INT32)blockList;
            i0 = (OOC_INT32)OOC_Doc__NewPostCond(i0, (OOC_Doc__BlockElement)i1);
            return (OOC_Doc__BlockElement)i0;
            goto l8;
          default:
            _failed_case(i0, 27705);
            goto l8;
          }
l8:
          _failed_function(27328); return 0;
          ;
        }

        
        OOC_Doc__Table OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Table() {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 mark;
          OOC_Doc__BlockList rowList;
          OOC_Doc__BlockList firstColumnList;
          OOC_Doc__MarkedInline first;
          OOC_Doc__BlockElement tableEntry;

          OOC_Doc_Input_Texinfo__Parse_NextToken();
          OOC_Doc_Input_Texinfo__Parse_SkipWhitespace();
          i0 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 28311))+4);
          if (i1) goto l11;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 28474))+5);
          i1 = 7<=i1;
          if (i1) goto l5;
          i1=OOC_FALSE;
          goto l7;
l5:
          i1 = *(OOC_INT8*)((_check_pointer(i0, 28488))+5);
          i1 = i1<25;
          
l7:
          if (i1) goto l9;
          mark = 0;
          OOC_Doc_Input_Texinfo__Parse_Err(12);
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          i0=0;
          goto l12;
l9:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 28545))+5);
          i0 = OOC_Doc_Input_Texinfo__Parse_IdToMark(i0);
          mark = i0;
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          OOC_Doc_Input_Texinfo__Parse_SkipWhitespace();
          
          goto l12;
l11:
          mark = 0;
          OOC_Doc_Input_Texinfo__Parse_Err(12);
          i0=0;
l12:
          i1 = (OOC_INT32)token;
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 28732))+4);
          i1 = !i1;
          if (!i1) goto l15;
          OOC_Doc_Input_Texinfo__Parse_Err(5);
l15:
          i1 = (OOC_INT32)OOC_Doc__NewBlockList();
          rowList = (OOC_Doc__BlockList)i1;
          i2 = (OOC_INT32)token;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 28856))+5);
          i3 = i3!=33;
          if (i3) goto l18;
          i2=OOC_FALSE;
          goto l20;
l18:
          i2 = *(OOC_INT8*)((_check_pointer(i2, 28879))+5);
          i2 = i2!=44;
          
l20:
          if (!i2) goto l42;
l22_loop:
          i2 = (OOC_INT32)OOC_Doc__NewBlockList();
          firstColumnList = (OOC_Doc__BlockList)i2;
          i3 = (OOC_INT32)token;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 28971))+5);
          i3 = i3==34;
          if (!i3) goto l33;
l24_loop:
          OOC_Doc_Input_Texinfo__Parse_NextToken();
          i3 = OOC_Doc_Input_Texinfo__Parse_IsOberonRef(i0);
          if (i3) goto l27;
          i3 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_FALSE, OOC_FALSE, OOC_TRUE);
          i3 = (OOC_INT32)OOC_Doc__NewMarkedInline(i0, (OOC_Doc__InlineElement)i3);
          first = (OOC_Doc__MarkedInline)i3;
          
          goto l28;
l27:
          i3 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_FALSE, OOC_FALSE, OOC_TRUE);
          i3 = (OOC_INT32)OOC_Doc__NewOberonRef(i0, (OOC_Doc__InlineElement)i3, (ADT_Storable__Object)(OOC_INT32)0);
          first = (OOC_Doc__MarkedInline)i3;
          
l28:
          i3 = (OOC_INT32)OOC_Doc__NewFirstColumn(OOC_FALSE, (OOC_Doc__InlineElement)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29407)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i2, (OOC_Doc__BlockElement)i3);
          i3 = (OOC_INT32)token;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 29476))+5);
          i3 = i3!=35;
          if (!i3) goto l24_loop;
l33:
          i3 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList();
          tableEntry = (OOC_Doc__BlockElement)i3;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 29628));
          i3 = (OOC_INT32)OOC_Doc__NewItem(OOC_FALSE, (OOC_Doc__BlockElement)i3);
          i2 = (OOC_INT32)OOC_Doc__NewTableRow(OOC_FALSE, (OOC_Doc__BlockElement)i2, (OOC_Doc__Item)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29567)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i1, (OOC_Doc__BlockElement)i2);
          i2 = (OOC_INT32)token;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 28856))+5);
          i3 = i3!=33;
          if (i3) goto l36;
          i2=OOC_FALSE;
          goto l38;
l36:
          i2 = *(OOC_INT8*)((_check_pointer(i2, 28879))+5);
          i2 = i2!=44;
          
l38:
          if (i2) goto l22_loop;
l42:
          OOC_Doc_Input_Texinfo__Parse_ParseBlockList_CheckEnd(32);
          i0 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29763));
          i0 = (OOC_INT32)OOC_Doc__NewTable(i0, (OOC_Doc__BlockElement)i1);
          return (OOC_Doc__Table)i0;
          ;
        }


      noIndent = OOC_TRUE;
      i0 = (OOC_INT32)OOC_Doc__NewBlockList();
      list = (OOC_Doc__BlockList)i0;
l1_loop:
      i0 = (OOC_INT32)token;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 29890))+5);
      switch (i1) {
      case 44:
        goto l24;
      case 42:
        OOC_Doc_Input_Texinfo__Parse_Err(10);
        OOC_Doc_Input_Texinfo__Parse_NextToken();
        goto l1_loop;
      case 29:
        noIndent = OOC_TRUE;
        OOC_Doc_Input_Texinfo__Parse_NextToken();
        goto l1_loop;
      case 28:
        i0 = (OOC_INT32)list;
        i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Itemize();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30150)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i0, (OOC_Doc__BlockElement)i1);
        goto l1_loop;
      case 27:
        i0 = (OOC_INT32)list;
        i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Example();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30216)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i0, (OOC_Doc__BlockElement)i1);
        goto l1_loop;
      case 30:
      case 31:
        i0 = (OOC_INT32)list;
        i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_PCond();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30295)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i0, (OOC_Doc__BlockElement)i1);
        goto l1_loop;
      case 32:
        i0 = (OOC_INT32)list;
        i1 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_Table();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30357)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i0, (OOC_Doc__BlockElement)i1);
        goto l1_loop;
      default:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 30469))+5);
        i1 = i1==40;
        if (i1) goto l13;
        i1=OOC_FALSE;
        goto l15;
l13:
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30493))+20);
        i1 = (
        _cmp8((const void*)(_check_pointer(i1, 30498)),(const void*)""))==(OOC_INT32)0;
        
l15:
        if (!i1) goto l16;
        goto l21;
l16:
        i0 = OOC_Doc_Input_Texinfo__Parse_IsInlineToken((OOC_Doc_Input_Texinfo__Token)i0);
        i0 = !i0;
        if (i0) goto l24;
        i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList_ParseInlineList(OOC_FALSE, OOC_FALSE, OOC_FALSE);
        inlineText = (OOC_Doc__InlineElement)i0;
        i0 = (OOC_INT32)list;
        i1 = OOC_Doc_Input_Texinfo__Parse_ParseBlockList_AtEmptyLine();
        i2 = (OOC_INT32)inlineText;
        i3 = noIndent;
        i1 = (OOC_INT32)OOC_Doc__NewParagraph(i1, (OOC_Doc__InlineElement)i2, i3);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30728)))), OOC_Doc__BlockListDesc_Append)),OOC_Doc__BlockListDesc_Append)((OOC_Doc__BlockList)i0, (OOC_Doc__BlockElement)i1);
        noIndent = OOC_FALSE;
        goto l1_loop;
l21:
        OOC_Doc_Input_Texinfo__Parse_NextToken();
        goto l1_loop;
      }
l24:
      i0 = (OOC_INT32)list;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30924));
      return (OOC_Doc__BlockElement)i0;
      ;
    }


  i0 = (OOC_INT32)OOC_Doc_TextBuffer__New();
  buffer = (OOC_Doc_TextBuffer__Buffer)i0;
  i0 = removeDecoration;
  i1 = (OOC_INT32)sym;
  if (i0) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31101))+8);
  str = (OOC_Scanner_InputBuffer__CharArray)i0;
  decoration = (OOC_Doc_Decoration__Decoration)(OOC_INT32)0;
  
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_Doc_Decoration__Remove((OOC_Scanner_Builder_BasicList__Symbol)i1, (void*)(OOC_INT32)&decoration);
  str = (OOC_Scanner_InputBuffer__CharArray)i0;
  
l4:
  i2 = (OOC_INT32)errList;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 31165));
  oldErrors = i3;
  i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__Tokenize((OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Error__List)i2);
  tokenList = (OOC_Doc_Input_Texinfo__Token)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i2, 31293));
  i1 = i1==i3;
  if (i1) goto l7;
  return (OOC_Doc__Document)(OOC_INT32)0;
  goto l8;
l7:
  token = (OOC_Doc_Input_Texinfo__Token)i0;
  i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse_ParseBlockList();
  blockList = (OOC_Doc__BlockElement)i0;
  OOC_Doc_Input_Texinfo__Parse_CheckToken(44);
  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 31512))+24);
  i1 = (OOC_INT32)blockList;
  i2 = (OOC_INT32)decoration;
  i0 = (OOC_INT32)OOC_Doc__NewDocument((OOC_Doc__BlockElement)i1, (OOC_Doc_Decoration__Decoration)i2, i0);
  document = (OOC_Doc__Document)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31537)))), OOC_Doc__DocumentDesc_Normalize)),OOC_Doc__DocumentDesc_Normalize)((OOC_Doc__Document)i0);
  return (OOC_Doc__Document)i0;
l8:
  _failed_function(13912); return 0;
  ;
}

static void OOC_Doc_Input_Texinfo__Init() {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;
  auto void OOC_Doc_Input_Texinfo__Init_Register(OOC_INT32 cmdId, const OOC_CHAR8 name__ref[], OOC_LEN name_0d);
  auto void OOC_Doc_Input_Texinfo__Init_RegisterArgs(OOC_INT32 cmdId, OOC_INT8 low, OOC_INT8 high);
    
    void OOC_Doc_Input_Texinfo__Init_Register(OOC_INT32 cmdId, const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

      OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
      i0 = cmdId;
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 31746))*4);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 31753))+1);
      i1 = i1==-1;
      if (i1) goto l3;
      Out__String("Module OOC:Doc:Input:Texinfo: Command id ", 42);
      Out__LongInt(i0, 0);
      Out__String(" for @", 7);
      Out__String((void*)(OOC_INT32)name, name_0d);
      Out__String(" already in use by @", 21);
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32621))*4);
      Out__String((void*)((_check_pointer(i0, 32628))+2), 16);
      Out__Ln();
      _halt(1);
      goto l10;
l3:
      switch (i0) {
      case 0 ... 2:
        i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 31844))*4);
        *(OOC_INT8*)((_check_pointer(i1, 31851))+1) = 1;
        i1 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(1, name_0d, OOC_UINT8, 31887)));
        _assert((i1==(OOC_CHAR8)'\000'), 127, 31875);
        _assert((i0<127), 127, 31908);
        i1 = *(OOC_UINT8*)((OOC_INT32)name+(_check_index(0, name_0d, OOC_UINT8, 31961)));
        *(OOC_INT8*)((OOC_INT32)OOC_Doc_Input_Texinfo__class1+(_check_index(i1, 256, OOC_CHAR8, 31951))) = i0;
        goto l9;
      case 3 ... 6:
        i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32042))*4);
        *(OOC_INT8*)((_check_pointer(i1, 32049))+1) = 2;
        goto l9;
      case 7 ... 26:
        i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32112))*4);
        *(OOC_INT8*)((_check_pointer(i1, 32119))+1) = 3;
        i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32150))*4);
        *(OOC_INT8*)((_check_pointer(i1, 32157))+18) = 1;
        i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32189))*4);
        *(OOC_INT8*)((_check_pointer(i1, 32196))+19) = 1;
        goto l9;
      case 27 ... 35:
        i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32261))*4);
        *(OOC_INT8*)((_check_pointer(i1, 32268))+1) = 4;
        goto l9;
      default:
        _failed_case(i0, 31780);
        goto l9;
      }
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32321))*4);
      _copy_8((const void*)(OOC_INT32)name,(void*)((_check_pointer(i1, 32328))+2),16);
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32367))*4);
      _assert(((
      _cmp8((const void*)(OOC_INT32)name,(const void*)((_check_pointer(i0, 32374))+2)))==(OOC_INT32)0), 127, 32345);
l10:
      return;
      ;
    }

    
    void OOC_Doc_Input_Texinfo__Init_RegisterArgs(OOC_INT32 cmdId, OOC_INT8 low, OOC_INT8 high) {
      register OOC_INT32 i0,i1,i2;

      i0 = cmdId;
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32785))*4);
      i2 = low;
      *(OOC_INT8*)((_check_pointer(i1, 32792))+18) = i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32822))*4);
      i1 = high;
      *(OOC_INT8*)((_check_pointer(i0, 32829))+19) = i1;
      return;
      ;
    }


  i0=0;
l1_loop:
  i1 = i0+1;
  i2 = i1<=255;
  *(OOC_INT8*)((OOC_INT32)OOC_Doc_Input_Texinfo__class1+(_check_index(i0, 256, OOC_UINT32, 32915))) = -1;
  if (!i2) goto l5;
  i0=i1;
  goto l1_loop;
l5:
  i = 0;
  i0=0;
l6_loop:
  *(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 32984))*4) = ((OOC_INT32)RT0__NewObject(_td_OOC_Doc_Input_Texinfo__Command.baseTypes[0]));
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 33003))*4);
  *(OOC_INT8*)((_check_pointer(i1, 33006))+1) = -1;
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 33034))*4);
  _copy_8((const void*)"",(void*)((_check_pointer(i1, 33037))+2),16);
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 33064))*4);
  *(OOC_INT8*)((_check_pointer(i1, 33067))+18) = -1;
  i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_Doc_Input_Texinfo__cmdList+(_check_index(i0, 36, OOC_UINT32, 33096))*4);
  *(OOC_INT8*)((_check_pointer(i1, 33099))+19) = -1;
  i0 = i0+1;
  i = i0;
  i1 = i0<=35;
  if (i1) goto l6_loop;
l10:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  OOC_Doc_Input_Texinfo__emptyString = (OOC_Scanner_InputBuffer__CharArray)i0;
  i0 = _check_pointer(i0, 33165);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 33165))) = (OOC_CHAR8)'\000';
  OOC_Doc_Input_Texinfo__Init_Register(0, "@", 2);
  OOC_Doc_Input_Texinfo__Init_Register(1, "{", 2);
  OOC_Doc_Input_Texinfo__Init_Register(2, "}", 2);
  OOC_Doc_Input_Texinfo__Init_Register(3, "bullet", 7);
  OOC_Doc_Input_Texinfo__Init_Register(4, "dots", 5);
  OOC_Doc_Input_Texinfo__Init_Register(5, "minus", 6);
  OOC_Doc_Input_Texinfo__Init_Register(6, "result", 7);
  OOC_Doc_Input_Texinfo__Init_Register(7, "asis", 5);
  OOC_Doc_Input_Texinfo__Init_Register(8, "cite", 5);
  OOC_Doc_Input_Texinfo__Init_Register(9, "code", 5);
  OOC_Doc_Input_Texinfo__Init_Register(10, "dfn", 4);
  OOC_Doc_Input_Texinfo__Init_Register(25, "email", 6);
  OOC_Doc_Input_Texinfo__Init_RegisterArgs(25, 1, 2);
  OOC_Doc_Input_Texinfo__Init_Register(11, "emph", 5);
  OOC_Doc_Input_Texinfo__Init_Register(12, "file", 5);
  OOC_Doc_Input_Texinfo__Init_Register(13, "kbd", 4);
  OOC_Doc_Input_Texinfo__Init_Register(18, "omodule", 8);
  OOC_Doc_Input_Texinfo__Init_Register(19, "oconst", 7);
  OOC_Doc_Input_Texinfo__Init_Register(20, "ofield", 7);
  OOC_Doc_Input_Texinfo__Init_Register(21, "oparam", 7);
  OOC_Doc_Input_Texinfo__Init_Register(22, "oproc", 6);
  OOC_Doc_Input_Texinfo__Init_Register(23, "otype", 6);
  OOC_Doc_Input_Texinfo__Init_Register(24, "ovar", 5);
  OOC_Doc_Input_Texinfo__Init_Register(14, "samp", 5);
  OOC_Doc_Input_Texinfo__Init_Register(15, "strong", 7);
  OOC_Doc_Input_Texinfo__Init_Register(26, "uref", 5);
  OOC_Doc_Input_Texinfo__Init_RegisterArgs(26, 1, 3);
  OOC_Doc_Input_Texinfo__Init_Register(16, "url", 4);
  OOC_Doc_Input_Texinfo__Init_Register(17, "var", 4);
  OOC_Doc_Input_Texinfo__Init_Register(33, "end", 4);
  OOC_Doc_Input_Texinfo__Init_Register(27, "example", 8);
  OOC_Doc_Input_Texinfo__Init_Register(34, "item", 5);
  OOC_Doc_Input_Texinfo__Init_Register(28, "itemize", 8);
  OOC_Doc_Input_Texinfo__Init_Register(35, "itemx", 6);
  OOC_Doc_Input_Texinfo__Init_Register(29, "noindent", 9);
  OOC_Doc_Input_Texinfo__Init_Register(30, "precond", 8);
  OOC_Doc_Input_Texinfo__Init_Register(31, "postcond", 9);
  OOC_Doc_Input_Texinfo__Init_Register(32, "table", 6);
  return;
  ;
}

void OOC_OOC_Doc_Input_Texinfo_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_Input_Texinfo__ErrorContext.baseTypes[0]);
  OOC_Doc_Input_Texinfo__texinfoContext = (OOC_Doc_Input_Texinfo__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Doc:Texinfo", 16);
  OOC_Doc_Input_Texinfo__Init();
  return;
  ;
}

/* --- */
