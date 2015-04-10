#include "IntConv.d"
#include "__oo2c.h"

static void IntConv__WState(OOC_CHAR8 inputCh, OOC_INT8 *chClass, ConvTypes__ScanState *nextState) {
  register OOC_INT32 i0;

  i0 = inputCh;
  i0 = CharClass__IsNumeric(i0);
  if (i0) goto l3;
  *chClass = 3;
  *nextState = (ConvTypes__ScanState)(OOC_INT32)0;
  goto l4;
l3:
  *chClass = 1;
  i0 = (OOC_INT32)IntConv__W;
  *nextState = (ConvTypes__ScanState)i0;
l4:
  return;
  ;
}

static void IntConv__SState(OOC_CHAR8 inputCh, OOC_INT8 *chClass, ConvTypes__ScanState *nextState) {
  register OOC_INT32 i0;

  i0 = inputCh;
  i0 = CharClass__IsNumeric(i0);
  if (i0) goto l3;
  *chClass = 2;
  i0 = (OOC_INT32)IntConv__S;
  *nextState = (ConvTypes__ScanState)i0;
  goto l4;
l3:
  *chClass = 1;
  i0 = (OOC_INT32)IntConv__W;
  *nextState = (ConvTypes__ScanState)i0;
l4:
  return;
  ;
}

void IntConv__ScanInt(OOC_CHAR8 inputCh, OOC_INT8 *chClass, ConvTypes__ScanState *nextState) {
  register OOC_INT32 i0,i1;

  i0 = inputCh;
  i1 = CharClass__IsWhiteSpace(i0);
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR8)'+';
  if (i1) goto l5;
  i1 = i0==(OOC_CHAR8)'-';
  
  goto l7;
l5:
  i1=OOC_TRUE;
l7:
  if (i1) goto l13;
  i0 = CharClass__IsNumeric(i0);
  if (i0) goto l11;
  *chClass = 2;
  i0 = (OOC_INT32)IntConv__SI;
  *nextState = (ConvTypes__ScanState)i0;
  goto l16;
l11:
  i0 = (OOC_INT32)IntConv__W;
  *chClass = 1;
  *nextState = (ConvTypes__ScanState)i0;
  goto l16;
l13:
  i0 = (OOC_INT32)IntConv__S;
  *chClass = 1;
  *nextState = (ConvTypes__ScanState)i0;
  goto l16;
l15:
  *chClass = 0;
  i0 = (OOC_INT32)IntConv__SI;
  *nextState = (ConvTypes__ScanState)i0;
l16:
  return;
  ;
}

OOC_INT8 IntConv__FormatInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_INT16 index;
  OOC_INT8 prev;
  ConvTypes__ScanState state;
  OOC_CHAR8 positive;
  OOC_INT16 start;
  OOC_CHAR8 ch;
  OOC_INT8 _class;
  auto OOC_CHAR8 IntConv__FormatInt_LessOrEqual(OOC_CHAR8 high[], OOC_LEN high_0d, OOC_INT16 start, OOC_INT16 end);
    
    OOC_CHAR8 IntConv__FormatInt_LessOrEqual(OOC_CHAR8 high[], OOC_LEN high_0d, OOC_INT16 start, OOC_INT16 end) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = start;
      i1 = end;
      i0 = i0!=i1;
      if (!i0) goto l16;
      i0=0;
l3_loop:
      i2 = start;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 5448)));
      i4 = *(OOC_UINT8*)((OOC_INT32)high+(_check_index(i0, high_0d, OOC_UINT16, 5462)));
      i3 = i3<i4;
      if (i3) goto l10;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 5509)));
      i4 = *(OOC_UINT8*)((OOC_INT32)high+(_check_index(i0, high_0d, OOC_UINT16, 5523)));
      i3 = i3>i4;
      if (i3) goto l8;
      start = (i2+1);
      i0 = i0+1;
      
      goto l11;
l8:
      return OOC_FALSE;
      
      goto l11;
l10:
      return OOC_TRUE;
      
l11:
      i2 = start;
      i2 = i2!=i1;
      if (i2) goto l3_loop;
l16:
      return OOC_TRUE;
      ;
    }


  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  index = 0;
  prev = 0;
  i0 = (OOC_INT32)IntConv__SI;
  state = (ConvTypes__ScanState)i0;
  positive = OOC_TRUE;
  start = -1;
  i0=0;i1=0;
l1_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 5816)));
  ch = i2;
  i3 = (OOC_INT32)state;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 5834));
  ((void (*)(OOC_CHAR8 ch, OOC_INT8 *cl, ConvTypes__ScanState *st))i3)(i2, (void*)(OOC_INT32)&_class, (void*)(OOC_INT32)&state);
  i3 = _class;
  switch (i3) {
  case 0:
    goto l59;
  case 1:
    i1 = i2==(OOC_CHAR8)'-';
    if (i1) goto l18;
    i1 = i2==(OOC_CHAR8)'+';
    if (i1) goto l16;
    i1 = start;
    i1 = i1<0;
    if (i1) goto l11;
    i1=OOC_FALSE;
    goto l13;
l11:
    i1 = i2!=(OOC_CHAR8)'0';
    
l13:
    if (i1) goto l14;
    goto l59;
l14:
    start = i0;
    goto l59;
l16:
    positive = OOC_TRUE;
    goto l59;
l18:
    positive = OOC_FALSE;
    goto l59;
  case 2:
    i0 = i1==0;
    if (i0) goto l23;
    i0=OOC_FALSE;
    goto l25;
l23:
    i0 = i2==(OOC_CHAR8)'\000';
    
l25:
    if (i0) goto l27;
    return 2;
    goto l59;
l27:
    return 3;
    goto l59;
  case 3:
    i1 = i2==(OOC_CHAR8)'\000';
    if (i1) goto l32;
    return 2;
    goto l59;
l32:
    i1 = start;
    i2 = i0-i1;
    i3 = i2<10;
    if (i3) goto l51;
    i2 = i2==10;
    if (i2) goto l37;
    i0=OOC_FALSE;
    goto l53;
l37:
    i2 = positive;
    if (i2) goto l40;
    i0=OOC_FALSE;
    goto l42;
l40:
    i0 = IntConv__FormatInt_LessOrEqual((void*)(OOC_INT32)IntConv__maxInt, 11, i1, i0);
    
l42:
    if (i0) goto l48;
    i0 = positive;
    i0 = !i0;
    if (i0) goto l46;
    i0=OOC_FALSE;
    goto l53;
l46:
    i0 = index;
    i1 = start;
    i0 = IntConv__FormatInt_LessOrEqual((void*)(OOC_INT32)IntConv__minInt, 11, i1, i0);
    
    goto l53;
l48:
    i0=OOC_TRUE;
    goto l53;
l51:
    i0=OOC_TRUE;
l53:
    if (i0) goto l55;
    return 1;
    goto l59;
l55:
    return 0;
    goto l59;
  default:
    _failed_case(i3, 5860);
    goto l59;
  }
l59:
  i0 = _class;
  i1 = index;
  i1 = i1+1;
  prev = i0;
  index = i1;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l1_loop;
l61:
  ;
}

OOC_INT32 IntConv__ValueInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = IntConv__FormatInt((void*)(OOC_INT32)str, str_0d);
  i0 = i0==0;
  if (i0) goto l3;
  return 0;
  goto l47;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 7156)));
  i0 = i0<(OOC_CHAR8)'0';
  if (i0) goto l6;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT16, 7174)));
  i0 = i0>(OOC_CHAR8)'9';
  
  goto l8;
l6:
  i0=OOC_TRUE;
l8:
  if (i0) goto l10;
  i0=OOC_TRUE;i1=0;
  goto l25;
l10:
  i0=0;i1=OOC_TRUE;
l11_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7235)));
  i2 = i2==(OOC_CHAR8)'-';
  if (!i2) goto l15;
  i1=OOC_FALSE;
l15:
  i0 = i0+1;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7156)));
  i2 = i2<(OOC_CHAR8)'0';
  if (i2) goto l18;
  i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 7174)));
  i2 = i2>(OOC_CHAR8)'9';
  
  goto l20;
l18:
  i2=OOC_TRUE;
l20:
  if (i2) goto l11_loop;
l23:
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l25:
  if (i0) goto l36;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 7479)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l29;
  i0=0;
  goto l46;
l29:
  i0=0;
l30_loop:
  i2 = i1+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 7522)));
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 7479)));
  i0 = (i0*10)-(i1-48);
  i1 = i3!=(OOC_CHAR8)'\000';
  if (!i1) goto l46;
  i1=i2;
  goto l30_loop;
l36:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 7365)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l39;
  i0=0;
  goto l46;
l39:
  i0=0;
l40_loop:
  i2 = i1+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT16, 7408)));
  i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i2, str_0d, OOC_UINT16, 7365)));
  i0 = (i0*10)+(i1-48);
  i1 = i3!=(OOC_CHAR8)'\000';
  if (!i1) goto l46;
  i1=i2;
  goto l40_loop;
l46:
  return i0;
l47:
  _failed_function(6729); return 0;
  ;
}

OOC_INT16 IntConv__LengthInt(OOC_INT32 _int) {
  register OOC_INT32 i0,i1;

  i0 = _int;
  i1 = i0==(-2147483647-1);
  if (i1) goto l16;
  i1 = i0<=0;
  if (i1) goto l5;
  i0=0;
  goto l6;
l5:
  _int = (-i0);
  i0=1;
l6:
  i1 = _int;
  i1 = i1>0;
  if (!i1) goto l15;
l10_loop:
  i1 = _int;
  i1 = _div(i1,10);
  _int = i1;
  i1 = i1>0;
  i0 = i0+1;
  if (i1) goto l10_loop;
l15:
  return i0;
  goto l17;
l16:
  return 11;
l17:
  _failed_function(7706); return 0;
  ;
}

void OOC_IntConv_init(void) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_ConvTypes__ScanState.baseTypes[0]);
  IntConv__S = (ConvTypes__ScanState)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_ConvTypes__ScanState.baseTypes[0]);
  IntConv__W = (ConvTypes__ScanState)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_ConvTypes__ScanState.baseTypes[0]);
  IntConv__SI = (ConvTypes__ScanState)i2;
  *(OOC_INT32*)(_check_pointer(i0, 8362)) = (OOC_INT32)&IntConv__SState;
  *(OOC_INT32*)(_check_pointer(i1, 8375)) = (OOC_INT32)&IntConv__WState;
  *(OOC_INT32*)(_check_pointer(i2, 8389)) = (OOC_INT32)&IntConv__ScanInt;
  _copy_8("2147483648",(OOC_INT32)IntConv__minInt,11);
  _copy_8("2147483647",(OOC_INT32)IntConv__maxInt,11);
  return;
  ;
}

/* --- */
