#include <IO/Buffer.d>
#include <__oo2c.h>
#include <setjmp.h>

static void IO_Buffer__Init(IO_Buffer__Channel ch, IO__ByteChannel base) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  IO__InitByteChannel((IO__ByteChannel)i0);
  i1 = (OOC_INT32)base;
  *(OOC_INT32*)((_check_pointer(i0, 1462))+8) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 1483))+12) = 1u;
  *(OOC_INT32*)((_check_pointer(i0, 1507))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 1524))+20) = 0;
  return;
  ;
}

IO_Buffer__Channel IO_Buffer__Open(IO__ByteChannel base) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_Buffer__Channel.baseTypes[0]);
  i1 = (OOC_INT32)base;
  IO_Buffer__Init((IO_Buffer__Channel)i0, (IO__ByteChannel)i1);
  return (IO_Buffer__Channel)i0;
  ;
}

void IO_Buffer__ChannelDesc_Flush(IO_Buffer__Channel ch) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 d;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1786))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 1795))+20);
  i1 = i1!=i2;
  if (!i1) goto l7;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 1825))+12);
  if (i1) goto l5;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1917))+16);
  _assert((i1==0), 127, 1908);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1943))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1943))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 1971))+20);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1948)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i2, (void*)((_check_pointer(i0, 1957))+24), 8192, 0, i3);
  d = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2007))+20);
  _assert((i1==i2), 127, 1994);
  *(OOC_INT32*)((_check_pointer(i0, 2032))+20) = 0;
  goto l6;
l5:
  *(OOC_INT32*)((_check_pointer(i0, 1849))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 1870))+20) = 0;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2070))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2070))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2075)))), IO__ByteChannelDesc_Flush)),IO__ByteChannelDesc_Flush)((IO__ByteChannel)i0);
l7:
  return;
  ;
}

void IO_Buffer__ChannelDesc_SetPos(IO_Buffer__Channel ch, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ch;
  IO_Buffer__ChannelDesc_Flush((IO_Buffer__Channel)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2201))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2201))+8);
  i2 = pos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2206)))), IO__ChannelDesc_SetPos)),IO__ChannelDesc_SetPos)((IO__Channel)i0, i2);
  return;
  ;
}

OOC_INT32 IO_Buffer__ChannelDesc_Read(IO_Buffer__Channel ch, OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_INT32 d;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 2421))+12);
  if (i1) goto l3;
  IO_Buffer__ChannelDesc_Flush((IO_Buffer__Channel)i0);
  i = 0;
  
  goto l8;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2448))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2463))+16);
  i1 = i1-i2;
  i = i1;
  _assert((i1>=0), 127, 2475);
  i2 = length;
  i3 = i1>=i2;
  if (i3) goto l6;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2863))+16);
  i3 = start;
  _move_block((((_check_pointer(i0, 2852))+24)+i2),((OOC_INT32)buffer+i3),i1);
  i0 = (OOC_INT32)ch;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2953))+16);
  i2 = i;
  i3 = start;
  *(OOC_INT32*)((_check_pointer(i0, 2953))+16) = (i1+i2);
  i1 = length;
  start = (i3+i2);
  length = (i1-i2);
  
  goto l8;
l6:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2615))+16);
  i3 = start;
  _move_block((((_check_pointer(i0, 2604))+24)+i1),((OOC_INT32)buffer+i3),i2);
  i0 = (OOC_INT32)ch;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2710))+16);
  i2 = length;
  *(OOC_INT32*)((_check_pointer(i0, 2710))+16) = (i1+i2);
  return i2;
  
l8:
  i1 = length;
  i2 = i1!=0;
  if (i2) goto l11;
  i0 = i;
  return i0;
  goto l32;
l11:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3247))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3256))+20);
  _assert((i2==i3), 127, 3238);
  i2 = i1>=4096;
  if (i2) goto l22;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3591))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3591))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3596)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i3, (void*)((_check_pointer(i0, 3604))+24), 8192, 0, 8192);
  d = i2;
  *(OOC_UINT8*)((_check_pointer(i0, 3639))+12) = 1u;
  *(OOC_INT32*)((_check_pointer(i0, 3667))+16) = 0;
  i3 = i2<0;
  if (i3) goto l16;
  *(OOC_INT32*)((_check_pointer(i0, 3953))+20) = i2;
  i2 = start;
  i0 = IO_Buffer__ChannelDesc_Read((IO_Buffer__Channel)i0, (void*)(OOC_INT32)buffer, (-1), i2, i1);
  i1 = i;
  return (i1+i0);
  goto l32;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 3749))+20) = 0;
  i0 = i;
  i1 = i0>0;
  if (i1) goto l19;
  return (-1);
  goto l32;
l19:
  return i0;
  goto l32;
l22:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3323))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3323))+8);
  i3 = start;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3328)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i0, (void*)(OOC_INT32)buffer, (-1), i3, i1);
  i1 = i0<0;
  if (i1) goto l25;
  i1 = i;
  return (i0+i1);
  goto l32;
l25:
  i1 = i;
  i2 = i1>0;
  if (i2) goto l28;
  return i0;
  goto l32;
l28:
  return i1;
l32:
  _failed_function(2259); return 0;
  ;
}

OOC_INT32 IO_Buffer__ChannelDesc_Write(IO_Buffer__Channel ch, const OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ch;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 4262))+12);
  if (!i1) goto l3;
  IO_Buffer__ChannelDesc_Flush((IO_Buffer__Channel)i0);
  *(OOC_UINT8*)((_check_pointer(i0, 4302))+12) = 0u;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4345))+20);
  i2 = length;
  i1 = (i1+i2)<=8192;
  if (i1) goto l10;
  IO_Buffer__ChannelDesc_Flush((IO_Buffer__Channel)i0);
  i1 = i2>=4096;
  if (i1) goto l8;
  i1 = start;
  i0 = IO_Buffer__ChannelDesc_Write((IO_Buffer__Channel)i0, (void*)(OOC_INT32)buffer, (-1), i1, i2);
  return i0;
  goto l11;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4732))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4732))+8);
  i3 = start;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4737)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)buffer, (-1), i3, i2);
  return i0;
  goto l11;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4494))+20);
  i3 = start;
  _move_block(((OOC_INT32)buffer+i3),(((_check_pointer(i0, 4483))+24)+i1),i2);
  i0 = (OOC_INT32)ch;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4529))+20);
  i2 = length;
  *(OOC_INT32*)((_check_pointer(i0, 4529))+20) = (i1+i2);
  return i2;
l11:
  _failed_function(4118); return 0;
  ;
}

void IO_Buffer__ChannelDesc_SetBlocking(IO_Buffer__Channel ch, OOC_CHAR8 block) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5010))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5010))+8);
  i2 = block;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5015)))), IO__ChannelDesc_SetBlocking)),IO__ChannelDesc_SetBlocking)((IO__Channel)i0, i2);
  return;
  ;
}

OOC_INT32 IO_Buffer__ChannelDesc_FileDescriptor(IO_Buffer__Channel ch) {

  return (-1);
  ;
}

void IO_Buffer__ChannelDesc_Close(IO_Buffer__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  IO_Buffer__ChannelDesc_Flush((IO_Buffer__Channel)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5244))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5244))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5249)))), IO__ChannelDesc_Close)),IO__ChannelDesc_Close)((IO__Channel)i0);
  return;
  ;
}

void IO_Buffer__ChannelDesc_CloseAndRegister(IO_Buffer__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  IO_Buffer__ChannelDesc_Flush((IO_Buffer__Channel)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5364))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5364))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5369)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i0);
  return;
  ;
}

void OOC_IO_Buffer_init(void) {

  return;
  ;
}

/* --- */
