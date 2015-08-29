#include <URI/CharClass.d>
#include <__oo2c.h>

OOC_CHAR8 URI_CharClass__IsAlpha(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i0 = _cap(i0);
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

OOC_CHAR8 URI_CharClass__SkipAlpha(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0,i1;

  i0 = *pos;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2099)));
  i1 = (OOC_CHAR8)'A'<=(_cap(i1));
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2118)));
  i1 = (_cap(i1))<=(OOC_CHAR8)'Z';
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l8;
l7:
  *pos = (i0+1);
  return OOC_TRUE;
l8:
  _failed_function(2004); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__IsDigit(OOC_CHAR8 ch) {
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

OOC_CHAR8 URI_CharClass__SkipDigit(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0,i1;

  i0 = *pos;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2428)));
  i1 = (OOC_CHAR8)'0'<=i1;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 2441)));
  i1 = i1<=(OOC_CHAR8)'9';
  
l5:
  if (i1) goto l7;
  return OOC_FALSE;
  goto l8;
l7:
  *pos = (i0+1);
  return OOC_TRUE;
l8:
  _failed_function(2338); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__IsAlphaNum(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = URI_CharClass__IsAlpha(i0);
  if (i1) goto l3;
  i0 = URI_CharClass__IsDigit(i0);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipAlphaNum(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0;

  i0 = URI_CharClass__SkipAlpha((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  if (i0) goto l3;
  i0 = URI_CharClass__SkipDigit((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 URI_CharClass__IsMember(OOC_CHAR8 ch, const OOC_CHAR8 set__ref[], OOC_LEN set_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(set,OOC_CHAR8 ,set_0d)

  OOC_INITIALIZE_VPAR(set__ref,set,OOC_CHAR8 ,set_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)set+(_check_index((OOC_INT32)0, set_0d, OOC_UINT16, 2938)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)set+(_check_index((OOC_INT32)0, set_0d, OOC_UINT16, 2954)));
  i1 = ch;
  i0 = i0!=i1;
  
l5:
  if (i0) goto l7;
  i0=(OOC_INT32)0;
  goto l17;
l7:
  i0 = ch;
  i1=(OOC_INT32)0;
l8_loop:
  i1 = i1+1;
  i2 = *(OOC_UINT8*)((OOC_INT32)set+(_check_index(i1, set_0d, OOC_UINT16, 2938)));
  i2 = i2!=(OOC_CHAR8)'\000';
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((OOC_INT32)set+(_check_index(i1, set_0d, OOC_UINT16, 2954)));
  i2 = i2!=i0;
  
l13:
  if (i2) goto l8_loop;
l16:
  i0=i1;
l17:
  i0 = *(OOC_UINT8*)((OOC_INT32)set+(_check_index(i0, set_0d, OOC_UINT16, 3005)));
  return (i0!=(OOC_CHAR8)'\000');
  ;
}

OOC_CHAR8 URI_CharClass__IsReserved(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = ch;
  i0 = URI_CharClass__IsMember(i0, ";/?:@&=+$,[]", 13);
  return i0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipReserved(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0,i1;

  i0 = *pos;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 3242)));
  i1 = URI_CharClass__IsMember(i1, ";/?:@&=+$,[]", 13);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  *pos = (i0+1);
  return OOC_TRUE;
l4:
  _failed_function(3147); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__IsMark(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = ch;
  switch (i0) {
  case (OOC_CHAR8)'-':
  case (OOC_CHAR8)'_':
  case (OOC_CHAR8)'.':
  case (OOC_CHAR8)'!':
  case (OOC_CHAR8)'~':
  case (OOC_CHAR8)'*':
  case (OOC_CHAR8)'\047':
  case (OOC_CHAR8)'(':
  case (OOC_CHAR8)')':
    return OOC_TRUE;
    goto l4;
  default:
    return OOC_FALSE;
    goto l4;
  }
l4:
  _failed_function(3366); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipMark(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0,i1;

  i0 = *pos;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 3637)));
  i1 = URI_CharClass__IsMark(i1);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  *pos = (i0+1);
  return OOC_TRUE;
l4:
  _failed_function(3548); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__IsUnreserved(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = URI_CharClass__IsAlphaNum(i0);
  if (i1) goto l3;
  i0 = URI_CharClass__IsMark(i0);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipUnreserved(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0;

  i0 = URI_CharClass__SkipAlphaNum((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  if (i0) goto l3;
  i0 = URI_CharClass__SkipMark((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipEscaped(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0,i1;
  auto OOC_CHAR8 URI_CharClass__SkipEscaped_SkipHex(OOC_CHAR8 ch);
    
    OOC_CHAR8 URI_CharClass__SkipEscaped_SkipHex(OOC_CHAR8 ch) {
      register OOC_INT32 i0,i1;

      i0 = ch;
      i1 = (OOC_CHAR8)'0'<=i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = i0<=(OOC_CHAR8)'9';
      
l5:
      if (i1) goto l11;
      i0 = _cap(i0);
      i1 = (OOC_CHAR8)'A'<=i0;
      if (i1) goto l9;
      i0=OOC_FALSE;
      goto l12;
l9:
      i0 = i0<=(OOC_CHAR8)'F';
      
      goto l12;
l11:
      i0=OOC_TRUE;
l12:
      return i0;
      ;
    }


  i0 = *pos;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 4263)));
  i1 = i1==(OOC_CHAR8)'%';
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0+1), str_0d, OOC_UINT16, 4290)));
  i0 = URI_CharClass__SkipEscaped_SkipHex(i0);
  
l5:
  if (i0) goto l7;
  i0=OOC_FALSE;
  goto l9;
l7:
  i0 = *pos;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0+2), str_0d, OOC_UINT16, 4313)));
  i0 = URI_CharClass__SkipEscaped_SkipHex(i0);
  
l9:
  if (i0) goto l11;
  return OOC_FALSE;
  goto l12;
l11:
  i0 = *pos;
  *pos = (i0+3);
  return OOC_TRUE;
l12:
  _failed_function(4031); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipPChar(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0;

  i0 = *pos;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 4523)));
  i0 = URI_CharClass__IsMember(i0, ":@&=+$,", 8);
  if (i0) goto l7;
  i0 = URI_CharClass__SkipUnreserved((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  if (i0) goto l5;
  i0 = URI_CharClass__SkipEscaped((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  
  goto l6;
l5:
  i0=OOC_TRUE;
l6:
  return i0;
  goto l8;
l7:
  i0 = *pos;
  *pos = (i0+1);
  return OOC_TRUE;
l8:
  _failed_function(4431); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipURIC(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0;

  i0 = URI_CharClass__SkipUnreserved((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  if (i0) goto l3;
  i0 = URI_CharClass__SkipReserved((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (i0) goto l7;
  i0 = URI_CharClass__SkipEscaped((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  
  goto l8;
l7:
  i0=OOC_TRUE;
l8:
  return i0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipMember(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos, const OOC_CHAR8 set__ref[], OOC_LEN set_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(set,OOC_CHAR8 ,set_0d)

  OOC_INITIALIZE_VPAR(set__ref,set,OOC_CHAR8 ,set_0d)
  i0 = *pos;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT16, 5043)));
  i1 = URI_CharClass__IsMember(i1, (void*)(OOC_INT32)set, set_0d);
  if (i1) goto l3;
  return OOC_FALSE;
  goto l4;
l3:
  *pos = (i0+1);
  return OOC_TRUE;
l4:
  _failed_function(4907); return 0;
  ;
}

OOC_CHAR8 URI_CharClass__SkipAuthChar(OOC_CHAR8 str[], OOC_LEN str_0d, OOC_INT16 *pos) {
  register OOC_INT32 i0;

  i0 = URI_CharClass__SkipUnreserved((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  if (i0) goto l3;
  i0 = URI_CharClass__SkipEscaped((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos);
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (i0) goto l7;
  i0 = URI_CharClass__SkipMember((void*)(OOC_INT32)str, str_0d, (void*)(OOC_INT32)pos, "$,;:@&=+", 9);
  
  goto l8;
l7:
  i0=OOC_TRUE;
l8:
  return i0;
  ;
}

void OOC_URI_CharClass_init(void) {

  return;
  ;
}

/* --- */
