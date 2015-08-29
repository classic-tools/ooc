#include <URI/String.d>
#include <__oo2c.h>
#include <setjmp.h>

URI_String__StringPtr URI_String__Extract(const URI_String__String str__ref, OOC_LEN str_0d, OOC_INT16 start, OOC_INT16 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  URI_String__StringPtr ptr;
  OOC_INT16 i;

  i0 = end;
  i1 = start;
  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i2 = (OOC_INT32)RT0__NewObject(_td_URI_String__StringPtr.baseTypes[0], ((i0-i1)+1));
  ptr = (URI_String__StringPtr)i2;
  i = 0;
  i3 = i1!=i0;
  if (i3) goto l3;
  i0=0;
  goto l9;
l3:
  i3=i1;i1=0;
l4_loop:
  i4 = _check_pointer(i2, 1286);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i3, str_0d, OOC_UINT16, 1296)));
  *(OOC_UINT8*)(i4+(_check_index(i1, i5, OOC_UINT16, 1286))) = i6;
  i1 = i1+1;
  i = i1;
  i3 = i3+1;
  start = i3;
  i4 = i3!=i0;
  if (i4) goto l4_loop;
l8:
  i0=i1;
l9:
  i1 = _check_pointer(i2, 1342);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i3, OOC_UINT16, 1342))) = 0u;
  return (URI_String__StringPtr)i2;
  ;
}

URI_String__StringPtr URI_String__Copy(const URI_String__String str__ref, OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, 0, i0);
  return (URI_String__StringPtr)i0;
  ;
}

URI_String__StringPtr URI_String__Unescape(URI_String__StringPtr str) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT16 i;
  URI_String__StringPtr res;
  OOC_INT16 j;
  auto OOC_INT16 URI_String__Unescape_Hex(OOC_CHAR8 ch);
    
    OOC_INT16 URI_String__Unescape_Hex(OOC_CHAR8 ch) {
      register OOC_INT32 i0;

      i0 = ch;
      switch (i0) {
      case 48u ... 57u:
        return (i0-48);
        goto l6;
      case 97u ... 102u:
        return (i0-87);
        goto l6;
      case 65u ... 70u:
        return (i0-55);
        goto l6;
      default:
        _failed_case(i0, 2009);
        goto l6;
      }
l6:
      _failed_function(1968); return 0;
      ;
    }


  i = 0;
  i0 = (OOC_INT32)str;
  i1 = _check_pointer(i0, 2240);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT16, 2240)));
  i1 = i1!=0u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = _check_pointer(i0, 2256);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT16, 2256)));
  i1 = i1!=37u;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  i = i1;
  i2 = _check_pointer(i0, 2240);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 2240)));
  i2 = i2!=0u;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = _check_pointer(i0, 2256);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 2256)));
  i2 = i2!=37u;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = _check_pointer(i0, 2304);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 2304)));
  i1 = i1==0u;
  if (i1) goto l36;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2369)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_URI_String__StringPtr.baseTypes[0], i1);
  res = (URI_String__StringPtr)i1;
  i = 0;
  j = 0;
  i2 = _check_pointer(i0, 2412);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT16, 2412)));
  i2 = i2!=0u;
  if (i2) goto l22;
  i0=0;
  goto l35;
l22:
  i2=0;i3=0;
l23_loop:
  i4 = _check_pointer(i0, 2440);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT16, 2440)));
  i4 = i4==37u;
  if (i4) goto l26;
  i4 = _check_pointer(i1, 2636);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i0, 2646);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(i2, i7, OOC_UINT16, 2646)));
  *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT16, 2636))) = i6;
  i2 = i2+1;
  i = i2;
  
  goto l30;
l26:
  i4 = _check_pointer(i1, 2469);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i0, 2488);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index((i2+1), i7, OOC_UINT16, 2488)));
  i6 = URI_String__Unescape_Hex(i6);
  i7 = _check_pointer(i0, 2507);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index((i2+2), i8, OOC_UINT16, 2507)));
  i7 = URI_String__Unescape_Hex(i7);
  *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT16, 2469))) = ((i6*16)+i7);
  i4 = _check_pointer(i1, 2533);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT16, 2533)));
  i4 = i4==0u;
  if (!i4) goto l29;
  i4 = _check_pointer(i1, 2563);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT16, 2563))) = 32u;
l29:
  i2 = i2+3;
  i = i2;
  
l30:
  i3 = i3+1;
  j = i3;
  i4 = _check_pointer(i0, 2412);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT16, 2412)));
  i4 = i4!=0u;
  if (i4) goto l23_loop;
l34:
  i0=i3;
l35:
  i2 = _check_pointer(i1, 2718);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT16, 2718))) = 0u;
  return (URI_String__StringPtr)i1;
  goto l37;
l36:
  return (URI_String__StringPtr)i0;
l37:
  _failed_function(1546); return 0;
  ;
}

void URI_String__AppendEscaped(const OOC_CHAR8 source__ref[], OOC_LEN source_0d, const OOC_CHAR8 unreserved__ref[], OOC_LEN unreserved_0d, OOC_CHAR8 dest[], OOC_LEN dest_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(source,OOC_CHAR8 ,source_0d)
  OOC_ALLOCATE_VPAR(unreserved,OOC_CHAR8 ,unreserved_0d)
  OOC_INT16 i;
  OOC_INT16 j;
  auto OOC_CHAR8 URI_String__AppendEscaped_ToHex(OOC_INT16 i);
    
    OOC_CHAR8 URI_String__AppendEscaped_ToHex(OOC_INT16 i) {
      register OOC_INT32 i0,i1;

      i0 = i;
      i1 = i0<10;
      if (i1) goto l3;
      return (i0+55);
      goto l4;
l3:
      return (i0+48);
l4:
      _failed_function(3376); return 0;
      ;
    }


  OOC_INITIALIZE_VPAR(source__ref,source,OOC_CHAR8 ,source_0d)
  OOC_INITIALIZE_VPAR(unreserved__ref,unreserved,OOC_CHAR8 ,unreserved_0d)
  i = 0;
  i0 = Strings__Length((void*)(OOC_INT32)dest, dest_0d);
  j = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(0, source_0d, OOC_UINT16, 3610)));
  i1 = i1!=0u;
  if (!i1) goto l30;
  i1=i0;i0=0;
l4_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3663)));
  i2 = URI_CharClass__IsUnreserved(i2);
  i2 = !i2;
  if (i2) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3706)));
  i2 = URI_CharClass__IsMember(i2, (void*)(OOC_INT32)unreserved, unreserved_0d);
  i2 = !i2;
  
l9:
  if (i2) goto l15;
  i2 = i1<dest_0d;
  if (!i2) goto l25;
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 4081)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT16, 4068))) = i2;
  i1 = i1+1;
  j = i1;
  
  goto l25;
l15:
  i2 = i1<dest_0d;
  if (!i2) goto l18;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT16, 3775))) = 37u;
l18:
  i2 = i1+1;
  i3 = i2<dest_0d;
  if (!i3) goto l21;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3875)));
  i3 = URI_String__AppendEscaped_ToHex((i3>>4));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT16, 3848))) = i3;
l21:
  i2 = i1+2;
  i3 = i2<dest_0d;
  if (!i3) goto l24;
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3977)));
  i3 = URI_String__AppendEscaped_ToHex((_mod(i3,16)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i2, dest_0d, OOC_UINT16, 3950))) = i3;
l24:
  i1 = i1+3;
  j = i1;
  
l25:
  i0 = i0+1;
  i = i0;
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3610)));
  i2 = i2!=0u;
  if (i2) goto l4_loop;
l29:
  i0=i1;
l30:
  i1 = i0<dest_0d;
  if (i1) goto l33;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((dest_0d-1), dest_0d, OOC_UINT32, 4204))) = 0u;
  goto l34;
l33:
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT16, 4175))) = 0u;
l34:
  return;
  ;
}

void OOC_URI_String_init(void) {

  return;
  ;
}

/* --- */
