#include <OOC/Scanner/Integer.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Scanner_Integer__ErrorContextDesc_GetTemplate(OOC_Scanner_Integer__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 495))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,103,101,114,32,118,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){72,101,120,97,100,101,99,105,109,97,108,32,99,111,110,115,116,97,110,116,32,119,111,117,108,100,32,98,101,32,109,97,112,112,101,100,32,116,111,32,110,101,103,97,116,105,118,101,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l5;
  default:
    _failed_case(i1, 487);
    goto l5;
  }
l5:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 675)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

Msg__Msg OOC_Scanner_Integer__Convert10(OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 *_int) {
  register OOC_INT32 i0,i1;
  OOC_INT8 format;

  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 875)), 0);
  IntStr__StrToInt((void*)(_check_pointer(i0, 875)), i1, (void*)(OOC_INT32)_int, (void*)(OOC_INT32)&format);
  i0 = format;
  i0 = i0==1;
  if (i0) goto l3;
  return (Msg__Msg)(OOC_INT32)0;
  goto l4;
l3:
  *_int = 1;
  i0 = (OOC_INT32)OOC_Scanner_Integer__integerContext;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, 1);
  return (Msg__Msg)i0;
l4:
  _failed_function(737); return 0;
  ;
}

Msg__Msg OOC_Scanner_Integer__Convert16(OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 *_int) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 spos;
  OOC_INT32 epos;
  auto OOC_INT16 OOC_Scanner_Integer__Convert16_GetDigit(OOC_CHAR8 c);
    
    OOC_INT16 OOC_Scanner_Integer__Convert16_GetDigit(OOC_CHAR8 c) {
      register OOC_INT32 i0,i1;

      i0 = c;
      i1 = 48<=i0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_UINT8)i0<=(OOC_UINT8)57;
      
l5:
      if (i1) goto l7;
      i0 = i0-55;
      
      goto l8;
l7:
      i0 = i0-48;
      
l8:
      return i0;
      ;
    }


  spos = 0;
  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1647)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i0, 1647)), i1);
  epos = i1;
  *_int = 0;
  i2 = _check_pointer(i0, 1713);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 1713)));
  i2 = i2==48u;
  if (i2) goto l3;
  i2=0;
  goto l9;
l3:
  i2=0;
l4_loop:
  i2 = i2+1;
  spos = i2;
  i3 = _check_pointer(i0, 1713);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 1713)));
  i3 = i3==48u;
  if (i3) goto l4_loop;
l9:
  i3 = (i1-i2)>7;
  if (i3) goto l30;
  i3 = i2<=i1;
  if (!i3) goto l31;
  i3 = _check_pointer(i0, 2027);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 2027)));
  i3 = OOC_Scanner_Integer__Convert16_GetDigit(i3);
  *_int = i3;
  i2 = i2+1;
  spos = i2;
  i4 = (i1-i2)==6;
  if (i4) goto l16;
  i4=0u;
  goto l18;
l16:
  i4 = i3>=8;
  
l18:
  if (!i4) goto l20;
  i4 = (OOC_INT32)OOC_Scanner_Integer__integerContext;
  i4 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i4, 2);
  return (Msg__Msg)i4;
l20:
  i4 = i2<=i1;
  if (!i4) goto l31;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
l23_loop:
  i4 = _check_pointer(i0, 2576);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT32, 2576)));
  i4 = OOC_Scanner_Integer__Convert16_GetDigit(i4);
  i2 = (i2*16)+i4;
  *_int = i2;
  i3 = i3+1;
  spos = i3;
  i4 = i3<=i1;
  if (i4) goto l23_loop;
  goto l31;
l30:
  *_int = 1;
  i0 = (OOC_INT32)OOC_Scanner_Integer__integerContext;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, 1);
  return (Msg__Msg)i0;
l31:
  return (Msg__Msg)(OOC_INT32)0;
  ;
}

void OOC_OOC_Scanner_Integer_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Integer__ErrorContext.baseTypes[0]);
  OOC_Scanner_Integer__integerContext = (OOC_Scanner_Integer__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Scanner:Integer", 20);
  return;
  ;
}

/* --- */
