#include <Out.d>
#include <__oo2c.h>

OOC_CHAR8 Out__Done() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Out__writer;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1345));
  return (i0==(OOC_INT32)0);
  ;
}

void Out__ClearError() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Out__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1422)))), TextRider__WriterDesc_ClearError)),TextRider__WriterDesc_ClearError)((TextRider__Writer)i0);
  return;
  ;
}

void Out__SetWriter(TextRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  Out__writer = (TextRider__Writer)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)StdChannels__stdout;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  Out__writer = (TextRider__Writer)i0;
l4:
  return;
  ;
}

void Out__Flush() {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Out__writer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2110))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2110))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2116)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i0);
  return;
  ;
}

void Out__Char(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Out__writer;
  i1 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2185)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, i1);
  return;
  ;
}

void Out__String(const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Out__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2282)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)s, s_0d);
  return;
  ;
}

void Out__Str(Object__String s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Out__writer;
  i1 = (OOC_INT32)s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2370)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

void Out__Bool(OOC_CHAR8 _bool) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Out__writer;
  i1 = _bool;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2450)))), TextRider__WriterDesc_WriteBool)),TextRider__WriterDesc_WriteBool)((TextRider__Writer)i0, i1);
  return;
  ;
}

void Out__LongInt(OOC_INT32 lint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)Out__writer;
  i1 = lint;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2550)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void Out__ShortInt(OOC_INT8 sint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)Out__writer;
  i1 = sint;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2656)))), TextRider__WriterDesc_WriteSInt)),TextRider__WriterDesc_WriteSInt)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void Out__Int(OOC_INT16 _int, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)Out__writer;
  i1 = _int;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2756)))), TextRider__WriterDesc_WriteInt)),TextRider__WriterDesc_WriteInt)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void Out__Hex(OOC_INT32 lint, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)Out__writer;
  i1 = lint;
  i2 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2850)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i0, i1, i2);
  return;
  ;
}

void Out__LongReal(OOC_REAL64 lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)Out__writer;
  d0 = lreal;
  i1 = n;
  i2 = k;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3075)))), TextRider__WriterDesc_WriteLReal)),TextRider__WriterDesc_WriteLReal)((TextRider__Writer)i0, d0, i1, i2);
  return;
  ;
}

void Out__Real(OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;

  i0 = (OOC_INT32)Out__writer;
  f0 = real;
  i1 = n;
  i2 = k;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3210)))), TextRider__WriterDesc_WriteReal)),TextRider__WriterDesc_WriteReal)((TextRider__Writer)i0, f0, i1, i2);
  return;
  ;
}

void Out__LongRealFix(OOC_REAL64 lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)Out__writer;
  i1 = n;
  i2 = k;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3606)))), TextRider__WriterDesc_WriteLRealFix)),TextRider__WriterDesc_WriteLRealFix)((TextRider__Writer)i0, (void*)(OOC_INT32)&lreal, i1, i2);
  return;
  ;
}

void Out__RealFix(OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;

  i0 = (OOC_INT32)Out__writer;
  f0 = real;
  i1 = n;
  i2 = k;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3753)))), TextRider__WriterDesc_WriteRealFix)),TextRider__WriterDesc_WriteRealFix)((TextRider__Writer)i0, f0, i1, i2);
  return;
  ;
}

void Out__LongRealEng(OOC_REAL64 lreal, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)Out__writer;
  i1 = n;
  i2 = k;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4016)))), TextRider__WriterDesc_WriteLRealEng)),TextRider__WriterDesc_WriteLRealEng)((TextRider__Writer)i0, (void*)(OOC_INT32)&lreal, i1, i2);
  return;
  ;
}

void Out__RealEng(OOC_REAL32 real, OOC_INT32 n, OOC_INT32 k) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL32 f0;

  i0 = (OOC_INT32)Out__writer;
  f0 = real;
  i1 = n;
  i2 = k;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4163)))), TextRider__WriterDesc_WriteRealEng)),TextRider__WriterDesc_WriteRealEng)((TextRider__Writer)i0, f0, i1, i2);
  return;
  ;
}

void Out__Set(OOC_UINT32 s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Out__writer;
  i1 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4252)))), TextRider__WriterDesc_WriteSet)),TextRider__WriterDesc_WriteSet)((TextRider__Writer)i0, i1);
  return;
  ;
}

void Out__Ln() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Out__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4312)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void OOC_Out_init(void) {

  Out__SetWriter((TextRider__Writer)(OOC_INT32)0);
  return;
  ;
}

/* --- */
