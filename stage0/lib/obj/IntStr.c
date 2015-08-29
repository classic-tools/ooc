#include "IntStr.d"
#include "__oo2c.h"

void IntStr__StrToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_INT32 *_int, OOC_INT8 *res) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = IntConv__FormatInt((void*)(OOC_INT32)str, str_0d);
  i1 = i0==0;
  *res = i0;
  if (!i1) goto l4;
  i0 = IntConv__ValueInt((void*)(OOC_INT32)str, str_0d);
  *_int = i0;
l4:
  return;
  ;
}

static void IntStr__Reverse(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 start, OOC_INT16 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = start;
  i1 = end;
  i0 = i0<i1;
  if (!i0) goto l8;
l3_loop:
  i0 = start;
  i1 = end;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2298)));
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 2324)));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2310))) = i3;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 2334))) = i2;
  i0 = i0+1;
  start = i0;
  i1 = i1-1;
  i0 = i0<i1;
  end = i1;
  if (i0) goto l3_loop;
l8:
  return;
  ;
}

void IntStr__IntToStr(OOC_INT32 _int, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 b[12];

  i0 = _int;
  i1 = i0==(-2147483647-1);
  if (i1) goto l12;
  i1 = i0<0;
  if (i1) goto l5;
  i0=0;
  goto l6;
l5:
  *(OOC_UINT8*)((OOC_INT32)b+(_check_index(0, 12, OOC_UINT8, 2938))) = (OOC_CHAR8)'-';
  _int = (-i0);
  i0=1;
l6:
  i1=i0;
l7_loop:
  i2 = _int;
  *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i1, 12, OOC_UINT16, 3112))) = ((_mod(i2,10))+48);
  i2 = _div(i2,10);
  _int = i2;
  i2 = i2==0;
  i1 = i1+1;
  if (!i2) goto l7_loop;
l11:
  *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i1, 12, OOC_UINT16, 3207))) = (OOC_CHAR8)'\000';
  IntStr__Reverse((void*)(OOC_INT32)b, 12, i0, (i1-1));
  goto l13;
l12:
  _copy_8((const void*)"-2147483648",(void*)(OOC_INT32)b,12);
l13:
  _copy_8((const void*)(OOC_INT32)b,(void*)(OOC_INT32)str,str_0d);
  return;
  ;
}

void OOC_IntStr_init(void) {

  return;
  ;
}

/* --- */
