#include "ADT/Object.d"
#include "__oo2c.h"

static Msg__Msg ADT_Object__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ADT_Object__errorContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

void ADT_Object__ErrorContextDesc_GetTemplate(ADT_Object__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 descr[64];

  i0 = (OOC_INT32)msg;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  _copy_8("",(OOC_INT32)descr,64);
  goto l10;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5136))+8);
  switch (i1) {
  case -1:
    _copy_8("Reading was cancelled",(OOC_INT32)descr,64);
    goto l10;
  case -2:
    _copy_8("Object version mismatch",(OOC_INT32)descr,64);
    goto l10;
  case -3:
    _copy_8("Unknown type name",(OOC_INT32)descr,64);
    goto l10;
  default:
    _copy_8("",(OOC_INT32)descr,64);
    goto l10;
  }
l10:
  i1 = (
  _cmp8((const void*)(OOC_INT32)descr,(const void*)""))!=0;
  if (i1) goto l13;
  i1 = (OOC_INT32)context;
  Channel__ErrorContextDesc_GetTemplate((Channel__ErrorContext)i1, (Msg__Msg)i0, (void*)(OOC_INT32)templ, templ_0d);
  goto l14;
l13:
  _copy_8to16((OOC_INT32)descr,(OOC_INT32)templ,templ_0d);
l14:
  return;
  ;
}

void ADT_Object__Init(ADT_Object__Object obj) {

  return;
  ;
}

void ADT_Object__ObjectDesc_Destroy(ADT_Object__Object obj) {

  return;
  ;
}

ADT_Object__String ADT_Object__ObjectDesc_ToString(ADT_Object__Object obj) {

  return (ADT_Object__String)(OOC_INT32)0;
  ;
}

OOC_CHAR8 ADT_Object__ObjectDesc_Equals(ADT_Object__Object x, ADT_Object__Object y) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)x;
  i1 = (OOC_INT32)y;
  return (i0==i1);
  ;
}

OOC_INT32 ADT_Object__ObjectDesc_HashCode(ADT_Object__Object obj) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)obj;
  return (_type_cast_fast(OOC_INT32, OOC_PTR, i0));
  ;
}

void ADT_Object__ObjectDesc_Store(ADT_Object__Object obj, ADT_Object__Writer w) {

  return;
  ;
}

void ADT_Object__ObjectDesc_Load(ADT_Object__Object obj, ADT_Object__Reader r) {

  return;
  ;
}

void ADT_Object__InitWriter(ADT_Object__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitWriter((BinaryRider__Writer)i0, (Channel__Channel)i1, 1);
  return;
  ;
}

void ADT_Object__InitReader(ADT_Object__Reader r, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitReader((BinaryRider__Reader)i0, (Channel__Channel)i1, 1);
  return;
  ;
}

void ADT_Object__WriterDesc_WriteObject(ADT_Object__Writer w, ADT_Object__Object obj) {

  return;
  ;
}

void ADT_Object__WriterDesc_WriteVersion(ADT_Object__Writer w, OOC_INT32 version) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = version;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13344)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void ADT_Object__WriterDesc_Disconnect(ADT_Object__Writer w) {

  return;
  ;
}

void ADT_Object__ReaderDesc_ReadObject(ADT_Object__Reader r, ADT_Object__Object *obj) {

  return;
  ;
}

void ADT_Object__ReaderDesc_ReadVersion(ADT_Object__Reader r, OOC_INT32 min, OOC_INT32 max, OOC_INT32 *version) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14523)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)version);
  i1 = *version;
  i2 = min;
  i2 = i1<i2;
  if (i2) goto l3;
  i2 = max;
  i1 = i2<i1;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (i1) goto l7;
  i1=OOC_FALSE;
  goto l9;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14599))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14611))+4);
  i1 = i1==(OOC_INT32)0;
  
l9:
  if (!i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14649))+8);
  i1 = (OOC_INT32)ADT_Object__GetError(-2);
  *(OOC_INT32*)((_check_pointer(i0, 14661))+4) = i1;
l11:
  return;
  ;
}

void ADT_Object__ReaderDesc_Cancel(ADT_Object__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14913))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14925))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14963))+8);
  i1 = (OOC_INT32)ADT_Object__GetError(-1);
  *(OOC_INT32*)((_check_pointer(i0, 14975))+4) = i1;
l4:
  return;
  ;
}

void ADT_Object__ReaderDesc_Disconnect(ADT_Object__Reader r) {

  return;
  ;
}

void OOC_ADT_Object_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Object__ErrorContext.baseTypes[0]);
  ADT_Object__errorContext = (ADT_Object__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "ADT:Object", 11);
  return;
  ;
}

/* --- */
