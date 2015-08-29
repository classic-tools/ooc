#include <ADT/Storable.d>
#include <__oo2c.h>
#include <setjmp.h>

static Msg__Msg ADT_Storable__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ADT_Storable__errorContext;
  i1 = code;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i0, i1);
  return (Msg__Msg)i0;
  ;
}

void ADT_Storable__ErrorContextDesc_GetTemplate(ADT_Storable__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR8 descr[64];

  i0 = (OOC_INT32)msg;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  _copy_8((const void*)"",(void*)(OOC_INT32)descr,64);
  goto l10;
l3:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4572))+8);
  switch (i1) {
  case -1:
    _copy_8((const void*)"Reading was cancelled",(void*)(OOC_INT32)descr,64);
    goto l10;
  case -2:
    _copy_8((const void*)"Object version mismatch",(void*)(OOC_INT32)descr,64);
    goto l10;
  case -3:
    _copy_8((const void*)"Unknown type name",(void*)(OOC_INT32)descr,64);
    goto l10;
  default:
    _copy_8((const void*)"",(void*)(OOC_INT32)descr,64);
    goto l10;
  }
l10:
  i1 = (
  _cmp8((const void*)(OOC_INT32)descr,(const void*)""))!=(OOC_INT32)0;
  if (i1) goto l13;
  i1 = (OOC_INT32)context;
  Channel__ErrorContextDesc_GetTemplate((Channel__ErrorContext)i1, (Msg__Msg)i0, (void*)(OOC_INT32)templ, templ_0d);
  goto l14;
l13:
  _copy_8to16((const void*)(OOC_INT32)descr,(void*)(OOC_INT32)templ,templ_0d);
l14:
  return;
  ;
}

void ADT_Storable__Init(ADT_Storable__Object obj) {

  return;
  ;
}

void ADT_Storable__ObjectDesc_Destroy(ADT_Storable__Object obj) {

  return;
  ;
}

void ADT_Storable__ObjectDesc_Store(ADT_Storable__Object obj, ADT_Storable__Writer w) {

  return;
  ;
}

void ADT_Storable__ObjectDesc_Load(ADT_Storable__Object obj, ADT_Storable__Reader r) {

  return;
  ;
}

void ADT_Storable__InitWriter(ADT_Storable__Writer w, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitWriter((BinaryRider__Writer)i0, (Channel__Channel)i1, 1);
  return;
  ;
}

void ADT_Storable__InitReader(ADT_Storable__Reader r, Channel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitReader((BinaryRider__Reader)i0, (Channel__Channel)i1, 1);
  return;
  ;
}

void ADT_Storable__WriterDesc_WriteObject(ADT_Storable__Writer w, ADT_Storable__Object obj) {

  return;
  ;
}

void ADT_Storable__WriterDesc_WriteVersion(ADT_Storable__Writer w, OOC_INT32 version) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = version;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9130)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, i1);
  return;
  ;
}

void ADT_Storable__WriterDesc_Disconnect(ADT_Storable__Writer w) {

  return;
  ;
}

void ADT_Storable__ReaderDesc_ReadObject(ADT_Storable__Reader r, ADT_Storable__Object *obj) {

  return;
  ;
}

void ADT_Storable__ReaderDesc_ReadVersion(ADT_Storable__Reader r, OOC_INT32 min, OOC_INT32 max, OOC_INT32 *version) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10309)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)version);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10385))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10397))+4);
  i1 = i1==(OOC_INT32)0;
  
l9:
  if (!i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10435))+8);
  i1 = (OOC_INT32)ADT_Storable__GetError(-2);
  *(OOC_INT32*)((_check_pointer(i0, 10447))+4) = i1;
l11:
  return;
  ;
}

void ADT_Storable__ReaderDesc_Cancel(ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10699))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10711))+4);
  i1 = i1==(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10749))+8);
  i1 = (OOC_INT32)ADT_Storable__GetError(-1);
  *(OOC_INT32*)((_check_pointer(i0, 10761))+4) = i1;
l4:
  return;
  ;
}

void ADT_Storable__ReaderDesc_Disconnect(ADT_Storable__Reader r) {

  return;
  ;
}

void OOC_ADT_Storable_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Storable__ErrorContext.baseTypes[0]);
  ADT_Storable__errorContext = (ADT_Storable__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, "ADT:Storable", 13);
  return;
  ;
}

/* --- */
