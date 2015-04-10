#include "OOC/Repository.oh"
#include "Strings.oh"
#include "OS/Path.oh"
#include "OOC/Logger.oh"
#include "OOC/SymbolTable/Builder.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Repository__URIBuffer = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "URIBuffer", 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Repository__PkgInfo = { (RT0__Struct[]){&_td_OOC_Repository__PkgInfoDesc}, NULL, &_mid, "PkgInfo", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Repository__PkgInfoDesc = { (RT0__Struct[]){&_td_OOC_Repository__PkgInfoDesc}, (void*[]){}, &_mid, "PkgInfoDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Repository__Repository = { (RT0__Struct[]){&_td_OOC_Repository__RepositoryDesc}, NULL, &_mid, "Repository", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Repository__RepositoryDesc = { (RT0__Struct[]){&_td_OOC_Repository__RepositoryDesc}, (void*[]){(void*)OOC_Repository__RepositoryDesc_DumpContent,(void*)OOC_Repository__RepositoryDesc_GetDefaultSubdir,(void*)OOC_Repository__RepositoryDesc_GetDefaultSuffix,(void*)OOC_Repository__RepositoryDesc_GetLocalPath,(void*)OOC_Repository__RepositoryDesc_GetModule,(void*)OOC_Repository__RepositoryDesc_GetModuleByURI,(void*)OOC_Repository__RepositoryDesc_GetResource,(void*)OOC_Repository__RepositoryDesc_SetPackageInfo}, &_mid, "RepositoryDesc", 12, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Repository__Module = { (RT0__Struct[]){&_td_OOC_Repository__ModuleDesc}, NULL, &_mid, "Module", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Repository__Import = { (RT0__Struct[]){&_td_OOC_Repository__ImportDesc}, NULL, &_mid, "Import", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Repository__ImportDesc = { (RT0__Struct[]){&_td_OOC_Repository__ImportDesc}, (void*[]){}, &_mid, "ImportDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Repository__ModuleRef = { (RT0__Struct[]){&_td_OOC_Repository__ModuleRef}, (void*[]){}, &_mid, "ModuleRef", 16, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Repository__ModuleDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_OOC_Repository__ModuleDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)ADT_Object__ObjectDesc_ToString,(void*)OOC_Repository__ModuleDesc_CreateOutputDir,(void*)OOC_Repository__ModuleDesc_FileExists,(void*)OOC_Repository__ModuleDesc_GetImportedModule,(void*)OOC_Repository__ModuleDesc_GetInputBuffer,(void*)OOC_Repository__ModuleDesc_GetOutputChannel,(void*)OOC_Repository__ModuleDesc_GetTimeStamp,(void*)OOC_Repository__ModuleDesc_GetURI,(void*)OOC_Repository__ModuleDesc_MatchesURI,(void*)OOC_Repository__ModuleDesc_ReadSymbolFile,(void*)OOC_Repository__ModuleDesc_SetFingerprint,(void*)OOC_Repository__ModuleDesc_SetInterfaceData}, &_mid, "ModuleDesc", 36, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Repository__3268 = { (RT0__Struct[]){&_td_OOC_Repository__ModuleRef}, NULL, &_mid, NULL, 16, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__3257 = { (RT0__Struct[]){&_td_OOC_Repository__3268}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Repository__11608 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__12493 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__15045 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__15506 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__17549 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__18353 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Repository__19445 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Repository", (RT0__Struct[]) { &_td_OOC_Repository__URIBuffer, &_td_OOC_Repository__PkgInfo, &_td_OOC_Repository__PkgInfoDesc, &_td_OOC_Repository__Repository, &_td_OOC_Repository__RepositoryDesc, &_td_OOC_Repository__Module, &_td_OOC_Repository__Import, &_td_OOC_Repository__ImportDesc, &_td_OOC_Repository__ModuleRef, &_td_OOC_Repository__ModuleDesc, NULL } };

extern void OOC_OOC_Repository_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Repository_init();
}

/* --- */
