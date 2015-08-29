#include <OOC/Package.oh>
#include <IntStr.oh>
#include <LongStrings.oh>
#include <Out.oh>
#include <StdChannels.oh>
#include <Strings.oh>
#include <IO/FileChannel.oh>
#include <ADT/StringBuffer.oh>
#include <OS/Files.oh>
#include <OS/ProcessManagement.oh>
#include <URI.oh>
#include <URI/Scheme/File.oh>
#include <XML/UnicodeCodec/Latin1.oh>
#include <XML/Locator.oh>
#include <XML/DTD.oh>
#include <XML/Builder.oh>
#include <XML/Writer.oh>
#include <Config/Parser.oh>
#include <Config/Value/String.oh>
#include <Config/Value/Boolean.oh>
#include <Config/Value/Integer.oh>
#include <OOC/Logger.oh>
#include <OOC/Config.oh>
typedef OOC_CHAR8 OOC_Package__URIBuffer[1024];
#define OOC_Package__rootPackage "package"
#define OOC_Package__rootRepository "repository"
#define OOC_Package__pkgInfoSubdir "/pkginfo"
#define OOC_Package__pkgInfoFile "/pkginfo.xml"
#define OOC_Package__packageData "pkginfo.xml"
static Object__String OOC_Package__stringType;
#define OOC_Package__invalidContent 0
#define OOC_Package__invalidRootName 1
#define OOC_Package__invalidCharData 2
#define OOC_Package__invalidAttribute 3
#define OOC_Package__junkAtEndOfElement 4
#define OOC_Package__requireNameAttribute 5
#define OOC_Package__requireVersionChild 6
#define OOC_Package__requireCurrentAttribute 7
#define OOC_Package__requireRevisionAttribute 8
#define OOC_Package__requireMainModuleAttribute 9
#define OOC_Package__requireSourceDirAttribute 10
#define OOC_Package__requireTypeAttribute 11
#define OOC_Package__requireFileOrFileSet 12
#define OOC_Package__requireDefine 13
#define OOC_Package__notUnsignedInteger 14
#define OOC_Package__requireCharacterData 15
#define OOC_Package__unknownType 16
#define OOC_Package__invalidValue 17
static OOC_Package__ErrorContext OOC_Package__packageContext;
static OOC_Package__Version OOC_Package__NewVersion(void);
static OOC_Package__Executable OOC_Package__NewExecutable(void);
static OOC_Package__Library OOC_Package__NewLibrary(void);
static void OOC_Package__InitFileData(OOC_Package__FileData fdata);
static OOC_Package__FileSet OOC_Package__NewFileSet(void);
static void OOC_Package__MergeConfig(OOC_Repository__PkgInfo pkg, Config_Section_Options__Section options, Config_Section_Options__Section pragmas);
static OOC_Package__Package OOC_Package__NewPackage(void);
static OOC_Package__Repository OOC_Package__NewRepository(void);
static Object__String OOC_Package__StringAttr(XML_Builder__Attribute att);
static OOC_CHAR8 OOC_Package__AtElement(Config_Parser__Node node, const OOC_CHAR16 elementName__ref[], OOC_LEN elementName_0d);
static void OOC_Package__ParseKeyValue(Config_Parser__Element elem, ADT_ArrayList__ArrayList list, Config_Section_Options__Section options, Object__String defaultType, XML_Locator__ErrorListener errorListener, OOC_Error__List errList);
static OOC_Package__Package OOC_Package__ProcessPackage(Config_Parser__Element root, XML_Locator__ErrorListener errorListener, OOC_Error__List errList);
static OOC_Package__Repository OOC_Package__ProcessRepository(Config_Parser__Element root, XML_Locator__ErrorListener errorListener, OOC_Error__List errList);
static OOC_Repository__PkgInfo OOC_Package__ParseFile(const OOC_CHAR8 fileName__ref[], volatile OOC_LEN fileName_0d, volatile OOC_CHAR8 requirePackage, volatile OOC_Error__List *errList);
static void OOC_Package__WriteKeyValue(XML_Writer__Writer w, const OOC_CHAR8 tag__ref[], OOC_LEN tag_0d, ADT_ArrayList__ArrayList list);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Package__URIBuffer = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "URIBuffer", 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Package__Version = { (RT0__Struct[]){&_td_OOC_Package__VersionDesc}, NULL, &_mid, "Version", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__VersionDesc = { (RT0__Struct[]){&_td_OOC_Package__VersionDesc}, (void*[]){}, &_mid, "VersionDesc", 44, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__860 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_Package__Executable = { (RT0__Struct[]){&_td_OOC_Package__ExecutableDesc}, NULL, &_mid, "Executable", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__ExecutableDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_Package__ExecutableDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "ExecutableDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__Library = { (RT0__Struct[]){&_td_OOC_Package__LibraryDesc}, NULL, &_mid, "Library", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__LibraryDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_Package__LibraryDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "LibraryDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__FileData = { (RT0__Struct[]){&_td_OOC_Package__FileDataDesc}, NULL, &_mid, "FileData", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__FileDataDesc = { (RT0__Struct[]){&_td_OOC_Package__FileDataDesc}, (void*[]){}, &_mid, "FileDataDesc", 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__File = { (RT0__Struct[]){&_td_OOC_Package__FileDesc}, NULL, &_mid, "File", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__FileDesc = { (RT0__Struct[]){&_td_OOC_Package__FileDataDesc,&_td_OOC_Package__FileDesc}, (void*[]){}, &_mid, "FileDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__FileSet = { (RT0__Struct[]){&_td_OOC_Package__FileSetDesc}, NULL, &_mid, "FileSet", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__FileSetDesc = { (RT0__Struct[]){&_td_OOC_Package__FileDataDesc,&_td_OOC_Package__FileSetDesc}, (void*[]){(void*)OOC_Package__FileSetDesc_Append}, &_mid, "FileSetDesc", 20, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__KeyValue = { (RT0__Struct[]){&_td_OOC_Package__KeyValueDesc}, NULL, &_mid, "KeyValue", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__KeyValueDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_Package__KeyValueDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "KeyValueDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__Package = { (RT0__Struct[]){&_td_OOC_Package__PackageDesc}, NULL, &_mid, "Package", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__PackageDesc = { (RT0__Struct[]){&_td_OOC_Repository__PkgInfoDesc,&_td_OOC_Package__PackageDesc}, (void*[]){}, &_mid, "PackageDesc", 28, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__Repository = { (RT0__Struct[]){&_td_OOC_Package__RepositoryDesc}, NULL, &_mid, "Repository", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__RepositoryDesc = { (RT0__Struct[]){&_td_OOC_Repository__PkgInfoDesc,&_td_OOC_Package__RepositoryDesc}, (void*[]){(void*)OOC_Package__RepositoryDesc_MergePackage}, &_mid, "RepositoryDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__ErrorContext = { (RT0__Struct[]){&_td_OOC_Package__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_XML_Error__ContextDesc,&_td_OOC_Package__ErrorContextDesc}, (void*[]){(void*)OOC_Package__ErrorContextDesc_GetTemplate,(void*)XML_Error__ContextDesc_SetString,(void*)XML_Error__ContextDesc_WriteTemplate}, &_mid, "ErrorContextDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_Package__3049 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Package__8507 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__8496 = { (RT0__Struct[]){&_td_OOC_Package__8507}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__13844 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__13833 = { (RT0__Struct[]){&_td_OOC_Package__13844}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Package__14111 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__15382 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Package__18586 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_Package__18788 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Package__28751 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__29461 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__31051 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__31163 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Package__31193 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_Package__31832 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__34917 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__36152 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__36204 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__36613 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__37203 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Package__37456 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Package", (RT0__Struct[]) { &_td_OOC_Package__URIBuffer, &_td_OOC_Package__Version, &_td_OOC_Package__VersionDesc, &_td_OOC_Package__Executable, &_td_OOC_Package__ExecutableDesc, &_td_OOC_Package__Library, &_td_OOC_Package__LibraryDesc, &_td_OOC_Package__FileData, &_td_OOC_Package__FileDataDesc, &_td_OOC_Package__File, &_td_OOC_Package__FileDesc, &_td_OOC_Package__FileSet, &_td_OOC_Package__FileSetDesc, &_td_OOC_Package__KeyValue, &_td_OOC_Package__KeyValueDesc, &_td_OOC_Package__Package, &_td_OOC_Package__PackageDesc, &_td_OOC_Package__Repository, &_td_OOC_Package__RepositoryDesc, &_td_OOC_Package__ErrorContext, &_td_OOC_Package__ErrorContextDesc, NULL } };

extern void OOC_OOC_Package_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Package_init();
}

static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
static void* _c7;
static void* _c8;
static void* _c9;
static void* _c10;
static void* _c11;
static void* _c12;
static void* _c13;
static void* _c14;
static void* _c15;
/* --- */
