#include <OOC/Scanner/InputBuffer.d>
#include <__oo2c.h>

OOC_CHAR8 OOC_Scanner_InputBuffer__BufferDesc_NextBlock(OOC_Scanner_InputBuffer__Buffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_Scanner_InputBuffer__CharArray nChars;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3670))+4);
  i1 = _check_pointer(i1, 3677);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3679))+12);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 3677)));
  _assert((i1==(OOC_CHAR8)'\000'), 127, 3661);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3717));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3720))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3948))+4);
  i1 = _check_pointer(i1, 3955);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3957))+12);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 3955)));
  _assert((i1==(OOC_CHAR8)'\000'), 127, 3939);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3997))+16);
  i1 = i1>=4096;
  if (!i1) goto l8;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4096))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4113))+16);
  i1 = i1-i2;
  len = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4147))+16);
  i2 = i1<i2;
  if (!i2) goto l8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4434))+4);
  i2 = _check_pointer(i2, 4441);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4443))+16);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4497))+4);
  _move_block((i2+(_check_index(i3, i4, OOC_UINT32, 4441))),(_check_pointer(i0, 4504)),(i1+1));
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4555))+8);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4574))+16);
  *(OOC_INT32*)((_check_pointer(i0, 4555))+8) = (i1+i2);
  i1 = len;
  *(OOC_INT32*)((_check_pointer(i0, 4601))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 4634))+16) = 0;
l8:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4691))+4);
  i1 = _check_pointer(i1, 4698);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4700))+12);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 4698)));
  _assert((i1==(OOC_CHAR8)'\000'), 127, 4682);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4777))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4741))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4784)), (OOC_INT32)0);
  i1 = (i2+4096)>=i1;
  if (!i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4910))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4917)), (OOC_INT32)0);
  
l11_loop:
  i1 = i1+4096;
  len = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4986))+12);
  i2 = (i2+4096)<i1;
  if (!i2) goto l11_loop;
l15:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], i1);
  nChars = (OOC_Scanner_InputBuffer__CharArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5082))+4);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5158))+12);
  _move_block((_check_pointer(i2, 5089)),(_check_pointer(i1, 5132)),(i0+1));
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)nChars;
  *(OOC_INT32*)((_check_pointer(i0, 5185))+4) = i1;
l16:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5336))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5349))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5343)), (OOC_INT32)0);
  i1 = (((i1-i2)-1)>>12)*4096;
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5425));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5442))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i0, 5453))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5425));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5428)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i5, (void*)(_check_pointer(i3, 5449)), -1, i4, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5485));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 5488))+8);
  i1 = i1==0;
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5627));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5611))+12);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 5630))+8);
  *(OOC_INT32*)((_check_pointer(i0, 5611))+12) = (i2+i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5653))+4);
  i1 = _check_pointer(i1, 5660);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5662))+12);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(i2, i3, OOC_UINT32, 5660))) = (OOC_CHAR8)'\000';
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5708))+4);
  i1 = _check_pointer(i1, 5715);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5717))+12);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 5715)));
  _assert((i0==(OOC_CHAR8)'\000'), 127, 5699);
  return OOC_TRUE;
  goto l25;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5527))+4);
  i1 = _check_pointer(i1, 5534);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5536))+12);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 5534)));
  _assert((i0==(OOC_CHAR8)'\000'), 127, 5518);
  return OOC_FALSE;
  goto l25;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3758));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3761))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3766))+8);
  i1 = i1!=5;
  if (!i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3811))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3831));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3811))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3834))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3820)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i2);
l24:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3867))+4);
  i1 = _check_pointer(i1, 3874);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3876))+12);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 3874)));
  _assert((i0==(OOC_CHAR8)'\000'), 127, 3858);
  return OOC_FALSE;
l25:
  _failed_function(2999); return 0;
  ;
}

OOC_CHAR8 OOC_Scanner_InputBuffer__BufferDesc_EndOfBuffer(OOC_Scanner_InputBuffer__Buffer b, OOC_INT32 cpos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = cpos;
  _assert((0<=i0), 127, 6125);
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 6166))+12);
  _assert((i0<=i2), 127, 6149);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6195))+4);
  i2 = _check_pointer(i2, 6202);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 6202)));
  _assert((i2==(OOC_CHAR8)'\000'), 127, 6186);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6243))+12);
  return (i0==i1);
  ;
}

void OOC_Scanner_InputBuffer__BufferDesc_Close(OOC_Scanner_InputBuffer__Buffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6506));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6509));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6506));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6509));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6515)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i2);
  *(OOC_INT32*)(_check_pointer(i0, 6529)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6546))+4) = (OOC_INT32)0;
  return;
  ;
}

OOC_Scanner_InputBuffer__Buffer OOC_Scanner_InputBuffer__New(Channel__Channel ch, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Scanner_InputBuffer__Buffer b;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__Buffer.baseTypes[0]);
  b = (OOC_Scanner_InputBuffer__Buffer)i0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6958)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  *(OOC_INT32*)(_check_pointer(i0, 6949)) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 6978))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7003))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7031))+12) = 0;
  i2 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 7056))+20) = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7088));
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7232));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7220)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i2, (Msg__Msg)i0);
  return (OOC_Scanner_InputBuffer__Buffer)(OOC_INT32)0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 7127))+4) = ((OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 16352));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7158))+4);
  i1 = _check_pointer(i1, 7165);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 7165))) = (OOC_CHAR8)'\000';
  return (OOC_Scanner_InputBuffer__Buffer)i0;
l4:
  _failed_function(6586); return 0;
  ;
}

void OOC_OOC_Scanner_InputBuffer_init(void) {

  return;
  ;
}

/* --- */
