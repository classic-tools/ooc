#include <OOC/SymbolTable/Builder.oh>
#include <Out.oh>
#include <Strings.oh>
#include <ADT/Storable.oh>
#include <ADT/Object/Storage.oh>
OOC_SymbolTable_Builder__AutoImport *OOC_SymbolTable_Builder__autoImport;
OOC_INT8 OOC_SymbolTable_Builder__doAutoImport;
OOC_CHAR8 OOC_SymbolTable_Builder__magicNumber[5];
static void OOC_SymbolTable_Builder__EvalContext(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Type type);
static OOC_SymbolTable_Builder__Name OOC_SymbolTable_Builder__N(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SymbolTable_Builder__Builder = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__BuilderDesc}, NULL, &_mid, "Builder", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__BuilderDesc = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__BuilderDesc}, (void*[]){(void*)OOC_SymbolTable_Builder__BuilderDesc_Finalize,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewArray,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewImport,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewModule,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPointer,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPredefType,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewQualType,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewRecord,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewRedirect,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypeName,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypePars,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable,(void*)OOC_SymbolTable_Builder__BuilderDesc_SetClass,(void*)OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable}, &_mid, "BuilderDesc", 1, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__AutoImport = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImportDesc}, NULL, &_mid, "AutoImport", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__1977 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Name = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__1977}, NULL, &_mid, "Name", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__AutoImportDesc = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImportDesc}, (void*[]){}, &_mid, "AutoImportDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2176 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__Name}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2165 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__2176}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2851 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImport}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2840 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__2851}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3028 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 5, 5, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__18184 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__20162 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 5, 5, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__21234 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SymbolTable:Builder", (RT0__Struct[]) { &_td_OOC_SymbolTable_Builder__Builder, &_td_OOC_SymbolTable_Builder__BuilderDesc, &_td_OOC_SymbolTable_Builder__AutoImport, &_td_OOC_SymbolTable_Builder__Name, &_td_OOC_SymbolTable_Builder__AutoImportDesc, NULL } };

extern void OOC_OOC_SymbolTable_Builder_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SymbolTable_Builder_init();
}

/* --- */
