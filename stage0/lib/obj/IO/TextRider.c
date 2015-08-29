#include <IO/TextRider.d>
#include <__oo2c.h>
#include <setjmp.h>

void IO_TextRider__InitWriter(IO_TextRider__Writer w, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)(_check_pointer(i0, 2122)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2144))+4) = 0;
  i1 = Strings__Length((void*)(OOC_INT32)CharClass__systemEol, 3);
  *(OOC_INT16*)((_check_pointer(i0, 2165))+10) = i1;
  i = 0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 2234))+10);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)CharClass__systemEol+(_check_index(i2, 3, OOC_UINT16, 2286)));
  *(OOC_UINT8*)(((_check_pointer(i0, 2255))+8)+(_check_index(i2, 2, OOC_UINT16, 2260))) = i3;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

IO_TextRider__Writer IO_TextRider__ConnectWriter(IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_TextRider__Writer.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  IO_TextRider__InitWriter((IO_TextRider__Writer)i0, (IO__ByteChannel)i1);
  return (IO_TextRider__Writer)i0;
  ;
}

void IO_TextRider__WriterDesc_SetEol(IO_TextRider__Writer w, const OOC_CHAR8 marker__ref[], OOC_LEN marker_0d, OOC_INT16 markerLen) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(marker,OOC_CHAR8 ,marker_0d)
  OOC_INT16 i;

  OOC_INITIALIZE_VPAR(marker__ref,marker,OOC_CHAR8 ,marker_0d)
  i0 = markerLen;
  i1 = i0<0;
  if (i1) goto l3;
  i1 = i0>2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l15;
  i = 0;
  i1 = (OOC_INT32)w;
  i2 = 0<i0;
  if (!i2) goto l14;
  i2=0;
l9_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)marker+(_check_index(i2, marker_0d, OOC_UINT16, 3337)));
  *(OOC_UINT8*)(((_check_pointer(i1, 3319))+8)+(_check_index(i2, 2, OOC_UINT16, 3324))) = i3;
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l9_loop;
l14:
  *(OOC_INT16*)((_check_pointer(i1, 3359))+10) = i0;
l15:
  return;
  ;
}

static void IO_TextRider__SetError(IO_TextRider__Writer w) {
  register OOC_INT32 i0,i1;
  Exception__Exception e;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3486))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)Exception__Current();
  e = (Exception__Exception)i1;
  *(OOC_INT32*)((_check_pointer(i0, 3544))+4) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3559)))), &_td_IO__ErrorDesc, 3559));
l4:
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteString(volatile IO_TextRider__Writer w, const OOC_CHAR8 s[], volatile OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;
  volatile OOC_INT32 len;
  volatile OOC_INT32 d;
  jmp_buf _target0;
  Exception__Context _context0;

  i0 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  len = i0;
  {
    if (!setjmp(_target0)) goto l7;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l5;
    Exception__ActivateContext();
    goto l6;
l5:
    i0 = (OOC_INT32)w;
    IO_TextRider__SetError((IO_TextRider__Writer)i0);
l6:
    Exception__Clear();
    goto l8;
l7:
    Exception__PushContext(&_context0, &_target0);
    i1 = (OOC_INT32)w;
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3781));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3781));
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3789)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i1, (void*)(OOC_INT32)s, (-1), 0, i0);
    d = i0;
    Exception__PopContext(1);
l8:;
  }
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteStringRegion(volatile IO_TextRider__Writer w, const OOC_CHAR8 s[], volatile OOC_LEN s_0d, volatile OOC_INT32 start, volatile OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;
  volatile OOC_INT32 d;
  jmp_buf _target0;
  Exception__Context _context0;

  {
    if (!setjmp(_target0)) goto l7;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l5;
    Exception__ActivateContext();
    goto l6;
l5:
    i0 = (OOC_INT32)w;
    IO_TextRider__SetError((IO_TextRider__Writer)i0);
l6:
    Exception__Clear();
    goto l8;
l7:
    Exception__PushContext(&_context0, &_target0);
    i0 = (OOC_INT32)w;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4057));
    i2 = end;
    i3 = start;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4057));
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4065)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)s, (-1), i3, (i2-i3));
    d = i0;
    Exception__PopContext(1);
l8:;
  }
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteObject(volatile IO_TextRider__Writer w, volatile Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;
  volatile Object__String s;
  volatile Object__CharsLatin1 chars;
  volatile OOC_INT32 i;
  jmp_buf _target0;
  Exception__Context _context0;

  i0 = (OOC_INT32)obj;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4384)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  s = (Object__String)i0;
  {
    if (!setjmp(_target0)) goto l9;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l7;
    Exception__ActivateContext();
    goto l8;
l7:
    i0 = (OOC_INT32)w;
    IO_TextRider__SetError((IO_TextRider__Writer)i0);
l8:
    Exception__Clear();
    goto l18;
l9:
    Exception__PushContext(&_context0, &_target0);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4421)))), &_td_Object__String8Desc);
    if (i1) goto l16;
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4541)))), &_td_Object__String32Desc);
    if (i1) goto l14;
    _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4538)))), 4538);
    goto l17;
l14:
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4573)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "[TextRider.WriteObject: String32 not implemented]", 50);
    goto l17;
l16:
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4461)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
    chars = (Object__CharsLatin1)i1;
    i2 = (OOC_INT32)w;
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4493));
    i0 = *(OOC_INT32*)(_check_pointer(i0, 4520));
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4493));
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4501)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i2, (void*)(_check_pointer(i1, 4513)), (-1), 0, i0);
    i = i0;
l17:
    Exception__PopContext(1);
l18:;
  }
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4338)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "<NIL>", 6);
l20:
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteBool(IO_TextRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0;

  i0 = _bool;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4844)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "FALSE", 6);
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4811)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "TRUE", 5);
l4:
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteChar(volatile IO_TextRider__Writer w, volatile OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;
  volatile OOC_INT32 d;
  jmp_buf _target0;
  Exception__Context _context0;

  {
    if (!setjmp(_target0)) goto l7;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l5;
    Exception__ActivateContext();
    goto l6;
l5:
    i0 = (OOC_INT32)w;
    IO_TextRider__SetError((IO_TextRider__Writer)i0);
l6:
    Exception__Clear();
    goto l8;
l7:
    Exception__PushContext(&_context0, &_target0);
    i0 = (OOC_INT32)w;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4990));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4990));
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4998)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)&ch, 1, 0, 1);
    d = i0;
    Exception__PopContext(1);
l8:;
  }
  return;
  ;
}

static void IO_TextRider__WritePad(IO_TextRider__Writer w, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = n;
  i1 = i0>0;
  if (!i1) goto l8;
  i1 = (OOC_INT32)w;
  
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5179)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 32u);
  i0 = i0-1;
  n = i0;
  i2 = i0>0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteLInt(IO_TextRider__Writer w, OOC_INT32 lint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;
  OOC_CHAR8 val[16];

  i0 = lint;
  IntStr__IntToStr(i0, (void*)(OOC_INT32)val, 16);
  i0 = Strings__Length((void*)(OOC_INT32)val, 16);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5757)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 16);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteSInt(IO_TextRider__Writer w, OOC_INT8 sint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = sint;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5871)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteInt(IO_TextRider__Writer w, OOC_INT16 _int, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = _int;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5982)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteHex(IO_TextRider__Writer w, OOC_INT32 lint, OOC_INT32 d) {
  register OOC_INT32 i0,i1;
  auto void IO_TextRider__WriterDesc_WriteHex_WriteHexDigits(IO_TextRider__Writer w, OOC_INT32 *n, OOC_INT32 digits);
    
    void IO_TextRider__WriterDesc_WriteHex_WriteHexDigits(IO_TextRider__Writer w, OOC_INT32 *n, OOC_INT32 digits) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 dig;

      i0 = digits;
      i1 = i0>8;
      if (!i1) goto l13;
      i1 = (OOC_INT32)w;
      i2 = *n;
      i2 = i2<0;
      
l4_loop:
      if (i2) goto l7;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6429)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 48u);
      goto l8;
l7:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6407)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 70u);
l8:
      i0 = i0-1;
      digits = i0;
      i3 = i0>8;
      if (i3) goto l4_loop;
l13:
      i1 = i0>0;
      if (!i1) goto l25;
      i1 = (OOC_INT32)w;
      i2 = *n;
      
l16_loop:
      i0 = i0-1;
      digits = i0;
      i3 = _mod((_ash(i2,(-(4*i0)))),16);
      dig = i3;
      i4 = i3<=9;
      if (i4) goto l19;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6678)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, (55+i3));
      goto l20;
l19:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6631)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, (48+i3));
l20:
      i3 = i0>0;
      if (i3) goto l16_loop;
l25:
      return;
      ;
    }


  i0 = d;
  i1 = i0<=0;
  if (!i1) goto l4;
  d = 8;
  i0=8;
l4:
  i1 = (OOC_INT32)w;
  IO_TextRider__WriterDesc_WriteHex_WriteHexDigits((IO_TextRider__Writer)i1, (void*)(OOC_INT32)&lint, i0);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteLReal(IO_TextRider__Writer w, OOC_REAL64 lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;
  OOC_CHAR8 val[128];

  d0 = lreal;
  i0 = k;
  LRealStr__RealToFloat(d0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7248)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteReal(IO_TextRider__Writer w, OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToFloat(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7619)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteLRealFix(IO_TextRider__Writer w, OOC_REAL64 *lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;
  OOC_CHAR8 val[128];

  d0 = *lreal;
  i0 = k;
  LRealStr__RealToFixed(d0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8068)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteRealFix(IO_TextRider__Writer w, OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToFixed(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8451)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteLRealEng(IO_TextRider__Writer w, OOC_REAL64 *lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;
  OOC_CHAR8 val[128];

  d0 = *lreal;
  i0 = k;
  LRealStr__RealToEng(d0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8899)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteRealEng(IO_TextRider__Writer w, OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;
  OOC_CHAR8 val[128];

  f0 = real;
  i0 = k;
  RealStr__RealToEng(f0, i0, (void*)(OOC_INT32)val, 128);
  i0 = Strings__Length((void*)(OOC_INT32)val, 128);
  i1 = n;
  i2 = (OOC_INT32)w;
  IO_TextRider__WritePad((IO_TextRider__Writer)i2, (i1-i0));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9280)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)val, 128);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteSet(IO_TextRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT8 bit;
  OOC_CHAR8 addComma;
  OOC_INT8 lo;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9473)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 123u);
  bit = 0;
  i1 = s;
  addComma = 0u;
  i2=0;i3=0u;
l1_loop:
  i4 = _in(i2,i1);
  if (i4) goto l4;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l29;
l4:
  lo = i2;
  i4 = i2<31;
  if (i4) goto l7;
  i4=0u;
  goto l9;
l7:
  i4 = _in((i2+1),i1);
  
l9:
  if (i4) goto l11;
  i4=i2;
  goto l22;
l11:
  i4=i2;
l12_loop:
  i4 = i4+1;
  bit = i4;
  i5 = i4<31;
  if (i5) goto l15;
  i5=0u;
  goto l17;
l15:
  i5 = _in((i4+1),i1);
  
l17:
  if (i5) goto l12_loop;
l22:
  if (i3) goto l24;
  addComma = 1u;
  i3=1u;
  goto l25;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9745)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, ", ", 3);
  
l25:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9798)))), IO_TextRider__WriterDesc_WriteInt)),IO_TextRider__WriterDesc_WriteInt)((IO_TextRider__Writer)i0, i2, 0);
  i2 = i2<i4;
  if (!i2) goto l28;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9850)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, "..", 3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9871)))), IO_TextRider__WriterDesc_WriteInt)),IO_TextRider__WriterDesc_WriteInt)((IO_TextRider__Writer)i0, i4, 0);
l28:
  i2=i3;i3=i4;
l29:
  i3 = i3+1;
  bit = i3;
  i4 = i3<=31;
  if (!i4) goto l33;
  {register OOC_INT32 h0=i2;i2=i3;i3=h0;}
  goto l1_loop;
l33:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9941)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 125u);
  return;
  ;
}

void IO_TextRider__WriterDesc_WriteLn(IO_TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i0 = (OOC_INT32)w;
  i = 0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 10083))+10);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = *(OOC_UINT8*)(((_check_pointer(i0, 10118))+8)+(_check_index(i2, 2, OOC_UINT16, 10122)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10104)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, i3);
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IO_TextRider_init(void) {

  return;
  ;
}

/* --- */
