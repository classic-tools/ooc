#include <OOC/SSA/CSE.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_SSA_CSE__InitPartition(OOC_SSA_CSE__Partition p) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)p;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)(_check_pointer(i0, 2531)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2560))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2588))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2611))+12) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_CSE__ResultList.baseTypes[0], 4));
  i = 0;
  i1=0;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2676))+12);
  i2 = _check_pointer(i2, 2683);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  *(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 2683))*4) = (OOC_INT32)0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=3;
  if (i2) goto l1_loop;
l5:
  *(OOC_UINT8*)((_check_pointer(i0, 2710))+16) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 2741))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 2765))+24) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 2797))+28) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_CSE__ChildrenList.baseTypes[0], 4));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2833))+28);
  i0 = _check_pointer(i0, 2848);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  *(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 2848))*4) = (OOC_INT32)0;
  return;
  ;
}

static OOC_SSA_CSE__Partition OOC_SSA_CSE__NewPartition() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_CSE__Partition.baseTypes[0]);
  OOC_SSA_CSE__InitPartition((OOC_SSA_CSE__Partition)i0);
  return (OOC_SSA_CSE__Partition)i0;
  ;
}

void OOC_SSA_CSE__PartitionDesc_Add(OOC_SSA_CSE__Partition p, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_CSE__Partition old;
  OOC_INT32 i;
  OOC_SSA_CSE__ResultList _new;
  auto void OOC_SSA_CSE__PartitionDesc_Add_Swap(OOC_SSA__Result *_i1, OOC_SSA__Result *_i2);
    
    void OOC_SSA_CSE__PartitionDesc_Add_Swap(OOC_SSA__Result *_i1, OOC_SSA__Result *_i2) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*_i1;
      i1 = (OOC_INT32)*_i2;
      *_i1 = (OOC_SSA__Result)i1;
      *_i2 = (OOC_SSA__Result)i0;
      return;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3293))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3380))+16);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3387)))), &_td_OOC_SSA_CSE__PartitionDesc, 3387);
  old = (OOC_SSA_CSE__Partition)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3412))+8);
  i2 = i2>0;
  if (!i2) goto l14;
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3463))+12);
  i2 = _check_pointer(i2, 3470);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT32, 3470))*4);
  i2 = i2!=i0;
  if (i2) goto l7;
  i0=0;
  goto l13;
l7:
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3463))+12);
  i3 = _check_pointer(i3, 3470);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3470))*4);
  i3 = i3!=i0;
  if (i3) goto l8_loop;
l12:
  i0=i2;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3535))+12);
  i2 = _check_pointer(i2, 3542);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3550))+12);
  i4 = _check_pointer(i4, 3557);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3561))+8);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  OOC_SSA_CSE__PartitionDesc_Add_Swap((void*)(i2+(_check_index(i0, i3, OOC_UINT32, 3542))*4), (void*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 3557))*4));
l14:
  i0 = (OOC_INT32)old;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3598))+8);
  *(OOC_INT32*)((_check_pointer(i0, 3598))+8) = (i1-1);
l15:
  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3641))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3626))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3648)), (OOC_INT32)0);
  i1 = i2==i1;
  if (!i1) goto l34;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3711))+8);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_CSE__ResultList.baseTypes[0], (i1*2));
  _new = (OOC_SSA_CSE__ResultList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3743))+8);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l25;
  i3=0;
l20_loop:
  i4 = _check_pointer(i1, 3766);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3774))+12);
  i6 = _check_pointer(i6, 3781);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 3781))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 3766))*4) = i6;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l20_loop;
l25:
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3831)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 3813))+8);
  i4 = i3<=i2;
  i = i3;
  if (!i4) goto l33;
l28_loop:
  i4 = _check_pointer(i1, 3850);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 3850))*4) = (OOC_INT32)0;
  i3 = i3+1;
  i4 = i3<=i2;
  i = i3;
  if (i4) goto l28_loop;
l33:
  *(OOC_INT32*)((_check_pointer(i0, 3880))+12) = i1;
l34:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3915))+12);
  i1 = _check_pointer(i1, 3922);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3924))+8);
  i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i4 = (OOC_INT32)instr;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 3922))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3952))+8);
  *(OOC_INT32*)((_check_pointer(i0, 3952))+8) = (i1+1);
  *(OOC_INT32*)((_check_pointer(i4, 3970))+16) = i0;
  return;
  ;
}

void OOC_SSA_CSE__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_SSA_CSE__Partition opcodes[82][12];
  OOC_SSA_CSE__Partition worklist;
  OOC_SSA_CSE__Partition pList;
  OOC_SSA__Instr instr;
  OOC_SSA_CSE__Partition p;
  auto OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_AddPartition();
  auto OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_SplittedPartition(OOC_SSA_CSE__Partition p, OOC_INT32 opndIndex);
  auto void OOC_SSA_CSE__Transform_Split(const OOC_SSA__Result iList__ref[], OOC_LEN iList_0d, OOC_INT32 size);
  auto void OOC_SSA_CSE__Transform_Replace(OOC_SSA_CSE__Partition p);
    
    OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_AddPartition() {
      register OOC_INT32 i0,i1;
      OOC_SSA_CSE__Partition p;

      i0 = (OOC_INT32)OOC_SSA_CSE__NewPartition();
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = (OOC_INT32)worklist;
      *(OOC_INT32*)((_check_pointer(i0, 4390))+4) = i1;
      worklist = (OOC_SSA_CSE__Partition)i0;
      i1 = (OOC_INT32)pList;
      *(OOC_INT32*)(_check_pointer(i0, 4446)) = i1;
      pList = (OOC_SSA_CSE__Partition)i0;
      return (OOC_SSA_CSE__Partition)i0;
      ;
    }

    
    OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_SplittedPartition(OOC_SSA_CSE__Partition p, OOC_INT32 opndIndex) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      OOC_INT32 i;
      OOC_SSA_CSE__ChildrenList newList;
      OOC_INT32 j;
      OOC_SSA_CSE__Partition _new;

      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 4723))+24);
      i2 = opndIndex;
      _assert((i2!=i1), 127, 4702);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 4770))+24);
      i1 = i2>i1;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5971))+20);
      i1 = (OOC_INT32)OOC_SSA_CSE__Transform_SplittedPartition((OOC_SSA_CSE__Partition)i1, i2);
      _new = (OOC_SSA_CSE__Partition)i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 6035))+24);
      i0 = (OOC_INT32)OOC_SSA_CSE__Transform_SplittedPartition((OOC_SSA_CSE__Partition)i1, i0);
      return (OOC_SSA_CSE__Partition)i0;
      goto l36;
l3:
      i = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4949))+28);
      i1 = _check_pointer(i1, 4964);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT32, 4964))*4);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l8;
l6:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4993))+28);
      i1 = _check_pointer(i1, 5008);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT32, 5008))*4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5011))+24);
      i1 = i1!=i2;
      
l8:
      if (i1) goto l10;
      i1=0;
      goto l20;
l10:
      i1=0;
l11_loop:
      i1 = i1+1;
      i = i1;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4949))+28);
      i3 = _check_pointer(i3, 4964);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 4964))*4);
      i3 = i3!=(OOC_INT32)0;
      if (i3) goto l14;
      i3=OOC_FALSE;
      goto l16;
l14:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4993))+28);
      i3 = _check_pointer(i3, 5008);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 5008))*4);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 5011))+24);
      i3 = i3!=i2;
      
l16:
      if (i3) goto l11_loop;
l20:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5096))+28);
      i3 = _check_pointer(i3, 5111);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 5111))*4);
      i3 = i3==(OOC_INT32)0;
      if (i3) goto l23;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5602))+28);
      i0 = _check_pointer(i0, 5617);
      i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 5617))*4);
      return (OOC_SSA_CSE__Partition)i0;
      goto l36;
l23:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5153))+28);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5168)), (OOC_INT32)0);
      i4 = i1+1;
      i3 = i4==i3;
      if (!i3) goto l34;
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_CSE__ChildrenList.baseTypes[0], (i4*2));
      newList = (OOC_SSA_CSE__ChildrenList)i3;
      i5 = 0<=i1;
      j = 0;
      if (!i5) goto l33;
      i5=0;
l28_loop:
      i6 = _check_pointer(i3, 5265);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5273))+28);
      i8 = _check_pointer(i8, 5288);
      i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
      i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 5288))*4);
      *(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 5265))*4) = i8;
      i5 = i5+1;
      i6 = i5<=i1;
      j = i5;
      if (i6) goto l28_loop;
l33:
      *(OOC_INT32*)((_check_pointer(i0, 5323))+28) = i3;
l34:
      i3 = (OOC_INT32)OOC_SSA_CSE__Transform_AddPartition();
      _new = (OOC_SSA_CSE__Partition)i3;
      *(OOC_INT32*)((_check_pointer(i3, 5412))+20) = i0;
      *(OOC_INT32*)((_check_pointer(i3, 5442))+24) = i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5482))+28);
      i2 = _check_pointer(i2, 5497);
      i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_INT32*)(i2+(_check_index(i1, i5, OOC_UINT32, 5497))*4) = i3;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5520))+28);
      i0 = _check_pointer(i0, 5535);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      *(OOC_INT32*)(i0+(_check_index(i4, i1, OOC_UINT32, 5535))*4) = (OOC_INT32)0;
      return (OOC_SSA_CSE__Partition)i3;
l36:
      _failed_function(4541); return 0;
      ;
    }

    
    void OOC_SSA_CSE__Transform_Split(const OOC_SSA__Result iList__ref[], OOC_LEN iList_0d, OOC_INT32 size) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_ALLOCATE_VPAR(iList,OOC_SSA__Result ,iList_0d)
      OOC_INT32 nextResultCount;
      OOC_INT32 i;
      OOC_SSA__Result res;
      OOC_SSA__Opnd use;
      OOC_SSA_CSE__Partition p;
      auto void OOC_SSA_CSE__Transform_Split_MarkUnchanged(OOC_SSA_CSE__Partition worklist);
        
        void OOC_SSA_CSE__Transform_Split_MarkUnchanged(OOC_SSA_CSE__Partition worklist) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)worklist;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i0=OOC_FALSE;
          goto l5;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6508))+20);
          i0 = i0!=(OOC_INT32)0;
          
l5:
          if (!i0) goto l27;
l7_loop:
          i0 = (OOC_INT32)worklist;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6551))+20);
          i1 = *(OOC_INT32*)((_check_pointer(i1, 6561))+8);
          i1 = i1==0;
          if (i1) goto l10;
          i1=OOC_FALSE;
          goto l12;
l10:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6596))+20);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 6606))+16);
          
l12:
          if (i1) goto l14;
          i1=OOC_FALSE;
          goto l16;
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6641))+20);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6651))+28);
          i1 = _check_pointer(i1, 6666);
          i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 6666))*4);
          i1 = i1==(OOC_INT32)0;
          
l16:
          if (!i1) goto l18;
          *(OOC_UINT8*)((_check_pointer(i0, 6851))+16) = OOC_TRUE;
l18:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6916))+4);
          worklist = (OOC_SSA_CSE__Partition)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l21;
          i0=OOC_FALSE;
          goto l23;
l21:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6508))+20);
          i0 = i0!=(OOC_INT32)0;
          
l23:
          if (i0) goto l7_loop;
l27:
          return;
          ;
        }


      i0 = size;
      OOC_INITIALIZE_VPAR(iList__ref,iList,OOC_SSA__Result ,(iList_0d*4))
      i0 = i0!=0;
      if (!i0) goto l36;
l3_loop:
      i0 = size;
      i0 = i0-1;
      nextResultCount = 0;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l23;
      i1=0;i2=0;
l6_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)iList+(_check_index(i1, iList_0d, OOC_UINT32, 7382))*4);
      res = (OOC_SSA__Result)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7408))+12);
      use = (OOC_SSA__Opnd)i4;
      i5 = i4!=(OOC_INT32)0;
      if (!i5) goto l14;
l9_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7489))+12);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7496))+16);
      i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7554)))), OOC_SSA__OpndDesc_OpndIndex)),OOC_SSA__OpndDesc_OpndIndex)((OOC_SSA__Opnd)i4);
      i5 = (OOC_INT32)OOC_SSA_CSE__Transform_SplittedPartition((OOC_SSA_CSE__Partition)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7503)))), &_td_OOC_SSA_CSE__PartitionDesc, 7503)), i6);
      p = (OOC_SSA_CSE__Partition)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7593))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 7583)))), OOC_SSA_CSE__PartitionDesc_Add)),OOC_SSA_CSE__PartitionDesc_Add)((OOC_SSA_CSE__Partition)i5, (OOC_SSA__Instr)i6);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7625))+16);
      use = (OOC_SSA__Opnd)i4;
      i5 = i4!=(OOC_INT32)0;
      if (i5) goto l9_loop;
l14:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7679));
      i4 = i4!=(OOC_INT32)0;
      if (!i4) goto l18;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7877));
      *(OOC_INT32*)((OOC_INT32)iList+(_check_index(i2, iList_0d, OOC_UINT32, 7853))*4) = i3;
      i2 = i2+1;
      nextResultCount = i2;
      
l18:
      i1 = i1+1;
      i3 = i1<=i0;
      i = i1;
      if (i3) goto l6_loop;
l23:
      i0 = (OOC_INT32)worklist;
      OOC_SSA_CSE__Transform_Split_MarkUnchanged((OOC_SSA_CSE__Partition)i0);
      i0 = (OOC_INT32)pList;
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l31;
l26_loop:
      *(OOC_INT32*)((_check_pointer(i0, 8103))+20) = (OOC_INT32)0;
      *(OOC_INT32*)((_check_pointer(i0, 8133))+24) = -1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8166))+28);
      i1 = _check_pointer(i1, 8181);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 8181))*4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8209));
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l26_loop;
l31:
      i0 = nextResultCount;
      size = i0;
      i0 = i0!=0;
      if (i0) goto l3_loop;
l36:
      return;
      ;
    }

    
    void OOC_SSA_CSE__Transform_Replace(OOC_SSA_CSE__Partition p) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA_Blocker__DependenceData dd;
      OOC_INT32 i;
      OOC_INT32 j;
      OOC_SSA__Instr iInstr;
      OOC_SSA__Instr jInstr;
      auto void OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith(OOC_SSA__Instr x, OOC_SSA__Instr y);
        
        void OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith(OOC_SSA__Instr x, OOC_SSA__Instr y) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA__Result rx;
          OOC_SSA__Result ry;

          i0 = (OOC_INT32)x;
          rx = (OOC_SSA__Result)i0;
          i1 = (OOC_INT32)y;
          ry = (OOC_SSA__Result)i1;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l3;
          i2=OOC_FALSE;
          goto l5;
l3:
          i2 = i1!=(OOC_INT32)0;
          
l5:
          if (!i2) goto l17;
l8_loop:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8703)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8741));
          rx = (OOC_SSA__Result)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8763));
          ry = (OOC_SSA__Result)i1;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l11;
          i2=OOC_FALSE;
          goto l13;
l11:
          i2 = i1!=(OOC_INT32)0;
          
l13:
          if (i2) goto l8_loop;
l17:
          _assert((i0==(OOC_INT32)0), 127, 8855);
          _assert((i1==(OOC_INT32)0), 127, 8882);
          return;
          ;
        }


      i0 = (OOC_INT32)pb;
      i0 = (OOC_INT32)OOC_SSA_Blocker__GetDependenceData((OOC_SSA__ProcBlock)i0);
      i1 = (OOC_INT32)p;
      i1 = i1!=(OOC_INT32)0;
      dd = (OOC_SSA_Blocker__DependenceData)i0;
      if (!i1) goto l41;
l3_loop:
      i0 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9026))+8);
      i1 = i1>1;
      if (!i1) goto l36;
      i = 0;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 9083))+8);
      i0 = 0!=i0;
      if (!i0) goto l36;
      i0=0;
l8_loop:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9111))+12);
      i2 = _check_pointer(i2, 9118);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 9118))*4);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l30;
      i0 = i0+1;
      j = i0;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 9184))+8);
      i1 = i0!=i1;
      if (!i1) goto l30;
l13_loop:
      i1 = (OOC_INT32)p;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9216))+12);
      i2 = _check_pointer(i2, 9223);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 9223))*4);
      i2 = i2!=(OOC_INT32)0;
      if (!i2) goto l24;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9268))+12);
      i2 = _check_pointer(i2, 9275);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i4 = i;
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 9275))*4);
      i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9283)))), &_td_OOC_SSA__InstrDesc, 9283);
      iInstr = (OOC_SSA__Instr)i2;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9320))+12);
      i1 = _check_pointer(i1, 9327);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT32, 9327))*4);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9335)))), &_td_OOC_SSA__InstrDesc, 9335);
      jInstr = (OOC_SSA__Instr)i1;
      i3 = (OOC_INT32)dd;
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9366)))), OOC_SSA_Blocker__DependenceDataDesc_AvailableTo)),OOC_SSA_Blocker__DependenceDataDesc_AvailableTo)((OOC_SSA_Blocker__DependenceData)i3, (OOC_SSA__Instr)i2, (OOC_SSA__Instr)i1);
      if (i4) goto l22;
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9523)))), OOC_SSA_Blocker__DependenceDataDesc_AvailableTo)),OOC_SSA_Blocker__DependenceDataDesc_AvailableTo)((OOC_SSA_Blocker__DependenceData)i3, (OOC_SSA__Instr)i1, (OOC_SSA__Instr)i2);
      if (!i3) goto l24;
      OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith((OOC_SSA__Instr)i2, (OOC_SSA__Instr)i1);
      i0 = (OOC_INT32)p;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9635))+12);
      i1 = _check_pointer(i1, 9642);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = i;
      *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 9642))*4) = (OOC_INT32)0;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 9680))+8);
      i0 = i0-1;
      j = i0;
      
      goto l24;
l22:
      OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith((OOC_SSA__Instr)i1, (OOC_SSA__Instr)i2);
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9478))+12);
      i0 = _check_pointer(i0, 9485);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i2 = j;
      *(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 9485))*4) = (OOC_INT32)0;
l24:
      i0 = j;
      i0 = i0+1;
      j = i0;
      i1 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 9184))+8);
      i1 = i0!=i1;
      if (i1) goto l13_loop;
l30:
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = (OOC_INT32)p;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 9083))+8);
      i1 = i0!=i1;
      if (i1) goto l8_loop;
l36:
      i0 = (OOC_INT32)p;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9886));
      p = (OOC_SSA_CSE__Partition)i0;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l41:
      return;
      ;
    }


  i0 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9948)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i = 0;
  i1=0;
l1_loop:
  j = 0;
  i2=0;
l2_loop:
  *(OOC_INT32*)(((OOC_INT32)opcodes+((_check_index(i1, 82, OOC_UINT32, 10059))*48))+(_check_index(i2, 12, OOC_UINT32, 10061))*4) = (OOC_INT32)0;
  i2 = i2+1;
  j = i2;
  i3 = i2<=11;
  if (i3) goto l2_loop;
l6:
  i1 = i1+1;
  i = i1;
  i2 = i1<=81;
  if (i2) goto l1_loop;
l10:
  worklist = (OOC_SSA_CSE__Partition)(OOC_INT32)0;
  pList = (OOC_SSA_CSE__Partition)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10257))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l30;
l13_loop:
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10311)))), OOC_SSA__InstrDesc_IsConst)),OOC_SSA__InstrDesc_IsConst)((OOC_SSA__Instr)i0);
  if (i1) goto l16;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10331)))), OOC_SSA__InstrDesc_UniqueResult)),OOC_SSA__InstrDesc_UniqueResult)((OOC_SSA__Instr)i0);
  
  goto l18;
l16:
  i1=OOC_TRUE;
l18:
  if (i1) goto l24;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10560))+36);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 10574))+5);
  i0 = (OOC_INT32)*(OOC_INT32*)(((OOC_INT32)opcodes+((_check_index(i1, 82, OOC_UINT8, 10554))*48))+(_check_index(i0, 12, OOC_UINT8, 10567))*4);
  p = (OOC_SSA_CSE__Partition)i0;
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l25;
  i0 = (OOC_INT32)OOC_SSA_CSE__Transform_AddPartition();
  p = (OOC_SSA_CSE__Partition)i0;
  i1 = (OOC_INT32)instr;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 10666))+36);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 10681))+5);
  *(OOC_INT32*)(((OOC_INT32)opcodes+((_check_index(i2, 82, OOC_UINT8, 10660))*48))+(_check_index(i1, 12, OOC_UINT8, 10674))*4) = i0;
  
  goto l25;
l24:
  i0 = (OOC_INT32)OOC_SSA_CSE__Transform_AddPartition();
  p = (OOC_SSA_CSE__Partition)i0;
  
l25:
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10729)))), OOC_SSA_CSE__PartitionDesc_Add)),OOC_SSA_CSE__PartitionDesc_Add)((OOC_SSA_CSE__Partition)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10763))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l13_loop;
l30:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l41;
l33_loop:
  i0 = (OOC_INT32)worklist;
  p = (OOC_SSA_CSE__Partition)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10863))+4);
  worklist = (OOC_SSA_CSE__Partition)i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10890))+16);
  i1 = !i1;
  if (!i1) goto l36;
  *(OOC_UINT8*)((_check_pointer(i0, 10915))+16) = OOC_TRUE;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10951))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10951))+12);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10962))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10958)), (OOC_INT32)0);
  OOC_SSA_CSE__Transform_Split((void*)(_check_pointer(i1, 10958)), i2, i0);
l36:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l33_loop;
l41:
  i0 = (OOC_INT32)pList;
  OOC_SSA_CSE__Transform_Replace((OOC_SSA_CSE__Partition)i0);
  return;
  ;
}

void OOC_OOC_SSA_CSE_init(void) {

  return;
  ;
}

/* --- */
