#include "Integers.d"
#include "__oo2c.h"

static Integers__Integer Integers__New(OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Integers__Integer d;
  OOC_INT32 i;

  i0 = n;
  i1 = (OOC_INT32)RT0__NewObject(_td_Integers__Integer.baseTypes[0], i0);
  d = (Integers__Integer)i1;
  i2 = _check_pointer(i1, 1925);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = i0-1;
  *(OOC_INT16*)(i2+(_check_index(0, i3, OOC_UINT8, 1925))*2) = 1;
  i2 = 1<=i0;
  i = 1;
  if (!i2) goto l8;
  i2=1;
l3_loop:
  i3 = _check_pointer(i1, 1964);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 1964))*2) = 0;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return (Integers__Integer)i1;
  ;
}

static Integers__Integer Integers__Copy(OOC_INT16 s[], OOC_LEN s_0d, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  Integers__Integer d;
  OOC_INT32 j;

  i0 = n;
  i0 = i0==0;
  if (!i0) goto l3;
  n = s_0d;
l3:
  i0 = *(OOC_INT16*)((OOC_INT32)s+(_check_index(1, s_0d, OOC_UINT32, 2305))*2);
  i0 = i0==0;
  i1 = n;
  if (i0) goto l6;
  i0=OOC_FALSE;
  goto l8;
l6:
  i0 = 1<(i1-1);
  
l8:
  if (i0) goto l10;
  i0=1;
  goto l20;
l10:
  i0 = i1-1;
  i2=1;
l11_loop:
  i2 = i2+1;
  i3 = *(OOC_INT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 2305))*2);
  i3 = i3==0;
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = i2<i0;
  
l16:
  if (i3) goto l11_loop;
l19:
  i0=i2;
l20:
  i0 = i0-1;
  i1 = i1-i0;
  i = i0;
  n = i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_Integers__Integer.baseTypes[0], i1);
  d = (Integers__Integer)i2;
  i1 = i1-1;
  i3 = 1<=i1;
  j = 1;
  if (!i3) goto l28;
  i3=1;
l23_loop:
  i4 = _check_pointer(i2, 2451);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_INT16*)((OOC_INT32)s+(_check_index((i0+i3), s_0d, OOC_UINT32, 2457))*2);
  *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 2451))*2) = i6;
  i3 = i3+1;
  i4 = i3<=i1;
  j = i3;
  if (i4) goto l23_loop;
l28:
  i0 = _check_pointer(i2, 2473);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i3 = *(OOC_INT16*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT8, 2479))*2);
  *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 2473))*2) = i3;
  return (Integers__Integer)i2;
  ;
}

static void Integers__Assign(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = w_0d-1;
  i1 = u_0d-1;
  _assert((i0>=i1), 105, 2696);
  i2 = i1>=1;
  if (!i2) goto l9;
l4_loop:
  i2 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i1, u_0d, OOC_UINT32, 2763))*2);
  i1 = i1+-1;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(i0, w_0d, OOC_UINT32, 2757))*2) = i2;
  i2 = i1>=1;
  i0 = i0-1;
  if (i2) goto l4_loop;
l9:
  i1 = i0>=1;
  if (!i1) goto l17;
l12_loop:
  i1 = i0+-1;
  i2 = i1>=1;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(i0, w_0d, OOC_UINT32, 2821))*2) = 0;
  if (!i2) goto l17;
  i0=i1;
  goto l12_loop;
l17:
  i0 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(0, u_0d, OOC_UINT8, 2869))*2);
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(0, w_0d, OOC_UINT8, 2863))*2) = i0;
  return;
  ;
}

static Integers__Integer Integers__Sub(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT16 y[], OOC_LEN y_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(x,OOC_INT16 ,x_0d)

  i0 = x_0d-1;
  OOC_INITIALIZE_VPAR(x__ref,x,OOC_INT16 ,(x_0d*2))
  i1 = i0>=1;
  if (i1) goto l3;
  i1=0;
  goto l17;
l3:
  i1 = y_0d-1;
  i2=i1;i1=i0;i3=0;
l4_loop:
  i4 = i2<1;
  i5 = _check_index(i1, x_0d, OOC_UINT32, 3170);
  if (i4) goto l7;
  i4 = *(OOC_INT16*)((OOC_INT32)y+(_check_index(i2, y_0d, OOC_UINT32, 3210))*2);
  
  goto l8;
l7:
  i4=0;
l8:
  i5 = *(OOC_INT16*)((OOC_INT32)x+i5*2);
  i6 = i5<i4;
  if (i6) goto l11;
  *(OOC_INT16*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 3291))*2) = ((i5-i4)+i3);
  i3=0;
  goto l12;
l11:
  *(OOC_INT16*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 3240))*2) = (((32768+i5)-i4)+i3);
  i3=-1;
l12:
  i1 = i1+-1;
  i4 = i1>=1;
  if (!i4) goto l16;
  i2 = i2-1;
  
  goto l4_loop;
l16:
  i1=i3;
l17:
  _assert((i1==0), 100, 3364);
  i0 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)x, x_0d, (i0+1));
  return (Integers__Integer)i0;
  ;
}

static Integers__Integer Integers__Add(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT16 y[], OOC_LEN y_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(x,OOC_INT16 ,x_0d)
  OOC_INT32 len;
  OOC_INT32 j;
  OOC_INT32 carry;
  OOC_INT32 i;
  OOC_INT32 xt;
  OOC_INT32 yt;
  OOC_INT32 r;
  Integers__Integer z;

  OOC_INITIALIZE_VPAR(x__ref,x,OOC_INT16 ,(x_0d*2))
  i0 = x_0d-1;
  len = i0;
  i1 = y_0d-1;
  j = i1;
  i2 = i0>=1;
  carry = 0;
  if (i2) goto l3;
  i1=0;
  goto l17;
l3:
  i2=i1;i1=i0;i3=0;
l4_loop:
  i4 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 3700))*2);
  xt = i4;
  i5 = i2<1;
  if (i5) goto l7;
  i5 = *(OOC_INT16*)((OOC_INT32)y+(_check_index(i2, y_0d, OOC_UINT32, 3740))*2);
  yt = i5;
  
  goto l8;
l7:
  yt = 0;
  i5=0;
l8:
  i3 = (i4+i5)+i3;
  r = i3;
  i4 = i3>=32768;
  if (i4) goto l11;
  *(OOC_INT16*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 3829))*2) = i3;
  carry = 0;
  i3=0;
  goto l12;
l11:
  *(OOC_INT16*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 3791))*2) = (i3-32768);
  carry = 1;
  i3=1;
l12:
  i2 = i2-1;
  i1 = i1+-1;
  i4 = i1>=1;
  j = i2;
  if (i4) goto l4_loop;
l16:
  i1=i3;
l17:
  i1 = i1==1;
  if (i1) goto l20;
  i0 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)x, x_0d, (i0+1));
  return (Integers__Integer)i0;
  goto l29;
l20:
  i1 = (OOC_INT32)RT0__NewObject(_td_Integers__Integer.baseTypes[0], (i0+2));
  z = (Integers__Integer)i1;
  i2 = 1<=i0;
  i = 1;
  if (!i2) goto l28;
  i2=1;
l23_loop:
  i3 = _check_pointer(i1, 3947);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = i2+1;
  i2 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(i2, x_0d, OOC_UINT32, 3955))*2);
  *(OOC_INT16*)(i3+(_check_index(i5, i4, OOC_UINT32, 3947))*2) = i2;
  i2 = i5<=i0;
  i = i5;
  if (!i2) goto l28;
  i2=i5;
  goto l23_loop;
l28:
  i0 = _check_pointer(i1, 3965);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT16*)(i0+(_check_index(1, i2, OOC_UINT8, 3965))*2) = 1;
  return (Integers__Integer)i1;
l29:
  _failed_function(3440); return 0;
  ;
}

static OOC_INT32 Integers__UCompare(OOC_INT16 x[], OOC_LEN x_0d, OOC_INT16 y[], OOC_LEN y_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = x_0d>y_0d;
  if (i0) goto l20;
  i0 = x_0d<y_0d;
  if (i0) goto l18;
  i0=0;
l5_loop:
  i0 = i0+1;
  i1 = i0==x_0d;
  if (!i1) goto l7;
  goto l15;
l7:
  i1 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(i0, x_0d, OOC_UINT32, 4520))*2);
  i2 = *(OOC_INT16*)((OOC_INT32)y+(_check_index(i0, y_0d, OOC_UINT32, 4525))*2);
  i1 = i1>i2;
  if (!i1) goto l9;
  goto l13;
l9:
  i1 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(i0, x_0d, OOC_UINT32, 4583))*2);
  i2 = *(OOC_INT16*)((OOC_INT32)y+(_check_index(i0, y_0d, OOC_UINT32, 4588))*2);
  i1 = i1<i2;
  if (!i1) goto l5_loop;
  return -1;
  goto l5_loop;
l13:
  return 1;
  goto l5_loop;
l15:
  return 0;
  goto l5_loop;
l18:
  return -1;
  goto l21;
l20:
  return 1;
l21:
  _failed_function(4058); return 0;
  ;
}

static void Integers__MultDigit(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d, OOC_INT32 digit, OOC_INT16 *c) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = u_0d-1;
  i1 = *c;
  i2 = digit;
  
l1_loop:
  i3 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i0, u_0d, OOC_UINT32, 4869))*2);
  i1 = (i3*i2)+i1;
  i3 = i0-1;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(i0, w_0d, OOC_UINT32, 4913))*2) = (_mod(i1,32768));
  i0 = i3==0;
  i1 = i1>>15;
  if (i0) goto l5;
  i0=i3;
  goto l1_loop;
l5:
  *c = i1;
  return;
  ;
}

static void Integers__MultAdd(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d, OOC_INT16 v[], OOC_LEN v_0d, OOC_INT32 digit, OOC_INT16 *c) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = u_0d-1;
  i1 = *c;
  i2 = digit;
  
l1_loop:
  i3 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i0, u_0d, OOC_UINT32, 5233))*2);
  i4 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i0, v_0d, OOC_UINT32, 5246))*2);
  i1 = ((i3*i2)+i1)+i4;
  i3 = i0-1;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(i0, w_0d, OOC_UINT32, 5273))*2) = (_mod(i1,32768));
  i0 = i3==0;
  i1 = i1>>15;
  if (i0) goto l5;
  i0=i3;
  goto l1_loop;
l5:
  *c = i1;
  return;
  ;
}

static void Integers__DivDigit(OOC_INT16 w[], OOC_LEN w_0d, OOC_INT16 u[], OOC_LEN u_0d, OOC_INT32 digit, OOC_INT32 *r) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = digit;
  i1 = u_0d-1;
  i2=0;i3=1;
l1_loop:
  i4 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i3, u_0d, OOC_UINT32, 5599))*2);
  i2 = (i2*32768)+i4;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(i3, w_0d, OOC_UINT32, 5611))*2) = (_div(i2,i0));
  i2 = _mod(i2,i0);
  i3 = i3+1;
  i4 = i3>i1;
  *r = i2;
  if (!i4) goto l1_loop;
l5:
  return;
  ;
}

static void Integers__ModDigit(OOC_INT16 u[], OOC_LEN u_0d, OOC_INT32 digit, OOC_INT32 *r) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = digit;
  i1 = u_0d-1;
  i2=0;i3=1;
l1_loop:
  i4 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i3, u_0d, OOC_UINT32, 5932))*2);
  i3 = i3+1;
  i5 = i3>i1;
  i2 = _mod(((i2*32768)+i4),i0);
  if (!i5) goto l1_loop;
l5:
  *r = i2;
  return;
  ;
}

static void Integers__ToString(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT16 base) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(x,OOC_INT16 ,x_0d)
  OOC_INT32 c;
  OOC_INT32 l;
  OOC_INT32 xl;
  OOC_INT32 z;
  OOC_INT32 d;
  auto OOC_CHAR8 Integers__ToString_IsZero();
    
    OOC_CHAR8 Integers__ToString_IsZero() {
      register OOC_INT32 i0,i1,i2;

      i0 = xl;
      i1 = 1<=i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(1, x_0d, OOC_UINT32, 6281))*2);
      i1 = i1==0;
      
l5:
      if (i1) goto l7;
      i1=1;
      goto l17;
l7:
      i1=1;
l8_loop:
      i1 = i1+1;
      i2 = i1<=i0;
      if (i2) goto l11;
      i2=OOC_FALSE;
      goto l13;
l11:
      i2 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 6281))*2);
      i2 = i2==0;
      
l13:
      if (i2) goto l8_loop;
l17:
      return (i1>i0);
      ;
    }


  OOC_INITIALIZE_VPAR(x__ref,x,OOC_INT16 ,(x_0d*2))
  i0 = *(OOC_INT16*)((OOC_INT32)x+(_check_index(0, x_0d, OOC_UINT8, 6395))*2);
  i0 = i0==-1;
  if (i0) goto l3;
  c = 0;
  i0=0;
  goto l4;
l3:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT8, 6414))) = (OOC_CHAR8)'-';
  c = 1;
  i0=1;
l4:
  *(OOC_INT16*)((OOC_INT32)x+(_check_index(0, x_0d, OOC_UINT8, 6449))*2) = 1;
  l = (s_0d-1);
  xl = (x_0d-1);
  z = i0;
  i0 = Integers__ToString_IsZero();
  i0 = !i0;
  if (i0) goto l7;
  i0=OOC_FALSE;
  goto l9;
l7:
  i0 = l;
  i1 = c;
  i0 = i1<i0;
  
l9:
  if (!i0) goto l24;
l11_loop:
  i0 = base;
  Integers__DivDigit((void*)(OOC_INT32)x, x_0d, (void*)(OOC_INT32)x, x_0d, i0, (void*)(OOC_INT32)&d);
  i0 = d;
  i1 = i0<10;
  i2 = c;
  if (i1) goto l14;
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 6745))) = ((i0-10)+65);
  goto l15;
l14:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 6691))) = (i0+48);
l15:
  c = (i2+1);
  i0 = Integers__ToString_IsZero();
  i0 = !i0;
  if (i0) goto l18;
  i0=OOC_FALSE;
  goto l20;
l18:
  i0 = l;
  i1 = c;
  i0 = i1<i0;
  
l20:
  if (i0) goto l11_loop;
l24:
  i0 = c;
  i1 = l;
  i2 = z;
  i3 = i2==i0;
  _assert((i0<i1), 103, 6807);
  if (i3) goto l35;
  i0 = i0-1;
  i1 = i2+((i0-i2)>>1);
  i3 = i2<=i1;
  if (!i3) goto l34;
  i3=i2;
l29_loop:
  i4 = (i0-i3)+i2;
  i5 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i3, s_0d, OOC_UINT32, 7085)));
  i6 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i4, s_0d, OOC_UINT32, 7097)));
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i3, s_0d, OOC_UINT32, 7091))) = i6;
  i3 = i3+1;
  i6 = i3<=i1;
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i4, s_0d, OOC_UINT32, 7107))) = i5;
  if (i6) goto l29_loop;
l34:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index((i0+1), s_0d, OOC_UINT32, 7138))) = (OOC_CHAR8)'\000';
  goto l36;
l35:
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT8, 6945))) = (OOC_CHAR8)'0';
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(1, s_0d, OOC_UINT8, 6962))) = (OOC_CHAR8)'\000';
l36:
  return;
  ;
}

static void Integers__Mult(OOC_INT16 w[], OOC_LEN w_0d, const OOC_INT16 u__ref[], OOC_LEN u_0d, const OOC_INT16 v__ref[], OOC_LEN v_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_ALLOCATE_VPAR(u,OOC_INT16 ,u_0d)
  OOC_ALLOCATE_VPAR(v,OOC_INT16 ,v_0d)
  OOC_INT32 j;
  OOC_INT32 n;
  OOC_INT32 lw;

  OOC_INITIALIZE_VPAR(u__ref,u,OOC_INT16 ,(u_0d*2))
  OOC_INITIALIZE_VPAR(v__ref,v,OOC_INT16 ,(v_0d*2))
  i0 = v_0d-1;
  j = i0;
  i1 = u_0d-1;
  n = i1;
  i2 = w_0d-1;
  lw = i2;
  i3 = (OOC_INT32)Integers__ZERO;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7465)), 0);
  Integers__Assign((void*)(OOC_INT32)w, w_0d, (void*)(_check_pointer(i3, 7465)), i4);
  i3 = 0<i1;
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l5;
l3:
  i3 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(1, u_0d, OOC_UINT32, 7611))*2);
  i3 = i3==0;
  
l5:
  if (i3) goto l7;
  i3=0;
  goto l17;
l7:
  i3=0;
l8_loop:
  i3 = i3+1;
  i4 = i3<i1;
  if (i4) goto l11;
  i4=OOC_FALSE;
  goto l13;
l11:
  i4 = *(OOC_INT16*)((OOC_INT32)u+(_check_index((i3+1), u_0d, OOC_UINT32, 7611))*2);
  i4 = i4==0;
  
l13:
  if (i4) goto l8_loop;
l17:
  i4 = 0<i0;
  if (i4) goto l20;
  i4=OOC_FALSE;
  goto l22;
l20:
  i4 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(1, v_0d, OOC_UINT32, 7665))*2);
  i4 = i4==0;
  
l22:
  if (i4) goto l24;
  i4=0;
  goto l34;
l24:
  i4=0;
l25_loop:
  i4 = i4+1;
  i5 = i4<i0;
  if (i5) goto l28;
  i5=OOC_FALSE;
  goto l30;
l28:
  i5 = *(OOC_INT16*)((OOC_INT32)v+(_check_index((i4+1), v_0d, OOC_UINT32, 7665))*2);
  i5 = i5==0;
  
l30:
  if (i5) goto l25_loop;
l34:
  i2 = (i2-i0)-i1;
  
l35_loop:
  i5 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i0, v_0d, OOC_UINT32, 7772))*2);
  i5 = i5!=0;
  if (i5) goto l38;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(((i3+i0)+i2), w_0d, OOC_UINT32, 8144))*2) = 0;
  goto l44;
l38:
  i5=i1;i6=0;
l39_loop:
  i7 = (i5+i0)+i2;
  i8 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i5, u_0d, OOC_UINT32, 7945))*2);
  i9 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i0, v_0d, OOC_UINT32, 7950))*2);
  i10 = *(OOC_INT16*)((OOC_INT32)w+(_check_index(i7, w_0d, OOC_UINT32, 7955))*2);
  i6 = ((i8*i9)+i10)+i6;
  i5 = i5-1;
  i8 = i5<=i3;
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(i7, w_0d, OOC_UINT32, 7994))*2) = (_mod(i6,32768));
  i6 = i6>>15;
  if (!i8) goto l39_loop;
l43:
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(((i3+i0)+i2), w_0d, OOC_UINT32, 8111))*2) = i6;
l44:
  i0 = i0-1;
  i5 = i0<=i4;
  if (!i5) goto l35_loop;
l48:
  i0 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(0, u_0d, OOC_UINT8, 8249))*2);
  i1 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(0, v_0d, OOC_UINT8, 8254))*2);
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(0, w_0d, OOC_UINT8, 8243))*2) = (i0*i1);
  return;
  ;
}

static void Integers__QR(const OOC_INT16 u__ref[], OOC_LEN u_0d, const OOC_INT16 v__ref[], OOC_LEN v_0d, OOC_INT16 q[], OOC_LEN q_0d, OOC_INT16 r[], OOC_LEN r_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_ALLOCATE_VPAR(u,OOC_INT16 ,u_0d)
  OOC_ALLOCATE_VPAR(v,OOC_INT16 ,v_0d)
  OOC_INT32 i;
  OOC_INT16 c;

  OOC_INITIALIZE_VPAR(u__ref,u,OOC_INT16 ,(u_0d*2))
  OOC_INITIALIZE_VPAR(v__ref,v,OOC_INT16 ,(v_0d*2))
  i0 = u_0d-1;
  i1 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i0, u_0d, OOC_UINT32, 8556))*2);
  i = i1;
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(0, u_0d, OOC_UINT8, 8656))*2) = 0;
  i1 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(1, v_0d, OOC_UINT8, 8600))*2);
  c = 0;
  i1 = _div(32768,(i1+1));
  Integers__MultDigit((void*)(OOC_INT32)u, u_0d, (void*)(OOC_INT32)u, u_0d, i1, (void*)((OOC_INT32)u+(_check_index(0, u_0d, OOC_UINT8, 8731))*2));
  Integers__MultDigit((void*)(OOC_INT32)v, v_0d, (void*)(OOC_INT32)v, v_0d, i1, (void*)(OOC_INT32)&c);
  i2 = v_0d-1;
  i0 = i0-i2;
  i3 = i2>=1;
  i4 = q_0d>1;
  i5=0;
l1_loop:
  i6 = i5+1;
  i7 = _check_index((i5+2), u_0d, OOC_UINT32, 8923);
  i8 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i5, u_0d, OOC_UINT32, 8899))*2);
  i9 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i6, u_0d, OOC_UINT32, 8910))*2);
  i10 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(1, v_0d, OOC_UINT8, 8941))*2);
  i11 = i8==i10;
  i8 = (i8*32768)+i9;
  i9 = _check_index(2, v_0d, OOC_UINT8, 8951);
  if (i11) goto l4;
  i11 = _div(i8,i10);
  
  goto l5;
l4:
  i11=32767;
l5:
  i9 = *(OOC_INT16*)((OOC_INT32)v+i9*2);
  i7 = *(OOC_INT16*)((OOC_INT32)u+i7*2);
  i12 = (((i9*i11)-i7)>>15)>(i8-(i11*i10));
  if (i12) goto l8;
  i7=i11;
  goto l13;
l8:
  i11 = i11-1;
  i7 = (((i9*i11)-i7)>>15)>(i8-(i11*i10));
  if (i7) goto l11;
  i7=i11;
  goto l13;
l11:
  i7 = i11-1;
  
l13:
  *(OOC_INT16*)((OOC_INT32)v+(_check_index(0, v_0d, OOC_UINT8, 9214))*2) = 0;
  i8=i2;i9=0;i10=0;
l14_loop:
  i11 = i8+i5;
  i12 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i8, v_0d, OOC_UINT32, 9265))*2);
  i9 = (i12*i7)+i9;
  i12 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i11, u_0d, OOC_UINT32, 9331))*2);
  i10 = (i12-(_mod(i9,32768)))+i10;
  i12 = i10<0;
  if (i12) goto l17;
  c = 0;
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i11, u_0d, OOC_UINT32, 9465))*2) = i10;
  i10=0;
  goto l18;
l17:
  c = -1;
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i11, u_0d, OOC_UINT32, 9404))*2) = (32768+i10);
  i10=-1;
l18:
  i8 = i8-1;
  i11 = i8<0;
  if (i11) goto l22;
  i9 = i9>>15;
  
  goto l14_loop;
l22:
  i8 = i10<0;
  if (!i8) goto l39;
  if (i3) goto l27;
  i8=0;
  goto l37;
l27:
  i8=i2;i9=0;
l28_loop:
  i10 = i8+i5;
  i11 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i10, u_0d, OOC_UINT32, 9721))*2);
  i12 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i8, v_0d, OOC_UINT32, 9728))*2);
  i9 = (i11+i12)+i9;
  i11 = i9>=32768;
  if (i11) goto l31;
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i10, u_0d, OOC_UINT32, 9799))*2) = i9;
  i9=0;
  goto l32;
l31:
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i10, u_0d, OOC_UINT32, 9759))*2) = (i9-32768);
  i9=1;
l32:
  i8 = i8+-1;
  i10 = i8>=1;
  if (i10) goto l28_loop;
l36:
  i8=i9;
l37:
  i9 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i5, u_0d, OOC_UINT32, 9871))*2);
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i5, u_0d, OOC_UINT32, 9857))*2) = ((i9+i8)-32768);
  i7 = i7-1;
  
l39:
  if (!i4) goto l41;
  *(OOC_INT16*)((OOC_INT32)q+(_check_index(i5, q_0d, OOC_UINT32, 9915))*2) = i7;
l41:
  i5 = i6>i0;
  if (i5) goto l46;
  i5=i6;
  goto l1_loop;
l46:
  if (i4) goto l48;
  i3=OOC_FALSE;
  goto l50;
l48:
  i3 = (q_0d-1)>=(i0+1);
  
l50:
  if (!i3) goto l60;
  i3 = i0>=0;
  if (!i3) goto l60;
  i3=i0;
l54_loop:
  i4 = *(OOC_INT16*)((OOC_INT32)q+(_check_index(i3, q_0d, OOC_UINT32, 10082))*2);
  i5 = i3+-1;
  *(OOC_INT16*)((OOC_INT32)q+(_check_index((i3+1), q_0d, OOC_UINT32, 10074))*2) = i4;
  i3 = i5>=0;
  if (!i3) goto l60;
  i3=i5;
  goto l54_loop;
l60:
  i3 = r_0d>1;
  if (!i3) goto l71;
  i3 = 1<=i2;
  i = 1;
  if (!i3) goto l70;
  i3=1;
l65_loop:
  i4 = *(OOC_INT16*)((OOC_INT32)u+(_check_index((i3+i0), u_0d, OOC_UINT32, 10204))*2);
  *(OOC_INT16*)((OOC_INT32)r+(_check_index(i3, r_0d, OOC_UINT32, 10198))*2) = i4;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l65_loop;
l70:
  Integers__DivDigit((void*)(OOC_INT32)r, r_0d, (void*)(OOC_INT32)r, r_0d, i1, (void*)(OOC_INT32)&i);
l71:
  return;
  ;
}

static Integers__Integer Integers__gcd(const OOC_INT16 u__ref[], OOC_LEN u_0d, OOC_INT32 v) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(u,OOC_INT16 ,u_0d)
  OOC_INT32 r;

  i0 = u_0d-1;
  i1 = i0-1;
  OOC_INITIALIZE_VPAR(u__ref,u,OOC_INT16 ,(u_0d*2))
  i2 = i1-1;
l1_loop:
  i3 = v;
  i4 = i3==0;
  if (!i4) goto l4;
  i4 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)u, u_0d, 0);
  return (Integers__Integer)i4;
l4:
  Integers__ModDigit((void*)(OOC_INT32)u, u_0d, i3, (void*)(OOC_INT32)&r);
  i4 = i3>32768;
  if (i4) goto l7;
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i0, u_0d, OOC_UINT32, 10582))*2) = i3;
  i3=i1;
  goto l8;
l7:
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i0, u_0d, OOC_UINT32, 10511))*2) = (_mod(i3,32768));
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i1, u_0d, OOC_UINT32, 10542))*2) = (i3>>15);
  i3=i2;
l8:
  i4 = 1<=i3;
  if (i4) goto l10;
  goto l16;
l10:
  i4=1;
l11_loop:
  i5 = i4+1;
  i6 = i5<=i3;
  *(OOC_INT16*)((OOC_INT32)u+(_check_index(i4, u_0d, OOC_UINT32, 10632))*2) = 0;
  if (i6) goto l13;
  goto l16;
l13:
  i4=i5;
  goto l11_loop;
l16:
  i3 = r;
  v = i3;
  
  goto l1_loop;
l18:
  ;
}

static Integers__Integer Integers__mgcd(const OOC_INT16 u__ref[], OOC_LEN u_0d, const OOC_INT16 v__ref[], OOC_LEN v_0d, const OOC_INT16 t__ref[], OOC_LEN t_0d, const OOC_INT16 w__ref[], OOC_LEN w_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_ALLOCATE_VPAR(u,OOC_INT16 ,u_0d)
  OOC_ALLOCATE_VPAR(v,OOC_INT16 ,v_0d)
  OOC_ALLOCATE_VPAR(t,OOC_INT16 ,t_0d)
  OOC_ALLOCATE_VPAR(w,OOC_INT16 ,w_0d)
  OOC_INT16 null[1];

  OOC_INITIALIZE_VPAR(u__ref,u,OOC_INT16 ,(u_0d*2))
  OOC_INITIALIZE_VPAR(v__ref,v,OOC_INT16 ,(v_0d*2))
  OOC_INITIALIZE_VPAR(t__ref,t,OOC_INT16 ,(t_0d*2))
  i0 = v_0d-1;
  i1 = u_0d-1;
  OOC_INITIALIZE_VPAR(w__ref,w,OOC_INT16 ,(w_0d*2))
  i2 = 1<=i1;
  i3 = 1<=i0;
l1_loop:
  if (i3) goto l4;
  i4=OOC_FALSE;
  goto l6;
l4:
  i4 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(1, v_0d, OOC_UINT32, 11031))*2);
  i4 = i4==0;
  
l6:
  if (i4) goto l8;
  i4=1;
  goto l18;
l8:
  i4=1;
l9_loop:
  i4 = i4+1;
  i5 = i4<=i0;
  if (i5) goto l12;
  i5=OOC_FALSE;
  goto l14;
l12:
  i5 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i4, v_0d, OOC_UINT32, 11031))*2);
  i5 = i5==0;
  
l14:
  if (i5) goto l9_loop;
l18:
  i5 = i4==i0;
  if (!i5) goto l21;
  i5 = *(OOC_INT16*)((OOC_INT32)v+(_check_index(i4, v_0d, OOC_UINT32, 11137))*2);
  i5 = (OOC_INT32)Integers__gcd((void*)(OOC_INT32)u, u_0d, i5);
  return (Integers__Integer)i5;
l21:
  i4 = _check_index(i4, v_0d, OOC_UINT32, 11201);
  if (i2) goto l24;
  i5=OOC_FALSE;
  goto l26;
l24:
  i5 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(1, u_0d, OOC_UINT32, 11236))*2);
  i5 = i5==0;
  
l26:
  if (i5) goto l28;
  i5=1;
  goto l38;
l28:
  i5=1;
l29_loop:
  i5 = i5+1;
  i6 = i5<=i1;
  if (i6) goto l32;
  i6=OOC_FALSE;
  goto l34;
l32:
  i6 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i5, u_0d, OOC_UINT32, 11236))*2);
  i6 = i6==0;
  
l34:
  if (i6) goto l29_loop;
l38:
  i4 = *(OOC_INT16*)((OOC_INT32)v+i4*2);
  i5 = *(OOC_INT16*)((OOC_INT32)u+(_check_index(i5, u_0d, OOC_UINT32, 11269))*2);
  i7=i5;i5=0;i6=1;i8=1;i9=0;
l39_loop:
  i10 = i4+i5;
  i11 = i4+i6;
  i12 = i10==0;
  if (i12) goto l42;
  i12 = i11==0;
  
  goto l44;
l42:
  i12=OOC_TRUE;
l44:
  if (i12) goto l50;
  i10 = _div((i7+i8),i10);
  i11 = i10!=(_div((i7+i9),i11));
  if (i11) goto l50;
  i8 = i8-(i10*i5);
  i9 = i9-(i10*i6);
  i7 = i7-(i10*i4);
  {register OOC_INT32 h0=i4;i4=i7;i7=h0;{register OOC_INT32 h1=i9;i9=i6;i6=h1;{register OOC_INT32 h2=i8;i8=i5;i5=h2;}}}
  goto l39_loop;
l50:
  i4 = i9==0;
  if (!i4) goto l52;
  goto l53;
l52:
  *(OOC_INT16*)((OOC_INT32)t+(_check_index(0, t_0d, OOC_UINT8, 11878))*2) = 0;
  Integers__MultDigit((void*)(OOC_INT32)t, t_0d, (void*)(OOC_INT32)u, u_0d, i8, (void*)((OOC_INT32)t+(_check_index(0, t_0d, OOC_UINT8, 11906))*2));
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(0, w_0d, OOC_UINT8, 11937))*2) = 0;
  Integers__MultDigit((void*)(OOC_INT32)w, w_0d, (void*)(OOC_INT32)u, u_0d, i5, (void*)((OOC_INT32)w+(_check_index(0, w_0d, OOC_UINT8, 11965))*2));
  *(OOC_INT16*)((OOC_INT32)t+(_check_index(0, t_0d, OOC_UINT8, 11996))*2) = 0;
  Integers__MultAdd((void*)(OOC_INT32)t, t_0d, (void*)(OOC_INT32)v, v_0d, (void*)(OOC_INT32)t, t_0d, i9, (void*)((OOC_INT32)t+(_check_index(0, t_0d, OOC_UINT8, 12025))*2));
  *(OOC_INT16*)((OOC_INT32)w+(_check_index(0, w_0d, OOC_UINT8, 12057))*2) = 0;
  Integers__MultAdd((void*)(OOC_INT32)w, w_0d, (void*)(OOC_INT32)v, v_0d, (void*)(OOC_INT32)w, w_0d, i6, (void*)((OOC_INT32)w+(_check_index(0, w_0d, OOC_UINT8, 12086))*2));
  Integers__Assign((void*)(OOC_INT32)u, u_0d, (void*)(OOC_INT32)t, t_0d);
  Integers__Assign((void*)(OOC_INT32)v, v_0d, (void*)(OOC_INT32)w, w_0d);
  goto l1_loop;
l53:
  Integers__QR((void*)(OOC_INT32)u, u_0d, (void*)(OOC_INT32)v, v_0d, (void*)(OOC_INT32)null, 1, (void*)(OOC_INT32)t, t_0d);
  Integers__Assign((void*)(OOC_INT32)u, u_0d, (void*)(OOC_INT32)v, v_0d);
  Integers__Assign((void*)(OOC_INT32)v, v_0d, (void*)(OOC_INT32)t, t_0d);
  goto l1_loop;
l56:
  ;
}

static void Integers__IntPower(OOC_INT16 y[], OOC_LEN y_0d, const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT32 exp) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(x,OOC_INT16 ,x_0d)

  OOC_INITIALIZE_VPAR(x__ref,x,OOC_INT16 ,(x_0d*2))
  i0 = (OOC_INT32)Integers__ONE;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12351)), 0);
  Integers__Assign((void*)(OOC_INT32)y, y_0d, (void*)(_check_pointer(i0, 12351)), i1);
l1_loop:
  i0 = exp;
  i1 = _odd(i0);
  if (!i1) goto l4;
  Integers__Mult((void*)(OOC_INT32)y, y_0d, (void*)(OOC_INT32)y, y_0d, (void*)(OOC_INT32)x, x_0d);
l4:
  i0 = i0>>1;
  i1 = i0==0;
  exp = i0;
  if (i1) goto l8;
  Integers__Mult((void*)(OOC_INT32)x, x_0d, (void*)(OOC_INT32)x, x_0d, (void*)(OOC_INT32)x, x_0d);
  
  goto l1_loop;
l8:
  return;
  ;
}

static OOC_INT32 Integers__ExtractDigit(const OOC_INT16 x__ref[], OOC_LEN x_0d, OOC_INT32 d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(x,OOC_INT16 ,x_0d)
  OOC_INT32 b;

  i0 = d;
  OOC_INITIALIZE_VPAR(x__ref,x,OOC_INT16 ,(x_0d*2))
  i0 = i0>0;
  if (!i0) goto l8;
l3_loop:
  Integers__DivDigit((void*)(OOC_INT32)x, x_0d, (void*)(OOC_INT32)x, x_0d, 10, (void*)(OOC_INT32)&b);
  i0 = d;
  i0 = i0-1;
  d = i0;
  i0 = i0>0;
  if (i0) goto l3_loop;
l8:
  Integers__ModDigit((void*)(OOC_INT32)x, x_0d, 10, (void*)(OOC_INT32)&b);
  i0 = b;
  return i0;
  ;
}

static void Integers__Times10(OOC_INT16 r[], OOC_LEN r_0d, OOC_INT16 b) {
  register OOC_INT32 i0;

  Integers__MultDigit((void*)(OOC_INT32)r, r_0d, (void*)(OOC_INT32)r, r_0d, 10, (void*)(OOC_INT32)&b);
  i0 = b;
  _assert((i0==0), 101, 12938);
  return;
  ;
}

Integers__Integer Integers__Entier(OOC_REAL64 x) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  register OOC_REAL64 d0,d1;
  OOC_INT16 ix[65];

  d0 = x;
  i0 = d0<0.0000000000000000;
  if (i0) goto l3;
  *(OOC_INT16*)((OOC_INT32)ix+(_check_index(0, 65, OOC_UINT8, 15845))*2) = 1;
  goto l4;
l3:
  *(OOC_INT16*)((OOC_INT32)ix+(_check_index(0, 65, OOC_UINT8, 15779))*2) = -1;
  x = (-d0);
l4:
  d0 = x;
  i0 = d0>3.2768000000000000E+4;
  if (i0) goto l7;
  i0=0;
  goto l13;
l7:
  d0 = (OOC_REAL64)(1.0000000000000000/3.2768000000000000E+4);
  i0=0;
l8_loop:
  d1 = x;
  d1 = d1*d0;
  x = d1;
  i1 = d1>3.2768000000000000E+4;
  i0 = i0+1;
  if (i1) goto l8_loop;
l13:
  i1 = i0+1;
  i2 = 1<=i1;
  if (!i2) goto l21;
  i2=1;
l16_loop:
  d0 = x;
  *(OOC_INT16*)((OOC_INT32)ix+(_check_index(i2, 65, OOC_UINT32, 15991))*2) = (_entier(d0));
  i3 = *(OOC_INT16*)((OOC_INT32)ix+(_check_index(i2, 65, OOC_UINT32, 16022))*2);
  i2 = i2+1;
  i4 = i2<=i1;
  x = ((d0-((OOC_REAL64)i3))*3.2768000000000000E+4);
  if (i4) goto l16_loop;
l21:
  i0 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)ix, 65, (i0+2));
  return (Integers__Integer)i0;
  ;
}

OOC_REAL64 Integers__Float(Integers__Integer x) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  register OOC_REAL64 d0,d1;
  OOC_INT32 len;
  OOC_REAL64 r;
  OOC_INT32 cnt;

  i0 = (OOC_INT32)x;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16217)), 0);
  i1 = i1-1;
  len = i1;
  i2 = _check_pointer(i0, 16227);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT16*)(i2+(_check_index(1, i3, OOC_UINT8, 16227))*2);
  d0 = (OOC_REAL64)i2;
  r = d0;
  i2 = 2<=i1;
  cnt = 2;
  if (!i2) goto l17;
  d1 = 1.7976931348623157E+308/3.2768000000000000E+4;
  i2=2;
l4_loop:
  i3 = d0<d1;
  if (i3) goto l11;
  i3 = _check_pointer(i0, 16317);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_INT16*)(i3+(_check_index(0, i4, OOC_UINT8, 16317))*2);
  i3 = i3==-1;
  if (i3) goto l9;
  return 1.7976931348623157E+308;
  goto l12;
l9:
  return -1.7976931348623157E+308;
  goto l12;
l11:
  i3 = _check_pointer(i0, 16298);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_INT16*)(i3+(_check_index(i2, i4, OOC_UINT32, 16298))*2);
  d0 = (d0*3.2768000000000000E+4)+((OOC_REAL64)i3);
  r = d0;
  
l12:
  i2 = i2+1;
  i3 = i2<=i1;
  cnt = i2;
  if (i3) goto l4_loop;
l17:
  i0 = _check_pointer(i0, 16415);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 16415))*2);
  i0 = i0==-1;
  if (i0) goto l20;
  return d0;
  goto l21;
l20:
  return (-d0);
l21:
  _failed_function(16125); return 0;
  ;
}

Integers__Integer Integers__Long(OOC_INT32 x) {
  register OOC_INT32 i0,i1;
  OOC_INT16 si[4];

  i0 = x;
  i1 = i0==(-2147483647-1);
  if (i1) goto l7;
  i1 = i0<0;
  if (i1) goto l5;
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(0, 4, OOC_UINT8, 16694))*2) = 1;
  goto l6;
l5:
  x = (-i0);
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(0, 4, OOC_UINT8, 16673))*2) = -1;
l6:
  i0 = x;
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(1, 4, OOC_UINT8, 16721))*2) = (i0>>30);
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(2, 4, OOC_UINT8, 16755))*2) = (_mod((i0>>15),32768));
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(3, 4, OOC_UINT8, 16792))*2) = (_mod(i0,32768));
  goto l8;
l7:
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(0, 4, OOC_UINT8, 16593))*2) = -1;
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(1, 4, OOC_UINT8, 16610))*2) = 2;
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(2, 4, OOC_UINT8, 16620))*2) = 0;
  *(OOC_INT16*)((OOC_INT32)si+(_check_index(3, 4, OOC_UINT8, 16630))*2) = 0;
l8:
  i0 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)si, 4, 4);
  return (Integers__Integer)i0;
  ;
}

OOC_INT32 Integers__Short(Integers__Integer x) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 m;
  OOC_INT32 r;
  OOC_INT32 l;

  i0 = (OOC_INT32)x;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 16946)), 0);
  i1 = i1-1;
  m = i1;
  i2 = _check_pointer(i0, 16956);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT16*)(i2+(_check_index(1, i3, OOC_UINT8, 16956))*2);
  r = i2;
  i3 = 2<=i1;
  l = 2;
  if (i3) goto l3;
  i1=i2;
  goto l17;
l3:
  i3=2;
l4_loop:
  i4 = _check_pointer(i0, 17011);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 17011))*2);
  i4 = i2>((2147483647-i4)>>15);
  if (i4) goto l7;
  i4 = _check_pointer(i0, 17163);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 17163))*2);
  i2 = (i2*32768)+i4;
  r = i2;
  
  goto l12;
l7:
  i4 = _check_pointer(i0, 17061);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(0, i5, OOC_UINT8, 17061))*2);
  i4 = i4==-1;
  if (i4) goto l10;
  return 2147483647;
  goto l12;
l10:
  return (-2147483647-1);
l12:
  i3 = i3+1;
  i4 = i3<=i1;
  l = i3;
  if (i4) goto l4_loop;
l16:
  i1=i2;
l17:
  i0 = _check_pointer(i0, 17248);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i2, OOC_UINT8, 17248))*2);
  i0 = i0==-1;
  if (i0) goto l20;
  return i1;
  goto l21;
l20:
  return (-i1);
l21:
  _failed_function(16871); return 0;
  ;
}

void Integers__Externalize(BinaryRider__Writer *w, Integers__Integer x) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)*w;
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17553)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17538)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i2);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 17579)), 0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 17599);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 17599))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17588)))), BinaryRider__WriterDesc_WriteInt)),BinaryRider__WriterDesc_WriteInt)((BinaryRider__Writer)i0, i4);
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void Integers__Internalize(BinaryRider__Reader *r, Integers__Integer *x) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 s;
  OOC_INT32 i;

  i0 = (OOC_INT32)*r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17734)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&s);
  i1 = s;
  i2 = (OOC_INT32)RT0__NewObject(_td_Integers__Integer.baseTypes[0], i1);
  i1 = i1-1;
  *x = (Integers__Integer)i2;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i2, 17792);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17782)))), BinaryRider__ReaderDesc_ReadInt)),BinaryRider__ReaderDesc_ReadInt)((BinaryRider__Reader)i0, (void*)(i4+(_check_index(i3, i5, OOC_UINT32, 17792))*2));
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

Integers__Integer Integers__Abs(Integers__Integer x) {
  register OOC_INT32 i0,i1,i2;
  Integers__Integer r;

  i0 = (OOC_INT32)x;
  i1 = _check_pointer(i0, 18031);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 18031))*2);
  i1 = i1==-1;
  if (i1) goto l3;
  return (Integers__Integer)i0;
  goto l4;
l3:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18058)), 0);
  i0 = (OOC_INT32)Integers__Copy((void*)(_check_pointer(i0, 18058)), i1, 0);
  r = (Integers__Integer)i0;
  i1 = _check_pointer(i0, 18066);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 18066))*2) = 1;
  return (Integers__Integer)i0;
l4:
  _failed_function(17968); return 0;
  ;
}

OOC_CHAR8 Integers__Odd(Integers__Integer x) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)x;
  i1 = _check_pointer(i0, 18195);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18201)), 0);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = *(OOC_INT16*)(i1+(_check_index((i0-1), i2, OOC_UINT32, 18195))*2);
  return (_odd(i0));
  ;
}

OOC_INT32 Integers__Compare(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)x;
  i1 = _check_pointer(i0, 18341);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)y;
  i4 = _check_pointer(i3, 18346);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(0, i5, OOC_UINT8, 18346))*2);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 18341))*2);
  i1 = i1!=i4;
  if (i1) goto l3;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i3, 18442)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18438)), 0);
  i1 = Integers__UCompare((void*)(_check_pointer(i0, 18438)), i2, (void*)(_check_pointer(i3, 18442)), i1);
  i0 = _check_pointer(i0, 18446);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i2, OOC_UINT8, 18446))*2);
  return (i1*i0);
  goto l4;
l3:
  i0 = _check_pointer(i0, 18363);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 18363))*2);
  return i0;
l4:
  _failed_function(18232); return 0;
  ;
}

Integers__Integer Integers__Difference(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Integers__Integer d;
  OOC_INT16 sign;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18672)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18676)), 0);
  i2 = Integers__UCompare((void*)(_check_pointer(i0, 18672)), i2, (void*)(_check_pointer(i1, 18676)), i3);
  i2 = i2<0;
  if (i2) goto l3;
  sign = 1;
  i0=1;
  goto l4;
l3:
  d = (Integers__Integer)i1;
  y = (Integers__Integer)i0;
  x = (Integers__Integer)i1;
  sign = -1;
  i0=-1;
l4:
  i1 = (OOC_INT32)x;
  i2 = _check_pointer(i1, 18859);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)y;
  i5 = _check_pointer(i4, 18864);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_INT16*)(i5+(_check_index(0, i6, OOC_UINT8, 18864))*2);
  i2 = *(OOC_INT16*)(i2+(_check_index(0, i3, OOC_UINT8, 18859))*2);
  i2 = i2==i5;
  if (i2) goto l7;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18972)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18968)), 0);
  i2 = (OOC_INT32)Integers__Add((void*)(_check_pointer(i1, 18968)), i3, (void*)(_check_pointer(i4, 18972)), i2);
  d = (Integers__Integer)i2;
  
  goto l8;
l7:
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 18885)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 18881)), 0);
  i2 = (OOC_INT32)Integers__Sub((void*)(_check_pointer(i1, 18881)), i3, (void*)(_check_pointer(i4, 18885)), i2);
  d = (Integers__Integer)i2;
  
l8:
  i3 = _check_pointer(i2, 19090);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = _check_pointer(i1, 19096);
  i5 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i5, OOC_UINT8, 19096))*2);
  *(OOC_INT16*)(i3+(_check_index(0, i4, OOC_UINT8, 19090))*2) = (i1*i0);
  return (Integers__Integer)i2;
  ;
}

Integers__Integer Integers__Sum(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Integers__Integer d;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19332)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19336)), 0);
  i2 = Integers__UCompare((void*)(_check_pointer(i0, 19332)), i2, (void*)(_check_pointer(i1, 19336)), i3);
  i2 = i2<0;
  if (!i2) goto l3;
  d = (Integers__Integer)i1;
  y = (Integers__Integer)i0;
  x = (Integers__Integer)i1;
l3:
  i0 = (OOC_INT32)x;
  i1 = _check_pointer(i0, 19444);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)y;
  i4 = _check_pointer(i3, 19449);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT16*)(i4+(_check_index(0, i5, OOC_UINT8, 19449))*2);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 19444))*2);
  i1 = i1!=i4;
  if (i1) goto l6;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19554)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19550)), 0);
  i1 = (OOC_INT32)Integers__Add((void*)(_check_pointer(i0, 19550)), i2, (void*)(_check_pointer(i3, 19554)), i1);
  d = (Integers__Integer)i1;
  
  goto l7;
l6:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i3, 19470)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19466)), 0);
  i1 = (OOC_INT32)Integers__Sub((void*)(_check_pointer(i0, 19466)), i2, (void*)(_check_pointer(i3, 19470)), i1);
  d = (Integers__Integer)i1;
  
l7:
  i2 = _check_pointer(i1, 19668);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = _check_pointer(i0, 19674);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i4, OOC_UINT8, 19674))*2);
  *(OOC_INT16*)(i2+(_check_index(0, i3, OOC_UINT8, 19668))*2) = i0;
  return (Integers__Integer)i1;
  ;
}

Integers__Integer Integers__Product(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Integers__Integer w;

  i0 = (OOC_INT32)y;
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 19923)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19931)), 0);
  i2 = (OOC_INT32)Integers__New(((i2+i3)-1));
  w = (Integers__Integer)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20012)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20008)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20004)), 0);
  Integers__Mult((void*)(_check_pointer(i2, 20004)), i5, (void*)(_check_pointer(i1, 20008)), i4, (void*)(_check_pointer(i0, 20012)), i3);
  i0 = _check_pointer(i2, 20024);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(1, i1, OOC_UINT8, 20024))*2);
  i0 = i0==0;
  if (i0) goto l3;
  return (Integers__Integer)i2;
  goto l4;
l3:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20048)), 0);
  i0 = (OOC_INT32)Integers__Copy((void*)(_check_pointer(i2, 20048)), i0, 0);
  return (Integers__Integer)i0;
l4:
  _failed_function(19767); return 0;
  ;
}

void Integers__QuoRem(Integers__Integer x, Integers__Integer y, Integers__Integer *quo, Integers__Integer *rem) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 cmp;
  OOC_INT16 one[2];
  auto void Integers__QuoRem_FixUp();
    
    void Integers__QuoRem_FixUp() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = (OOC_INT32)*rem;
      i1 = _check_pointer(i0, 20377);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_INT16*)(i1+(_check_index(1, i2, OOC_UINT8, 20377))*2);
      i1 = i1!=0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)x;
      i1 = _check_pointer(i1, 20388);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = (OOC_INT32)y;
      i3 = _check_pointer(i3, 20393);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i1 = *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 20388))*2);
      i2 = *(OOC_INT16*)(i3+(_check_index(0, i4, OOC_UINT8, 20393))*2);
      i1 = i1!=i2;
      
l5:
      if (!i1) goto l7;
      i1 = (OOC_INT32)y;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20428)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20422)), 0);
      i0 = (OOC_INT32)Integers__Sub((void*)(_check_pointer(i1, 20422)), i3, (void*)(_check_pointer(i0, 20428)), i2);
      *rem = (Integers__Integer)i0;
      i0 = (OOC_INT32)*quo;
      i1 = (OOC_INT32)Integers__ONE;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20450)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20444)), 0);
      i0 = (OOC_INT32)Integers__Add((void*)(_check_pointer(i0, 20444)), i3, (void*)(_check_pointer(i1, 20450)), i2);
      *quo = (Integers__Integer)i0;
l7:
      i0 = (OOC_INT32)*rem;
      i0 = _check_pointer(i0, 20510);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = (OOC_INT32)y;
      i3 = _check_pointer(i2, 20516);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_INT16*)(i3+(_check_index(0, i4, OOC_UINT8, 20516))*2);
      *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 20510))*2) = i3;
      i0 = (OOC_INT32)*quo;
      i0 = _check_pointer(i0, 20531);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i3 = (OOC_INT32)x;
      i3 = _check_pointer(i3, 20537);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i2 = _check_pointer(i2, 20542);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      i3 = *(OOC_INT16*)(i3+(_check_index(0, i4, OOC_UINT8, 20537))*2);
      i2 = *(OOC_INT16*)(i2+(_check_index(0, i5, OOC_UINT8, 20542))*2);
      *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 20531))*2) = (i3*i2);
      return;
      ;
    }


  i0 = (OOC_INT32)y;
  i1 = _check_pointer(i0, 20614);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT16*)(i1+(_check_index(1, i2, OOC_UINT8, 20614))*2);
  _assert((i1!=0), 103, 20606);
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 20717)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20713)), 0);
  i2 = Integers__UCompare((void*)(_check_pointer(i1, 20713)), i3, (void*)(_check_pointer(i0, 20717)), i2);
  i3 = i2<0;
  cmp = i2;
  if (i3) goto l6;
  i2 = i2==0;
  if (!i2) goto l7;
  i1 = _check_pointer(i1, 20914);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = _check_pointer(i0, 20919);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i1 = *(OOC_INT16*)(i1+(_check_index(0, i2, OOC_UINT8, 20914))*2);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i3, OOC_UINT8, 20919))*2);
  *(OOC_INT16*)((OOC_INT32)one+(_check_index(0, 2, OOC_UINT8, 20908))*2) = (i1*i0);
  *(OOC_INT16*)((OOC_INT32)one+(_check_index(1, 2, OOC_UINT8, 20927))*2) = 1;
  i0 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)one, 2, 0);
  *quo = (Integers__Integer)i0;
  i0 = (OOC_INT32)Integers__ZERO;
  *rem = (Integers__Integer)i0;
  return;
  goto l7;
l6:
  i0 = (OOC_INT32)Integers__New(2);
  *quo = (Integers__Integer)i0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 20798)), 0);
  i0 = (OOC_INT32)Integers__Copy((void*)(_check_pointer(i1, 20798)), i0, 0);
  *rem = (Integers__Integer)i0;
  Integers__QuoRem_FixUp();
  return;
l7:
  i0 = (OOC_INT32)y;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21104)), 0);
  i1 = i1==2;
  if (i1) goto l14;
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21298)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21290)), 0);
  i2 = (i3-i2)+1;
  cmp = i2;
  i3 = i2==1;
  if (!i3) goto l13;
  cmp = 2;
  i2=2;
l13:
  i2 = (OOC_INT32)Integers__New(i2);
  *quo = (Integers__Integer)i2;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21371)), 0);
  i2 = (OOC_INT32)Integers__New(i2);
  *rem = (Integers__Integer)i2;
  i3 = (OOC_INT32)*quo;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21403)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 21397)), 0);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21391)), 0);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21387)), 0);
  Integers__QR((void*)(_check_pointer(i1, 21387)), i7, (void*)(_check_pointer(i0, 21391)), i6, (void*)(_check_pointer(i3, 21397)), i5, (void*)(_check_pointer(i2, 21403)), i4);
  goto l15;
l14:
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21160)), 0);
  i2 = (OOC_INT32)Integers__New(i2);
  *quo = (Integers__Integer)i2;
  i0 = _check_pointer(i0, 21192);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(1, i3, OOC_UINT8, 21192))*2);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21188)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21184)), 0);
  Integers__DivDigit((void*)(_check_pointer(i2, 21184)), i4, (void*)(_check_pointer(i1, 21188)), i3, i0, (void*)(OOC_INT32)&cmp);
  i0 = cmp;
  *(OOC_INT16*)((OOC_INT32)one+(_check_index(1, 2, OOC_UINT8, 21212))*2) = i0;
  i0 = (OOC_INT32)Integers__Copy((void*)(OOC_INT32)one, 2, 2);
  *rem = (Integers__Integer)i0;
l15:
  Integers__QuoRem_FixUp();
  return;
  ;
}

Integers__Integer Integers__Quotient(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1;
  Integers__Integer q;
  Integers__Integer r;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  Integers__QuoRem((Integers__Integer)i0, (Integers__Integer)i1, (void*)(OOC_INT32)&q, (void*)(OOC_INT32)&r);
  i0 = (OOC_INT32)q;
  return (Integers__Integer)i0;
  ;
}

Integers__Integer Integers__Remainder(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1;
  Integers__Integer q;
  Integers__Integer r;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  Integers__QuoRem((Integers__Integer)i0, (Integers__Integer)i1, (void*)(OOC_INT32)&q, (void*)(OOC_INT32)&r);
  i0 = (OOC_INT32)r;
  return (Integers__Integer)i0;
  ;
}

Integers__Integer Integers__GCD(Integers__Integer x, Integers__Integer y) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21944)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21948)), 0);
  i2 = Integers__UCompare((void*)(_check_pointer(i0, 21944)), i2, (void*)(_check_pointer(i1, 21948)), i3);
  i2 = i2>=0;
  if (i2) goto l3;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22021)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22017)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22013)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22009)), 0);
  i0 = (OOC_INT32)Integers__mgcd((void*)(_check_pointer(i1, 22009)), i5, (void*)(_check_pointer(i0, 22013)), i4, (void*)(_check_pointer(i1, 22017)), i3, (void*)(_check_pointer(i1, 22021)), i2);
  return (Integers__Integer)i0;
  goto l4;
l3:
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21984)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21980)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21976)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i0, 21972)), 0);
  i0 = (OOC_INT32)Integers__mgcd((void*)(_check_pointer(i0, 21972)), i5, (void*)(_check_pointer(i1, 21976)), i4, (void*)(_check_pointer(i0, 21980)), i3, (void*)(_check_pointer(i0, 21984)), i2);
  return (Integers__Integer)i0;
l4:
  _failed_function(21842); return 0;
  ;
}

Integers__Integer Integers__Power(Integers__Integer x, OOC_INT32 exp) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Integers__Integer y;

  i0 = exp;
  i1 = i0<0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)Integers__New(2);
  return (Integers__Integer)i1;
l3:
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22255)), 0);
  i2 = (OOC_INT32)Integers__New((((i2-1)*i0)+1));
  y = (Integers__Integer)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22281)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22277)), 0);
  Integers__Assign((void*)(_check_pointer(i2, 22277)), i4, (void*)(_check_pointer(i1, 22281)), i3);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22315)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22311)), 0);
  Integers__IntPower((void*)(_check_pointer(i2, 22311)), i3, (void*)(_check_pointer(i2, 22315)), i1, i0);
  i0 = _check_pointer(i2, 22332);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(1, i1, OOC_UINT8, 22332))*2);
  i0 = i0==0;
  if (i0) goto l6;
  return (Integers__Integer)i2;
  goto l7;
l6:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22356)), 0);
  i0 = (OOC_INT32)Integers__Copy((void*)(_check_pointer(i2, 22356)), i0, 0);
  return (Integers__Integer)i0;
l7:
  _failed_function(22060); return 0;
  ;
}

OOC_INT8 Integers__Sign(Integers__Integer x) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)x;
  i1 = _check_pointer(i0, 22514);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT16*)(i1+(_check_index(1, i2, OOC_UINT8, 22514))*2);
  i1 = i1==0;
  if (i1) goto l3;
  i0 = _check_pointer(i0, 22557);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 22557))*2);
  return i0;
  goto l4;
l3:
  return 0;
l4:
  _failed_function(22408); return 0;
  ;
}

Integers__Integer Integers__Factorial(OOC_INT32 x) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 t;
  OOC_INT32 bits;
  Integers__Integer f;
  OOC_INT16 c;

  i0 = x;
  _assert((i0>=0), 108, 22748);
  t = i0;
  i1 = i0<2;
  bits = 0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)Integers__ONE;
  return (Integers__Integer)i1;
l3:
  i1 = i0>0;
  if (i1) goto l6;
  i1=0;
  goto l12;
l6:
  i1=i0;i2=0;
l7_loop:
  i1 = i1>>15;
  t = i1;
  i2 = i2+1;
  bits = i2;
  i3 = i1>0;
  if (i3) goto l7_loop;
l11:
  i1=i2;
l12:
  i1 = (OOC_INT32)Integers__New(((_div(((4*i0)*i1),5))+1));
  f = (Integers__Integer)i1;
  i2 = (OOC_INT32)Integers__ONE;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 22993)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22999)), 0);
  Integers__Assign((void*)(_check_pointer(i1, 22993)), i3, (void*)(_check_pointer(i2, 22999)), i4);
  i0 = i0>1;
  if (!i0) goto l20;
l15_loop:
  c = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23080)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23076)), 0);
  i3 = x;
  Integers__MultDigit((void*)(_check_pointer(i1, 23076)), i2, (void*)(_check_pointer(i1, 23080)), i0, i3, (void*)(OOC_INT32)&c);
  i0 = i3-1;
  x = i0;
  i0 = i0>1;
  if (i0) goto l15_loop;
l20:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23136)), 0);
  i0 = (OOC_INT32)Integers__Copy((void*)(_check_pointer(i1, 23136)), i0, 0);
  return (Integers__Integer)i0;
  ;
}

OOC_CHAR8 Integers__ThisDigit10(Integers__Integer x, OOC_INT32 exp10) {
  register OOC_INT32 i0,i1,i2;

  i0 = exp10;
  _assert((i0>=0), 106, 24542);
  i1 = (OOC_INT32)x;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 24618)), 0);
  i0 = Integers__ExtractDigit((void*)(_check_pointer(i1, 24618)), i2, i0);
  return (i0+48);
  ;
}

OOC_INT32 Integers__Digits10Of(Integers__Integer x) {
  register OOC_INT32 i0,i1;
  OOC_INT16 d[3];
  OOC_INT16 dummy[1];

  *(OOC_INT16*)((OOC_INT32)d+(_check_index(0, 3, OOC_UINT8, 24819))*2) = 1;
  *(OOC_INT16*)((OOC_INT32)d+(_check_index(1, 3, OOC_UINT8, 24835))*2) = 30517;
  *(OOC_INT16*)((OOC_INT32)d+(_check_index(2, 3, OOC_UINT8, 24848))*2) = 18944;
  i0 = (OOC_INT32)x;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 24886)), 0);
  Integers__QR((void*)(_check_pointer(i0, 24886)), i1, (void*)(OOC_INT32)d, 3, (void*)(OOC_INT32)dummy, 1, (void*)(OOC_INT32)d, 3);
  i0 = *(OOC_INT16*)((OOC_INT32)d+(_check_index(1, 3, OOC_UINT8, 24960))*2);
  i1 = *(OOC_INT16*)((OOC_INT32)d+(_check_index(2, 3, OOC_UINT8, 24967))*2);
  return ((i0*32768)+i1);
  ;
}

void Integers__ConvertFromString(const OOC_CHAR8 s__ref[], OOC_LEN s_0d, Integers__Integer *x) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)
  OOC_CHAR8 maxChar1;
  OOC_CHAR8 maxChar2;
  OOC_INT32 c;
  OOC_CHAR8 neg;
  OOC_INT32 e;
  OOC_INT32 i;

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  _assert(OOC_TRUE, 110, 25441);
  maxChar1 = (OOC_CHAR8)'9';
  maxChar2 = (OOC_CHAR8)'\000';
  c = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 25632)));
  i0 = i0==(OOC_CHAR8)' ';
  if (i0) goto l3;
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 25648)));
  i0 = i0==(OOC_CHAR8)'\011';
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (i0) goto l7;
  i0=0;
  goto l17;
l7:
  i0=0;
l8_loop:
  i0 = i0+1;
  c = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25632)));
  i1 = i1==(OOC_CHAR8)' ';
  if (i1) goto l11;
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25648)));
  i1 = i1==(OOC_CHAR8)'\011';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l8_loop;
l17:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25712)));
  i1 = i1==(OOC_CHAR8)'-';
  if (i1) goto l24;
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25754)));
  i1 = i1==(OOC_CHAR8)'+';
  if (i1) goto l22;
  neg = OOC_FALSE;
  
  goto l23;
l22:
  i0 = i0+1;
  neg = OOC_FALSE;
  c = i0;
  
l23:
  i1=OOC_FALSE;
  goto l25;
l24:
  i0 = i0+1;
  neg = OOC_TRUE;
  c = i0;
  i1=OOC_TRUE;
l25:
  e = i0;
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25868)));
  i2 = i2>=(OOC_CHAR8)'0';
  if (i2) goto l28;
  i2=OOC_FALSE;
  goto l30;
l28:
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25880)));
  i2 = i2<=(OOC_CHAR8)'9';
  
l30:
  if (i2) goto l36;
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25902)));
  i2 = i2>=(OOC_CHAR8)'A';
  if (i2) goto l34;
  i2=OOC_FALSE;
  goto l38;
l34:
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 25914)));
  i2 = i2<=(OOC_CHAR8)'\000';
  
  goto l38;
l36:
  i2=OOC_TRUE;
l38:
  if (i2) goto l40;
  i2=i0;
  goto l58;
l40:
  i2=i0;
l41_loop:
  i2 = i2+1;
  e = i2;
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 25868)));
  i3 = i3>=(OOC_CHAR8)'0';
  if (i3) goto l44;
  i3=OOC_FALSE;
  goto l46;
l44:
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 25880)));
  i3 = i3<=(OOC_CHAR8)'9';
  
l46:
  if (i3) goto l52;
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 25902)));
  i3 = i3>=(OOC_CHAR8)'A';
  if (i3) goto l50;
  i3=OOC_FALSE;
  goto l54;
l50:
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 25914)));
  i3 = i3<=(OOC_CHAR8)'\000';
  
  goto l54;
l52:
  i3=OOC_TRUE;
l54:
  if (i3) goto l41_loop;
l58:
  i3 = (_div((69*(i2-i0)),320))+2;
  i = i3;
  i3 = (OOC_INT32)Integers__New(i3);
  i4 = i0<i2;
  *x = (Integers__Integer)i3;
  if (!i4) goto l71;
l61_loop:
  i4 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 26125)));
  i4 = i4<=(OOC_CHAR8)'9';
  if (i4) goto l64;
  i4 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 26199)));
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 26191)), 0);
  Integers__Times10((void*)(_check_pointer(i3, 26191)), i5, (i4-65));
  goto l65;
l64:
  i4 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 26156)));
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 26148)), 0);
  Integers__Times10((void*)(_check_pointer(i3, 26148)), i5, (i4-48));
l65:
  i0 = i0+1;
  i4 = i0<i2;
  c = i0;
  if (i4) goto l61_loop;
l71:
  if (!i1) goto l73;
  i0 = _check_pointer(i3, 26264);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT16*)(i0+(_check_index(0, i1, OOC_UINT8, 26264))*2) = -1;
l73:
  i0 = (OOC_INT32)*x;
  i1 = _check_pointer(i0, 26313);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT16*)(i1+(_check_index(1, i2, OOC_UINT8, 26313))*2);
  i1 = i1==0;
  if (!i1) goto l76;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26333)), 0);
  i0 = (OOC_INT32)Integers__Copy((void*)(_check_pointer(i0, 26333)), i1, 0);
  *x = (Integers__Integer)i0;
l76:
  return;
  ;
}

void Integers__ConvertToString(Integers__Integer x, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)x;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26616)), 0);
  Integers__ToString((void*)(_check_pointer(i0, 26616)), i1, (void*)(OOC_INT32)s, s_0d, 10);
  return;
  ;
}

void OOC_Integers_init(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Integers__New(2);
  Integers__ZERO = (Integers__Integer)i0;
  i0 = (OOC_INT32)Integers__New(2);
  Integers__ONE = (Integers__Integer)i0;
  i0 = _check_pointer(i0, 26691);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT16*)(i0+(_check_index(1, i1, OOC_UINT8, 26691))*2) = 1;
  return;
  ;
}

/* --- */
