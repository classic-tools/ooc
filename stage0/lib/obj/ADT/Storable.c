#include <ADT/Storable.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Storable__RaiseTypeError(Object__String msg) {
  register OOC_INT32 i0;
  ADT_Storable__TypeError e;

  i0 = (OOC_INT32)RT0__NewObject(_td_ADT_Storable__TypeError.baseTypes[0]);
  e = (ADT_Storable__TypeError)i0;
  IO__InitError((IO__Error)i0, (Object__String)((OOC_INT32)_c0));
  Exception__Raise((void*)i0);
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

void ADT_Storable__InitWriter(ADT_Storable__Writer w, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)ch;
  IO_BinaryRider__InitWriter((IO_BinaryRider__Writer)i0, (IO__ByteChannel)i1, 1);
  return;
  ;
}

void ADT_Storable__InitReader(ADT_Storable__Reader r, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)ch;
  IO_BinaryRider__InitReader((IO_BinaryRider__Reader)i0, (IO__ByteChannel)i1, 1);
  return;
  ;
}

void ADT_Storable__WriterDesc_WriteObject(ADT_Storable__Writer w, ADT_Storable__Object obj) {

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

void ADT_Storable__ReaderDesc_Disconnect(ADT_Storable__Reader r) {

  return;
  ;
}

void OOC_ADT_Storable_init(void) {
  _c0 = Object__NewLatin1Region("Unknown type", 13, 0, 12);

  return;
  ;
}

/* --- */
