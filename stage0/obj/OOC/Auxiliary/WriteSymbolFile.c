#include <OOC/Auxiliary/WriteSymbolFile.d>
#include <__oo2c.h>

void OOC_Auxiliary_WriteSymbolFile__WriteSymbolFile(OOC_Repository__Module m, OOC_SymbolTable__Module symTab, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  IO_Memory__Channel mem;
  Msg__Msg res;
  OOC_SymbolTable_Builder__Builder stb;
  OOC_INT32 fp;
  Channel__Channel ch;
  BinaryRider__Writer w;
  OOC_INT32 i;
  OOC_SymbolTable__ModuleRef mr;
  OOC_INT32 len;

  i0 = (OOC_INT32)IO_Memory__Tmp("", 1, 3, (void*)(OOC_INT32)&res);
  i1 = (OOC_INT32)res;
  i1 = i1==(OOC_INT32)0;
  mem = (IO_Memory__Channel)i0;
  if (!i1) goto l21;
  i1 = (OOC_INT32)symTab;
  i2 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i1, OOC_TRUE);
  OOC_SymbolTable__Prune((OOC_SymbolTable__Module)i1, (ADT_Dictionary__Dictionary)i2);
  i2 = (OOC_INT32)OOC_SymbolTable_Builder__New();
  stb = (OOC_SymbolTable_Builder__Builder)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 697)))), OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable)),OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable)((OOC_SymbolTable_Builder__Builder)i2, (Channel__Channel)i0, (OOC_SymbolTable__Module)i1, (void*)(OOC_INT32)&res);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 768))+8);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 773))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 745)))), IO_Memory__ChannelDesc_Fingerprint)),IO_Memory__ChannelDesc_Fingerprint)((IO_Memory__Channel)i0, (void*)(OOC_INT32)&fp, 4, 0, i2);
  i2 = (OOC_INT32)res;
  i2 = i2==(OOC_INT32)0;
  if (!i2) goto l21;
  i2 = (OOC_INT32)m;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 825)))), OOC_Repository__ModuleDesc_GetOutputChannel)),OOC_Repository__ModuleDesc_GetOutputChannel)((OOC_Repository__Module)i2, 1, OOC_TRUE, (void*)(OOC_INT32)&res);
  i3 = (OOC_INT32)res;
  i3 = i3==(OOC_INT32)0;
  ch = (Channel__Channel)i2;
  if (!i3) goto l21;
  i3 = (OOC_INT32)BinaryRider__ConnectWriter((Channel__Channel)i2);
  w = (BinaryRider__Writer)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 968)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i3, (void*)(OOC_INT32)OOC_SymbolTable_Builder__magicNumber, 5, 0, 4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1041)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i3, (void*)(OOC_INT32)&fp, 4, 0, 4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1405))+64);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 1419)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1385)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i3, i4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1458))+64);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 1472)), (OOC_INT32)0);
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l14;
  i5=0;
l9_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1504))+64);
  i6 = _check_pointer(i6, 1518);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 1518))*4);
  mr = (OOC_SymbolTable__ModuleRef)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 1559));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 1559));
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 1564)), (OOC_INT32)0);
  i7 = Strings__Length((void*)(_check_pointer(i7, 1564)), i8);
  len = i7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1581)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i3, i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 1624));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1610)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i3, (void*)(_check_pointer(i8, 1629)), -1, 0, i7);
  i6 = *(OOC_INT32*)((_check_pointer(i6, 1661))+4);
  fp = i6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1688)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i3, (void*)(OOC_INT32)&fp, 4, 0, 4);
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l9_loop;
l14:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 1777))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1762)))), IO_Memory__ChannelDesc_CopyToWriter)),IO_Memory__ChannelDesc_CopyToWriter)((IO_Memory__Channel)i0, (Channel__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1810)))), &_td_Files__FileDesc, 1810)), 1815)))), Files__FileDesc_Register)),Files__FileDesc_Register)((Files__File)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1810)))), &_td_Files__FileDesc, 1810)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 1839)))), Channel__ChannelDesc_Close)),Channel__ChannelDesc_Close)((Channel__Channel)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 1876));
  res = (Msg__Msg)i0;
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l21;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 1942));
  res = (Msg__Msg)i0;
  
l21:
  i0 = (OOC_INT32)res;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l24;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2032)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
l24:
  return;
  ;
}

void OOC_OOC_Auxiliary_WriteSymbolFile_init(void) {

  return;
  ;
}

/* --- */
