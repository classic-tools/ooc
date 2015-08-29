#include <TextRider.d>
#include <__oo2c.h>

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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7842))+8);
  switch (i1) {
  case 1:
    _copy_8((const void*)"Number exceeded limits or string was too long",(void*)(OOC_INT32)str,128);
    goto l4;
  default:
    _copy_8((const void*)"",(void*)(OOC_INT32)str,128);
    i1 = (OOC_INT32)context;
    Msg__ContextDesc_GetTemplate((Msg__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)templ, templ_0d);
    goto l4;
  }
l4:
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)""))!=(OOC_INT32)0;
  if (!i0) goto l7;
  _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)templ,templ_0d);
l7:
  return;
  ;
}

static void TextRider__EolDetect(TextRider__Reader r, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8335));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8364))+20);
  if (i1) goto l9;
  i1 = ch;
  *(OOC_UINT8*)(((_check_pointer(i0, 8660))+16)+(_check_index(0, 2, OOC_UINT8, 8665))) = i1;
  i1 = i1==(OOC_CHAR8)'\012';
  if (i1) goto l7;
  *(OOC_UINT8*)((_check_pointer(i0, 8802))+20) = OOC_TRUE;
  goto l15;
l7:
  *(OOC_INT16*)((_check_pointer(i0, 8741))+18) = 1;
  goto l15;
l9:
  i1 = ch;
  i2 = i1==(OOC_CHAR8)'\012';
  if (i2) goto l12;
  *(OOC_INT16*)((_check_pointer(i0, 8581))+18) = 1;
  goto l13;
l12:
  *(OOC_UINT8*)(((_check_pointer(i0, 8494))+16)+(_check_index(1, 2, OOC_UINT8, 8499))) = i1;
  *(OOC_INT16*)((_check_pointer(i0, 8521))+18) = 2;
l13:
  *(OOC_UINT8*)((_check_pointer(i0, 8617))+20) = OOC_FALSE;
l15:
  return;
  ;
}

static OOC_CHAR8 TextRider__Lookahead(TextRider__Reader r, OOC_INT16 len) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9459));
  _assert((i1==(OOC_INT32)0), 127, 9450);
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9483))+32);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9510))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 9501))+24)+(_check_index((i1-1), 2, OOC_UINT16, 9508))*4);
  i1 = i1==(OOC_INT32)0;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  i2 = len;
  if (!i1) goto l38;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9548))+32);
  i1 = i1<i2;
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l11;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9567))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9579))+4);
  i1 = i1==(OOC_INT32)0;
  
l11:
  if (!i1) goto l38;
l13_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9605))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9605))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9617)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i3, (void*)(OOC_INT32)&ch);
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9648))+18);
  i1 = i1<(OOC_INT32)0;
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l26;
l16:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9678))+20);
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
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9794))+32);
  i3 = ch;
  *(OOC_UINT8*)(((_check_pointer(i0, 9788))+21)+(_check_index(i1, 2, OOC_UINT16, 9792))) = i3;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9828))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9841))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 9853))+4);
  *(OOC_INT32*)(((_check_pointer(i0, 9819))+24)+(_check_index(i1, 2, OOC_UINT16, 9826))*4) = i3;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9874))+32);
  *(OOC_INT16*)((_check_pointer(i0, 9874))+32) = (i1+1);
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9548))+32);
  i1 = i1<i2;
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9567))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9579))+4);
  i1 = i1==(OOC_INT32)0;
  
l33:
  if (i1) goto l13_loop;
l38:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 9922))+32);
  i1 = i2<=i1;
  if (i1) goto l41;
  i0=OOC_FALSE;
  goto l42;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 9935))+24)+(_check_index((i2-1), 2, OOC_UINT16, 9942))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10194));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  ch = (OOC_CHAR8)'\000';
  goto l35;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10224))+32);
  i1 = i1>(OOC_INT32)0;
  if (i1) goto l25;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10462))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10462))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10474)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)&ch);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10505))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10517))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l23;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10611))+18);
  i1 = i1<(OOC_INT32)0;
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l20;
l10:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10644))+20);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10557))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10569))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10547)) = i1;
  ch = (OOC_CHAR8)'\000';
  goto l35;
l25:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 10257))+21)+(_check_index(0, 2, OOC_UINT8, 10261)));
  ch = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 10285))+24)+(_check_index(0, 2, OOC_UINT8, 10292))*4);
  *(OOC_INT32*)(_check_pointer(i0, 10275)) = i1;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10320))+32);
  i1 = i1-1;
  i2 = 1<=i1;
  i = 1;
  if (!i2) goto l33;
  i2=1;
l28_loop:
  i3 = i2-1;
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 10358))+21)+(_check_index(i2, 2, OOC_UINT16, 10362)));
  *(OOC_UINT8*)(((_check_pointer(i0, 10344))+21)+(_check_index(i3, 2, OOC_UINT16, 10348))) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 10395))+24)+(_check_index(i2, 2, OOC_UINT16, 10402))*4);
  *(OOC_INT32*)(((_check_pointer(i0, 10378))+24)+(_check_index(i3, 2, OOC_UINT16, 10385))*4) = i4;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l28_loop;
l33:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10433))+32);
  *(OOC_INT16*)((_check_pointer(i0, 10433))+32) = (i1-1);
l35:
  i0 = ch;
  return i0;
  ;
}

OOC_INT32 TextRider__ReaderDesc_Pos(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11066))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11066))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11077)))), Channel__ReaderDesc_Pos)),Channel__ReaderDesc_Pos)((Channel__Reader)i2);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 11085))+32);
  return (i1-i0);
  ;
}

void TextRider__ReaderDesc_ClearError(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11153))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11153))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11165)))), Channel__ReaderDesc_ClearError)),Channel__ReaderDesc_ClearError)((Channel__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 11184)) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 11204))+20) = OOC_FALSE;
  return;
  ;
}

OOC_INT32 TextRider__ReaderDesc_Available(TextRider__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 avail;
  OOC_INT32 laChars;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11350))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11350))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11362)))), Channel__ReaderDesc_Available)),Channel__ReaderDesc_Available)((Channel__Reader)i2);
  avail = i1;
  laChars = 0;
  i2 = *(OOC_INT16*)((_check_pointer(i0, 11417))+32);
  i2 = 0!=i2;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 11430))+24)+(_check_index(0, 2, OOC_UINT32, 11437))*4);
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
  i3 = *(OOC_INT16*)((_check_pointer(i0, 11417))+32);
  i3 = i2!=i3;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 11430))+24)+(_check_index(i2, 2, OOC_UINT32, 11437))*4);
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
  _failed_function(11268); return 0;
  ;
}

void TextRider__ReaderDesc_SetPos(TextRider__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11676));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11702))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11702))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11714)))), Channel__ReaderDesc_SetPos)),Channel__ReaderDesc_SetPos)((Channel__Reader)i2, i3);
  *(OOC_INT16*)((_check_pointer(i0, 11739))+32) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 11817))+20) = OOC_FALSE;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11902))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11914))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11892)) = i1;
l3:
  return;
  ;
}

void TextRider__ReaderDesc_SetOpts(TextRider__Reader r, OOC_UINT32 opts) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = opts;
  *(OOC_UINT32*)((_check_pointer(i0, 12046))+4) = i1;
  return;
  ;
}

void TextRider__ReaderDesc_SetEol(TextRider__Reader r, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)
  OOC_INT16 i;

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13884));
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
  i3 = (OOC_INT32)0<=i2;
  i = (OOC_INT32)0;
  if (!i3) goto l23;
  i3=(OOC_INT32)0;
l15_loop:
  i4 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i3, marker_0d, OOC_UINT16, 14093)));
  i4 = i4>=(OOC_CHAR8)' ';
  if (!i4) goto l18;
  i4 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 14123)) = i4;
l18:
  i4 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i3, marker_0d, OOC_UINT16, 14201)));
  *(OOC_UINT8*)(((_check_pointer(i0, 14183))+16)+(_check_index(i3, 2, OOC_UINT16, 14188))) = i4;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l15_loop;
l23:
  *(OOC_INT16*)((_check_pointer(i0, 14227))+18) = i1;
  goto l26;
l24:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 13991)) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14767));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return OOC_TRUE;
  goto l31;
l3:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 14797))+18);
  i1 = i1>(OOC_INT32)0;
  if (i1) goto l14;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i1) goto l8;
  return OOC_TRUE;
  goto l31;
l8:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 15119))+18);
  i1 = i1>(OOC_INT32)0;
  if (i1) goto l11;
  i0 = *(OOC_UINT8*)(((_check_pointer(i0, 15282))+21)+(_check_index(0, 2, OOC_UINT8, 15286)));
  return (i0==(OOC_CHAR8)'\015');
  goto l31;
l11:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15156)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  return i0;
  goto l31;
l14:
  i1 = *(OOC_INT16*)((_check_pointer(i0, 14839))+18);
  i1 = i1-1;
  i2 = (OOC_INT32)0<=i1;
  i = (OOC_INT32)0;
  if (!i2) goto l29;
  i2=(OOC_INT32)0;
l17_loop:
  i3 = i2+1;
  i4 = TextRider__Lookahead((TextRider__Reader)i0, i3);
  if (i4) goto l20;
  i2 = *(OOC_INT16*)((_check_pointer(i0, 15012))+32);
  return (i2==1);
  goto l24;
l20:
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 14918))+16)+(_check_index(i2, 2, OOC_UINT16, 14923)));
  i2 = *(OOC_UINT8*)(((_check_pointer(i0, 14907))+21)+(_check_index(i2, 2, OOC_UINT16, 14911)));
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
  _failed_function(14500); return 0;
  ;
}

static void TextRider__SkipBlanks(TextRider__Reader r) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 ch;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15709));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l53;
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 15758))+4);
  i1 = _in(0,i1);
  if (i1) goto l20;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15975))+21)+(_check_index(0, 2, OOC_UINT8, 15979)));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15975))+21)+(_check_index(0, 2, OOC_UINT8, 15979)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l15:
  if (i1) goto l10_loop;
  goto l53;
l20:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15785)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15832))+21)+(_check_index(0, 2, OOC_UINT8, 15836)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l29:
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15866))+21)+(_check_index(0, 2, OOC_UINT8, 15870)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l33:
  if (!i1) goto l53;
l34_loop:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15785)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15832))+21)+(_check_index(0, 2, OOC_UINT8, 15836)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l43:
  if (i1) goto l45;
  i1=OOC_FALSE;
  goto l47;
l45:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 15866))+21)+(_check_index(0, 2, OOC_UINT8, 15870)));
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
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16154)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  if (!i1) goto l11;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 16193))+18);
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
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16457)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  i1 = !i1;
  if (!i1) goto l8;
l3_loop:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16457)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16898));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 16947))+21)+(_check_index(0, 2, OOC_UINT8, 16951)));
  i1 = i1!=(OOC_CHAR8)'"';
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 16966))+21)+(_check_index(0, 2, OOC_UINT8, 16970)));
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
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 17211))+21)+(_check_index(0, 2, OOC_UINT8, 17215)));
  i4 = i4<(OOC_CHAR8)' ';
  if (i4) goto l28;
  i4 = *(OOC_UINT8*)(((_check_pointer(i0, 17314))+21)+(_check_index(0, 2, OOC_UINT8, 17318)));
  i4 = i4==i1;
  if (i4) goto l26;
  i4 = i3==i2;
  if (i4) goto l24;
  i4 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i3, s_0d, OOC_UINT16, 17538))) = i4;
  i3 = i3+1;
  cnt = i3;
  
  goto l14_loop;
l24:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 17456)) = i1;
  goto l31;
l26:
  i0 = TextRider__Consume((TextRider__Reader)i0);
  goto l31;
l28:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 17244)) = i1;
  goto l31;
l30:
  i0 = TextRider__Consume((TextRider__Reader)i0);
l31:
  i0=i3;
  goto l34;
l32:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 16995)) = i1;
  i0=0;
l34:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT16, 17696))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void TextRider__ReaderDesc_ReadLine(TextRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 dummy;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 18219))+20);
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 18256))+21)+(_check_index(0, 2, OOC_UINT8, 18260)));
  i1 = i1==(OOC_CHAR8)'\012';
  
l9:
  if (!i1) goto l11;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  dummy = i1;
l11:
  cnt = 0;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18381)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
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
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 18438))) = i3;
  i2 = i2+1;
  cnt = i2;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18381)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
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
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18498)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i0);
  if (i2) goto l42;
  i2 = i1==(s_0d-1);
  if (!i2) goto l43;
  i2 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 18570)) = i2;
  goto l43;
l42:
  TextRider__SkipEol((TextRider__Reader)i0);
l43:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT16, 18620))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void TextRider__ReaderDesc_ReadIdentifier(TextRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  cnt = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18915));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 18983))+21)+(_check_index(0, 2, OOC_UINT8, 18987)));
  i1 = CharClass__IsLetter(i1);
  i1 = !i1;
  if (i1) goto l28;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT8, 19060))) = i1;
  i1 = s_0d-1;
  cnt = 1;
  i2=1;
l10_loop:
  i3 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i3) goto l13;
  i3=OOC_FALSE;
  goto l18;
l13:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 19181))+21)+(_check_index(0, 2, OOC_UINT8, 19185)));
  i3 = CharClass__IsLetter(i3);
  if (i3) goto l16;
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 19230))+21)+(_check_index(0, 2, OOC_UINT8, 19234)));
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
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 19397))) = i3;
  i2 = i2+1;
  cnt = i2;
  
  goto l10_loop;
l24:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 19315)) = i1;
l27:
  i0=i2;
  goto l30;
l28:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 19006)) = i1;
  i0=0;
l30:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT16, 19552))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void TextRider__ReaderDesc_ReadBool(TextRider__Reader r, OOC_CHAR8 *_bool) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 ident[8];

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19955)))), TextRider__ReaderDesc_ReadIdentifier)),TextRider__ReaderDesc_ReadIdentifier)((TextRider__Reader)i0, (void*)(OOC_INT32)ident, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19990));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (
  _cmp8((const void*)(OOC_INT32)ident,(const void*)"TRUE"))==(OOC_INT32)0;
  if (i1) goto l9;
  i1 = (
  _cmp8((const void*)(OOC_INT32)ident,(const void*)"FALSE"))==(OOC_INT32)0;
  if (i1) goto l7;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 20138)) = i1;
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
  spos = (OOC_INT32)0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 21289)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=(OOC_INT32)0;
  goto l9;
l3:
  i0=(OOC_INT32)0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 21289)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i0 = i0-1;
  epos = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((OOC_INT32)0, str_0d, OOC_UINT16, 21396)));
  i1 = i1==(OOC_CHAR8)'0';
  if (i1) goto l12;
  i1=(OOC_INT32)0;
  goto l18;
l12:
  i1=(OOC_INT32)0;
l13_loop:
  i1 = i1+1;
  spos = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 21396)));
  i2 = i2==(OOC_CHAR8)'0';
  if (i2) goto l13_loop;
l18:
  i2 = (i0-i1)>7;
  if (i2) goto l40;
  i0 = i1<=i0;
  if (!i0) goto l41;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 21684)));
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
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 22074)));
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
  return (i0>=(OOC_INT32)0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22705));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 22754))+21)+(_check_index(0, 2, OOC_UINT8, 22758)));
  i1 = i1==(OOC_CHAR8)'+';
  if (i1) goto l10;
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 22774))+21)+(_check_index(0, 2, OOC_UINT8, 22778)));
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
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 14, OOC_UINT8, 22805))) = i1;
  pos = 1;
  i1 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  i1 = !i1;
  if (!i1) goto l17;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  return;
l17:
  i1=1;
l18:
  i2 = *(OOC_UINT8*)(((_check_pointer(i0, 23014))+21)+(_check_index(0, 2, OOC_UINT8, 23018)));
  i2 = CharClass__IsNumeric(i2);
  if (i2) goto l21;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 24057)) = i1;
  goto l56;
l21:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 14, OOC_UINT16, 23039))) = (OOC_CHAR8)'0';
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
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 23169))+21)+(_check_index(0, 2, OOC_UINT8, 23173)));
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
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 14, OOC_UINT16, 23457))) = i3;
  i1 = i2+1;
  pos = i1;
  
l39:
  ignoreZeros = OOC_FALSE;
  i2=i1;i1=OOC_FALSE;
  goto l22_loop;
l43:
  i1 = i2==14;
  if (i1) goto l46;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 14, OOC_UINT16, 23733))) = (OOC_CHAR8)'\000';
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
  *(OOC_INT32*)(_check_pointer(i0, 23991)) = i1;
  goto l56;
l53:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 23898)) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25026));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 25094))+21)+(_check_index(0, 2, OOC_UINT8, 25098)));
  i1 = CharClass__IsNumeric(i1);
  if (i1) goto l10;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 25956)) = i1;
  goto l41;
l10:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 11, OOC_UINT16, 25119))) = (OOC_CHAR8)'0';
  pos = 1;
  ignoreZeros = OOC_TRUE;
  i1=OOC_TRUE;i2=1;
l11_loop:
  i3 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l15;
l14:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 25239))+21)+(_check_index(0, 2, OOC_UINT8, 25243)));
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
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 11, OOC_UINT16, 25527))) = i3;
  i1 = i2+1;
  pos = i1;
  
l28:
  ignoreZeros = OOC_FALSE;
  i2=i1;i1=OOC_FALSE;
  goto l11_loop;
l32:
  i1 = i2==11;
  if (i1) goto l38;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, 11, OOC_UINT16, 25809))) = (OOC_CHAR8)'\000';
  i1 = TextRider__HexToInt((void*)(OOC_INT32)str, 11, (void*)(OOC_INT32)lint);
  i1 = !i1;
  if (!i1) goto l41;
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 25874)) = i1;
  goto l41;
l38:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 25747)) = i1;
l41:
  return;
  ;
}

void TextRider__ReaderDesc_ReadInt(TextRider__Reader r, OOC_INT16 *_int) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 lint;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26205)))), TextRider__ReaderDesc_ReadLInt)),TextRider__ReaderDesc_ReadLInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&lint);
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
  *(OOC_INT32*)(_check_pointer(i0, 26284)) = i1;
l8:
  return;
  ;
}

void TextRider__ReaderDesc_ReadSInt(TextRider__Reader r, OOC_INT8 *sint) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 lint;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26506)))), TextRider__ReaderDesc_ReadLInt)),TextRider__ReaderDesc_ReadLInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&lint);
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
  *(OOC_INT32*)(_check_pointer(i0, 26587)) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27447));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 27511))+21)+(_check_index(0, 2, OOC_UINT8, 27515)));
  LRealConv__ScanReal(i1, (void*)(OOC_INT32)&_class, (void*)(OOC_INT32)&state);
  i1 = _class;
  i1 = i1==1;
  if (i1) goto l10;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 28506)) = i1;
  goto l36;
l10:
  i1 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT8, 27593))) = i1;
  pos = 1;
  i1=1;
l11_loop:
  i2 = TextRider__Lookahead((TextRider__Reader)i0, 1);
  i2 = !i2;
  if (i2) goto l23;
  i2 = (OOC_INT32)state;
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 27735))+21)+(_check_index(0, 2, OOC_UINT8, 27739)));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 27730));
  ((void (*)(OOC_CHAR8 ch, OOC_INT8 *cl, ConvTypes__ScanState *st))i2)(i3, (void*)(OOC_INT32)&_class, (void*)(OOC_INT32)&state);
  i2 = _class;
  i2 = i2==1;
  if (!i2) goto l23;
  i2 = i1<1024;
  if (i2) goto l18;
  goto l19;
l18:
  i2 = TextRider__Consume((TextRider__Reader)i0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 27861))) = i2;
l19:
  i1 = i1+1;
  pos = i1;
  
  goto l11_loop;
l23:
  i2 = i1<1024;
  if (i2) goto l26;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 28431)) = i1;
  goto l36;
l26:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 28097))) = (OOC_CHAR8)'\000';
  LRealStr__StrToReal((void*)(OOC_INT32)str, 1024, (void*)(OOC_INT32)lreal, (void*)(OOC_INT32)&res);
  i1 = res;
  i2 = i1==1;
  if (i2) goto l32;
  i1 = i1!=0;
  if (!i1) goto l36;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 28359)) = i1;
  goto l36;
l32:
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 28260)) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29411)))), TextRider__ReaderDesc_ReadLReal)),TextRider__ReaderDesc_ReadLReal)((TextRider__Reader)i0, (void*)(OOC_INT32)&n);
  d0 = n;
  i0 = TextRider__ReaderDesc_ReadReal_ValidReal(d0);
  if (i0) goto l3;
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)TextRider__GetError(1);
  *(OOC_INT32*)(_check_pointer(i0, 29491)) = i1;
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29771)))), TextRider__ReaderDesc_ReadSInt)),TextRider__ReaderDesc_ReadSInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&low);
      i0 = low;
      high = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29826));
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
      i0 = *(OOC_UINT8*)(((_check_pointer(i0, 29997))+21)+(_check_index(0, 2, OOC_UINT8, 30001)));
      i0 = i0==(OOC_CHAR8)'.';
      
l13:
      if (i0) goto l15;
      i0=OOC_FALSE;
      goto l17;
l15:
      i0 = (OOC_INT32)r;
      i0 = *(OOC_UINT8*)(((_check_pointer(i0, 30016))+21)+(_check_index(1, 2, OOC_UINT8, 30020)));
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30131)))), TextRider__ReaderDesc_ReadSInt)),TextRider__ReaderDesc_ReadSInt)((TextRider__Reader)i0, (void*)(OOC_INT32)&high);
      i0 = (OOC_INT32)r;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30165));
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
      *(OOC_INT32*)(_check_pointer(i0, 30264)) = i1;
      return 0;
      goto l37;
l35:
      i0 = (OOC_INT32)TextRider__GetError(1);
      *(OOC_INT32*)(_check_pointer(i1, 29905)) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30500));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 30549))+21)+(_check_index(0, 2, OOC_UINT8, 30553)));
  i1 = i1==(OOC_CHAR8)'{';
  if (i1) goto l10;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 31216)) = i1;
  goto l55;
l10:
  *s = 0;
  i1 = TextRider__Consume((TextRider__Reader)i0);
  ch = i1;
  TextRider__SkipBlanks((TextRider__Reader)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30650));
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
  i0 = *(OOC_UINT8*)(((_check_pointer(i0, 30703))+21)+(_check_index(0, 2, OOC_UINT8, 30707)));
  i0 = i0!=(OOC_CHAR8)'}';
  if (!i0) goto l44;
  i0 = TextRider__ReaderDesc_ReadSet_ReadRange();
  i0 = 0|i0;
  *s = i0;
  i1 = (OOC_INT32)r;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30777));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 30814))+21)+(_check_index(0, 2, OOC_UINT8, 30818)));
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30777));
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
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 30814))+21)+(_check_index(0, 2, OOC_UINT8, 30818)));
  i1 = i1==(OOC_CHAR8)',';
  
l39:
  if (i1) goto l30_loop;
l44:
  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30976));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l47;
  i1=OOC_FALSE;
  goto l49;
l47:
  i1 = *(OOC_UINT8*)(((_check_pointer(i0, 30994))+21)+(_check_index(0, 2, OOC_UINT8, 30998)));
  i1 = i1==(OOC_CHAR8)'}';
  
l49:
  if (i1) goto l51;
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 31072)) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31801));
  _assert((i1==(OOC_INT32)0), 127, 31792);
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 31844))+12);
  i1 = _in(0,i1);
  if (i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32054))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32066))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 32069))+21)+(_check_index(0, 2, OOC_UINT8, 32073)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l7:
  if (!i1) goto l55;
l9_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32100))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32100))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32103)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  if (i1) goto l12;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32206))+4);
  i1 = TextRider__Consume((TextRider__Reader)i1);
  ch = i1;
  goto l13;
l12:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 32132))+24);
  *(OOC_INT32*)((_check_pointer(i0, 32132))+24) = (i1+1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32162))+4);
  TextRider__SkipEol((TextRider__Reader)i1);
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32054))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  if (i1) goto l16;
  i1=OOC_FALSE;
  goto l18;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32066))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 32069))+21)+(_check_index(0, 2, OOC_UINT8, 32073)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l18:
  if (i1) goto l9_loop;
  goto l55;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31870))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31870))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31873)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  i1 = !i1;
  if (i1) goto l26;
  i1=OOC_FALSE;
  goto l28;
l26:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31896))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l28:
  if (i1) goto l30;
  i1=OOC_FALSE;
  goto l32;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31921))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31924))+21)+(_check_index(0, 2, OOC_UINT8, 31928)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l32:
  if (i1) goto l34;
  i1=OOC_FALSE;
  goto l36;
l34:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31956))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31959))+21)+(_check_index(0, 2, OOC_UINT8, 31963)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l36:
  if (!i1) goto l55;
l37_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32006))+4);
  i1 = TextRider__Consume((TextRider__Reader)i1);
  ch = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31870))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31870))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31873)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  i1 = !i1;
  if (i1) goto l40;
  i1=OOC_FALSE;
  goto l42;
l40:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31896))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l42:
  if (i1) goto l44;
  i1=OOC_FALSE;
  goto l46;
l44:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31921))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31924))+21)+(_check_index(0, 2, OOC_UINT8, 31928)));
  i1 = i1<=(OOC_CHAR8)' ';
  
l46:
  if (i1) goto l48;
  i1=OOC_FALSE;
  goto l50;
l48:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31956))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 31959))+21)+(_check_index(0, 2, OOC_UINT8, 31963)));
  i1 = i1!=(OOC_CHAR8)'\011';
  
l50:
  if (i1) goto l37_loop;
l55:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32257))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32260));
  *(OOC_INT32*)(_check_pointer(i0, 32247)) = i1;
  return;
  ;
}

OOC_INT32 TextRider__ScannerDesc_Pos(TextRider__Scanner s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32399))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32399))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32401)))), TextRider__ReaderDesc_Pos)),TextRider__ReaderDesc_Pos)((TextRider__Reader)i0);
  return i0;
  ;
}

void TextRider__ScannerDesc_ClearError(TextRider__Scanner s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32471))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32471))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32474)))), TextRider__ReaderDesc_ClearError)),TextRider__ReaderDesc_ClearError)((TextRider__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 32493)) = (OOC_INT32)0;
  *(OOC_INT16*)((_check_pointer(i0, 32513))+16) = -1;
  return;
  ;
}

OOC_INT32 TextRider__ScannerDesc_Available(TextRider__Scanner s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32620))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32620))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32622)))), TextRider__ReaderDesc_Available)),TextRider__ReaderDesc_Available)((TextRider__Reader)i0);
  return i0;
  ;
}

void TextRider__ScannerDesc_SetPos(TextRider__Scanner s, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32717));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32743))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32743))+4);
  i3 = pos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32746)))), TextRider__ReaderDesc_SetPos)),TextRider__ReaderDesc_SetPos)((TextRider__Reader)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32778))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 32781));
  *(OOC_INT32*)(_check_pointer(i0, 32768)) = i1;
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33328))+4);
          i1 = TextRider__Consume((TextRider__Reader)i1);
          *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 33309))) = i1;
l3:
          i0 = pos;
          pos = (i0+1);
          i0 = (OOC_INT32)s;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33379))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33382));
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l6;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33464))+4);
          *(OOC_UINT8*)(((_check_pointer(i0, 33467))+21)+(_check_index(0, 2, OOC_UINT8, 33471))) = (OOC_CHAR8)'\000';
          goto l7;
l6:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33432))+4);
          i0 = TextRider__Lookahead((TextRider__Reader)i0, 1);
l7:
          return;
          ;
        }

        
        OOC_CHAR8 TextRider__ScannerDesc_Scan_ReadNum_LA() {
          register OOC_INT32 i0;

          i0 = (OOC_INT32)s;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33568))+4);
          i0 = *(OOC_UINT8*)(((_check_pointer(i0, 33571))+21)+(_check_index(0, 2, OOC_UINT8, 33575)));
          return i0;
          ;
        }


      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33619))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33622));
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33650))+4);
      i0 = TextRider__Lookahead((TextRider__Reader)i0, 1);
      
l5:
      if (!i0) goto l81;
      pos = (OOC_INT32)0;
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
      *(OOC_INT32*)(_check_pointer(i0, 33850)) = i1;
      return;
l24:
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'.';
      if (i0) goto l37;
      i0 = TextRider__ScannerDesc_Scan_ReadNum_LA();
      i0 = i0==(OOC_CHAR8)'H';
      if (i0) goto l32;
      i0 = (OOC_INT32)s;
      *(OOC_INT16*)((_check_pointer(i0, 35345))+16) = 2;
      i1 = pos;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 35370))) = (OOC_CHAR8)'\000';
      IntStr__StrToInt((void*)(OOC_INT32)str, 1024, (void*)((_check_pointer(i0, 35413))+28), (void*)(OOC_INT32)&res);
      i0 = res;
      i0 = i0!=0;
      if (!i0) goto l81;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 35480)) = i1;
      goto l81;
l32:
      i0 = (OOC_INT32)s;
      *(OOC_INT16*)((_check_pointer(i0, 35131))+16) = 2;
      i1 = pos;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, 1024, OOC_UINT16, 35146))) = (OOC_CHAR8)'\000';
      i0 = TextRider__HexToInt((void*)(OOC_INT32)str, 1024, (void*)((_check_pointer(i0, 35188))+28));
      i0 = !i0;
      if (!i0) goto l35;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 35213)) = i1;
l35:
      TextRider__ScannerDesc_Scan_ReadNum_Get();
      goto l81;
l37:
      i0 = (OOC_INT32)s;
      *(OOC_INT16*)((_check_pointer(i0, 34077))+16) = 3;
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
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 34335))) = (OOC_CHAR8)'E';
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
      *(OOC_INT32*)(_check_pointer(i0, 34514)) = i1;
      return;
l72:
      i0 = pos;
      i1 = i0<1024;
      if (i1) goto l75;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 35003)) = i1;
      goto l81;
l75:
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 34757))) = (OOC_CHAR8)'\000';
      i0 = (OOC_INT32)s;
      LRealStr__StrToReal((void*)(OOC_INT32)str, 1024, (void*)((_check_pointer(i0, 34805))+32), (void*)(OOC_INT32)&res);
      i0 = res;
      i0 = i0!=0;
      if (!i0) goto l81;
      i0 = (OOC_INT32)s;
      i1 = (OOC_INT32)TextRider__GetError(8);
      *(OOC_INT32*)(_check_pointer(i0, 34925)) = i1;
l81:
      return;
      ;
    }

    
    void TextRider__ScannerDesc_Scan_SetType(OOC_INT8 type) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)s;
      i1 = type;
      *(OOC_INT16*)((_check_pointer(i0, 35640))+16) = i1;
      return;
      ;
    }


  i0 = (OOC_INT32)s;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 35692))+16);
  i1 = i1<9;
  if (!i1) goto l77;
  TextRider__SkipSpaces((TextRider__Scanner)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 35856));
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35884))+4);
  i1 = TextRider__Lookahead((TextRider__Reader)i1, 1);
  
l7:
  if (i1) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37399))+4);
  i0 = TextRider__Consume((TextRider__Reader)i0);
  ch = i0;
  goto l54;
l9:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35913)))), TextRider__ScannerDesc_Pos)),TextRider__ScannerDesc_Pos)((TextRider__Scanner)i0);
  *(OOC_INT32*)((_check_pointer(i0, 35906))+20) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35934))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35934))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35937)))), TextRider__ReaderDesc_Eol)),TextRider__ReaderDesc_Eol)((TextRider__Reader)i2);
  if (i1) goto l52;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36057))+4);
  i1 = *(OOC_UINT8*)(((_check_pointer(i1, 36060))+21)+(_check_index(0, 2, OOC_UINT8, 36064)));
  switch (i1) {
  case (OOC_CHAR8)'"':
  case (OOC_CHAR8)'\047':
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36130))+12);
    i1 = _in(3,i1);
    if (i1) goto l16;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36250))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36250))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36253)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36266))+40));
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l16:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36157))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36157))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36160)))), TextRider__ReaderDesc_ReadString)),TextRider__ReaderDesc_ReadString)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36175))+41), 256);
    TextRider__ScannerDesc_Scan_SetType(1);
    goto l54;
  case (OOC_CHAR8)'a' ... (OOC_CHAR8)'z':
  case (OOC_CHAR8)'A' ... (OOC_CHAR8)'Z':
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36365))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36365))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36368)))), TextRider__ReaderDesc_ReadIdentifier)),TextRider__ReaderDesc_ReadIdentifier)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36387))+41), 256);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36415))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 36418));
    i1 = i1==(OOC_INT32)0;
    if (i1) goto l21;
    i1=OOC_FALSE;
    goto l23;
l21:
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36454))+12);
    i1 = _in(1,i1);
    
l23:
    if (i1) goto l25;
    i1=OOC_FALSE;
    goto l31;
l25:
    i1 = (
    _cmp8((const void*)((_check_pointer(i0, 36480))+41),(const void*)"TRUE"))==(OOC_INT32)0;
    if (i1) goto l28;
    i1 = (
    _cmp8((const void*)((_check_pointer(i0, 36504))+41),(const void*)"FALSE"))==(OOC_INT32)0;
    
    goto l31;
l28:
    i1=OOC_TRUE;
l31:
    if (i1) goto l33;
    TextRider__ScannerDesc_Scan_SetType(8);
    goto l54;
l33:
    *(OOC_UINT8*)((_check_pointer(i0, 36543))+304) = ((
    _cmp8((const void*)((_check_pointer(i0, 36555))+41),(const void*)"TRUE"))==(OOC_INT32)0);
    TextRider__ScannerDesc_Scan_SetType(4);
    goto l54;
  case (OOC_CHAR8)'+':
  case (OOC_CHAR8)'-':
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36726))+12);
    i1 = _in(4,i1);
    if (i1) goto l38;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36791))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36791))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36794)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 36807))+40));
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l38:
    TextRider__ScannerDesc_Scan_ReadNum();
    goto l54;
  case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
    TextRider__ScannerDesc_Scan_ReadNum();
    goto l54;
  case (OOC_CHAR8)'{':
    i1 = *(OOC_UINT32*)((_check_pointer(i0, 36975))+12);
    i1 = _in(2,i1);
    if (i1) goto l44;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37086))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37086))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37089)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 37102))+40));
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l44:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37002))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37002))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37005)))), TextRider__ReaderDesc_ReadSet)),TextRider__ReaderDesc_ReadSet)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 37017))+300));
    TextRider__ScannerDesc_Scan_SetType(5);
    goto l54;
  default:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37183))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37183))+4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37186)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i2, (void*)((_check_pointer(i0, 37199))+40));
    i0 = *(OOC_UINT8*)((_check_pointer(i0, 37224))+40);
    i0 = i0==(OOC_CHAR8)'\011';
    if (i0) goto l49;
    TextRider__ScannerDesc_Scan_SetType(0);
    goto l54;
l49:
    TextRider__ScannerDesc_Scan_SetType(6);
    goto l54;
  }
l52:
  *(OOC_INT16*)((_check_pointer(i0, 35961))+16) = 7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35997))+4);
  TextRider__SkipEol((TextRider__Reader)i1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 36019))+24);
  *(OOC_INT32*)((_check_pointer(i0, 36019))+24) = (i1+1);
l54:
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37450))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37453));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l57;
  i1=OOC_FALSE;
  goto l59;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37471));
  i1 = i1==(OOC_INT32)0;
  
l59:
  if (!i1) goto l61;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37511))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 37514));
  *(OOC_INT32*)(_check_pointer(i0, 37501)) = i1;
l61:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37542));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l64;
  i1=OOC_FALSE;
  goto l66;
l64:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37560));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37565))+12);
  i2 = (OOC_INT32)TextRider__errorContext;
  i1 = i1==i2;
  
l66:
  if (!i1) goto l77;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37610));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 37615))+8);
  i1 = i1==8;
  if (i1) goto l70;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 37656));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 37661))+8);
  i1 = i1==1;
  
  goto l72;
l70:
  i1=OOC_TRUE;
l72:
  if (i1) goto l74;
  *(OOC_INT16*)((_check_pointer(i0, 37746))+16) = 9;
  goto l77;
l74:
  *(OOC_INT16*)((_check_pointer(i0, 37704))+16) = 10;
l77:
  return;
  ;
}

void TextRider__ScannerDesc_SetOpts(TextRider__Scanner s, OOC_UINT32 opts) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)s;
  i1 = opts;
  *(OOC_UINT32*)((_check_pointer(i0, 37926))+12) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37943))+4);
  *(OOC_UINT32*)((_check_pointer(i0, 37945))+4) = (i1&1);
  return;
  ;
}

void TextRider__ScannerDesc_SetEol(TextRider__Scanner s, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38145))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38145))+4);
  i2 = markerLen;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38148)))), TextRider__ReaderDesc_SetEol)),TextRider__ReaderDesc_SetEol)((TextRider__Reader)i0, (void*)(OOC_INT32)marker, marker_0d, i2);
  return;
  ;
}

OOC_INT32 TextRider__WriterDesc_Pos(TextRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38449))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38449))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38460)))), Channel__WriterDesc_Pos)),Channel__WriterDesc_Pos)((Channel__Writer)i0);
  return i0;
  ;
}

void TextRider__WriterDesc_SetPos(TextRider__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 38545));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38571))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38571))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38582)))), Channel__WriterDesc_SetPos)),Channel__WriterDesc_SetPos)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38616))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 38628))+4);
  *(OOC_INT32*)(_check_pointer(i0, 38606)) = i1;
l4:
  return;
  ;
}

void TextRider__WriterDesc_ClearError(TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38705))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38705))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38716)))), Channel__WriterDesc_ClearError)),Channel__WriterDesc_ClearError)((Channel__Writer)i2);
  *(OOC_INT32*)(_check_pointer(i0, 38734)) = (OOC_INT32)0;
  return;
  ;
}

void TextRider__WriterDesc_SetOpts(TextRider__Writer w, OOC_UINT32 opts) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = opts;
  *(OOC_UINT32*)((_check_pointer(i0, 38869))+4) = i1;
  return;
  ;
}

void TextRider__WriterDesc_SetEol(TextRider__Writer w, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)
  OOC_INT16 i;

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39410));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l19;
  i1 = markerLen;
  i2 = i1<(OOC_INT32)0;
  if (i2) goto l5;
  i2 = i1>2;
  
  goto l7;
l5:
  i2=OOC_TRUE;
l7:
  if (i2) goto l17;
  i2 = i1-1;
  i3 = (OOC_INT32)0<=i2;
  i = (OOC_INT32)0;
  if (!i3) goto l16;
  i3=(OOC_INT32)0;
l11_loop:
  i4 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i3, marker_0d, OOC_UINT16, 39609)));
  *(OOC_UINT8*)(((_check_pointer(i0, 39591))+16)+(_check_index(i3, 2, OOC_UINT16, 39596))) = i4;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l11_loop;
l16:
  *(OOC_INT16*)((_check_pointer(i0, 39635))+18) = i1;
  goto l19;
l17:
  i1 = (OOC_INT32)TextRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 39498)) = i1;
l19:
  return;
  ;
}

void TextRider__WriterDesc_WriteString(TextRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39810));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39836))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39836))+8);
  i3 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39848)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)s, -1, 0, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39906))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39918))+4);
  *(OOC_INT32*)(_check_pointer(i0, 39896)) = i1;
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 39951))+4);
  i1 = _in(0,i1);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 39961));
  i1 = i1==(OOC_INT32)0;
  
l7:
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39989))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39989))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39995)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40023))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40029));
  *(OOC_INT32*)(_check_pointer(i0, 40013)) = i1;
l10:
  return;
  ;
}

void TextRider__WriterDesc_WriteStr(TextRider__Writer w, Object__String s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT32)s;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l21;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40292));
  i2 = i2==(OOC_INT32)0;
  if (!i2) goto l22;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40323)))), &_td_Object__String8Desc);
  if (i2) goto l11;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40609)))), &_td_Object__String32Desc);
  if (i2) goto l9;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40606)))), 40606);
  goto l22;
l9:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40639)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, "[TextRider.WriteStr: String32 not implemented]", 47);
  goto l22;
l11:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40361)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  chars = (Object__CharsLatin1)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40386))+8);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 40424));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40386))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 40398)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i4, (void*)(_check_pointer(i2, 40417)), -1, 0, i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40453))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40465))+4);
  *(OOC_INT32*)(_check_pointer(i1, 40443)) = i0;
  i0 = *(OOC_UINT32*)((_check_pointer(i1, 40500))+4);
  i0 = _in(0,i0);
  if (i0) goto l14;
  i0=OOC_FALSE;
  goto l16;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40510));
  i0 = i0==(OOC_INT32)0;
  
l16:
  if (!i0) goto l22;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40540))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40540))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40546)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 40576))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40582));
  *(OOC_INT32*)(_check_pointer(i1, 40566)) = i0;
  goto l22;
l21:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40257)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "<NIL>", 6);
l22:
  return;
  ;
}

void TextRider__WriterDesc_WriteBool(TextRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0;

  i0 = _bool;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40847)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "FALSE", 6);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40814)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "TRUE", 5);
l4:
  return;
  ;
}

void TextRider__WriterDesc_WriteChar(TextRider__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 40960));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40986))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40986))+8);
  i3 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40997)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = *(OOC_UINT32*)((_check_pointer(i0, 41039))+4);
  i1 = _in(0,i1);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 41049));
  i1 = i1==(OOC_INT32)0;
  
l7:
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41077))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41077))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41083)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41111))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 41117));
  *(OOC_INT32*)(_check_pointer(i0, 41101)) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41256)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)' ');
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 41834)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 16);
  return;
  ;
}

void TextRider__WriterDesc_WriteSInt(TextRider__Writer w, OOC_INT8 sint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = sint;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41948)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void TextRider__WriterDesc_WriteInt(TextRider__Writer w, OOC_INT16 _int, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = _int;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42059)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, i2);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42506)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'0');
      goto l7;
l6:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42484)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'F');
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42755)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (55+i3));
      goto l19;
l18:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42708)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (48+i3));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43325)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43696)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44145)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44528)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44976)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 45357)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void TextRider__WriterDesc_WriteSet(TextRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT8 bit;
  OOC_CHAR8 addComma;
  OOC_INT8 lo;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45550)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'{');
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45822)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ", ", 3);
  
l25:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45875)))), TextRider__WriterDesc_WriteInt)),TextRider__WriterDesc_WriteInt)((TextRider__Writer)i0, i2, 0);
  i2 = i2<i4;
  if (!i2) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45927)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "..", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45948)))), TextRider__WriterDesc_WriteInt)),TextRider__WriterDesc_WriteInt)((TextRider__Writer)i0, i4, 0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46018)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, (OOC_CHAR8)'}');
  return;
  ;
}

void TextRider__WriterDesc_WriteLn(TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 46158))+18);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 46193))+16)+(_check_index(i2, 2, OOC_UINT16, 46197)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46179)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, i3);
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
  *(OOC_INT32*)(_check_pointer(i0, 46397)) = (OOC_INT32)0;
  *(OOC_UINT32*)((_check_pointer(i0, 46417))+4) = 0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46467)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 46449))+8) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 46486))+12) = i1;
  *(OOC_INT16*)((_check_pointer(i0, 46505))+18) = -1;
  *(OOC_UINT8*)((_check_pointer(i0, 46526))+20) = OOC_FALSE;
  *(OOC_INT16*)((_check_pointer(i0, 46555))+32) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46716))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (TextRider__Reader)i0;
  goto l4;
l3:
  return (TextRider__Reader)(OOC_INT32)0;
l4:
  _failed_function(46597); return 0;
  ;
}

void TextRider__InitWriter(TextRider__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 47006)) = (OOC_INT32)0;
  *(OOC_UINT32*)((_check_pointer(i0, 47026))+4) = 0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47076)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 47058))+8) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 47095))+12) = i1;
  i1 = Strings__Length((void*)(OOC_INT32)CharClass__systemEol, 3);
  *(OOC_INT16*)((_check_pointer(i0, 47114))+18) = i1;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 47183))+18);
  i1 = i1-1;
  i2 = (OOC_INT32)0<=i1;
  i = (OOC_INT32)0;
  if (!i2) goto l8;
  i2=(OOC_INT32)0;
l3_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)CharClass__systemEol+(_check_index(i2, 3, OOC_UINT16, 47235)));
  *(OOC_UINT8*)(((_check_pointer(i0, 47204))+16)+(_check_index(i2, 2, OOC_UINT16, 47209))) = i3;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47395))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (TextRider__Writer)i0;
  goto l4;
l3:
  return (TextRider__Writer)(OOC_INT32)0;
l4:
  _failed_function(47276); return 0;
  ;
}

void TextRider__InitScanner(TextRider__Scanner s, Channel__Channel ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  *(OOC_INT32*)(_check_pointer(i0, 47664)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)TextRider__ConnectReader((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 47684))+4) = i2;
  *(OOC_UINT32*)((_check_pointer(i0, 47712))+12) = 30;
  *(OOC_INT16*)((_check_pointer(i0, 47742))+16) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 47765))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 47781))+8) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47948))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (TextRider__Scanner)i0;
  goto l4;
l3:
  return (TextRider__Scanner)(OOC_INT32)0;
l4:
  _failed_function(47825); return 0;
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
