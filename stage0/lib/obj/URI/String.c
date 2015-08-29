#include <URI/String.d>
#include <__oo2c.h>
#include <setjmp.h>

URI_String__StringPtr URI_String__Extract(const URI_String__String str__ref, OOC_LEN str_0d, OOC_INT16 start, OOC_INT16 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  URI_String__StringPtr ptr;
  OOC_INT16 i;

  i0 = start;
  i1 = end;
  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i2 = (OOC_INT32)RT0__NewObject(_td_URI_String__StringPtr.baseTypes[0], ((i1-i0)+1));
  ptr = (URI_String__StringPtr)i2;
  i0 = i0!=i1;
  i = (OOC_INT32)0;
  if (i0) goto l3;
  i0=(OOC_INT32)0;
  goto l9;
l3:
  i0=(OOC_INT32)0;
l4_loop:
  i3 = _check_pointer(i2, 1286);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = start;
  i6 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i5, str_0d, OOC_UINT16, 1296)));
  *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 1286))) = i6;
  i0 = i0+1;
  i = i0;
  i3 = i5+1;
  i4 = i3!=i1;
  start = i3;
  if (i4) goto l4_loop;
l9:
  i1 = _check_pointer(i2, 1342);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  *(OOC_UINT8*)(i1+(_check_index(i0, i3, OOC_UINT16, 1342))) = (OOC_CHAR8)'\000';
  return (URI_String__StringPtr)i2;
  ;
}

URI_String__StringPtr URI_String__Copy(const URI_String__String str__ref, OOC_LEN str_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)URI_String__Extract((void*)(OOC_INT32)str, str_0d, (OOC_INT32)0, i0);
  return (URI_String__StringPtr)i0;
  ;
}

URI_String__StringPtr URI_String__Unescape(URI_String__StringPtr str) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT16 i;
  URI_String__StringPtr res;
  OOC_INT16 j;
  auto OOC_INT16 URI_String__Unescape_Hex(OOC_CHAR8 ch);
    
    OOC_INT16 URI_String__Unescape_Hex(OOC_CHAR8 ch) {
      register OOC_INT32 i0;

      i0 = ch;
      switch (i0) {
      case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
        return (i0-48);
        goto l6;
      case (OOC_CHAR8)'a' ... (OOC_CHAR8)'f':
        return (i0-87);
        goto l6;
      case (OOC_CHAR8)'A' ... (OOC_CHAR8)'F':
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
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = _check_pointer(i0, 2256);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT16, 2256)));
  i1 = i1!=(OOC_CHAR8)'%';
  
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
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = _check_pointer(i0, 2256);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 2256)));
  i2 = i2!=(OOC_CHAR8)'%';
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = _check_pointer(i0, 2304);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 2304)));
  i1 = i1==(OOC_CHAR8)'\000';
  if (i1) goto l36;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2369)), 0);
  res = (URI_String__StringPtr)((OOC_INT32)RT0__NewObject(_td_URI_String__StringPtr.baseTypes[0], i1));
  i = 0;
  j = 0;
  i0 = _check_pointer(i0, 2412);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT16, 2412)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l22;
  i0=0;
  goto l35;
l22:
  i0=0;i1=0;
l23_loop:
  i2 = (OOC_INT32)str;
  i3 = _check_pointer(i2, 2440);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT16, 2440)));
  i3 = i3==(OOC_CHAR8)'%';
  if (i3) goto l26;
  i3 = (OOC_INT32)res;
  i3 = _check_pointer(i3, 2636);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = _check_pointer(i2, 2646);
  i5 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i5, OOC_UINT16, 2646)));
  *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT16, 2636))) = i2;
  i0 = i0+1;
  i = i0;
  
  goto l30;
l26:
  i3 = (OOC_INT32)res;
  i3 = _check_pointer(i3, 2469);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = _check_pointer(i2, 2488);
  i5 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = *(OOC_UINT8*)(i2+(_check_index((i0+1), i5, OOC_UINT16, 2488)));
  i0 = URI_String__Unescape_Hex(i0);
  i2 = (OOC_INT32)str;
  i2 = _check_pointer(i2, 2507);
  i5 = i;
  i6 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index((i5+2), i6, OOC_UINT16, 2507)));
  i2 = URI_String__Unescape_Hex(i2);
  *(OOC_UINT8*)(i3+(_check_index(i1, i4, OOC_UINT16, 2469))) = ((i0*16)+i2);
  i0 = (OOC_INT32)res;
  i1 = _check_pointer(i0, 2533);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = j;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 2533)));
  i1 = i1==(OOC_CHAR8)'\000';
  if (!i1) goto l29;
  i0 = _check_pointer(i0, 2563);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT16, 2563))) = (OOC_CHAR8)' ';
l29:
  i0 = i;
  i0 = i0+3;
  i = i0;
  
l30:
  i1 = j;
  i1 = i1+1;
  j = i1;
  i2 = (OOC_INT32)str;
  i2 = _check_pointer(i2, 2412);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT16, 2412)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l23_loop;
l34:
  i0=i1;
l35:
  i1 = (OOC_INT32)res;
  i2 = _check_pointer(i1, 2718);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT16, 2718))) = (OOC_CHAR8)'\000';
  return (URI_String__StringPtr)i1;
  goto l37;
l36:
  return (URI_String__StringPtr)i0;
l37:
  _failed_function(1546); return 0;
  ;
}

void URI_String__AppendEscaped(const OOC_CHAR8 source__ref[], OOC_LEN source_0d, const OOC_CHAR8 unreserved__ref[], OOC_LEN unreserved_0d, OOC_CHAR8 dest[], OOC_LEN dest_0d) {
  register OOC_INT32 i0,i1,i2;
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
  i = (OOC_INT32)0;
  i0 = Strings__Length((void*)(OOC_INT32)dest, dest_0d);
  j = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index((OOC_INT32)0, source_0d, OOC_UINT16, 3610)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (!i1) goto l30;
  i1=i0;i0=(OOC_INT32)0;
l4_loop:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3663)));
  i2 = URI_CharClass__IsUnreserved(i2);
  i2 = !i2;
  if (i2) goto l7;
  i2=OOC_FALSE;
  goto l9;
l7:
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3706)));
  i2 = URI_CharClass__IsMember(i2, (void*)(OOC_INT32)unreserved, unreserved_0d);
  i2 = !i2;
  
l9:
  if (i2) goto l15;
  i2 = i1<dest_0d;
  if (i2) goto l13;
  i0=i1;
  goto l25;
l13:
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 4081)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT16, 4068))) = i0;
  i0 = i1+1;
  j = i0;
  
  goto l25;
l15:
  i2 = i1<dest_0d;
  if (!i2) goto l18;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT16, 3775))) = (OOC_CHAR8)'%';
l18:
  i1 = i1+1;
  i2 = i1<dest_0d;
  if (!i2) goto l21;
  i0 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i0, source_0d, OOC_UINT16, 3875)));
  i0 = URI_String__AppendEscaped_ToHex((i0>>4));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i1, dest_0d, OOC_UINT16, 3848))) = i0;
l21:
  i0 = j;
  i0 = i0+2;
  i1 = i0<dest_0d;
  if (!i1) goto l24;
  i1 = i;
  i1 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT16, 3977)));
  i1 = URI_String__AppendEscaped_ToHex((_mod(i1,16)));
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT16, 3950))) = i1;
l24:
  i0 = j;
  i0 = i0+3;
  j = i0;
  
l25:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i1, source_0d, OOC_UINT16, 3610)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (!i2) goto l30;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l4_loop;
l30:
  i1 = i0<dest_0d;
  if (i1) goto l33;
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index((dest_0d-1), dest_0d, OOC_UINT32, 4204))) = (OOC_CHAR8)'\000';
  goto l34;
l33:
  *(OOC_UINT8*)((OOC_INT32)dest+(_check_index(i0, dest_0d, OOC_UINT16, 4175))) = (OOC_CHAR8)'\000';
l34:
  return;
  ;
}

void OOC_URI_String_init(void) {

  return;
  ;
}

/* --- */
