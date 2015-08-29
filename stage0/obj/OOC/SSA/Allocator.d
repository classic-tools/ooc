#include <OOC/SSA/Allocator.oh>
#include <Log.oh>
#include <IntStr.oh>
#include <Strings.oh>
#include <Object.oh>
#include <ADT/ArrayList.oh>
#include <OOC/SSA/Opnd.oh>
#include <OOC/SSA/Result.oh>
#include <OOC/SSA/IGraph.oh>
#include <OOC/SymbolTable/Predef.oh>
typedef OOC_SSA_Schedule__Block *OOC_SSA_Allocator__BlockList;
typedef Object__String *OOC_SSA_Allocator__NameArray;
typedef struct OOC_SSA_Allocator__RegisterFileDesc *OOC_SSA_Allocator__RegisterFile;
typedef OOC_SSA_Allocator__RegisterFile *OOC_SSA_Allocator__RegisterFiles;
typedef struct OOC_SSA_Allocator__RegisterFileDesc {
  OOC_INT8 registerType;
  OOC_CHAR8 __pad1;
  OOC_CHAR8 __pad2;
  OOC_CHAR8 __pad3;
  ADT_ArrayList__ArrayList resultList;
  ADT_ArrayList__ArrayList blockList;
  OOC_SSA_IGraph__Graph iGraph;
  OOC_INT32 maxColor;
  OOC_SSA_Allocator__NameArray names;
} OOC_SSA_Allocator__RegisterFileDesc;
typedef struct OOC_SSA_Allocator__LiveDataDesc *OOC_SSA_Allocator__LiveData;
typedef struct OOC_SSA_Allocator__LiveDataDesc {
  OOC_INT32 outgoingJumps;
  OOC_INT32 knownJumps;
  OOC_SSA_IGraph__Vector live;
} OOC_SSA_Allocator__LiveDataDesc;
OOC_SSA__Result OOC_SSA_Allocator__markInPlace;
static OOC_SSA_Allocator__RegisterFile OOC_SSA_Allocator__NewRegisterFile(OOC_INT8 registerType);
static OOC_SSA_Allocator__LiveData OOC_SSA_Allocator__NewLiveData(OOC_SSA_IGraph__Graph g, OOC_INT32 outgoingJumps);
static OOC_SSA_Allocator__BlockList OOC_SSA_Allocator__GetBlockList(OOC_SSA_Schedule__Block enterBlock, OOC_SSA_Schedule__Block exitBlock);
static OOC_SSA_Allocator__RegisterFiles OOC_SSA_Allocator__GetRegisterFiles();
static OOC_SSA_Allocator__RegisterFiles OOC_SSA_Allocator__IdentifyResults(OOC_SSA_Allocator__BlockList blockList, ADT_Dictionary__Dictionary inPlaceEval);
static void OOC_SSA_Allocator__AddToCollect(OOC_SSA_Schedule__Block loopHead, OOC_SSA__Result res);
static OOC_SSA_Schedule__Block OOC_SSA_Allocator__SweepLiveSet(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block b, OOC_SSA_IGraph__Vector live);
static void OOC_SSA_Allocator__AssignRegisterFile(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block enterBlock, OOC_SSA_Schedule__Block exitBlock, ADT_Dictionary__Dictionary registerMap);
static void OOC_SSA_Allocator__CollectCrossLoopResults(OOC_SSA_Allocator__RegisterFile rf, OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__Block closestLoop);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_Allocator__1233 = { (RT0__Struct[]){&_td_OOC_SSA_Schedule__Block}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Allocator__BlockList = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__1233}, NULL, &_mid, "BlockList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__1283 = { (RT0__Struct[]){&_td_Object__String}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Allocator__NameArray = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__1283}, NULL, &_mid, "NameArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__RegisterFile = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__RegisterFileDesc}, NULL, &_mid, "RegisterFile", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__1383 = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__RegisterFile}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Allocator__RegisterFiles = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__1383}, NULL, &_mid, "RegisterFiles", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__RegisterFileDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA_Allocator__RegisterFileDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "RegisterFileDesc", 24, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Allocator__LiveData = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__LiveDataDesc}, NULL, &_mid, "LiveData", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__LiveDataDesc = { (RT0__Struct[]){&_td_OOC_SSA_Schedule__InfoDesc,&_td_OOC_SSA_Allocator__LiveDataDesc}, (void*[]){}, &_mid, "LiveDataDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Allocator__BlockInfo = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__BlockInfoDesc}, NULL, &_mid, "BlockInfo", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__BlockInfoDesc = { (RT0__Struct[]){&_td_OOC_SSA_Schedule__InfoDesc,&_td_OOC_SSA_Allocator__BlockInfoDesc}, (void*[]){}, &_mid, "BlockInfoDesc", 28, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Allocator__3161 = { (RT0__Struct[]){&_td_OOC_SSA__Instr}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Allocator__3150 = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__3161}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__3205 = { (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Allocator__3194 = { (RT0__Struct[]){&_td_OOC_SSA_Allocator__3205}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Allocator__17736 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 16, 16, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:Allocator", (RT0__Struct[]) { &_td_OOC_SSA_Allocator__BlockList, &_td_OOC_SSA_Allocator__NameArray, &_td_OOC_SSA_Allocator__RegisterFile, &_td_OOC_SSA_Allocator__RegisterFiles, &_td_OOC_SSA_Allocator__RegisterFileDesc, &_td_OOC_SSA_Allocator__LiveData, &_td_OOC_SSA_Allocator__LiveDataDesc, &_td_OOC_SSA_Allocator__BlockInfo, &_td_OOC_SSA_Allocator__BlockInfoDesc, NULL } };

extern void OOC_OOC_SSA_Allocator_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_Allocator_init();
}

/* --- */
