#include "TextRider.d"
#include "__oo2c.h"

static Msg__Msg TextRider__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)TextRider__errorContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

void TextRider__ErrorContextDesc_GetTemplate(TextRider__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7834))+8);
  switch (i1) {
  case 1:
    _copy_8("Number exceeded limits or string was too long",(OOC_INT32)str,128);
    goto l4;
  default:
    _copy_8("",(OOC_INT32)str,128);
    i1 = (OOC_INT32)context;
    Msg__ContextDesc_GetTemplate((Msg__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)templ, templ_0d);
    goto l4;
  }
l4:
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)""))!=0;
  if (!i0) goto l7;
  _copy_8to16((OOC_INT32)str,(OOC_INT32)templ,templ_0d);
l7:
  return;
  ;
}

static void TextRider__EolDetect(TextRider__Reader r, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8327));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8356))+20);
  if (i1) goto l9;
  i1 = ch;
  *(OOC_UINT8*)(((_check_pointer(i0, 8652))+16)+(_check_index(0, 2, OOC_UINT8, 8657))) = i1;
  i1 = i1==(OOC_CHAR8)'\012';
  if (i1) goto l7;
  *(OOC_UINT8*)((_check_pointer(i0, 8794))+20) = OOC_TRUE;
  goto l15;
l7:
  *(OOC_INT16*)((_check_pointer(i0, 8733))+18) = 1;
  goto l15;
l9:
  i1 = ch;
  i2 = i1==(OOC_CHAR8)'\012';
  if (i2) goto l12;
  *(OOC_INT16*)((_check_pointer(i0, 8573))+18) = 1;
  goto l13;
l12:
  *(OOC_UINT8*)(((_check_pointer(i0, 8486))+16)+(_check_index(1, 2, OOC_UINT8, 8491))) = i1;
  *(OOC_INT16*)((_check_pointer(i0, 8513))+18) = 2;
l13:
  *(OOC_UINT8*)((_check_pointer(i0, 8609))+20) = OOC_FALSE;
l15:
  return;
  ;
}

static OOC_CHAR8 TextRider__Lookahead(TextRider__Reader r, OOC_INT16 len) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9451));
  _assert((i1==(OOC_INT32)0), 127, 9442);
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9475))+32);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9502))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 9493))+24)+(_check_index((i1-1), 2, OOC_UINT16, 9500))*4);
  i1 = i1==(OOC_INT32)0;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  i2 = len;
  if (!i1) goto l38;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9540))+32);
  i1 = i1<i2;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l11;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9559))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9571))+4);
  i1 = i1==(OOC_INT32)0;
  
l11:
  if (!i1) goto l38;
l13_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9597))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9597))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9609)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i3, (void*)(OOC_INT32)&ch);
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9640))+18);
  i1 = i1<0;
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l26;
l16:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9670))+20);
  if (i1) goto l19;
  i1 = ch;
  i1 = i1==(OOC_CHAR8)'\012';
  
  goto l21;
l19:
  i1=OOC_TRUE;
l21:
  if (i1) goto l23;
  i1 = ch;
  i1 = i1==(OOC_CHAR8)'\015';
  
  goto l26;
l23:
  i1=OOC_TRUE;
l26:
  if (!i1) goto l28;
  i1 = ch;
  TextRider__EolDetect((TextRider__Reader)i0, i1);
l28:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9786))+32);
  i3 = ch;
  *(OOC_UINT8*)(((_check_pointer(i0, 9780))+21)+(_check_index(i1, 2, OOC_UINT16, 9784))) = i3;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9820))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9833))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9845))+4);
  *(OOC_INT32*)(((_check_pointer(i0, 9811))+24)+(_check_index(i1, 2, OOC_UINT16, 9818))*4) = i3;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9866))+32);
  *(OOC_INT16*)((_check_pointer(i0, 9866))+32) = (i1+1);
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9540))+32);
  i1 = i1<i2;
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9559))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9571))+4);
  i1 = i1==(OOC_INT32)0;
  
l33:
  if (i1) goto l13_loop;
l38:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9914))+32);
  i1 = i2<=i1;
  if (i1) goto l41;
  i0=OOC_FALSE;
  goto l42;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 9927))+24)+(_check_index((i2-1), 2, OOC_UINT16, 9934))*4);
  i0 = i0==(OOC_INT32)0;
  
l42:
  return i0;
  ;
}

static OOC_CHAR8 TextRider__Consume(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_CHAR8 ch;
  OOC_INT16 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10186));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  ch = (OOC_CHAR8)'\000';
  goto l35;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10216))+32);
  i1 = i1>0;
  if (i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10454))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10454))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10466)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)&ch);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10497))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10509))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l23;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10603))+18);
  i1 = i1<0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l20;
l10:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10636))+20);
  if (i1) goto l13;
  i1 = ch;
  i1 = i1==(OOC_CHAR8)'\012';
  
  goto l15;
l13:
  i1=OOC_TRUE;
l15:
  if (i1) goto l17;
  i1 = ch;
  i1 = i1==(OOC_CHAR8)'\015';
  
  goto l20;
l17:
  i1=OOC_TRUE;
l20:
  if (!i1) goto l35;
  i1 = ch;
  TextRider__EolDetect((TextRider__Reader)i0, i1);
  goto l35;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10549))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10561))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10539)) = i1;
  ch = (OOC_CHAR8)'\000';
  goto l35;
l25:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 10249))+21)+(_check_index(0, 2, OOC_UINT8, 10253)));
  ch = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 10277))+24)+(_check_index(0, 2, OOC_UINT8, 10284))*4);
  *(OOC_INT32*)(_check_pointer(i0, 10267)) = i1;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10312))+32);
  i1 = i1-1;
  i2 = 1<=i1;
  i = 1;
  if (!i2) goto l33;
  i2=1;
l28_loop:
  i3 = i2-1;
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 10350))+21)+(_check_index(i2, 2, OOC_UINT16, 10354)));
  *(OOC_UINT8*)(((_check_pointer(i0, 10336))+21)+(_check_index(i3, 2, OOC_UINT16, 10340))) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 10387))+24)+(_check_index(i2, 2, OOC_UINT16, 10394))*4);
  *(OOC_INT32*)(((_check_pointer(i0, 10370))+24)+(_check_index(i3, 2, OOC_UINT16, 10377))*4) = i4;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l28_loop;
l33:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10425))+32);
  *(OOC_INT16*)((_check_pointer(i0, 10425))+32) = (i1-1);
l35:
  i0 = ch;
  return i0;
  ;
}

OOC_INT32 TextRider__ReaderDesc_Pos(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11058))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11058))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11069)))), Channel__ReaderDesc_Pos)),Channel__ReaderDesc_Pos)((Channel__Reader)i2);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 11077))+32);
  return (i1-i0);
  ;
}

void TextRider__ReaderDesc_ClearError(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11145))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11145))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11157)))), Channel__ReaderDesc_ClearError)),Channel__ReaderDesc_ClearError)((Channel__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 11176)) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 11196))+20) = OOC_FALSE;
  return;
  ;
}

OOC_INT32 TextRider__ReaderDesc_Available(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 avail;
  OOC_INT32 laChars;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11342))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11342))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11354)))), Channel__ReaderDesc_Available)),Channel__ReaderDesc_Available)((Channel__Reader)i2);
  avail = i1;
  laChars = 0;
  i2 = *(OOC_INT16*)((_check_pointer(i0, 11409))+32);
  i2 = 0!=i2;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 11422))+24)+(_check_index(0, 2, OOC_UINT32, 11429))*4);
  i2 = i2==(OOC_INT32)0;
  
l5:
  if (i2) goto l7;
  i0=0;
  goto l17;
l7:
  i2=0;
l8_loop:
  i2 = i2+1;
  laChars = i2;
  i3 = *(OOC_INT16*)((_check_pointer(i0, 11409))+32);
  i3 = i2!=i3;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 11422))+24)+(_check_index(i2, 2, OOC_UINT32, 11429))*4);
  i3 = i3==(OOC_INT32)0;
  
l13:
  if (i3) goto l8_loop;
l16:
  i0=i2;
l17:
  i2 = i1<0;
  if (i2) goto l20;
  i2=OOC_FALSE;
  goto l22;
l20:
  i2 = i0>0;
  
l22:
  if (i2) goto l24;
  return (i1+i0);
  goto l25;
l24:
  return i0;
l25:
  _failed_function(11260); return 0;
  ;
}

void TextRider__ReaderDesc_SetPos(TextRider__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11668));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11694))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11694))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11706)))), Channel__ReaderDesc_SetPos)),Channel__ReaderDesc_SetPos)((Channel__Reader)i2, i3);
  *(OOC_INT16*)((_check_pointer(i0, 11731))+32) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 11809))+20) = OOC_FALSE;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11894))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11906))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11884)) = i1;
l3:
  return;
  ;
}

void TextRider__ReaderDesc_SetOpts(TextRider__Reader r, OOC_UINT32 opts) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = opts;
  *(OOC_UINT32*)((_check_pointer(i0, 12038))+4) = i1;
  return;
  ;
}

void TextRider__ReaderDesc_SetEol(TextRider__Reader r, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)
  OOC_INT16 i;

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13876));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l26;
  i1 = markerLen;
  i2 = i1<1;
  if (i2) goto l5;
  i2=OOC_FALSE;
  goto l7;
l5:
  i2 = i1!=-1;
  
l7:
  if (i2) goto l9;
  i2 = i1>2;
  
  goto l11;
l9:
  i2=OOC_TRUE;
l11:
  if (i2) goto l24;
  i2 = i1-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l23;
  i3=0;
l15_loop:
  i4 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i3, marker_0d, OOC_UINT16, 14085)));
  i4 = i4>=(OOC_CHAR8)' ';
  if (!i4) goto l18;
  i4 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 14115)) = i4;
l18:
  i4 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i3, marker_0d, OOC_UINT16, 14193)));
  *(OOC_UINT8*)(((_check_pointer(i0, 14175))+16)+(_check_index(i3, 2, OOC_UINT16, 14180))) = i4;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l15_loop;
l23:
  *(OOC_INT16*)((_check_pointer(i0, 14219))+18) = i1;
  goto l26;
l24:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 13983)) = i1;
l26:
  return;
  ;
}

void TextRider__ReaderDesc_ReadChar(TextRider__Reader r, OOC_CHAR8 *ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  *ch = i0;
  return;
  ;
}

OOC_CHAR8 TextRider__ReaderDesc_Eol(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 i;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14759));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return OOC_TRUE;
  goto l31;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 14789))+18);
  i1 = i1>0;
  if (i1) goto l14;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i1) goto l8;
  return OOC_TRUE;
  goto l31;
l8:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 15111))+18);
  i1 = i1>0;
  if (i1) goto l11;
  i0 = *(OOC_UINT8*)(((_check_pointer(i0, 15274))+21)+(_check_index(0, 2, OOC_UINT8, 15278)));
  return (i0==(OOC_CHAR8)'\015');
  goto l31;
l11:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15148)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  return i0;
  goto l31;
l14:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 14831))+18);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l29;
  i2=0;
l17_loop:
  i3 = i2+1;
  i4 = TextRider__Lookahead((TextRider__Reader)i0, i3);
  if (i4) goto l20;
  i2 = *(OOC_INT16*)((_check_pointer(i0, 15004))+32);
  return (i2==1);
  goto l24;
l20:
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 14910))+16)+(_check_index(i2, 2, OOC_UINT16, 14915)));
  i2 = *(OOC_UINT8*)(((_check_pointer(i0, 14899))+21)+(_check_index(i2, 2, OOC_UINT16, 14903)));
  i2 = i2!=i4;
  if (!i2) goto l24;
  return OOC_FALSE;
l24:
  i2 = i3<=i1;
  i = i3;
  if (!i2) goto l29;
  i2=i3;
  goto l17_loop;
l29:
  return OOC_TRUE;
l31:
  _failed_function(14492); return 0;
  ;
}

static void TextRider__SkipBlanks(TextRider__Reader r) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15701));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l53;
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 15750))+4);
  i1 = _in(0,i1);
  if (i1) goto l20;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15967))+21)+(_check_index(0, 2, OOC_UINT8, 15971)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l9:
  if (!i1) goto l53;
l10_loop:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i1) goto l13;
  i1=OOC_FALSE;
  goto l15;
l13:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15967))+21)+(_check_index(0, 2, OOC_UINT8, 15971)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l15:
  if (i1) goto l10_loop;
  goto l53;
l20:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15777)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i1 = !i1;
  if (i1) goto l23;
  i1=OOC_FALSE;
  goto l25;
l23:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l25:
  if (i1) goto l27;
  i1=OOC_FALSE;
  goto l29;
l27:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15824))+21)+(_check_index(0, 2, OOC_UINT8, 15828)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l29:
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15858))+21)+(_check_index(0, 2, OOC_UINT8, 15862)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l33:
  if (!i1) goto l53;
l34_loop:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15777)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i1 = !i1;
  if (i1) goto l37;
  i1=OOC_FALSE;
  goto l39;
l37:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l39:
  if (i1) goto l41;
  i1=OOC_FALSE;
  goto l43;
l41:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15824))+21)+(_check_index(0, 2, OOC_UINT8, 15828)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l43:
  if (i1) goto l45;
  i1=OOC_FALSE;
  goto l47;
l45:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15858))+21)+(_check_index(0, 2, OOC_UINT8, 15862)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l47:
  if (i1) goto l34_loop;
l53:
  return;
  ;
}

static void TextRider__SkipEol(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16146)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  if (!i1) goto l11;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 16185))+18);
  i1 = _abs(i1);
  i2 = 1<=i1;
  if (!i2) goto l11;
  i2=1;
l5_loop:
  i3 = TextRider__Consume((TextRider__Reader)i0);
  i2 = i2+1;
  i3 = i2<=i1;
  if (i3) goto l5_loop;
l11:
  return;
  ;
}

void TextRider__ReaderDesc_ReadLn(TextRider__Reader r) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)r;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16449)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i1 = !i1;
  if (!i1) goto l8;
l3_loop:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16449)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i1 = !i1;
  if (i1) goto l3_loop;
l8:
  TextRider__SkipEol((TextRider__Reader)i0);
  return;
  ;
}

void TextRider__ReaderDesc_ReadString(TextRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 cnt;
  OOC_CHAR8 quote;

  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  cnt = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16890));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l4:
  if (i1) goto l7;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  i0=0;
  goto l34;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 16939))+21)+(_check_index(0, 2, OOC_UINT8, 16943)));
  i1 = i1!=(OOC_CHAR8)'"';
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 16958))+21)+(_check_index(0, 2, OOC_UINT8, 16962)));
  i1 = i1!=(OOC_CHAR8)'\047';
  
l12:
  if (i1) goto l32;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  quote = i1;
  i2 = s_0d-1;
  i3=0;
l14_loop:
  i4 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  i4 = !i4;
  if (i4) goto l30;
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 17203))+21)+(_check_index(0, 2, OOC_UINT8, 17207)));
  i4 = i4<(OOC_CHAR8)' ';
  if (i4) goto l28;
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 17306))+21)+(_check_index(0, 2, OOC_UINT8, 17310)));
  i4 = i4==i1;
  if (i4) goto l26;
  i4 = i3==i2;
  if (i4) goto l24;
  i4 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i3, s_0d, OOC_UINT16, 17530))) = i4;
  i3 = i3+1;
  cnt = i3;
  
  goto l14_loop;
l24:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 17448)) = i1;
  goto l31;
l26:
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l31;
l28:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 17236)) = i1;
  goto l31;
l30:
  i0 = TextRider__Consume((TextRider__Reader)i0);
l31:
  i0=i3;
  goto l34;
l32:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 16987)) = i1;
  i0=0;
l34:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT16, 17688))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void TextRider__ReaderDesc_ReadLine(TextRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 dummy;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 18211))+20);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l5:
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 18248))+21)+(_check_index(0, 2, OOC_UINT8, 18252)));
  i1 = i1==(OOC_CHAR8)'\012';
  
l9:
  if (!i1) goto l11;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  dummy = i1;
l11:
  cnt = 0;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18373)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i1 = !i1;
  if (i1) goto l14;
  i1=OOC_FALSE;
  goto l15;
l14:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l15:
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = 0!=(s_0d-1);
  
l20:
  if (i1) goto l22;
  i1=0;
  goto l36;
l22:
  i1 = s_0d-1;
  i2=0;
l23_loop:
  i3 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 18430))) = i3;
  i2 = i2+1;
  cnt = i2;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18373)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i3 = !i3;
  if (i3) goto l26;
  i3=OOC_FALSE;
  goto l28;
l26:
  i3 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l28:
  if (i3) goto l30;
  i3=OOC_FALSE;
  goto l32;
l30:
  i3 = i2!=i1;
  
l32:
  if (i3) goto l23_loop;
l35:
  i1=i2;
l36:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18490)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  if (i2) goto l42;
  i2 = i1==(s_0d-1);
  if (!i2) goto l43;
  i2 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 18562)) = i2;
  goto l43;
l42:
  TextRider__SkipEol((TextRider__Reader)i0);
l43:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT16, 18612))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void TextRider__ReaderDesc_ReadIdentifier(TextRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  cnt = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18907));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l4:
  if (i1) goto l7;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  i0=0;
  goto l30;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 18975))+21)+(_check_index(0, 2, OOC_UINT8, 18979)));
  i1 = CharClass__IsLetter(i1);
  i1 = !i1;
  if (i1) goto l28;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT8, 19052))) = i1;
  i1 = s_0d-1;
  cnt = 1;
  i2=1;
l10_loop:
  i3 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i3) goto l13;
  i3=OOC_FALSE;
  goto l18;
l13:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 19173))+21)+(_check_index(0, 2, OOC_UINT8, 19177)));
  i3 = CharClass__IsLetter(i3);
  if (i3) goto l16;
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 19222))+21)+(_check_index(0, 2, OOC_UINT8, 19226)));
  i3 = CharClass__IsNumeric(i3);
  
  goto l18;
l16:
  i3=OOC_TRUE;
l18:
  i3 = !i3;
  if (i3) goto l27;
  i3 = i2==i1;
  if (i3) goto l24;
  i3 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 19389))) = i3;
  i2 = i2+1;
  cnt = i2;
  
  goto l10_loop;
l24:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 19307)) = i1;
l27:
  i0=i2;
  goto l30;
l28:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 18998)) = i1;
  i0=0;
l30:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT16, 19544))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void TextRider__ReaderDesc_ReadBool(TextRider__Reader r, OOC_CHAR8 *_bool) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 ident[8];

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19947)))), TextRider__ReaderDesc_ReadIdentifier)),TextRider__ReaderDesc_ReadIdentifier)((TextRider__Reader)i0, (void*)(OOC_INT32)ident, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19982));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (
  _cmp8((const void*)(OOC_INT32)ident,(const void*)"TRUE"))==0;
  if (i1) goto l9;
  i1 = (
  _cmp8((const void*)(OOC_INT32)ident,(const void*)"FALSE"))==0;
  if (i1) goto l7;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 20130)) = i1;
  goto l11;
l7:
  *_bool = OOC_FALSE;
  goto l11;
l9:
  *_bool = OOC_TRUE;
l11:
  return;
  ;
}

static OOC_CHAR8 TextRider__HexDigit(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0>=(OOC_CHAR8)'0';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i0<=(OOC_CHAR8)'9';
  
l5:
  if (i1) goto l11;
  i1 = i0>=(OOC_CHAR8)'A';
  if (i1) goto l9;
  i0=OOC_FALSE;
  goto l12;
l9:
  i0 = i0<=(OOC_CHAR8)'F';
  
  goto l12;
l11:
  i0=OOC_TRUE;
l12:
  return i0;
  ;
}

static OOC_CHAR8 TextRider__HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_INT32 *lint) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT16 spos;
  OOC_INT16 epos;
  auto OOC_INT16 TextRider__HexToInt_GetDigit(OOC_CHAR8 c);
    
    OOC_INT16 TextRider__HexToInt_GetDigit(OOC_CHAR8 c) {
      register OOC_INT32 i0,i1;

      i0 = c;
      i1 = 48<=i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = i0<=57;
      
l5:
      if (i1) goto l7;
      i0 = i0-55;
      
      goto l8;
l7:
      i0 = i0-48;
      
l8:
      return i0;
      ;
    }


  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  *lint = 0;
  spos = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 21281)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 21281)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i0 = i0-1;
  epos = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 21388)));
  i1 = i1==(OOC_CHAR8)'0';
  if (i1) goto l12;
  i1=0;
  goto l18;
l12:
  i1=0;
l13_loop:
  i1 = i1+1;
  spos = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 21388)));
  i2 = i2==(OOC_CHAR8)'0';
  if (i2) goto l13_loop;
l18:
  i2 = (i0-i1)>7;
  if (i2) goto l40;
  i0 = i1<=i0;
  if (!i0) goto l41;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 21676)));
  i0 = TextRider__HexToInt_GetDigit(i0);
  i1 = spos;
  i1 = i1+1;
  i2 = epos;
  *lint = i0;
  i3 = (i2-i1)==6;
  spos = i1;
  if (i3) goto l25;
  i3=OOC_FALSE;
  goto l27;
l25:
  i3 = i0>=8;
  
l27:
  if (!i3) goto l30;
  i0 = i0-16;
  *lint = i0;
  
l30:
  i2 = i1<=i2;
  if (!i2) goto l41;
l33_loop:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 22066)));
  i1 = TextRider__HexToInt_GetDigit(i1);
  i0 = (i0*16)+i1;
  i1 = spos;
  i1 = i1+1;
  *lint = i0;
  i2 = epos;
  i2 = i1<=i2;
  spos = i1;
  if (i2) goto l33_loop;
  goto l41;
l40:
  return OOC_FALSE;
l41:
  i0 = epos;
  return (i0>=0);
  ;
}

void TextRider__ReaderDesc_ReadLInt(TextRider__Reader r, OOC_INT32 *lint) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 pos;
  OOC_CHAR8 str[14];
  OOC_CHAR8 ch;
  OOC_CHAR8 ignoreZeros;
  OOC_INT8 res;

  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  pos = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22697));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l5:
  if (i1) goto l7;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l56;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 22746))+21)+(_check_index(0, 2, OOC_UINT8, 22750)));
  i1 = i1==(OOC_CHAR8)'+';
  if (i1) goto l10;
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 22766))+21)+(_check_index(0, 2, OOC_UINT8, 22770)));
  i1 = i1==(OOC_CHAR8)'-';
  
  goto l12;
l10:
  i1=OOC_TRUE;
l12:
  if (i1) goto l14;
  i1=0;
  goto l18;
l14:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 14, OOC_UINT8, 22797))) = i1;
  pos = 1;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  i1 = !i1;
  if (!i1) goto l17;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  return;
l17:
  i1=1;
l18:
  i2 = *(OOC_UINT8*)(((_check_pointer(i0, 23006))+21)+(_check_index(0, 2, OOC_UINT8, 23010)));
  i2 = CharClass__IsNumeric(i2);
  if (i2) goto l21;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 24049)) = i1;
  goto l56;
l21:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 14, OOC_UINT16, 23031))) = (OOC_CHAR8)'0';
  i1 = i1+1;
  pos = i1;
  ignoreZeros = OOC_TRUE;
  i2=i1;i1=OOC_TRUE;
l22_loop:
  i3 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i3) goto l25;
  i3=OOC_FALSE;
  goto l26;
l25:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 23161))+21)+(_check_index(0, 2, OOC_UINT8, 23165)));
  i3 = CharClass__IsNumeric(i3);
  
l26:
  i3 = !i3;
  if (i3) goto l43;
  i3 = TextRider__Consume((TextRider__Reader)i0);
  ch = i3;
  i4 = !i1;
  if (i4) goto l31;
  i4 = i3!=(OOC_CHAR8)'0';
  
  goto l33;
l31:
  i4=OOC_TRUE;
l33:
  if (!i4) goto l22_loop;
  i1 = i2!=14;
  if (i1) goto l38;
  i1=i2;
  goto l39;
l38:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 14, OOC_UINT16, 23449))) = i3;
  i1 = i2+1;
  pos = i1;
  
l39:
  ignoreZeros = OOC_FALSE;
  i2=i1;i1=OOC_FALSE;
  goto l22_loop;
l43:
  i1 = i2==14;
  if (i1) goto l46;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 14, OOC_UINT16, 23725))) = (OOC_CHAR8)'\000';
  IntStr__StrToInt((void*)(OOC_INT32)str, 14, (void*)(OOC_INT32)lint, (void*)(OOC_INT32)&res);
  goto l47;
l46:
  res = 1;
l47:
  i1 = res;
  i2 = i1==1;
  if (i2) goto l53;
  i1 = i1!=0;
  if (!i1) goto l56;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 23983)) = i1;
  goto l56;
l53:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 23890)) = i1;
l56:
  return;
  ;
}

void TextRider__ReaderDesc_ReadHex(TextRider__Reader r, OOC_INT32 *lint) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT16 pos;
  OOC_CHAR8 str[11];
  OOC_CHAR8 ignoreZeros;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  pos = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25018));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l5:
  if (i1) goto l7;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l41;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 25086))+21)+(_check_index(0, 2, OOC_UINT8, 25090)));
  i1 = CharClass__IsNumeric(i1);
  if (i1) goto l10;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 25948)) = i1;
  goto l41;
l10:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 11, OOC_UINT16, 25111))) = (OOC_CHAR8)'0';
  pos = 1;
  ignoreZeros = OOC_TRUE;
  i1=OOC_TRUE;i2=1;
l11_loop:
  i3 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l15;
l14:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 25231))+21)+(_check_index(0, 2, OOC_UINT8, 25235)));
  i3 = TextRider__HexDigit(i3);
  
l15:
  i3 = !i3;
  if (i3) goto l32;
  i3 = TextRider__Consume((TextRider__Reader)i0);
  ch = i3;
  i4 = !i1;
  if (i4) goto l20;
  i4 = i3!=(OOC_CHAR8)'0';
  
  goto l22;
l20:
  i4=OOC_TRUE;
l22:
  if (!i4) goto l11_loop;
  i1 = i2!=11;
  if (i1) goto l27;
  i1=i2;
  goto l28;
l27:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 11, OOC_UINT16, 25519))) = i3;
  i1 = i2+1;
  pos = i1;
  
l28:
  ignoreZeros = OOC_FALSE;
  i2=i1;i1=OOC_FALSE;
  goto l11_loop;
l32:
  i1 = i2==11;
  if (i1) goto l38;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 11, OOC_UINT16, 25801))) = (OOC_CHAR8)'\000';
  i1 = TextRider__HexToInt((void*)(OOC_INT32)str, 11, (void*)(OOC_INT32)lint);
  i1 = !i1;
  if (!i1) goto l41;
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 25866)) = i1;
  goto l41;
l38:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 25739)) = i1;
l41:
  return;
  ;
}

void TextRider__ReaderDesc_ReadInt(TextRider__Reader r, OOC_INT16 *_int) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 lint;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26197)))), TextRider__ReaderDesc_ReadLInt)),TextRider__ReaderDesc_ReadLInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&lint);
  i1 = lint;
  i2 = i1>32767;
  if (i2) goto l3;
  i2 = i1<-32768;
  
  goto l5;
l3:
  i2=OOC_TRUE;
l5:
  if (i2) goto l7;
  *_int = i1;
  goto l8;
l7:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 26276)) = i1;
l8:
  return;
  ;
}

void TextRider__ReaderDesc_ReadSInt(TextRider__Reader r, OOC_INT8 *sint) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 lint;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26498)))), TextRider__ReaderDesc_ReadLInt)),TextRider__ReaderDesc_ReadLInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&lint);
  i1 = lint;
  i2 = i1>127;
  if (i2) goto l3;
  i2 = i1<-128;
  
  goto l5;
l3:
  i2=OOC_TRUE;
l5:
  if (i2) goto l7;
  *sint = i1;
  goto l8;
l7:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 26579)) = i1;
l8:
  return;
  ;
}

void TextRider__ReaderDesc_ReadLReal(TextRider__Reader r, OOC_REAL64 *lreal) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 pos;
  OOC_INT8 _class;
  ConvTypes__ScanState state;
  OOC_CHAR8 str[1024];
  OOC_INT8 res;

  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  pos = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27439));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l5:
  if (i1) goto l7;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l36;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 27503))+21)+(_check_index(0, 2, OOC_UINT8, 27507)));
  LRealConv__ScanReal(i1, (void*)(OOC_INT32)&_class, (void*)(OOC_INT32)&state);
  i1 = _class;
  i1 = i1==1;
  if (i1) goto l10;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 28498)) = i1;
  goto l36;
l10:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT8, 27585))) = i1;
  pos = 1;
  i1=1;
l11_loop:
  i2 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  i2 = !i2;
  if (i2) goto l23;
  i2 = (OOC_INT32)state;
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 27727))+21)+(_check_index(0, 2, OOC_UINT8, 27731)));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 27722));
  ((void (*)(OOC_CHAR8 ch, OOC_INT8 *cl, ConvTypes__ScanState *st))i2)(i3, (void*)(OOC_INT32)&_class, (void*)(OOC_INT32)&state);
  i2 = _class;
  i2 = i2==1;
  if (!i2) goto l23;
  i2 = i1<1024;
  if (i2) goto l18;
  goto l19;
l18:
  i2 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 27853))) = i2;
l19:
  i1 = i1+1;
  pos = i1;
  
  goto l11_loop;
l23:
  i2 = i1<1024;
  if (i2) goto l26;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 28423)) = i1;
  goto l36;
l26:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 28089))) = (OOC_CHAR8)'\000';
  LRealStr__StrToReal((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)lreal, (void*)(OOC_INT32)&res);
  i1 = res;
  i2 = i1==1;
  if (i2) goto l32;
  i1 = i1!=0;
  if (!i1) goto l36;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 28351)) = i1;
  goto l36;
l32:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 28252)) = i1;
l36:
  return;
  ;
}

void TextRider__ReaderDesc_ReadReal(TextRider__Reader r, OOC_REAL32 *real) {
  register OOC_INT32 i0,i1;
  register OOC_REAL64 d0;
  OOC_REAL64 n;
  auto OOC_CHAR8 TextRider__ReaderDesc_ReadReal_ValidReal(OOC_REAL64 value);
    
    OOC_CHAR8 TextRider__ReaderDesc_ReadReal_ValidReal(OOC_REAL64 value) {
      register OOC_INT32 i0;
      register OOC_REAL64 d0;

      d0 = value;
      i0 = (-3.4028234663852886E+38-1.0141204801825835E+31)<d0;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l4;
l3:
      i0 = d0<(3.4028234663852886E+38+1.0141204801825835E+31);
      
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29403)))), TextRider__ReaderDesc_ReadLReal)),TextRider__ReaderDesc_ReadLReal)((TextRider__Reader)i0, (void*)(OOC_INT32)&n);
  d0 = n;
  i0 = TextRider__ReaderDesc_ReadReal_ValidReal(d0);
  if (i0) goto l3;
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 29483)) = i1;
  goto l4;
l3:
  d0 = n;
  *real = ((OOC_REAL32)d0);
l4:
  return;
  ;
}

void TextRider__ReaderDesc_ReadSet(TextRider__Reader r, OOC_UINT32 *s) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 ch;
  auto OOC_UINT32 TextRider__ReaderDesc_ReadSet_ReadRange();
    
    OOC_UINT32 TextRider__ReaderDesc_ReadSet_ReadRange() {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 low;
      OOC_INT8 high;

      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29763)))), TextRider__ReaderDesc_ReadSInt)),TextRider__ReaderDesc_ReadSInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&low);
      i0 = low;
      high = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29818));
      i2 = i2==(OOC_INT32)0;
      if (!i2) goto l37;
      i2 = i0<0;
      if (i2) goto l5;
      i0 = i0>31;
      
      goto l7;
l5:
      i0=OOC_TRUE;
l7:
      if (i0) goto l35;
      i0 = TextRider__Lookahead((TextRider__Reader)i1, 2);
      if (i0) goto l11;
      i0=OOC_FALSE;
      goto l13;
l11:
      i0 = (OOC_INT32)r;
      i0 = *(OOC_UINT8*)(((_check_pointer(i0, 29989))+21)+(_check_index(0, 2, OOC_UINT8, 29993)));
      i0 = i0==(OOC_CHAR8)'.';
      
l13:
      if (i0) goto l15;
      i0=OOC_FALSE;
      goto l17;
l15:
      i0 = (OOC_INT32)r;
      i0 = *(OOC_UINT8*)(((_check_pointer(i0, 30008))+21)+(_check_index(1, 2, OOC_UINT8, 30012)));
      i0 = i0==(OOC_CHAR8)'.';
      
l17:
      if (!i0) goto l37;
      i0 = (OOC_INT32)r;
      i0 = TextRider__Consume((TextRider__Reader)i0);
      ch = i0;
      i0 = (OOC_INT32)r;
      i0 = TextRider__Consume((TextRider__Reader)i0);
      ch = i0;
      i0 = (OOC_INT32)r;
      TextRider__SkipBlanks((TextRider__Reader)i0);
      i0 = (OOC_INT32)r;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30123)))), TextRider__ReaderDesc_ReadSInt)),TextRider__ReaderDesc_ReadSInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&high);
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30157));
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l21;
      i1=OOC_FALSE;
      goto l31;
l21:
      i1 = high;
      i2 = i1<0;
      if (i2) goto l24;
      i2 = i1>31;
      
      goto l26;
l24:
      i2=OOC_TRUE;
l26:
      if (i2) goto l28;
      i2 = low;
      i1 = i1<i2;
      
      goto l31;
l28:
      i1=OOC_TRUE;
l31:
      if (!i1) goto l37;
      i1 = (OOC_INT32)TextRider__GetError(1);
      *(OOC_INT32*)(_check_pointer(i0, 30256)) = i1;
      return 0;
      goto l37;
l35:
      i0 = (OOC_INT32)TextRider__GetError(1);
      *(OOC_INT32*)(_check_pointer(i1, 29897)) = i0;
      return 0;
l37:
      i0 = (OOC_INT32)r;
      TextRider__SkipBlanks((TextRider__Reader)i0);
      i0 = low;
      i1 = high;
      return (_bit_range(i0,i1));
      ;
    }


  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30492));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l5:
  if (i1) goto l7;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l55;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 30541))+21)+(_check_index(0, 2, OOC_UINT8, 30545)));
  i1 = i1==(OOC_CHAR8)'{';
  if (i1) goto l10;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 31208)) = i1;
  goto l55;
l10:
  *s = 0;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30642));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l13;
  i1=OOC_FALSE;
  goto l15;
l13:
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  
l15:
  if (i1) goto l17;
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l55;
l17:
  i0 = *(OOC_UINT8*)(((_check_pointer(i0, 30695))+21)+(_check_index(0, 2, OOC_UINT8, 30699)));
  i0 = i0!=(OOC_CHAR8)'}';
  if (!i0) goto l44;
  i0 = TextRider__ReaderDesc_ReadSet_ReadRange();
  i0 = 0|i0;
  *s = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30769));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l22;
  i2=OOC_FALSE;
  goto l24;
l22:
  i2 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l24:
  if (i2) goto l26;
  i1=OOC_FALSE;
  goto l28;
l26:
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 30806))+21)+(_check_index(0, 2, OOC_UINT8, 30810)));
  i1 = i1==(OOC_CHAR8)',';
  
l28:
  if (!i1) goto l44;
l30_loop:
  i1 = (OOC_INT32)r;
  i2 = TextRider__Consume((TextRider__Reader)i1);
  ch = i2;
  TextRider__SkipBlanks((TextRider__Reader)i1);
  i1 = TextRider__ReaderDesc_ReadSet_ReadRange();
  i0 = i0|i1;
  *s = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30769));
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l33;
  i2=OOC_FALSE;
  goto l35;
l33:
  i2 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l35:
  if (i2) goto l37;
  i1=OOC_FALSE;
  goto l39;
l37:
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 30806))+21)+(_check_index(0, 2, OOC_UINT8, 30810)));
  i1 = i1==(OOC_CHAR8)',';
  
l39:
  if (i1) goto l30_loop;
l44:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30968));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l47;
  i1=OOC_FALSE;
  goto l49;
l47:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 30986))+21)+(_check_index(0, 2, OOC_UINT8, 30990)));
  i1 = i1==(OOC_CHAR8)'}';
  
l49:
  if (i1) goto l51;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 31064)) = i1;
  goto l55;
l51:
  i0 = TextRider__Consume((TextRider__Reader)i0);
l55:
  return;
  ;
}

static void TextRider__SkipSpaces(TextRider__Scanner s) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31793));
  _assert((i1==(OOC_INT32)0), 127, 31784);
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 31836))+12);
  i1 = _in(0,i1);
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32046))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32058))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 32061))+21)+(_check_index(0, 2, OOC_UINT8, 32065)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l7:
  if (!i1) goto l55;
l9_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32092))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32092))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32095)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32198))+4);
  i1 = TextRider__Consume((TextRider__Reader)i1);
  ch = i1;
  goto l13;
l12:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 32124))+24);
  *(OOC_INT32*)((_check_pointer(i0, 32124))+24) = (i1+1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32154))+4);
  TextRider__SkipEol((TextRider__Reader)i1);
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32046))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l18;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32058))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 32061))+21)+(_check_index(0, 2, OOC_UINT8, 32065)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l18:
  if (i1) goto l9_loop;
  goto l55;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31862))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31862))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31865)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  i1 = !i1;
  if (i1) goto l26;
  i1=OOC_FALSE;
  goto l28;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31888))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l28:
  if (i1) goto l30;
  i1=OOC_FALSE;
  goto l32;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31913))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31916))+21)+(_check_index(0, 2, OOC_UINT8, 31920)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l32:
  if (i1) goto l34;
  i1=OOC_FALSE;
  goto l36;
l34:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31948))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31951))+21)+(_check_index(0, 2, OOC_UINT8, 31955)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l36:
  if (!i1) goto l55;
l37_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31998))+4);
  i1 = TextRider__Consume((TextRider__Reader)i1);
  ch = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31862))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31862))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31865)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  i1 = !i1;
  if (i1) goto l40;
  i1=OOC_FALSE;
  goto l42;
l40:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31888))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l42:
  if (i1) goto l44;
  i1=OOC_FALSE;
  goto l46;
l44:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31913))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31916))+21)+(_check_index(0, 2, OOC_UINT8, 31920)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l46:
  if (i1) goto l48;
  i1=OOC_FALSE;
  goto l50;
l48:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31948))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31951))+21)+(_check_index(0, 2, OOC_UINT8, 31955)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l50:
  if (i1) goto l37_loop;
l55:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32249))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32252));
  *(OOC_INT32*)(_check_pointer(i0, 32239)) = i1;
  return;
  ;
}

OOC_INT32 TextRider__ScannerDesc_Pos(TextRider__Scanner s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32391))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32391))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32393)))), TextRider__ReaderDesc_Pos)),TextRider__ReaderDesc_Pos)((TextRider__Reader)i0);
  return i0;
  ;
}

void TextRider__ScannerDesc_ClearError(TextRider__Scanner s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32463))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32463))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32466)))), TextRider__ReaderDesc_ClearError)),TextRider__ReaderDesc_ClearError)((TextRider__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 32485)) = (OOC_INT32)0;
  *(OOC_INT16*)((_check_pointer(i0, 32505))+16) = -1;
  return;
  ;
}

OOC_INT32 TextRider__ScannerDesc_Available(TextRider__Scanner s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32612))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32612))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32614)))), TextRider__ReaderDesc_Available)),TextRider__ReaderDesc_Available)((TextRider__Reader)i0);
  return i0;
  ;
}

void TextRider__ScannerDesc_SetPos(TextRider__Scanner s, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32709));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32735))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32735))+4);
  i3 = pos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32738)))), TextRider__ReaderDesc_SetPos)),TextRider__ReaderDesc_SetPos)((TextRider__Reader)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32770))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32773));
  *(OOC_INT32*)(_check_pointer(i0, 32760)) = i1;
l4:
  return;
  ;
}

void TextRider__ScannerDesc_Scan(TextRider__Scanner s) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 ch;
  OOC_CHAR8 str[1024];
  OOC_INT16 pos;
  OOC_INT8 res;
  auto void TextRider__ScannerDesc_Scan_ReadNum();
  auto void TextRider__ScannerDesc_Scan_SetType(OOC_INT8 type);
    
    void TextRider__ScannerDesc_Scan_ReadNum() {
      register OOC_INT32 i0,i1;
      auto void TextRider__ScannerDesc_Scan_ReadNum_Get();
      auto OOC_CHAR8 TextRider__ScannerDesc_Scan_ReadNum_LA();
        
        void TextRider__ScannerDesc_Scan_ReadNum_Get() {
          register OOC_INT32 i0,i1;

          i0 = pos;
          i1 = i0<1024;
          if (!i1) goto l3;
          i1 = (OOC_INT32)s;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33320))+4);
          i1 = TextRider__Consume((TextRider__Reader)i1);
          *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 33301))) = i1;
l3:
          i0 = pos;
          pos = (i0+1);
          i0 = (OOC_INT32)s;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33371))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33374));
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33456))+4);
          *(OOC_UINT8*)(((_check_pointer(i0, 33459))+21)+(_check_index(0, 2, OOC_UINT8, 33463))) = (OOC_CHAR8)'\000';
          goto l7;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33424))+4);
          i0 = TextRider__Lookahead((TextRider__Reader)i0, 1);
l7:
          return;
          ;
        }

        
        OOC_CHAR8 TextRider__ScannerDesc_Scan_ReadNum_LA() {
          register OOC_INT32 i0;

          i0 = (OOC_INT32)s;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33560))+4);
          i0 = *(OOC_UINT8*)(((_check_pointer(i0, 33563))+21)+(_check_index(0, 2, OOC_UINT8, 33567)));
          return i0;
          ;
        }


      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33611))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33614));
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33642))+4);
      i0 = TextRider__Lookahead((TextRider__Reader)i0, 1);
      
l5:
      if (!i0) goto l81;
      pos = 0;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'-';
      if (i0) goto l9;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'+';
      
      goto l11;
l9:
      i0=OOC_TRUE;
l11:
      if (!i0) goto l13;
      TextRider__ScannerDesc_Scan_ReadNum_Get();
l13:
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = CharClass__IsNumeric(i0);
      i0 = !i0;
      if (i0) goto l23;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = TextRider__HexDigit(i0);
      if (!i0) goto l24;
l17_loop:
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = TextRider__HexDigit(i0);
      if (i0) goto l17_loop;
      goto l24;
l23:
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 33842)) = i1;
      return;
l24:
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'.';
      if (i0) goto l37;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'H';
      if (i0) goto l32;
      i0 = (OOC_INT32)s;
      *(OOC_INT16*)((_check_pointer(i0, 35337))+16) = 2;
      i1 = pos;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 35362))) = (OOC_CHAR8)'\000';
      IntStr__StrToInt((void*)(OOC_INT32)str, 1024, (void*)((_check_pointer(i0, 35405))+28), (void*)(OOC_INT32)&res);
      i0 = res;
      i0 = i0!=0;
      if (!i0) goto l81;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 35472)) = i1;
      goto l81;
l32:
      i0 = (OOC_INT32)s;
      *(OOC_INT16*)((_check_pointer(i0, 35123))+16) = 2;
      i1 = pos;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 35138))) = (OOC_CHAR8)'\000';
      i0 = TextRider__HexToInt((void*)(OOC_INT32)str, 1024, (void*)((_check_pointer(i0, 35180))+28));
      i0 = !i0;
      if (!i0) goto l35;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 35205)) = i1;
l35:
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      goto l81;
l37:
      i0 = (OOC_INT32)s;
      *(OOC_INT16*)((_check_pointer(i0, 34069))+16) = 3;
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = CharClass__IsNumeric(i0);
      if (!i0) goto l44;
l39_loop:
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = CharClass__IsNumeric(i0);
      if (i0) goto l39_loop;
l44:
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'E';
      if (i0) goto l47;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'e';
      
      goto l49;
l47:
      i0=OOC_TRUE;
l49:
      if (!i0) goto l72;
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      i0 = pos;
      i0 = i0-1;
      i1 = i0<1024;
      if (!i1) goto l53;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 34327))) = (OOC_CHAR8)'E';
l53:
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'-';
      if (i0) goto l56;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'+';
      
      goto l58;
l56:
      i0=OOC_TRUE;
l58:
      if (!i0) goto l60;
      TextRider__ScannerDesc_Scan_ReadNum_Get();
l60:
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = CharClass__IsNumeric(i0);
      i0 = !i0;
      if (i0) goto l70;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = CharClass__IsNumeric(i0);
      if (!i0) goto l72;
l64_loop:
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = CharClass__IsNumeric(i0);
      if (i0) goto l64_loop;
      goto l72;
l70:
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 34506)) = i1;
      return;
l72:
      i0 = pos;
      i1 = i0<1024;
      if (i1) goto l75;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 34995)) = i1;
      goto l81;
l75:
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 34749))) = (OOC_CHAR8)'\000';
      i0 = (OOC_INT32)s;
      LRealStr__StrToReal((void*)(OOC_INT32)str, 1024, (void*)((_check_pointer(i0, 34797))+32), (void*)(OOC_INT32)&res);
      i0 = res;
      i0 = i0!=0;
      if (!i0) goto l81;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 34917)) = i1;
l81:
      return;
      ;
    }

    
    void TextRider__ScannerDesc_Scan_SetType(OOC_INT8 type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)s;
      i1 = type;
      *(OOC_INT16*)((_check_pointer(i0, 35632))+16) = i1;
      return;
      ;
    }


  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 35684))+16);
  i1 = i1<9;
  if (!i1) goto l77;
  TextRider__SkipSpaces((TextRider__Scanner)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35848));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35876))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l7:
  if (i1) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37391))+4);
  i0 = TextRider__Consume((TextRider__Reader)i0);
  ch = i0;
  goto l54;
l9:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35905)))), TextRider__ScannerDesc_Pos)),TextRider__ScannerDesc_Pos)((TextRider__Scanner)i0);
  *(OOC_INT32*)((_check_pointer(i0, 35898))+20) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35926))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35926))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35929)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  if (i1) goto l52;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36049))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 36052))+21)+(_check_index(0, 2, OOC_UINT8, 36056)));
  switch (i1) {
  case (OOC_CHAR8)'"':
  case (OOC_CHAR8)'\047':
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36122))+12);
    i1 = _in(3,i1);
    if (i1) goto l16;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36242))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36242))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36245)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36258))+40));
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l16:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36149))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36149))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36152)))), TextRider__ReaderDesc_ReadString)),TextRider__ReaderDesc_ReadString)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36167))+41), 256);
    TextRider__ScannerDesc_Scan_SetType(1);
    goto l54;
  case (OOC_CHAR8)'a' ... (OOC_CHAR8)'z':
  case (OOC_CHAR8)'A' ... (OOC_CHAR8)'Z':
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36357))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36357))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36360)))), TextRider__ReaderDesc_ReadIdentifier)),TextRider__ReaderDesc_ReadIdentifier)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36379))+41), 256);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36407))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 36410));
    i1 = i1==(OOC_INT32)0;
    if (i1) goto l21;
    i1=OOC_FALSE;
    goto l23;
l21:
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36446))+12);
    i1 = _in(1,i1);
    
l23:
    if (i1) goto l25;
    i1=OOC_FALSE;
    goto l31;
l25:
    i1 = (
    _cmp8((const void*)((_check_pointer(i0, 36472))+41),(const void*)"TRUE"))==0;
    if (i1) goto l28;
    i1 = (
    _cmp8((const void*)((_check_pointer(i0, 36496))+41),(const void*)"FALSE"))==0;
    
    goto l31;
l28:
    i1=OOC_TRUE;
l31:
    if (i1) goto l33;
    TextRider__ScannerDesc_Scan_SetType(8);
    goto l54;
l33:
    *(OOC_UINT8*)((_check_pointer(i0, 36535))+304) = ((
    _cmp8((const void*)((_check_pointer(i0, 36547))+41),(const void*)"TRUE"))==0);
    TextRider__ScannerDesc_Scan_SetType(4);
    goto l54;
  case (OOC_CHAR8)'+':
  case (OOC_CHAR8)'-':
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36718))+12);
    i1 = _in(4,i1);
    if (i1) goto l38;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36783))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36783))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36786)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36799))+40));
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l38:
    TextRider__ScannerDesc_Scan_ReadNum();
    goto l54;
  case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
    TextRider__ScannerDesc_Scan_ReadNum();
    goto l54;
  case (OOC_CHAR8)'{':
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36967))+12);
    i1 = _in(2,i1);
    if (i1) goto l44;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37078))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37078))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37081)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 37094))+40));
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l44:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36994))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36994))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36997)))), TextRider__ReaderDesc_ReadSet)),TextRider__ReaderDesc_ReadSet)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 37009))+300));
    TextRider__ScannerDesc_Scan_SetType(5);
    goto l54;
  default:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37175))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37175))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37178)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 37191))+40));
    i0 = *(OOC_UINT8*)((_check_pointer(i0, 37216))+40);
    i0 = i0==(OOC_CHAR8)'\011';
    if (i0) goto l49;
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l49:
    TextRider__ScannerDesc_Scan_SetType(6);
    goto l54;
  }
l52:
  *(OOC_INT16*)((_check_pointer(i0, 35953))+16) = 7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35989))+4);
  TextRider__SkipEol((TextRider__Reader)i1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 36011))+24);
  *(OOC_INT32*)((_check_pointer(i0, 36011))+24) = (i1+1);
l54:
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37442))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37445));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l57;
  i1=OOC_FALSE;
  goto l59;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37463));
  i1 = i1==(OOC_INT32)0;
  
l59:
  if (!i1) goto l61;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37503))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37506));
  *(OOC_INT32*)(_check_pointer(i0, 37493)) = i1;
l61:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37534));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l64;
  i1=OOC_FALSE;
  goto l66;
l64:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37552));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37557))+12);
  i2 = (OOC_INT32)TextRider__errorContext;
  i1 = i1==i2;
  
l66:
  if (!i1) goto l77;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37602));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 37607))+8);
  i1 = i1==8;
  if (i1) goto l70;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37648));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 37653))+8);
  i1 = i1==1;
  
  goto l72;
l70:
  i1=OOC_TRUE;
l72:
  if (i1) goto l74;
  *(OOC_INT16*)((_check_pointer(i0, 37738))+16) = 9;
  goto l77;
l74:
  *(OOC_INT16*)((_check_pointer(i0, 37696))+16) = 10;
l77:
  return;
  ;
}

void TextRider__ScannerDesc_SetOpts(TextRider__Scanner s, OOC_UINT32 opts) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = opts;
  *(OOC_UINT32*)((_check_pointer(i0, 37918))+12) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37935))+4);
  *(OOC_UINT32*)((_check_pointer(i0, 37937))+4) = (i1&1);
  return;
  ;
}

void TextRider__ScannerDesc_SetEol(TextRider__Scanner s, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38137))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38137))+4);
  i2 = markerLen;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38140)))), TextRider__ReaderDesc_SetEol)),TextRider__ReaderDesc_SetEol)((TextRider__Reader)i0, (void*)(OOC_INT32)marker, marker_0d, i2);
  return;
  ;
}

OOC_INT32 TextRider__WriterDesc_Pos(TextRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38441))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38441))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38452)))), Channel__WriterDesc_Pos)),Channel__WriterDesc_Pos)((Channel__Writer)i0);
  return i0;
  ;
}

void TextRider__WriterDesc_SetPos(TextRider__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38537));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38563))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38563))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38574)))), Channel__WriterDesc_SetPos)),Channel__WriterDesc_SetPos)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38608))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38620))+4);
  *(OOC_INT32*)(_check_pointer(i0, 38598)) = i1;
l4:
  return;
  ;
}

void TextRider__WriterDesc_ClearError(TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38697))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38697))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38708)))), Channel__WriterDesc_ClearError)),Channel__WriterDesc_ClearError)((Channel__Writer)i2);
  *(OOC_INT32*)(_check_pointer(i0, 38726)) = (OOC_INT32)0;
  return;
  ;
}

void TextRider__WriterDesc_SetOpts(TextRider__Writer w, OOC_UINT32 opts) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = opts;
  *(OOC_UINT32*)((_check_pointer(i0, 38861))+4) = i1;
  return;
  ;
}

void TextRider__WriterDesc_SetEol(TextRider__Writer w, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)
  OOC_INT16 i;

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39402));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l19;
  i1 = markerLen;
  i2 = i1<0;
  if (i2) goto l5;
  i2 = i1>2;
  
  goto l7;
l5:
  i2=OOC_TRUE;
l7:
  if (i2) goto l17;
  i2 = i1-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l16;
  i3=0;
l11_loop:
  i4 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i3, marker_0d, OOC_UINT16, 39601)));
  *(OOC_UINT8*)(((_check_pointer(i0, 39583))+16)+(_check_index(i3, 2, OOC_UINT16, 39588))) = i4;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l11_loop;
l16:
  *(OOC_INT16*)((_check_pointer(i0, 39627))+18) = i1;
  goto l19;
l17:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 39490)) = i1;
l19:
  return;
  ;
}

void TextRider__WriterDesc_WriteString(TextRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39802));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39828))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39828))+8);
  i3 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39840)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)s, -1, 0, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39898))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39910))+4);
  *(OOC_INT32*)(_check_pointer(i0, 39888)) = i1;
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 39943))+4);
  i1 = _in(0,i1);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39953));
  i1 = i1==(OOC_INT32)0;
  
l7:
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39981))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39981))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39987)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40015))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40021));
  *(OOC_INT32*)(_check_pointer(i0, 40005)) = i1;
l10:
  return;
  ;
}

void TextRider__WriterDesc_WriteBool(TextRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0;

  i0 = _bool;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40173)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "FALSE", 6);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40140)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "TRUE", 5);
l4:
  return;
  ;
}

void TextRider__WriterDesc_WriteChar(TextRider__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40286));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40312))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40312))+8);
  i3 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40323)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 40365))+4);
  i1 = _in(0,i1);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40375));
  i1 = i1==(OOC_INT32)0;
  
l7:
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40403))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40403))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40409)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40437))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40443));
  *(OOC_INT32*)(_check_pointer(i0, 40427)) = i1;
l10:
  return;
  ;
}

static void TextRider__WritePad(TextRider__Writer w, OOC_INT32 n) {
  register OOC_INT32 i0,i1;

  i0 = n;
  i0 = i0>0;
  if (!i0) goto l8;
  i0 = (OOC_INT32)w;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40582)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)' ');
  i1 = n;
  i1 = i1-1;
  n = i1;
  i1 = i1>0;
  if (i1) goto l3_loop;
l8:
  return;
  ;
}

void TextRider__WriterDesc_WriteLInt(TextRider__Writer w, OOC_INT32 lint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 val[16];

  i0 = lint;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 16);
  i0 = Strings__Length((void*)(OOC_INT32)val, 16);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 41160)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 16);
  return;
  ;
}

void TextRider__WriterDesc_WriteSInt(TextRider__Writer w, OOC_INT8 sint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = sint;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41274)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void TextRider__WriterDesc_WriteInt(TextRider__Writer w, OOC_INT16 _int, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = _int;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41385)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void TextRider__WriterDesc_WriteHex(TextRider__Writer w, OOC_INT32 lint, OOC_INT32 d) {
  register OOC_INT32 i0,i1;
  auto void TextRider__WriterDesc_WriteHex_WriteHexDigits(TextRider__Writer w, OOC_INT32 *n, OOC_INT32 digits);
    
    void TextRider__WriterDesc_WriteHex_WriteHexDigits(TextRider__Writer w, OOC_INT32 *n, OOC_INT32 digits) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 dig;

      i0 = digits;
      i0 = i0>8;
      if (!i0) goto l12;
      i0 = *n;
      i0 = i0<0;
      i1 = (OOC_INT32)w;
l3_loop:
      if (i0) goto l6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41832)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'0');
      goto l7;
l6:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41810)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'F');
l7:
      i2 = digits;
      i2 = i2-1;
      digits = i2;
      i2 = i2>8;
      if (i2) goto l3_loop;
l12:
      i0 = digits;
      i0 = i0>0;
      if (!i0) goto l24;
      i0 = (OOC_INT32)w;
      i1 = *n;
l15_loop:
      i2 = digits;
      i2 = i2-1;
      i3 = _mod((_ash(i1,(-(4*i2)))),16);
      digits = i2;
      dig = i3;
      i4 = i3<=9;
      if (i4) goto l18;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42081)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (55+i3));
      goto l19;
l18:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42034)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (48+i3));
l19:
      i2 = i2>0;
      if (i2) goto l15_loop;
l24:
      return;
      ;
    }


  i0 = d;
  i0 = i0<=0;
  if (!i0) goto l4;
  d = 8;
l4:
  i0 = (OOC_INT32)w;
  i1 = d;
  TextRider__WriterDesc_WriteHex_WriteHexDigits((TextRider__Writer)i0, (void*)(OOC_INT32)&lint, i1);
  return;
  ;
}

void TextRider__WriterDesc_WriteLReal(TextRider__Writer w, OOC_REAL64 lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;
  OOC_CHAR8 val[128];

  d0 = lreal;
  i0 = k;
  LRealStr__RealToFloat(d0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42651)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteReal(TextRider__Writer w, OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToFloat(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43022)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteLRealFix(TextRider__Writer w, OOC_REAL64 *lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;
  OOC_CHAR8 val[128];

  d0 = *lreal;
  i0 = k;
  LRealStr__RealToFixed(d0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43471)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteRealFix(TextRider__Writer w, OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToFixed(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43854)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteLRealEng(TextRider__Writer w, OOC_REAL64 *lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;
  OOC_CHAR8 val[128];

  d0 = *lreal;
  i0 = k;
  LRealStr__RealToEng(d0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44302)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteRealEng(TextRider__Writer w, OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToEng(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  TextRider__WritePad((TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44683)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteSet(TextRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT8 bit;
  OOC_CHAR8 addComma;
  OOC_INT8 lo;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44876)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'{');
  bit = 0;
  addComma = OOC_FALSE;
  i1 = s;
  i2=0;i3=OOC_FALSE;
l1_loop:
  i4 = _in(i2,i1);
  if (i4) goto l4;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l29;
l4:
  lo = i2;
  i4 = i2<31;
  if (i4) goto l7;
  i4=OOC_FALSE;
  goto l9;
l7:
  i4 = _in((i2+1),i1);
  
l9:
  if (i4) goto l11;
  i4=i2;
  goto l22;
l11:
  i4=i2;
l12_loop:
  i4 = i4+1;
  bit = i4;
  i5 = i4<31;
  if (i5) goto l15;
  i5=OOC_FALSE;
  goto l17;
l15:
  i5 = _in((i4+1),i1);
  
l17:
  if (i5) goto l12_loop;
l22:
  if (i3) goto l24;
  addComma = OOC_TRUE;
  i3=OOC_TRUE;
  goto l25;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45148)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ", ", 3);
  
l25:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45201)))), TextRider__WriterDesc_WriteInt)),TextRider__WriterDesc_WriteInt)((TextRider__Writer)i0, i2, 0);
  i2 = i2<i4;
  if (!i2) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45253)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "..", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45274)))), TextRider__WriterDesc_WriteInt)),TextRider__WriterDesc_WriteInt)((TextRider__Writer)i0, i4, 0);
l28:
  i2=i3;i3=i4;
l29:
  i3 = i3+1;
  bit = i3;
  i4 = i3<=31;
  if (!i4) goto l33;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l1_loop;
l33:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45344)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'}');
  return;
  ;
}

void TextRider__WriterDesc_WriteLn(TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 45484))+18);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 45519))+16)+(_check_index(i2, 2, OOC_UINT16, 45523)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45505)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, i3);
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

void TextRider__InitReader(TextRider__Reader r, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 45723)) = (OOC_INT32)0;
  *(OOC_UINT32*)((_check_pointer(i0, 45743))+4) = 0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45793)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 45775))+8) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 45812))+12) = i1;
  *(OOC_INT16*)((_check_pointer(i0, 45831))+18) = -1;
  *(OOC_UINT8*)((_check_pointer(i0, 45852))+20) = OOC_FALSE;
  *(OOC_INT16*)((_check_pointer(i0, 45881))+32) = 0;
  return;
  ;
}

TextRider__Reader TextRider__ConnectReader(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  TextRider__Reader r;

  i0 = (OOC_INT32)RT0__NewObject(_td_TextRider__Reader.baseTypes[0]);
  r = (TextRider__Reader)i0;
  i1 = (OOC_INT32)ch;
  TextRider__InitReader((TextRider__Reader)i0, (Channel__Channel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46042))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (TextRider__Reader)i0;
  goto l4;
l3:
  return (TextRider__Reader)(OOC_INT32)0;
l4:
  _failed_function(45923); return 0;
  ;
}

void TextRider__InitWriter(TextRider__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 46332)) = (OOC_INT32)0;
  *(OOC_UINT32*)((_check_pointer(i0, 46352))+4) = 0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46402)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 46384))+8) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 46421))+12) = i1;
  i1 = Strings__Length((void*)(OOC_INT32)CharClass__systemEol, 3);
  *(OOC_INT16*)((_check_pointer(i0, 46440))+18) = i1;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 46509))+18);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)CharClass__systemEol+(_check_index(i2, 3, OOC_UINT16, 46561)));
  *(OOC_UINT8*)(((_check_pointer(i0, 46530))+16)+(_check_index(i2, 2, OOC_UINT16, 46535))) = i3;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

TextRider__Writer TextRider__ConnectWriter(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  TextRider__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_TextRider__Writer.baseTypes[0]);
  w = (TextRider__Writer)i0;
  i1 = (OOC_INT32)ch;
  TextRider__InitWriter((TextRider__Writer)i0, (Channel__Channel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46721))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (TextRider__Writer)i0;
  goto l4;
l3:
  return (TextRider__Writer)(OOC_INT32)0;
l4:
  _failed_function(46602); return 0;
  ;
}

void TextRider__InitScanner(TextRider__Scanner s, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  *(OOC_INT32*)(_check_pointer(i0, 46990)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)TextRider__ConnectReader((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 47010))+4) = i2;
  *(OOC_UINT32*)((_check_pointer(i0, 47038))+12) = 30;
  *(OOC_INT16*)((_check_pointer(i0, 47068))+16) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 47091))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 47107))+8) = i1;
  return;
  ;
}

TextRider__Scanner TextRider__ConnectScanner(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  TextRider__Scanner s;

  i0 = (OOC_INT32)RT0__NewObject(_td_TextRider__Scanner.baseTypes[0]);
  s = (TextRider__Scanner)i0;
  i1 = (OOC_INT32)ch;
  TextRider__InitScanner((TextRider__Scanner)i0, (Channel__Channel)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47274))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (TextRider__Scanner)i0;
  goto l4;
l3:
  return (TextRider__Scanner)(OOC_INT32)0;
l4:
  _failed_function(47151); return 0;
  ;
}

void OOC_TextRider_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_TextRider__ErrorContext.baseTypes[0]);
  TextRider__errorContext = (TextRider__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "OOC:Core:TextRider", 19);
  return;
  ;
}

/* --- */
