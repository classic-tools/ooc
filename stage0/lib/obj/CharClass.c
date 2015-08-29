#include <CharClass.d>
#include <__oo2c.h>

OOC_CHAR8 CharClass__IsNumeric(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_CHAR8)'0'<=i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i0<=(OOC_CHAR8)'9';
  
l4:
  return i0;
  ;
}

OOC_CHAR8 CharClass__IsLetter(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_CHAR8)'a'<=i0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = i0<=(OOC_CHAR8)'z';
  
l5:
  if (i1) goto l11;
  i1 = (OOC_CHAR8)'A'<=i0;
  if (i1) goto l9;
  i0=OOC_FALSE;
  goto l12;
l9:
  i0 = i0<=(OOC_CHAR8)'Z';
  
  goto l12;
l11:
  i0=OOC_TRUE;
l12:
  return i0;
  ;
}

OOC_CHAR8 CharClass__IsUpper(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_CHAR8)'A'<=i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i0<=(OOC_CHAR8)'Z';
  
l4:
  return i0;
  ;
}

OOC_CHAR8 CharClass__IsLower(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_CHAR8)'a'<=i0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = i0<=(OOC_CHAR8)'z';
  
l4:
  return i0;
  ;
}

OOC_CHAR8 CharClass__IsControl(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = ch;
  return (i0<(OOC_CHAR8)' ');
  ;
}

OOC_CHAR8 CharClass__IsWhiteSpace(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0==(OOC_CHAR8)' ';
  if (i1) goto l3;
  i1 = i0==(OOC_CHAR8)'\014';
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1 = i0==(OOC_CHAR8)'\012';
  
  goto l9;
l7:
  i1=OOC_TRUE;
l9:
  if (i1) goto l11;
  i1 = i0==(OOC_CHAR8)'\015';
  
  goto l13;
l11:
  i1=OOC_TRUE;
l13:
  if (i1) goto l15;
  i1 = i0==(OOC_CHAR8)'\011';
  
  goto l17;
l15:
  i1=OOC_TRUE;
l17:
  if (i1) goto l19;
  i0 = i0==(OOC_CHAR8)'\013';
  
  goto l20;
l19:
  i0=OOC_TRUE;
l20:
  return i0;
  ;
}

OOC_CHAR8 CharClass__IsEol(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = ch;
  return (i0==(OOC_CHAR8)'\012');
  ;
}

void OOC_CharClass_init(void) {

  *(OOC_UINT8*)((OOC_INT32)CharClass__systemEol+(_check_index(0, 3, OOC_UINT8, 2971))) = (OOC_CHAR8)'\012';
  *(OOC_UINT8*)((OOC_INT32)CharClass__systemEol+(_check_index(1, 3, OOC_UINT8, 2997))) = (OOC_CHAR8)'\000';
  return;
  ;
}

/* --- */
