#include <OOC/SymbolTable/Builder.oh>
#include <Out.oh>
#include <Strings.oh>
typedef struct OOC_SymbolTable_Builder__ReaderDesc *OOC_SymbolTable_Builder__Reader;
typedef struct OOC_SymbolTable_Builder__ReaderDesc {
  OOC_INT8 byteOrder;
  OOC_CHAR8 __pad1;
  OOC_CHAR8 __pad2;
  OOC_CHAR8 __pad3;
  IO__ByteChannel channel;
  OOC_INT32 objCounter;
  ADT_Object_Storage__ObjectArray objTab;
  OOC_INT32 typeCounter;
  ADT_Object_Storage__TypeArray typeTab;
  ADT_Object_Storage__CharBuffer name;
  ADT_Object_Storage__Reader docReader;
} OOC_SymbolTable_Builder__ReaderDesc;
OOC_SymbolTable_Builder__AutoImport *OOC_SymbolTable_Builder__autoImport;
OOC_INT8 OOC_SymbolTable_Builder__doAutoImport;
OOC_CHAR8 OOC_SymbolTable_Builder__magicNumber[5];
static void OOC_SymbolTable_Builder__EvalContext(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Type type);
static OOC_SymbolTable_Builder__Name OOC_SymbolTable_Builder__N(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SymbolTable_Builder__Builder = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__BuilderDesc}, NULL, &_mid, "Builder", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__BuilderDesc = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__BuilderDesc}, (void*[]){(void*)OOC_SymbolTable_Builder__BuilderDesc_Finalize,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewArray,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewImport,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewModule,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPointer,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPredefType,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewQualType,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewRecord,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewRedirect,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypeName,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypePars,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable,(void*)OOC_SymbolTable_Builder__BuilderDesc_SetClass,(void*)OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable}, &_mid, "BuilderDesc", 1, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Writer = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__WriterDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__WriterDesc,&_td_ADT_Storable__WriterDesc,&_td_ADT_Object_Storage__WriterDesc,&_td_OOC_SymbolTable__WriterDesc,&_td_OOC_SymbolTable_Builder__WriterDesc}, (void*[]){(void*)IO_BinaryRider__WriterDesc_SetByteOrder,(void*)IO_BinaryRider__WriterDesc_SetPos,(void*)IO_BinaryRider__WriterDesc_WriteBool,(void*)IO_BinaryRider__WriterDesc_WriteBytes,(void*)IO_BinaryRider__WriterDesc_WriteChar,(void*)IO_BinaryRider__WriterDesc_WriteInt,(void*)IO_BinaryRider__WriterDesc_WriteLChar,(void*)IO_BinaryRider__WriterDesc_WriteLInt,(void*)IO_BinaryRider__WriterDesc_WriteLReal,(void*)IO_BinaryRider__WriterDesc_WriteLString,(void*)IO_BinaryRider__WriterDesc_WriteNum,(void*)IO_BinaryRider__WriterDesc_WriteOrdered,(void*)IO_BinaryRider__WriterDesc_WriteReal,(void*)IO_BinaryRider__WriterDesc_WriteSInt,(void*)IO_BinaryRider__WriterDesc_WriteSet,(void*)IO_BinaryRider__WriterDesc_WriteStr,(void*)IO_BinaryRider__WriterDesc_WriteString,(void*)OOC_SymbolTable_Builder__WriterDesc_Disconnect,(void*)OOC_SymbolTable_Builder__WriterDesc_WriteObject,(void*)OOC_SymbolTable_Builder__WriterDesc_INIT}, &_mid, "WriterDesc", 288, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Reader = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__ReaderDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__ReaderDesc,&_td_ADT_Storable__ReaderDesc,&_td_ADT_Object_Storage__ReaderDesc,&_td_OOC_SymbolTable__ReaderDesc,&_td_OOC_SymbolTable_Builder__ReaderDesc}, (void*[]){(void*)IO_BinaryRider__ReaderDesc_ReadBool,(void*)IO_BinaryRider__ReaderDesc_ReadBytes,(void*)IO_BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)IO_BinaryRider__ReaderDesc_ReadChar,(void*)IO_BinaryRider__ReaderDesc_ReadInt,(void*)IO_BinaryRider__ReaderDesc_ReadLChar,(void*)IO_BinaryRider__ReaderDesc_ReadLInt,(void*)IO_BinaryRider__ReaderDesc_ReadLReal,(void*)IO_BinaryRider__ReaderDesc_ReadLString,(void*)IO_BinaryRider__ReaderDesc_ReadNum,(void*)IO_BinaryRider__ReaderDesc_ReadReal,(void*)IO_BinaryRider__ReaderDesc_ReadSInt,(void*)IO_BinaryRider__ReaderDesc_ReadSet,(void*)IO_BinaryRider__ReaderDesc_ReadStr,(void*)IO_BinaryRider__ReaderDesc_ReadString,(void*)IO_BinaryRider__ReaderDesc_SetByteOrder,(void*)IO_BinaryRider__ReaderDesc_SetPos,(void*)ADT_Object_Storage__ReaderDesc_Disconnect,(void*)ADT_Object_Storage__ReaderDesc_ReadObject,(void*)OOC_SymbolTable__ReaderDesc_INIT}, &_mid, "ReaderDesc", 284, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__AutoImport = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImportDesc}, NULL, &_mid, "AutoImport", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2338 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Name = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__2338}, NULL, &_mid, "Name", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__AutoImportDesc = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImportDesc}, (void*[]){}, &_mid, "AutoImportDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2537 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__Name}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2526 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__2537}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3212 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImport}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3201 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__3212}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3389 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 5, 5, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__20821 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__23786 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 5, 5, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__24854 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SymbolTable:Builder", (RT0__Struct[]) { &_td_OOC_SymbolTable_Builder__Builder, &_td_OOC_SymbolTable_Builder__BuilderDesc, &_td_OOC_SymbolTable_Builder__Writer, &_td_OOC_SymbolTable_Builder__WriterDesc, &_td_OOC_SymbolTable_Builder__Reader, &_td_OOC_SymbolTable_Builder__ReaderDesc, &_td_OOC_SymbolTable_Builder__AutoImport, &_td_OOC_SymbolTable_Builder__Name, &_td_OOC_SymbolTable_Builder__AutoImportDesc, NULL } };

extern void OOC_OOC_SymbolTable_Builder_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SymbolTable_Builder_init();
}

/* --- */
