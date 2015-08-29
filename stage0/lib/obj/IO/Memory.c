#include "IO/Memory.d"
#include "__oo2c.h"

static Msg__Msg IO_Memory__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)IO_Memory__errorContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

void IO_Memory__ErrorContextDesc_GetTemplate(IO_Memory__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 str[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3660))+8);
  switch (i1) {
  case 14:
    _copy_8((const void*)"Access denied",(void*)(OOC_INT32)str,128);
    goto l5;
  case 15:
    _copy_8((const void*)"The named file does not exist",(void*)(OOC_INT32)str,128);
    goto l5;
  default:
    _copy_8((const void*)"",(void*)(OOC_INT32)str,128);
    i1 = (OOC_INT32)context;
    Channel__ErrorContextDesc_GetTemplate((Channel__ErrorContext)i1, (Msg__Msg)i0, (void*)(OOC_INT32)templ, templ_0d);
    goto l5;
  }
l5:
  i0 = (
  _cmp8((const void*)(OOC_INT32)str,(const void*)""))!=(OOC_INT32)0;
  if (!i0) goto l8;
  _copy_8to16((const void*)(OOC_INT32)str,(void*)(OOC_INT32)templ,templ_0d);
l8:
  return;
  ;
}

static IO_Memory__File IO_Memory__NewFile(OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2;
  IO_Memory__File b;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_Memory__File.baseTypes[0]);
  b = (IO_Memory__File)i0;
  *(OOC_INT32*)(_check_pointer(i0, 4012)) = (OOC_INT32)0;
  i1 = Strings__Length((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 4037))+4) = ((OOC_INT32)RT0__NewObject(_td_IO_Memory__Name.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4088))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4088))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4094)), (OOC_INT32)0);
  _copy_8((const void*)(OOC_INT32)name,(void*)(_check_pointer(i1, 4094)),i2);
  *(OOC_INT32*)((_check_pointer(i0, 4103))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4123))+12) = 480;
  *(OOC_INT32*)((_check_pointer(i0, 4155))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4183))+20) = ((OOC_INT32)RT0__NewObject(_td_IO_Memory__Data.baseTypes[0], 480));
  return (IO_Memory__File)i0;
  ;
}

static void IO_Memory__ExtendFile(IO_Memory__File b, OOC_INT32 newLen) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  IO_Memory__Data newData;

  i0 = newLen;
  i0 = i0+32;
  newLen = i0;
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 4365))+12);
  i2 = i2+32;
  i3 = i2<i0;
  i = i2;
  if (i3) goto l4_loop;
  i0=i2;
  goto l9;
l4_loop:
  i2 = i2*2;
  i3 = i2<i0;
  i = i2;
  if (i3) goto l4_loop;
l8:
  i0=i2;
l9:
  i0 = i0-32;
  newLen = i0;
  i0 = (OOC_INT32)RT0__NewObject(_td_IO_Memory__Data.baseTypes[0], i0);
  newData = (IO_Memory__Data)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4531))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 4613))+8);
  _move_block((_type_cast_fast(OOC_INT32, OOC_PTR, i2)),(_type_cast_fast(OOC_INT32, OOC_PTR, i0)),i1);
  i0 = (OOC_INT32)b;
  i1 = newLen;
  *(OOC_INT32*)((_check_pointer(i0, 4629))+12) = i1;
  i1 = (OOC_INT32)newData;
  *(OOC_INT32*)((_check_pointer(i0, 4658))+20) = i1;
  return;
  ;
}

static IO_Memory__File IO_Memory__FindFile(OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1;
  IO_Memory__File ptr;

  i0 = (OOC_INT32)IO_Memory__fileList;
  ptr = (IO_Memory__File)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4825))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 4831)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4860));
  ptr = (IO_Memory__File)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l11;
  i1=OOC_FALSE;
  goto l13;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4825))+4);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 4831)),(const void*)(OOC_INT32)name))!=(OOC_INT32)0;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (IO_Memory__File)i0;
  ;
}

static void IO_Memory__InsertFile(IO_Memory__File b) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  IO_Memory__File pred;
  IO_Memory__File ptr;

  i0 = (OOC_INT32)IO_Memory__fileList;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l36;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5238))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5256))+4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 5244)),(const void*)(_check_pointer(i3, 5262))))==(OOC_INT32)0;
  if (i2) goto l34;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5363))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5381))+4);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 5369)),(const void*)(_check_pointer(i3, 5387))))<(OOC_INT32)0;
  if (i2) goto l32;
  pred = (IO_Memory__File)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5525));
  ptr = (IO_Memory__File)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l9;
  i3=OOC_FALSE;
  goto l11;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5561))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5574))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 5567)),(const void*)(_check_pointer(i4, 5580))))>(OOC_INT32)0;
  
l11:
  if (i3) goto l13;
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
  goto l23;
l13:
  i0=i2;
l14_loop:
  pred = (IO_Memory__File)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5617));
  ptr = (IO_Memory__File)i2;
  i3 = i2!=(OOC_INT32)0;
  if (i3) goto l17;
  i3=OOC_FALSE;
  goto l19;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5561))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5574))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 5567)),(const void*)(_check_pointer(i4, 5580))))>(OOC_INT32)0;
  
l19:
  if (!i3) goto l22;
  i0=i2;
  goto l14_loop;
l22:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l23:
  i3 = i0==(OOC_INT32)0;
  if (i3) goto l30;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5720))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5731))+4);
  i3 = (
  _cmp8((const void*)(_check_pointer(i3, 5726)),(const void*)(_check_pointer(i4, 5737))))==(OOC_INT32)0;
  if (i3) goto l28;
  *(OOC_INT32*)(_check_pointer(i1, 5896)) = i0;
  *(OOC_INT32*)(_check_pointer(i2, 5923)) = i1;
  goto l37;
l28:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5796));
  *(OOC_INT32*)(_check_pointer(i1, 5783)) = i0;
  *(OOC_INT32*)(_check_pointer(i2, 5816)) = i1;
  goto l37;
l30:
  *(OOC_INT32*)(_check_pointer(i2, 5692)) = i1;
  goto l37;
l32:
  *(OOC_INT32*)(_check_pointer(i1, 5431)) = i0;
  IO_Memory__fileList = (IO_Memory__File)i1;
  goto l37;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5323));
  *(OOC_INT32*)(_check_pointer(i1, 5305)) = i0;
  IO_Memory__fileList = (IO_Memory__File)i1;
  goto l37;
l36:
  i0 = (OOC_INT32)b;
  IO_Memory__fileList = (IO_Memory__File)i0;
l37:
  return;
  ;
}

OOC_INT32 IO_Memory__ReaderDesc_Pos(IO_Memory__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 6030))+12);
  if (i1) goto l3;
  return -2;
  goto l4;
l3:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 6064))+16);
  return i0;
l4:
  _failed_function(5996); return 0;
  ;
}

OOC_INT32 IO_Memory__ReaderDesc_Available(IO_Memory__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6187));
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 6193))+6);
  if (i1) goto l3;
  return -1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6219));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6226)))), &_td_IO_Memory__ChannelDesc, 6226)), 6234))+8);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6240))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 6250))+16);
  return (i1-i0);
l4:
  _failed_function(6147); return 0;
  ;
}

void IO_Memory__ReaderDesc_SetPos(IO_Memory__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6375))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6405));
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 6411))+6);
  i1 = !i1;
  if (i1) goto l13;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 6479))+12);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = newPos;
  i1 = i1>=0;
  
l9:
  if (i1) goto l11;
  i1 = (OOC_INT32)IO_Memory__GetError(4);
  *(OOC_INT32*)((_check_pointer(i0, 6560))+4) = i1;
  goto l15;
l11:
  i1 = newPos;
  *(OOC_INT32*)((_check_pointer(i0, 6524))+16) = i1;
  goto l15;
l13:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)((_check_pointer(i0, 6432))+4) = i1;
l15:
  return;
  ;
}

void IO_Memory__ReaderDesc_ReadByte(IO_Memory__Reader r, OOC_CHAR8 *x) {
  register OOC_INT32 i0,i1,i2,i3;
  IO_Memory__File b;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6716))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6747));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6754)))), &_td_IO_Memory__ChannelDesc, 6754)), 6762))+8);
  b = (IO_Memory__File)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6781));
  i2 = *(OOC_UINT8*)((_check_pointer(i2, 6787))+6);
  i2 = !i2;
  if (i2) goto l9;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6883))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 6892))+8);
  i2 = i2<i3;
  if (i2) goto l7;
  i1 = (OOC_INT32)IO_Memory__GetError(5);
  *(OOC_INT32*)((_check_pointer(i0, 7005))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 7048))+8) = 0;
  goto l11;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6921))+20);
  i1 = _check_pointer(i1, 6927);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 6929))+16);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 6927)));
  *x = i1;
  *(OOC_INT32*)((_check_pointer(i0, 6946))+8) = 1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6978))+16);
  *(OOC_INT32*)((_check_pointer(i0, 6978))+16) = (i1+1);
  goto l11;
l9:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)((_check_pointer(i0, 6808))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 6852))+8) = 0;
l11:
  return;
  ;
}

void IO_Memory__ReaderDesc_ReadBytes(IO_Memory__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  IO_Memory__File b;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7265))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7296));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7303)))), &_td_IO_Memory__ChannelDesc, 7303)), 7311))+8);
  b = (IO_Memory__File)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7330));
  i2 = *(OOC_UINT8*)((_check_pointer(i2, 7336))+6);
  i2 = !i2;
  if (i2) goto l17;
  i2 = n;
  i3 = i2==0;
  if (i3) goto l15;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 7483))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 7495))+8);
  i3 = (i3+i2)<=i4;
  if (i3) goto l13;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 7662))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 7653))+16);
  i2 = i3<i2;
  if (i2) goto l11;
  i1 = (OOC_INT32)IO_Memory__GetError(5);
  *(OOC_INT32*)((_check_pointer(i0, 7902))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 7945))+8) = 0;
  goto l19;
l11:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7703))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 7691))+8);
  i2 = i3-i2;
  n = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7744))+20);
  i1 = _check_pointer(i1, 7750);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7752))+16);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = start;
  _move_block((i1+(_check_index(i0, i3, OOC_UINT32, 7750))),((OOC_INT32)x+(_check_index(i4, x_0d, OOC_UINT32, 7774))),i2);
  i0 = (OOC_INT32)r;
  i1 = n;
  *(OOC_INT32*)((_check_pointer(i0, 7797))+8) = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7829))+16);
  *(OOC_INT32*)((_check_pointer(i0, 7829))+16) = (i2+i1);
  i1 = (OOC_INT32)IO_Memory__GetError(5);
  *(OOC_INT32*)((_check_pointer(i0, 7849))+4) = i1;
  goto l19;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7544))+20);
  i1 = _check_pointer(i1, 7550);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7552))+16);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = start;
  _move_block((i1+(_check_index(i0, i3, OOC_UINT32, 7550))),((OOC_INT32)x+(_check_index(i4, x_0d, OOC_UINT32, 7574))),i2);
  i0 = (OOC_INT32)r;
  i1 = n;
  *(OOC_INT32*)((_check_pointer(i0, 7597))+8) = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7629))+16);
  *(OOC_INT32*)((_check_pointer(i0, 7629))+16) = (i2+i1);
  goto l19;
l15:
  *(OOC_INT32*)((_check_pointer(i0, 7452))+8) = 0;
  goto l19;
l17:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)((_check_pointer(i0, 7357))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 7401))+8) = 0;
l19:
  return;
  ;
}

OOC_INT32 IO_Memory__WriterDesc_Pos(IO_Memory__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8058))+12);
  if (i1) goto l3;
  return -2;
  goto l4;
l3:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8092))+16);
  return i0;
l4:
  _failed_function(8024); return 0;
  ;
}

void IO_Memory__WriterDesc_SetPos(IO_Memory__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8219))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8249));
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8255))+6);
  i1 = !i1;
  if (i1) goto l13;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8323))+12);
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = newPos;
  i1 = i1>=0;
  
l9:
  if (i1) goto l11;
  i1 = (OOC_INT32)IO_Memory__GetError(4);
  *(OOC_INT32*)((_check_pointer(i0, 8404))+4) = i1;
  goto l15;
l11:
  i1 = newPos;
  *(OOC_INT32*)((_check_pointer(i0, 8368))+16) = i1;
  goto l15;
l13:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)((_check_pointer(i0, 8276))+4) = i1;
l15:
  return;
  ;
}

void IO_Memory__WriterDesc_Truncate(IO_Memory__Writer w, OOC_INT32 newLength) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  IO_Memory__File b;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8576))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l17;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8607));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8614)))), &_td_IO_Memory__ChannelDesc, 8614)), 8622))+8);
  b = (IO_Memory__File)i0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8653))+8);
  i2 = newLength;
  i1 = i2>i1;
  if (!i1) goto l16;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8693))+12);
  i1 = i2>i1;
  if (!i1) goto l7;
  IO_Memory__ExtendFile((IO_Memory__File)i0, i2);
l7:
  i1 = i2-1;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8779))+8);
  i4 = i3<=i1;
  i = i3;
  if (!i4) goto l16;
l10_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8817))+20);
  i4 = _check_pointer(i4, 8823);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 8823))) = (OOC_CHAR8)'\000';
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l10_loop;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 8863))+8) = i2;
l17:
  return;
  ;
}

void IO_Memory__WriterDesc_WriteByte(IO_Memory__Writer w, OOC_CHAR8 x) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  IO_Memory__File b;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8997))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9028));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9035)))), &_td_IO_Memory__ChannelDesc, 9035)), 9043))+8);
  b = (IO_Memory__File)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9062));
  i2 = *(OOC_UINT8*)((_check_pointer(i2, 9068))+6);
  i2 = !i2;
  if (i2) goto l14;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9177))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 9187))+12);
  i2 = i2>=i3;
  if (!i2) goto l7;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9232))+16);
  IO_Memory__ExtendFile((IO_Memory__File)i1, (i2+1));
l7:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9276))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 9267))+16);
  i2 = i3>i2;
  if (!i2) goto l10;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9315))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9302)))), IO_Memory__WriterDesc_Truncate)),IO_Memory__WriterDesc_Truncate)((IO_Memory__Writer)i0, i2);
l10:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9344))+20);
  i2 = _check_pointer(i2, 9350);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = *(OOC_INT32*)((_check_pointer(i0, 9352))+16);
  i5 = x;
  *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 9350))) = (_type_cast_fast(OOC_UINT8, OOC_UINT8, i5));
  *(OOC_INT32*)((_check_pointer(i0, 9393))+8) = 1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9428))+16);
  *(OOC_INT32*)((_check_pointer(i0, 9428))+16) = (i2+1);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9458))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9449))+16);
  i0 = i0>i2;
  if (!i0) goto l16;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 9489))+8);
  *(OOC_INT32*)((_check_pointer(i1, 9489))+8) = (i0+1);
  goto l16;
l14:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)((_check_pointer(i0, 9089))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 9133))+8) = 0;
l16:
  return;
  ;
}

void IO_Memory__WriterDesc_WriteBytes(IO_Memory__Writer w, const OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  IO_Memory__File b;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9719))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l20;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9750));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9757)))), &_td_IO_Memory__ChannelDesc, 9757)), 9765))+8);
  b = (IO_Memory__File)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9784));
  i2 = *(OOC_UINT8*)((_check_pointer(i2, 9790))+6);
  i2 = !i2;
  if (i2) goto l18;
  i2 = n;
  i3 = i2==0;
  if (i3) goto l16;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 9953))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 9964))+12);
  i3 = (i3+i2)>i4;
  if (!i3) goto l9;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 10009))+16);
  IO_Memory__ExtendFile((IO_Memory__File)i1, (i3+i2));
l9:
  i3 = *(OOC_INT32*)((_check_pointer(i1, 10053))+8);
  i4 = *(OOC_INT32*)((_check_pointer(i0, 10044))+16);
  i3 = i4>i3;
  if (!i3) goto l12;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 10092))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10079)))), IO_Memory__WriterDesc_Truncate)),IO_Memory__WriterDesc_Truncate)((IO_Memory__Writer)i0, i3);
l12:
  i3 = start;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10169))+20);
  i1 = _check_pointer(i1, 10175);
  i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10177))+16);
  _move_block(((OOC_INT32)x+(_check_index(i3, x_0d, OOC_UINT32, 10146))),(i1+(_check_index(i0, i4, OOC_UINT32, 10175))),i2);
  i0 = (OOC_INT32)w;
  i1 = n;
  *(OOC_INT32*)((_check_pointer(i0, 10199))+8) = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10234))+16);
  *(OOC_INT32*)((_check_pointer(i0, 10234))+16) = (i2+i1);
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10267))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 10258))+16);
  i2 = i3>i2;
  if (!i2) goto l20;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10306))+16);
  *(OOC_INT32*)((_check_pointer(i1, 10293))+8) = i0;
  goto l20;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 9909))+8) = 0;
  goto l20;
l18:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)((_check_pointer(i0, 9811))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 9855))+8) = 0;
l20:
  return;
  ;
}

IO_Memory__Reader IO_Memory__ChannelDesc_NewReader(IO_Memory__Channel ch) {
  register OOC_INT32 i0,i1;
  IO_Memory__Reader r;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10452))+6);
  i1 = !i1;
  if (i1) goto l7;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10536))+4);
  if (i1) goto l5;
  i1 = (OOC_INT32)IO_Memory__GetError(9);
  *(OOC_INT32*)(_check_pointer(i0, 10739)) = i1;
  return (IO_Memory__Reader)(OOC_INT32)0;
  goto l8;
l5:
  i1 = (OOC_INT32)RT0__NewObject(_td_IO_Memory__Reader.baseTypes[0]);
  r = (IO_Memory__Reader)i1;
  *(OOC_INT32*)(_check_pointer(i1, 10574)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 10595))+8) = -1;
  *(OOC_UINT8*)((_check_pointer(i1, 10621))+12) = OOC_TRUE;
  *(OOC_INT32*)((_check_pointer(i1, 10652))+16) = 0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10671)))), Channel__ReaderDesc_ClearError)),Channel__ReaderDesc_ClearError)((Channel__Reader)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10693)))), Channel__ChannelDesc_ClearError)),Channel__ChannelDesc_ClearError)((Channel__Channel)i0);
  return (IO_Memory__Reader)i1;
  goto l8;
l7:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)(_check_pointer(i0, 10472)) = i1;
  return (IO_Memory__Reader)(OOC_INT32)0;
l8:
  _failed_function(10390); return 0;
  ;
}

IO_Memory__Writer IO_Memory__ChannelDesc_NewWriter(IO_Memory__Channel ch) {
  register OOC_INT32 i0,i1;
  IO_Memory__Writer w;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10902))+6);
  i1 = !i1;
  if (i1) goto l7;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10986))+5);
  if (i1) goto l5;
  i1 = (OOC_INT32)IO_Memory__GetError(9);
  *(OOC_INT32*)(_check_pointer(i0, 11192)) = i1;
  return (IO_Memory__Writer)(OOC_INT32)0;
  goto l8;
l5:
  i1 = (OOC_INT32)RT0__NewObject(_td_IO_Memory__Writer.baseTypes[0]);
  w = (IO_Memory__Writer)i1;
  *(OOC_INT32*)(_check_pointer(i1, 11024)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 11045))+8) = -1;
  *(OOC_UINT8*)((_check_pointer(i1, 11074))+12) = OOC_TRUE;
  *(OOC_INT32*)((_check_pointer(i1, 11105))+16) = 0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11124)))), Channel__WriterDesc_ClearError)),Channel__WriterDesc_ClearError)((Channel__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11146)))), Channel__ChannelDesc_ClearError)),Channel__ChannelDesc_ClearError)((Channel__Channel)i0);
  return (IO_Memory__Writer)i1;
  goto l8;
l7:
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)(_check_pointer(i0, 10922)) = i1;
  return (IO_Memory__Writer)(OOC_INT32)0;
l8:
  _failed_function(10840); return 0;
  ;
}

OOC_INT32 IO_Memory__ChannelDesc_Length(IO_Memory__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11331))+6);
  if (i1) goto l3;
  return -1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11358))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 11364))+8);
  return i0;
l4:
  _failed_function(11294); return 0;
  ;
}

void IO_Memory__ChannelDesc_Fingerprint(IO_Memory__Channel ch, OOC_CHAR8 key[], OOC_LEN key_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT16 i;
  OOC_INT16 j;
  OOC_INT32 pos;
  OOC_CHAR8 byte;
  OOC_INT16 old;
  OOC_INT16 _new;

  i0=0;
l1_loop:
  i1 = i0+1;
  i2 = i1<=3;
  *(OOC_UINT8*)((OOC_INT32)key+(_check_index(i0, key_0d, OOC_UINT16, 12136))) = 0;
  if (!i2) goto l5;
  i0=i1;
  goto l1_loop;
l5:
  i0 = end;
  i = 0;
  i0 = i0-1;
  j = 0;
  i1 = start;
  i2 = i1<=i0;
  pos = i1;
  if (!i2) goto l17;
  i2 = (OOC_INT32)ch;
  i3=0;i4=0;
l8_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12264))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 12270))+20);
  i5 = _check_pointer(i5, 12276);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i1, i6, OOC_UINT32, 12276)));
  i5 = _type_cast_fast(OOC_UINT8, OOC_UINT8, i5);
  byte = i5;
  i6 = *(OOC_UINT8*)((OOC_INT32)key+(_check_index(i3, key_0d, OOC_UINT16, 12323)));
  i6 = _type_cast_fast(OOC_UINT8, OOC_UINT8, i6);
  old = i6;
  i5 = _type_cast_fast(OOC_UINT8, OOC_UINT8, (_rot(OOC_UINT8, i5, i4)));
  _new = i5;
  *(OOC_UINT8*)((OOC_INT32)key+(_check_index(i3, key_0d, OOC_UINT16, 12399))) = (_mod((i6+i5),256));
  i3 = i3+1;
  i = i3;
  i5 = i3==4;
  if (!i5) goto l12;
  i3 = _mod((i4+1),8);
  j = i3;
  i = 0;
  i4=i3;i3=0;
l12:
  i1 = i1+1;
  i5 = i1<=i0;
  pos = i1;
  if (i5) goto l8_loop;
l17:
  return;
  ;
}

void IO_Memory__ChannelDesc_Flush(IO_Memory__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 12597))+6);
  i1 = !i1;
  if (!i1) goto l4;
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)(_check_pointer(i0, 12617)) = i1;
l4:
  return;
  ;
}

void IO_Memory__ChannelDesc_GetModTime(IO_Memory__Channel ch, struct Time__TimeStamp *mtime, RT0__Struct mtime__tag) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)IO_Memory__GetError(12);
  *(OOC_INT32*)(_check_pointer(i0, 12752)) = i1;
  return;
  ;
}

void IO_Memory__ChannelDesc_Register(IO_Memory__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13002))+8);
  IO_Memory__InsertFile((IO_Memory__File)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13017)))), Channel__ChannelDesc_ClearError)),Channel__ChannelDesc_ClearError)((Channel__Channel)i0);
  return;
  ;
}

void IO_Memory__ChannelDesc_Close(IO_Memory__Channel ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 13096))+6);
  if (i1) goto l3;
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)(_check_pointer(i0, 13204)) = i1;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13121))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13121))+8);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 13127))+16);
  *(OOC_INT32*)((_check_pointer(i1, 13127))+16) = (i2-1);
  *(OOC_UINT8*)((_check_pointer(i0, 13149))+6) = OOC_FALSE;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13174)))), Channel__ChannelDesc_ClearError)),Channel__ChannelDesc_ClearError)((Channel__Channel)i0);
l4:
  return;
  ;
}

void IO_Memory__ChannelDesc_CopyToWriter(IO_Memory__Channel ch, Channel__Writer writer) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 13414))+6);
  if (i1) goto l3;
  i1 = (OOC_INT32)IO_Memory__GetError(6);
  *(OOC_INT32*)(_check_pointer(i0, 13583)) = i1;
  goto l7;
l3:
  i1 = (OOC_INT32)writer;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13454))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13460))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13474))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 13480))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13438)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i1, (void*)(_check_pointer(i2, 13466)), -1, 0, i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13507))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13550))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13535)) = i1;
l7:
  return;
  ;
}

OOC_CHAR8 IO_Memory__Exists(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)IO_Memory__FindFile((void*)(OOC_INT32)name, name_0d);
  return (i0!=(OOC_INT32)0);
  ;
}

static IO_Memory__Channel IO_Memory__Attach(IO_Memory__File b, OOC_UINT32 flags) {
  register OOC_INT32 i0,i1,i2;
  IO_Memory__Channel channel;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_Memory__Channel.baseTypes[0]);
  channel = (IO_Memory__Channel)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13874)))), Channel__ChannelDesc_ClearError)),Channel__ChannelDesc_ClearError)((Channel__Channel)i0);
  i1 = flags;
  *(OOC_UINT8*)((_check_pointer(i0, 13899))+4) = (_in(0,i1));
  *(OOC_UINT8*)((_check_pointer(i0, 13939))+5) = (_in(1,i1));
  *(OOC_UINT8*)((_check_pointer(i0, 13980))+6) = OOC_TRUE;
  i1 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 14007))+8) = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 14030))+16);
  *(OOC_INT32*)((_check_pointer(i1, 14030))+16) = (i2+1);
  return (IO_Memory__Channel)i0;
  ;
}

IO_Memory__Channel IO_Memory__New(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_UINT32 flags, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  IO_Memory__File b;

  i0 = flags;
  i1 = (i0&3)!=0;
  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  if (i1) goto l3;
  i0 = (OOC_INT32)IO_Memory__GetError(14);
  *res = (Msg__Msg)i0;
  return (IO_Memory__Channel)(OOC_INT32)0;
  goto l8;
l3:
  i1 = (OOC_INT32)IO_Memory__FindFile((void*)(OOC_INT32)name, name_0d);
  b = (IO_Memory__File)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l6;
  i1 = (OOC_INT32)IO_Memory__NewFile((void*)(OOC_INT32)name, name_0d);
  IO_Memory__InsertFile((IO_Memory__File)i1);
  
  goto l7;
l6:
  *(OOC_INT32*)((_check_pointer(i1, 14621))+8) = 0;
  
l7:
  *res = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)IO_Memory__Attach((IO_Memory__File)i1, i0);
  return (IO_Memory__Channel)i0;
l8:
  _failed_function(14088); return 0;
  ;
}

IO_Memory__Channel IO_Memory__Old(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_UINT32 flags, Msg__Msg *res) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  i0 = flags;
  i1 = (i0&3)!=0;
  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  if (i1) goto l3;
  i0 = (OOC_INT32)IO_Memory__GetError(14);
  *res = (Msg__Msg)i0;
  return (IO_Memory__Channel)(OOC_INT32)0;
  goto l8;
l3:
  i1 = (OOC_INT32)IO_Memory__FindFile((void*)(OOC_INT32)name, name_0d);
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l6;
  *res = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)IO_Memory__Attach((IO_Memory__File)i1, i0);
  return (IO_Memory__Channel)i0;
  goto l8;
l6:
  i0 = (OOC_INT32)IO_Memory__GetError(15);
  *res = (Msg__Msg)i0;
  return (IO_Memory__Channel)(OOC_INT32)0;
l8:
  _failed_function(14855); return 0;
  ;
}

IO_Memory__Channel IO_Memory__Tmp(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_UINT32 flags, Msg__Msg *res) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  i0 = flags;
  i1 = (i0&3)!=0;
  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  if (i1) goto l3;
  i0 = (OOC_INT32)IO_Memory__GetError(14);
  *res = (Msg__Msg)i0;
  return (IO_Memory__Channel)(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)IO_Memory__NewFile((void*)(OOC_INT32)name, name_0d);
  *res = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)IO_Memory__Attach((IO_Memory__File)i1, i0);
  return (IO_Memory__Channel)i0;
l4:
  _failed_function(15480); return 0;
  ;
}

void OOC_IO_Memory_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_Memory__ErrorContext.baseTypes[0]);
  IO_Memory__errorContext = (IO_Memory__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "IO:Memory", 10);
  IO_Memory__fileList = (IO_Memory__File)(OOC_INT32)0;
  return;
  ;
}

/* --- */
