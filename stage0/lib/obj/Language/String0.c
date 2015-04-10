#include "Language/String0.d"
#include "__oo2c.h"

static Language_String0__String8 Language_String0__NewString8(OOC_INT32 source, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2;
  Language_String0__String8 s;
  Language_String0__CharsLatin1 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String8.baseTypes[0]);
  i1 = length;
  s = (Language_String0__String8)i0;
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsLatin1.baseTypes[0], (i1+1));
  d = (Language_String0__CharsLatin1)i2;
  *(OOC_INT32*)(_check_pointer(i0, 5876)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 5901))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 5950)),i1);
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 5979);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 5979))) = (OOC_CHAR8)'\000';
  i0 = (OOC_INT32)s;
  return (Language_String0__String8)i0;
  ;
}

static Language_String0__String32 Language_String0__NewString32(OOC_INT32 source, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2;
  Language_String0__String32 s;
  Language_String0__CharsUTF32 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  i1 = length;
  s = (Language_String0__String32)i0;
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], (i1+1));
  d = (Language_String0__CharsUTF32)i2;
  *(OOC_INT32*)(_check_pointer(i0, 6191)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 6216))+4) = i2;
  i0 = source;
  _move_block(i0,(_check_pointer(i2, 6265)),(i1*4));
  i0 = (OOC_INT32)d;
  i0 = _check_pointer(i0, 6294);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = length;
  *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 6294))*4) = 0;
  i0 = (OOC_INT32)s;
  return (Language_String0__String32)i0;
  ;
}

static void Language_String0__InitBuffer(Language_String0__Buffer b, OOC_INT32 initialCapacity) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = initialCapacity;
  *(OOC_INT32*)(_check_pointer(i0, 6417)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 6453))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 6477))+8) = ((OOC_INT32)RT0__NewObject(_td_Language_String0__CharsLatin1.baseTypes[0], i1));
  *(OOC_INT32*)((_check_pointer(i0, 6509))+12) = (OOC_INT32)0;
  return;
  ;
}

Language_String0__Buffer Language_String0__NewBuffer(OOC_INT32 initialCapacity) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String0__Buffer.baseTypes[0]);
  i1 = initialCapacity;
  Language_String0__InitBuffer((Language_String0__Buffer)i0, i1);
  return (Language_String0__Buffer)i0;
  ;
}

Language_String0__String Language_String0__BufferDesc_ToString(Language_String0__Buffer b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6773))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6900))+12);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 6913))+4);
  i0 = (OOC_INT32)Language_String0__NewString32((_check_pointer(i1, 6908)), i0);
  return (Language_String0__String)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6830))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 6842))+4);
  i0 = (OOC_INT32)Language_String0__NewString8((_check_pointer(i1, 6837)), i0);
  return (Language_String0__String)i0;
l4:
  _failed_function(6735); return 0;
  ;
}

void Language_String0__BufferDesc_Clear(Language_String0__Buffer b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 6993))+4) = 0;
  return;
  ;
}

Language_String0__CharsLatin1 Language_String0__BufferDesc_CharsLatin1(Language_String0__Buffer b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7094))+8);
  _assert((i1!=(OOC_INT32)0), 127, 7085);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7122))+8);
  return (Language_String0__CharsLatin1)i0;
  ;
}

void Language_String0__BufferDesc_EnsureCapacity(Language_String0__Buffer b, OOC_INT32 cap) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 newCap;
  Language_String0__CharsLatin1 new8;
  Language_String0__CharsUTF32 new32;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7294));
  i2 = cap;
  i1 = i1<i2;
  if (!i1) goto l16;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 7334));
  i3 = i1<i2;
  newCap = i1;
  if (!i3) goto l11;
l6_loop:
  i1 = i1*2;
  i3 = i1<i2;
  newCap = i1;
  if (i3) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i0, 7422)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7462))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], i1);
  new32 = (Language_String0__CharsUTF32)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7692))+12);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7726))+4);
  _move_block((_check_pointer(i2, 7700)),(_check_pointer(i1, 7721)),(i0*4));
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)new32;
  *(OOC_INT32*)((_check_pointer(i0, 7757))+12) = i1;
  goto l16;
l14:
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsLatin1.baseTypes[0], i1);
  new8 = (Language_String0__CharsLatin1)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7541))+8);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7573))+4);
  _move_block((_check_pointer(i2, 7548)),(_check_pointer(i1, 7568)),i0);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)new8;
  *(OOC_INT32*)((_check_pointer(i0, 7604))+8) = i1;
l16:
  return;
  ;
}

void Language_String0__BufferDesc_ConvertTo32(Language_String0__Buffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7908))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7915)), 0);
  *(OOC_INT32*)((_check_pointer(i0, 7893))+12) = ((OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], i1));
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7939))+4);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7961))+12);
  i3 = _check_pointer(i3, 7969);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7981))+8);
  i5 = _check_pointer(i5, 7988);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i2, i6, OOC_UINT32, 7988)));
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7969))*4) = i5;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT32*)((_check_pointer(i0, 8008))+8) = (OOC_INT32)0;
  return;
  ;
}

void Language_String0__BufferDesc_AppendLatin1Region(Language_String0__Buffer b, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  len = i2;
  i3 = (OOC_INT32)b;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 8262))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8244)))), Language_String0__BufferDesc_EnsureCapacity)),Language_String0__BufferDesc_EnsureCapacity)((Language_String0__Buffer)i3, (i4+i2));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8286))+8);
  i4 = i4!=(OOC_INT32)0;
  if (i4) goto l11;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 8456))+4);
  i1 = i1!=i0;
  i = i2;
  if (!i1) goto l12;
  i1=i2;
l5_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8504))+12);
  i2 = _check_pointer(i2, 8512);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i5 = start;
  i6 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i5, data_0d, OOC_UINT32, 8527)));
  *(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 8512))*4) = i6;
  i2 = i5+1;
  start = i2;
  i1 = i1+1;
  i2 = i2!=i0;
  i = i1;
  if (i2) goto l5_loop;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8379))+8);
  i0 = _check_pointer(i0, 8386);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 8388))+4);
  _move_block(((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 8339))),(i0+(_check_index(i3, i4, OOC_UINT32, 8386))),i2);
l12:
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8597))+4);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 8597))+4) = (i1+i2);
  return;
  ;
}

void Language_String0__BufferDesc_AppendLatin1Char(Language_String0__Buffer b, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8723))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8705)))), Language_String0__BufferDesc_EnsureCapacity)),Language_String0__BufferDesc_EnsureCapacity)((Language_String0__Buffer)i0, (i1+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8745))+8);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8812))+12);
  i1 = _check_pointer(i1, 8819);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8821))+4);
  i4 = ch;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 8819))*4) = i4;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8772))+8);
  i1 = _check_pointer(i1, 8778);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8780))+4);
  i4 = ch;
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 8778))) = i4;
l4:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8861))+4);
  *(OOC_INT32*)((_check_pointer(i0, 8861))+4) = (i1+1);
  return;
  ;
}

void Language_String0__BufferDesc_AppendUTF32Region(Language_String0__Buffer b, const OOC_INT32 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;

  i0 = end;
  i1 = start;
  i0 = i0-i1;
  len = i0;
  i2 = (OOC_INT32)b;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 9110))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9092)))), Language_String0__BufferDesc_EnsureCapacity)),Language_String0__BufferDesc_EnsureCapacity)((Language_String0__Buffer)i2, (i3+i0));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9134))+12);
  i3 = i3==(OOC_INT32)0;
  if (!i3) goto l4;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9162)))), Language_String0__BufferDesc_ConvertTo32)),Language_String0__BufferDesc_ConvertTo32)((Language_String0__Buffer)i2);
l4:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9255))+12);
  i3 = _check_pointer(i3, 9263);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 9265))+4);
  _move_block(((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 9217))*4),(i3+(_check_index(i2, i4, OOC_UINT32, 9263))*4),(i0*4));
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 9320))+4);
  i2 = len;
  *(OOC_INT32*)((_check_pointer(i0, 9320))+4) = (i1+i2);
  return;
  ;
}

void Language_String0__BufferDesc_AppendString(Language_String0__Buffer b, Language_String0__String s) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)s;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9429)))), &_td_Language_String0__String8Desc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9510)))), &_td_Language_String0__String32Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9507)))), 9507);
  goto l11;
l5:
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9550))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9560));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9531)))), Language_String0__BufferDesc_EnsureCapacity)),Language_String0__BufferDesc_EnsureCapacity)((Language_String0__Buffer)i1, (i2+i3));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9582))+12);
  i2 = i2==(OOC_INT32)0;
  if (!i2) goto l8;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9612)))), Language_String0__BufferDesc_ConvertTo32)),Language_String0__BufferDesc_ConvertTo32)((Language_String0__Buffer)i1);
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9668))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9708))+12);
  i3 = _check_pointer(i3, 9716);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 9718))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 9749));
  _move_block((_check_pointer(i2, 9674)),(i3+(_check_index(i1, i4, OOC_UINT32, 9716))*4),(i0*4));
  goto l11;
l10:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9472))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9472))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9478)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 9485));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9449)))), Language_String0__BufferDesc_AppendLatin1Region)),Language_String0__BufferDesc_AppendLatin1Region)((Language_String0__Buffer)i1, (void*)(_check_pointer(i2, 9478)), i3, 0, i0);
l11:
  return;
  ;
}

Language_String0__String8 Language_String0__NewLatin1(const OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 10078)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 10078)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Language_String0__NewString8((OOC_INT32)str, i0);
  return (Language_String0__String8)i0;
  ;
}

Language_String0__String8 Language_String0__NewLatin1Region(const OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = start;
  i1 = end;
  i0 = (OOC_INT32)Language_String0__NewString8(((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 10546))), (i1-i0));
  return (Language_String0__String8)i0;
  ;
}

Language_String0__String8 Language_String0__NewLatin1Char(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_String0__NewString8((OOC_INT32)&ch, 1);
  return (Language_String0__String8)i0;
  ;
}

Language_String0__String Language_String0__NewUCS2(const OOC_CHAR16 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  Language_String0__String32 s;
  Language_String0__CharsUTF32 d;
  OOC_INT32 j;

  i = 0;
  i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 11209))*2);
  i0 = i0!=(OOC_CHAR16)0;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 11209))*2);
  i1 = i1!=(OOC_CHAR16)0;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  s = (Language_String0__String32)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], (i0+1));
  d = (Language_String0__CharsUTF32)i2;
  *(OOC_INT32*)(_check_pointer(i1, 11284)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 11304))+4) = i2;
  i3 = 0<=i0;
  j = 0;
  if (!i3) goto l17;
  i3=0;
l12_loop:
  i4 = _check_pointer(i2, 11347);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT32, 11361))*2);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11347))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i0;
  j = i3;
  if (i4) goto l12_loop;
l17:
  return (Language_String0__String)i1;
  ;
}

Language_String0__String Language_String0__NewUCS2Region(const OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  Language_String0__String32 s;
  Language_String0__CharsUTF32 d;
  OOC_INT32 j;

  i0 = end;
  i1 = start;
  i2 = i0-i1;
  i = i2;
  i3 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  s = (Language_String0__String32)i3;
  i4 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], (i2+1));
  d = (Language_String0__CharsUTF32)i4;
  *(OOC_INT32*)(_check_pointer(i3, 11895)) = i2;
  *(OOC_INT32*)((_check_pointer(i3, 11915))+4) = i4;
  i0 = i0-1;
  i5 = i1<=i0;
  j = i1;
  if (!i5) goto l8;
  i5=i1;
l3_loop:
  i6 = _check_pointer(i4, 11966);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT32, 11986))*2);
  *(OOC_INT32*)(i6+(_check_index((i5-i1), i7, OOC_UINT32, 11966))*4) = i8;
  i5 = i5+1;
  i6 = i5<=i0;
  j = i5;
  if (i6) goto l3_loop;
l8:
  i0 = _check_pointer(i4, 12006);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 12006))*4) = 0;
  return (Language_String0__String)i3;
  ;
}

Language_String0__String Language_String0__NewUCS2Char(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Language_String0__String32 s;
  Language_String0__CharsUTF32 d;

  i0 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  s = (Language_String0__String32)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], 2);
  d = (Language_String0__CharsUTF32)i1;
  *(OOC_INT32*)(_check_pointer(i0, 12365)) = 1;
  *(OOC_INT32*)((_check_pointer(i0, 12385))+4) = i1;
  i2 = _check_pointer(i1, 12403);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = ch;
  *(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 12403))*4) = i4;
  i1 = _check_pointer(i1, 12424);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 12424))*4) = 0;
  return (Language_String0__String)i0;
  ;
}

Language_String0__String Language_String0__NewUTF32Region(const OOC_INT32 str[], OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = start;
  i1 = end;
  i0 = (OOC_INT32)Language_String0__NewString32(((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 12879))*4), (i1-i0));
  return (Language_String0__String)i0;
  ;
}

Language_String0__String Language_String0__NewUTF32Char(OOC_INT32 ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Language_String0__NewString32((OOC_INT32)&ch, 1);
  return (Language_String0__String)i0;
  ;
}

Language_String0__String Language_String0__NewUTF32(const OOC_INT32 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_INT32*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 13501))*4);
  i0 = i0!=0;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_INT32*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 13501))*4);
  i1 = i1!=0;
  if (i1) goto l4_loop;
l9:
  i0 = (OOC_INT32)Language_String0__NewString32((OOC_INT32)str, i0);
  return (Language_String0__String)i0;
  ;
}

Language_String0__String Language_String0__Concat2(Language_String0__String s1, Language_String0__String s2) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Language_String0__String8 c8;
  Language_String0__String32 c32;
  OOC_INT32 i;

  i0 = (OOC_INT32)s1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13720)))), &_td_Language_String0__String8Desc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14661)))), &_td_Language_String0__String32Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14657)))), 14657);
  goto l40;
l5:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14688)))), &_td_Language_String0__String8Desc);
  if (i2) goto l12;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15075)))), &_td_Language_String0__String32Desc);
  if (i2) goto l10;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15071)))), 15071);
  goto l40;
l10:
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  c32 = (Language_String0__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15182));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 15172));
  *(OOC_INT32*)(_check_pointer(i2, 15159)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15225));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 15215));
  *(OOC_INT32*)((_check_pointer(i2, 15206))+4) = ((OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15270))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15313))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15344));
  _move_block((_check_pointer(i1, 15275)),(_check_pointer(i2, 15318)),(i0*4));
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15398))+4);
  i2 = (OOC_INT32)c32;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15441))+4);
  i2 = _check_pointer(i2, 15446);
  i3 = (OOC_INT32)s1;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15449));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15482));
  _move_block((_check_pointer(i1, 15403)),(i2+(_check_index(i3, i4, OOC_UINT32, 15446))*4),(4+i0*4));
  i0 = (OOC_INT32)c32;
  return (Language_String0__String)i0;
  goto l40;
l12:
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  c32 = (Language_String0__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14753));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14743));
  *(OOC_INT32*)(_check_pointer(i2, 14730)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 14796));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 14786));
  *(OOC_INT32*)((_check_pointer(i2, 14777))+4) = ((OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14841))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14884))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14915));
  _move_block((_check_pointer(i1, 14846)),(_check_pointer(i2, 14889)),(i0*4));
  i0 = (OOC_INT32)s2;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 14960));
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)c32;
  if (!i2) goto l20;
  i2 = (OOC_INT32)s1;
  i4=0;
l15_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 14984))+4);
  i5 = _check_pointer(i5, 14989);
  i6 = *(OOC_INT32*)(_check_pointer(i2, 14992));
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15012))+4);
  i8 = _check_pointer(i8, 15017);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(i4, i9, OOC_UINT32, 15017)));
  *(OOC_INT32*)(i5+(_check_index((i6+i4), i7, OOC_UINT32, 14989))*4) = i8;
  i4 = i4+1;
  i5 = i4<=i1;
  i = i4;
  if (i5) goto l15_loop;
l20:
  return (Language_String0__String)i3;
  goto l40;
l23:
  i1 = (OOC_INT32)s2;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13746)))), &_td_Language_String0__String8Desc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14213)))), &_td_Language_String0__String32Desc);
  if (i2) goto l28;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14209)))), 14209);
  goto l40;
l28:
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String32.baseTypes[0]);
  c32 = (Language_String0__String32)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14319));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14309));
  *(OOC_INT32*)(_check_pointer(i2, 14296)) = (i4+i3);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 14362));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 14352));
  *(OOC_INT32*)((_check_pointer(i2, 14343))+4) = ((OOC_INT32)RT0__NewObject(_td_Language_String0__CharsUTF32.baseTypes[0], ((i4+i3)+1)));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 14398));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l36;
  i4=0;
l31_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14424))+4);
  i5 = _check_pointer(i5, 14429);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14442))+4);
  i7 = _check_pointer(i7, 14447);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 14447)));
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 14429))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l31_loop;
l36:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14499))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14542))+4);
  i2 = _check_pointer(i2, 14547);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14550));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 14583));
  _move_block((_check_pointer(i3, 14504)),(i2+(_check_index(i0, i4, OOC_UINT32, 14547))*4),(4+i1*4));
  i0 = (OOC_INT32)c32;
  return (Language_String0__String)i0;
  goto l40;
l38:
  i2 = (OOC_INT32)RT0__NewObject(_td_Language_String0__String8.baseTypes[0]);
  c8 = (Language_String0__String8)i2;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13846));
  i4 = *(OOC_INT32*)(_check_pointer(i0, 13836));
  *(OOC_INT32*)(_check_pointer(i2, 13823)) = (i4+i3);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 13888));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 13878));
  *(OOC_INT32*)((_check_pointer(i2, 13869))+4) = ((OOC_INT32)RT0__NewObject(_td_Language_String0__CharsLatin1.baseTypes[0], ((i3+i1)+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13933))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13975))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14006));
  _move_block((_check_pointer(i1, 13938)),(_check_pointer(i2, 13980)),i0);
  i0 = (OOC_INT32)s2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14060))+4);
  i2 = (OOC_INT32)c8;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14102))+4);
  i2 = _check_pointer(i2, 14107);
  i3 = (OOC_INT32)s1;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 14110));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14143));
  _move_block((_check_pointer(i1, 14065)),(i2+(_check_index(i3, i4, OOC_UINT32, 14107))),(1+i0*1));
  i0 = (OOC_INT32)c8;
  return (Language_String0__String)i0;
l40:
  _failed_function(13608); return 0;
  ;
}

Language_String0__CharsLatin1 Language_String0__String8Desc_CharsLatin1(Language_String0__String8 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15642))+4);
  return (Language_String0__CharsLatin1)i0;
  ;
}

Language_String0__CharsUTF32 Language_String0__String32Desc_CharsUTF32(Language_String0__String32 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15741))+4);
  return (Language_String0__CharsUTF32)i0;
  ;
}

OOC_INT32 Language_String0__StringDesc_CharAt(Language_String0__String s, OOC_INT32 index) {

  _failed_function(15801); return 0;
  ;
}

OOC_INT32 Language_String0__String8Desc_CharAt(Language_String0__String8 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15927))+4);
  i0 = _check_pointer(i0, 15933);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = index;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 15933)));
  return i0;
  ;
}

OOC_INT32 Language_String0__String32Desc_CharAt(Language_String0__String32 s, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16034))+4);
  i0 = _check_pointer(i0, 16040);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = index;
  i0 = *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 16040))*4);
  return i0;
  ;
}

Language_String0__String Language_String0__StringDesc_Substring(Language_String0__String s, OOC_INT32 start, OOC_INT32 end) {

  _failed_function(16097); return 0;
  ;
}

Language_String0__String Language_String0__String8Desc_Substring(Language_String0__String8 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16264))+4);
  i0 = _check_pointer(i0, 16270);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = start;
  i3 = end;
  i0 = (OOC_INT32)Language_String0__NewString8((i0+(_check_index(i2, i1, OOC_UINT32, 16270))), (i3-i2));
  return (Language_String0__String)i0;
  ;
}

Language_String0__String Language_String0__String32Desc_Substring(Language_String0__String32 s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16419))+4);
  i0 = _check_pointer(i0, 16425);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = start;
  i3 = end;
  i0 = (OOC_INT32)Language_String0__NewString32((i0+(_check_index(i2, i1, OOC_UINT32, 16425))*4), (i3-i2));
  return (Language_String0__String)i0;
  ;
}

void OOC_Language_String0_init(void) {

  return;
  ;
}

/* --- */
