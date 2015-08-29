#include "OOC/Config/Repositories/FileSystem.oh"
#include "LongStrings.oh"
#include "Strings.oh"
#include "URI.oh"
#include "URI/Parser.oh"
#include "XML/DTD.oh"
#include "XML/Builder.oh"
#include "OOC/Repository/FileSystem.oh"
#define OOC_Config_Repositories_FileSystem__invalidAttribute 1
#define OOC_Config_Repositories_FileSystem__requireCharDataContent 2
#define OOC_Config_Repositories_FileSystem__invalidURI 3
static OOC_Config_Repositories_FileSystem__ErrorContext OOC_Config_Repositories_FileSystem__repositoriesContext;
static OOC_Config_Repositories_FileSystem__RepositoryEntry OOC_Config_Repositories_FileSystem__NewRepositoryEntry();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Config_Repositories_FileSystem__RepositoryEntry = { (RT0__Struct[]){&_td_OOC_Config_Repositories_FileSystem__RepositoryEntryDesc}, NULL, &_mid, "RepositoryEntry", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Repositories_FileSystem__RepositoryEntryDesc = { (RT0__Struct[]){&_td_OOC_Config_Repositories__RepositoryEntryDesc,&_td_OOC_Config_Repositories_FileSystem__RepositoryEntryDesc}, (void*[]){(void*)OOC_Config_Repositories_FileSystem__RepositoryEntryDesc_ProcessElement}, &_mid, "RepositoryEntryDesc", 68, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Config_Repositories_FileSystem__ErrorContext = { (RT0__Struct[]){&_td_OOC_Config_Repositories_FileSystem__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Repositories_FileSystem__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_XML_Error__ContextDesc,&_td_Config_Section__ErrorContextDesc,&_td_OOC_Config_Repositories_FileSystem__ErrorContextDesc}, (void*[]){(void*)OOC_Config_Repositories_FileSystem__ErrorContextDesc_GetTemplate,(void*)XML_Error__ContextDesc_SetString,(void*)XML_Error__ContextDesc_WriteTemplate}, &_mid, "ErrorContextDesc", 8, 3, RT0__strRecord };
RT0__StructDesc _td_OOC_Config_Repositories_FileSystem__1691 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Config_Repositories_FileSystem__2637 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 4096, 4096, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config:Repositories:FileSystem", (RT0__Struct[]) { &_td_OOC_Config_Repositories_FileSystem__RepositoryEntry, &_td_OOC_Config_Repositories_FileSystem__RepositoryEntryDesc, &_td_OOC_Config_Repositories_FileSystem__ErrorContext, &_td_OOC_Config_Repositories_FileSystem__ErrorContextDesc, NULL } };

extern void OOC_OOC_Config_Repositories_FileSystem_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_Repositories_FileSystem_init();
}

/* --- */
