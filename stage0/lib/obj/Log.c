#include "Log.d"
#include "__oo2c.h"

OOC_CHAR8 Log__Done() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Log__writer;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1342));
  return (i0==(OOC_INT32)0);
  ;
}

void Log__ClearError() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1420)))), TextRider__WriterDesc_ClearError)),TextRider__WriterDesc_ClearError)((TextRider__Writer)i0);
  return;
  ;
}

void Log__SetWriter(TextRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  Log__writer = (TextRider__Writer)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)StdChannels__stderr;
  i0 = (OOC_INT32)TextRider__ConnectWriter((Channel__Channel)i0);
  Log__writer = (TextRider__Writer)i0;
l4:
  return;
  ;
}

void Log__Flush() {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1932))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1932))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1938)))), Channel__ChannelDesc_Flush)),Channel__ChannelDesc_Flush)((Channel__Channel)i0);
  return;
  ;
}

void Log__Char(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2036)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2067)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2099)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i0, i1);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2127)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__String(const OOC_CHAR8 msg[], OOC_LEN msg_0d, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2246)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2277)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2309)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)s, s_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2338)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__LString(const OOC_CHAR8 msg[], OOC_LEN msg_0d, const OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2842)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2873)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i = 0;
  i0 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 2919))*2);
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l42;
  i0=0;
l3_loop:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2946))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2960))*2);
  i1 = i1<=(OOC_CHAR8)'\377';
  
l8:
  if (!i1) goto l20;
l11_loop:
  i1 = (OOC_INT32)Log__writer;
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3017))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2996)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, i2);
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2946))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l14;
  i1=OOC_FALSE;
  goto l16;
l14:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2960))*2);
  i1 = i1<=(OOC_CHAR8)'\377';
  
l16:
  if (i1) goto l11_loop;
l20:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3065))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l23;
  i1=OOC_FALSE;
  goto l25;
l23:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3079))*2);
  i1 = i1>(OOC_CHAR8)'\377';
  
l25:
  if (!i1) goto l37;
l28_loop:
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3114)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, (OOC_CHAR8)'?');
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3065))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l31;
  i1=OOC_FALSE;
  goto l33;
l31:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3079))*2);
  i1 = i1>(OOC_CHAR8)'\377';
  
l33:
  if (i1) goto l28_loop;
l37:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2919))*2);
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3_loop;
l42:
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3178)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Str(const OOC_CHAR8 msg[], OOC_LEN msg_0d, Object__String s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3286)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3317)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = (OOC_INT32)s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3349)))), TextRider__WriterDesc_WriteStr)),TextRider__WriterDesc_WriteStr)((TextRider__Writer)i0, (Object__String)i1);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3375)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Bool(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_CHAR8 _bool) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3477)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3508)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = _bool;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3540)))), TextRider__WriterDesc_WriteBool)),TextRider__WriterDesc_WriteBool)((TextRider__Writer)i0, i1);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3570)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__LongInt(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_INT32 lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3678)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3709)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = lint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3741)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i0, i1, 0);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3774)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__ShortInt(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_INT8 sint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3885)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3916)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = sint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3948)))), TextRider__WriterDesc_WriteSInt)),TextRider__WriterDesc_WriteSInt)((TextRider__Writer)i0, i1, 0);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3981)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Int(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_INT16 _int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4086)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4117)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = _int;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4149)))), TextRider__WriterDesc_WriteInt)),TextRider__WriterDesc_WriteInt)((TextRider__Writer)i0, i1, 0);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4180)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Hex(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_INT32 lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4281)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4312)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = lint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4344)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i0, i1, 8);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4376)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

static void Log__HexAdr(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_INT32 adr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4481)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4512)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = adr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4705)))), TextRider__WriterDesc_WriteHex)),TextRider__WriterDesc_WriteHex)((TextRider__Writer)i0, i1, 8);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4746)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__LongReal(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_REAL64 lreal) {
  register OOC_INT32 i0;
  register OOC_REAL64 d0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4858)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4889)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  d0 = lreal;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4921)))), TextRider__WriterDesc_WriteLReal)),TextRider__WriterDesc_WriteLReal)((TextRider__Writer)i0, d0, 24, 17);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4961)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Real(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_REAL32 real) {
  register OOC_INT32 i0;
  register OOC_REAL32 f0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5065)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5096)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  f0 = real;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5128)))), TextRider__WriterDesc_WriteReal)),TextRider__WriterDesc_WriteReal)((TextRider__Writer)i0, f0, 16, 9);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5165)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__LongRealEng(OOC_REAL64 lreal) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5248)))), TextRider__WriterDesc_WriteLRealEng)),TextRider__WriterDesc_WriteLRealEng)((TextRider__Writer)i0, (void*)(OOC_INT32)&lreal, 26, 17);
  return;
  ;
}

void Log__RealEng(OOC_REAL32 real) {
  register OOC_INT32 i0;
  register OOC_REAL32 f0;

  i0 = (OOC_INT32)Log__writer;
  f0 = real;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5351)))), TextRider__WriterDesc_WriteRealEng)),TextRider__WriterDesc_WriteRealEng)((TextRider__Writer)i0, f0, 18, 9);
  return;
  ;
}

void Log__Set(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_UINT32 s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5470)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5501)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, ": ", 3);
  i0 = (OOC_INT32)Log__writer;
  i1 = s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5533)))), TextRider__WriterDesc_WriteSet)),TextRider__WriterDesc_WriteSet)((TextRider__Writer)i0, i1);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5559)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Msg(const OOC_CHAR8 msg[], OOC_LEN msg_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5645)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)msg, msg_0d);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5676)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Ln() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5731)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

void Log__Ptr(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_PTR ptr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ptr;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  Log__HexAdr((void*)(OOC_INT32)msg, msg_0d, (_type_cast_fast(OOC_INT32, OOC_PTR, i0)));
  goto l4;
l3:
  Log__String((void*)(OOC_INT32)msg, msg_0d, "NIL", 4);
l4:
  return;
  ;
}

void Log__Adr(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_CHAR8 x[], OOC_LEN x_0d) {

  Log__HexAdr((void*)(OOC_INT32)msg, msg_0d, (OOC_INT32)x);
  return;
  ;
}

void Log__Type(const OOC_CHAR8 msg[], OOC_LEN msg_0d, OOC_PTR ptr) {
  register OOC_INT32 i0,i1;
  RT0__Struct type;
  OOC_CHAR8 str[256];

  i0 = (OOC_INT32)ptr;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i0;
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6485)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(OOC_INT32)msg, msg_0d);
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6518)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, ": ", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6556))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6564));
  _copy_8((const void*)(_check_pointer(i1, 6570)),(void*)(OOC_INT32)str,256);
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6591)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, (void*)(OOC_INT32)str, 256);
  i1 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6624)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i1, ".", 2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6661))+12);
  _copy_8((const void*)(_check_pointer(i0, 6667)),(void*)(OOC_INT32)str,256);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6688)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT32)str, 256);
  i0 = (OOC_INT32)Log__writer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6721)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  goto l4;
l3:
  Log__String((void*)(OOC_INT32)msg, msg_0d, "NIL", 4);
l4:
  return;
  ;
}

void OOC_Log_init(void) {

  Log__SetWriter((TextRider__Writer)(OOC_INT32)0);
  return;
  ;
}

/* --- */
