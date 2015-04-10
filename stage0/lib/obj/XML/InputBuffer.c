#include "XML/InputBuffer.d"
#include "__oo2c.h"

OOC_CHAR8 XML_InputBuffer__BufferDesc_NextBlock(XML_InputBuffer__Buffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  XML_InputBuffer__CharArray nChars;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2692))+4);
  i1 = _check_pointer(i1, 2699);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2701))+12);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 2699)));
  _assert((i1==(OOC_CHAR8)'\000'), 127, 2683);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2739));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2742))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2970))+4);
  i1 = _check_pointer(i1, 2977);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 2979))+12);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 2977)));
  _assert((i1==(OOC_CHAR8)'\000'), 127, 2961);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3019))+16);
  i1 = i1>=4096;
  if (!i1) goto l8;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3118))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3135))+16);
  i1 = i1-i2;
  len = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3169))+16);
  i2 = i1<i2;
  if (!i2) goto l8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3456))+4);
  i2 = _check_pointer(i2, 3463);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3465))+16);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3519))+4);
  _move_block((i2+(_check_index(i3, i4, OOC_UINT32, 3463))),(_check_pointer(i0, 3526)),(i1+1));
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3577))+8);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3596))+16);
  *(OOC_INT32*)((_check_pointer(i0, 3577))+8) = (i1+i2);
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 3623))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 3656))+16) = 0;
l8:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3713))+4);
  i1 = _check_pointer(i1, 3720);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3722))+12);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 3720)));
  _assert((i1==(OOC_CHAR8)'\000'), 127, 3704);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3799))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3763))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3806)), 0);
  i1 = (i2+4096)>=i1;
  if (!i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3932))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3939)), 0);
  
l11_loop:
  i1 = i1+4096;
  len = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4008))+12);
  i2 = (i2+4096)<i1;
  if (!i2) goto l11_loop;
l15:
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_InputBuffer__CharArray.baseTypes[0], i1);
  nChars = (XML_InputBuffer__CharArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4104))+4);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 4180))+12);
  _move_block((_check_pointer(i2, 4111)),(_check_pointer(i1, 4154)),(i0+1));
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)nChars;
  *(OOC_INT32*)((_check_pointer(i0, 4207))+4) = i1;
l16:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4358))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4371))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4365)), 0);
  i1 = (((i1-i2)-1)>>12)*4096;
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4447));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4464))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i0, 4475))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4447));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4450)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i5, (void*)(_check_pointer(i3, 4471)), -1, i4, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4507));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 4510))+8);
  i1 = i1==0;
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4649));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4633))+12);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 4652))+8);
  *(OOC_INT32*)((_check_pointer(i0, 4633))+12) = (i2+i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4675))+4);
  i1 = _check_pointer(i1, 4682);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4684))+12);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 4682))) = (OOC_CHAR8)'\000';
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4730))+4);
  i1 = _check_pointer(i1, 4737);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 4739))+12);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 4737)));
  _assert((i0==(OOC_CHAR8)'\000'), 127, 4721);
  return OOC_TRUE;
  goto l25;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4549))+4);
  i1 = _check_pointer(i1, 4556);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 4558))+12);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 4556)));
  _assert((i0==(OOC_CHAR8)'\000'), 127, 4540);
  return OOC_FALSE;
  goto l25;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2780));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2783))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2788))+8);
  i1 = i1!=5;
  if (!i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2833))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2853));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2833))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2856))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2842)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i3, (Msg__Msg)i2);
l24:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2889))+4);
  i1 = _check_pointer(i1, 2896);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2898))+12);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 2896)));
  _assert((i0==(OOC_CHAR8)'\000'), 127, 2880);
  return OOC_FALSE;
l25:
  _failed_function(2021); return 0;
  ;
}

OOC_CHAR8 XML_InputBuffer__BufferDesc_EndOfBuffer(XML_InputBuffer__Buffer b, OOC_INT32 cpos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = cpos;
  _assert((0<=i0), 127, 5147);
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 5188))+12);
  _assert((i0<=i2), 127, 5171);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5217))+4);
  i2 = _check_pointer(i2, 5224);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 5224)));
  _assert((i2==(OOC_CHAR8)'\000'), 127, 5208);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 5265))+12);
  return (i0==i1);
  ;
}

void XML_InputBuffer__BufferDesc_Close(XML_InputBuffer__Buffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5528));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5531));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5528));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 5531));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5537)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i2);
  *(OOC_INT32*)(_check_pointer(i0, 5551)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5568))+4) = (OOC_INT32)0;
  return;
  ;
}

static void XML_InputBuffer__Init(XML_InputBuffer__Buffer b, OOC_CHAR8 _new, Channel__Reader reader, Msg__MsgList errList) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)reader;
  *(OOC_INT32*)(_check_pointer(i0, 5741)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 5761))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5786))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 5814))+12) = 0;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 5839))+20) = i1;
  i1 = _new;
  if (!i1) goto l4;
  *(OOC_INT32*)((_check_pointer(i0, 5889))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_InputBuffer__CharArray.baseTypes[0], 16352));
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5926))+4);
  i1 = _check_pointer(i1, 5933);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 5933))) = (OOC_CHAR8)'\000';
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5965)))), XML_InputBuffer__BufferDesc_NextBlock)),XML_InputBuffer__BufferDesc_NextBlock)((XML_InputBuffer__Buffer)i0);
  return;
  ;
}

XML_InputBuffer__Buffer XML_InputBuffer__New(Channel__Reader reader, Msg__MsgList errList) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_InputBuffer__Buffer.baseTypes[0]);
  i1 = (OOC_INT32)reader;
  i2 = (OOC_INT32)errList;
  XML_InputBuffer__Init((XML_InputBuffer__Buffer)i0, OOC_TRUE, (Channel__Reader)i1, (Msg__MsgList)i2);
  return (XML_InputBuffer__Buffer)i0;
  ;
}

void OOC_XML_InputBuffer_init(void) {

  return;
  ;
}

/* --- */
