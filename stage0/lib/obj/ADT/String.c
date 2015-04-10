#include "ADT/String.d"
#include "__oo2c.h"

static OOC_INT8 ADT_String__CompareRegion(OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = pos;
  i1 = endPos;
  i2 = i1-i0;
  _assert((i2>=0), 127, 2038);
  i3 = i0>=0;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = i1<=source_0d;
  
l4:
  i4 = destPos;
  _assert(i3, 127, 2060);
  i3 = i4>=0;
  if (i3) goto l7;
  i2=OOC_FALSE;
  goto l8;
l7:
  i2 = (i4+i2)<=dest_0d;
  
l8:
  _assert(i2, 127, 2108);
  i2 = i0<i1;
  if (i2) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2198)));
  i2 = *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i4, dest_0d, OOC_UINT32, 2210)));
  i0 = i0==i2;
  
l13:
  if (!i0) goto l24;
l15_loop:
  i0 = pos;
  i0 = i0+1;
  i2 = destPos;
  i2 = i2+1;
  pos = i0;
  i3 = i0<i1;
  destPos = i2;
  if (i3) goto l18;
  i0=OOC_FALSE;
  goto l20;
l18:
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2198)));
  i2 = *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT32, 2210)));
  i0 = i0==i2;
  
l20:
  if (i0) goto l15_loop;
l24:
  i0 = pos;
  i1 = i0==i1;
  if (!i1) goto l27;
  return 0;
l27:
  i1 = destPos;
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 2307)));
  i1 = *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT32, 2319)));
  i0 = i0<i1;
  if (i0) goto l30;
  return 1;
  goto l31;
l30:
  return -1;
l31:
  _failed_function(1549); return 0;
  ;
}

static void ADT_String__CopyRegion(OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = pos;
  i1 = endPos;
  i2 = i1-i0;
  _assert((i2>=0), 127, 2752);
  i3 = i0>=0;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = i1<=source_0d;
  
l4:
  i4 = destPos;
  _assert(i3, 127, 2774);
  i3 = i4>=0;
  if (i3) goto l7;
  i2=OOC_FALSE;
  goto l8;
l7:
  i2 = (i4+i2)<=dest_0d;
  
l8:
  _assert(i2, 127, 2822);
  i0 = i0<i1;
  if (!i0) goto l16;
l11_loop:
  i0 = destPos;
  i2 = pos;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 2930)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT32, 2911))) = i3;
  i2 = i2+1;
  pos = i2;
  i2 = i2<i1;
  destPos = (i0+1);
  if (i2) goto l11_loop;
l16:
  return;
  ;
}

static OOC_INT32 ADT_String__ArraySize(OOC_INT32 size) {
  register OOC_INT32 i0;

  i0 = size;
  return (i0+1);
  ;
}

static void ADT_String__InitString(ADT_String__String str, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)str;
  ADT_Object__Init((ADT_Object__Object)i0);
  i1 = length;
  i2 = ADT_String__ArraySize(i1);
  *(OOC_INT32*)((_check_pointer(i0, 3664))+4) = ((OOC_INT32)RT0__NewObject(_td_ADT_String__CharArrayPtr.baseTypes[0], i2));
  *(OOC_INT32*)(_check_pointer(i0, 3697)) = i1;
  return;
  ;
}

void ADT_String__InitRegion(ADT_String__String str, OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 count;

  i0 = pos;
  i1 = endPos;
  i2 = i1-i0;
  count = i2;
  _assert((i2>=0), 127, 4014);
  i3 = (OOC_INT32)str;
  ADT_String__InitString((ADT_String__String)i3, i2);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4097))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4097))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 4103)), 0);
  ADT_String__CopyRegion((void*)(OOC_INT32)source, source_0d, i0, i1, (void*)(_check_pointer(i4, 4103)), i5, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4115))+4);
  i0 = _check_pointer(i0, 4121);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 4121))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void ADT_String__Init(ADT_String__String str, OOC_CHAR8 source[], OOC_LEN source_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(0, source_0d, OOC_UINT32, 4348)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT32, 4348)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)str;
  ADT_String__InitRegion((ADT_String__String)i1, (void*)(OOC_INT32)source, source_0d, 0, i0);
  return;
  ;
}

ADT_String__String ADT_String__StringDesc_Map(ADT_String__String str, ADT_String__MapCharProc p) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_String__String res;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_String__String.baseTypes[0]);
  res = (ADT_String__String)i0;
  i1 = (OOC_INT32)str;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 4677));
  ADT_String__InitString((ADT_String__String)i0, i2);
  i2 = *(OOC_INT32*)(_check_pointer(i1, 4706));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3 = (OOC_INT32)p;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4726))+4);
  i5 = _check_pointer(i5, 4732);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4744))+4);
  i7 = _check_pointer(i7, 4750);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i4, i8, OOC_UINT32, 4750)));
  i7 = ((OOC_CHAR8 (*)(OOC_CHAR8 c))i3)(i7);
  *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 4732))) = i7;
  i4 = i4+1;
  i5 = i4<=i2;
  i = i4;
  if (i5) goto l3_loop;
l8:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4768))+4);
  i2 = _check_pointer(i2, 4774);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 4778));
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 4774))) = (OOC_CHAR8)'\000';
  return (ADT_String__String)i0;
  ;
}

ADT_String__String ADT_String__New(const OOC_CHAR8 source[], OOC_LEN source_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_String__String.baseTypes[0]);
  ADT_String__Init((ADT_String__String)i0, (void*)(OOC_INT32)source, source_0d);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String ADT_String__NewRegion(const OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_String__String.baseTypes[0]);
  i1 = pos;
  i2 = endPos;
  ADT_String__InitRegion((ADT_String__String)i0, (void*)(OOC_INT32)source, source_0d, i1, i2);
  return (ADT_String__String)i0;
  ;
}

ADT_String__String ADT_String__StringDesc_ToString(ADT_String__String str) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)str;
  return (ADT_String__String)i0;
  ;
}

ADT_String__String ADT_String__StringDesc_Concat(ADT_String__String str, ADT_String__String source) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  ADT_String__String res;
  OOC_INT32 length;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_String__String.baseTypes[0]);
  res = (ADT_String__String)i0;
  i1 = (OOC_INT32)str;
  i2 = (OOC_INT32)source;
  i3 = *(OOC_INT32*)(_check_pointer(i1, 5810));
  i4 = *(OOC_INT32*)(_check_pointer(i2, 5826));
  i3 = i3+i4;
  length = i3;
  ADT_String__InitString((ADT_String__String)i0, i3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5878))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5878))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5905))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5905))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 5884)), 0);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 5911)), 0);
  i8 = *(OOC_INT32*)(_check_pointer(i1, 5893));
  ADT_String__CopyRegion((void*)(_check_pointer(i4, 5884)), i5, 0, i8, (void*)(_check_pointer(i6, 5911)), i7, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5937))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5937))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5967))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5967))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 5979));
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 5973)), 0);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 5955));
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 5943)), 0);
  ADT_String__CopyRegion((void*)(_check_pointer(i4, 5943)), i5, 0, i2, (void*)(_check_pointer(i6, 5973)), i7, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5994))+4);
  i1 = _check_pointer(i1, 6000);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 6000))) = (OOC_CHAR8)'\000';
  return (ADT_String__String)i0;
  ;
}

OOC_CHAR8 ADT_String__StringDesc_GetChar(ADT_String__String str, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 6203));
  i2 = pos;
  _assert((i2<=i1), 127, 6186);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6225))+4);
  i0 = _check_pointer(i0, 6231);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 6232)));
  return i0;
  ;
}

void ADT_String__StringDesc_GetChars(ADT_String__String s, OOC_CHAR8 destination[], OOC_LEN destination_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 limit;

  i0 = destination_0d-1;
  limit = i0;
  i1 = (OOC_INT32)s;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 6533));
  i2 = i2<i0;
  if (!i2) goto l4;
  i0 = *(OOC_INT32*)(_check_pointer(i1, 6564));
  limit = i0;
  
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6591))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6591))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6597)), 0);
  ADT_String__CopyRegion((void*)(_check_pointer(i2, 6597)), i1, 0, i0, (void*)(OOC_INT32)destination, destination_0d, 0);
  *(OOC_UINT8*)((OOC_INT32)destination+(_check_index(i0, destination_0d, OOC_UINT32, 6640))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void ADT_String__StringDesc_GetCharsRegion(ADT_String__String str, OOC_INT32 pos, OOC_INT32 endPos, OOC_CHAR8 destination[], OOC_LEN destination_0d, OOC_INT32 destPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 count;

  i0 = pos;
  i1 = endPos;
  i2 = i1-i0;
  i3 = destPos;
  i4 = i3+i2;
  count = i2;
  _assert((i4<=destination_0d), 127, 6969);
  i2 = (OOC_INT32)str;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7030))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7030))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7036)), 0);
  ADT_String__CopyRegion((void*)(_check_pointer(i5, 7036)), i2, i0, i1, (void*)(OOC_INT32)destination, destination_0d, i3);
  *(OOC_UINT8*)((OOC_INT32)destination+(_check_index(i4, destination_0d, OOC_UINT32, 7089))) = (OOC_CHAR8)'\000';
  return;
  ;
}

ADT_String__String ADT_String__StringDesc_Extract(ADT_String__String str, OOC_INT32 startPos, OOC_INT32 numberToExtract) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)str;
  i1 = startPos;
  i2 = numberToExtract;
  i2 = i1+i2;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 7402));
  _assert((i2<=i3), 127, 7362);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7434))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7434))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7440)), 0);
  i0 = (OOC_INT32)ADT_String__NewRegion((void*)(_check_pointer(i3, 7440)), i0, i1, i2);
  return (ADT_String__String)i0;
  ;
}

OOC_INT32 ADT_String__StringDesc_Size(ADT_String__String str) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)str;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 7654));
  return i0;
  ;
}

OOC_INT32 ADT_String__StringDesc_IndexOf(ADT_String__String str, OOC_CHAR8 _char, OOC_INT32 pos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 endpos;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8013));
  i2 = pos;
  i2 = i2!=i1;
  endpos = i1;
  if (!i2) goto l11;
  i2 = _char;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8064))+4);
  i3 = _check_pointer(i3, 8071);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = pos;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 8071)));
  i3 = i3==i2;
  if (!i3) goto l6;
  return i5;
l6:
  i3 = i5+1;
  i4 = i3!=i1;
  pos = i3;
  if (i4) goto l3_loop;
l11:
  return -1;
  ;
}

OOC_INT32 ADT_String__StringDesc_LastIndexOf(ADT_String__String str, OOC_CHAR8 _char, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = endpos;
  i0 = i0-1;
  i1 = i0!=-1;
  endpos = i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)str;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8524))+4);
  i1 = _check_pointer(i1, 8531);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 8531)));
  i2 = _char;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _char;
  i2 = (OOC_INT32)str;
  
l8_loop:
  i0 = i0-1;
  endpos = i0;
  i3 = i0!=-1;
  if (i3) goto l11;
  i3=OOC_FALSE;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8524))+4);
  i3 = _check_pointer(i3, 8531);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 8531)));
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l17:
  return i0;
  ;
}

OOC_INT8 ADT_String__StringDesc_Compare(ADT_String__String str, ADT_String__String source) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)source;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 9168));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9184));
  i2 = i2>i3;
  if (i2) goto l11;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 9357));
  i3 = *(OOC_INT32*)(_check_pointer(i0, 9341));
  i2 = i3<i2;
  if (i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9536))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9536))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9566))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9566))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9572)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 9551));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9542)), 0);
  i0 = ADT_String__CompareRegion((void*)(_check_pointer(i2, 9542)), i3, 0, i0, (void*)(_check_pointer(i4, 9572)), i1, 0);
  return i0;
  goto l16;
l5:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9401))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9401))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9431))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9431))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9437)), 0);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 9416));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 9407)), 0);
  i0 = ADT_String__CompareRegion((void*)(_check_pointer(i2, 9407)), i3, 0, i0, (void*)(_check_pointer(i4, 9437)), i1, 0);
  i1 = i0==0;
  if (i1) goto l8;
  return i0;
  goto l16;
l8:
  return -1;
  goto l16;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9228))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9228))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9261))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9261))+4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9267)), 0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9246));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9234)), 0);
  i0 = ADT_String__CompareRegion((void*)(_check_pointer(i2, 9234)), i0, 0, i1, (void*)(_check_pointer(i3, 9267)), i4, 0);
  i1 = i0==0;
  if (i1) goto l14;
  return i0;
  goto l16;
l14:
  return 1;
l16:
  _failed_function(8642); return 0;
  ;
}

OOC_INT8 ADT_String__StringDesc_CompareRegionArray(ADT_String__String str, OOC_INT32 pos, OOC_INT32 endPos, const OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 srcPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10016))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10016))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10022)), 0);
  i2 = pos;
  i3 = endPos;
  i4 = srcPos;
  i0 = ADT_String__CompareRegion((void*)(_check_pointer(i1, 10022)), i0, i2, i3, (void*)(OOC_INT32)source, source_0d, i4);
  return i0;
  ;
}

OOC_INT8 ADT_String__StringDesc_CompareRegion(ADT_String__String str, OOC_INT32 pos, OOC_INT32 endPos, ADT_String__String source, OOC_INT32 srcPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10476))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10476))+4);
  i2 = (OOC_INT32)source;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10504))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10504))+4);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10482)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10510)), 0);
  i4 = pos;
  i5 = endPos;
  i6 = srcPos;
  i0 = ADT_String__CompareRegion((void*)(_check_pointer(i1, 10482)), i0, i4, i5, (void*)(_check_pointer(i3, 10510)), i2, i6);
  return i0;
  ;
}

OOC_INT32 ADT_String__StringDesc_FindFirst(ADT_String__String str, ADT_String__String pattern, OOC_INT32 startPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 patternPos;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 10953));
  i2 = startPos;
  i1 = i2<i1;
  if (i1) goto l3;
  return -1;
  goto l18;
l3:
  patternPos = 0;
  i1 = (OOC_INT32)pattern;
  i2=0;
l4_loop:
  i3 = *(OOC_INT32*)(_check_pointer(i1, 11032));
  i3 = i2==i3;
  if (!i3) goto l6;
  goto l15;
l6:
  i3 = *(OOC_INT32*)(_check_pointer(i0, 11157));
  i4 = startPos;
  i3 = i4==i3;
  if (!i3) goto l8;
  goto l13;
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11262))+4);
  i3 = _check_pointer(i3, 11268);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11289))+4);
  i6 = _check_pointer(i6, 11295);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i4, i5, OOC_UINT32, 11269)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 11296)));
  i3 = i3==i5;
  if (!i3) goto l10;
  goto l11;
l10:
  i2 = (i4-i2)+1;
  startPos = i2;
  patternPos = 0;
  i3=i2;i2=0;
  goto l4_loop;
l11:
  i3 = i4+1;
  startPos = i3;
  i2 = i2+1;
  patternPos = i2;
  
  goto l4_loop;
l13:
  return -1;
  
  goto l4_loop;
l15:
  i3 = startPos;
  return (i3-i2);
  
  goto l4_loop;
l18:
  _failed_function(10567); return 0;
  ;
}

OOC_INT32 ADT_String__StringDesc_FindLast(ADT_String__String str, ADT_String__String pattern, OOC_INT32 startPos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 limit;
  OOC_INT32 patternPos;

  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)pattern;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 12171));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 12188));
  i2 = i2-i3;
  i3 = startPos;
  i3 = i3>i2;
  limit = i2;
  if (!i3) goto l3;
  startPos = i2;
l3:
  i2 = startPos;
  i2 = i2>=0;
  if (i2) goto l6;
  return -1;
  goto l21;
l6:
  patternPos = 0;
  i2=0;
l7_loop:
  i3 = *(OOC_INT32*)(_check_pointer(i1, 12359));
  i3 = i2==i3;
  if (!i3) goto l9;
  goto l18;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12473))+4);
  i3 = _check_pointer(i3, 12479);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = startPos;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12500))+4);
  i6 = _check_pointer(i6, 12506);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 12480)));
  i4 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT32, 12507)));
  i3 = i3!=i4;
  if (i3) goto l12;
  startPos = (i5+1);
  i2 = i2+1;
  patternPos = i2;
  
  goto l7_loop;
l12:
  i3 = i5>i2;
  if (!i3) goto l14;
  goto l15;
l14:
  return -1;
  
  goto l7_loop;
l15:
  startPos = ((i5-i2)-1);
  patternPos = 0;
  i2=0;
  goto l7_loop;
l18:
  i3 = startPos;
  return (i3-i2);
  
  goto l7_loop;
l21:
  _failed_function(11699); return 0;
  ;
}

OOC_CHAR8 ADT_String__StringDesc_StartsWith(ADT_String__String str, ADT_String__String prefix) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)prefix;
  i1 = (OOC_INT32)str;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 13203));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13216));
  i2 = i2>i3;
  if (i2) goto l3;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 13292));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13268)))), ADT_String__StringDesc_CompareRegion)),ADT_String__StringDesc_CompareRegion)((ADT_String__String)i1, 0, i2, (ADT_String__String)i0, 0);
  return (i0==0);
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(13044); return 0;
  ;
}

OOC_CHAR8 ADT_String__StringDesc_EndsWith(ADT_String__String str, ADT_String__String suffix) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)suffix;
  i1 = (OOC_INT32)str;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 13520));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13533));
  i2 = i2>i3;
  if (i2) goto l3;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 13625));
  i3 = *(OOC_INT32*)(_check_pointer(i1, 13611));
  i4 = *(OOC_INT32*)(_check_pointer(i1, 13637));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13593)))), ADT_String__StringDesc_CompareRegion)),ADT_String__StringDesc_CompareRegion)((ADT_String__String)i1, (i3-i2), i4, (ADT_String__String)i0, 0);
  return (i0==0);
  goto l4;
l3:
  return OOC_FALSE;
l4:
  _failed_function(13365); return 0;
  ;
}

OOC_CHAR8 ADT_String__ToUpper(OOC_CHAR8 c) {
  register OOC_INT32 i0;

  i0 = c;
  return (_cap(i0));
  ;
}

OOC_CHAR8 ADT_String__ToLower(OOC_CHAR8 c) {
  register OOC_INT32 i0,i1;

  i0 = c;
  i1 = i0>=(OOC_CHAR8)'A';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i0<=(OOC_CHAR8)'Z';
  
l5:
  if (i1) goto l7;
  return i0;
  goto l8;
l7:
  return ((97+i0)-65);
l8:
  _failed_function(13929); return 0;
  ;
}

OOC_INT32 ADT_String__StringDesc_HashCode(ADT_String__String str) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_INT32 x;
  OOC_INT32 p;

  i0 = (OOC_INT32)str;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 14465));
  len = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14503))+4);
  i2 = _check_pointer(i2, 14510);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 14510)));
  i2 = _ash(i2,7);
  x = i2;
  i3 = 0!=i1;
  p = 0;
  if (i3) goto l3;
  i0=i2;
  goto l9;
l3:
  i3=0;
l4_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14702))+4);
  i4 = _check_pointer(i4, 14709);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 14709)));
  i2 = _type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, (1000003*i2)))^(_type_cast_fast(OOC_UINT32, OOC_UINT8, i4))));
  x = i2;
  i3 = i3+1;
  i4 = i3!=i1;
  p = i3;
  if (i4) goto l4_loop;
l8:
  i0=i2;
l9:
  return (_type_cast_fast(OOC_INT32, OOC_UINT32, ((_type_cast_fast(OOC_UINT32, OOC_INT32, i0))^(_type_cast_fast(OOC_UINT32, OOC_INT32, i1)))));
  ;
}

OOC_CHAR8 ADT_String__StringDesc_Equals(ADT_String__String str, ADT_Object__Object y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)y;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15185)))), &_td_ADT_String__StringDesc));
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)str;
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15216)))), &_td_ADT_String__StringDesc, 15216)), 15223));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15203));
  i1 = i1!=i2;
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l22;
  i1 = (OOC_INT32)str;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15289));
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l21;
  i3=0;
l13_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15318))+4);
  i4 = _check_pointer(i4, 15325);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15333)))), &_td_ADT_String__StringDesc, 15333)), 15340))+4);
  i6 = _check_pointer(i6, 15347);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 15325)));
  i5 = *(OOC_UINT8*)(i6+(_check_index(i3, i7, OOC_UINT32, 15347)));
  i4 = i4!=i5;
  if (!i4) goto l16;
  return OOC_FALSE;
l16:
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l13_loop;
l21:
  return OOC_TRUE;
  goto l23;
l22:
  return OOC_FALSE;
l23:
  _failed_function(14873); return 0;
  ;
}

void ADT_String__StringDesc_Load(ADT_String__String str, ADT_Object__Reader r) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 length;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)str;
  ADT_Object__ObjectDesc_Load((ADT_Object__Object)i1, (ADT_Object__Reader)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15551)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&length);
  i2 = length;
  ADT_String__InitString((ADT_String__String)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15621))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 15637));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15605)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 15628)), -1, 0, i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15668))+4);
  i0 = _check_pointer(i0, 15675);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15679));
  *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT32, 15675))) = (OOC_CHAR8)'\000';
  return;
  ;
}

void ADT_String__StringDesc_Store(ADT_String__String str, ADT_Object__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)str;
  ADT_Object__ObjectDesc_Store((ADT_Object__Object)i1, (ADT_Object__Writer)i0);
  i2 = *(OOC_INT32*)(_check_pointer(i1, 15809));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15794)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15842))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 15858));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15825)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i0, (void*)(_check_pointer(i2, 15849)), -1, 0, i1);
  return;
  ;
}

void OOC_ADT_String_init(void) {

  return;
  ;
}

/* --- */
