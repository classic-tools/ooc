#include "OOC/SSA/CSE.oh"
#include "OOC/SSA/Blocker.oh"
#include "OOC/SSA/Opcode.oh"
#include "RT0.oh"
#include "Language/String0.oh"
static void OOC_SSA_CSE__InitPartition(OOC_SSA_CSE__Partition p);
static OOC_SSA_CSE__Partition OOC_SSA_CSE__NewPartition();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_CSE__991 = { (RT0__Struct[]){&_td_OOC_SSA__Result}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_CSE__ResultList = { (RT0__Struct[]){&_td_OOC_SSA_CSE__991}, NULL, &_mid, "ResultList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_CSE__Partition = { (RT0__Struct[]){&_td_OOC_SSA_CSE__PartitionDesc}, NULL, &_mid, "Partition", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_CSE__1080 = { (RT0__Struct[]){&_td_OOC_SSA_CSE__Partition}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_CSE__ChildrenList = { (RT0__Struct[]){&_td_OOC_SSA_CSE__1080}, NULL, &_mid, "ChildrenList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_CSE__PartitionDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA_CSE__PartitionDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)ADT_Object__ObjectDesc_ToString,(void*)OOC_SSA_CSE__PartitionDesc_Add}, &_mid, "PartitionDesc", 32, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_CSE__4130 = { (RT0__Struct[]){&_td_OOC_SSA_CSE__Partition}, NULL, &_mid, NULL, 300, 75, RT0__strArray };
RT0__StructDesc _td_OOC_SSA_CSE__6062 = { (RT0__Struct[]){&_td_OOC_SSA__Result}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:CSE", (RT0__Struct[]) { &_td_OOC_SSA_CSE__ResultList, &_td_OOC_SSA_CSE__Partition, &_td_OOC_SSA_CSE__ChildrenList, &_td_OOC_SSA_CSE__PartitionDesc, NULL } };

extern void OOC_OOC_SSA_CSE_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_CSE_init();
}

/* --- */
