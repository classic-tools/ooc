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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3253))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3253))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3264)))), Channel__ReaderDesc_Pos)),Channel__ReaderDesc_Pos)((Channel__Reader)i0);
  return i0;
  ;
}

void BinaryRider__ReaderDesc_SetPos(BinaryRider__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3350));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3376))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3376))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3387)))), Channel__ReaderDesc_SetPos)),Channel__ReaderDesc_SetPos)((Channel__Reader)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3420))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3431))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3411)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ClearError(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3509))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3509))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3520)))), Channel__ReaderDesc_ClearError)),Channel__ReaderDesc_ClearError)((Channel__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 3538)) = (OOC_INT32)0;
  return;
  ;
}

OOC_INT32 BinaryRider__ReaderDesc_Available(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3638))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3638))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3649)))), Channel__ReaderDesc_Available)),Channel__ReaderDesc_Available)((Channel__Reader)i0);
  return i0;
  ;
}

void BinaryRider__ReaderDesc_ReadBytes(BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3884));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3909))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3909))+8);
  i3 = start;
  i4 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3920)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i2, (void*)(OOC_INT32)x, -1, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3961))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3972))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3952)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadBytesOrdered(BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4173))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4203))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4353))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4353))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4364)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i3, (void*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 4375))));
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4243))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4243))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4254)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i0, (void*)(OOC_INT32)x, -1, 0, x_0d);
l16:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadBool(BinaryRider__Reader r, OOC_CHAR8 *_bool) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT8 byte;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4510));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4535))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4535))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4547)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)&byte);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4578))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4590))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4708))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4720))+4);
  *(OOC_INT32*)(_check_pointer(i0, 4698)) = i1;
  goto l14;
l13:
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 4644)) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4854));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4879))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4879))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4891)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)ch);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4923))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4934))+4);
  *(OOC_INT32*)(_check_pointer(i0, 4914)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLChar(BinaryRider__Reader r, OOC_CHAR16 *ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5033));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5058)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)ch, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5099))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5110))+4);
  *(OOC_INT32*)(_check_pointer(i0, 5090)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadString(BinaryRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5440));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l24;
  i1 = s_0d-1;
  len = i1;
  i2=-1;
l3_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5527)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5538))));
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5559)));
  i3 = i3==(OOC_CHAR8)'\000';
  if (i3) goto l6;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5574))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5585))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5621))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5633))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5651)));
  i1 = i1!=(OOC_CHAR8)'\000';
  
l20:
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5770))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5781))+4);
  *(OOC_INT32*)(_check_pointer(i0, 5761)) = i1;
  goto l24;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5677))+8);
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)((_check_pointer(i0, 5688))+4) = i1;
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5731))) = (OOC_CHAR8)'\000';
l24:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLString(BinaryRider__Reader r, OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6129));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l24;
  i1 = s_0d-1;
  len = i1;
  i2=-1;
l3_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6216)))), BinaryRider__ReaderDesc_ReadLChar)),BinaryRider__ReaderDesc_ReadLChar)((BinaryRider__Reader)i0, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6228))*2));
  i3 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6249))*2);
  i3 = i3==(OOC_CHAR8)'\000';
  if (i3) goto l6;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6264))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6275))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6311))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6323))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l18;
  i1=OOC_FALSE;
  goto l20;
l18:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6341))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  
l20:
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6460))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6471))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6451)) = i1;
  goto l24;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6367))+8);
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)((_check_pointer(i0, 6378))+4) = i1;
  *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6421))*2) = (OOC_CHAR8)'\000';
l24:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadSInt(BinaryRider__Reader r, OOC_INT8 *sint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6586));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6611))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6611))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6622)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)sint);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6699))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6710))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6690)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadInt(BinaryRider__Reader r, OOC_INT16 *_int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6807));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6832)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)_int, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6872))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6883))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6863)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLInt(BinaryRider__Reader r, OOC_INT32 *lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7000));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7025)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)lint, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7066))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7077))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7057)) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7279)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7387)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7605))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7617))+4);
  i4 = i4==(OOC_INT32)0;
  
  goto l30;
l28:
  i4=OOC_TRUE;
l30:
  if (i4) goto l32;
  *num = ((_ash((_lsh(OOC_INT32, i3, 25)),(i1-25)))+i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7757))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7769))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7747)) = i1;
  goto l33;
l32:
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7643)) = i1;
l33:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadReal(BinaryRider__Reader r, OOC_REAL32 *real) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7887));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7912)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)real, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7953))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7964))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7944)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLReal(BinaryRider__Reader r, OOC_REAL64 *lreal) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8084));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8109)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)lreal, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8151))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8162))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8142)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadSet(BinaryRider__Reader r, OOC_UINT32 *s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8255));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8280)))), BinaryRider__ReaderDesc_ReadBytesOrdered)),BinaryRider__ReaderDesc_ReadBytesOrdered)((BinaryRider__Reader)i0, (void*)(OOC_INT32)s, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8318))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8329))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8309)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadStr(BinaryRider__Reader r, Object__String *s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;
  OOC_CHAR8 buffer8[1024];
  OOC_CHAR8 *dynBuffer8;
  OOC_INT32 i;
  OOC_INT32 x;
  OOC_CHAR32 buffer32[512];
  OOC_CHAR32 *dynBuffer32;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8704));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l35;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8729)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i2 = i1==0;
  if (i2) goto l33;
  i2 = i1>0;
  if (i2) goto l27;
  i1 = (-i1)-1;
  i2 = i1<512;
  len = i1;
  if (i2) goto l17;
  i2 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__8641.baseTypes[0], i1);
  i1 = i1-1;
  dynBuffer32 = (void*)i2;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l16;
  i3=0;
l11_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9537)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i4 = x;
  *(OOC_UINT32*)((OOC_INT32)buffer32+(_check_index(i3, 512, OOC_UINT32, 9570))*4) = i4;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l11_loop;
l16:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9651)), (OOC_INT32)0);
  i1 = len;
  i0 = (OOC_INT32)Object__NewUCS4Region((void*)(_check_pointer(i2, 9651)), i0, 0, i1);
  *s = (Object__String)i0;
  goto l35;
l17:
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l25;
  i2=0;
l20_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9323)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i3 = x;
  *(OOC_UINT32*)((OOC_INT32)buffer32+(_check_index(i2, 512, OOC_UINT32, 9356))*4) = i3;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l20_loop;
l25:
  i0 = len;
  i0 = (OOC_INT32)Object__NewUCS4Region((void*)(OOC_INT32)buffer32, 512, 0, i0);
  *s = (Object__String)i0;
  goto l35;
l27:
  i1 = i1-1;
  i2 = i1<1024;
  len = i1;
  if (i2) goto l30;
  i2 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__8552.baseTypes[0], i1);
  dynBuffer8 = (void*)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9028)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 9049)), -1, 0, i1);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9109)), (OOC_INT32)0);
  i1 = len;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i2, 9109)), i0, 0, i1);
  *s = (Object__String)i0;
  goto l35;
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8887)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)buffer8, 1024, 0, i1);
  i0 = len;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)buffer8, 1024, 0, i0);
  *s = (Object__String)i0;
  goto l35;
l33:
  *s = (Object__String)(OOC_INT32)0;
l35:
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
  _assert(i1, 127, 9779);
  i1 = (OOC_INT32)r;
  *(OOC_INT8*)((_check_pointer(i1, 9836))+4) = i0;
  return;
  ;
}

OOC_INT32 BinaryRider__WriterDesc_Pos(BinaryRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10162))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10162))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10173)))), Channel__WriterDesc_Pos)),Channel__WriterDesc_Pos)((Channel__Writer)i0);
  return i0;
  ;
}

void BinaryRider__WriterDesc_SetPos(BinaryRider__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10258));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10283))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10283))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10294)))), Channel__WriterDesc_SetPos)),Channel__WriterDesc_SetPos)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10327))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10338))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10318)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_ClearError(BinaryRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10414))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10414))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10425)))), Channel__WriterDesc_ClearError)),Channel__WriterDesc_ClearError)((Channel__Writer)i2);
  *(OOC_INT32*)(_check_pointer(i0, 10443)) = (OOC_INT32)0;
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBytes(BinaryRider__Writer w, const OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10684));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10709))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10709))+8);
  i3 = start;
  i4 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10720)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)x, -1, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10762))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10773))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10753)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBytesOrdered(BinaryRider__Writer w, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10977))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11007))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11131))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11131))+8);
  i4 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 11154)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11142)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i3, i4);
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11047))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11047))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11058)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i0, (void*)(OOC_INT32)x, -1, 0, x_0d);
l16:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBool(BinaryRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11265));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l7;
  i1 = _bool;
  if (i1) goto l5;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11359))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11359))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11371)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, 0);
  goto l6;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11311))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11311))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11323)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, 1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11415))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11427))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11405)) = i1;
l7:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteChar(BinaryRider__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11522));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11547))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11547))+8);
  i3 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11559)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11592))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11603))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11583)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLChar(BinaryRider__Writer w, OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11702));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11727)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&ch, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11769))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11780))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11760)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteString(BinaryRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11948));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11973))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11973))+8);
  i3 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11984)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)s, -1, 0, (i3+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12042))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12053))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12033)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLString(BinaryRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12239));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l8;
  i1=-1;
l3_loop:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 12326)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12311)))), BinaryRider__WriterDesc_WriteLChar)),BinaryRider__WriterDesc_WriteLChar)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 12345)));
  i2 = i2==(OOC_CHAR8)'\000';
  if (!i2) goto l3_loop;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12372))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12383))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12363)) = i1;
l8:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteSInt(BinaryRider__Writer w, OOC_INT8 sint) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12484));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12509))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12509))+8);
  i3 = sint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12520)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12554))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12565))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12545)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteInt(BinaryRider__Writer w, OOC_INT16 _int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12660));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12685)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&_int, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12726))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12737))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12717)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLInt(BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12852));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12877)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&lint, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12919))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12930))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12910)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteNum(BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13085));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13151)))), BinaryRider__WriterDesc_WriteChar)),BinaryRider__WriterDesc_WriteChar)((BinaryRider__Writer)i0, ((_mod(i1,128))+128));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13231)))), BinaryRider__WriterDesc_WriteChar)),BinaryRider__WriterDesc_WriteChar)((BinaryRider__Writer)i0, (_mod(i1,128)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13278))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13289))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13269)) = i1;
l19:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteReal(BinaryRider__Writer w, OOC_REAL32 real) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13401));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13426)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&real, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13468))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13479))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13459)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLReal(BinaryRider__Writer w, OOC_REAL64 lreal) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13598));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13623)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&lreal, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13666))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13677))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13657)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteSet(BinaryRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13767));
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13792)))), BinaryRider__WriterDesc_WriteBytesOrdered)),BinaryRider__WriterDesc_WriteBytesOrdered)((BinaryRider__Writer)i0, (void*)(OOC_INT32)&s, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13831))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13842))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13822)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteStr(BinaryRider__Writer w, Object__String s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object__CharsLatin1 chars8;
  Object__CharsUCS4 chars32;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14080)))), &_td_Object__String8Desc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14229)))), &_td_Object__String32Desc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14226)))), 14226);
  goto l20;
l7:
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 14312));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14300)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, ((-i2)-1));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14344)))), Object__String32Desc_CharsUCS4)),Object__String32Desc_CharsUCS4)((Object__String32)i0);
  chars32 = (Object__CharsUCS4)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14381));
  i0 = i0-1;
  i3 = 0<=i0;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l10_loop:
  i4 = _check_pointer(i2, 14426);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 14426))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14405)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, i4);
  i3 = i3+1;
  i4 = i3<=i0;
  i = i3;
  if (i4) goto l10_loop;
  goto l20;
l17:
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 14120));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14109)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, (i2+1));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14151)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  chars8 = (Object__CharsLatin1)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14201));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14176)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i1, (void*)(_check_pointer(i2, 14194)), -1, 0, i0);
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14045)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, 0);
l20:
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
  _assert(i1, 127, 14550);
  i1 = (OOC_INT32)w;
  *(OOC_INT8*)((_check_pointer(i1, 14607))+4) = i0;
  return;
  ;
}

void BinaryRider__InitReader(BinaryRider__Reader r, Channel__Channel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 15102)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15140)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 15122))+8) = i2;
  i2 = byteOrder;
  *(OOC_INT8*)((_check_pointer(i0, 15160))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 15191))+12) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15368))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (BinaryRider__Reader)i0;
  goto l4;
l3:
  return (BinaryRider__Reader)(OOC_INT32)0;
l4:
  _failed_function(15234); return 0;
  ;
}

void BinaryRider__InitWriter(BinaryRider__Writer w, Channel__Channel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 15920)) = (OOC_INT32)0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15958)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 15940))+8) = i2;
  i2 = byteOrder;
  *(OOC_INT8*)((_check_pointer(i0, 15978))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 16009))+12) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16186))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (BinaryRider__Writer)i0;
  goto l4;
l3:
  return (BinaryRider__Writer)(OOC_INT32)0;
l4:
  _failed_function(16052); return 0;
  ;
}

static void BinaryRider__SetDefaultByteOrder(OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0;

  i0 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(0, x_0d, OOC_UINT8, 16375)));
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
