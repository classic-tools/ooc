#include "BinaryRider.d"
#include "__oo2c.h"

static Msg__Msg BinaryRider__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)BinaryRider__errorContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

OOC_INT32 BinaryRider__ReaderDesc_Pos(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3239))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3239))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3250)))), Channel__ReaderDesc_Pos)),Channel__ReaderDesc_Pos)((Channel__Reader)i0);
  return i0;
  ;
}

void BinaryRider__ReaderDesc_SetPos(BinaryRider__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3336));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3362))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3362))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3373)))), Channel__ReaderDesc_SetPos)),Channel__ReaderDesc_SetPos)((Channel__Reader)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3406))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3417))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3397)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ClearError(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3495))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3495))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3506)))), Channel__ReaderDesc_ClearError)),Channel__ReaderDesc_ClearError)((Channel__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 3524)) = (OOC_INT32)0;
  return;
  ;
}

OOC_INT32 BinaryRider__ReaderDesc_Available(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3624))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3624))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3635)))), Channel__ReaderDesc_Available)),Channel__ReaderDesc_Available)((Channel__Reader)i0);
  return i0;
  ;
}

void BinaryRider__ReaderDesc_ReadBytes(BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3870));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3895))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3895))+8);
  i3 = start;
  i4 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3906)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i2, (void*)(OOC_INT32)x, -1, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3947))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3958))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3938)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadBytesOrdered(BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4159))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4189))+4);
  i2 = BinaryRider__systemByteOrder;
  i1 = i1==i2;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  if (i1) goto l15;
  i1 = x_0d-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l16;
l9_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4339))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4339))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4350)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i3, (void*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 4361))));
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4229))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4229))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4240)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i0, (void*)(OOC_INT32)x, -1, 0, x_0d);
l16:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadBool(BinaryRider__Reader r, OOC_CHAR8 *_bool) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT8 byte;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4496));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4521))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4521))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4533)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)&byte);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4564))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4576))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = byte;
  i1 = i1!=0;
  
l7:
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l11;
l9:
  i1 = byte;
  i1 = i1!=1;
  
l11:
  if (i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4694))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4706))+4);
  *(OOC_INT32*)(_check_pointer(i0, 4684)) = i1;
  goto l14;
l13:
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 4630)) = i1;
l14:
  i0 = byte;
  *_bool = (i0!=0);
l15:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadChar(BinaryRider__Reader r, OOC_CHAR8 *ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4840));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4865))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4865))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4877)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)ch);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4909))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4920))+4);
  *(OOC_INT32*)(_check_pointer(i0, 4900)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLChar(BinaryRider__Reader r, OOC_CHAR16 *ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5019));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5044)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)ch, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5085))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5096))+4);
  *(OOC_INT32*)(_check_pointer(i0, 5076)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadString(BinaryRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5426));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l24;
  i1 = s_0d-1;
  len = i1;
  i2=-1;
l3_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5513)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5524))));
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5545)));
  i3 = i3==(OOC_CHAR8)'\000';
  if (i3) goto l6;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5560))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5571))+4);
  i3 = i3!=(OOC_INT32)0;
  
  goto l8;
l6:
  i3=OOC_TRUE;
l8:
  if (i3) goto l10;
  i3 = i2==i1;
  
  goto l12;
l10:
  i3=OOC_TRUE;
l12:
  if (!i3) goto l3_loop;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5607))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5619))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5637)));
  i1 = i1!=(OOC_CHAR8)'\000';
  
l20:
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5756))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5767))+4);
  *(OOC_INT32*)(_check_pointer(i0, 5747)) = i1;
  goto l24;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5663))+8);
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)((_check_pointer(i0, 5674))+4) = i1;
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5717))) = (OOC_CHAR8)'\000';
l24:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLString(BinaryRider__Reader r, OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6115));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l24;
  i1 = s_0d-1;
  len = i1;
  i2=-1;
l3_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6202)))), BinaryRider__ReaderDesc_ReadLChar)),BinaryRider__ReaderDesc_ReadLChar)((BinaryRider__Reader)i0, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6214))*2));
  i3 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6235))*2);
  i3 = i3==(OOC_CHAR16)0;
  if (i3) goto l6;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6250))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6261))+4);
  i3 = i3!=(OOC_INT32)0;
  
  goto l8;
l6:
  i3=OOC_TRUE;
l8:
  if (i3) goto l10;
  i3 = i2==i1;
  
  goto l12;
l10:
  i3=OOC_TRUE;
l12:
  if (!i3) goto l3_loop;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6297))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6309))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6327))*2);
  i1 = i1!=(OOC_CHAR16)0;
  
l20:
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6446))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6457))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6437)) = i1;
  goto l24;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6353))+8);
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)((_check_pointer(i0, 6364))+4) = i1;
  *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6407))*2) = (OOC_CHAR16)0;
l24:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadSInt(BinaryRider__Reader r, OOC_INT8 *sint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6572));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6597))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6597))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6608)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)sint);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6685))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6696))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6676)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadInt(BinaryRider__Reader r, OOC_INT16 *_int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6793));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6818)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)_int, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6858))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6869))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6849)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLInt(BinaryRider__Reader r, OOC_INT32 *lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6986));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7011)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)lint, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7052))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7063))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7043)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadNum(BinaryRider__Reader r, OOC_INT32 *num) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 s;
  OOC_INT32 y;
  OOC_CHAR8 x;

  s = 0;
  y = 0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7265)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i1 = x;
  i1 = i1>=(OOC_CHAR8)'\200';
  if (i1) goto l3;
  i1=0;i2=0;
  goto l13;
l3:
  i1=0;i2=0;
l4_loop:
  i3 = x;
  i1 = i1+(_ash((i3-128),i2));
  y = i1;
  i2 = i2+7;
  s = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7373)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i3 = i2<28;
  if (i3) goto l7;
  i3=OOC_FALSE;
  goto l9;
l7:
  i3 = x;
  i3 = i3>=(OOC_CHAR8)'\200';
  
l9:
  if (i3) goto l4_loop;
l12:
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l13:
  i3 = x;
  i4 = i3>=(OOC_CHAR8)'\200';
  if (i4) goto l28;
  i4 = i1==28;
  if (i4) goto l18;
  i4=OOC_FALSE;
  goto l20;
l18:
  i4 = (OOC_CHAR8)'\010'<=i3;
  
l20:
  if (i4) goto l22;
  i4=OOC_FALSE;
  goto l24;
l22:
  i4 = i3<(OOC_CHAR8)'x';
  
l24:
  if (i4) goto l26;
  i4=OOC_FALSE;
  goto l30;
l26:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7591))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7603))+4);
  i4 = i4==(OOC_INT32)0;
  
  goto l30;
l28:
  i4=OOC_TRUE;
l30:
  if (i4) goto l32;
  *num = ((_ash((_lsh(OOC_INT32, i3, 25)),(i1-25)))+i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7743))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7755))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7733)) = i1;
  goto l33;
l32:
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7629)) = i1;
l33:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadReal(BinaryRider__Reader r, OOC_REAL32 *real) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7873));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7898)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)real, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7939))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7950))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7930)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLReal(BinaryRider__Reader r, OOC_REAL64 *lreal) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8070));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8095)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)lreal, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8137))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8148))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8128)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadSet(BinaryRider__Reader r, OOC_UINT32 *s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8241));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8266)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)s, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8304))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8315))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8295)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_SetByteOrder(BinaryRider__Reader r, OOC_INT8 order) {
  register OOC_INT32 i0,i1;

  i0 = order;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<=2;
  
l4:
  _assert(i1, 127, 8411);
  i1 = (OOC_INT32)r;
  *(OOC_INT8*)((_check_pointer(i1, 8468))+4) = i0;
  return;
  ;
}

OOC_INT32 BinaryRider__WriterDesc_Pos(BinaryRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8794))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8794))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8805)))), Channel__WriterDesc_Pos)),Channel__WriterDesc_Pos)((Channel__Writer)i0);
  return i0;
  ;
}

void BinaryRider__WriterDesc_SetPos(BinaryRider__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8890));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8915))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8915))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8926)))), Channel__WriterDesc_SetPos)),Channel__WriterDesc_SetPos)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8959))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8970))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8950)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_ClearError(BinaryRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9046))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9046))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9057)))), Channel__WriterDesc_ClearError)),Channel__WriterDesc_ClearError)((Channel__Writer)i2);
  *(OOC_INT32*)(_check_pointer(i0, 9075)) = (OOC_INT32)0;
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBytes(BinaryRider__Writer w, OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9311));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9336))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9336))+8);
  i3 = start;
  i4 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9347)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)x, -1, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9389))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9400))+4);
  *(OOC_INT32*)(_check_pointer(i0, 9380)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBytesOrdered(BinaryRider__Writer w, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9604))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9634))+4);
  i2 = BinaryRider__systemByteOrder;
  i1 = i1==i2;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  if (i1) goto l15;
  i1 = x_0d-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l16;
l9_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9758))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9758))+8);
  i4 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 9781)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9769)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i3, i4);
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9674))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9674))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9685)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i0, (void*)(OOC_INT32)x, -1, 0, x_0d);
l16:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBool(BinaryRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9892));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = _bool;
  if (i1) goto l5;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9986))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9986))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9998)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, 0);
  goto l6;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9938))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9938))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9950)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, 1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10042))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10054))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10032)) = i1;
l7:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteChar(BinaryRider__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10149));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10174))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10174))+8);
  i3 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10186)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10219))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10230))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10210)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLChar(BinaryRider__Writer w, OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10329));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10354)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&ch, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10396))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10407))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10387)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteString(BinaryRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10575));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10600))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10600))+8);
  i3 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10611)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)s, -1, 0, (i3+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10669))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10680))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10660)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLString(BinaryRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10866));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l8;
  i1=-1;
l3_loop:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 10953)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10938)))), BinaryRider__WriterDesc_WriteLChar)),BinaryRider__WriterDesc_WriteLChar)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 10972)));
  i2 = i2==(OOC_CHAR8)'\000';
  if (!i2) goto l3_loop;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10999))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11010))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10990)) = i1;
l8:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteSInt(BinaryRider__Writer w, OOC_INT8 sint) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11111));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11136))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11136))+8);
  i3 = sint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11147)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11181))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11192))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11172)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteInt(BinaryRider__Writer w, OOC_INT16 _int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11287));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11312)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&_int, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11353))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11364))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11344)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLInt(BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11479));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11504)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&lint, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11546))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11557))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11537)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteNum(BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11712));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l19;
  i1 = lint;
  i2 = i1<-64;
  if (i2) goto l5;
  i1 = i1>63;
  
  goto l7;
l5:
  i1=OOC_TRUE;
l7:
  if (!i1) goto l18;
l9_loop:
  i1 = lint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11778)))), BinaryRider__WriterDesc_WriteChar)),BinaryRider__WriterDesc_WriteChar)((BinaryRider__Writer)i0, ((_mod(i1,128))+128));
  i1 = i1>>7;
  i2 = i1<-64;
  lint = i1;
  if (i2) goto l12;
  i1 = i1>63;
  
  goto l14;
l12:
  i1=OOC_TRUE;
l14:
  if (i1) goto l9_loop;
l18:
  i1 = lint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11858)))), BinaryRider__WriterDesc_WriteChar)),BinaryRider__WriterDesc_WriteChar)((BinaryRider__Writer)i0, (_mod(i1,128)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11905))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11916))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11896)) = i1;
l19:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteReal(BinaryRider__Writer w, OOC_REAL32 real) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12028));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12053)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&real, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12095))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12106))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12086)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLReal(BinaryRider__Writer w, OOC_REAL64 lreal) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12225));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12250)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&lreal, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12293))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12304))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12284)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteSet(BinaryRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12394));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12419)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&s, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12458))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12469))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12449)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_SetByteOrder(BinaryRider__Writer w, OOC_INT8 order) {
  register OOC_INT32 i0,i1;

  i0 = order;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<=2;
  
l4:
  _assert(i1, 127, 12568);
  i1 = (OOC_INT32)w;
  *(OOC_INT8*)((_check_pointer(i1, 12625))+4) = i0;
  return;
  ;
}

void BinaryRider__InitReader(BinaryRider__Reader r, Channel__Channel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 13120)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13158)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 13140))+8) = i2;
  i2 = byteOrder;
  *(OOC_INT8*)((_check_pointer(i0, 13178))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 13209))+12) = i1;
  return;
  ;
}

BinaryRider__Reader BinaryRider__ConnectReader(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  BinaryRider__Reader r;

  i0 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__Reader.baseTypes[0]);
  r = (BinaryRider__Reader)i0;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitReader((BinaryRider__Reader)i0, (Channel__Channel)i1, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13386))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (BinaryRider__Reader)i0;
  goto l4;
l3:
  return (BinaryRider__Reader)(OOC_INT32)0;
l4:
  _failed_function(13252); return 0;
  ;
}

void BinaryRider__InitWriter(BinaryRider__Writer w, Channel__Channel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 13938)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13976)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 13958))+8) = i2;
  i2 = byteOrder;
  *(OOC_INT8*)((_check_pointer(i0, 13996))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 14027))+12) = i1;
  return;
  ;
}

BinaryRider__Writer BinaryRider__ConnectWriter(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  BinaryRider__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__Writer.baseTypes[0]);
  w = (BinaryRider__Writer)i0;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitWriter((BinaryRider__Writer)i0, (Channel__Channel)i1, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14204))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (BinaryRider__Writer)i0;
  goto l4;
l3:
  return (BinaryRider__Writer)(OOC_INT32)0;
l4:
  _failed_function(14070); return 0;
  ;
}

static void BinaryRider__SetDefaultByteOrder(OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0;

  i0 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(0, x_0d, OOC_UINT8, 14393)));
  i0 = (_type_cast_fast(OOC_UINT8, OOC_UINT8, i0))==(OOC_CHAR8)'\001';
  if (i0) goto l3;
  BinaryRider__systemByteOrder = 2;
  goto l4;
l3:
  BinaryRider__systemByteOrder = 1;
l4:
  return;
  ;
}

static void BinaryRider__Init() {
  OOC_INT16 i;

  i = 1;
  BinaryRider__SetDefaultByteOrder((void*)(OOC_INT32)&i, 2);
  return;
  ;
}

void OOC_BinaryRider_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__ErrorContext.baseTypes[0]);
  BinaryRider__errorContext = (BinaryRider__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "OOC:Core:BinaryRider", 21);
  BinaryRider__Init();
  return;
  ;
}

/* --- */
