#include <OOC/SSA/IGraph.oh>
#define OOC_SSA_IGraph__bitsPerSet 32
#define OOC_SSA_IGraph__emptySet 0
static void OOC_SSA_IGraph__InitGraph(OOC_SSA_IGraph__Graph g, OOC_INT32 size);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_IGraph__977 = { (RT0__Struct[]){&RT0__set32}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_IGraph__968 = { (RT0__Struct[]){&RT0__set32}, NULL, &_mid, NULL, 4, 2, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_IGraph__BitMatrix = { (RT0__Struct[]){&_td_OOC_SSA_IGraph__968}, NULL, &_mid, "BitMatrix", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_IGraph__1089 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_IGraph__ColorArray = { (RT0__Struct[]){&_td_OOC_SSA_IGraph__1089}, NULL, &_mid, "ColorArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_IGraph__1128 = { (RT0__Struct[]){&RT0__set32}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_IGraph__Vector = { (RT0__Struct[]){&_td_OOC_SSA_IGraph__1128}, NULL, &_mid, "Vector", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_IGraph__Graph = { (RT0__Struct[]){&_td_OOC_SSA_IGraph__GraphDesc}, NULL, &_mid, "Graph", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_IGraph__GraphDesc = { (RT0__Struct[]){&_td_OOC_SSA_IGraph__GraphDesc}, (void*[]){(void*)OOC_SSA_IGraph__GraphDesc_AddToLive,(void*)OOC_SSA_IGraph__GraphDesc_Clear,(void*)OOC_SSA_IGraph__GraphDesc_ColorGraphSimple,(void*)OOC_SSA_IGraph__GraphDesc_ColorGraphTrivial,(void*)OOC_SSA_IGraph__GraphDesc_Conflicts,(void*)OOC_SSA_IGraph__GraphDesc_CopyVector,(void*)OOC_SSA_IGraph__GraphDesc_In,(void*)OOC_SSA_IGraph__GraphDesc_Interfere,(void*)OOC_SSA_IGraph__GraphDesc_MergeVector,(void*)OOC_SSA_IGraph__GraphDesc_NewVector,(void*)OOC_SSA_IGraph__GraphDesc_RemoveFromLive,(void*)OOC_SSA_IGraph__GraphDesc_SymmetricMatrix}, &_mid, "GraphDesc", 8, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:IGraph", (RT0__Struct[]) { &_td_OOC_SSA_IGraph__BitMatrix, &_td_OOC_SSA_IGraph__ColorArray, &_td_OOC_SSA_IGraph__Vector, &_td_OOC_SSA_IGraph__Graph, &_td_OOC_SSA_IGraph__GraphDesc, NULL } };

extern void OOC_OOC_SSA_IGraph_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_IGraph_init();
}

/* --- */
