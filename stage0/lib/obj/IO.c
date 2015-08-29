#include <IO.d>
#include <__oo2c.h>
#include <setjmp.h>

void IO__InitError(IO__Error e, Object__String msg) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)msg;
  Exception__Init((Exception__Exception)i0, (Object__String)i1);
  return;
  ;
}

IO__FormatError IO__NewFormatError(Object__String msg) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO__FormatError.baseTypes[0]);
  i1 = (OOC_INT32)msg;
  IO__InitError((IO__Error)i0, (Object__String)i1);
  return (IO__FormatError)i0;
  ;
}

void IO__RaiseFormatError(Object__String msg) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)msg;
  i0 = (OOC_INT32)IO__NewFormatError((Object__String)i0);
  Exception__Raise((void*)i0);
  return;
  ;
}

void IO__RaiseNotImplemented() {
  register OOC_INT32 i0;
  IO__NotImplemented e;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO__NotImplemented.baseTypes[0]);
  e = (IO__NotImplemented)i0;
  IO__InitError((IO__Error)i0, (Object__String)(OOC_INT32)0);
  Exception__Raise((void*)i0);
  return;
  ;
}

void IO__InitSelectionKey(IO__SelectionKey k, OOC_INT32 fd, IO__Selector selector, IO__Channel channel, OOC_UINT32 ops, Object__Object attachment) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = fd;
  *(OOC_INT32*)(_check_pointer(i0, 6798)) = i1;
  i1 = ops;
  *(OOC_UINT32*)((_check_pointer(i0, 6814))+4) = i1;
  i1 = (OOC_INT32)attachment;
  *(OOC_INT32*)((_check_pointer(i0, 6840))+8) = i1;
  i1 = (OOC_INT32)selector;
  *(OOC_INT32*)((_check_pointer(i0, 6872))+12) = i1;
  i1 = (OOC_INT32)channel;
  *(OOC_INT32*)((_check_pointer(i0, 6900))+16) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 6926))+24) = OOC_FALSE;
  return;
  ;
}

void IO__SelectionKeyDesc_Attach(IO__SelectionKey k, Object__Object obj) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 7089))+8) = i1;
  return;
  ;
}

void IO__SelectionKeyDesc_Cancel(IO__SelectionKey k) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7438))+24);
  i1 = !i1;
  if (!i1) goto l4;
  *(OOC_UINT8*)((_check_pointer(i0, 7458))+24) = OOC_TRUE;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7482))+12);
  *(OOC_UINT8*)((_check_pointer(i0, 7491))+4) = OOC_TRUE;
l4:
  return;
  ;
}

void IO__SelectionKeyDesc_SetInterestOps(IO__SelectionKey k, OOC_UINT32 ops) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)k;
  i1 = ops;
  *(OOC_UINT32*)((_check_pointer(i0, 7651))+4) = i1;
  return;
  ;
}

void IO__InitSelector(IO__Selector s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  *(OOC_INT32*)(_check_pointer(i0, 7747)) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 7766))+4) = OOC_FALSE;
  return;
  ;
}

void IO__SelectorDesc_Close(IO__Selector s) {
  register OOC_INT32 i0,i1,i2;
  IO__SelectionKey k;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7983));
  i2 = i1!=(OOC_INT32)0;
  k = (IO__SelectionKey)i1;
  if (!i2) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8020)))), IO__SelectionKeyDesc_Cancel)),IO__SelectionKeyDesc_Cancel)((IO__SelectionKey)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8043))+20);
  k = (IO__SelectionKey)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  *(OOC_INT32*)(_check_pointer(i0, 8067)) = (OOC_INT32)0;
  return;
  ;
}

OOC_INT32 IO__SelectorDesc_Select(IO__Selector s, OOC_INT32 sec, OOC_INT32 usec) {

  _failed_function(8130); return 0;
  ;
}

IO__SelectionKey IO__SelectorDesc_NextKey(IO__Selector s) {

  _failed_function(9151); return 0;
  ;
}

IO__SelectionKey IO__SelectorDesc_AddSelectionKey(IO__Selector s, OOC_INT32 fd, IO__Channel channel, OOC_UINT32 ops, Object__Object attachment) {

  _failed_function(9441); return 0;
  ;
}

void IO__SelectorDesc_RemoveSelectionKey(IO__Selector s, IO__SelectionKey k) {

  return;
  ;
}

void IO__SelectorDesc_RemoveCanceled(IO__Selector s) {
  register OOC_INT32 i0,i1,i2,i3;
  IO__SelectionKey prev;
  IO__SelectionKey k;

  i0 = (OOC_INT32)s;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10420))+4);
  if (!i1) goto l19;
  prev = (IO__SelectionKey)(OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10464));
  k = (IO__SelectionKey)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l19;
  i2=(OOC_INT32)0;
l5_loop:
  i3 = *(OOC_UINT8*)((_check_pointer(i1, 10508))+24);
  if (i3) goto l8;
  prev = (IO__SelectionKey)i1;
  i2=i1;
  goto l13;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10532)))), IO__SelectorDesc_RemoveSelectionKey)),IO__SelectorDesc_RemoveSelectionKey)((IO__Selector)i0, (IO__SelectionKey)i1);
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l11;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10664))+20);
  *(OOC_INT32*)((_check_pointer(i2, 10651))+20) = i3;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10610))+20);
  *(OOC_INT32*)(_check_pointer(i0, 10600)) = i3;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10750))+20);
  k = (IO__SelectionKey)i1;
  i3 = i1!=(OOC_INT32)0;
  if (i3) goto l5_loop;
l19:
  return;
  ;
}

void IO__InitChannel(IO__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  *(OOC_UINT32*)(_check_pointer(i0, 10855)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 10882))+4) = ((OOC_INT32)RT0__NewObject(_td_IO__SelectionKeyList.baseTypes[0], 2));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10899))+4);
  i0 = _check_pointer(i0, 10904);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 10904))*4) = (OOC_INT32)0;
  return;
  ;
}

OOC_INT32 IO__ChannelDesc_FileDescriptor(IO__Channel ch) {

  _failed_function(10971); return 0;
  ;
}

IO__SelectionKey IO__ChannelDesc_RegisterWithSelector(IO__Channel ch, IO__Selector sel, OOC_UINT32 ops, Object__Object attachment) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 i;
  IO__SelectionKeyList n;
  OOC_INT32 j;
  IO__SelectionKey k;

  i = 0;
  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11840))+4);
  i1 = _check_pointer(i1, 11845);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 11845))*4);
  i1 = i1!=(OOC_INT32)0;
  i2 = (OOC_INT32)sel;
  if (i1) goto l3;
  i1=0;
  goto l12;
l3:
  i1=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11871))+4);
  i3 = _check_pointer(i3, 11876);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 11876))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11879))+12);
  i3 = i3==i2;
  if (!i3) goto l7;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11954))+4);
  i3 = _check_pointer(i3, 11959);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 11959))*4);
  return (IO__SelectionKey)i3;
l7:
  i1 = i1+1;
  i = i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11840))+4);
  i3 = _check_pointer(i3, 11845);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 11845))*4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l4_loop;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12018))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 12023)), (OOC_INT32)0);
  i4 = i1+1;
  i3 = i4==i3;
  if (!i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12051))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 12056)), (OOC_INT32)0);
  i3 = (OOC_INT32)RT0__NewObject(_td_IO__SelectionKeyList.baseTypes[0], (i3*2));
  n = (IO__SelectionKeyList)i3;
  i5 = 0<=i1;
  j = 0;
  if (!i5) goto l22;
  i5=0;
l17_loop:
  i6 = _check_pointer(i3, 12097);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12106))+4);
  i8 = _check_pointer(i8, 12111);
  i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i1, i9, OOC_UINT32, 12111))*4);
  *(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 12097))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i1;
  j = i5;
  if (i6) goto l17_loop;
l22:
  *(OOC_INT32*)((_check_pointer(i0, 12135))+4) = i3;
l23:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12162))+4);
  i3 = _check_pointer(i3, 12167);
  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i4, i5, OOC_UINT32, 12167))*4) = (OOC_INT32)0;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12212)))), IO__ChannelDesc_FileDescriptor)),IO__ChannelDesc_FileDescriptor)((IO__Channel)i0);
  i4 = ops;
  i5 = (OOC_INT32)attachment;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12193)))), IO__SelectorDesc_AddSelectionKey)),IO__SelectorDesc_AddSelectionKey)((IO__Selector)i2, i3, (IO__Channel)i0, i4, (Object__Object)i5);
  k = (IO__SelectionKey)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12259))+4);
  i0 = _check_pointer(i0, 12264);
  i3 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+(_check_index(i1, i3, OOC_UINT32, 12264))*4) = i2;
  return (IO__SelectionKey)i2;
  ;
}

IO__SelectionKey IO__ChannelDesc_KeyForSelector(IO__Channel ch, IO__Selector sel) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i = 0;
  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12590))+4);
  i1 = _check_pointer(i1, 12595);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 12595))*4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12611))+4);
  i1 = _check_pointer(i1, 12616);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 12616))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12619))+12);
  i2 = (OOC_INT32)sel;
  i1 = i1!=i2;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1 = (OOC_INT32)sel;
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12590))+4);
  i3 = _check_pointer(i3, 12595);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 12595))*4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12611))+4);
  i3 = _check_pointer(i3, 12616);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 12616))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12619))+12);
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l16:
  i1=i2;
l17:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12675))+4);
  i0 = _check_pointer(i0, 12680);
  i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 12680))*4);
  return (IO__SelectionKey)i0;
  ;
}

void IO__ChannelDesc_SetBlocking(IO__Channel ch, OOC_CHAR8 block) {

  return;
  ;
}

void IO__ChannelDesc_Close(IO__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i = 0;
  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13331))+4);
  i1 = _check_pointer(i1, 13336);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 13336))*4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13358))+4);
  i2 = _check_pointer(i2, 13363);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 13363))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13358))+4);
  i3 = _check_pointer(i3, 13363);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 13363))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13366)))), IO__SelectionKeyDesc_Cancel)),IO__SelectionKeyDesc_Cancel)((IO__SelectionKey)i3);
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13331))+4);
  i2 = _check_pointer(i2, 13336);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 13336))*4);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

void IO__ChannelDesc_CloseAndRegister(IO__Channel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13775)))), IO__ChannelDesc_Close)),IO__ChannelDesc_Close)((IO__Channel)i0);
  return;
  ;
}

void IO__InitByteChannel(IO__ByteChannel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  IO__InitChannel((IO__Channel)i0);
  return;
  ;
}

void IO__ChannelDesc_SetPos(IO__Channel ch, OOC_INT32 pos) {

  IO__RaiseNotImplemented();
  return;
  ;
}

OOC_INT32 IO__ByteChannelDesc_Read(IO__ByteChannel ch, OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {

  _failed_function(14110); return 0;
  ;
}

OOC_INT32 IO__ByteChannelDesc_Write(IO__ByteChannel ch, const OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {

  _failed_function(15434); return 0;
  ;
}

void IO__ByteChannelDesc_Flush(IO__ByteChannel ch) {

  return;
  ;
}

OOC_INT32 IO__ByteChannelDesc_TransferTo(IO__ByteChannel ch, OOC_INT32 length, IO__ByteChannel target) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 rd;
  OOC_CHAR8 buffer[8192];
  OOC_INT32 j;
  OOC_INT32 wd;

  i0 = length;
  i1 = 0!=i0;
  i = 0;
  if (i1) goto l3;
  i0=0;
  goto l25;
l3:
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)target;
  i3=0;
l4_loop:
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16921)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i1, (void*)(OOC_INT32)buffer, 8192, 0, 8192);
  rd = i4;
  i5 = i4==-1;
  if (i5) goto l19;
  i5 = 0!=i4;
  j = 0;
  if (!i5) goto l18;
  i5=0;
l9_loop:
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17107)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i2, (void*)(OOC_INT32)buffer, 8192, i5, (i4-i5));
  wd = i6;
  i7 = i6==-1;
  if (i7) goto l12;
  i5 = i5+i6;
  j = i5;
  
  goto l13;
l12:
  return (i3+i5);
  
l13:
  i6 = i5!=i4;
  if (i6) goto l9_loop;
l18:
  i3 = i3+i4;
  i = i3;
  
  goto l20;
l19:
  return i3;
  
l20:
  i4 = i3!=i0;
  if (i4) goto l4_loop;
l24:
  i0=i3;
l25:
  return i0;
  ;
}

void OOC_IO_init(void) {

  return;
  ;
}

/* --- */
