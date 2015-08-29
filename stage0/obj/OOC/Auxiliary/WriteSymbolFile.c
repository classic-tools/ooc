#include <OOC/Auxiliary/WriteSymbolFile.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Auxiliary_WriteSymbolFile__WriteSymbolFile(OOC_Repository__Module m, OOC_SymbolTable__Module symTab, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  IO_Memory__Channel mem;
  OOC_SymbolTable_Builder__Builder stb;
  OOC_INT32 fp;
  IO__ByteChannel ch;
  IO_BinaryRider__Writer w;
  OOC_INT32 i;
  OOC_SymbolTable__ModuleRef mr;
  OOC_INT32 len;
  OOC_INT32 d;

  i0 = (OOC_INT32)IO_Memory__Open();
  mem = (IO_Memory__Channel)i0;
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i1, 1u);
  OOC_SymbolTable__Prune((OOC_SymbolTable__Module)i1, (ADT_Dictionary__Dictionary)i2);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__New();
  stb = (OOC_SymbolTable_Builder__Builder)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 618)))), OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable)),OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable)((OOC_SymbolTable_Builder__Builder)i2, (IO__ByteChannel)i0, (OOC_SymbolTable__Module)i1);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 682))+12);
  IO_Memory__ChannelDesc_Fingerprint((IO_Memory__Channel)i0, (void*)(OOC_INT32)&fp, 4, 0, i2);
  i2 = (OOC_INT32)m;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 704)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i2, 1, 1u);
  ch = (IO__ByteChannel)i2;
  i3 = (OOC_INT32)IO_BinaryRider__ConnectWriter((IO__ByteChannel)i2);
  w = (IO_BinaryRider__Writer)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 802)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i3, (void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber, 5, 0, 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 869)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i3, (void*)(OOC_INT32)&fp, 4, 0, 4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1197))+64);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 1211)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1177)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i3, i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1244))+64);
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 1258)), 0);
  i5 = 0<i4;
  if (!i5) goto l8;
  i5=0;
l3_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1284))+64);
  i6 = _check_pointer(i6, 1298);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 1298))*4);
  mr = (OOC_SymbolTable__ModuleRef)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 1333));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 1333));
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 1338)), 0);
  i7 = Strings__Length((void*)(_check_pointer(i7, 1338)), i8);
  len = i7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1349)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i3, i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 1386));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1372)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i3, (void*)(_check_pointer(i8, 1391)), (-1), 0, i7);
  i6 = *(OOC_INT32*)((_check_pointer(i6, 1417))+4);
  fp = i6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1438)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i3, (void*)(OOC_INT32)&fp, 4, 0, 4);
  i5 = i5+1;
  i = i5;
  i6 = i5<i4;
  if (i6) goto l3_loop;
l8:
  IO_Memory__ChannelDesc_SetPos((IO_Memory__Channel)i0, 0);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1533))+12);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1518)))), IO__ByteChannelDesc_TransferTo)),IO__ByteChannelDesc_TransferTo)((IO__ByteChannel)i0, i1, (IO__ByteChannel)i2);
  d = i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1553)))), IO__ChannelDesc_CloseAndRegister)),IO__ChannelDesc_CloseAndRegister)((IO__Channel)i2);
  return;
  ;
}

void OOC_OOC_Auxiliary_WriteSymbolFile_init(void) {

  return;
  ;
}

/* --- */
