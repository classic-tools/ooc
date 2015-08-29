#include <URI/Authority/ServerBased.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Authority_ServerBased__Init(URI_Authority_ServerBased__Authority auth, URI_String__StringPtr userinfo, URI_String__StringPtr host, OOC_INT32 port, OOC_INT32 defaultPort) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)host;
  _assert((i0!=(OOC_INT32)0), 127, 2093);
  i1 = (OOC_INT32)auth;
  i2 = (OOC_INT32)userinfo;
  *(OOC_INT32*)(_check_pointer(i1, 2122)) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 2154))+4) = i0;
  i0 = port;
  *(OOC_INT32*)((_check_pointer(i1, 2178))+8) = i0;
  i0 = defaultPort;
  *(OOC_INT32*)((_check_pointer(i1, 2202))+12) = i0;
  return;
  ;
}

URI_Authority_ServerBased__Authority URI_Authority_ServerBased__New(URI_String__StringPtr userinfo, URI_String__StringPtr host, OOC_INT32 port, OOC_INT32 defaultPort) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Authority_ServerBased__Authority.baseTypes[0]);
  i1 = (OOC_INT32)userinfo;
  i2 = (OOC_INT32)host;
  i3 = port;
  i4 = defaultPort;
  URI_Authority_ServerBased__Init((URI_Authority_ServerBased__Authority)i0, (URI_String__StringPtr)i1, (URI_String__StringPtr)i2, i3, i4);
  return (URI_Authority_ServerBased__Authority)i0;
  ;
}

URI_Authority_ServerBased__Authority URI_Authority_ServerBased__AuthorityDesc_Clone(URI_Authority_ServerBased__Authority auth) {
  register OOC_INT32 i0,i1;
  URI_Authority_ServerBased__Authority copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Authority_ServerBased__Authority.baseTypes[0]);
  copy = (URI_Authority_ServerBased__Authority)i0;
  i1 = (OOC_INT32)auth;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2882)))), URI__AuthorityDesc_Copy)),URI__AuthorityDesc_Copy)((URI__Authority)i1, (URI__Authority)i0);
  return (URI_Authority_ServerBased__Authority)i0;
  ;
}

void URI_Authority_ServerBased__AuthorityDesc_Copy(URI_Authority_ServerBased__Authority auth, URI__Authority dest) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)dest;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3071)))), &_td_URI_Authority_ServerBased__AuthorityDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3062)))), 3062);
  goto l12;
l3:
  i1 = (OOC_INT32)auth;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3100));
  i2 = i2!=0;
  if (i2) goto l6;
  *(OOC_INT32*)(_check_pointer(i0, 3202)) = 0;
  goto l7;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3166));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3166));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3176)), 0);
  i2 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 3176)), i3);
  *(OOC_INT32*)(_check_pointer(i0, 3135)) = i2;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3245))+4);
  i2 = i2!=0;
  if (i2) goto l10;
  *(OOC_INT32*)((_check_pointer(i0, 3335))+4) = 0;
  goto l11;
l10:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3303))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3303))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 3309)), 0);
  i2 = (OOC_INT32)URI_String__Copy((void*)(_check_pointer(i2, 3309)), i3);
  *(OOC_INT32*)((_check_pointer(i0, 3276))+4) = i2;
l11:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3384))+8);
  *(OOC_INT32*)((_check_pointer(i0, 3370))+8) = i2;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3423))+12);
  *(OOC_INT32*)((_check_pointer(i0, 3402))+12) = i1;
l12:
  return;
  ;
}

static Msg__Msg URI_Authority_ServerBased__ParseHost(URI_String__StringPtr str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;
  OOC_INT16 j;
  OOC_INT16 lastLabelStart;
  auto OOC_CHAR8 URI_Authority_ServerBased__ParseHost_IsIPv4Address(URI_String__StringPtr str);
  auto OOC_CHAR8 URI_Authority_ServerBased__ParseHost_SkipDigits(void);
  auto OOC_CHAR8 URI_Authority_ServerBased__ParseHost_SkipLabel(void);
    
    OOC_CHAR8 URI_Authority_ServerBased__ParseHost_IsIPv4Address(URI_String__StringPtr str) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT16 i;

      i = 0;
      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 3706);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT16, 3706)));
      i1 = i1!=0u;
      if (!i1) goto l15;
      i1=0;
l3_loop:
      i2 = _check_pointer(i0, 3753);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 3753)));
      i2 = URI_CharClass__IsDigit(i2);
      i2 = !i2;
      if (i2) goto l6;
      i2=0u;
      goto l8;
l6:
      i2 = _check_pointer(i0, 3764);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 3764)));
      i2 = i2!=46u;
      
l8:
      if (!i2) goto l10;
      return 0u;
l10:
      i1 = i1+1;
      i = i1;
      i2 = _check_pointer(i0, 3706);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 3706)));
      i2 = i2!=0u;
      if (i2) goto l3_loop;
l15:
      return 1u;
      ;
    }

    
    OOC_CHAR8 URI_Authority_ServerBased__ParseHost_SkipDigits(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT16 start;
      OOC_INT16 val;

      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 3999);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 3999)));
      i1 = URI_CharClass__IsDigit(i1);
      if (i1) goto l3;
      i1=0u;
      goto l9;
l3:
      i1 = _check_pointer(i0, 4020);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 4020)));
      i1 = i1!=48u;
      if (i1) goto l6;
      i1 = _check_pointer(i0, 4057);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index((i3+1), i2, OOC_UINT16, 4057)));
      i1 = URI_CharClass__IsDigit(i1);
      i1 = !i1;
      
      goto l9;
l6:
      i1=1u;
l9:
      if (!i1) goto l24;
      start = i3;
      val = 0;
      i2=i3;i1=0;
l11_loop:
      i4 = i1<1000;
      if (!i4) goto l15;
      i4 = _check_pointer(i0, 4189);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT16, 4189)));
      i1 = ((i1*10)+i4)-48;
      val = i1;
      
l15:
      i2 = i2+1;
      i = i2;
      i4 = _check_pointer(i0, 4273);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT16, 4273)));
      i4 = URI_CharClass__IsDigit(i4);
      i4 = !i4;
      if (!i4) goto l11_loop;
l19:
      i0 = i1>255;
      if (i0) goto l22;
      return 1u;
      goto l24;
l22:
      i = i3;
l24:
      return 0u;
      ;
    }

    
    OOC_CHAR8 URI_Authority_ServerBased__ParseHost_SkipLabel(void) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)str;
      i1 = _check_pointer(i0, 4562);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 4562)));
      i1 = URI_CharClass__IsAlpha(i1);
      if (!i1) goto l16;
      i1=i3;
l3_loop:
      i1 = i1+1;
      i = i1;
      i2 = _check_pointer(i0, 4645);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 4645)));
      i2 = URI_CharClass__IsAlphaNum(i2);
      i2 = !i2;
      if (i2) goto l6;
      i2=0u;
      goto l8;
l6:
      i2 = _check_pointer(i0, 4656);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 4656)));
      i2 = i2!=45u;
      
l8:
      if (!i2) goto l3_loop;
l11:
      i0 = _check_pointer(i0, 4705);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i1 = i1-1;
      i0 = *(OOC_UINT8*)(i0+(_check_index(i1, i2, OOC_UINT16, 4705)));
      i0 = URI_CharClass__IsAlphaNum(i0);
      i0 = !i0;
      if (i0) goto l14;
      return 1u;
      goto l16;
l14:
      i = i1;
l16:
      return 0u;
      ;
    }


  i = 0;
  i0 = (OOC_INT32)str;
  i0 = URI_Authority_ServerBased__ParseHost_IsIPv4Address((URI_String__StringPtr)i0);
  if (i0) goto l22;
l3_loop:
  i0 = i;
  lastLabelStart = i0;
  i0 = URI_Authority_ServerBased__ParseHost_SkipLabel();
  i0 = !i0;
  if (!i0) goto l6;
  i0 = offset;
  i1 = i;
  i2 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i2, 2, (i1+i0));
  return (Msg__Msg)i0;
l6:
  i0 = (OOC_INT32)str;
  i1 = _check_pointer(i0, 5475);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 5475)));
  i1 = i1==46u;
  if (!i1) goto l18;
  i1 = i3+1;
  i = i1;
  i2 = _check_pointer(i0, 5527);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 5527)));
  i2 = i2==0u;
  if (i2) goto l12;
  i2 = _check_pointer(i0, 5544);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 5544)));
  i1 = i1==58u;
  
  goto l14;
l12:
  i1=1u;
l14:
  if (!i1) goto l3_loop;
l18:
  i0 = _check_pointer(i0, 5674);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = lastLabelStart;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT16, 5674)));
  i0 = URI_CharClass__IsAlpha(i0);
  i0 = !i0;
  if (!i0) goto l38;
  i0 = offset;
  i1 = i;
  i2 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i2, 3, (i1+i0));
  return (Msg__Msg)i0;
  goto l38;
l22:
  j = 1;
l23_loop:
  i0 = URI_Authority_ServerBased__ParseHost_SkipDigits();
  i0 = !i0;
  if (!i0) goto l26;
  i0 = offset;
  i1 = i;
  i2 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i2, 2, (i1+i0));
  return (Msg__Msg)i0;
l26:
  i0 = j;
  i1 = i0<4;
  if (!i1) goto l33;
  i1 = (OOC_INT32)str;
  i1 = _check_pointer(i1, 5130);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 5130)));
  i1 = i1==46u;
  if (i1) goto l31;
  i1 = offset;
  i2 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i1 = (OOC_INT32)URI_Error__New((URI_Error__Context)i2, 2, (i3+i1));
  return (Msg__Msg)i1;
  goto l33;
l31:
  i = (i3+1);
l33:
  i0 = i0+1;
  j = i0;
  i0 = i0<=4;
  if (i0) goto l23_loop;
l38:
  return (Msg__Msg)(OOC_INT32)0;
  ;
}

Msg__Msg URI_Authority_ServerBased__AuthorityDesc_ParseAuthority(URI_Authority_ServerBased__Authority auth, URI_String__StringPtr str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT16 i;
  URI_String__StringPtr userinfo;
  OOC_INT16 start;
  URI_String__StringPtr host;
  Msg__Msg res;
  OOC_INT32 port;

  i = 0;
  i0 = (OOC_INT32)str;
  i1 = _check_pointer(i0, 6056);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT16, 6056)));
  i1 = i1!=0u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = _check_pointer(i0, 6072);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT16, 6072)));
  i1 = i1!=64u;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1=0;
l8_loop:
  i1 = i1+1;
  i = i1;
  i2 = _check_pointer(i0, 6056);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 6056)));
  i2 = i2!=0u;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = _check_pointer(i0, 6072);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 6072)));
  i2 = i2!=64u;
  
l13:
  if (i2) goto l8_loop;
l17:
  userinfo = (URI_String__StringPtr)(OOC_INT32)0;
  i2 = _check_pointer(i0, 6146);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 6146)));
  i1 = i1!=0u;
  if (i1) goto l20;
  i = 0;
  i1=(OOC_INT32)0;
  goto l49;
l20:
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6278)), 0);
  i1 = URI_CharClass__SkipUnreserved((void*)(_check_pointer(i0, 6278)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l23;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6325)), 0);
  i1 = URI_CharClass__SkipEscaped((void*)(_check_pointer(i0, 6325)), i1, (void*)(OOC_INT32)&i);
  
  goto l25;
l23:
  i1=1u;
l25:
  if (i1) goto l27;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6371)), 0);
  i1 = URI_CharClass__SkipMember((void*)(_check_pointer(i0, 6371)), i1, (void*)(OOC_INT32)&i, ";:&=+$,", 8);
  
  goto l29;
l27:
  i1=1u;
l29:
  if (!i1) goto l44;
l31_loop:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6278)), 0);
  i1 = URI_CharClass__SkipUnreserved((void*)(_check_pointer(i0, 6278)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l34;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6325)), 0);
  i1 = URI_CharClass__SkipEscaped((void*)(_check_pointer(i0, 6325)), i1, (void*)(OOC_INT32)&i);
  
  goto l36;
l34:
  i1=1u;
l36:
  if (i1) goto l38;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6371)), 0);
  i1 = URI_CharClass__SkipMember((void*)(_check_pointer(i0, 6371)), i1, (void*)(OOC_INT32)&i, ";:&=+$,", 8);
  
  goto l40;
l38:
  i1=1u;
l40:
  if (i1) goto l31_loop;
l44:
  i1 = _check_pointer(i0, 6415);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 6415)));
  i1 = i1==64u;
  if (i1) goto l47;
  i1 = offset;
  i2 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i1 = (OOC_INT32)URI_Error__New((URI_Error__Context)i2, 1, (i3+i1));
  return (Msg__Msg)i1;
  i1=(OOC_INT32)0;
  goto l49;
l47:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6487)), 0);
  i1 = (OOC_INT32)URI_String__Extract((void*)(_check_pointer(i0, 6487)), i1, 0, i3);
  i1 = (OOC_INT32)URI_String__Unescape((URI_String__StringPtr)i1);
  i2 = i;
  userinfo = (URI_String__StringPtr)i1;
  i = (i2+1);
  
l49:
  i2 = i;
  start = i2;
  i3 = _check_pointer(i0, 6724);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT16, 6724)));
  i3 = i3!=0u;
  if (i3) goto l52;
  i3=0u;
  goto l54;
l52:
  i3 = _check_pointer(i0, 6740);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT16, 6740)));
  i3 = i3!=58u;
  
l54:
  if (!i3) goto l64;
l55_loop:
  i3 = i;
  i3 = i3+1;
  i = i3;
  i4 = _check_pointer(i0, 6724);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT16, 6724)));
  i4 = i4!=0u;
  if (i4) goto l58;
  i3=0u;
  goto l60;
l58:
  i4 = _check_pointer(i0, 6740);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i3 = *(OOC_UINT8*)(i4+(_check_index(i3, i5, OOC_UINT16, 6740)));
  i3 = i3!=58u;
  
l60:
  if (i3) goto l55_loop;
l64:
  i3 = i;
  i4 = i3==i2;
  if (i4) goto l70;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6907)), 0);
  i3 = (OOC_INT32)URI_String__Extract((void*)(_check_pointer(i0, 6907)), i4, i2, i3);
  i4 = offset;
  host = (URI_String__StringPtr)i3;
  i2 = (OOC_INT32)URI_Authority_ServerBased__ParseHost((URI_String__StringPtr)i3, (i4+i2));
  res = (Msg__Msg)i2;
  i3 = i2!=(OOC_INT32)0;
  if (!i3) goto l71;
  return (Msg__Msg)i2;
  goto l71;
l70:
  i2 = offset;
  i4 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i2 = (OOC_INT32)URI_Error__New((URI_Error__Context)i4, 4, (i3+i2));
  return (Msg__Msg)i2;
l71:
  port = (-1);
  i2 = _check_pointer(i0, 7071);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = i;
  i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT16, 7071)));
  i2 = i2==58u;
  if (i2) goto l74;
  i2=(-1);
  goto l95;
l74:
  i2 = i4+1;
  i = i2;
  i3 = i2+1;
  start = i3;
  i4 = _check_pointer(i0, 7135);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT16, 7135)));
  i4 = i4!=0u;
  if (i4) goto l77;
  i2=(-1);
  goto l95;
l77:
  port = 0;
  i4 = _check_pointer(i0, 7205);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT16, 7205)));
  i4 = URI_CharClass__IsDigit(i4);
  if (i4) goto l80;
  i2=0;
  goto l90;
l80:
  i4=i2;i2=0;
l81_loop:
  i5 = i2<1000000;
  if (!i5) goto l85;
  i5 = _check_pointer(i0, 7283);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT16, 7283)));
  i2 = ((i2*10)+i5)-48;
  port = i2;
  
l85:
  i4 = i4+1;
  i = i4;
  i5 = _check_pointer(i0, 7205);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT16, 7205)));
  i5 = URI_CharClass__IsDigit(i5);
  if (i5) goto l81_loop;
l90:
  i4 = i2>65535;
  if (!i4) goto l95;
  i4 = offset;
  i5 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i3 = (OOC_INT32)URI_Error__New((URI_Error__Context)i5, 6, (i3+i4));
  return (Msg__Msg)i3;
l95:
  i0 = _check_pointer(i0, 7494);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = i;
  i0 = *(OOC_UINT8*)(i0+(_check_index(i4, i3, OOC_UINT16, 7494)));
  i0 = i0!=0u;
  if (!i0) goto l98;
  i0 = offset;
  i3 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  i0 = (OOC_INT32)URI_Error__New((URI_Error__Context)i3, 7, (i4+i0));
  return (Msg__Msg)i0;
l98:
  i0 = (OOC_INT32)auth;
  *(OOC_INT32*)(_check_pointer(i0, 7600)) = i1;
  i1 = (OOC_INT32)host;
  *(OOC_INT32*)((_check_pointer(i0, 7632))+4) = i1;
  i1 = i2==(-1);
  if (i1) goto l101;
  *(OOC_INT32*)((_check_pointer(i0, 7738))+8) = i2;
  goto l102;
l101:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7705))+12);
  *(OOC_INT32*)((_check_pointer(i0, 7691))+8) = i1;
l102:
  return (Msg__Msg)(OOC_INT32)0;
  ;
}

void URI_Authority_ServerBased__AuthorityDesc_WriteXML(URI_Authority_ServerBased__Authority auth, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 str[32];

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7907)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<authority-server-based>", 26);
  i1 = (OOC_INT32)auth;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7970));
  i2 = i2!=0;
  if (!i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8000)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<userinfo>", 12);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8063));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8063));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8073)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8044)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 8073)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8084)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</userinfo>", 12);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8129)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<host>", 8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8186))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8186))+4);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8192)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8167)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(_check_pointer(i2, 8192)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8201)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</host>", 8);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8240))+8);
  i2 = i2>=0;
  if (!i2) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8265)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012<port>", 8);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8325))+8);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8346)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8374)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "</port>", 8);
l6:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8415)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, "\012</authority-server-based>", 27);
  return;
  ;
}

void URI_Authority_ServerBased__AuthorityDesc_Append(URI_Authority_ServerBased__Authority auth, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 s[32];

  Strings__Append("//", 3, (void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)auth;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8629));
  i1 = i1!=0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8684));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8684));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8694)), 0);
  URI_String__AppendEscaped((void*)(_check_pointer(i1, 8694)), i2, ";:&=+$,", 8, (void*)(OOC_INT32)str, str_0d);
  Strings__Append("@", 2, (void*)(OOC_INT32)str, str_0d);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8798))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8798))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8804)), 0);
  Strings__Append((void*)(_check_pointer(i1, 8804)), i2, (void*)(OOC_INT32)str, str_0d);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8825))+8);
  i1 = i1>=0;
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8858))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8845))+8);
  i1 = i2!=i1;
  
l8:
  if (!i1) goto l10;
  Strings__Append(":", 2, (void*)(OOC_INT32)str, str_0d);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8938))+8);
  IntStr__IntToStr(i0, (void*)(OOC_INT32)s, 32);
  Strings__Append((void*)(OOC_INT32)s, 32, (void*)(OOC_INT32)str, str_0d);
l10:
  return;
  ;
}

void OOC_URI_Authority_ServerBased_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Error__NewContext("URI:Authority:ServerBased", 26);
  URI_Authority_ServerBased__serverContext = (URI_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9091)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 1, "Illegal character in user info part of authority component", 59);
  i0 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9207)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 2, "Malformed IPv4 address in authority component", 46);
  i0 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9311)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 3, "Malformed host name in authority component", 43);
  i0 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9409)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 4, "Host name in authority component is empty", 42);
  i0 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9502)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 5, "Malformed port number in authority component", 45);
  i0 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9598)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 6, "Port number out of range in authority component", 48);
  i0 = (OOC_INT32)URI_Authority_ServerBased__serverContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9698)))), URI_Error__ContextDesc_SetString)),URI_Error__ContextDesc_SetString)((URI_Error__Context)i0, 7, "Junk after authority component", 31);
  return;
  ;
}

/* --- */
